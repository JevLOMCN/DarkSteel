// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b7494d0

UClass * __cdecl UDS_VM_W_PlayerSkill_SkillInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_PlayerSkill_SkillInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_PlayerSkill_SkillInfo,0x338,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_PlayerSkill_SkillInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_PlayerSkill_SkillInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillInfo.InnerSingleton;
}

// UDS_VM_W_PlayerSkill_SkillInfo @ 14b74d440

UDS_VM_W_PlayerSkill_SkillInfo * __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::UDS_VM_W_PlayerSkill_SkillInfo
          (UDS_VM_W_PlayerSkill_SkillInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_PlayerSkill_SkillInfo__6B_;
  (this->Text_CoinValue).StringTableID = 0;
  (this->Text_CoinValue).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_CoinValue).StringEnumTableNameID.Number = 0;
  (this->Text_CoinValue).DateTime.Ticks = 0;
  (this->Text_CoinValue).TimeSpan.Ticks = 0;
  (this->Text_CoinValue).TimeExpressionType = None;
  (this->Text_CoinValue).IsExpression = false;
  (this->Text_CoinValue).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_CoinValue).UniqueString.Data.ArrayNum = 0;
  (this->Text_CoinValue).UniqueString.Data.ArrayMax = 0;
  (this->Text_CoinValue).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_CoinValue).FormatArgs.ArrayNum = 0;
  (this->Text_CoinValue).FormatArgs.ArrayMax = 0;
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
  (this->Text_SkillDesc).StringTableType = None;
  (this->Text_SkillDesc).StringTableID = 0;
  (this->Text_SkillDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_SkillDesc).StringEnumTableNameID.Number = 0;
  (this->Text_SkillDesc).DateTime.Ticks = 0;
  (this->Text_SkillDesc).TimeSpan.Ticks = 0;
  (this->Text_SkillDesc).TimeExpressionType = None;
  (this->Text_SkillDesc).IsExpression = false;
  (this->Text_SkillDesc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SkillDesc).UniqueString.Data.ArrayNum = 0;
  (this->Text_SkillDesc).UniqueString.Data.ArrayMax = 0;
  (this->Text_SkillDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SkillDesc).FormatArgs.ArrayNum = 0;
  (this->Text_SkillDesc).FormatArgs.ArrayMax = 0;
  (this->Text_SubTitle).StringTableType = None;
  (this->Text_SubTitle).StringTableID = 0;
  (this->Text_SubTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_SubTitle).StringEnumTableNameID.Number = 0;
  (this->Text_SubTitle).DateTime.Ticks = 0;
  (this->Text_SubTitle).TimeSpan.Ticks = 0;
  (this->Text_SubTitle).TimeExpressionType = None;
  (this->Text_SubTitle).IsExpression = false;
  (this->Text_SubTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SubTitle).UniqueString.Data.ArrayNum = 0;
  (this->Text_SubTitle).UniqueString.Data.ArrayMax = 0;
  (this->Text_SubTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SubTitle).FormatArgs.ArrayNum = 0;
  (this->Text_SubTitle).FormatArgs.ArrayMax = 0;
  (this->Text_LevelUpButton).StringTableType = None;
  (this->Text_LevelUpButton).StringTableID = 0;
  (this->Text_LevelUpButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_LevelUpButton).StringEnumTableNameID.Number = 0;
  (this->Text_LevelUpButton).DateTime.Ticks = 0;
  (this->Text_LevelUpButton).TimeSpan.Ticks = 0;
  (this->Text_LevelUpButton).TimeExpressionType = None;
  (this->Text_LevelUpButton).IsExpression = false;
  (this->Text_LevelUpButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Text_LevelUpButton).UniqueString.Data.ArrayNum = 0;
  (this->Text_LevelUpButton).UniqueString.Data.ArrayMax = 0;
  (this->Text_LevelUpButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_LevelUpButton).FormatArgs.ArrayNum = 0;
  (this->Text_LevelUpButton).FormatArgs.ArrayMax = 0;
  (this->Text_HaloPoint).StringTableType = None;
  (this->Text_HaloPoint).StringTableID = 0;
  (this->Text_HaloPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_HaloPoint).StringEnumTableNameID.Number = 0;
  (this->Text_HaloPoint).DateTime.Ticks = 0;
  (this->Text_HaloPoint).TimeSpan.Ticks = 0;
  (this->Text_HaloPoint).TimeExpressionType = None;
  (this->Text_HaloPoint).IsExpression = false;
  (this->Text_HaloPoint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_HaloPoint).UniqueString.Data.ArrayNum = 0;
  (this->Text_HaloPoint).UniqueString.Data.ArrayMax = 0;
  (this->Text_HaloPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_HaloPoint).FormatArgs.ArrayNum = 0;
  (this->Text_HaloPoint).FormatArgs.ArrayMax = 0;
  (this->Text_MaxLevel).StringTableType = None;
  (this->Text_MaxLevel).StringTableID = 0;
  (this->Text_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->Text_MaxLevel).DateTime.Ticks = 0;
  (this->Text_MaxLevel).TimeSpan.Ticks = 0;
  (this->Text_MaxLevel).TimeExpressionType = None;
  (this->Text_CoinValue).StringTableType = None;
  (this->Text_MaxLevel).IsExpression = false;
  (this->Text_MaxLevel).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->Text_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->Text_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->Text_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->BtnEvent_ResetClick)._padding_ = '\0';
  (this->BtnEvent_ResetClick).bIsCustomSelected = false;
  (this->BtnEvent_ResetClick).bIsLacked = false;
  (this->BtnEvent_ResetClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_ResetClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_ResetClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_ResetClick).Delegate.field_0x10 = 0;
  (this->BtnEvent_LevelUpClick)._padding_ = '\0';
  (this->BtnEvent_LevelUpClick).bIsCustomSelected = false;
  (this->BtnEvent_LevelUpClick).bIsLacked = false;
  (this->BtnEvent_LevelUpClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_LevelUpClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_LevelUpClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_LevelUpClick).Delegate.field_0x10 = 0;
  (this->EntryBindingEvent_ItemSlots).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEvent_ItemSlots).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEvent_ItemSlots).UserObjectList.ArrayMax = 0;
  this->bCanReset = false;
  this->bShowHaloPoint = false;
  return this;
}

