// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b749a90

UClass * __cdecl UDS_VM_W_PlayerSkill_SkillSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_PlayerSkill_SkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_PlayerSkill_SkillSlot,0x348,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_PlayerSkill_SkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_PlayerSkill_SkillSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillSlot.InnerSingleton;
}

// UDS_VM_W_PlayerSkill_SkillSlot @ 14b74d960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_PlayerSkill_SkillSlot * __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::UDS_VM_W_PlayerSkill_SkillSlot
          (UDS_VM_W_PlayerSkill_SkillSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_PlayerSkill_SkillSlot__6B_;
  (this->Text_Unavailable).StringTableID = 0;
  (this->Text_Unavailable).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Unavailable).StringEnumTableNameID.Number = 0;
  (this->Text_Unavailable).DateTime.Ticks = 0;
  (this->Text_Unavailable).TimeSpan.Ticks = 0;
  (this->Text_Unavailable).TimeExpressionType = None;
  (this->Text_Unavailable).IsExpression = false;
  (this->Text_Unavailable).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Text_Unavailable).UniqueString.Data.ArrayNum = 0;
  (this->Text_Unavailable).UniqueString.Data.ArrayMax = 0;
  (this->Text_Unavailable).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Unavailable).FormatArgs.ArrayNum = 0;
  (this->Text_Unavailable).FormatArgs.ArrayMax = 0;
  (this->Text_SkillName).StringTableType = None;
  (this->Text_SkillName).StringTableID = 0;
  (this->Text_SkillName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_SkillName).StringEnumTableNameID.Number = 0;
  (this->Text_SkillName).DateTime.Ticks = 0;
  (this->Text_SkillName).TimeSpan.Ticks = 0;
  (this->Text_SkillName).TimeExpressionType = None;
  (this->Text_SkillName).IsExpression = false;
  (this->Text_SkillName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SkillName).UniqueString.Data.ArrayNum = 0;
  (this->Text_SkillName).UniqueString.Data.ArrayMax = 0;
  (this->Text_SkillName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SkillName).FormatArgs.ArrayNum = 0;
  (this->Text_SkillName).FormatArgs.ArrayMax = 0;
  (this->Text_Lv).StringTableType = None;
  (this->Text_Lv).StringTableID = 0;
  (this->Text_Lv).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Lv).StringEnumTableNameID.Number = 0;
  (this->Text_Lv).DateTime.Ticks = 0;
  (this->Text_Lv).TimeSpan.Ticks = 0;
  (this->Text_Lv).TimeExpressionType = None;
  (this->Text_Lv).IsExpression = false;
  (this->Text_Lv).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Lv).UniqueString.Data.ArrayNum = 0;
  (this->Text_Lv).UniqueString.Data.ArrayMax = 0;
  (this->Text_Lv).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Lv).FormatArgs.ArrayNum = 0;
  (this->Text_Lv).FormatArgs.ArrayMax = 0;
  (this->Text_LvPoint).StringTableType = None;
  (this->Text_LvPoint).StringTableID = 0;
  (this->Text_LvPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_LvPoint).StringEnumTableNameID.Number = 0;
  (this->Text_LvPoint).DateTime.Ticks = 0;
  (this->Text_LvPoint).TimeSpan.Ticks = 0;
  (this->Text_LvPoint).TimeExpressionType = None;
  (this->Text_LvPoint).IsExpression = false;
  (this->Text_LvPoint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_LvPoint).UniqueString.Data.ArrayNum = 0;
  (this->Text_LvPoint).UniqueString.Data.ArrayMax = 0;
  (this->Text_LvPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_LvPoint).FormatArgs.ArrayNum = 0;
  (this->Text_LvPoint).FormatArgs.ArrayMax = 0;
  (this->Text_Equip).StringTableType = None;
  (this->Text_Equip).StringTableID = 0;
  (this->Text_Equip).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Equip).StringEnumTableNameID.Number = 0;
  (this->Text_Equip).DateTime.Ticks = 0;
  (this->Text_Equip).TimeSpan.Ticks = 0;
  (this->Text_Equip).TimeExpressionType = None;
  (this->Text_Equip).IsExpression = false;
  (this->Text_Equip).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Equip).UniqueString.Data.ArrayNum = 0;
  (this->Text_Equip).UniqueString.Data.ArrayMax = 0;
  (this->Text_Equip).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Equip).FormatArgs.ArrayNum = 0;
  (this->Text_Equip).FormatArgs.ArrayMax = 0;
  (this->Text_LowDurability).StringTableType = None;
  (this->Text_LowDurability).StringTableID = 0;
  (this->Text_LowDurability).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_LowDurability).StringEnumTableNameID.Number = 0;
  (this->Text_LowDurability).DateTime.Ticks = 0;
  (this->Text_LowDurability).TimeSpan.Ticks = 0;
  (this->Text_LowDurability).TimeExpressionType = None;
  (this->Text_LowDurability).IsExpression = false;
  (this->Text_LowDurability).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Text_LowDurability).UniqueString.Data.ArrayNum = 0;
  (this->Text_LowDurability).UniqueString.Data.ArrayMax = 0;
  (this->Text_LowDurability).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_LowDurability).FormatArgs.ArrayNum = 0;
  (this->Text_LowDurability).FormatArgs.ArrayMax = 0;
  (this->BtnEvent_Click)._padding_ = '\0';
  (this->BtnEvent_Click).bIsCustomSelected = false;
  (this->BtnEvent_Click).bIsLacked = false;
  (this->BtnEvent_Click).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_Click).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_Click).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_Click).Delegate.field_0x10 = 0;
  (this->BtnHoveredEventField)._padding_ = '\0';
  (this->BtnHoveredEventField).bIsCustomSelected = false;
  (this->BtnHoveredEventField).bIsLacked = false;
  (this->BtnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate = 0;
  (this->Text_Unavailable).StringTableType = None;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnHoveredEventField).Delegate.field_0x10 = 0;
  (this->BtnUnHoveredEventField)._padding_ = '\0';
  (this->BtnUnHoveredEventField).bIsCustomSelected = false;
  (this->BtnUnHoveredEventField).bIsLacked = false;
  (this->BtnUnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnUnHoveredEventField).Delegate.field_0x10 = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->VM_EquipSlot).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_PlayerSkill_SkillSlot @ 14b74dc00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_PlayerSkill_SkillSlot * __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::UDS_VM_W_PlayerSkill_SkillSlot
          (UDS_VM_W_PlayerSkill_SkillSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_PlayerSkill_SkillSlot__6B_;
  (this->Text_Unavailable).StringTableID = 0;
  (this->Text_Unavailable).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Unavailable).StringEnumTableNameID.Number = 0;
  (this->Text_Unavailable).DateTime.Ticks = 0;
  (this->Text_Unavailable).TimeSpan.Ticks = 0;
  (this->Text_Unavailable).TimeExpressionType = None;
  (this->Text_Unavailable).IsExpression = false;
  (this->Text_Unavailable).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Text_Unavailable).UniqueString.Data.ArrayNum = 0;
  (this->Text_Unavailable).UniqueString.Data.ArrayMax = 0;
  (this->Text_Unavailable).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Unavailable).FormatArgs.ArrayNum = 0;
  (this->Text_Unavailable).FormatArgs.ArrayMax = 0;
  (this->Text_SkillName).StringTableType = None;
  (this->Text_SkillName).StringTableID = 0;
  (this->Text_SkillName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_SkillName).StringEnumTableNameID.Number = 0;
  (this->Text_SkillName).DateTime.Ticks = 0;
  (this->Text_SkillName).TimeSpan.Ticks = 0;
  (this->Text_SkillName).TimeExpressionType = None;
  (this->Text_SkillName).IsExpression = false;
  (this->Text_SkillName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SkillName).UniqueString.Data.ArrayNum = 0;
  (this->Text_SkillName).UniqueString.Data.ArrayMax = 0;
  (this->Text_SkillName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SkillName).FormatArgs.ArrayNum = 0;
  (this->Text_SkillName).FormatArgs.ArrayMax = 0;
  (this->Text_Lv).StringTableType = None;
  (this->Text_Lv).StringTableID = 0;
  (this->Text_Lv).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Lv).StringEnumTableNameID.Number = 0;
  (this->Text_Lv).DateTime.Ticks = 0;
  (this->Text_Lv).TimeSpan.Ticks = 0;
  (this->Text_Lv).TimeExpressionType = None;
  (this->Text_Lv).IsExpression = false;
  (this->Text_Lv).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Lv).UniqueString.Data.ArrayNum = 0;
  (this->Text_Lv).UniqueString.Data.ArrayMax = 0;
  (this->Text_Lv).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Lv).FormatArgs.ArrayNum = 0;
  (this->Text_Lv).FormatArgs.ArrayMax = 0;
  (this->Text_LvPoint).StringTableType = None;
  (this->Text_LvPoint).StringTableID = 0;
  (this->Text_LvPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_LvPoint).StringEnumTableNameID.Number = 0;
  (this->Text_LvPoint).DateTime.Ticks = 0;
  (this->Text_LvPoint).TimeSpan.Ticks = 0;
  (this->Text_LvPoint).TimeExpressionType = None;
  (this->Text_LvPoint).IsExpression = false;
  (this->Text_LvPoint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_LvPoint).UniqueString.Data.ArrayNum = 0;
  (this->Text_LvPoint).UniqueString.Data.ArrayMax = 0;
  (this->Text_LvPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_LvPoint).FormatArgs.ArrayNum = 0;
  (this->Text_LvPoint).FormatArgs.ArrayMax = 0;
  (this->Text_Equip).StringTableType = None;
  (this->Text_Equip).StringTableID = 0;
  (this->Text_Equip).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Equip).StringEnumTableNameID.Number = 0;
  (this->Text_Equip).DateTime.Ticks = 0;
  (this->Text_Equip).TimeSpan.Ticks = 0;
  (this->Text_Equip).TimeExpressionType = None;
  (this->Text_Equip).IsExpression = false;
  (this->Text_Equip).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Equip).UniqueString.Data.ArrayNum = 0;
  (this->Text_Equip).UniqueString.Data.ArrayMax = 0;
  (this->Text_Equip).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Equip).FormatArgs.ArrayNum = 0;
  (this->Text_Equip).FormatArgs.ArrayMax = 0;
  (this->Text_LowDurability).StringTableType = None;
  (this->Text_LowDurability).StringTableID = 0;
  (this->Text_LowDurability).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_LowDurability).StringEnumTableNameID.Number = 0;
  (this->Text_LowDurability).DateTime.Ticks = 0;
  (this->Text_LowDurability).TimeSpan.Ticks = 0;
  (this->Text_LowDurability).TimeExpressionType = None;
  (this->Text_LowDurability).IsExpression = false;
  (this->Text_LowDurability).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Text_LowDurability).UniqueString.Data.ArrayNum = 0;
  (this->Text_LowDurability).UniqueString.Data.ArrayMax = 0;
  (this->Text_LowDurability).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_LowDurability).FormatArgs.ArrayNum = 0;
  (this->Text_LowDurability).FormatArgs.ArrayMax = 0;
  (this->BtnEvent_Click)._padding_ = '\0';
  (this->BtnEvent_Click).bIsCustomSelected = false;
  (this->BtnEvent_Click).bIsLacked = false;
  (this->BtnEvent_Click).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_Click).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_Click).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_Click).Delegate.field_0x10 = 0;
  (this->BtnHoveredEventField)._padding_ = '\0';
  (this->BtnHoveredEventField).bIsCustomSelected = false;
  (this->BtnHoveredEventField).bIsLacked = false;
  (this->BtnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate = 0;
  (this->Text_Unavailable).StringTableType = None;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnHoveredEventField).Delegate.field_0x10 = 0;
  (this->BtnUnHoveredEventField)._padding_ = '\0';
  (this->BtnUnHoveredEventField).bIsCustomSelected = false;
  (this->BtnUnHoveredEventField).bIsLacked = false;
  (this->BtnUnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnUnHoveredEventField).Delegate.field_0x10 = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->VM_EquipSlot).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)0x0;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_PlayerSkill_SkillSlot @ 14b74f350

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::~UDS_VM_W_PlayerSkill_SkillSlot
          (UDS_VM_W_PlayerSkill_SkillSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_PlayerSkill_SkillSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnUnHoveredEventField).Delegate);
  pvVar1 = *(void **)&(this->BtnUnHoveredEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnUnHoveredEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnHoveredEventField).Delegate);
  pvVar1 = *(void **)&(this->BtnHoveredEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnHoveredEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_Click).Delegate);
  pvVar1 = *(void **)&(this->BtnEvent_Click).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_Click).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_LowDurability).FormatArgs.AllocatorInstance.Data,
             (this->Text_LowDurability).FormatArgs.ArrayNum);
  pFVar2 = (this->Text_LowDurability).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Text_LowDurability).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_Equip).FormatArgs.AllocatorInstance.Data,
             (this->Text_Equip).FormatArgs.ArrayNum);
  pFVar2 = (this->Text_Equip).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Text_Equip).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_LvPoint).FormatArgs.AllocatorInstance.Data,
             (this->Text_LvPoint).FormatArgs.ArrayNum);
  pFVar2 = (this->Text_LvPoint).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Text_LvPoint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_Lv).FormatArgs.AllocatorInstance.Data,
             (this->Text_Lv).FormatArgs.ArrayNum);
  pFVar2 = (this->Text_Lv).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Text_Lv).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_SkillName).FormatArgs.AllocatorInstance.Data,
             (this->Text_SkillName).FormatArgs.ArrayNum);
  pFVar2 = (this->Text_SkillName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Text_SkillName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_Unavailable).FormatArgs.AllocatorInstance.Data,
             (this->Text_Unavailable).FormatArgs.ArrayNum);
  pFVar2 = (this->Text_Unavailable).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Text_Unavailable).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b751470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::GetFieldNotificationDescriptor(UDS_VM_W_PlayerSkill_SkillSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_PlayerSkill_SkillSlot::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751d80

UClass * __cdecl UDS_VM_W_PlayerSkill_SkillSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_PlayerSkill_SkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_PlayerSkill_SkillSlot,0x348,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_PlayerSkill_SkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_PlayerSkill_SkillSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_PlayerSkill_SkillSlot @ 14b752420

void __cdecl
UDS_VM_W_PlayerSkill_SkillSlot::StaticRegisterNativesUDS_VM_W_PlayerSkill_SkillSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_PlayerSkill_SkillSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedPlayerSkillDataSet @ 14b753500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_PlayerSkill_SkillSlot::execOnChangedPlayerSkillDataSet
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
  OnChangedPlayerSkillDataSet((UDS_VM_W_PlayerSkill_SkillSlot *)param_1,local_res10);
  return;
}

