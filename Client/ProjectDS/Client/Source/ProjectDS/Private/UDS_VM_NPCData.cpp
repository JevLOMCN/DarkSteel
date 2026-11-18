// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b6ad6b0

UClass * __cdecl UDS_VM_NPCData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NPCData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NPCData",
               &Z_Registration_Info_UClass_UDS_VM_NPCData.InnerSingleton,
               StaticRegisterNativesUDS_VM_NPCData,0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_NPCData>,InternalVTableHelperCtorCaller<UDS_VM_NPCData>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NPCData.InnerSingleton;
}

// UDS_VM_NPCData @ 14b6b1020

UDS_VM_NPCData * __thiscall
UDS_VM_NPCData::UDS_VM_NPCData(UDS_VM_NPCData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NPCData__6B_;
  (this->NpcName).StringTableID = 0;
  (this->NpcName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcName).StringEnumTableNameID.Number = 0;
  (this->NpcName).DateTime.Ticks = 0;
  (this->NpcName).TimeSpan.Ticks = 0;
  (this->NpcName).TimeExpressionType = None;
  (this->NpcName).IsExpression = false;
  (this->NpcName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).UniqueString.Data.ArrayNum = 0;
  (this->NpcName).UniqueString.Data.ArrayMax = 0;
  (this->NpcName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).FormatArgs.ArrayNum = 0;
  (this->NpcName).FormatArgs.ArrayMax = 0;
  (this->NpcTitleName).StringTableType = None;
  (this->NpcTitleName).StringTableID = 0;
  (this->NpcTitleName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcTitleName).StringEnumTableNameID.Number = 0;
  (this->NpcTitleName).DateTime.Ticks = 0;
  (this->NpcTitleName).TimeSpan.Ticks = 0;
  (this->NpcTitleName).TimeExpressionType = None;
  (this->NpcTitleName).IsExpression = false;
  (this->NpcTitleName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcTitleName).UniqueString.Data.ArrayNum = 0;
  (this->NpcTitleName).UniqueString.Data.ArrayMax = 0;
  (this->NpcTitleName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcTitleName).FormatArgs.ArrayNum = 0;
  (this->NpcTitleName).FormatArgs.ArrayMax = 0;
  (this->NpcName).StringTableType = None;
  return this;
}

// UDS_VM_NPCData @ 14b6b1100

UDS_VM_NPCData * __thiscall
UDS_VM_NPCData::UDS_VM_NPCData(UDS_VM_NPCData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NPCData__6B_;
  (this->NpcName).StringTableID = 0;
  (this->NpcName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcName).StringEnumTableNameID.Number = 0;
  (this->NpcName).DateTime.Ticks = 0;
  (this->NpcName).TimeSpan.Ticks = 0;
  (this->NpcName).TimeExpressionType = None;
  (this->NpcName).IsExpression = false;
  (this->NpcName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).UniqueString.Data.ArrayNum = 0;
  (this->NpcName).UniqueString.Data.ArrayMax = 0;
  (this->NpcName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).FormatArgs.ArrayNum = 0;
  (this->NpcName).FormatArgs.ArrayMax = 0;
  (this->NpcTitleName).StringTableType = None;
  (this->NpcTitleName).StringTableID = 0;
  (this->NpcTitleName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcTitleName).StringEnumTableNameID.Number = 0;
  (this->NpcTitleName).DateTime.Ticks = 0;
  (this->NpcTitleName).TimeSpan.Ticks = 0;
  (this->NpcTitleName).TimeExpressionType = None;
  (this->NpcTitleName).IsExpression = false;
  (this->NpcTitleName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcTitleName).UniqueString.Data.ArrayNum = 0;
  (this->NpcTitleName).UniqueString.Data.ArrayMax = 0;
  (this->NpcTitleName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcTitleName).FormatArgs.ArrayNum = 0;
  (this->NpcTitleName).FormatArgs.ArrayMax = 0;
  (this->NpcName).StringTableType = None;
  return this;
}

// ~UDS_VM_NPCData @ 14b6b3900