// UDS_VM_W_PlayerSkill_SkillInfo @ 14b74d6d0

UDS_VM_W_PlayerSkill_SkillInfo * __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::UDS_VM_W_PlayerSkill_SkillInfo
          (UDS_VM_W_PlayerSkill_SkillInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_PlayerSkill_SkillInfo__6B_;
  (this->Text_CoinValue).StringTableID = 0;
  (this->Text_CoinValue).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_CoinValue).StringEnumTableNameID.Number = 0;
  (this->Text_CoinValue).DateTime.Ticks = 0;
  (this->Text_CoinValue).TimeSpan.Ticks = 0;
  (this->Text_CoinValue).TimeExpressionType = None;
  (this->Text_CoinValue).IsExpression = false;
  (this->Text_CoinValue).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_CoinValue).UniqueString.Data.ArrayNum = 0;
  (this->Text_CoinValue).UniqueString.Data.ArrayMax = 0;
  (this->Text_CoinValue).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_CoinValue).FormatArgs.ArrayNum = 0;
  (this->Text_CoinValue).FormatArgs.ArrayMax = 0;
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
  (this->Text_SkillDesc).StringTableType = None;
  (this->Text_SkillDesc).StringTableID = 0;
  (this->Text_SkillDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_SkillDesc).StringEnumTableNameID.Number = 0;
  (this->Text_SkillDesc).DateTime.Ticks = 0;
  (this->Text_SkillDesc).TimeSpan.Ticks = 0;
  (this->Text_SkillDesc).TimeExpressionType = None;
  (this->Text_SkillDesc).IsExpression = false;
  (this->Text_SkillDesc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SkillDesc).UniqueString.Data.ArrayNum = 0;
  (this->Text_SkillDesc).UniqueString.Data.ArrayMax = 0;
  (this->Text_SkillDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SkillDesc).FormatArgs.ArrayNum = 0;
  (this->Text_SkillDesc).FormatArgs.ArrayMax = 0;
  (this->Text_SubTitle).StringTableType = None;
  (this->Text_SubTitle).StringTableID = 0;
  (this->Text_SubTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_SubTitle).StringEnumTableNameID.Number = 0;
  (this->Text_SubTitle).DateTime.Ticks = 0;
  (this->Text_SubTitle).TimeSpan.Ticks = 0;
  (this->Text_SubTitle).TimeExpressionType = None;
  (this->Text_SubTitle).IsExpression = false;
  (this->Text_SubTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SubTitle).UniqueString.Data.ArrayNum = 0;
  (this->Text_SubTitle).UniqueString.Data.ArrayMax = 0;
  (this->Text_SubTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_SubTitle).FormatArgs.ArrayNum = 0;
  (this->Text_SubTitle).FormatArgs.ArrayMax = 0;
  (this->Text_LevelUpButton).StringTableType = None;
  (this->Text_LevelUpButton).StringTableID = 0;
  (this->Text_LevelUpButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_LevelUpButton).StringEnumTableNameID.Number = 0;
  (this->Text_LevelUpButton).DateTime.Ticks = 0;
  (this->Text_LevelUpButton).TimeSpan.Ticks = 0;
  (this->Text_LevelUpButton).TimeExpressionType = None;
  (this->Text_LevelUpButton).IsExpression = false;
  (this->Text_LevelUpButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Text_LevelUpButton).UniqueString.Data.ArrayNum = 0;
  (this->Text_LevelUpButton).UniqueString.Data.ArrayMax = 0;
  (this->Text_LevelUpButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_LevelUpButton).FormatArgs.ArrayNum = 0;
  (this->Text_LevelUpButton).FormatArgs.ArrayMax = 0;
  (this->Text_HaloPoint).StringTableType = None;
  (this->Text_HaloPoint).StringTableID = 0;
  (this->Text_HaloPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_HaloPoint).StringEnumTableNameID.Number = 0;
  (this->Text_HaloPoint).DateTime.Ticks = 0;
  (this->Text_HaloPoint).TimeSpan.Ticks = 0;
  (this->Text_HaloPoint).TimeExpressionType = None;
  (this->Text_HaloPoint).IsExpression = false;
  (this->Text_HaloPoint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_HaloPoint).UniqueString.Data.ArrayNum = 0;
  (this->Text_HaloPoint).UniqueString.Data.ArrayMax = 0;
  (this->Text_HaloPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_HaloPoint).FormatArgs.ArrayNum = 0;
  (this->Text_HaloPoint).FormatArgs.ArrayMax = 0;
  (this->Text_MaxLevel).StringTableType = None;
  (this->Text_MaxLevel).StringTableID = 0;
  (this->Text_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->Text_MaxLevel).DateTime.Ticks = 0;
  (this->Text_MaxLevel).TimeSpan.Ticks = 0;
  (this->Text_MaxLevel).TimeExpressionType = None;
  (this->Text_CoinValue).StringTableType = None;
  (this->Text_MaxLevel).IsExpression = false;
  (this->Text_MaxLevel).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->Text_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->Text_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->Text_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->BtnEvent_ResetClick)._padding_ = '\0';
  (this->BtnEvent_ResetClick).bIsCustomSelected = false;
  (this->BtnEvent_ResetClick).bIsLacked = false;
  (this->BtnEvent_ResetClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_ResetClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_ResetClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_ResetClick).Delegate.field_0x10 = 0;
  (this->BtnEvent_LevelUpClick)._padding_ = '\0';
  (this->BtnEvent_LevelUpClick).bIsCustomSelected = false;
  (this->BtnEvent_LevelUpClick).bIsLacked = false;
  (this->BtnEvent_LevelUpClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_LevelUpClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_LevelUpClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_LevelUpClick).Delegate.field_0x10 = 0;
  (this->EntryBindingEvent_ItemSlots).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEvent_ItemSlots).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEvent_ItemSlots).UserObjectList.ArrayMax = 0;
  this->bCanReset = false;
  this->bShowHaloPoint = false;
  return this;
}

