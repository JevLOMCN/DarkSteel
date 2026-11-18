// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b694db0

UClass * __cdecl UDS_VM_ItemRepair_Target::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemRepair_Target.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemRepair_Target",
               &Z_Registration_Info_UClass_UDS_VM_ItemRepair_Target.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemRepair_Target,0x3e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemRepair_Target>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemRepair_Target>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemRepair_Target.InnerSingleton;
}

// UDS_VM_ItemRepair_Target @ 14b6984b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemRepair_Target * __thiscall
UDS_VM_ItemRepair_Target::UDS_VM_ItemRepair_Target
          (UDS_VM_ItemRepair_Target *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_Target__6B_;
  (this->VM_RepairTargetItem).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_RequiredTime).field0_0x0.DebugPtr = (UDS_VM_Required_Time *)0x0;
  (this->DescLabelText).StringTableType = None;
  (this->DescLabelText).StringTableID = 0;
  (this->DescLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescLabelText).StringEnumTableNameID.Number = 0;
  (this->DescLabelText).DateTime.Ticks = 0;
  (this->DescLabelText).TimeSpan.Ticks = 0;
  (this->DescLabelText).TimeExpressionType = None;
  (this->DescLabelText).IsExpression = false;
  (this->DescLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescLabelText).UniqueString.Data.ArrayNum = 0;
  (this->DescLabelText).UniqueString.Data.ArrayMax = 0;
  (this->DescLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescLabelText).FormatArgs.ArrayNum = 0;
  (this->DescLabelText).FormatArgs.ArrayMax = 0;
  (this->ExplanationLabelText).StringTableType = None;
  (this->ExplanationLabelText).StringTableID = 0;
  (this->ExplanationLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExplanationLabelText).StringEnumTableNameID.Number = 0;
  (this->ExplanationLabelText).DateTime.Ticks = 0;
  (this->ExplanationLabelText).TimeSpan.Ticks = 0;
  (this->ExplanationLabelText).TimeExpressionType = None;
  (this->ExplanationLabelText).IsExpression = false;
  (this->ExplanationLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExplanationLabelText).UniqueString.Data.ArrayNum = 0;
  (this->ExplanationLabelText).UniqueString.Data.ArrayMax = 0;
  (this->ExplanationLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplanationLabelText).FormatArgs.ArrayNum = 0;
  (this->ExplanationLabelText).FormatArgs.ArrayMax = 0;
  (this->DurabilityLabelText).StringTableType = None;
  (this->DurabilityLabelText).StringTableID = 0;
  (this->DurabilityLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DurabilityLabelText).StringEnumTableNameID.Number = 0;
  (this->DurabilityLabelText).DateTime.Ticks = 0;
  (this->DurabilityLabelText).TimeSpan.Ticks = 0;
  (this->DurabilityLabelText).TimeExpressionType = None;
  (this->DurabilityLabelText).IsExpression = false;
  (this->DurabilityLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DurabilityLabelText).UniqueString.Data.ArrayNum = 0;
  (this->DurabilityLabelText).UniqueString.Data.ArrayMax = 0;
  (this->DurabilityLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DurabilityLabelText).FormatArgs.ArrayNum = 0;
  (this->DurabilityLabelText).FormatArgs.ArrayMax = 0;
  (this->RepairMaterialTitleText).StringTableType = None;
  (this->RepairMaterialTitleText).StringTableID = 0;
  (this->RepairMaterialTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepairMaterialTitleText).StringEnumTableNameID.Number = 0;
  (this->RepairMaterialTitleText).DateTime.Ticks = 0;
  (this->RepairMaterialTitleText).TimeSpan.Ticks = 0;
  (this->RepairMaterialTitleText).TimeExpressionType = None;
  (this->RepairMaterialTitleText).IsExpression = false;
  (this->RepairMaterialTitleText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairMaterialTitleText).UniqueString.Data.ArrayNum = 0;
  (this->RepairMaterialTitleText).UniqueString.Data.ArrayMax = 0;
  (this->RepairMaterialTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RepairMaterialTitleText).FormatArgs.ArrayNum = 0;
  (this->RepairMaterialTitleText).FormatArgs.ArrayMax = 0;
  (this->RepairTargetItemNameText).StringTableType = None;
  (this->RepairTargetItemNameText).StringTableID = 0;
  (this->RepairTargetItemNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepairTargetItemNameText).StringEnumTableNameID.Number = 0;
  (this->RepairTargetItemNameText).DateTime.Ticks = 0;
  (this->RepairTargetItemNameText).TimeSpan.Ticks = 0;
  (this->RepairTargetItemNameText).TimeExpressionType = None;
  (this->RepairTargetItemNameText).IsExpression = false;
  (this->RepairTargetItemNameText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairTargetItemNameText).UniqueString.Data.ArrayNum = 0;
  (this->RepairTargetItemNameText).UniqueString.Data.ArrayMax = 0;
  (this->RepairTargetItemNameText).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairTargetItemNameText).FormatArgs.ArrayNum = 0;
  (this->RepairTargetItemNameText).FormatArgs.ArrayMax = 0;
  (this->DurabilityValueText).StringTableType = None;
  (this->DurabilityValueText).StringTableID = 0;
  (this->DurabilityValueText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DurabilityValueText).StringEnumTableNameID.Number = 0;
  (this->DurabilityValueText).DateTime.Ticks = 0;
  (this->DurabilityValueText).TimeSpan.Ticks = 0;
  (this->DurabilityValueText).TimeExpressionType = None;
  (this->DurabilityValueText).IsExpression = false;
  (this->DurabilityValueText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DurabilityValueText).UniqueString.Data.ArrayNum = 0;
  (this->DurabilityValueText).UniqueString.Data.ArrayMax = 0;
  (this->DurabilityValueText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DurabilityValueText).FormatArgs.ArrayNum = 0;
  (this->DurabilityValueText).FormatArgs.ArrayMax = 0;
  (this->CurrentRepairValueText).StringTableType = None;
  (this->CurrentRepairValueText).StringTableID = 0;
  (this->CurrentRepairValueText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CurrentRepairValueText).StringEnumTableNameID.Number = 0;
  (this->CurrentRepairValueText).DateTime.Ticks = 0;
  (this->CurrentRepairValueText).TimeSpan.Ticks = 0;
  (this->CurrentRepairValueText).TimeExpressionType = None;
  (this->CurrentRepairValueText).IsExpression = false;
  (this->CurrentRepairValueText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentRepairValueText).UniqueString.Data.ArrayNum = 0;
  (this->CurrentRepairValueText).UniqueString.Data.ArrayMax = 0;
  (this->CurrentRepairValueText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentRepairValueText).FormatArgs.ArrayNum = 0;
  (this->CurrentRepairValueText).FormatArgs.ArrayMax = 0;
  (this->RepairMaxValueText).StringTableType = None;
  (this->RepairMaxValueText).StringTableID = 0;
  (this->RepairMaxValueText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepairMaxValueText).StringEnumTableNameID.Number = 0;
  (this->RepairMaxValueText).DateTime.Ticks = 0;
  (this->RepairMaxValueText).TimeSpan.Ticks = 0;
  (this->RepairMaxValueText).TimeExpressionType = None;
  (this->RepairMaxValueText).IsExpression = false;
  (this->RepairMaxValueText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairMaxValueText).UniqueString.Data.ArrayNum = 0;
  (this->RepairMaxValueText).UniqueString.Data.ArrayMax = 0;
  (this->RepairMaxValueText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepairMaxValueText).FormatArgs.ArrayNum = 0;
  (this->RepairMaxValueText).FormatArgs.ArrayMax = 0;
  (this->SlashLabelText).StringTableType = None;
  (this->SlashLabelText).StringTableID = 0;
  (this->SlashLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SlashLabelText).StringEnumTableNameID.Number = 0;
  (this->SlashLabelText).DateTime.Ticks = 0;
  (this->SlashLabelText).TimeSpan.Ticks = 0;
  (this->SlashLabelText).TimeExpressionType = None;
  (this->SlashLabelText).IsExpression = false;
  (this->SlashLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlashLabelText).UniqueString.Data.ArrayNum = 0;
  (this->SlashLabelText).UniqueString.Data.ArrayMax = 0;
  (this->SlashLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlashLabelText).FormatArgs.ArrayNum = 0;
  (this->SlashLabelText).FormatArgs.ArrayMax = 0;
  (this->PlusLabelText).StringTableType = None;
  (this->PlusLabelText).StringTableID = 0;
  (this->PlusLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PlusLabelText).StringEnumTableNameID.Number = 0;
  (this->PlusLabelText).DateTime.Ticks = 0;
  (this->PlusLabelText).TimeSpan.Ticks = 0;
  (this->PlusLabelText).TimeExpressionType = None;
  (this->PlusLabelText).IsExpression = false;
  (this->PlusLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlusLabelText).UniqueString.Data.ArrayNum = 0;
  (this->PlusLabelText).UniqueString.Data.ArrayMax = 0;
  (this->PlusLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlusLabelText).FormatArgs.ArrayNum = 0;
  (this->PlusLabelText).FormatArgs.ArrayMax = 0;
  (this->ItemRepairModel).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_ItemRepair_Target @ 14b6987f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemRepair_Target * __thiscall