// BindModel @ 14bf425a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill_SkillSlot::BindModel(UDS_VM_W_PlayerSkill_SkillSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_PlayerSkillEvent *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  char *pcVar6;
  UObject *this_00;
  UFunction *pUVar7;
  char *pcVar8;
  undefined1 auStackY_298 [32];
  <lambda_1> local_268 [16];
  undefined1 local_258 [8];
  uint uStack_250;
  uint uStack_24c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_248;
  FWeakObjectPtr local_240;
  FName local_238;
  FWeakObjectPtr local_230;
  FName local_228;
  FName local_220;
  UDS_VM_W_PlayerSkill_SkillSlot *local_218;
  FName *local_210;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_208;
  FDestructionSentinel local_1f8;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [96];
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  FName local_38;
  
  local_38 = (FName)(__security_cookie.value ^ (ulonglong)auStackY_298);
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar3 = UDS_PlayerSkillEvent::GetEvent();
  if (pUVar3 != (UDS_PlayerSkillEvent *)0x0) {
    uStack_250 = 0;
    local_258 = (undefined1  [8])OnSkillSlotClickEvent;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnSkillSlotSelectDelegate,this);
    local_1d0._16_8_ = CONCAT44(uStack_24c,uStack_250);
    local_1d0._8_8_ = local_258;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_PlayerSkill_SkillSlot>
              (&pUVar3->OnSkillSlotSelectDelegate,(UDS_VM_W_PlayerSkill_SkillSlot *)local_1e0,
               (pmf_452e1dc2 *)this);
    uStack_250 = 0;
    local_258 = (undefined1  [8])OnSkillOpen;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnSkillSlotOpenDelegate,this);
    local_1d0._32_8_ = CONCAT44(uStack_24c,uStack_250);
    local_1d0._24_8_ = local_258;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_PlayerSkill_SkillSlot>
              (&pUVar3->OnSkillSlotOpenDelegate,(UDS_VM_W_PlayerSkill_SkillSlot *)(local_1e0 + 8),
               (pmf_452e1dc2 *)this);
    uStack_250 = 0;
    local_258 = (undefined1  [8])OnSkillLevelUp;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnSkillSlotLevelUpDelegate,this);
    local_1d0._52_4_ = uStack_24c;
    local_1d0._48_4_ = uStack_250;
    local_1d0._40_8_ = local_258;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_PlayerSkill_SkillSlot>
              (&pUVar3->OnSkillSlotLevelUpDelegate,(UDS_VM_W_PlayerSkill_SkillSlot *)local_1d0,
               (pmf_452e1dc2 *)this);
    uStack_250 = 0;
    local_258 = (undefined1  [8])OnSkillReset;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnSkillResetDelegate,
               this);
    local_1d0._64_8_ = CONCAT44(uStack_24c,uStack_250);
    local_1d0._56_8_ = local_258;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_PlayerSkill_SkillSlot>
              (&pUVar3->OnSkillResetDelegate,(UDS_VM_W_PlayerSkill_SkillSlot *)local_258,
               (pmf_452e1dc2 *)this);
  }
  TDS_DataSetGetter<UDS_PlayerSkillDataSet>::Get((ulong64)&local_230);
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr> *)&local_230,(void *)0x0
                    );
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_W_PlayerSkill_SkillSlot::BindModel",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x3d,L"mainPlayerDataSet is nullptr");
    if ((FScriptContainerElement *)local_158._padding_ == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_230);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),(UObject *)this);
  pUVar5 = FWeakObjectPtr::Get(&local_230);
  pcVar6 = strstr("&UDS_VM_W_PlayerSkill_SkillSlot::OnChangedPlayerSkillDataSet","::");
  if (pcVar6 == (char *)0x0) {
LAB_14bf427fb:
    pcVar8 = &DAT_00000002;
LAB_14bf42800:
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
      pcVar8 = pcVar6;
      pcVar6 = strstr(pcVar8 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14bf427fb;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14bf42800;
  }
  ::FName::FName(&local_220,pcVar8);
  if ((this == (UDS_VM_W_PlayerSkill_SkillSlot *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_248.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_240.ObjectIndex = 0;
  local_240.ObjectSerialNumber = 0;
  local_238.ComparisonIndex.Value = 0;
  local_238.Number = 0;
  local_228 = local_220;
  if ((this == (UDS_VM_W_PlayerSkill_SkillSlot *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_218 = this;
  if (this == (UDS_VM_W_PlayerSkill_SkillSlot *)0x0) {
    local_218 = (UDS_VM_W_PlayerSkill_SkillSlot *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_218 != (UDS_VM_W_PlayerSkill_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_218);
  }
  FWeakObjectPtr::operator=(&local_240,(FObjectPtr)&local_218);
  local_238 = local_228;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_248,(FReadAccessScope *)(local_1d0 + 0x48));
  if ((local_238 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_240), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_1d0 + 0x48));
  }
  else {
    pUVar7 = UObject::FindFunction(this_00,local_238);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_1d0 + 0x48));
    if (pUVar7 != (UFunction *)0x0) goto LAB_14bf4294a;
  }
  local_210 = &local_228;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_VM_W_PlayerSkill_SkillSlot>'::__l2::<lambda_1>::operator()(&local_210);
LAB_14bf4294a:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_248,&local_170);
  local_208.Object = local_240;
  local_208.FunctionName = local_238;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_170);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),
             (FWriteAccessScope *)&local_1f8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar5[1].field_0x8,local_268,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),&local_208);
  if (local_1f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_248.AccessDetector);
  return;
}

