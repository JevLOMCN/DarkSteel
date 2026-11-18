// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b626d00

UClass * __cdecl UDS_VM_Common_Mount::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Mount.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Mount",
               &Z_Registration_Info_UClass_UDS_VM_Common_Mount.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Mount,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Mount>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Mount>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Mount.InnerSingleton;
}

// UDS_VM_Common_Mount @ 14b62c8f0

UDS_VM_Common_Mount * __thiscall
UDS_VM_Common_Mount::UDS_VM_Common_Mount(UDS_VM_Common_Mount *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Mount__6B_;
  this->MountIconID = 0;
  (this->MountName).StringTableType = None;
  (this->MountName).StringTableID = 0;
  (this->MountName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountName).StringEnumTableNameID.Number = 0;
  (this->MountName).DateTime.Ticks = 0;
  (this->MountName).TimeSpan.Ticks = 0;
  (this->MountName).TimeExpressionType = None;
  (this->MountName).IsExpression = false;
  (this->MountName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountName).UniqueString.Data.ArrayNum = 0;
  (this->MountName).UniqueString.Data.ArrayMax = 0;
  (this->MountName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountName).FormatArgs.ArrayNum = 0;
  (this->MountName).FormatArgs.ArrayMax = 0;
  (this->MountSkillTypeText).StringTableType = None;
  (this->MountSkillTypeText).StringTableID = 0;
  (this->MountSkillTypeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountSkillTypeText).StringEnumTableNameID.Number = 0;
  (this->MountSkillTypeText).DateTime.Ticks = 0;
  (this->MountSkillTypeText).TimeSpan.Ticks = 0;
  (this->MountSkillTypeText).TimeExpressionType = None;
  (this->MountSkillTypeText).IsExpression = false;
  (this->MountSkillTypeText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountSkillTypeText).UniqueString.Data.ArrayNum = 0;
  (this->MountSkillTypeText).UniqueString.Data.ArrayMax = 0;
  (this->MountSkillTypeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountSkillTypeText).FormatArgs.ArrayNum = 0;
  (this->MountSkillTypeText).FormatArgs.ArrayMax = 0;
  (this->RequireMountSkillLevelText).StringTableType = None;
  (this->RequireMountSkillLevelText).StringTableID = 0;
  (this->RequireMountSkillLevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RequireMountSkillLevelText).StringEnumTableNameID.Number = 0;
  (this->RequireMountSkillLevelText).DateTime.Ticks = 0;
  (this->RequireMountSkillLevelText).TimeSpan.Ticks = 0;
  (this->RequireMountSkillLevelText).TimeExpressionType = None;
  (this->RequireMountSkillLevelText).IsExpression = false;
  (this->RequireMountSkillLevelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequireMountSkillLevelText).UniqueString.Data.ArrayNum = 0;
  (this->RequireMountSkillLevelText).UniqueString.Data.ArrayMax = 0;
  (this->RequireMountSkillLevelText).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequireMountSkillLevelText).FormatArgs.ArrayNum = 0;
  (this->RequireMountSkillLevelText).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_Common_Mount @ 14b62ca20

UDS_VM_Common_Mount * __thiscall
UDS_VM_Common_Mount::UDS_VM_Common_Mount(UDS_VM_Common_Mount *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Mount__6B_;
  this->MountIconID = 0;
  (this->MountName).StringTableType = None;
  (this->MountName).StringTableID = 0;
  (this->MountName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountName).StringEnumTableNameID.Number = 0;
  (this->MountName).DateTime.Ticks = 0;
  (this->MountName).TimeSpan.Ticks = 0;
  (this->MountName).TimeExpressionType = None;
  (this->MountName).IsExpression = false;
  (this->MountName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountName).UniqueString.Data.ArrayNum = 0;
  (this->MountName).UniqueString.Data.ArrayMax = 0;
  (this->MountName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountName).FormatArgs.ArrayNum = 0;
  (this->MountName).FormatArgs.ArrayMax = 0;
  (this->MountSkillTypeText).StringTableType = None;
  (this->MountSkillTypeText).StringTableID = 0;
  (this->MountSkillTypeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountSkillTypeText).StringEnumTableNameID.Number = 0;
  (this->MountSkillTypeText).DateTime.Ticks = 0;
  (this->MountSkillTypeText).TimeSpan.Ticks = 0;
  (this->MountSkillTypeText).TimeExpressionType = None;
  (this->MountSkillTypeText).IsExpression = false;
  (this->MountSkillTypeText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountSkillTypeText).UniqueString.Data.ArrayNum = 0;
  (this->MountSkillTypeText).UniqueString.Data.ArrayMax = 0;
  (this->MountSkillTypeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountSkillTypeText).FormatArgs.ArrayNum = 0;
  (this->MountSkillTypeText).FormatArgs.ArrayMax = 0;
  (this->RequireMountSkillLevelText).StringTableType = None;
  (this->RequireMountSkillLevelText).StringTableID = 0;
  (this->RequireMountSkillLevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RequireMountSkillLevelText).StringEnumTableNameID.Number = 0;
  (this->RequireMountSkillLevelText).DateTime.Ticks = 0;
  (this->RequireMountSkillLevelText).TimeSpan.Ticks = 0;
  (this->RequireMountSkillLevelText).TimeExpressionType = None;
  (this->RequireMountSkillLevelText).IsExpression = false;
  (this->RequireMountSkillLevelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequireMountSkillLevelText).UniqueString.Data.ArrayNum = 0;
  (this->RequireMountSkillLevelText).UniqueString.Data.ArrayMax = 0;
  (this->RequireMountSkillLevelText).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequireMountSkillLevelText).FormatArgs.ArrayNum = 0;
  (this->RequireMountSkillLevelText).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_Common_Mount @ 14b62ed20

