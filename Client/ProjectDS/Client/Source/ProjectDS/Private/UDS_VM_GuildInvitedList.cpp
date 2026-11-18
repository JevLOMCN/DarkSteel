// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b64f890

UClass * __cdecl UDS_VM_GuildInvitedList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitedList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitedList",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitedList.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitedList,0x2e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildInvitedList>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitedList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitedList.InnerSingleton;
}

// UDS_VM_GuildInvitedList @ 14b6533e0

UDS_VM_GuildInvitedList * __thiscall
UDS_VM_GuildInvitedList::UDS_VM_GuildInvitedList
          (UDS_VM_GuildInvitedList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitedList__6B_;
  (this->FixedTxt_GuildName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildName).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildName).DateTime.Ticks = 0;
  (this->FixedTxt_GuildName).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildName).TimeExpressionType = None;
  (this->FixedTxt_GuildName).IsExpression = false;
  (this->FixedTxt_GuildName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildName).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildName).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildName).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildName).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroduction).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroduction).IsExpression = false;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildLevel).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildLevel).DateTime.Ticks = 0;
  (this->FixedTxt_GuildLevel).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildLevel).TimeExpressionType = None;
  (this->FixedTxt_GuildLevel).IsExpression = false;
  (this->FixedTxt_GuildLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLevel).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildLevel).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildMember).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMember).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMember).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMember).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMember).TimeExpressionType = None;
  (this->FixedTxt_GuildMember).IsExpression = false;
  (this->FixedTxt_GuildMember).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMember).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMember).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMember).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMember).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMember).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildInviteTimeLeft).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildInviteTimeLeft).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildInviteTimeLeft).DateTime.Ticks = 0;
  (this->FixedTxt_GuildInviteTimeLeft).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildInviteTimeLeft).TimeExpressionType = None;
  (this->FixedTxt_GuildInviteTimeLeft).IsExpression = false;
  (this->FixedTxt_GuildInviteTimeLeft).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildInviteTimeLeft).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildInviteTimeLeft).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildInviteTimeLeft).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildInviteTimeLeft).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildInviteTimeLeft).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_FeedBack).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_FeedBack).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_FeedBack).DateTime.Ticks = 0;
  (this->FixedTxt_FeedBack).TimeSpan.Ticks = 0;
  (this->FixedTxt_FeedBack).TimeExpressionType = None;
  (this->FixedTxt_FeedBack).IsExpression = false;
  (this->FixedTxt_FeedBack).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_FeedBack).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_FeedBack).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_FeedBack).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_FeedBack).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_FeedBack).FormatArgs.ArrayMax = 0;
  (this->Txt_ListCount).StringTableType = None;
  (this->Txt_ListCount).StringTableID = 0;
  (this->Txt_ListCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_ListCount).StringEnumTableNameID.Number = 0;
  (this->Txt_ListCount).DateTime.Ticks = 0;
  (this->Txt_ListCount).TimeSpan.Ticks = 0;
  (this->Txt_ListCount).TimeExpressionType = None;
  (this->FixedTxt_GuildName).StringTableType = StringUi;
  (this->FixedTxt_GuildName).StringTableID = 0x3a9a7;
  (this->FixedTxt_GuildIntroduction).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroduction).StringTableID = 0x3a9c4;
  (this->FixedTxt_GuildLevel).StringTableType = StringUi;
  (this->FixedTxt_GuildLevel).StringTableID = 0x3a9a8;
  (this->FixedTxt_GuildMember).StringTableType = StringUi;
  (this->FixedTxt_GuildMember).StringTableID = 0x3a9aa;
  (this->FixedTxt_GuildInviteTimeLeft).StringTableType = StringUi;
  (this->FixedTxt_GuildInviteTimeLeft).StringTableID = 0x3a9b6;
  (this->FixedTxt_FeedBack).StringTableType = StringUi;
  (this->FixedTxt_FeedBack).StringTableID = 0x3a9bb;
  (this->Txt_ListCount).IsExpression = false;
  (this->Txt_ListCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_ListCount).UniqueString.Data.ArrayNum = 0;
  (this->Txt_ListCount).UniqueString.Data.ArrayMax = 0;
  (this->Txt_ListCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_ListCount).FormatArgs.ArrayNum = 0;
  (this->Txt_ListCount).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_GuildInvitedList @ 14b653660

