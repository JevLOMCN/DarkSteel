// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b668d50

UClass * __cdecl UDS_VM_GuildSettingJoinApprove::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApprove.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingJoinApprove",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApprove.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingJoinApprove,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildSettingJoinApprove>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingJoinApprove>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApprove.InnerSingleton;
}

// UDS_VM_GuildSettingJoinApprove @ 14b66c1a0

UDS_VM_GuildSettingJoinApprove * __thiscall
UDS_VM_GuildSettingJoinApprove::UDS_VM_GuildSettingJoinApprove
          (UDS_VM_GuildSettingJoinApprove *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingJoinApprove__6B_;
  (this->FixedTxt_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Name).DateTime.Ticks = 0;
  (this->FixedTxt_Name).TimeSpan.Ticks = 0;
  (this->FixedTxt_Name).TimeExpressionType = None;
  (this->FixedTxt_Name).IsExpression = false;
  (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Name).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Level).DateTime.Ticks = 0;
  (this->FixedTxt_Level).TimeSpan.Ticks = 0;
  (this->FixedTxt_Level).TimeExpressionType = None;
  (this->FixedTxt_Level).IsExpression = false;
  (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Level).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_TimeLeft).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_TimeLeft).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_TimeLeft).DateTime.Ticks = 0;
  (this->FixedTxt_TimeLeft).TimeSpan.Ticks = 0;
  (this->FixedTxt_TimeLeft).TimeExpressionType = None;
  (this->FixedTxt_TimeLeft).IsExpression = false;
  (this->FixedTxt_TimeLeft).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_TimeLeft).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_TimeLeft).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_TimeLeft).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_TimeLeft).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_TimeLeft).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Approve).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Approve).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Approve).DateTime.Ticks = 0;
  (this->FixedTxt_Approve).TimeSpan.Ticks = 0;
  (this->FixedTxt_Approve).TimeExpressionType = None;
  (this->FixedTxt_Approve).IsExpression = false;
  (this->FixedTxt_Approve).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_Approve).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Approve).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Approve).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Approve).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Approve).FormatArgs.ArrayMax = 0;
  (this->Txt_ListCount).StringTableType = None;
  (this->Txt_ListCount).StringTableID = 0;
  (this->Txt_ListCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_ListCount).StringEnumTableNameID.Number = 0;
  (this->Txt_ListCount).DateTime.Ticks = 0;
  (this->Txt_ListCount).TimeSpan.Ticks = 0;
  (this->Txt_ListCount).TimeExpressionType = None;
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
  (this->FixedTxt_Name).StringTableType = StringUi;
  (this->FixedTxt_Name).StringTableID = 0x3a9d2;
  (this->FixedTxt_Level).StringTableType = StringUi;
  (this->FixedTxt_Level).StringTableID = 0x3a9d3;
  (this->FixedTxt_TimeLeft).StringTableType = StringUi;
  (this->FixedTxt_TimeLeft).StringTableID = 0x3a9b6;
  (this->FixedTxt_Approve).StringTableType = StringUi;
  (this->FixedTxt_Approve).StringTableID = 0x3a9f5;
  return this;
}

// UDS_VM_GuildSettingJoinApprove @ 14b66c380