void __thiscall UDS_VM_NPCData::~UDS_VM_NPCData(UDS_VM_NPCData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NPCData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NpcTitleName).FormatArgs.AllocatorInstance.Data,
             (this->NpcTitleName).FormatArgs.ArrayNum);
  pFVar1 = (this->NpcTitleName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NpcTitleName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NpcName).FormatArgs.AllocatorInstance.Data,
             (this->NpcName).FormatArgs.ArrayNum);
  pFVar1 = (this->NpcName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NpcName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6630

IClassDescriptor * __thiscall UDS_VM_NPCData::GetFieldNotificationDescriptor(UDS_VM_NPCData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NPCData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b6da0

UClass * __cdecl UDS_VM_NPCData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NPCData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NPCData",
               &Z_Registration_Info_UClass_UDS_VM_NPCData.InnerSingleton,
               StaticRegisterNativesUDS_VM_NPCData,0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_NPCData>,InternalVTableHelperCtorCaller<UDS_VM_NPCData>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NPCData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NPCData @ 14b6b7d10

void __cdecl UDS_VM_NPCData::StaticRegisterNativesUDS_VM_NPCData(void)

{
  return;
}

// OnSetViewModel @ 14be3aa60

void __thiscall
UDS_VM_NPCData::OnSetViewModel(UDS_VM_NPCData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  UDS_DataSetBase *this_00;
  FDS_NpcBaseTableRow *this_01;
  FWeakObjectPtr local_res10;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  TSharedPtr<FDS_ViewModelContext_NPC,1> local_f8;
  FDS_Text local_e8;
  FDS_Text local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_48 [2];
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_48[0].Object = param_1->Object;
  local_48[0].SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NPC>(&local_f8,local_48);
  if (local_f8.Object == (FDS_ViewModelContext_NPC *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  else {
    uVar5 = (local_f8.Object)->NpcBaseTableID;
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res10);
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res10);
      uVar5 = UDS_DataSetBase::GetEntityTableID(this_00);
    }
    if (uVar5 != 0) {
      this_01 = FDS_NpcBaseTableRow::GetRef((ulonglong)uVar5,true);
      bVar4 = FDS_NpcBaseTableRow::IsValid(this_01);
      if (bVar4) {
        local_e8.StringTableID = 0;
        local_e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_e8.StringEnumTableNameID.Number = 0;
        local_e8.TimeExpressionType = None;
        local_e8.IsExpression = false;
        local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.UniqueString.Data.ArrayNum = 0;
        local_e8.UniqueString.Data.ArrayMax = 0;
        local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.FormatArgs.ArrayNum = 0;
        local_e8.FormatArgs.ArrayMax = 0;
        local_e8.StringTableType = None;
        local_e8.DateTime.Ticks = 0;
        local_e8.TimeSpan.Ticks = 0;
        FDS_Text::SetTextFromStringID(&local_e8,&this_01->ID_NameSid);
        iVar3 = FFieldNotificationClassDescriptor::NpcName.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::NpcName.FieldName;
        FDS_Text::operator=(&this->NpcName,&local_e8);
        local_138 = FVar2;
        local_130 = iVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_138);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data,
                   local_e8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_e8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.UniqueString.Data.AllocatorInstance.Data);
        }
        local_98.StringTableType = None;
        local_98.StringTableID = 0;
        local_98.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_98.StringEnumTableNameID.Number = 0;
        local_98.DateTime.Ticks = 0;
        local_98.TimeSpan.Ticks = 0;
        local_98.TimeExpressionType = None;
        local_98.IsExpression = false;
        local_98.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.UniqueString.Data.ArrayNum = 0;
        local_98.UniqueString.Data.ArrayMax = 0;
        local_98.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.FormatArgs.ArrayNum = 0;
        local_98.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringID(&local_98,&this_01->ID_NameTitleSid);
        iVar3 = FFieldNotificationClassDescriptor::NpcTitleName.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::NpcTitleName.FieldName;
        FDS_Text::operator=(&this->NpcTitleName,&local_98);
        local_128 = FVar2;
        local_120 = iVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data,
                   local_98.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_98.FormatArgs.AllocatorInstance.Data);
        }
        if (local_98.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.UniqueString.Data.AllocatorInstance.Data);
        }
        iVar3 = FFieldNotificationClassDescriptor::bUseNpcTitleName.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::bUseNpcTitleName.FieldName;
        bVar4 = 0 < (this_01->ID_NameTitleSid).ID;
        if (this->bUseNpcTitleName != bVar4) {
          this->bUseNpcTitleName = bVar4;
          local_110 = iVar3;
          local_118 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
        }
        iVar3 = FFieldNotificationClassDescriptor::RelationPoint.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::RelationPoint.FieldName;
        if (this->RelationPoint != 0) {
          this->RelationPoint = 0;
          local_100 = iVar3;
          local_108 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetNpcName @ 14be4e5e0

void __thiscall UDS_VM_NPCData::SetNpcName(UDS_VM_NPCData *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::NpcName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::NpcName.FieldName;
  FDS_Text::operator=(&this->NpcName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetNpcTitleName @ 14be4e640

void __thiscall UDS_VM_NPCData::SetNpcTitleName(UDS_VM_NPCData *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::NpcTitleName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::NpcTitleName.FieldName;
  FDS_Text::operator=(&this->NpcTitleName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRelationPoint @ 14be4feb0

void __thiscall UDS_VM_NPCData::SetRelationPoint(UDS_VM_NPCData *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::RelationPoint.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RelationPoint.FieldName;
  if (this->RelationPoint != param_1) {
    this->RelationPoint = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetUseNpcTitleName @ 14be52d60

void __thiscall UDS_VM_NPCData::SetUseNpcTitleName(UDS_VM_NPCData *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bUseNpcTitleName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bUseNpcTitleName.FieldName;
  if (this->bUseNpcTitleName != *param_1) {
    this->bUseNpcTitleName = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