// ~UDS_VM_W_PlayerSkill_SkillInfo @ 14b74f130

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::~UDS_VM_W_PlayerSkill_SkillInfo
          (UDS_VM_W_PlayerSkill_SkillInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_PlayerSkill_SkillInfo__6B_;
  pFVar1 = (this->EntryBindingEvent_ItemSlots).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_LevelUpClick).Delegate);
  pvVar2 = *(void **)&(this->BtnEvent_LevelUpClick).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_LevelUpClick).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_ResetClick).Delegate);
  pvVar2 = *(void **)&(this->BtnEvent_ResetClick).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_ResetClick).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_MaxLevel).FormatArgs.AllocatorInstance.Data,
             (this->Text_MaxLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->Text_MaxLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Text_MaxLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_HaloPoint).FormatArgs.AllocatorInstance.Data,
             (this->Text_HaloPoint).FormatArgs.ArrayNum);
  pFVar1 = (this->Text_HaloPoint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Text_HaloPoint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_LevelUpButton).FormatArgs.AllocatorInstance.Data,
             (this->Text_LevelUpButton).FormatArgs.ArrayNum);
  pFVar1 = (this->Text_LevelUpButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Text_LevelUpButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_SubTitle).FormatArgs.AllocatorInstance.Data,
             (this->Text_SubTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->Text_SubTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Text_SubTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_SkillDesc).FormatArgs.AllocatorInstance.Data,
             (this->Text_SkillDesc).FormatArgs.ArrayNum);
  pFVar1 = (this->Text_SkillDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Text_SkillDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_SkillName).FormatArgs.AllocatorInstance.Data,
             (this->Text_SkillName).FormatArgs.ArrayNum);
  pFVar1 = (this->Text_SkillName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Text_SkillName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_CoinValue).FormatArgs.AllocatorInstance.Data,
             (this->Text_CoinValue).FormatArgs.ArrayNum);
  pFVar1 = (this->Text_CoinValue).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Text_CoinValue).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b751400

IClassDescriptor * __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::GetFieldNotificationDescriptor(UDS_VM_W_PlayerSkill_SkillInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_PlayerSkill_SkillInfo::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751cc0

UClass * __cdecl UDS_VM_W_PlayerSkill_SkillInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_PlayerSkill_SkillInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_PlayerSkill_SkillInfo,0x338,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_PlayerSkill_SkillInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_PlayerSkill_SkillInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_PlayerSkill_SkillInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_PlayerSkill_SkillInfo @ 14b752410

void __cdecl
UDS_VM_W_PlayerSkill_SkillInfo::StaticRegisterNativesUDS_VM_W_PlayerSkill_SkillInfo(void)

{
  return;
}

// BindModel @ 14bf42590

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill_SkillInfo::BindModel(UDS_VM_W_PlayerSkill_SkillInfo *this)

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

// InitViewModel @ 14bf5c1c0

void __thiscall UDS_VM_W_PlayerSkill_SkillInfo::InitViewModel(UDS_VM_W_PlayerSkill_SkillInfo *this)

{
  return;
}

// OnActivePopupCancelClick @ 14bf5e750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::OnActivePopupCancelClick
          (UDS_VM_W_PlayerSkill_SkillInfo *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnActivePopupOkClick @ 14bf5e790

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::OnActivePopupOkClick
          (UDS_VM_W_PlayerSkill_SkillInfo *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_W_PlayerSkill_SkillInfo *local_res8;
  uint local_res18 [4];
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8 = (UDS_VM_W_PlayerSkill_SkillInfo *)((ulonglong)local_res8 & 0xffffffff00000000);
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res18,(float *)&local_res8);
  }
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = OnActiveSuccess;
    puVar1[5] = (ulonglong)uStack_5c << 0x20;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FDS_PlayerSkillService::SendPlayerSkillLearnRequest
            (this->PlayerSkillType,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
  return;
}

// OnActiveSuccess @ 14bf5e900

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::OnActiveSuccess(UDS_VM_W_PlayerSkill_SkillInfo *this)

{
  UDS_PlayerSkillEvent *pUVar1;
  
  Refresh(this);
  pUVar1 = UDS_PlayerSkillEvent::GetEvent();
  if (pUVar1 != (UDS_PlayerSkillEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_PlayerSkillType>::Broadcast
              (&pUVar1->OnSkillSlotOpenDelegate,this->PlayerSkillType);
    return;
  }
  return;
}

// OnCloseInit @ 14bf635c0

void __thiscall UDS_VM_W_PlayerSkill_SkillInfo::OnCloseInit(UDS_VM_W_PlayerSkill_SkillInfo *this)

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

// OnLevelUpClick @ 14bf64490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::OnLevelUpClick
          (UDS_VM_W_PlayerSkill_SkillInfo *this,UObject *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  FDS_Text *pFVar4;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 auStackY_1f8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_1c8 [2];
  code *local_1b8;
  undefined8 uStack_1b0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_1a8;
  FDS_Text local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_PlayerSkill_SkillInfo::OnLevelUpClick",0x2e,Yes);
    pwVar8 = L"commonPopupMng is nullptr.";
    uVar7 = 0x141;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)local_1c8,(void *)0x0);
    if (!bVar1) {
      if (this->bIsActive == false) {
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
        pFVar4 = FDS_Text::FromStringTableFormat<>(&local_190,StringUi,0x4bb12);
        UDS_M_CommonPopup::SetTitle(pUVar3,pFVar4);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
        pFVar4 = FDS_Text::FromStringTableFormat<>(&local_190,StringUi,0x4bb13);
        UDS_M_CommonPopup::SetMainContent(pUVar3,pFVar4);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
        UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x65,false);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
        uStack_1b0._0_4_ = 0;
        local_1b8 = OnActivePopupOkClick;
        pTVar5 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_W_PlayerSkill_SkillInfo>
                           (&local_1a8,this,(pmf_106b4f9b *)&local_1b8);
        UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonConfirm,pTVar5);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
        UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
        uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
        local_1b8 = OnActivePopupCancelClick;
        pTVar5 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_W_PlayerSkill_SkillInfo>
                           (&local_1a8,this,(pmf_106b4f9b *)&local_1b8);
        UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonCancel,pTVar5);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
        return;
      }
      uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
      local_1b8 = OnLevelupSuccess;
      pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateUObject<UDS_VM_W_PlayerSkill_SkillInfo>
                         ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_1a8,
                          this,(pmf_ea6b9101 *)&local_1b8);
      FDS_PlayerSkillService::SendPlayerSkillLevelUpRequest(this->PlayerSkillType,pTVar6);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_PlayerSkill_SkillInfo::OnLevelUpClick",0x2e,Yes);
    pwVar8 = L"commonPopupModel is nullptr.";
    uVar7 = 0x148;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnLevelupSuccess @ 14bf64780

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::OnLevelupSuccess(UDS_VM_W_PlayerSkill_SkillInfo *this)