UDS_VM_ItemRepair_Target::UDS_VM_ItemRepair_Target
          (UDS_VM_ItemRepair_Target *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_Target__6B_;
  (this->VM_RepairTargetItem).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->VM_RequiredTime).field0_0x0.DebugPtr = (UDS_VM_Required_Time *)0x0;
  (this->DescLabelText).StringTableType = None;
  (this->DescLabelText).StringTableID = 0;
  (this->DescLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescLabelText).StringEnumTableNameID.Number = 0;
  (this->DescLabelText).DateTime.Ticks = 0;
  (this->DescLabelText).TimeSpan.Ticks = 0;
  (this->DescLabelText).TimeExpressionType = None;
  (this->DescLabelText).IsExpression = false;
  (this->DescLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescLabelText).UniqueString.Data.ArrayNum = 0;
  (this->DescLabelText).UniqueString.Data.ArrayMax = 0;
  (this->DescLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescLabelText).FormatArgs.ArrayNum = 0;
  (this->DescLabelText).FormatArgs.ArrayMax = 0;
  (this->ExplanationLabelText).StringTableType = None;
  (this->ExplanationLabelText).StringTableID = 0;
  (this->ExplanationLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExplanationLabelText).StringEnumTableNameID.Number = 0;
  (this->ExplanationLabelText).DateTime.Ticks = 0;
  (this->ExplanationLabelText).TimeSpan.Ticks = 0;
  (this->ExplanationLabelText).TimeExpressionType = None;
  (this->ExplanationLabelText).IsExpression = false;
  (this->ExplanationLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExplanationLabelText).UniqueString.Data.ArrayNum = 0;
  (this->ExplanationLabelText).UniqueString.Data.ArrayMax = 0;
  (this->ExplanationLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplanationLabelText).FormatArgs.ArrayNum = 0;
  (this->ExplanationLabelText).FormatArgs.ArrayMax = 0;
  (this->DurabilityLabelText).StringTableType = None;
  (this->DurabilityLabelText).StringTableID = 0;
  (this->DurabilityLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DurabilityLabelText).StringEnumTableNameID.Number = 0;
  (this->DurabilityLabelText).DateTime.Ticks = 0;
  (this->DurabilityLabelText).TimeSpan.Ticks = 0;
  (this->DurabilityLabelText).TimeExpressionType = None;
  (this->DurabilityLabelText).IsExpression = false;
  (this->DurabilityLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DurabilityLabelText).UniqueString.Data.ArrayNum = 0;
  (this->DurabilityLabelText).UniqueString.Data.ArrayMax = 0;
  (this->DurabilityLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DurabilityLabelText).FormatArgs.ArrayNum = 0;
  (this->DurabilityLabelText).FormatArgs.ArrayMax = 0;
  (this->RepairMaterialTitleText).StringTableType = None;
  (this->RepairMaterialTitleText).StringTableID = 0;
  (this->RepairMaterialTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepairMaterialTitleText).StringEnumTableNameID.Number = 0;
  (this->RepairMaterialTitleText).DateTime.Ticks = 0;
  (this->RepairMaterialTitleText).TimeSpan.Ticks = 0;
  (this->RepairMaterialTitleText).TimeExpressionType = None;
  (this->RepairMaterialTitleText).IsExpression = false;
  (this->RepairMaterialTitleText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairMaterialTitleText).UniqueString.Data.ArrayNum = 0;
  (this->RepairMaterialTitleText).UniqueString.Data.ArrayMax = 0;
  (this->RepairMaterialTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RepairMaterialTitleText).FormatArgs.ArrayNum = 0;
  (this->RepairMaterialTitleText).FormatArgs.ArrayMax = 0;
  (this->RepairTargetItemNameText).StringTableType = None;
  (this->RepairTargetItemNameText).StringTableID = 0;
  (this->RepairTargetItemNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepairTargetItemNameText).StringEnumTableNameID.Number = 0;
  (this->RepairTargetItemNameText).DateTime.Ticks = 0;
  (this->RepairTargetItemNameText).TimeSpan.Ticks = 0;
  (this->RepairTargetItemNameText).TimeExpressionType = None;
  (this->RepairTargetItemNameText).IsExpression = false;
  (this->RepairTargetItemNameText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairTargetItemNameText).UniqueString.Data.ArrayNum = 0;
  (this->RepairTargetItemNameText).UniqueString.Data.ArrayMax = 0;
  (this->RepairTargetItemNameText).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairTargetItemNameText).FormatArgs.ArrayNum = 0;
  (this->RepairTargetItemNameText).FormatArgs.ArrayMax = 0;
  (this->DurabilityValueText).StringTableType = None;
  (this->DurabilityValueText).StringTableID = 0;
  (this->DurabilityValueText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DurabilityValueText).StringEnumTableNameID.Number = 0;
  (this->DurabilityValueText).DateTime.Ticks = 0;
  (this->DurabilityValueText).TimeSpan.Ticks = 0;
  (this->DurabilityValueText).TimeExpressionType = None;
  (this->DurabilityValueText).IsExpression = false;
  (this->DurabilityValueText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DurabilityValueText).UniqueString.Data.ArrayNum = 0;
  (this->DurabilityValueText).UniqueString.Data.ArrayMax = 0;
  (this->DurabilityValueText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DurabilityValueText).FormatArgs.ArrayNum = 0;
  (this->DurabilityValueText).FormatArgs.ArrayMax = 0;
  (this->CurrentRepairValueText).StringTableType = None;
  (this->CurrentRepairValueText).StringTableID = 0;
  (this->CurrentRepairValueText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CurrentRepairValueText).StringEnumTableNameID.Number = 0;
  (this->CurrentRepairValueText).DateTime.Ticks = 0;
  (this->CurrentRepairValueText).TimeSpan.Ticks = 0;
  (this->CurrentRepairValueText).TimeExpressionType = None;
  (this->CurrentRepairValueText).IsExpression = false;
  (this->CurrentRepairValueText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentRepairValueText).UniqueString.Data.ArrayNum = 0;
  (this->CurrentRepairValueText).UniqueString.Data.ArrayMax = 0;
  (this->CurrentRepairValueText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentRepairValueText).FormatArgs.ArrayNum = 0;
  (this->CurrentRepairValueText).FormatArgs.ArrayMax = 0;
  (this->RepairMaxValueText).StringTableType = None;
  (this->RepairMaxValueText).StringTableID = 0;
  (this->RepairMaxValueText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepairMaxValueText).StringEnumTableNameID.Number = 0;
  (this->RepairMaxValueText).DateTime.Ticks = 0;
  (this->RepairMaxValueText).TimeSpan.Ticks = 0;
  (this->RepairMaxValueText).TimeExpressionType = None;
  (this->RepairMaxValueText).IsExpression = false;
  (this->RepairMaxValueText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairMaxValueText).UniqueString.Data.ArrayNum = 0;
  (this->RepairMaxValueText).UniqueString.Data.ArrayMax = 0;
  (this->RepairMaxValueText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepairMaxValueText).FormatArgs.ArrayNum = 0;
  (this->RepairMaxValueText).FormatArgs.ArrayMax = 0;
  (this->SlashLabelText).StringTableType = None;
  (this->SlashLabelText).StringTableID = 0;
  (this->SlashLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SlashLabelText).StringEnumTableNameID.Number = 0;
  (this->SlashLabelText).DateTime.Ticks = 0;
  (this->SlashLabelText).TimeSpan.Ticks = 0;
  (this->SlashLabelText).TimeExpressionType = None;
  (this->SlashLabelText).IsExpression = false;
  (this->SlashLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlashLabelText).UniqueString.Data.ArrayNum = 0;
  (this->SlashLabelText).UniqueString.Data.ArrayMax = 0;
  (this->SlashLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlashLabelText).FormatArgs.ArrayNum = 0;
  (this->SlashLabelText).FormatArgs.ArrayMax = 0;
  (this->PlusLabelText).StringTableType = None;
  (this->PlusLabelText).StringTableID = 0;
  (this->PlusLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PlusLabelText).StringEnumTableNameID.Number = 0;
  (this->PlusLabelText).DateTime.Ticks = 0;
  (this->PlusLabelText).TimeSpan.Ticks = 0;
  (this->PlusLabelText).TimeExpressionType = None;
  (this->PlusLabelText).IsExpression = false;
  (this->PlusLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlusLabelText).UniqueString.Data.ArrayNum = 0;
  (this->PlusLabelText).UniqueString.Data.ArrayMax = 0;
  (this->PlusLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlusLabelText).FormatArgs.ArrayNum = 0;
  (this->PlusLabelText).FormatArgs.ArrayMax = 0;
  (this->ItemRepairModel).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_ItemRepair_Target @ 14b69a7b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair_Target::~UDS_VM_ItemRepair_Target(UDS_VM_ItemRepair_Target *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_Target__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PlusLabelText).FormatArgs.AllocatorInstance.Data,
             (this->PlusLabelText).FormatArgs.ArrayNum);
  pFVar1 = (this->PlusLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlusLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SlashLabelText).FormatArgs.AllocatorInstance.Data,
             (this->SlashLabelText).FormatArgs.ArrayNum);
  pFVar1 = (this->SlashLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SlashLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RepairMaxValueText).FormatArgs.AllocatorInstance.Data,
             (this->RepairMaxValueText).FormatArgs.ArrayNum);
  pFVar1 = (this->RepairMaxValueText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RepairMaxValueText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CurrentRepairValueText).FormatArgs.AllocatorInstance.Data,
             (this->CurrentRepairValueText).FormatArgs.ArrayNum);
  pFVar1 = (this->CurrentRepairValueText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentRepairValueText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DurabilityValueText).FormatArgs.AllocatorInstance.Data,
             (this->DurabilityValueText).FormatArgs.ArrayNum);
  pFVar1 = (this->DurabilityValueText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DurabilityValueText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RepairTargetItemNameText).FormatArgs.AllocatorInstance.Data
             ,(this->RepairTargetItemNameText).FormatArgs.ArrayNum);
  pFVar1 = (this->RepairTargetItemNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RepairTargetItemNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RepairMaterialTitleText).FormatArgs.AllocatorInstance.Data,
             (this->RepairMaterialTitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->RepairMaterialTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RepairMaterialTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DurabilityLabelText).FormatArgs.AllocatorInstance.Data,
             (this->DurabilityLabelText).FormatArgs.ArrayNum);
  pFVar1 = (this->DurabilityLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DurabilityLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ExplanationLabelText).FormatArgs.AllocatorInstance.Data,
             (this->ExplanationLabelText).FormatArgs.ArrayNum);
  pFVar1 = (this->ExplanationLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExplanationLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DescLabelText).FormatArgs.AllocatorInstance.Data,
             (this->DescLabelText).FormatArgs.ArrayNum);
  pFVar1 = (this->DescLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DescLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_ItemRepair_Target::GetFieldNotificationDescriptor(UDS_VM_ItemRepair_Target *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemRepair_Target::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69dae0

UClass * __cdecl UDS_VM_ItemRepair_Target::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemRepair_Target.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemRepair_Target",
               &Z_Registration_Info_UClass_UDS_VM_ItemRepair_Target.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemRepair_Target,0x3e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemRepair_Target>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemRepair_Target>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemRepair_Target.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemRepair_Target @ 14b69e670

void __cdecl UDS_VM_ItemRepair_Target::StaticRegisterNativesUDS_VM_ItemRepair_Target(void)

{
  return;
}

// InitRepair @ 14be8c050

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair_Target::InitRepair(UDS_VM_ItemRepair_Target *this)

{
  longlong *plVar1;
  UDS_VM_Item *this_00;
  undefined8 *puVar2;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar3;
  longlong *local_res8;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  FDS_Text::SetTextFromStringTable(&this->RepairTargetItemNameText,StringUi,0x9fdd);
  plVar1 = &this->_padding_;
  local_28.SharedReferenceCount.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::RepairTargetItemNameText.BitNumber;
  local_28.Object =
       (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::RepairTargetItemNameText.FieldName
  ;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
  this->ItemInfoSwitcher = 1;
  pTVar3 = &local_28;
  local_28.SharedReferenceCount.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::ItemInfoSwitcher.BitNumber;
  local_28.Object =
       (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::ItemInfoSwitcher.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,pTVar3);
  DS_ItemDataUtil::CreateItemModel
            ((EDS_ItemSlotStateType)&local_res8,(int)CONCAT71((int7)((ulonglong)pTVar3 >> 8),0x3b));
  if ((local_res8 != (longlong *)0x0) && ((*(uint *)(local_res8 + 1) >> 0x1e & 1) == 0)) {
    this_00 = (this->VM_RepairTargetItem).field0_0x0.DebugPtr;
    puVar2 = (undefined8 *)(**(code **)(*local_res8 + 0x310))(local_res8,local_18);
    local_28.Object = (FDS_ViewModelContext *)*puVar2;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1];
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    local_28.SharedReferenceCount.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::VM_RepairTargetItem.BitNumber;
    local_28.Object =
         (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::VM_RepairTargetItem.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
  }
  return;
}

// InitViewModel @ 14be8e160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair_Target::InitViewModel(UDS_VM_ItemRepair_Target *this)

{
  FName FVar1;
  FName FVar2;
  UDS_VM_Item *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UDS_VM_Required_Time *pUVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  FName local_a8;
  int local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_RepairTargetItem).field0_0x0.DebugPtr == (UDS_VM_Item *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Item>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_Item *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_RepairTargetItem).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_RequiredTime).field0_0x0.DebugPtr == (UDS_VM_Required_Time *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar4 = Z_Construct_UClass_UDS_VM_Required_Time_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar5 = Z_Construct_UClass_UDS_VM_Required_Time_NoRegister();
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
    pUVar6 = (UDS_VM_Required_Time *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar7 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (pUVar6 != (UDS_VM_Required_Time *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_Required_Time *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_RequiredTime).field0_0x0.DebugPtr = pUVar6;
  }
  FDS_Text::SetTextFromStringTable(&this->DescLabelText,StringUi,0x9fdd);
  local_a0 = FFieldNotificationClassDescriptor::DescLabelText.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::DescLabelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  FDS_Text::SetTextFromStringTable(&this->ExplanationLabelText,StringUi,0x9fde);
  local_a0 = FFieldNotificationClassDescriptor::ExplanationLabelText.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::ExplanationLabelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  FDS_Text::SetTextFromStringTable(&this->DurabilityLabelText,StringUi,0x9fdf);
  local_a0 = FFieldNotificationClassDescriptor::DurabilityLabelText.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::DurabilityLabelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  FDS_Text::SetTextFromStringTable(&this->RepairMaterialTitleText,StringUi,0x9fda);
  local_a0 = FFieldNotificationClassDescriptor::RepairMaterialTitleText.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::RepairMaterialTitleText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  FDS_Text::SetTextFromStringTable(&this->SlashLabelText,StringUi,0x9ff1);
  local_a0 = FFieldNotificationClassDescriptor::SlashLabelText.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::SlashLabelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  FDS_Text::SetTextFromStringTable(&this->PlusLabelText,StringUi,0x9ff3);
  local_a0 = FFieldNotificationClassDescriptor::PlusLabelText.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::PlusLabelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  InitRepair(this);
  return;
}

// OnChangedItemRepairType @ 14be91550

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair_Target::OnChangedItemRepairType
          (UDS_VM_ItemRepair_Target *this,EDS_ItemRepairType *param_1)

{
  EDS_ItemRepairType EVar1;
  ESlateVisibility EVar2;
  FName local_18;
  int local_10;
  
  EVar1 = *param_1;
  if ((EVar1 == Restore) || (EVar1 == TargetRepair)) {
    EVar2 = SelfHitTestInvisible;
    if (EVar1 == TargetRepair) {
      EVar2 = Collapsed;
    }
    this->RestoreVisibility = EVar2;
    local_10 = FFieldNotificationClassDescriptor::RestoreVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::RestoreVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnEventUpdateView @ 14be98b30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair_Target::OnEventUpdateView
          (UDS_VM_ItemRepair_Target *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr> *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UDS_VM_Required_Time *this_01;
  int iVar3;
  EDS_ItemRepairType EVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  FName FVar9;
  FString *pFVar10;
  UDS_M_ItemRepair *this_02;
  ESlateVisibility EVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  float fVar14;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> local_58 [2];
  
  this_00 = &this->ItemRepairModel;
  pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  FDS_DataContainer::GetListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)&pUVar8[1].field_0x18,local_58,UpdateViewEvent);
  iVar3 = local_58[0].ArrayNum;
  pFVar1 = local_58[0].AllocatorInstance.Data + (longlong)local_58[0].ArrayNum * 4;
  FVar13.Data = local_58[0].AllocatorInstance.Data;
LAB_14be98b9a:
  while( true ) {
    if (local_58[0].ArrayNum != iVar3) {
      `TCheckedPointerIterator<enum_EDS_ModelEventItemRepair,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar13.Data == pFVar1) {
      if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].AllocatorInstance.Data);
      }
      return;
    }
    iVar7 = *(int *)FVar13.Data;
    if (iVar7 == 7) goto LAB_14be98bd7;
    if (iVar7 != 9) break;
    pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&pUVar8[1].field_0x18,(EDS_ItemRepairData)local_res20);
    uVar2 = *(undefined8 *)FVar9;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar8[1].field_0x18,uVar6 + (int)((ulonglong)uVar2 >> 0x20),
                         (FName *)FVar9);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar7 = _wtoi(pwVar12);
    SetDurabilityValue(this,iVar7);
    FVar13.Data = FVar13.Data + 4;
  }
  if (iVar7 == 10) {
    pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    EVar4 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&pUVar8[1].field_0x18,ItemRepairType);
    if ((byte)(EVar4 - TargetRepair) < 2) {
      EVar11 = SelfHitTestInvisible;
      if (EVar4 == TargetRepair) {
        EVar11 = Collapsed;
      }
      this->RestoreVisibility = EVar11;
      local_70 = FFieldNotificationClassDescriptor::RestoreVisibility.BitNumber;
      local_78 = FFieldNotificationClassDescriptor::RestoreVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    if (EVar4 == TargetRepair) {
      bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (!bVar5) goto LAB_14be98bd7;
      UpdateRegisterItem(this);
      FVar13.Data = FVar13.Data + 4;
      goto LAB_14be98b9a;
    }
    if (EVar4 == Restore) {
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                        ((FDS_DataContainer *)&pUVar8[1].field_0x18,(EDS_ItemRepairData)local_res18)
      ;
      uVar2 = *(undefined8 *)FVar9;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
      pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar8[1].field_0x18,uVar6 + (int)((ulonglong)uVar2 >> 0x20),
                           (FName *)FVar9);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      _wtoi(pwVar12);
      bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (!bVar5) goto LAB_14be98bd7;
      UpdateRegisterItem(this);
      if ((this->VM_RequiredTime).field0_0x0.DebugPtr != (UDS_VM_Required_Time *)0x0) {
        this_02 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        fVar14 = UDS_M_ItemRepair::GetRestoreTime(this_02);
        this_01 = (this->VM_RequiredTime).field0_0x0.DebugPtr;
        if (fVar14 <= 0.0) {
          UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this_01,Collapsed);
          local_60 = FFieldNotificationClassDescriptor::VM_RequiredTime.BitNumber;
          local_68 = FFieldNotificationClassDescriptor::VM_RequiredTime.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
          FVar13.Data = FVar13.Data + 4;
        }
        else {
          UDS_VM_Required_Time::SetContext(this_01,fVar14);
          FVar13.Data = FVar13.Data + 4;
        }
        goto LAB_14be98b9a;
      }
    }
  }
  else {
    if (iVar7 != 0xb) goto LAB_14be98bdf;
LAB_14be98bd7:
    InitRepair(this);
  }
LAB_14be98bdf:
  FVar13.Data = FVar13.Data + 4;
  goto LAB_14be98b9a;
}

// OnSetViewModel @ 14bea52d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair_Target::OnSetViewModel
          (UDS_VM_ItemRepair_Target *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_ModelBase *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_VM_ItemRepair_Target *local_res10;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  bool local_98;
  TSharedPtr<FDS_ViewModelContext_ItemRepair,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ItemRepair>(&local_88,&local_78);
  if (local_88.Object != (FDS_ViewModelContext_ItemRepair *)0x0) {
    (this->ItemRepairModel).WeakPtr = ((local_88.Object)->ItemRepairModel).WeakPtr;
    this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    uStack_9c = local_78.SharedReferenceCount.ReferenceController._4_4_;
    uStack_a0 = 0;
    local_68 = (undefined1  [8])0x0;
    local_a8 = OnEventUpdateView;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemRepair_Target____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_ItemRepair_Target *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_ItemRepair_Target *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_a8;
      puVar2[5] = CONCAT44(uStack_9c,uStack_a0);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    UDS_ModelBase::AddUpdateViewDelegate
              (this_00,(TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                        *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_a8);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_98 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,uStack_a0),
                 (FDestructionSentinel *)&local_a8);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    InitRepair(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateRestoreTarget @ 14bea8330

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair_Target::OnUpdateRestoreTarget(UDS_VM_ItemRepair_Target *this,int *param_1)

{
  UDS_VM_Required_Time *this_00;
  bool bVar1;
  UDS_M_ItemRepair *this_01;
  float fVar2;
  FName local_18;
  int local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ItemRepairModel).WeakPtr);
  if (!bVar1) {
    InitRepair(this);
    return;
  }
  UpdateRegisterItem(this);
  if ((this->VM_RequiredTime).field0_0x0.DebugPtr != (UDS_VM_Required_Time *)0x0) {
    this_01 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    fVar2 = UDS_M_ItemRepair::GetRestoreTime(this_01);
    this_00 = (this->VM_RequiredTime).field0_0x0.DebugPtr;
    if (0.0 < fVar2) {
      UDS_VM_Required_Time::SetContext(this_00,fVar2);
      return;
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this_00,Collapsed);
    local_10 = FFieldNotificationClassDescriptor::VM_RequiredTime.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::VM_RequiredTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnUpdatedRepairRegister @ 14bea8b20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair_Target::OnUpdatedRepairRegister(UDS_VM_ItemRepair_Target *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ItemRepairModel).WeakPtr);
  if (!bVar1) {
    InitRepair(this);
    return;
  }
  UpdateRegisterItem(this);
  return;
}

// SetDurabilityValue @ 14beaeef0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair_Target::SetDurabilityValue(UDS_VM_ItemRepair_Target *this,int param_1)

{
  int iVar1;
  FString local_28;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_28,param_1);
  iVar1 = local_18.ArrayNum;
  if (local_18.ArrayNum == local_18.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  local_18.ArrayNum = iVar1 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FString>
            ((FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x28),
             &local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FDS_Text::SetTextFormatFromStringTable(&this->DurabilityValueText,StringUi,0x9ff2,&local_18);
  local_28.Data.ArrayNum = FFieldNotificationClassDescriptor::DurabilityValueText.BitNumber;
  local_28.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::DurabilityValueText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SubstactSelectedItem @ 14bebb280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair_Target::SubstactSelectedItem
          (UDS_VM_ItemRepair_Target *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_ModelEventItemRepair *pUVar5;
  UObject *pUVar6;
  long64 lVar7;
  UDS_ModelBase *this_00;
  TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr> *this_01;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  UDS_ModelEventItemRepair *local_30;
  FWeakObjectPtr local_28 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar3 == (UObject *)0x0) {
LAB_14bebb2e2:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14bebb2e2;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_30 = (UDS_ModelEventItemRepair *)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 1));
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bebb37b;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bebb37b:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_30 = (UDS_ModelEventItemRepair *)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_30);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    (**(code **)(*(longlong *)pUVar3 + 0x3a0))(pUVar3);
    bVar2 = FWeakObjectPtr::IsValid(local_28);
    if ((bVar2) && (pUVar3 = FWeakObjectPtr::Get(&local_res20), *(int *)&pUVar3[5].field_0x8 == 0xb)
       ) {
      this_01 = &this->ItemRepairModel;
      bVar2 = TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
      if (!bVar2) {
        pUVar3 = GetTransientPackageAsObject();
        pUVar5 = NewObject<UDS_ModelEventItemRepair>(pUVar3);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_ModelEventItemRepair *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        local_38.ObjectIndex = 0;
        local_38.ObjectSerialNumber = 0;
        local_30 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_ModelEventItemRepair *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_30);
        pUVar3 = FWeakObjectPtr::Get(&local_38);
        *(undefined4 *)&pUVar3[5].field_0x8 = 7;
        pUVar3 = FWeakObjectPtr::Get(&this_01->WeakPtr);
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x388))(pUVar6);
        FDS_DataContainer::SetData<__int64,enum_EDS_ItemRepairData>
                  ((FDS_DataContainer *)&pUVar3[1].field_0x18,SelectedItemUID,lVar7);
        this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&this_01->WeakPtr);
        UDS_ModelBase::UpdateModel
                  (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_38);
      }
    }
  }
  return;
}

// UpdateRegisterItem @ 14bec1a00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair_Target::UpdateRegisterItem(UDS_VM_ItemRepair_Target *this)

{
  UDS_VM_Item *pUVar1;
  UDS_M_ItemImplBase *this_00;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FName *pFVar9;
  FDS_Text *pFVar10;
  undefined8 uVar11;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar12;
  UDS_M_ItemImplBase *local_res8;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> local_res10;
  UDS_VM_ItemRepair_Target *local_res18 [2];
  FDestructionSentinel local_108;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  undefined1 local_a0 [48];
  void *local_70;
  FDS_TextFormatArg *local_60;
  int local_58;
  
  pUVar1 = (this->VM_RepairTargetItem).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_VM_Item *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->ItemRepairModel).WeakPtr);
    if (bVar2) {
      pUVar6 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
      FDS_DataContainer::GetData<__int64,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&pUVar6[1].field_0x18,RegisterItemUID);
      pUVar6 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
      iVar3 = FDS_DataContainer::GetData<int,enum_EDS_ItemRepairData>
                        ((FDS_DataContainer *)&pUVar6[1].field_0x18,RepairedDurabilityPercent);
      pUVar6 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
      FDS_DataContainer::GetData<__int64,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&pUVar6[1].field_0x18,RegisterItemUID);
      pUVar6 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
      FDS_DataContainer::GetData<__int64,enum_EDS_ItemRepairData>
                ((FDS_DataContainer *)&pUVar6[1].field_0x18,RegisterItemUID);
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_res10);
      uVar11 = 0;
      bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals(&local_res10,(void *)0x0);
      if (!bVar2) {
        TVar12.WeakPtr._1_7_ = (undefined7)((ulonglong)uVar11 >> 8);
        TVar12.WeakPtr.ObjectIndex._0_1_ = 0x3b;
        DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_res8,TVar12);
        this_00 = local_res8;
        if (local_res8 != (UDS_M_ItemImplBase *)0x0) {
          local_108._0_8_ = SubstactSelectedItem;
          local_108.Accessor =
               (FMRSWRecursiveAccessDetector *)
               ((ulonglong)(uint)local_d0.DelegateAllocator._4_4_ << 0x20);
          local_d8 = (undefined1  [8])0x0;
          local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_d0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                     (FWriteAccessScope *)&local_c0);
          local_a8 = &local_d0;
          puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &
                      ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar8 = FDelegateHandle::GenerateNewID();
            puVar7[2] = uVar8;
            *puVar7 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemRepair_Target____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar7[3] = 0;
            local_res18[0] = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_res18);
            ((FName *)(puVar7 + 4))->ComparisonIndex = (FNameEntryId)local_108.AccessType;
            ((FName *)(puVar7 + 4))->Number = local_108._4_4_;
            puVar7[5] = local_108.Accessor;
          }
          if (local_c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
          }
          UDS_ModelBase::AddUpdateModelDelegate
                    ((UDS_ModelBase *)this_00,
                     (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      *)local_d8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                     (FWriteAccessScope *)&local_108);
          if ((local_d0.DelegateSize != 0) &&
             (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_d0,0,0,0x10);
            local_d0.DelegateSize = 0;
          }
          if (local_108.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
          }
          if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_d0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_d8);
          UDS_M_ItemImplBase::SetSubtract(local_res8,true);
          pUVar1 = (this->VM_RepairTargetItem).field0_0x0.DebugPtr;
          pFVar9 = (FName *)(**(code **)(local_res8->_padding_ + 0x310))(local_res8,local_d8);
          local_108._0_8_ = *pFVar9;
          local_108.Accessor = *(FMRSWRecursiveAccessDetector **)(pFVar9 + 1);
          if ((FName)local_108.Accessor != (FName)0x0) {
            LOCK();
            *(int *)((longlong)local_108.Accessor + 8U) =
                 *(int *)((longlong)local_108.Accessor + 8U) + 1;
            UNLOCK();
          }
          UDS_ViewModelBase::SetContext
                    ((UDS_ViewModelBase *)pUVar1,(TSharedPtr<FDS_ViewModelContext,1> *)&local_108);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_d0.DelegateAllocator);
          local_108.Accessor =
               (FMRSWRecursiveAccessDetector *)
               CONCAT44(local_108.Accessor._4_4_,
                        FFieldNotificationClassDescriptor::VM_RepairTargetItem.BitNumber);
          local_108.AccessType =
               FFieldNotificationClassDescriptor::VM_RepairTargetItem.FieldName.ComparisonIndex.
               Value;
          local_108._4_4_ = FFieldNotificationClassDescriptor::VM_RepairTargetItem.FieldName.Number;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,(FName *)&local_108);
          pFVar10 = (FDS_Text *)(**(code **)(local_res8->_padding_ + 0x400))(local_res8,local_a0);
          FDS_Text::operator=(&this->RepairTargetItemNameText,pFVar10);
          DestructItems<FDS_TextFormatArg,int>(local_60,local_58);
          if (local_60 != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_60);
          }
          if (local_70 != (void *)0x0) {
            FMemory::Free(local_70);
          }
          local_108.Accessor =
               (FMRSWRecursiveAccessDetector *)
               CONCAT44(local_108.Accessor._4_4_,
                        FFieldNotificationClassDescriptor::RepairTargetItemNameText.BitNumber);
          local_108.AccessType =
               FFieldNotificationClassDescriptor::RepairTargetItemNameText.FieldName.ComparisonIndex
               .Value;
          local_108._4_4_ =
               FFieldNotificationClassDescriptor::RepairTargetItemNameText.FieldName.Number;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,(FName *)&local_108);
          local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.ArrayNum = 0;
          local_e8.ArrayMax = 0;
          iVar4 = (**(code **)(local_res8->_padding_ + 0x448))(local_res8);
          iVar5 = (**(code **)(local_res8->_padding_ + 0x450))(local_res8);
          local_108.AccessType = 0;
          local_108._4_4_ = 0;
          local_108.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
          ::FString::AppendInt
                    ((FString *)&local_108,
                     -((int)ROUND(__real_bf000000 - ((float)iVar4 / (float)iVar5) * __real_43480000)
                      >> 1));
          iVar4 = local_e8.ArrayNum;
          if (local_e8.ArrayNum == local_e8.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
          }
          local_e8.ArrayNum = iVar4 + 1;
          FDS_TextFormatArg::FDS_TextFormatArg<FString>
                    ((FDS_TextFormatArg *)(local_e8.AllocatorInstance.Data + (longlong)iVar4 * 0x28)
                     ,(FString *)&local_108);
          if ((FName)local_108._0_8_ != (FName)0x0) {
            FMemory::Free((void *)local_108._0_8_);
          }
          FDS_Text::SetTextFormatFromStringTable
                    (&this->CurrentRepairValueText,StringUi,0x9ff2,&local_e8);
          local_108.Accessor._0_4_ =
               FFieldNotificationClassDescriptor::CurrentRepairValueText.BitNumber;
          local_108.AccessType =
               FFieldNotificationClassDescriptor::CurrentRepairValueText.FieldName.ComparisonIndex.
               Value;
          local_108._4_4_ =
               FFieldNotificationClassDescriptor::CurrentRepairValueText.FieldName.Number;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,(FName *)&local_108);
          FDS_Text::SetTextFromStringTable(&this->RepairMaxValueText,StringUi,0x9ff4);
          local_108.Accessor._0_4_ = FFieldNotificationClassDescriptor::RepairMaxValueText.BitNumber
          ;
          local_108.AccessType =
               FFieldNotificationClassDescriptor::RepairMaxValueText.FieldName.ComparisonIndex.Value
          ;
          local_108._4_4_ = FFieldNotificationClassDescriptor::RepairMaxValueText.FieldName.Number;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,(FName *)&local_108);
          this->ItemInfoSwitcher = 0;
          local_108.Accessor =
               (FMRSWRecursiveAccessDetector *)
               CONCAT44(local_108.Accessor._4_4_,
                        FFieldNotificationClassDescriptor::ItemInfoSwitcher.BitNumber);
          local_108.AccessType =
               FFieldNotificationClassDescriptor::ItemInfoSwitcher.FieldName.ComparisonIndex.Value;
          local_108._4_4_ = FFieldNotificationClassDescriptor::ItemInfoSwitcher.FieldName.Number;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,(FName *)&local_108);
          SetDurabilityValue(this,iVar3);
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
          if ((FDS_TextFormatArg *)local_e8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_e8.AllocatorInstance.Data);
          }
        }
      }
      return;
    }
  }
  InitRepair(this);
  return;
}