UDS_VM_GuildInvitedList * __thiscall
UDS_VM_GuildInvitedList::UDS_VM_GuildInvitedList
          (UDS_VM_GuildInvitedList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitedList__6B_;
  (this->FixedTxt_GuildName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildName).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildName).DateTime.Ticks = 0;
  (this->FixedTxt_GuildName).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildName).TimeExpressionType = None;
  (this->FixedTxt_GuildName).IsExpression = false;
  (this->FixedTxt_GuildName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildName).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildName).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildName).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildName).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroduction).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroduction).IsExpression = false;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildLevel).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildLevel).DateTime.Ticks = 0;
  (this->FixedTxt_GuildLevel).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildLevel).TimeExpressionType = None;
  (this->FixedTxt_GuildLevel).IsExpression = false;
  (this->FixedTxt_GuildLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLevel).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildLevel).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildMember).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMember).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMember).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMember).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMember).TimeExpressionType = None;
  (this->FixedTxt_GuildMember).IsExpression = false;
  (this->FixedTxt_GuildMember).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMember).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMember).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMember).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMember).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMember).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildInviteTimeLeft).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildInviteTimeLeft).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildInviteTimeLeft).DateTime.Ticks = 0;
  (this->FixedTxt_GuildInviteTimeLeft).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildInviteTimeLeft).TimeExpressionType = None;
  (this->FixedTxt_GuildInviteTimeLeft).IsExpression = false;
  (this->FixedTxt_GuildInviteTimeLeft).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildInviteTimeLeft).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildInviteTimeLeft).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildInviteTimeLeft).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildInviteTimeLeft).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildInviteTimeLeft).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_FeedBack).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_FeedBack).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_FeedBack).DateTime.Ticks = 0;
  (this->FixedTxt_FeedBack).TimeSpan.Ticks = 0;
  (this->FixedTxt_FeedBack).TimeExpressionType = None;
  (this->FixedTxt_FeedBack).IsExpression = false;
  (this->FixedTxt_FeedBack).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_FeedBack).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_FeedBack).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_FeedBack).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_FeedBack).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_FeedBack).FormatArgs.ArrayMax = 0;
  (this->Txt_ListCount).StringTableType = None;
  (this->Txt_ListCount).StringTableID = 0;
  (this->Txt_ListCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_ListCount).StringEnumTableNameID.Number = 0;
  (this->Txt_ListCount).DateTime.Ticks = 0;
  (this->Txt_ListCount).TimeSpan.Ticks = 0;
  (this->Txt_ListCount).TimeExpressionType = None;
  (this->FixedTxt_GuildName).StringTableType = StringUi;
  (this->FixedTxt_GuildName).StringTableID = 0x3a9a7;
  (this->FixedTxt_GuildIntroduction).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroduction).StringTableID = 0x3a9c4;
  (this->FixedTxt_GuildLevel).StringTableType = StringUi;
  (this->FixedTxt_GuildLevel).StringTableID = 0x3a9a8;
  (this->FixedTxt_GuildMember).StringTableType = StringUi;
  (this->FixedTxt_GuildMember).StringTableID = 0x3a9aa;
  (this->FixedTxt_GuildInviteTimeLeft).StringTableType = StringUi;
  (this->FixedTxt_GuildInviteTimeLeft).StringTableID = 0x3a9b6;
  (this->FixedTxt_FeedBack).StringTableType = StringUi;
  (this->FixedTxt_FeedBack).StringTableID = 0x3a9bb;
  (this->Txt_ListCount).IsExpression = false;
  (this->Txt_ListCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_ListCount).UniqueString.Data.ArrayNum = 0;
  (this->Txt_ListCount).UniqueString.Data.ArrayMax = 0;
  (this->Txt_ListCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_ListCount).FormatArgs.ArrayNum = 0;
  (this->Txt_ListCount).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_GuildInvitedList @ 14b6554a0

