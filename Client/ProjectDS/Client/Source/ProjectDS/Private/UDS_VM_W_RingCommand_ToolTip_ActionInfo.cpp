// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b754790

UClass * __cdecl UDS_VM_W_RingCommand_ToolTip_ActionInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_ActionInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCommand_ToolTip_ActionInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_ActionInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCommand_ToolTip_ActionInfo,0x350,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_RingCommand_ToolTip_ActionInfo>
               ,InternalVTableHelperCtorCaller<UDS_VM_W_RingCommand_ToolTip_ActionInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_ActionInfo.InnerSingleton;
}

// UDS_VM_W_RingCommand_ToolTip_ActionInfo @ 14b758810

UDS_VM_W_RingCommand_ToolTip_ActionInfo * __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::UDS_VM_W_RingCommand_ToolTip_ActionInfo
          (UDS_VM_W_RingCommand_ToolTip_ActionInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCommand_ToolTip_ActionInfo__6B_;
  (this->ActionName).StringTableID = 0;
  (this->ActionName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionName).StringEnumTableNameID.Number = 0;
  (this->ActionName).DateTime.Ticks = 0;
  (this->ActionName).TimeSpan.Ticks = 0;
  (this->ActionName).TimeExpressionType = None;
  (this->ActionName).IsExpression = false;
  (this->ActionName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionName).UniqueString.Data.ArrayNum = 0;
  (this->ActionName).UniqueString.Data.ArrayMax = 0;
  (this->ActionName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionName).FormatArgs.ArrayNum = 0;
  (this->ActionName).FormatArgs.ArrayMax = 0;
  (this->ActionSkillLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionSkillLevel).StringEnumTableNameID.Number = 0;
  (this->ActionSkillLevel).DateTime.Ticks = 0;
  (this->ActionSkillLevel).TimeSpan.Ticks = 0;
  (this->ActionSkillLevel).TimeExpressionType = None;
  (this->ActionSkillLevel).IsExpression = false;
  (this->ActionSkillLevel).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ActionSkillLevel).UniqueString.Data.ArrayNum = 0;
  (this->ActionSkillLevel).UniqueString.Data.ArrayMax = 0;
  (this->ActionSkillLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionSkillLevel).FormatArgs.ArrayNum = 0;
  (this->ActionSkillLevel).FormatArgs.ArrayMax = 0;
  this->PlayerSKillLevel = 0;
  (this->ActionSkillItemName).StringTableType = None;
  (this->ActionSkillItemName).StringTableID = 0;
  (this->ActionSkillItemName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionSkillItemName).StringEnumTableNameID.Number = 0;
  (this->ActionSkillItemName).DateTime.Ticks = 0;
  (this->ActionSkillItemName).TimeSpan.Ticks = 0;
  (this->ActionSkillItemName).TimeExpressionType = None;
  (this->ActionSkillItemName).IsExpression = false;
  (this->ActionSkillItemName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionSkillItemName).UniqueString.Data.ArrayNum = 0;
  (this->ActionSkillItemName).UniqueString.Data.ArrayMax = 0;
  (this->ActionSkillItemName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionSkillItemName).FormatArgs.ArrayNum = 0;
  (this->ActionSkillItemName).FormatArgs.ArrayMax = 0;
  (this->ActionSkillTicketName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionSkillTicketName).StringEnumTableNameID.Number = 0;
  (this->ActionSkillTicketName).DateTime.Ticks = 0;
  (this->ActionSkillTicketName).TimeSpan.Ticks = 0;
  (this->ActionSkillTicketName).TimeExpressionType = None;
  (this->ActionSkillTicketName).IsExpression = false;
  (this->ActionSkillTicketName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionSkillTicketName).UniqueString.Data.ArrayNum = 0;
  (this->ActionSkillTicketName).UniqueString.Data.ArrayMax = 0;
  (this->ActionSkillTicketName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionSkillTicketName).FormatArgs.ArrayNum = 0;
  (this->ActionSkillTicketName).FormatArgs.ArrayMax = 0;
  (this->ActionQuestUnlockCondition).StringTableType = None;
  (this->ActionQuestUnlockCondition).StringTableID = 0;
  (this->ActionQuestUnlockCondition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionQuestUnlockCondition).StringEnumTableNameID.Number = 0;
  (this->ActionQuestUnlockCondition).DateTime.Ticks = 0;
  (this->ActionQuestUnlockCondition).TimeSpan.Ticks = 0;
  (this->ActionQuestUnlockCondition).TimeExpressionType = None;
  (this->ActionQuestUnlockCondition).IsExpression = false;
  (this->ActionQuestUnlockCondition).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionQuestUnlockCondition).UniqueString.Data.ArrayNum = 0;
  (this->ActionQuestUnlockCondition).UniqueString.Data.ArrayMax = 0;
  (this->ActionQuestUnlockCondition).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionQuestUnlockCondition).FormatArgs.ArrayNum = 0;
  (this->ActionQuestUnlockCondition).FormatArgs.ArrayMax = 0;
  (this->ActionLevelUnlockCondition).StringTableType = None;
  (this->ActionLevelUnlockCondition).StringTableID = 0;
  (this->ActionLevelUnlockCondition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionLevelUnlockCondition).StringEnumTableNameID.Number = 0;
  (this->ActionLevelUnlockCondition).DateTime.Ticks = 0;
  (this->ActionLevelUnlockCondition).TimeSpan.Ticks = 0;
  (this->ActionLevelUnlockCondition).TimeExpressionType = None;
  (this->ActionLevelUnlockCondition).IsExpression = false;
  (this->ActionLevelUnlockCondition).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionLevelUnlockCondition).UniqueString.Data.ArrayNum = 0;
  (this->ActionLevelUnlockCondition).UniqueString.Data.ArrayMax = 0;
  (this->ActionLevelUnlockCondition).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionLevelUnlockCondition).FormatArgs.ArrayNum = 0;
  (this->ActionLevelUnlockCondition).FormatArgs.ArrayMax = 0;
  (this->ActionDescription).StringTableType = None;
  (this->ActionDescription).StringTableID = 0;
  (this->ActionDescription).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionDescription).StringEnumTableNameID.Number = 0;
  (this->ActionDescription).DateTime.Ticks = 0;
  (this->ActionDescription).TimeSpan.Ticks = 0;
  (this->ActionName).StringTableType = None;
  (this->ActionSkillLevel).StringTableType = StringUi;
  (this->ActionSkillLevel).StringTableID = 0x27d9;
  (this->ActionSkillTicketName).StringTableType = StringUi;
  (this->ActionSkillTicketName).StringTableID = 0x2b0a;
  (this->ActionDescription).TimeExpressionType = None;
  (this->ActionDescription).IsExpression = false;
  (this->ActionDescription).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionDescription).UniqueString.Data.ArrayNum = 0;
  (this->ActionDescription).UniqueString.Data.ArrayMax = 0;
  (this->ActionDescription).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionDescription).FormatArgs.ArrayNum = 0;
  (this->ActionDescription).FormatArgs.ArrayMax = 0;
  this->bIsQuestUnlockVis = false;
  this->bIsLevelUnlockVis = false;
  this->bIsRequiredItemVis = false;
  this->bIsRequiredTicketVis = false;
  this->bIsSkillLevelVis = false;
  (this->FixedText_CoolTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CoolTime).StringEnumTableNameID.Number = 0;
  (this->FixedText_CoolTime).DateTime.Ticks = 0;
  (this->FixedText_CoolTime).TimeSpan.Ticks = 0;
  (this->FixedText_CoolTime).TimeExpressionType = None;
  (this->FixedText_CoolTime).IsExpression = false;
  (this->FixedText_CoolTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CoolTime).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CoolTime).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CoolTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CoolTime).FormatArgs.ArrayNum = 0;
  (this->FixedText_CoolTime).FormatArgs.ArrayMax = 0;
  this->ActionID = 0;
  (this->FixedText_CoolTime).StringTableType = StringUi;
  (this->FixedText_CoolTime).StringTableID = 0x11d34;
  return this;
}