// InitViewModel @ 14bf5c1d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill_SkillSlot::InitViewModel(UDS_VM_W_PlayerSkill_SkillSlot *this)

{
  return;
}

// OnChangedPlayerSkillDataSet @ 14bf608f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::OnChangedPlayerSkillDataSet
          (UDS_VM_W_PlayerSkill_SkillSlot *this,UDS_DataSetBase *param_1)

{
  int *piVar1;
  UDS_VM_EquipItemSlot *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FDS_PlayerSkillBaseTableRow *pFVar5;
  UDS_PlayerSkillData *this_01;
  UObject *pUVar6;
  FNumberFormattingOptions *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FName FVar10;
  FName FVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_02;
  UClass *pUVar13;
  FName *pFVar14;
  FName FVar15;
  FName FVar16;
  FWeakObjectPtr FStackX_8;
  FName FStackX_10;
  UDS_VM_W_PlayerSkill_SkillSlot *pUStackX_18;
  UDS_VM_W_PlayerSkill_SkillSlot *pUStackX_20;
  ulonglong uStack_1f0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_1e8;
  UDS_VM_W_PlayerSkill_SkillSlot *apUStack_1d8 [2];
  FName FStack_1c8;
  int iStack_1c0;
  FName FStack_1b8;
  int iStack_1b0;
  FName FStack_1a8;
  int iStack_1a0;
  FName FStack_198;
  int iStack_190;
  FName FStack_188;
  int iStack_180;
  FName FStack_178;
  int iStack_170;
  FName FStack_168;
  int iStack_160;
  FName FStack_158;
  int iStack_150;
  FName FStack_148;
  int iStack_140;
  FName FStack_138;
  int iStack_130;
  FName FStack_128;
  int iStack_120;
  FName FStack_118;
  int iStack_110;
  FName FStack_108;
  int iStack_100;
  TSharedPtr<FDS_ViewModelContext,1> TStack_f8;
  FDestructionSentinel FStack_e8;
  undefined1 *puStack_d0;
  FDestructionSentinel FStack_c8;
  undefined1 *puStack_b0;
  FDestructionSentinel FStack_a8;
  undefined1 *puStack_90;
  FName FStack_88;
  FName FStack_80;
  FName FStack_78;
  FNumberFormattingOptions FStack_68;
  
  if (param_1 == (UDS_DataSetBase *)0x0) {
    return;
  }
  UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&FStackX_8);
  bVar4 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar4) {
    pFVar5 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->PlayerSkillType,true);
    iVar3 = FFieldNotificationClassDescriptor::ID_SkillIcon.BitNumber;
    FVar15 = FFieldNotificationClassDescriptor::ID_SkillIcon.FieldName;
    if (this->ID_SkillIcon != pFVar5->ID_SkillIcon) {
      this->ID_SkillIcon = pFVar5->ID_SkillIcon;
      iStack_1c0 = iVar3;
      FStack_1c8 = FVar15;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1c8);
    }
    iVar3 = FFieldNotificationClassDescriptor::bIsRedDot.BitNumber;
    FStackX_10 = FFieldNotificationClassDescriptor::bIsRedDot.FieldName;
    this_01 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&FStackX_8);
    bVar4 = UDS_PlayerSkillData::IsLevelUpAble(this_01);
    if (this->bIsRedDot != bVar4) {
      this->bIsRedDot = bVar4;
      FStack_1b8 = FStackX_10;
      iStack_1b0 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1b8);
    }
    (this->Text_Unavailable).StringTableType = StringUi;
    (this->Text_Unavailable).StringTableID = 0x4bb0e;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->Text_Unavailable).FormatArgs.AllocatorInstance.Data,
               (this->Text_Unavailable).FormatArgs.ArrayNum);
    FVar15.ComparisonIndex.Value = 0;
    FVar15.Number = 0;
    piVar1 = &(this->Text_Unavailable).FormatArgs.ArrayMax;
    (this->Text_Unavailable).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Text_Unavailable).FormatArgs.AllocatorInstance,0,piVar1);
    }
    iStack_1a0 = FFieldNotificationClassDescriptor::Text_Unavailable.BitNumber;
    FStack_1a8 = FFieldNotificationClassDescriptor::Text_Unavailable.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1a8);
    (this->Text_Equip).StringTableType = StringUi;
    (this->Text_Equip).StringTableID = 0x6a;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->Text_Equip).FormatArgs.AllocatorInstance.Data,
               (this->Text_Equip).FormatArgs.ArrayNum);
    piVar1 = &(this->Text_Equip).FormatArgs.ArrayMax;
    (this->Text_Equip).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Text_Equip).FormatArgs.AllocatorInstance,0,piVar1);
    }
    iStack_190 = FFieldNotificationClassDescriptor::Text_Equip.BitNumber;
    FStack_198 = FFieldNotificationClassDescriptor::Text_Equip.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_198);
    (this->Text_LowDurability).StringTableType = StringUi;
    (this->Text_LowDurability).StringTableID = 0x4bb18;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->Text_LowDurability).FormatArgs.AllocatorInstance.Data,
               (this->Text_LowDurability).FormatArgs.ArrayNum);
    piVar1 = &(this->Text_LowDurability).FormatArgs.ArrayMax;
    (this->Text_LowDurability).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Text_LowDurability).FormatArgs.AllocatorInstance,0,piVar1);
    }
    iStack_180 = FFieldNotificationClassDescriptor::Text_LowDurability.BitNumber;
    FStack_188 = FFieldNotificationClassDescriptor::Text_LowDurability.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_188);
    FDS_Text::SetTextFromStringTable(&this->Text_Lv,StringUi,0x27d9);
    iStack_170 = FFieldNotificationClassDescriptor::Text_Lv.BitNumber;
    FStack_178 = FFieldNotificationClassDescriptor::Text_Lv.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_178);
    FDS_Text::SetTextFromStringID(&this->Text_SkillName,&pFVar5->ID_SkillName);
    iStack_160 = FFieldNotificationClassDescriptor::Text_SkillName.BitNumber;
    FStack_168 = FFieldNotificationClassDescriptor::Text_SkillName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_168);
    iVar3 = FFieldNotificationClassDescriptor::bIsActive.BitNumber;
    FStackX_10 = FFieldNotificationClassDescriptor::bIsActive.FieldName;
    pUVar6 = FWeakObjectPtr::Get(&FStackX_8);
    bVar4 = 0 < *(int *)&pUVar6[2].field_0x14;
    if (this->bIsActive != bVar4) {
      this->bIsActive = bVar4;
      FStack_158 = FStackX_10;
      iStack_150 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_158);
    }
    if (this->bIsActive == false) {
      FDS_Text::Reset(&this->Text_LvPoint);
      pFVar14 = &FStack_148;
      FStack_148 = FFieldNotificationClassDescriptor::Text_LvPoint.FieldName;
      iStack_140 = FFieldNotificationClassDescriptor::Text_LvPoint.BitNumber;
    }
    else {
      pFVar7 = FNumberFormattingOptions::FNumberFormattingOptions(&FStack_68);
      TStack_1e8.Object = *(FDS_ViewModelContext **)pFVar7;
      TStack_1e8.SharedReferenceCount.ReferenceController._0_4_ = pFVar7->MinimumIntegralDigits;
      TStack_1e8.SharedReferenceCount.ReferenceController._4_4_ = pFVar7->MaximumIntegralDigits;
      FStackX_10.ComparisonIndex.Value = pFVar7->MinimumFractionalDigits;
      FStackX_10.Number = pFVar7->MaximumFractionalDigits;
      pUVar6 = FWeakObjectPtr::Get(&FStackX_8);
      FStack_88 = (FName)TStack_1e8.Object;
      FStack_80 = (FName)TStack_1e8.SharedReferenceCount.ReferenceController;
      FStack_78 = FStackX_10;
      FDS_Text::SetTextFromNumber
                (&this->Text_LvPoint,*(int *)&pUVar6[2].field_0x14,
                 (FNumberFormattingOptions *)&FStack_88);
      pFVar14 = &FStack_138;
      FStack_138 = FFieldNotificationClassDescriptor::Text_LvPoint.FieldName;
      iStack_130 = FFieldNotificationClassDescriptor::Text_LvPoint.BitNumber;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
    uStack_1f0 = (ulonglong)TStack_1e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnEvent_Click).Delegate,(FWriteAccessScope *)&FStack_e8);
    puStack_d0 = &(this->BtnEvent_Click).Delegate.field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_d0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      pUStackX_18 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&pUStackX_18);
      puVar8[4] = OnSkillSlotClick;
      puVar8[5] = uStack_1f0;
    }
    if (FStack_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_e8.Accessor,&FStack_e8);
    }
    uStack_1f0 = (ulonglong)TStack_1e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnHoveredEventField).Delegate,(FWriteAccessScope *)&FStack_c8);
    puStack_b0 = &(this->BtnHoveredEventField).Delegate.field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_b0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      pUStackX_20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&pUStackX_20);
      puVar8[4] = OnSkillSlotHover;
      puVar8[5] = uStack_1f0;
    }
    if (FStack_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c8.Accessor,&FStack_c8);
    }
    uStack_1f0 = (ulonglong)TStack_1e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnUnHoveredEventField).Delegate,(FWriteAccessScope *)&FStack_a8);
    puStack_90 = &(this->BtnUnHoveredEventField).Delegate.field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_90);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      apUStack_1d8[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)apUStack_1d8);
      puVar8[4] = OnSkillSlotUnhover;
      puVar8[5] = uStack_1f0;
    }
    if (FStack_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_a8.Accessor,&FStack_a8);
    }
    iVar3 = FFieldNotificationClassDescriptor::bHasEquipItemType.BitNumber;
    FVar16 = FFieldNotificationClassDescriptor::bHasEquipItemType.FieldName;
    if ((pFVar5->ID_EquipISlotType == None) || (pFVar5->EquipItemType == None)) {
      if (this->bHasEquipItemType == false) {
        return;
      }
      this->bHasEquipItemType = false;
      pFVar14 = &FStack_108;
      FStack_108 = FVar16;
      iStack_100 = iVar3;
    }
    else {
      FVar10 = (FName)::operator_new(0x30);
      FVar16 = FVar15;
      if (FVar10 != (FName)0x0) {
        *(undefined8 *)((longlong)FVar10 + 0x18) = 0;
        *(undefined8 *)((longlong)FVar10 + 0x28) = 0;
        *(undefined8 *)((longlong)FVar10 + 8) = 0;
        *(undefined8 *)((longlong)FVar10 + 0x10) = 0;
        *(undefined ***)FVar10 = &___7FDS_ViewModelContext_EquipItemSlot__6B_;
        *(undefined8 *)((longlong)FVar10 + 0x20) = 0;
        FVar16 = FVar10;
      }
      FVar11 = (FName)::operator_new(0x20);
      FVar10 = FVar15;
      if (FVar11 != (FName)0x0) {
        *(undefined4 *)((longlong)FVar11 + 8) = 1;
        *(code **)((longlong)FVar11 + 0x10) = ViewModelContextDeleter;
        *(undefined ***)FVar11 =
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_EquipItemSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)FVar11 + 0xc) = 1;
        *(FName *)((longlong)FVar11 + 0x18) = FVar16;
        FVar10 = FVar11;
      }
      if ((FVar16 == (FName)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar12 = FDS_ViewModelContext_EquipItemSlot::StaticStruct();
      *(UScriptStruct **)((longlong)FVar16 + 8) = pUVar12;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (FVar10 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
        }
        TStack_f8.Object = (FDS_ViewModelContext *)FVar16;
        TStack_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar10;
        UDS_ViewModelContextManager::RegisterContext(this_02,&TStack_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_f8.SharedReferenceCount.ReferenceController);
      }
      *(undefined4 *)((longlong)FVar16 + 0x18) = 0x17c;
      uVar9 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
      *(ulong64 *)((longlong)FVar16 + 0x20) = uVar9;
      *(EDS_EquipSlotType *)((longlong)FVar16 + 0x28) = pFVar5->ID_EquipISlotType;
      this_00 = (this->VM_EquipSlot).field0_0x0.DebugPtr;
      if (this_00 == (UDS_VM_EquipItemSlot *)0x0) {
        if (FVar10 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&FStackX_10,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        if (FStackX_10 != (FName)0x0) {
          pUVar13 = Z_Construct_UClass_UDS_VM_EquipItemSlot_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)&FStackX_10,pUVar13);
          if (bVar4) {
            FVar15 = FStackX_10;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar10);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar15 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar15);
        }
        (this->VM_EquipSlot).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)FVar15;
      }
      else {
        if (FVar10 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
        }
        TStack_1e8.Object = (FDS_ViewModelContext *)FVar16;
        TStack_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar10;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&TStack_1e8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar10);
      iStack_120 = FFieldNotificationClassDescriptor::VM_EquipSlot.BitNumber;
      FStack_128 = FFieldNotificationClassDescriptor::VM_EquipSlot.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_128);
      iStack_110 = FFieldNotificationClassDescriptor::bHasEquipItemType.BitNumber;
      FStack_118 = FFieldNotificationClassDescriptor::bHasEquipItemType.FieldName;
      if (this->bHasEquipItemType == true) {
        return;
      }
      this->bHasEquipItemType = true;
      pFVar14 = &FStack_118;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
  }
  return;
}