void __thiscall UDS_VM_GuildInvitedList::~UDS_VM_GuildInvitedList(UDS_VM_GuildInvitedList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitedList__6B_;
  pFVar1 = (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_ListCount).FormatArgs.AllocatorInstance.Data,
             (this->Txt_ListCount).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_ListCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_ListCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_FeedBack).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_FeedBack).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_FeedBack).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_FeedBack).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildInviteTimeLeft).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildInviteTimeLeft).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildInviteTimeLeft).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildInviteTimeLeft).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildMember).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildMember).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildMember).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildMember).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildLevel).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildIntroduction).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildName).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildName).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6574a0

IClassDescriptor * __thiscall
UDS_VM_GuildInvitedList::GetFieldNotificationDescriptor(UDS_VM_GuildInvitedList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildInvitedList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b657e50

UClass * __cdecl UDS_VM_GuildInvitedList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitedList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitedList",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitedList.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitedList,0x2e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildInvitedList>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitedList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitedList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildInvitedList @ 14b658340

void __cdecl UDS_VM_GuildInvitedList::StaticRegisterNativesUDS_VM_GuildInvitedList(void)

{
  return;
}

// BindModel @ 14be75af0

void __thiscall UDS_VM_GuildInvitedList::BindModel(UDS_VM_GuildInvitedList *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListUpdateDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildInvitedList>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListUpdateDelegate,(UDS_VM_GuildInvitedList *)&stack0x00000010,
               (pmf_30eeb2bf *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListRemoveDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildInvitedList>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListRemoveDelegate,(UDS_VM_GuildInvitedList *)&stack0x00000010,
               (pmf_982eefd2 *)this);
  }
  return;
}

// InitViewModel @ 14be8cc00

void __thiscall UDS_VM_GuildInvitedList::InitViewModel(UDS_VM_GuildInvitedList *this)

{
  return;
}

// OnGuildInvitedReject @ 14be98ef0