// UDS_VM_W_RingCommand_ToolTip_ActionInfo @ 14b758ad0

UDS_VM_W_RingCommand_ToolTip_ActionInfo * __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::UDS_VM_W_RingCommand_ToolTip_ActionInfo
          (UDS_VM_W_RingCommand_ToolTip_ActionInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCommand_ToolTip_ActionInfo__6B_;
  (this->ActionName).StringTableID = 0;
  (this->ActionName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionName).StringEnumTableNameID.Number = 0;
  (this->ActionName).DateTime.Ticks = 0;
  (this->ActionName).TimeSpan.Ticks = 0;
  (this->ActionName).TimeExpressionType = None;
  (this->ActionName).IsExpression = false;
  (this->ActionName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionName).UniqueString.Data.ArrayNum = 0;
  (this->ActionName).UniqueString.Data.ArrayMax = 0;
  (this->ActionName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionName).FormatArgs.ArrayNum = 0;
  (this->ActionName).FormatArgs.ArrayMax = 0;
  (this->ActionSkillLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionSkillLevel).StringEnumTableNameID.Number = 0;
  (this->ActionSkillLevel).DateTime.Ticks = 0;
  (this->ActionSkillLevel).TimeSpan.Ticks = 0;
  (this->ActionSkillLevel).TimeExpressionType = None;
  (this->ActionSkillLevel).IsExpression = false;
  (this->ActionSkillLevel).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ActionSkillLevel).UniqueString.Data.ArrayNum = 0;
  (this->ActionSkillLevel).UniqueString.Data.ArrayMax = 0;
  (this->ActionSkillLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionSkillLevel).FormatArgs.ArrayNum = 0;
  (this->ActionSkillLevel).FormatArgs.ArrayMax = 0;
  this->PlayerSKillLevel = 0;
  (this->ActionSkillItemName).StringTableType = None;
  (this->ActionSkillItemName).StringTableID = 0;
  (this->ActionSkillItemName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionSkillItemName).StringEnumTableNameID.Number = 0;
  (this->ActionSkillItemName).DateTime.Ticks = 0;
  (this->ActionSkillItemName).TimeSpan.Ticks = 0;
  (this->ActionSkillItemName).TimeExpressionType = None;
  (this->ActionSkillItemName).IsExpression = false;
  (this->ActionSkillItemName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionSkillItemName).UniqueString.Data.ArrayNum = 0;
  (this->ActionSkillItemName).UniqueString.Data.ArrayMax = 0;
  (this->ActionSkillItemName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionSkillItemName).FormatArgs.ArrayNum = 0;
  (this->ActionSkillItemName).FormatArgs.ArrayMax = 0;
  (this->ActionSkillTicketName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionSkillTicketName).StringEnumTableNameID.Number = 0;
  (this->ActionSkillTicketName).DateTime.Ticks = 0;
  (this->ActionSkillTicketName).TimeSpan.Ticks = 0;
  (this->ActionSkillTicketName).TimeExpressionType = None;
  (this->ActionSkillTicketName).IsExpression = false;
  (this->ActionSkillTicketName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionSkillTicketName).UniqueString.Data.ArrayNum = 0;
  (this->ActionSkillTicketName).UniqueString.Data.ArrayMax = 0;
  (this->ActionSkillTicketName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionSkillTicketName).FormatArgs.ArrayNum = 0;
  (this->ActionSkillTicketName).FormatArgs.ArrayMax = 0;
  (this->ActionQuestUnlockCondition).StringTableType = None;
  (this->ActionQuestUnlockCondition).StringTableID = 0;
  (this->ActionQuestUnlockCondition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionQuestUnlockCondition).StringEnumTableNameID.Number = 0;
  (this->ActionQuestUnlockCondition).DateTime.Ticks = 0;
  (this->ActionQuestUnlockCondition).TimeSpan.Ticks = 0;
  (this->ActionQuestUnlockCondition).TimeExpressionType = None;
  (this->ActionQuestUnlockCondition).IsExpression = false;
  (this->ActionQuestUnlockCondition).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionQuestUnlockCondition).UniqueString.Data.ArrayNum = 0;
  (this->ActionQuestUnlockCondition).UniqueString.Data.ArrayMax = 0;
  (this->ActionQuestUnlockCondition).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionQuestUnlockCondition).FormatArgs.ArrayNum = 0;
  (this->ActionQuestUnlockCondition).FormatArgs.ArrayMax = 0;
  (this->ActionLevelUnlockCondition).StringTableType = None;
  (this->ActionLevelUnlockCondition).StringTableID = 0;
  (this->ActionLevelUnlockCondition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionLevelUnlockCondition).StringEnumTableNameID.Number = 0;
  (this->ActionLevelUnlockCondition).DateTime.Ticks = 0;
  (this->ActionLevelUnlockCondition).TimeSpan.Ticks = 0;
  (this->ActionLevelUnlockCondition).TimeExpressionType = None;
  (this->ActionLevelUnlockCondition).IsExpression = false;
  (this->ActionLevelUnlockCondition).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionLevelUnlockCondition).UniqueString.Data.ArrayNum = 0;
  (this->ActionLevelUnlockCondition).UniqueString.Data.ArrayMax = 0;
  (this->ActionLevelUnlockCondition).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionLevelUnlockCondition).FormatArgs.ArrayNum = 0;
  (this->ActionLevelUnlockCondition).FormatArgs.ArrayMax = 0;
  (this->ActionDescription).StringTableType = None;
  (this->ActionDescription).StringTableID = 0;
  (this->ActionDescription).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ActionDescription).StringEnumTableNameID.Number = 0;
  (this->ActionDescription).DateTime.Ticks = 0;
  (this->ActionDescription).TimeSpan.Ticks = 0;
  (this->ActionName).StringTableType = None;
  (this->ActionSkillLevel).StringTableType = StringUi;
  (this->ActionSkillLevel).StringTableID = 0x27d9;
  (this->ActionSkillTicketName).StringTableType = StringUi;
  (this->ActionSkillTicketName).StringTableID = 0x2b0a;
  (this->ActionDescription).TimeExpressionType = None;
  (this->ActionDescription).IsExpression = false;
  (this->ActionDescription).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActionDescription).UniqueString.Data.ArrayNum = 0;
  (this->ActionDescription).UniqueString.Data.ArrayMax = 0;
  (this->ActionDescription).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionDescription).FormatArgs.ArrayNum = 0;
  (this->ActionDescription).FormatArgs.ArrayMax = 0;
  this->bIsQuestUnlockVis = false;
  this->bIsLevelUnlockVis = false;
  this->bIsRequiredItemVis = false;
  this->bIsRequiredTicketVis = false;
  this->bIsSkillLevelVis = false;
  (this->FixedText_CoolTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CoolTime).StringEnumTableNameID.Number = 0;
  (this->FixedText_CoolTime).DateTime.Ticks = 0;
  (this->FixedText_CoolTime).TimeSpan.Ticks = 0;
  (this->FixedText_CoolTime).TimeExpressionType = None;
  (this->FixedText_CoolTime).IsExpression = false;
  (this->FixedText_CoolTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CoolTime).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CoolTime).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CoolTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CoolTime).FormatArgs.ArrayNum = 0;
  (this->FixedText_CoolTime).FormatArgs.ArrayMax = 0;
  this->ActionID = 0;
  (this->FixedText_CoolTime).StringTableType = StringUi;
  (this->FixedText_CoolTime).StringTableID = 0x11d34;
  return this;
}