UDS_VM_GuildSettingJoinApprove * __thiscall
UDS_VM_GuildSettingJoinApprove::UDS_VM_GuildSettingJoinApprove
          (UDS_VM_GuildSettingJoinApprove *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingJoinApprove__6B_;
  (this->FixedTxt_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Name).DateTime.Ticks = 0;
  (this->FixedTxt_Name).TimeSpan.Ticks = 0;
  (this->FixedTxt_Name).TimeExpressionType = None;
  (this->FixedTxt_Name).IsExpression = false;
  (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Name).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Level).DateTime.Ticks = 0;
  (this->FixedTxt_Level).TimeSpan.Ticks = 0;
  (this->FixedTxt_Level).TimeExpressionType = None;
  (this->FixedTxt_Level).IsExpression = false;
  (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Level).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_TimeLeft).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_TimeLeft).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_TimeLeft).DateTime.Ticks = 0;
  (this->FixedTxt_TimeLeft).TimeSpan.Ticks = 0;
  (this->FixedTxt_TimeLeft).TimeExpressionType = None;
  (this->FixedTxt_TimeLeft).IsExpression = false;
  (this->FixedTxt_TimeLeft).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_TimeLeft).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_TimeLeft).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_TimeLeft).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_TimeLeft).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_TimeLeft).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Approve).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Approve).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Approve).DateTime.Ticks = 0;
  (this->FixedTxt_Approve).TimeSpan.Ticks = 0;
  (this->FixedTxt_Approve).TimeExpressionType = None;
  (this->FixedTxt_Approve).IsExpression = false;
  (this->FixedTxt_Approve).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_Approve).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Approve).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Approve).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Approve).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Approve).FormatArgs.ArrayMax = 0;
  (this->Txt_ListCount).StringTableType = None;
  (this->Txt_ListCount).StringTableID = 0;
  (this->Txt_ListCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_ListCount).StringEnumTableNameID.Number = 0;
  (this->Txt_ListCount).DateTime.Ticks = 0;
  (this->Txt_ListCount).TimeSpan.Ticks = 0;
  (this->Txt_ListCount).TimeExpressionType = None;
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
  (this->FixedTxt_Name).StringTableType = StringUi;
  (this->FixedTxt_Name).StringTableID = 0x3a9d2;
  (this->FixedTxt_Level).StringTableType = StringUi;
  (this->FixedTxt_Level).StringTableID = 0x3a9d3;
  (this->FixedTxt_TimeLeft).StringTableType = StringUi;
  (this->FixedTxt_TimeLeft).StringTableID = 0x3a9b6;
  (this->FixedTxt_Approve).StringTableType = StringUi;
  (this->FixedTxt_Approve).StringTableID = 0x3a9f5;
  return this;
}

// ~UDS_VM_GuildSettingJoinApprove @ 14b66e8c0

void __thiscall
UDS_VM_GuildSettingJoinApprove::~UDS_VM_GuildSettingJoinApprove
          (UDS_VM_GuildSettingJoinApprove *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingJoinApprove__6B_;
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
            ((FDS_TextFormatArg *)(this->FixedTxt_Approve).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Approve).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Approve).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Approve).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_TimeLeft).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_TimeLeft).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_TimeLeft).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_TimeLeft).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Level).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Name).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6715e0

IClassDescriptor * __thiscall
UDS_VM_GuildSettingJoinApprove::GetFieldNotificationDescriptor(UDS_VM_GuildSettingJoinApprove *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildSettingJoinApprove::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b671e60

UClass * __cdecl UDS_VM_GuildSettingJoinApprove::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApprove.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingJoinApprove",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApprove.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingJoinApprove,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildSettingJoinApprove>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingJoinApprove>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApprove.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildSettingJoinApprove @ 14b672ac0

void __cdecl
UDS_VM_GuildSettingJoinApprove::StaticRegisterNativesUDS_VM_GuildSettingJoinApprove(void)

{
  return;
}

// BindModel @ 14be76280

void __thiscall UDS_VM_GuildSettingJoinApprove::BindModel(UDS_VM_GuildSettingJoinApprove *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListUpdateDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildSettingJoinApprove>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListUpdateDelegate,(UDS_VM_GuildSettingJoinApprove *)&stack0x00000010
               ,(pmf_a9f6d2e3 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListRemoveDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildSettingJoinApprove>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->PendingListRemoveDelegate,(UDS_VM_GuildSettingJoinApprove *)&stack0x00000010
               ,(pmf_2130e112 *)this);
  }
  return;
}

// InitViewModel @ 14be8cd40

void __thiscall UDS_VM_GuildSettingJoinApprove::InitViewModel(UDS_VM_GuildSettingJoinApprove *this)

{
  return;
}

// OnPendingListRemove @ 14be9b2a0