void __thiscall
UDS_VM_GuildInvitedList::OnGuildInvitedReject(UDS_VM_GuildInvitedList *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UDS_GuildListDataSet *this_00;
  UObject *pUVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_38;
  int local_30;
  TArray<TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    this_00 = (UDS_GuildListDataSet *)FWeakObjectPtr::Get(&local_res18);
    UDS_GuildListDataSet::GetAllData(this_00,&local_28);
    uVar6 = 0;
    if (0 < local_28.ArrayNum) {
      lVar7 = 0;
      iVar5 = local_28.ArrayNum;
      do {
        if ((-1 < (int)uVar6) && ((int)uVar6 < iVar5)) {
          uVar3 = 0;
          if ((int)uVar6 < iVar5) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_res20 = *(FWeakObjectPtr *)(local_28.AllocatorInstance.Data + lVar7);
          bVar2 = FWeakObjectPtr::IsValid(&local_res20);
          iVar5 = local_28.ArrayNum;
          if ((bVar2) &&
             (pUVar4 = FWeakObjectPtr::Get(&local_res20), iVar5 = local_28.ArrayNum,
             *(longlong *)&pUVar4[2].field_0x10 == param_1)) {
            FDS_EntryBindingEventField::RemoveAt(&this->EntryBindingEventField_List,uVar6);
            local_30 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.BitNumber;
            local_38 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
            iVar5 = local_28.ArrayNum;
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < iVar5);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSetViewModel @ 14be9f010

void __thiscall
UDS_VM_GuildInvitedList::OnSetViewModel
          (UDS_VM_GuildInvitedList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_GuildManager *this_00;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    this_00 = UDS_GuildManager::GetInst();
    if (this_00 != (UDS_GuildManager *)0x0) {
      UDS_GuildManager::SendMyPendingList(this_00,2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTxt_ListCount @ 14beb5c30

void __thiscall UDS_VM_GuildInvitedList::SetTxt_ListCount(UDS_VM_GuildInvitedList *this,int param_1)

{
  int local_res8 [2];
  int local_res10 [2];
  FName local_18;
  int local_10;
  
  local_res10[0] = param_1;
  FDS_Text::Reset(&this->Txt_ListCount);
  local_res8[0] = DS_GuildDataHelper::MaxInvites();
  FDS_Text::SetTextFormatFromStringTable<int_const_&,int>
            (&this->Txt_ListCount,StringUi,0x2b0b,local_res10,local_res8);
  local_10 = FFieldNotificationClassDescriptor::Txt_ListCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Txt_ListCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebbed0

void __thiscall UDS_VM_GuildInvitedList::UnbindModel(UDS_VM_GuildInvitedList *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListUpdateDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListRemoveDelegate,this);
  }
  return;
}

// UpdateList @ 14bebf540

void __thiscall UDS_VM_GuildInvitedList::UpdateList(UDS_VM_GuildInvitedList *this)

{
  code *pcVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  bool bVar4;
  UDS_GuildListDataSet *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_02;
  UObject *pUVar8;
  FDS_ViewModelContext *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_b8;
  UDS_UserObjectListItem *local_b0;
  FWeakObjectPtr *local_a8;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TArray<TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_List);
  TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar4) {
    this_00 = (UDS_GuildListDataSet *)FWeakObjectPtr::Get(&local_res20);
    UDS_GuildListDataSet::GetAllData(this_00,&local_78);
    iVar3 = local_78.ArrayNum;
    local_a8 = (FWeakObjectPtr *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8)
    ;
    FVar10.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      pFVar2 = local_a8;
      pFVar9 = (FDS_ViewModelContext *)0x0;
      if (local_78.ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((FWeakObjectPtr *)FVar10.Data == pFVar2) break;
      local_b8 = *(FWeakObjectPtr *)FVar10.Data;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebf74a;
      }
      else {
        if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bebf74a:
          if (local_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_78.AllocatorInstance.Data);
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pFVar5 = ::operator_new(0x28);
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar5->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
        pFVar5->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar5->ViewModelName).ComparisonIndex = 0;
        (pFVar5->ViewModelName).Number = 0;
        pFVar5->ViewModelTemplateKey = None;
        pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildInvitedListSlot__6B_;
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
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildInvitedListSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar6[1].SharedReferenceCount = pFVar9;
      }
      if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar7 = FDS_ViewModelContext_GuildInvitedListSlot::StaticStruct();
      pFVar9->DerivedStaticStruct = (UStruct *)pUVar7;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar9;
        local_68.SharedReferenceCount.ReferenceController = pTVar6;
        UDS_ViewModelContextManager::RegisterContext(this_02,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar9->ViewModelTemplateKey = GuildInvitedListSlot;
      pUVar8 = FWeakObjectPtr::Get(&local_b8);
      pFVar9[1]._padding_ = *(longlong *)&pUVar8[2].field_0x10;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_UserObjectListItem::AddContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      local_b0 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_List,(TObjectPtr<UDS_UserObjectListItem>)&local_b0);
      FVar10.Data = FVar10.Data + 8;
    }
    local_res18[0] = local_78.ArrayNum;
    FDS_Text::Reset(&this->Txt_ListCount);
    local_res10[0] = DS_GuildDataHelper::MaxInvites();
    FDS_Text::SetTextFormatFromStringTable<int_const_&,int>
              (&this->Txt_ListCount,StringUi,0x2b0b,local_res18,local_res10);
    local_90 = FFieldNotificationClassDescriptor::Txt_ListCount.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::Txt_ListCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  local_80 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  return;
}