// OnCloseInit @ 14bf635d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill_SkillSlot::OnCloseInit(UDS_VM_W_PlayerSkill_SkillSlot *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14bf6fa50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::OnSetViewModel
          (UDS_VM_W_PlayerSkill_SkillSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  FName *pFVar4;
  FName local_res10;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_VMC_PlayerSkill_SkillSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_VMC_PlayerSkill_SkillSlot>(&local_28,&local_18);
  if (local_28.Object == (FDS_VMC_PlayerSkill_SkillSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    this->PlayerSkillType = (local_28.Object)->PlayerSkillType;
    iVar3 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    if (this->bIsSelected != (local_28.Object)->IsSelected) {
      this->bIsSelected = (local_28.Object)->IsSelected;
      local_40 = iVar3;
      local_48 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    if (this->bIsSelected == false) {
      pFVar4 = ::FName::FName(&local_res10,"Unhover_Ani");
      (this->AnimationEvent).AnimationName = *pFVar4;
    }
    else {
      pFVar4 = ::FName::FName(&local_res10,"Click_Ani");
      (this->AnimationEvent).AnimationName = *pFVar4;
    }
    (this->AnimationEvent).AnimationEventType = PlayForwardSkip;
    local_30 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    Refresh(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSkillLevelUp @ 14bf70eb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::OnSkillLevelUp
          (UDS_VM_W_PlayerSkill_SkillSlot *this,EDS_PlayerSkillType param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  if (this->PlayerSkillType == param_1) {
    Refresh(this);
    pFVar1 = ::FName::FName(local_res8,"Skill_Levelup_Ani");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSkillOpen @ 14bf710a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::OnSkillOpen
          (UDS_VM_W_PlayerSkill_SkillSlot *this,EDS_PlayerSkillType param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  if (this->PlayerSkillType == param_1) {
    Refresh(this);
    pFVar1 = ::FName::FName(local_res8,"Skill_Open_Ani");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSkillReset @ 14bf71110

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::OnSkillReset
          (UDS_VM_W_PlayerSkill_SkillSlot *this,EDS_PlayerSkillType param_1)

{
  int *piVar1;
  UDS_VM_EquipItemSlot *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FDS_PlayerSkillBaseTableRow *pFVar5;
  UDS_PlayerSkillData *this_01;
  UObject *pUVar6;
  FNumberFormattingOptions *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FName FVar10;
  FName FVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_02;
  UClass *pUVar13;
  FName *pFVar14;
  FName FVar15;
  FName FVar16;
  FWeakObjectPtr FStackX_8;
  FName FStackX_10;
  UDS_VM_W_PlayerSkill_SkillSlot *pUStackX_18;
  UDS_VM_W_PlayerSkill_SkillSlot *pUStackX_20;
  ulonglong uStack_1f0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_1e8;
  UDS_VM_W_PlayerSkill_SkillSlot *apUStack_1d8 [2];
  FName FStack_1c8;
  int iStack_1c0;
  FName FStack_1b8;
  int iStack_1b0;
  FName FStack_1a8;
  int iStack_1a0;
  FName FStack_198;
  int iStack_190;
  FName FStack_188;
  int iStack_180;
  FName FStack_178;
  int iStack_170;
  FName FStack_168;
  int iStack_160;
  FName FStack_158;
  int iStack_150;
  FName FStack_148;
  int iStack_140;
  FName FStack_138;
  int iStack_130;
  FName FStack_128;
  int iStack_120;
  FName FStack_118;
  int iStack_110;
  FName FStack_108;
  int iStack_100;
  TSharedPtr<FDS_ViewModelContext,1> TStack_f8;
  FDestructionSentinel FStack_e8;
  undefined1 *puStack_d0;
  FDestructionSentinel FStack_c8;
  undefined1 *puStack_b0;
  FDestructionSentinel FStack_a8;
  undefined1 *puStack_90;
  FName FStack_88;
  FName FStack_80;
  FName FStack_78;
  FNumberFormattingOptions FStack_68;
  
  if (this->PlayerSkillType != param_1) {
    return;
  }
  UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&FStackX_8);
  bVar4 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar4) {
    pFVar5 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->PlayerSkillType,true);
    iVar3 = FFieldNotificationClassDescriptor::ID_SkillIcon.BitNumber;
    FVar15 = FFieldNotificationClassDescriptor::ID_SkillIcon.FieldName;
    if (this->ID_SkillIcon != pFVar5->ID_SkillIcon) {
      this->ID_SkillIcon = pFVar5->ID_SkillIcon;
      iStack_1c0 = iVar3;
      FStack_1c8 = FVar15;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1c8);
    }
    iVar3 = FFieldNotificationClassDescriptor::bIsRedDot.BitNumber;
    FStackX_10 = FFieldNotificationClassDescriptor::bIsRedDot.FieldName;
    this_01 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&FStackX_8);
    bVar4 = UDS_PlayerSkillData::IsLevelUpAble(this_01);
    if (this->bIsRedDot != bVar4) {
      this->bIsRedDot = bVar4;
      FStack_1b8 = FStackX_10;
      iStack_1b0 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1b8);
    }
    (this->Text_Unavailable).StringTableType = StringUi;
    (this->Text_Unavailable).StringTableID = 0x4bb0e;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->Text_Unavailable).FormatArgs.AllocatorInstance.Data,
               (this->Text_Unavailable).FormatArgs.ArrayNum);
    FVar15.ComparisonIndex.Value = 0;
    FVar15.Number = 0;
    piVar1 = &(this->Text_Unavailable).FormatArgs.ArrayMax;
    (this->Text_Unavailable).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Text_Unavailable).FormatArgs.AllocatorInstance,0,piVar1);
    }
    iStack_1a0 = FFieldNotificationClassDescriptor::Text_Unavailable.BitNumber;
    FStack_1a8 = FFieldNotificationClassDescriptor::Text_Unavailable.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1a8);
    (this->Text_Equip).StringTableType = StringUi;
    (this->Text_Equip).StringTableID = 0x6a;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->Text_Equip).FormatArgs.AllocatorInstance.Data,
               (this->Text_Equip).FormatArgs.ArrayNum);
    piVar1 = &(this->Text_Equip).FormatArgs.ArrayMax;
    (this->Text_Equip).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Text_Equip).FormatArgs.AllocatorInstance,0,piVar1);
    }
    iStack_190 = FFieldNotificationClassDescriptor::Text_Equip.BitNumber;
    FStack_198 = FFieldNotificationClassDescriptor::Text_Equip.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_198);
    (this->Text_LowDurability).StringTableType = StringUi;
    (this->Text_LowDurability).StringTableID = 0x4bb18;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->Text_LowDurability).FormatArgs.AllocatorInstance.Data,
               (this->Text_LowDurability).FormatArgs.ArrayNum);
    piVar1 = &(this->Text_LowDurability).FormatArgs.ArrayMax;
    (this->Text_LowDurability).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Text_LowDurability).FormatArgs.AllocatorInstance,0,piVar1);
    }
    iStack_180 = FFieldNotificationClassDescriptor::Text_LowDurability.BitNumber;
    FStack_188 = FFieldNotificationClassDescriptor::Text_LowDurability.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_188);
    FDS_Text::SetTextFromStringTable(&this->Text_Lv,StringUi,0x27d9);
    iStack_170 = FFieldNotificationClassDescriptor::Text_Lv.BitNumber;
    FStack_178 = FFieldNotificationClassDescriptor::Text_Lv.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_178);
    FDS_Text::SetTextFromStringID(&this->Text_SkillName,&pFVar5->ID_SkillName);
    iStack_160 = FFieldNotificationClassDescriptor::Text_SkillName.BitNumber;
    FStack_168 = FFieldNotificationClassDescriptor::Text_SkillName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_168);
    iVar3 = FFieldNotificationClassDescriptor::bIsActive.BitNumber;
    FStackX_10 = FFieldNotificationClassDescriptor::bIsActive.FieldName;
    pUVar6 = FWeakObjectPtr::Get(&FStackX_8);
    bVar4 = 0 < *(int *)&pUVar6[2].field_0x14;
    if (this->bIsActive != bVar4) {
      this->bIsActive = bVar4;
      FStack_158 = FStackX_10;
      iStack_150 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_158);
    }
    if (this->bIsActive == false) {
      FDS_Text::Reset(&this->Text_LvPoint);
      pFVar14 = &FStack_148;
      FStack_148 = FFieldNotificationClassDescriptor::Text_LvPoint.FieldName;
      iStack_140 = FFieldNotificationClassDescriptor::Text_LvPoint.BitNumber;
    }
    else {
      pFVar7 = FNumberFormattingOptions::FNumberFormattingOptions(&FStack_68);
      TStack_1e8.Object = *(FDS_ViewModelContext **)pFVar7;
      TStack_1e8.SharedReferenceCount.ReferenceController._0_4_ = pFVar7->MinimumIntegralDigits;
      TStack_1e8.SharedReferenceCount.ReferenceController._4_4_ = pFVar7->MaximumIntegralDigits;
      FStackX_10.ComparisonIndex.Value = pFVar7->MinimumFractionalDigits;
      FStackX_10.Number = pFVar7->MaximumFractionalDigits;
      pUVar6 = FWeakObjectPtr::Get(&FStackX_8);
      FStack_88 = (FName)TStack_1e8.Object;
      FStack_80 = (FName)TStack_1e8.SharedReferenceCount.ReferenceController;
      FStack_78 = FStackX_10;
      FDS_Text::SetTextFromNumber
                (&this->Text_LvPoint,*(int *)&pUVar6[2].field_0x14,
                 (FNumberFormattingOptions *)&FStack_88);
      pFVar14 = &FStack_138;
      FStack_138 = FFieldNotificationClassDescriptor::Text_LvPoint.FieldName;
      iStack_130 = FFieldNotificationClassDescriptor::Text_LvPoint.BitNumber;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
    uStack_1f0 = (ulonglong)TStack_1e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnEvent_Click).Delegate,(FWriteAccessScope *)&FStack_e8);
    puStack_d0 = &(this->BtnEvent_Click).Delegate.field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_d0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      pUStackX_18 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&pUStackX_18);
      puVar8[4] = OnSkillSlotClick;
      puVar8[5] = uStack_1f0;
    }
    if (FStack_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_e8.Accessor,&FStack_e8);
    }
    uStack_1f0 = (ulonglong)TStack_1e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnHoveredEventField).Delegate,(FWriteAccessScope *)&FStack_c8);
    puStack_b0 = &(this->BtnHoveredEventField).Delegate.field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_b0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      pUStackX_20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&pUStackX_20);
      puVar8[4] = OnSkillSlotHover;
      puVar8[5] = uStack_1f0;
    }
    if (FStack_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c8.Accessor,&FStack_c8);
    }
    uStack_1f0 = (ulonglong)TStack_1e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnUnHoveredEventField).Delegate,(FWriteAccessScope *)&FStack_a8);
    puStack_90 = &(this->BtnUnHoveredEventField).Delegate.field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_90);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      apUStack_1d8[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)apUStack_1d8);
      puVar8[4] = OnSkillSlotUnhover;
      puVar8[5] = uStack_1f0;
    }
    if (FStack_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_a8.Accessor,&FStack_a8);
    }
    iVar3 = FFieldNotificationClassDescriptor::bHasEquipItemType.BitNumber;
    FVar16 = FFieldNotificationClassDescriptor::bHasEquipItemType.FieldName;
    if ((pFVar5->ID_EquipISlotType == None) || (pFVar5->EquipItemType == None)) {
      if (this->bHasEquipItemType == false) {
        return;
      }
      this->bHasEquipItemType = false;
      pFVar14 = &FStack_108;
      FStack_108 = FVar16;
      iStack_100 = iVar3;
    }
    else {
      FVar10 = (FName)::operator_new(0x30);
      FVar16 = FVar15;
      if (FVar10 != (FName)0x0) {
        *(undefined8 *)((longlong)FVar10 + 0x18) = 0;
        *(undefined8 *)((longlong)FVar10 + 0x28) = 0;
        *(undefined8 *)((longlong)FVar10 + 8) = 0;
        *(undefined8 *)((longlong)FVar10 + 0x10) = 0;
        *(undefined ***)FVar10 = &___7FDS_ViewModelContext_EquipItemSlot__6B_;
        *(undefined8 *)((longlong)FVar10 + 0x20) = 0;
        FVar16 = FVar10;
      }
      FVar11 = (FName)::operator_new(0x20);
      FVar10 = FVar15;
      if (FVar11 != (FName)0x0) {
        *(undefined4 *)((longlong)FVar11 + 8) = 1;
        *(code **)((longlong)FVar11 + 0x10) = ViewModelContextDeleter;
        *(undefined ***)FVar11 =
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_EquipItemSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)FVar11 + 0xc) = 1;
        *(FName *)((longlong)FVar11 + 0x18) = FVar16;
        FVar10 = FVar11;
      }
      if ((FVar16 == (FName)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar12 = FDS_ViewModelContext_EquipItemSlot::StaticStruct();
      *(UScriptStruct **)((longlong)FVar16 + 8) = pUVar12;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (FVar10 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
        }
        TStack_f8.Object = (FDS_ViewModelContext *)FVar16;
        TStack_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar10;
        UDS_ViewModelContextManager::RegisterContext(this_02,&TStack_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_f8.SharedReferenceCount.ReferenceController);
      }
      *(undefined4 *)((longlong)FVar16 + 0x18) = 0x17c;
      uVar9 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
      *(ulong64 *)((longlong)FVar16 + 0x20) = uVar9;
      *(EDS_EquipSlotType *)((longlong)FVar16 + 0x28) = pFVar5->ID_EquipISlotType;
      this_00 = (this->VM_EquipSlot).field0_0x0.DebugPtr;
      if (this_00 == (UDS_VM_EquipItemSlot *)0x0) {
        if (FVar10 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&FStackX_10,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        if (FStackX_10 != (FName)0x0) {
          pUVar13 = Z_Construct_UClass_UDS_VM_EquipItemSlot_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)&FStackX_10,pUVar13);
          if (bVar4) {
            FVar15 = FStackX_10;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar10);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar15 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar15);
        }
        (this->VM_EquipSlot).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)FVar15;
      }
      else {
        if (FVar10 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
        }
        TStack_1e8.Object = (FDS_ViewModelContext *)FVar16;
        TStack_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar10;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&TStack_1e8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar10);
      iStack_120 = FFieldNotificationClassDescriptor::VM_EquipSlot.BitNumber;
      FStack_128 = FFieldNotificationClassDescriptor::VM_EquipSlot.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_128);
      iStack_110 = FFieldNotificationClassDescriptor::bHasEquipItemType.BitNumber;
      FStack_118 = FFieldNotificationClassDescriptor::bHasEquipItemType.FieldName;
      if (this->bHasEquipItemType == true) {
        return;
      }
      this->bHasEquipItemType = true;
      pFVar14 = &FStack_118;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
  }
  return;
}