void __thiscall
UDS_VM_GuildSettingJoinApprove::OnPendingListRemove
          (UDS_VM_GuildSettingJoinApprove *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  FWeakObjectPtr local_res18;
  FName local_28;
  int local_20;
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  UDS_GuildManager::GetGuildMemberPendingDatas(&local_18);
  uVar5 = 0;
  if (0 < local_18.ArrayNum) {
    lVar6 = 0;
    iVar7 = local_18.ArrayNum;
    do {
      if ((-1 < (int)uVar5) && ((int)uVar5 < iVar7)) {
        uVar3 = 0;
        if ((int)uVar5 < iVar7) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res18 = *(FWeakObjectPtr *)(local_18.AllocatorInstance.Data + lVar6);
        bVar2 = FWeakObjectPtr::IsValid(&local_res18);
        iVar7 = local_18.ArrayNum;
        if ((bVar2) &&
           (pUVar4 = FWeakObjectPtr::Get(&local_res18), iVar7 = local_18.ArrayNum,
           *(longlong *)&pUVar4[1].field_0x8 == param_1)) {
          FDS_EntryBindingEventField::RemoveAt(&this->EntryBindingEventField_List,uVar5);
          local_20 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.BitNumber;
          local_28 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
          iVar7 = local_18.ArrayNum;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar7);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// OnSetViewModel @ 14bea1bb0

void __thiscall
UDS_VM_GuildSettingJoinApprove::OnSetViewModel
          (UDS_VM_GuildSettingJoinApprove *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

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
      UDS_GuildManager::SendGuildPendingList(this_00,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTxt_ListCount @ 14beb5de0

void __thiscall
UDS_VM_GuildSettingJoinApprove::SetTxt_ListCount(UDS_VM_GuildSettingJoinApprove *this,int param_1)

{
  int local_res8 [2];
  int local_res10 [2];
  FName local_18;
  int local_10;
  
  local_res10[0] = param_1;
  FDS_Text::Reset(&this->Txt_ListCount);
  local_res8[0] = DS_GuildDataHelper::MaxJoinRequests();
  FDS_Text::SetTextFormatFromStringTable<int_const_&,int>
            (&this->Txt_ListCount,StringUi,0x2b0b,local_res10,local_res8);
  local_10 = FFieldNotificationClassDescriptor::Txt_ListCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Txt_ListCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc240

void __thiscall UDS_VM_GuildSettingJoinApprove::UnbindModel(UDS_VM_GuildSettingJoinApprove *this)

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

// UpdateList @ 14bec0550

void __thiscall UDS_VM_GuildSettingJoinApprove::UpdateList(UDS_VM_GuildSettingJoinApprove *this)

{
  longlong lVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  UDS_UserObjectListItem *local_a8;
  FScriptContainerElement *local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_List);
  UDS_GuildManager::GetGuildMemberPendingDatas(&local_78);
  iVar4 = local_78.ArrayNum;
  local_a0 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8;
  FVar10.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    pFVar3 = local_a0;
    pFVar9 = (FDS_ViewModelContext *)0x0;
    if (local_78.ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar10.Data == pFVar3) break;
    lVar1 = *(longlong *)FVar10.Data;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bec07ca;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bec07ca;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
      pFVar6->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar6->ViewModelName).ComparisonIndex = 0;
      (pFVar6->ViewModelName).Number = 0;
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildSettingJoinApproveSlot__6B_;
      pFVar6[1]._padding_ = 0;
      pFVar9 = pFVar6;
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
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildSettingJoinApproveSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar9;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar8 = FDS_ViewModelContext_GuildSettingJoinApproveSlot::StaticStruct();
    pFVar9->DerivedStaticStruct = (UStruct *)pUVar8;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = pFVar9;
      local_68.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = GuildSettingJoinApproveSlot;
    pFVar9[1]._padding_ = lVar1;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar9;
    local_58.SharedReferenceCount.ReferenceController = pTVar7;
    UDS_UserObjectListItem::AddContext(this_00,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    local_a8 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_List,(TObjectPtr<UDS_UserObjectListItem>)&local_a8);
    FVar10.Data = FVar10.Data + 8;
  }
  local_res20[0] = local_78.ArrayNum;
  FDS_Text::Reset(&this->Txt_ListCount);
  local_res18[0] = DS_GuildDataHelper::MaxJoinRequests();
  FDS_Text::SetTextFormatFromStringTable<int_const_&,int>
            (&this->Txt_ListCount,StringUi,0x2b0b,local_res20,local_res18);
  local_90 = FFieldNotificationClassDescriptor::Txt_ListCount.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::Txt_ListCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  local_80 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
LAB_14bec07ca:
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