{
  UDS_PlayerSkillEvent *pUVar1;
  
  Refresh(this);
  pUVar1 = UDS_PlayerSkillEvent::GetEvent();
  if (pUVar1 != (UDS_PlayerSkillEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_PlayerSkillType>::Broadcast
              (&pUVar1->OnSkillSlotLevelUpDelegate,this->PlayerSkillType);
    return;
  }
  return;
}

// OnResetClick @ 14bf66c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::OnResetClick(UDS_VM_W_PlayerSkill_SkillInfo *this,UObject *param_1)

{
  EDS_MoneyType EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  FDS_PlayerSkillLevelTableRow *pFVar10;
  UDS_M_CommonPopup *pUVar11;
  long64 lVar12;
  FDS_MoneyBaseTableRow *pFVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  EDS_CommonPopupContext EVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 uVar20;
  ulonglong uVar21;
  undefined1 auStackY_418 [32];
  FWeakObjectPtr local_3d8 [2];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_3c8;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_3b8;
  FWeakObjectPtr local_3a8;
  undefined1 local_3a0 [8];
  FDelegateAllocation local_398;
  undefined1 local_388 [8];
  FDelegateAllocation local_380;
  UDS_VM_W_PlayerSkill_SkillInfo *local_370;
  UDS_VM_W_PlayerSkill_SkillInfo *local_368;
  UDS_VM_W_PlayerSkill_SkillInfo *local_360;
  FDS_Text local_358;
  FDS_Text local_308;
  FDestructionSentinel local_2b8;
  FDelegateAllocation *local_2a0;
  FDestructionSentinel local_298;
  FDelegateAllocation *local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_370 = this;
  UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&local_3a8);
  bVar4 = FWeakObjectPtr::IsValid(&local_3a8);
  if (bVar4) {
    this_00 = UDS_CommonPopupManager::GetInst();
    if (this_00 == (UDS_CommonPopupManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_W_PlayerSkill_SkillInfo::OnResetClick",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar8,1,Warning,local_278.Ptr,199,L"commonPopupMng is nullptr.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
    else {
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
      bVar4 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)local_3d8,(void *)0x0);
      if (bVar4) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_W_PlayerSkill_SkillInfo::OnResetClick",0x2c,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_158.Ptr,0xce,L"commonPopupModel is nullptr.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        pUVar9 = FWeakObjectPtr::Get(&local_3a8);
        if (*(int *)&pUVar9[2].field_0x14 == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8530248582538723541>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerSkill\\DS_VM_W_PlayerSkill_SkillInfo.cpp"
                             ,0xd5,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pFVar10 = FDS_PlayerSkillLevelTableRow::GetRef
                              (this->PlayerSkillType,*(int *)&pUVar9[2].field_0x14,true);
          uVar18 = 0;
          iVar6 = (pFVar10->ID_ResetItem).ArrayNum;
          uVar19 = uVar18;
          uVar21 = uVar18;
          if (0 < iVar6) {
            do {
              uVar17 = (uint)uVar19;
              if (((int)uVar17 < 0) || ((pFVar10->ResetItemCount).ArrayNum <= (int)uVar17)) break;
              uVar5 = 0;
              if ((int)uVar17 < (pFVar10->ID_ResetItem).ArrayNum) {
                uVar5 = ~uVar17 >> 0x1f;
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
              iVar6 = *(int *)((pFVar10->ID_ResetItem).AllocatorInstance.Data + uVar21);
              uVar5 = 0;
              if ((int)uVar17 < (pFVar10->ResetItemCount).ArrayNum) {
                uVar5 = ~uVar17 >> 0x1f;
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
              iVar2 = *(int *)((pFVar10->ResetItemCount).AllocatorInstance.Data + uVar21);
              iVar6 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,iVar6);
              if (iVar6 < iVar2) {
                EVar1 = pFVar10->ResetMoenyType;
                uVar20 = 0;
                lVar12 = DS_MoneyDataUtil::GetMoneyQuantity(EVar1);
                iVar6 = pFVar10->ResetMoenyCount;
                pFVar13 = FDS_MoneyBaseTableRow::GetRef((ulonglong)EVar1,true);
                pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
                UDS_M_CommonPopup::SetAsset
                          (pUVar11,Asset01,pFVar13->ID_MoneyIcon,iVar6,(int)lVar12,true);
                goto LAB_14bf6709d;
              }
              iVar6 = (pFVar10->ID_ResetItem).ArrayNum;
              uVar19 = (ulonglong)(uVar17 + 1);
              uVar21 = uVar21 + 4;
            } while ((int)(uVar17 + 1) < iVar6);
          }
          uVar19 = uVar18;
          if (0 < iVar6) {
            do {
              uVar17 = (uint)uVar18;
              this = local_370;
              if (((int)uVar17 < 0) || ((pFVar10->ResetItemCount).ArrayNum <= (int)uVar17)) break;
              uVar5 = 0;
              if ((int)uVar17 < (pFVar10->ID_ResetItem).ArrayNum) {
                uVar5 = ~uVar17 >> 0x1f;
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
              iVar6 = *(int *)((pFVar10->ID_ResetItem).AllocatorInstance.Data + uVar19);
              uVar5 = 0;
              if ((int)uVar17 < (pFVar10->ResetItemCount).ArrayNum) {
                uVar5 = ~uVar17 >> 0x1f;
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
              iVar2 = *(int *)((pFVar10->ResetItemCount).AllocatorInstance.Data + uVar19);
              iVar7 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,iVar6);
              if (uVar17 == 0) {
                pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
                EVar16 = ItemSlot01;
LAB_14bf6706b:
                UDS_M_CommonPopup::SetItemSlot(pUVar11,EVar16,iVar6,0,iVar7,iVar2,ReqMaterial);
              }
              else if (uVar17 == 1) {
                pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
                EVar16 = ItemSlot02;
                goto LAB_14bf6706b;
              }
              uVar18 = (ulonglong)(uVar17 + 1);
              this = local_370;
              uVar19 = uVar19 + 4;
            } while ((int)(uVar17 + 1) < (pFVar10->ID_ResetItem).ArrayNum);
          }
          uVar20 = 1;
LAB_14bf6709d:
          pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
          local_358.StringTableType = None;
          local_358.StringTableID = 0;
          local_358.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_358.StringEnumTableNameID.Number = 0;
          local_358.TimeExpressionType = None;
          local_358.IsExpression = false;
          local_358.DateTime.Ticks = 0;
          local_358.TimeSpan.Ticks = 0;
          local_358.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358.UniqueString.Data.ArrayNum = 0;
          local_358.UniqueString.Data.ArrayMax = 0;
          local_358.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358.FormatArgs.ArrayNum = 0;
          local_358.FormatArgs.ArrayMax = 0;
          local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3b8.ArrayNum = 0;
          local_3b8.ArrayMax = 0;
          FDS_Text::SetTextFormatFromStringTable(&local_358,StringUi,0x4bb10,&local_3b8);
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_3b8.AllocatorInstance.Data,local_3b8.ArrayNum);
          if ((FDS_TextFormatArg *)local_3b8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_3b8.AllocatorInstance.Data);
          }
          UDS_M_CommonPopup::SetTitle(pUVar11,&local_358);
          pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
          local_308.StringTableType = None;
          local_308.StringTableID = 0;
          local_308.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_308.StringEnumTableNameID.Number = 0;
          local_308.TimeExpressionType = None;
          local_308.IsExpression = false;
          local_308.DateTime.Ticks = 0;
          local_308.TimeSpan.Ticks = 0;
          local_308.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_308.UniqueString.Data.ArrayNum = 0;
          local_308.UniqueString.Data.ArrayMax = 0;
          local_308.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_308.FormatArgs.ArrayNum = 0;
          local_308.FormatArgs.ArrayMax = 0;
          local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3c8.ArrayNum = 0;
          local_3c8.ArrayMax = 0;
          FDS_Text::SetTextFormatFromStringTable(&local_308,StringUi,0x4bb11,&local_3c8);
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_3c8.AllocatorInstance.Data,local_3c8.ArrayNum);
          if ((FDS_TextFormatArg *)local_3c8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_3c8.AllocatorInstance.Data);
          }
          UDS_M_CommonPopup::SetMainContent(pUVar11,&local_308);
          pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
          UDS_M_CommonPopup::SetButton(pUVar11,ButtonConfirm,StringUi,0x65,false);
          pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
          local_3c8._8_8_ = local_3c8._8_8_ & 0xffffffff00000000;
          local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)OnResetPopupOkClick;
          local_3a0 = (undefined1  [8])0x0;
          local_398.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_398.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a0,
                     (FWriteAccessScope *)&local_2b8);
          local_2a0 = &local_398;
          puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_398);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = &
                       ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
            ;
            *(undefined1 *)(puVar14 + 1) = uVar20;
            uVar15 = FDelegateHandle::GenerateNewID();
            puVar14[2] = uVar15;
            *puVar14 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillInfo____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar14[3] = 0;
            local_368 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_368);
            puVar14[4] = local_3c8.AllocatorInstance.Data;
            puVar14[5] = local_3c8._8_8_;
          }
          if (local_2b8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
          }
          UDS_M_CommonPopup::SetDelegate
                    (pUVar11,ButtonConfirm,
                     (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      *)local_3a0);
          pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
          UDS_M_CommonPopup::SetButton(pUVar11,ButtonCancel,StringUi,0x66,false);
          pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
          local_3c8._8_8_ = local_3c8._8_8_ & 0xffffffff00000000;
          local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)OnResetPopupCancelClick;
          local_388 = (undefined1  [8])0x0;
          local_380.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_380.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_388,
                     (FWriteAccessScope *)&local_298);
          local_280 = &local_380;
          puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_380);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = &
                       ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar15 = FDelegateHandle::GenerateNewID();
            puVar14[2] = uVar15;
            *puVar14 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillInfo____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar14[3] = 0;
            local_360 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_360);
            puVar14[4] = local_3c8.AllocatorInstance.Data;
            puVar14[5] = local_3c8._8_8_;
          }
          if (local_298.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
          }
          UDS_M_CommonPopup::SetDelegate
                    (pUVar11,ButtonCancel,
                     (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      *)local_388);
          pUVar11 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_3d8);
          UDS_M_CommonPopup::OpenCommonPopup(pUVar11);
        }
      }
    }
  }
  return;
}