// OnSkillSlotClick @ 14bf71140

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::OnSkillSlotClick
          (UDS_VM_W_PlayerSkill_SkillSlot *this,UObject *param_1)

{
  FName *pFVar1;
  UDS_PlayerSkillEvent *pUVar2;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Click_Ani");
  (this->AnimationEvent).AnimationName = *pFVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  pUVar2 = UDS_PlayerSkillEvent::GetEvent();
  if (pUVar2 != (UDS_PlayerSkillEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_PlayerSkillType>::Broadcast
              (&pUVar2->OnSkillSlotSelectDelegate,this->PlayerSkillType);
    return;
  }
  return;
}

// OnSkillSlotClickEvent @ 14bf712e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::OnSkillSlotClickEvent
          (UDS_VM_W_PlayerSkill_SkillSlot *this,EDS_PlayerSkillType param_1)

{
  FName *pFVar1;
  bool bVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  if ((this->bIsSelected == true) && (param_1 != this->PlayerSkillType)) {
    pFVar1 = ::FName::FName(&local_res8,"Unhover_Ani");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  bVar2 = param_1 == this->PlayerSkillType;
  if (this->bIsSelected != bVar2) {
    local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    this->bIsSelected = bVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSkillSlotHover @ 14bf713a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::OnSkillSlotHover
          (UDS_VM_W_PlayerSkill_SkillSlot *this,UObject *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Hover_Ani");
  (this->AnimationEvent).AnimationName = *pFVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSkillSlotUnhover @ 14bf71400

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::OnSkillSlotUnhover
          (UDS_VM_W_PlayerSkill_SkillSlot *this,UObject *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  if (this->bIsSelected != true) {
    pFVar1 = ::FName::FName(local_res8,"Unhover_Ani");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// PlayAnimation @ 14bf73a40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::PlayAnimation
          (UDS_VM_W_PlayerSkill_SkillSlot *this,FName *param_1,EDS_AnimationEventType param_2)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = *param_1;
  (this->AnimationEvent).AnimationEventType = param_2;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// Refresh @ 14bf74960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill_SkillSlot::Refresh(UDS_VM_W_PlayerSkill_SkillSlot *this)

{
  int *piVar1;
  UDS_VM_EquipItemSlot *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FDS_PlayerSkillBaseTableRow *pFVar5;
  UDS_PlayerSkillData *this_01;
  UObject *pUVar6;
  FNumberFormattingOptions *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FName FVar10;
  FName FVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_02;
  UClass *pUVar13;
  FName *pFVar14;
  FName FVar15;
  FName FVar16;
  FWeakObjectPtr local_res8;
  FName local_res10;
  UDS_VM_W_PlayerSkill_SkillSlot *local_res18;
  UDS_VM_W_PlayerSkill_SkillSlot *local_res20;
  ulonglong uStack_1f0;
  TSharedPtr<FDS_ViewModelContext,1> local_1e8;
  UDS_VM_W_PlayerSkill_SkillSlot *local_1d8 [2];
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  FName local_148;
  int local_140;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  FDestructionSentinel local_e8;
  undefined1 *local_d0;
  FDestructionSentinel local_c8;
  undefined1 *local_b0;
  FDestructionSentinel local_a8;
  undefined1 *local_90;
  FName local_88;
  FName FStack_80;
  FName local_78;
  FNumberFormattingOptions local_68;
  
  UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&local_res8);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    pFVar5 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->PlayerSkillType,true);
    iVar3 = FFieldNotificationClassDescriptor::ID_SkillIcon.BitNumber;
    FVar15 = FFieldNotificationClassDescriptor::ID_SkillIcon.FieldName;
    if (this->ID_SkillIcon != pFVar5->ID_SkillIcon) {
      this->ID_SkillIcon = pFVar5->ID_SkillIcon;
      local_1c0 = iVar3;
      local_1c8 = FVar15;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    }
    iVar3 = FFieldNotificationClassDescriptor::bIsRedDot.BitNumber;
    local_res10 = FFieldNotificationClassDescriptor::bIsRedDot.FieldName;
    this_01 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&local_res8);
    bVar4 = UDS_PlayerSkillData::IsLevelUpAble(this_01);
    if (this->bIsRedDot != bVar4) {
      this->bIsRedDot = bVar4;
      local_1b8 = local_res10;
      local_1b0 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    (this->Text_Unavailable).StringTableType = StringUi;
    (this->Text_Unavailable).StringTableID = 0x4bb0e;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->Text_Unavailable).FormatArgs.AllocatorInstance.Data,
               (this->Text_Unavailable).FormatArgs.ArrayNum);
    FVar15.ComparisonIndex.Value = 0;
    FVar15.Number = 0;
    piVar1 = &(this->Text_Unavailable).FormatArgs.ArrayMax;
    (this->Text_Unavailable).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Text_Unavailable).FormatArgs.AllocatorInstance,0,piVar1);
    }
    local_1a0 = FFieldNotificationClassDescriptor::Text_Unavailable.BitNumber;
    local_1a8 = FFieldNotificationClassDescriptor::Text_Unavailable.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    (this->Text_Equip).StringTableType = StringUi;
    (this->Text_Equip).StringTableID = 0x6a;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->Text_Equip).FormatArgs.AllocatorInstance.Data,
               (this->Text_Equip).FormatArgs.ArrayNum);
    piVar1 = &(this->Text_Equip).FormatArgs.ArrayMax;
    (this->Text_Equip).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Text_Equip).FormatArgs.AllocatorInstance,0,piVar1);
    }
    local_190 = FFieldNotificationClassDescriptor::Text_Equip.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::Text_Equip.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    (this->Text_LowDurability).StringTableType = StringUi;
    (this->Text_LowDurability).StringTableID = 0x4bb18;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->Text_LowDurability).FormatArgs.AllocatorInstance.Data,
               (this->Text_LowDurability).FormatArgs.ArrayNum);
    piVar1 = &(this->Text_LowDurability).FormatArgs.ArrayMax;
    (this->Text_LowDurability).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Text_LowDurability).FormatArgs.AllocatorInstance,0,piVar1);
    }
    local_180 = FFieldNotificationClassDescriptor::Text_LowDurability.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::Text_LowDurability.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    FDS_Text::SetTextFromStringTable(&this->Text_Lv,StringUi,0x27d9);
    local_170 = FFieldNotificationClassDescriptor::Text_Lv.BitNumber;
    local_178 = FFieldNotificationClassDescriptor::Text_Lv.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    FDS_Text::SetTextFromStringID(&this->Text_SkillName,&pFVar5->ID_SkillName);
    local_160 = FFieldNotificationClassDescriptor::Text_SkillName.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::Text_SkillName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    iVar3 = FFieldNotificationClassDescriptor::bIsActive.BitNumber;
    local_res10 = FFieldNotificationClassDescriptor::bIsActive.FieldName;
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    bVar4 = 0 < *(int *)&pUVar6[2].field_0x14;
    if (this->bIsActive != bVar4) {
      this->bIsActive = bVar4;
      local_158 = local_res10;
      local_150 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    if (this->bIsActive == false) {
      FDS_Text::Reset(&this->Text_LvPoint);
      pFVar14 = &local_148;
      local_148 = FFieldNotificationClassDescriptor::Text_LvPoint.FieldName;
      local_140 = FFieldNotificationClassDescriptor::Text_LvPoint.BitNumber;
    }
    else {
      pFVar7 = FNumberFormattingOptions::FNumberFormattingOptions(&local_68);
      local_1e8.Object = *(FDS_ViewModelContext **)pFVar7;
      local_1e8.SharedReferenceCount.ReferenceController._0_4_ = pFVar7->MinimumIntegralDigits;
      local_1e8.SharedReferenceCount.ReferenceController._4_4_ = pFVar7->MaximumIntegralDigits;
      local_res10.ComparisonIndex.Value = pFVar7->MinimumFractionalDigits;
      local_res10.Number = pFVar7->MaximumFractionalDigits;
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      local_88 = (FName)local_1e8.Object;
      FStack_80 = (FName)local_1e8.SharedReferenceCount.ReferenceController;
      local_78 = local_res10;
      FDS_Text::SetTextFromNumber
                (&this->Text_LvPoint,*(int *)&pUVar6[2].field_0x14,
                 (FNumberFormattingOptions *)&local_88);
      pFVar14 = &local_138;
      local_138 = FFieldNotificationClassDescriptor::Text_LvPoint.FieldName;
      local_130 = FFieldNotificationClassDescriptor::Text_LvPoint.BitNumber;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
    uStack_1f0 = (ulonglong)local_1e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnEvent_Click).Delegate,(FWriteAccessScope *)&local_e8);
    local_d0 = &(this->BtnEvent_Click).Delegate.field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_d0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res18 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res18);
      puVar8[4] = OnSkillSlotClick;
      puVar8[5] = uStack_1f0;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    uStack_1f0 = (ulonglong)local_1e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnHoveredEventField).Delegate,(FWriteAccessScope *)&local_c8);
    local_b0 = &(this->BtnHoveredEventField).Delegate.field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_b0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res20);
      puVar8[4] = OnSkillSlotHover;
      puVar8[5] = uStack_1f0;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    uStack_1f0 = (ulonglong)local_1e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnUnHoveredEventField).Delegate,(FWriteAccessScope *)&local_a8);
    local_90 = &(this->BtnUnHoveredEventField).Delegate.field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_90);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_1d8[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)local_1d8);
      puVar8[4] = OnSkillSlotUnhover;
      puVar8[5] = uStack_1f0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    iVar3 = FFieldNotificationClassDescriptor::bHasEquipItemType.BitNumber;
    FVar16 = FFieldNotificationClassDescriptor::bHasEquipItemType.FieldName;
    if ((pFVar5->ID_EquipISlotType == None) || (pFVar5->EquipItemType == None)) {
      if (this->bHasEquipItemType == false) {
        return;
      }
      this->bHasEquipItemType = false;
      pFVar14 = &local_108;
      local_108 = FVar16;
      local_100 = iVar3;
    }
    else {
      FVar10 = (FName)::operator_new(0x30);
      FVar16 = FVar15;
      if (FVar10 != (FName)0x0) {
        *(undefined8 *)((longlong)FVar10 + 0x18) = 0;
        *(undefined8 *)((longlong)FVar10 + 0x28) = 0;
        *(undefined8 *)((longlong)FVar10 + 8) = 0;
        *(undefined8 *)((longlong)FVar10 + 0x10) = 0;
        *(undefined ***)FVar10 = &___7FDS_ViewModelContext_EquipItemSlot__6B_;
        *(undefined8 *)((longlong)FVar10 + 0x20) = 0;
        FVar16 = FVar10;
      }
      FVar11 = (FName)::operator_new(0x20);
      FVar10 = FVar15;
      if (FVar11 != (FName)0x0) {
        *(undefined4 *)((longlong)FVar11 + 8) = 1;
        *(code **)((longlong)FVar11 + 0x10) = ViewModelContextDeleter;
        *(undefined ***)FVar11 =
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_EquipItemSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)FVar11 + 0xc) = 1;
        *(FName *)((longlong)FVar11 + 0x18) = FVar16;
        FVar10 = FVar11;
      }
      if ((FVar16 == (FName)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar12 = FDS_ViewModelContext_EquipItemSlot::StaticStruct();
      *(UScriptStruct **)((longlong)FVar16 + 8) = pUVar12;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (FVar10 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
        }
        local_f8.Object = (FDS_ViewModelContext *)FVar16;
        local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar10;
        UDS_ViewModelContextManager::RegisterContext(this_02,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      *(undefined4 *)((longlong)FVar16 + 0x18) = 0x17c;
      uVar9 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
      *(ulong64 *)((longlong)FVar16 + 0x20) = uVar9;
      *(EDS_EquipSlotType *)((longlong)FVar16 + 0x28) = pFVar5->ID_EquipISlotType;
      this_00 = (this->VM_EquipSlot).field0_0x0.DebugPtr;
      if (this_00 == (UDS_VM_EquipItemSlot *)0x0) {
        if (FVar10 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_res10,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        if (local_res10 != (FName)0x0) {
          pUVar13 = Z_Construct_UClass_UDS_VM_EquipItemSlot_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar13);
          if (bVar4) {
            FVar15 = local_res10;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar10);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar15 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar15);
        }
        (this->VM_EquipSlot).field0_0x0.DebugPtr = (UDS_VM_EquipItemSlot *)FVar15;
      }
      else {
        if (FVar10 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar10 + 8) = *(int *)((longlong)FVar10 + 8) + 1;
          UNLOCK();
        }
        local_1e8.Object = (FDS_ViewModelContext *)FVar16;
        local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar10;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_1e8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar10);
      local_120 = FFieldNotificationClassDescriptor::VM_EquipSlot.BitNumber;
      local_128 = FFieldNotificationClassDescriptor::VM_EquipSlot.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
      local_110 = FFieldNotificationClassDescriptor::bHasEquipItemType.BitNumber;
      local_118 = FFieldNotificationClassDescriptor::bHasEquipItemType.FieldName;
      if (this->bHasEquipItemType == true) {
        return;
      }
      this->bHasEquipItemType = true;
      pFVar14 = &local_118;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
  }
  return;
}

// SetSelected @ 14bf7d510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillSlot::SetSelected(UDS_VM_W_PlayerSkill_SkillSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (this->bIsSelected != param_1) {
    this->bIsSelected = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// StopAnimation @ 14bf83540

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill_SkillSlot::StopAnimation(UDS_VM_W_PlayerSkill_SkillSlot *this)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationEventType = StopAnimation;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf858a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill_SkillSlot::UnbindModel(UDS_VM_W_PlayerSkill_SkillSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_PlayerSkillEvent *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  TDS_DataSetGetter<UDS_PlayerSkillDataSet>::Get((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr> *)local_148,(void *)0x0)
  ;
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_PlayerSkill_SkillSlot::UnbindModel",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x4e,L"mainPlayerDataSet is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(local_148);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
    pUVar4 = UDS_PlayerSkillEvent::GetEvent();
    if (pUVar4 != (UDS_PlayerSkillEvent *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar4->OnSkillSlotSelectDelegate,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar4->OnSkillSlotOpenDelegate,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar4->OnSkillSlotLevelUpDelegate,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnSkillResetDelegate
                 ,this);
    }
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