void __thiscall UDS_VM_Common_Mount::~UDS_VM_Common_Mount(UDS_VM_Common_Mount *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Mount__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->RequireMountSkillLevelText).FormatArgs.AllocatorInstance.Data,
             (this->RequireMountSkillLevelText).FormatArgs.ArrayNum);
  pFVar1 = (this->RequireMountSkillLevelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RequireMountSkillLevelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MountSkillTypeText).FormatArgs.AllocatorInstance.Data,
             (this->MountSkillTypeText).FormatArgs.ArrayNum);
  pFVar1 = (this->MountSkillTypeText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountSkillTypeText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MountName).FormatArgs.AllocatorInstance.Data,
             (this->MountName).FormatArgs.ArrayNum);
  pFVar1 = (this->MountName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6318a0

IClassDescriptor * __thiscall
UDS_VM_Common_Mount::GetFieldNotificationDescriptor(UDS_VM_Common_Mount *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_Mount::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632360

UClass * __cdecl UDS_VM_Common_Mount::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Mount.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Mount",
               &Z_Registration_Info_UClass_UDS_VM_Common_Mount.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Mount,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Mount>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Mount>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Mount.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_Mount @ 14b632fe0

void __cdecl UDS_VM_Common_Mount::StaticRegisterNativesUDS_VM_Common_Mount(void)

{
  return;
}

// SetMountIconID @ 14bde7c00

void __thiscall UDS_VM_Common_Mount::SetMountIconID(UDS_VM_Common_Mount *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->MountIconID = param_1;
  local_10 = FFieldNotificationClassDescriptor::MountIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MountIconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMountName @ 14bde7c40

void __thiscall UDS_VM_Common_Mount::SetMountName(UDS_VM_Common_Mount *this,FString *param_1)

{
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromUniqueString(&local_58,param_1);
  FDS_Text::operator=(&this->MountName,&local_58);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  local_60 = FFieldNotificationClassDescriptor::MountName.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::MountName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

// SetMountName @ 14bde7d00

void __thiscall UDS_VM_Common_Mount::SetMountName(UDS_VM_Common_Mount *this,int param_1)

{
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_58,StringWorld,(longlong)param_1);
  FDS_Text::operator=(&this->MountName,&local_58);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  local_60 = FFieldNotificationClassDescriptor::MountName.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::MountName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

// SetMountSkillTypeText @ 14bde7dc0

void __thiscall
UDS_VM_Common_Mount::SetMountSkillTypeText(UDS_VM_Common_Mount *this,EDS_PlayerSkillType param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UEnum *pUVar4;
  FName local_res8;
  FName local_18;
  int local_10;
  
  pUVar4 = StaticEnum<enum_EDS_PlayerSkillType>();
  DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar4);
  (this->MountSkillTypeText).StringTableType = StringUi;
  pTVar2 = &(this->MountSkillTypeText).FormatArgs;
  (this->MountSkillTypeText).StringTableID = 0x55745;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->MountSkillTypeText).FormatArgs.ArrayNum);
  piVar1 = &(this->MountSkillTypeText).FormatArgs.ArrayMax;
  (this->MountSkillTypeText).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->MountSkillTypeText).FormatArgs.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->MountSkillTypeText).FormatArgs.ArrayNum = iVar3 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FName>
            ((FDS_TextFormatArg *)((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x28),
             &local_res8);
  local_10 = FFieldNotificationClassDescriptor::MountSkillTypeText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MountSkillTypeText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRequireMountSkillLevelText @ 14bde87b0

void __thiscall
UDS_VM_Common_Mount::SetRequireMountSkillLevelText(UDS_VM_Common_Mount *this,int param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  int iVar4;
  FObjectPtr_u_0 *pFVar5;
  FDS_Int32StringFormatArg *pFVar6;
  FName local_18;
  int local_10;
  
  pTVar2 = &(this->RequireMountSkillLevelText).FormatArgs;
  (this->RequireMountSkillLevelText).StringTableType = StringUi;
  (this->RequireMountSkillLevelText).StringTableID = 0x55768;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->RequireMountSkillLevelText).FormatArgs.ArrayNum);
  piVar1 = &(this->RequireMountSkillLevelText).FormatArgs.ArrayMax;
  (this->RequireMountSkillLevelText).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar4 = (this->RequireMountSkillLevelText).FormatArgs.ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RequireMountSkillLevelText).FormatArgs.ArrayNum = iVar4 + 1;
  this_00 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar5 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar5[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar5;
  this_00[1].StructMemory = (uchar *)FVar3;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar5[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
  pFVar6 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
  if (pFVar6 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar6->Value = param_1;
  }
  local_10 = FFieldNotificationClassDescriptor::RequireMountSkillLevelText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RequireMountSkillLevelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