// ~UDS_VM_W_RingCommand_ToolTip_ActionInfo @ 14b75b280

void __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::~UDS_VM_W_RingCommand_ToolTip_ActionInfo
          (UDS_VM_W_RingCommand_ToolTip_ActionInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCommand_ToolTip_ActionInfo__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_CoolTime).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_CoolTime).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_CoolTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_CoolTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ActionDescription).FormatArgs.AllocatorInstance.Data,
             (this->ActionDescription).FormatArgs.ArrayNum);
  pFVar1 = (this->ActionDescription).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActionDescription).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->ActionLevelUnlockCondition).FormatArgs.AllocatorInstance.Data,
             (this->ActionLevelUnlockCondition).FormatArgs.ArrayNum);
  pFVar1 = (this->ActionLevelUnlockCondition).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActionLevelUnlockCondition).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->ActionQuestUnlockCondition).FormatArgs.AllocatorInstance.Data,
             (this->ActionQuestUnlockCondition).FormatArgs.ArrayNum);
  pFVar1 = (this->ActionQuestUnlockCondition).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActionQuestUnlockCondition).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ActionSkillTicketName).FormatArgs.AllocatorInstance.Data,
             (this->ActionSkillTicketName).FormatArgs.ArrayNum);
  pFVar1 = (this->ActionSkillTicketName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActionSkillTicketName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ActionSkillItemName).FormatArgs.AllocatorInstance.Data,
             (this->ActionSkillItemName).FormatArgs.ArrayNum);
  pFVar1 = (this->ActionSkillItemName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActionSkillItemName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ActionSkillLevel).FormatArgs.AllocatorInstance.Data,
             (this->ActionSkillLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->ActionSkillLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActionSkillLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ActionName).FormatArgs.AllocatorInstance.Data,
             (this->ActionName).FormatArgs.ArrayNum);
  pFVar1 = (this->ActionName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActionName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75da50

IClassDescriptor * __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::GetFieldNotificationDescriptor
          (UDS_VM_W_RingCommand_ToolTip_ActionInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_RingCommand_ToolTip_ActionInfo::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e130

UClass * __cdecl UDS_VM_W_RingCommand_ToolTip_ActionInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_ActionInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCommand_ToolTip_ActionInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_ActionInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCommand_ToolTip_ActionInfo,0x350,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_RingCommand_ToolTip_ActionInfo>
               ,InternalVTableHelperCtorCaller<UDS_VM_W_RingCommand_ToolTip_ActionInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_ActionInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_RingCommand_ToolTip_ActionInfo @ 14b75eed0

void __cdecl
UDS_VM_W_RingCommand_ToolTip_ActionInfo::
StaticRegisterNativesUDS_VM_W_RingCommand_ToolTip_ActionInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_RingCommand_ToolTip_ActionInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetActionCooltimeText @ 14b760040

void __cdecl
UDS_VM_W_RingCommand_ToolTip_ActionInfo::execGetActionCooltimeText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetActionCooltimeText((UDS_VM_W_RingCommand_ToolTip_ActionInfo *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// DetectionUpdate @ 14c011890

void __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::DetectionUpdate
          (UDS_VM_W_RingCommand_ToolTip_ActionInfo *this,FDS_ActionBaseTableRow *param_1)

{
  int iVar1;
  FDS_PlayerSkillDetectionTableRow *this_00;
  FDS_ItemBaseTableRow *pFVar2;
  EDS_PlayerSkillType local_res8 [8];
  ulong64 local_res10;
  
  this->bIsRequiredTicketVis = false;
  this->bIsSkillLevelVis = false;
  this->bIsRequiredItemVis = false;
  if (param_1->ID == Detection) {
    local_res8[0] = Detection;
    local_res10 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    iVar1 = DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity(&local_res10,local_res8);
    this->PlayerSKillLevel = iVar1;
    if (-1 < iVar1) {
      this->bIsSkillLevelVis = true;
    }
    if (0 < iVar1) {
      this_00 = FDS_PlayerSkillDetectionTableRow::GetRef((longlong)iVar1,true);
      if (this_00->DetectionItemCount != 0) {
        this->bIsRequiredItemVis = true;
        this->ActionSkillItemQuantity = this_00->DetectionItemCount;
        pFVar2 = FDS_PlayerSkillDetectionTableRow::ID_DetectionItemTable(this_00);
        FDS_Text::SetTextFromStringID(&this->ActionSkillItemName,&pFVar2->ID_Name);
      }
      if (this_00->DetectionTicketCount != 0) {
        this->bIsRequiredTicketVis = true;
        this->ActionSkillTicketQuantity = this_00->DetectionTicketCount;
      }
    }
  }
  return;
}

// GetActionCooltimeText @ 14c01a3d0

FText * __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::GetActionCooltimeText
          (UDS_VM_W_RingCommand_ToolTip_ActionInfo *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = UDS_TimeUtilManager::ConvertStringFromSec
                     (&local_18,this->ActionCooltime,SecondsDec1,false);
  FText::FromString(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LevelUnlockUpdate @ 14c0246d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::LevelUnlockUpdate
          (UDS_VM_W_RingCommand_ToolTip_ActionInfo *this,FDS_ActionBaseTableRow *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_158,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_RingCommand_ToolTip_ActionInfo::LevelUnlockUpdate",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x74,L"playerData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(local_158);
    iVar1 = param_1->RequestPlayerLevel;
    iVar2 = *(int *)&pUVar5[6].field_0x10;
    this->bIsLevelUnlockVis = iVar2 < iVar1;
    if (iVar2 < iVar1) {
      FDS_Text::SetTextFormatFromStringTable<int_const_&>
                (&this->ActionLevelUnlockCondition,StringUi,0x57c,&param_1->RequestPlayerLevel);
      local_140 = FFieldNotificationClassDescriptor::ActionLevelUnlockCondition.BitNumber;
      local_148 = FFieldNotificationClassDescriptor::ActionLevelUnlockCondition.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
  }
  return;
}

// OnSetViewModel @ 14c034d20

void __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::OnSetViewModel
          (UDS_VM_W_RingCommand_ToolTip_ActionInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  TSharedPtr<FDS_ViewModelContext_RingCmdTooltip,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 != (FDS_ViewModelContext *)0x0) {
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar2;
    SafeCast<FDS_ViewModelContext_RingCmdTooltip>(&local_28,&local_18);
    if (local_28.Object != (FDS_ViewModelContext_RingCmdTooltip *)0x0) {
      this->ActionID = (local_28.Object)->RingCmdContentId;
      UpdateData(this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// QuestUnlockUpdate @ 14c03d7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::QuestUnlockUpdate
          (UDS_VM_W_RingCommand_ToolTip_ActionInfo *this,FDS_ActionBaseTableRow *param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FDS_TextFormatArg *this_00;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  UDS_QuestManager *this_01;
  UDS_LogManager *pUVar9;
  FDS_QuestBaseTableRow *this_02;
  FNumberFormattingOptions *pFVar10;
  undefined1 auStackY_1d8 [32];
  FName local_1a8;
  int local_1a0;
  FDS_Text local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_01 = UDS_QuestManager::GetInst();
  if (this_01 == (UDS_QuestManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_RingCommand_ToolTip_ActionInfo::QuestUnlockUpdate",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_148.Ptr,0x58,L"questManager is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if ((param_1->ID_RequestQuest != 0) &&
       (bVar7 = UDS_QuestManager::IsQuestCompleted(this_01,param_1->ID_RequestQuest), bVar7)) {
      this->bIsQuestUnlockVis = false;
      return;
    }
    iVar8 = param_1->ID_RequestQuest;
    this->bIsQuestUnlockVis = iVar8 != 0;
    if (iVar8 != 0) {
      this_02 = FDS_ActionBaseTableRow::ID_RequestQuestTable(param_1);
      FDS_QuestBaseTableRow::ID_QuestTitleIdTable(this_02);
      local_198.StringTableType = None;
      local_198.StringTableID = 0;
      local_198.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_198.StringEnumTableNameID.Number = 0;
      local_198.DateTime.Ticks = 0;
      local_198.TimeSpan.Ticks = 0;
      local_198.TimeExpressionType = None;
      local_198.IsExpression = false;
      local_198.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.UniqueString.Data.ArrayNum = 0;
      local_198.UniqueString.Data.ArrayMax = 0;
      local_198.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.FormatArgs.ArrayNum = 0;
      local_198.FormatArgs.ArrayMax = 0;
      if (this_02->QuestTitleStep < 1) {
        FDS_Text::SetTextFromStringID(&local_198,&this_02->ID_QuestTitleId);
      }
      else {
        FDS_Text::SetTextFormatFromStringTable<int_const_&>
                  (&local_198,StringQuest,(this_02->ID_QuestTitleId).ID,&this_02->QuestTitleStep);
      }
      (this->ActionQuestUnlockCondition).StringTableType = StringUi;
      pTVar2 = &(this->ActionQuestUnlockCondition).FormatArgs;
      (this->ActionQuestUnlockCondition).StringTableID = 0x57d;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
                 (this->ActionQuestUnlockCondition).FormatArgs.ArrayNum);
      piVar1 = &(this->ActionQuestUnlockCondition).FormatArgs.ArrayMax;
      (this->ActionQuestUnlockCondition).FormatArgs.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
      iVar8 = (this->ActionQuestUnlockCondition).FormatArgs.ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ActionQuestUnlockCondition).FormatArgs.ArrayNum = iVar8 + 1;
      this_00 = (FDS_TextFormatArg *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x28);
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)this_00);
      pFVar10 = FNumberFormattingOptions::DefaultWithGrouping();
      bVar7 = pFVar10->UseGrouping;
      bVar3 = pFVar10->IndicateNearlyInteger;
      uVar4 = pFVar10->field_0x3;
      EVar5 = pFVar10->RoundingMode;
      iVar8 = pFVar10->MinimumIntegralDigits;
      iVar6 = pFVar10->MaximumIntegralDigits;
      (this_00->NumberFormatOption).AlwaysSign = pFVar10->AlwaysSign;
      (this_00->NumberFormatOption).UseGrouping = bVar7;
      (this_00->NumberFormatOption).IndicateNearlyInteger = bVar3;
      (this_00->NumberFormatOption).field_0x3 = uVar4;
      (this_00->NumberFormatOption).RoundingMode = EVar5;
      (this_00->NumberFormatOption).MinimumIntegralDigits = iVar8;
      (this_00->NumberFormatOption).MaximumIntegralDigits = iVar6;
      iVar8 = pFVar10->MaximumFractionalDigits;
      (this_00->NumberFormatOption).MinimumFractionalDigits = pFVar10->MinimumFractionalDigits;
      (this_00->NumberFormatOption).MaximumFractionalDigits = iVar8;
      FDS_TextFormatArg::SetArg<FDS_Text_&>(this_00,&local_198);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data,
                 local_198.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_198.FormatArgs.AllocatorInstance.Data);
      }
      if (local_198.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.UniqueString.Data.AllocatorInstance.Data);
      }
      local_1a0 = FFieldNotificationClassDescriptor::ActionQuestUnlockCondition.BitNumber;
      local_1a8 = FFieldNotificationClassDescriptor::ActionQuestUnlockCondition.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    }
  }
  return;
}

// UpdateData @ 14c049a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCommand_ToolTip_ActionInfo::UpdateData(UDS_VM_W_RingCommand_ToolTip_ActionInfo *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FDS_ActionBaseTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_PlayerSkillDetectionTableRow *this_00;
  FDS_ItemBaseTableRow *pFVar7;
  float fVar8;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  EDS_PlayerSkillType local_148 [8];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar4 = FDS_ActionBaseTableRow::GetRef((longlong)this->ActionID,true);
  this->IconID = pFVar4->ID_Icon;
  FDS_Text::SetTextFromStringID(&this->ActionName,&pFVar4->ID_Name);
  FDS_Text::SetTextFromStringID(&this->ActionDescription,&pFVar4->ID_Description);
  fVar8 = FDS_RingCommandService::GetActionFunctionCooltime(pFVar4->ID);
  this->ActionCooltime = fVar8;
  QuestUnlockUpdate(this,pFVar4);
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_RingCommand_ToolTip_ActionInfo::LevelUnlockUpdate",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x74,L"playerData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&local_140);
    iVar3 = pFVar4->RequestPlayerLevel;
    iVar1 = *(int *)&pUVar6[6].field_0x10;
    this->bIsLevelUnlockVis = iVar1 < iVar3;
    if (iVar1 < iVar3) {
      FDS_Text::SetTextFormatFromStringTable<int_const_&>
                (&this->ActionLevelUnlockCondition,StringUi,0x57c,&pFVar4->RequestPlayerLevel);
      local_150 = FFieldNotificationClassDescriptor::ActionLevelUnlockCondition.BitNumber;
      local_158 = FFieldNotificationClassDescriptor::ActionLevelUnlockCondition.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
  }
  this->bIsRequiredTicketVis = false;
  this->bIsSkillLevelVis = false;
  this->bIsRequiredItemVis = false;
  if (pFVar4->ID == Detection) {
    local_148[0] = Detection;
    local_140 = (FWeakObjectPtr)UDS_PlayerData::GetMainPlayerCurrentEntityID();
    iVar3 = DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity
                      ((ulong64 *)&local_140,local_148);
    this->PlayerSKillLevel = iVar3;
    if (-1 < iVar3) {
      this->bIsSkillLevelVis = true;
    }
    if (0 < iVar3) {
      this_00 = FDS_PlayerSkillDetectionTableRow::GetRef((longlong)iVar3,true);
      if (this_00->DetectionItemCount != 0) {
        this->bIsRequiredItemVis = true;
        this->ActionSkillItemQuantity = this_00->DetectionItemCount;
        pFVar7 = FDS_PlayerSkillDetectionTableRow::ID_DetectionItemTable(this_00);
        FDS_Text::SetTextFromStringID(&this->ActionSkillItemName,&pFVar7->ID_Name);
      }
      if (this_00->DetectionTicketCount != 0) {
        this->bIsRequiredTicketVis = true;
        this->ActionSkillTicketQuantity = this_00->DetectionTicketCount;
      }
    }
  }
  local_150 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionName.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionSkillLevel.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionSkillLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionSkillItemName.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionSkillItemName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionSkillItemQuantity.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionSkillItemQuantity.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionSkillTicketName.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionSkillTicketName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionSkillTicketQuantity.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionSkillTicketQuantity.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionCooltime.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionCooltime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionQuestUnlockCondition.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionQuestUnlockCondition.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionLevelUnlockCondition.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionLevelUnlockCondition.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::FixedText_CoolTime.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::FixedText_CoolTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::ActionDescription.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ActionDescription.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::bIsQuestUnlockVis.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::bIsQuestUnlockVis.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::bIsLevelUnlockVis.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::bIsLevelUnlockVis.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::bIsSkillLevelVis.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::bIsSkillLevelVis.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::bIsRequiredItemVis.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::bIsRequiredItemVis.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::bIsRequiredTicketVis.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::bIsRequiredTicketVis.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  local_150 = FFieldNotificationClassDescriptor::GetActionCooltimeText.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::GetActionCooltimeText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  return;
}