// OnResetPopupCancelClick @ 14bf67490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::OnResetPopupCancelClick
          (UDS_VM_W_PlayerSkill_SkillInfo *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnResetPopupOkClick @ 14bf674d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::OnResetPopupOkClick
          (UDS_VM_W_PlayerSkill_SkillInfo *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,bool param_2)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_W_PlayerSkill_SkillInfo *local_res8;
  float local_res18 [2];
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res8 = (UDS_VM_W_PlayerSkill_SkillInfo *)((ulonglong)local_res8 & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,(uint *)&local_res8,local_res18);
  }
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = OnResetSuccess;
    puVar1[5] = (ulonglong)uStack_5c << 0x20;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FDS_PlayerSkillService::SendPlayerSkillResetRequest
            (this->PlayerSkillType,!param_2,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
  return;
}

// OnResetSuccess @ 14bf67650

void __thiscall UDS_VM_W_PlayerSkill_SkillInfo::OnResetSuccess(UDS_VM_W_PlayerSkill_SkillInfo *this)

{
  UDS_PlayerSkillEvent *pUVar1;
  
  Refresh(this);
  pUVar1 = UDS_PlayerSkillEvent::GetEvent();
  if (pUVar1 != (UDS_PlayerSkillEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_PlayerSkillType>::Broadcast
              (&pUVar1->OnSkillResetDelegate,this->PlayerSkillType);
    return;
  }
  return;
}

// OnSetViewModel @ 14bf6f9c0

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::OnSetViewModel
          (UDS_VM_W_PlayerSkill_SkillInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FDS_VMC_PlayerSkill_SkillInfo,1> local_28;
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
  SafeCast<FDS_VMC_PlayerSkill_SkillInfo>(&local_28,&local_18);
  if (local_28.Object != (FDS_VMC_PlayerSkill_SkillInfo *)0x0) {
    this->PlayerSkillType = (local_28.Object)->PlayerSkillType;
    Refresh(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Refresh @ 14bf74080

void __thiscall UDS_VM_W_PlayerSkill_SkillInfo::Refresh(UDS_VM_W_PlayerSkill_SkillInfo *this)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  FDS_PlayerSkillBaseTableRow *pFVar7;
  FDS_PlayerSkillLevelTableRow *pFVar8;
  FNumberFormattingOptions *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_UserObjectListItem *this_00;
  FName *pFVar12;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  FWeakObjectPtr local_res10;
  UDS_M_ItemImplBase *local_res18;
  FWeakObjectPtr local_res20;
  FName local_238;
  int iStack_230;
  undefined4 uStack_22c;
  UDS_VM_W_PlayerSkill_SkillInfo *local_228;
  UDS_VM_W_PlayerSkill_SkillInfo *local_220;
  UDS_UserObjectListItem *local_218 [2];
  FName local_208;
  int local_200;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
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
  FName local_f8;
  int local_f0;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined4 uStack_dc;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  FDestructionSentinel local_c8;
  undefined1 *local_b0;
  FDestructionSentinel local_a8;
  undefined1 *local_90;
  FNumberFormattingOptions local_88;
  FNumberFormattingOptions local_68;
  
  UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&local_res10);
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    return;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar4) {
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  uVar16 = *(int *)&pUVar6[2].field_0x14 + 1;
  pFVar7 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->PlayerSkillType,true);
  pFVar8 = FDS_PlayerSkillLevelTableRow::GetRef(this->PlayerSkillType,uVar16,false);
  iVar1 = FFieldNotificationClassDescriptor::bIsActive.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::bIsActive.FieldName;
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  bVar4 = 0 < *(int *)&pUVar6[2].field_0x14;
  if (this->bIsActive != bVar4) {
    this->bIsActive = bVar4;
    local_208 = FVar3;
    local_200 = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
  }
  iVar1 = FFieldNotificationClassDescriptor::bCanReset.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::bCanReset.FieldName;
  if ((this->bIsActive == false) || (pFVar7->IsReset != true)) {
    if (this->bCanReset != false) {
      this->bCanReset = false;
      pFVar12 = &local_1e8;
      local_1e8 = FVar3;
      local_1e0 = iVar1;
      goto LAB_14bf74206;
    }
  }
  else if (this->bCanReset != true) {
    this->bCanReset = true;
    pFVar12 = &local_1f8;
    local_1f8 = FVar3;
    local_1f0 = iVar1;
LAB_14bf74206:
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar12);
  }
  iVar1 = FFieldNotificationClassDescriptor::bIsMaxLevel.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::bIsMaxLevel.FieldName;
  if ((int)uVar16 < 1) {
    if (this->bIsMaxLevel == false) goto LAB_14bf74287;
    this->bIsMaxLevel = false;
    pFVar12 = &local_1c8;
    local_1c8 = FVar3;
    local_1c0 = iVar1;
  }
  else {
    bVar4 = FDS_PlayerSkillLevelTableRow::IsValid(pFVar8);
    if (this->bIsMaxLevel == !bVar4) goto LAB_14bf74287;
    pFVar12 = &local_1d8;
    local_1d8 = FVar3;
    this->bIsMaxLevel = !bVar4;
    local_1d0 = iVar1;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar12);
LAB_14bf74287:
  iVar1 = FFieldNotificationClassDescriptor::ID_SkillIcon.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ID_SkillIcon.FieldName;
  if (this->ID_SkillIcon != pFVar7->ID_SkillIcon) {
    this->ID_SkillIcon = pFVar7->ID_SkillIcon;
    local_1b0 = iVar1;
    local_1b8 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
  }
  FDS_Text::SetTextFromStringID(&this->Text_SkillName,&pFVar7->ID_SkillName);
  local_1a0 = FFieldNotificationClassDescriptor::Text_SkillName.BitNumber;
  local_1a8 = FFieldNotificationClassDescriptor::Text_SkillName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
  FDS_Text::SetTextFromStringID(&this->Text_SkillDesc,&pFVar7->ID_Description);
  local_190 = FFieldNotificationClassDescriptor::Text_SkillDesc.BitNumber;
  local_198 = FFieldNotificationClassDescriptor::Text_SkillDesc.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
  iVar1 = FFieldNotificationClassDescriptor::bShowHaloPoint.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::bShowHaloPoint.FieldName;
  bVar4 = pFVar8->SkillLevelUpHaloPointCount != 0;
  if (this->bShowHaloPoint != bVar4) {
    this->bShowHaloPoint = bVar4;
    local_180 = iVar1;
    local_188 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  }
  pFVar9 = FNumberFormattingOptions::FNumberFormattingOptions(&local_68);
  local_88.AlwaysSign = pFVar9->AlwaysSign;
  local_88.UseGrouping = pFVar9->UseGrouping;
  local_88.IndicateNearlyInteger = pFVar9->IndicateNearlyInteger;
  local_88._3_1_ = pFVar9->field_0x3;
  local_88.RoundingMode = pFVar9->RoundingMode;
  local_88.MinimumIntegralDigits = pFVar9->MinimumIntegralDigits;
  local_88.MaximumIntegralDigits = pFVar9->MaximumIntegralDigits;
  local_88.MinimumFractionalDigits = pFVar9->MinimumFractionalDigits;
  local_88.MaximumFractionalDigits = pFVar9->MaximumFractionalDigits;
  FDS_Text::SetTextFromNumber(&this->Text_HaloPoint,pFVar8->SkillLevelUpHaloPointCount,&local_88);
  local_170 = FFieldNotificationClassDescriptor::Text_HaloPoint.BitNumber;
  local_178 = FFieldNotificationClassDescriptor::Text_HaloPoint.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
  FDS_Text::SetTextFromStringTable(&this->Text_MaxLevel,StringUi,0x9e3f);
  local_160 = FFieldNotificationClassDescriptor::Text_MaxLevel.BitNumber;
  local_168 = FFieldNotificationClassDescriptor::Text_MaxLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  uVar14 = 0;
  local_238 = (FName)OnResetClick;
  uStack_22c = uStack_dc;
  iStack_230 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->BtnEvent_ResetClick).Delegate,(FWriteAccessScope *)&local_c8);
  local_b0 = &(this->BtnEvent_ResetClick).Delegate.field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_b0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillInfo____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_228 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_228);
    *(FName *)(puVar10 + 4) = local_238;
    puVar10[5] = CONCAT44(uStack_22c,iStack_230);
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  local_150 = FFieldNotificationClassDescriptor::BtnEvent_ResetClick.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::BtnEvent_ResetClick.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  iStack_230 = 0;
  local_238 = (FName)OnLevelUpClick;
  uStack_22c = uStack_dc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->BtnEvent_LevelUpClick).Delegate,(FWriteAccessScope *)&local_a8);
  local_90 = &(this->BtnEvent_LevelUpClick).Delegate.field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_90);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillInfo____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_220 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_220);
    *(FName *)(puVar10 + 4) = local_238;
    puVar10[5] = CONCAT44(uStack_22c,iStack_230);
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_140 = FFieldNotificationClassDescriptor::BtnEvent_LevelUpClick.BitNumber;
  local_148 = FFieldNotificationClassDescriptor::BtnEvent_LevelUpClick.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  iVar1 = FFieldNotificationClassDescriptor::bIsActive.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::bIsActive.FieldName;
  if (this->bIsActive == false) {
    FDS_Text::SetTextFromStringTable(&this->Text_SubTitle,StringUi,0x4bb14);
    local_130 = FFieldNotificationClassDescriptor::Text_SubTitle.BitNumber;
    local_138 = FFieldNotificationClassDescriptor::Text_SubTitle.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_138);
    FDS_Text::SetTextFromStringTable(&this->Text_LevelUpButton,StringUi,0x4bb1a);
    pFVar12 = &local_128;
    local_128 = FFieldNotificationClassDescriptor::Text_LevelUpButton.FieldName;
    local_120 = FFieldNotificationClassDescriptor::Text_LevelUpButton.BitNumber;
  }
  else {
    if (this->bIsActive != true) {
      this->bIsActive = true;
      local_110 = iVar1;
      local_118 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
    }
    FDS_Text::SetTextFromStringTable(&this->Text_SubTitle,StringUi,0x4bb0f);
    local_100 = FFieldNotificationClassDescriptor::Text_SubTitle.BitNumber;
    local_108 = FFieldNotificationClassDescriptor::Text_SubTitle.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
    FDS_Text::SetTextFromStringTable(&this->Text_LevelUpButton,StringUi,0x4bb01);
    pFVar12 = &local_f8;
    local_f8 = FFieldNotificationClassDescriptor::Text_LevelUpButton.FieldName;
    local_f0 = FFieldNotificationClassDescriptor::Text_LevelUpButton.BitNumber;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar12);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEvent_ItemSlots);
  TVar13._4_4_ = 0;
  TVar13._0_4_ = uVar16;
  pFVar8 = FDS_PlayerSkillLevelTableRow::GetRef(this->PlayerSkillType,uVar16,true);
  uVar15 = uVar14;
  if (0 < (pFVar8->ID_LevelUpItem).ArrayNum) {
    do {
      uVar16 = (uint)uVar14;
      if (((int)uVar16 < 0) || ((pFVar8->LevelUpItemCount).ArrayNum <= (int)uVar16)) break;
      uVar5 = 0;
      if ((int)uVar16 < (pFVar8->ID_LevelUpItem).ArrayNum) {
        uVar5 = ~uVar16 >> 0x1f;
      }
      if (uVar5 == 0) {
        TVar13.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar5 = 0;
      if ((int)uVar16 < (pFVar8->LevelUpItemCount).ArrayNum) {
        uVar5 = ~uVar16 >> 0x1f;
      }
      if (uVar5 == 0) {
        TVar13.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar1 = *(int *)((pFVar8->LevelUpItemCount).AllocatorInstance.Data + uVar15);
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 != (UDS_UserObjectListItem *)0x0) goto LAB_14bf7480a;
      }
      else if (this_00 != (UDS_UserObjectListItem *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bf7480a:
        DS_ItemDataUtil::CreateItemModel
                  ((EDS_ItemSlotStateType)&local_res18,(int)CONCAT71(TVar13._1_7_,0xd));
        if (local_res18 == (UDS_M_ItemImplBase *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8530248582538723497>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerSkill\\DS_VM_W_PlayerSkill_SkillInfo.cpp"
                             ,0xa9,"false");
          if (!bVar4) {
            return;
          }
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UDS_M_ItemImplBase::SetQuantity(local_res18,iVar1);
        puVar10 = (undefined8 *)(**(code **)(local_res18->_padding_ + 0x310))(local_res18,local_e8);
        local_d8.Object = (FDS_ViewModelContext *)*puVar10;
        local_d8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar10[1];
        if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(this_00,&local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)CONCAT44(uStack_dc,local_e0));
        local_218[0] = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        TVar13.DebugPtr = (UDS_UserObjectListItem *)local_218;
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEvent_ItemSlots,
                   (TObjectPtr<UDS_UserObjectListItem>)TVar13.ObjectPtr.field0_0x0);
      }
      uVar14 = (ulonglong)(uVar16 + 1);
      uVar15 = uVar15 + 4;
    } while ((int)(uVar16 + 1) < (pFVar8->ID_LevelUpItem).ArrayNum);
  }
  iStack_230 = FFieldNotificationClassDescriptor::EntryBindingEvent_ItemSlots.BitNumber;
  local_238 = FFieldNotificationClassDescriptor::EntryBindingEvent_ItemSlots.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
  return;
}

// SetContext @ 14bf7a3c0

void __thiscall
UDS_VM_W_PlayerSkill_SkillInfo::SetContext
          (UDS_VM_W_PlayerSkill_SkillInfo *this,EDS_PlayerSkillType param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = ::operator_new(0x28);
  pFVar5 = (FDS_ViewModelContext *)0x0;
  pFVar6 = pFVar5;
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar3->field_0x1c = 0;
    *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 4) = 0;
    *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
    (pFVar3->ViewModelName).ComparisonIndex = 0;
    (pFVar3->ViewModelName).Number = 0;
    pFVar3->ViewModelTemplateKey = None;
    pFVar3->_padding_ = (longlong)&___7FDS_VMC_PlayerSkill_SkillInfo__6B_;
    pFVar6 = pFVar3;
  }
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_VMC_PlayerSkill_SkillInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
    pFVar5 = pFVar3;
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
  pUVar4 = FDS_VMC_PlayerSkill_SkillInfo::StaticStruct();
  *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar6;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  *(EDS_PlayerSkillType *)&pFVar6[1]._padding_ = param_1;
  if (pFVar5 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar5->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_18.Object = pFVar6;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return;
}

// UnbindModel @ 14bf85890

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_PlayerSkill_SkillInfo::UnbindModel(UDS_VM_W_PlayerSkill_SkillInfo *this)

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

