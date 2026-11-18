// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b6fbca0

UClass * __cdecl UDS_VM_WorldBoss_SpawnInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_SpawnInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_SpawnInfo",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_SpawnInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_SpawnInfo,0x328,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_SpawnInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_SpawnInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_SpawnInfo.InnerSingleton;
}

// UDS_VM_WorldBoss_SpawnInfo @ 14b700b40

UDS_VM_WorldBoss_SpawnInfo * __thiscall
UDS_VM_WorldBoss_SpawnInfo::UDS_VM_WorldBoss_SpawnInfo
          (UDS_VM_WorldBoss_SpawnInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_SpawnInfo__6B_;
  (this->TitleLabel_Text).StringTableID = 0;
  (this->TitleLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleLabel_Text).StringEnumTableNameID.Number = 0;
  (this->TitleLabel_Text).DateTime.Ticks = 0;
  (this->TitleLabel_Text).TimeSpan.Ticks = 0;
  (this->TitleLabel_Text).TimeExpressionType = None;
  (this->TitleLabel_Text).IsExpression = false;
  (this->TitleLabel_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->TitleLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->TitleLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabel_Text).FormatArgs.ArrayNum = 0;
  (this->TitleLabel_Text).FormatArgs.ArrayMax = 0;
  (this->SpawnState_Text).StringTableType = None;
  (this->SpawnState_Text).StringTableID = 0;
  (this->SpawnState_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SpawnState_Text).StringEnumTableNameID.Number = 0;
  (this->SpawnState_Text).DateTime.Ticks = 0;
  (this->SpawnState_Text).TimeSpan.Ticks = 0;
  (this->SpawnState_Text).TimeExpressionType = None;
  (this->SpawnState_Text).IsExpression = false;
  (this->SpawnState_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnState_Text).UniqueString.Data.ArrayNum = 0;
  (this->SpawnState_Text).UniqueString.Data.ArrayMax = 0;
  (this->SpawnState_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnState_Text).FormatArgs.ArrayNum = 0;
  (this->SpawnState_Text).FormatArgs.ArrayMax = 0;
  (this->AreaLabel_Text).StringTableType = None;
  (this->AreaLabel_Text).StringTableID = 0;
  (this->AreaLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AreaLabel_Text).StringEnumTableNameID.Number = 0;
  (this->AreaLabel_Text).DateTime.Ticks = 0;
  (this->AreaLabel_Text).TimeSpan.Ticks = 0;
  (this->AreaLabel_Text).TimeExpressionType = None;
  (this->AreaLabel_Text).IsExpression = false;
  (this->AreaLabel_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->AreaLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->AreaLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaLabel_Text).FormatArgs.ArrayNum = 0;
  (this->AreaLabel_Text).FormatArgs.ArrayMax = 0;
  (this->AreaName_Text).StringTableType = None;
  (this->AreaName_Text).StringTableID = 0;
  (this->AreaName_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AreaName_Text).StringEnumTableNameID.Number = 0;
  (this->AreaName_Text).DateTime.Ticks = 0;
  (this->AreaName_Text).TimeSpan.Ticks = 0;
  (this->AreaName_Text).TimeExpressionType = None;
  (this->AreaName_Text).IsExpression = false;
  (this->AreaName_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaName_Text).UniqueString.Data.ArrayNum = 0;
  (this->AreaName_Text).UniqueString.Data.ArrayMax = 0;
  (this->AreaName_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaName_Text).FormatArgs.ArrayNum = 0;
  (this->AreaName_Text).FormatArgs.ArrayMax = 0;
  (this->RemainTimeLabel_Text).StringTableType = None;
  (this->RemainTimeLabel_Text).StringTableID = 0;
  (this->RemainTimeLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RemainTimeLabel_Text).StringEnumTableNameID.Number = 0;
  (this->RemainTimeLabel_Text).DateTime.Ticks = 0;
  (this->RemainTimeLabel_Text).TimeSpan.Ticks = 0;
  (this->RemainTimeLabel_Text).TimeExpressionType = None;
  (this->RemainTimeLabel_Text).IsExpression = false;
  (this->RemainTimeLabel_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RemainTimeLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->RemainTimeLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->RemainTimeLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTimeLabel_Text).FormatArgs.ArrayNum = 0;
  (this->RemainTimeLabel_Text).FormatArgs.ArrayMax = 0;
  (this->RemainTimeValue_Text).StringTableType = None;
  (this->RemainTimeValue_Text).StringTableID = 0;
  (this->RemainTimeValue_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RemainTimeValue_Text).StringEnumTableNameID.Number = 0;
  (this->RemainTimeValue_Text).DateTime.Ticks = 0;
  (this->RemainTimeValue_Text).TimeSpan.Ticks = 0;
  (this->RemainTimeValue_Text).TimeExpressionType = None;
  (this->RemainTimeValue_Text).IsExpression = false;
  (this->RemainTimeValue_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RemainTimeValue_Text).UniqueString.Data.ArrayNum = 0;
  (this->RemainTimeValue_Text).UniqueString.Data.ArrayMax = 0;
  (this->RemainTimeValue_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTimeValue_Text).FormatArgs.ArrayNum = 0;
  (this->RemainTimeValue_Text).FormatArgs.ArrayMax = 0;
  (this->SpawnInfoTimerHandle).Handle = 0;
  *(undefined8 *)&this->RemainTimeLabelTextMap = 0;
  *(undefined8 *)&(this->RemainTimeLabelTextMap).field_0x8 = 0;
  *(undefined8 *)&(this->RemainTimeLabelTextMap).field_0x20 = 0;
  (this->TitleLabel_Text).StringTableType = None;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x28 = 0;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x34 = 0;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RemainTimeLabelTextMap).field_0x40 = 0;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x48 = 0;
  *(undefined8 *)&this->SpawnStateTextMap = 0;
  *(undefined8 *)&(this->SpawnStateTextMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpawnStateTextMap).field_0x20 = 0;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x34 = 0;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpawnStateTextMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x48 = 0;
  return this;
}

// UDS_VM_WorldBoss_SpawnInfo @ 14b700dd0

UDS_VM_WorldBoss_SpawnInfo * __thiscall
UDS_VM_WorldBoss_SpawnInfo::UDS_VM_WorldBoss_SpawnInfo
          (UDS_VM_WorldBoss_SpawnInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_SpawnInfo__6B_;
  (this->TitleLabel_Text).StringTableID = 0;
  (this->TitleLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleLabel_Text).StringEnumTableNameID.Number = 0;
  (this->TitleLabel_Text).DateTime.Ticks = 0;
  (this->TitleLabel_Text).TimeSpan.Ticks = 0;
  (this->TitleLabel_Text).TimeExpressionType = None;
  (this->TitleLabel_Text).IsExpression = false;
  (this->TitleLabel_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->TitleLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->TitleLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabel_Text).FormatArgs.ArrayNum = 0;
  (this->TitleLabel_Text).FormatArgs.ArrayMax = 0;
  (this->SpawnState_Text).StringTableType = None;
  (this->SpawnState_Text).StringTableID = 0;
  (this->SpawnState_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SpawnState_Text).StringEnumTableNameID.Number = 0;
  (this->SpawnState_Text).DateTime.Ticks = 0;
  (this->SpawnState_Text).TimeSpan.Ticks = 0;
  (this->SpawnState_Text).TimeExpressionType = None;
  (this->SpawnState_Text).IsExpression = false;
  (this->SpawnState_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnState_Text).UniqueString.Data.ArrayNum = 0;
  (this->SpawnState_Text).UniqueString.Data.ArrayMax = 0;
  (this->SpawnState_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnState_Text).FormatArgs.ArrayNum = 0;
  (this->SpawnState_Text).FormatArgs.ArrayMax = 0;
  (this->AreaLabel_Text).StringTableType = None;
  (this->AreaLabel_Text).StringTableID = 0;
  (this->AreaLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AreaLabel_Text).StringEnumTableNameID.Number = 0;
  (this->AreaLabel_Text).DateTime.Ticks = 0;
  (this->AreaLabel_Text).TimeSpan.Ticks = 0;
  (this->AreaLabel_Text).TimeExpressionType = None;
  (this->AreaLabel_Text).IsExpression = false;
  (this->AreaLabel_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->AreaLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->AreaLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaLabel_Text).FormatArgs.ArrayNum = 0;
  (this->AreaLabel_Text).FormatArgs.ArrayMax = 0;
  (this->AreaName_Text).StringTableType = None;
  (this->AreaName_Text).StringTableID = 0;
  (this->AreaName_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AreaName_Text).StringEnumTableNameID.Number = 0;
  (this->AreaName_Text).DateTime.Ticks = 0;
  (this->AreaName_Text).TimeSpan.Ticks = 0;
  (this->AreaName_Text).TimeExpressionType = None;
  (this->AreaName_Text).IsExpression = false;
  (this->AreaName_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaName_Text).UniqueString.Data.ArrayNum = 0;
  (this->AreaName_Text).UniqueString.Data.ArrayMax = 0;
  (this->AreaName_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaName_Text).FormatArgs.ArrayNum = 0;
  (this->AreaName_Text).FormatArgs.ArrayMax = 0;
  (this->RemainTimeLabel_Text).StringTableType = None;
  (this->RemainTimeLabel_Text).StringTableID = 0;
  (this->RemainTimeLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RemainTimeLabel_Text).StringEnumTableNameID.Number = 0;
  (this->RemainTimeLabel_Text).DateTime.Ticks = 0;
  (this->RemainTimeLabel_Text).TimeSpan.Ticks = 0;
  (this->RemainTimeLabel_Text).TimeExpressionType = None;
  (this->RemainTimeLabel_Text).IsExpression = false;
  (this->RemainTimeLabel_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RemainTimeLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->RemainTimeLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->RemainTimeLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTimeLabel_Text).FormatArgs.ArrayNum = 0;
  (this->RemainTimeLabel_Text).FormatArgs.ArrayMax = 0;
  (this->RemainTimeValue_Text).StringTableType = None;
  (this->RemainTimeValue_Text).StringTableID = 0;
  (this->RemainTimeValue_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RemainTimeValue_Text).StringEnumTableNameID.Number = 0;
  (this->RemainTimeValue_Text).DateTime.Ticks = 0;
  (this->RemainTimeValue_Text).TimeSpan.Ticks = 0;
  (this->RemainTimeValue_Text).TimeExpressionType = None;
  (this->RemainTimeValue_Text).IsExpression = false;
  (this->RemainTimeValue_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RemainTimeValue_Text).UniqueString.Data.ArrayNum = 0;
  (this->RemainTimeValue_Text).UniqueString.Data.ArrayMax = 0;
  (this->RemainTimeValue_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTimeValue_Text).FormatArgs.ArrayNum = 0;
  (this->RemainTimeValue_Text).FormatArgs.ArrayMax = 0;
  (this->SpawnInfoTimerHandle).Handle = 0;
  *(undefined8 *)&this->RemainTimeLabelTextMap = 0;
  *(undefined8 *)&(this->RemainTimeLabelTextMap).field_0x8 = 0;
  *(undefined8 *)&(this->RemainTimeLabelTextMap).field_0x20 = 0;
  (this->TitleLabel_Text).StringTableType = None;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x28 = 0;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x34 = 0;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RemainTimeLabelTextMap).field_0x40 = 0;
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x48 = 0;
  *(undefined8 *)&this->SpawnStateTextMap = 0;
  *(undefined8 *)&(this->SpawnStateTextMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpawnStateTextMap).field_0x20 = 0;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x34 = 0;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpawnStateTextMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x48 = 0;
  return this;
}

// ~UDS_VM_WorldBoss_SpawnInfo @ 14b702ff0

void __thiscall
UDS_VM_WorldBoss_SpawnInfo::~UDS_VM_WorldBoss_SpawnInfo(UDS_VM_WorldBoss_SpawnInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_SpawnInfo__6B_;
  *(undefined4 *)&(this->SpawnStateTextMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SpawnStateTextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SpawnStateTextMap);
  *(undefined4 *)&(this->RemainTimeLabelTextMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RemainTimeLabelTextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->RemainTimeLabelTextMap);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RemainTimeValue_Text).FormatArgs.AllocatorInstance.Data,
             (this->RemainTimeValue_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->RemainTimeValue_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RemainTimeValue_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RemainTimeLabel_Text).FormatArgs.AllocatorInstance.Data,
             (this->RemainTimeLabel_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->RemainTimeLabel_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RemainTimeLabel_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->AreaName_Text).FormatArgs.AllocatorInstance.Data,
             (this->AreaName_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->AreaName_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AreaName_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->AreaLabel_Text).FormatArgs.AllocatorInstance.Data,
             (this->AreaLabel_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->AreaLabel_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AreaLabel_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SpawnState_Text).FormatArgs.AllocatorInstance.Data,
             (this->SpawnState_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->SpawnState_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SpawnState_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleLabel_Text).FormatArgs.AllocatorInstance.Data,
             (this->TitleLabel_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->TitleLabel_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TitleLabel_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b706000

IClassDescriptor * __thiscall
UDS_VM_WorldBoss_SpawnInfo::GetFieldNotificationDescriptor(UDS_VM_WorldBoss_SpawnInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldBoss_SpawnInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706d10

UClass * __cdecl UDS_VM_WorldBoss_SpawnInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_SpawnInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_SpawnInfo",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_SpawnInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_SpawnInfo,0x328,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_SpawnInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_SpawnInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_SpawnInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldBoss_SpawnInfo @ 14b7076d0

void __cdecl UDS_VM_WorldBoss_SpawnInfo::StaticRegisterNativesUDS_VM_WorldBoss_SpawnInfo(void)

{
  return;
}

// BindModel @ 14c003cf0

void __thiscall UDS_VM_WorldBoss_SpawnInfo::BindModel(UDS_VM_WorldBoss_SpawnInfo *this)

{
  UDS_WorldBossEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldBossEvent::GetEvent();
  if (pUVar1 != (UDS_WorldBossEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWorldBoss,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldBoss_SpawnInfo>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedWorldBoss,(UDS_VM_WorldBoss_SpawnInfo *)&stack0x00000010,
               (pmf_e66cbc82 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedWorldBossStatus,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WorldBossSpawnStatus_const_&,int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldBoss_SpawnInfo>
              (&pUVar1->OnChangedWorldBossStatus,(UDS_VM_WorldBoss_SpawnInfo *)&stack0x00000010,
               (pmf_a525e298 *)this);
  }
  return;
}

// ClearSpawnInfoTimer @ 14c006820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_SpawnInfo::ClearSpawnInfoTimer(UDS_VM_WorldBoss_SpawnInfo *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->SpawnInfoTimerHandle);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->SpawnInfoTimerHandle).Handle);
  }
  (this->SpawnInfoTimerHandle).Handle = 0;
  return;
}

// InitViewModel @ 14c01f880

void __thiscall UDS_VM_WorldBoss_SpawnInfo::InitViewModel(UDS_VM_WorldBoss_SpawnInfo *this)

{
  int *piVar1;
  TMap<EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WorldBossSpawnStatus,FDS_Text,0>_>
  *pTVar2;
  FDS_Text *pFVar3;
  undefined1 local_res8 [16];
  FName local_78;
  undefined1 *local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  void *local_38;
  undefined8 local_30;
  FDS_TextFormatArg *local_28;
  undefined8 local_20;
  
  FDS_Text::SetTextFromStringTable(&this->TitleLabel_Text,StringUi,0x5a555);
  local_70._0_4_ = FFieldNotificationClassDescriptor::TitleLabel_Text.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::TitleLabel_Text.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  FDS_Text::SetTextFromStringTable(&this->AreaLabel_Text,StringUi,0x5a558);
  local_70 = (undefined1 *)
             CONCAT44(local_70._4_4_,FFieldNotificationClassDescriptor::AreaLabel_Text.BitNumber);
  local_78 = FFieldNotificationClassDescriptor::AreaLabel_Text.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  local_68[0] = 0;
  local_78 = (FName)local_res8;
  local_60 = 0;
  pTVar2 = &this->RemainTimeLabelTextMap;
  local_70 = local_68;
  local_58 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_28 = (FDS_TextFormatArg *)0x0;
  local_20 = 0;
  local_res8[0] = 1;
  TSet<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossSpawnStatus_&&,FDS_Text_&&>_>
            (pTVar2,(TPairInitializer<EDS_WorldBossSpawnStatus_&&,FDS_Text_&&> *)(local_res8 + 8),
             (bool *)&local_78);
  DestructItems<FDS_TextFormatArg,int>(local_28,(int)local_20);
  if (local_28 != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  local_78 = (FName)local_res8;
  local_68[0] = 0;
  local_70 = local_68;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (FDS_TextFormatArg *)0x0;
  local_20 = 0;
  local_res8[0] = 2;
  TSet<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossSpawnStatus_&&,FDS_Text_&&>_>
            (pTVar2,(TPairInitializer<EDS_WorldBossSpawnStatus_&&,FDS_Text_&&> *)(local_res8 + 8),
             (bool *)&local_78);
  DestructItems<FDS_TextFormatArg,int>(local_28,(int)local_20);
  if (local_28 != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  local_78 = (FName)local_res8;
  local_68[0] = 0;
  local_70 = local_68;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (FDS_TextFormatArg *)0x0;
  local_20 = 0;
  local_res8[0] = 3;
  TSet<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossSpawnStatus_&&,FDS_Text_&&>_>
            (pTVar2,(TPairInitializer<EDS_WorldBossSpawnStatus_&&,FDS_Text_&&> *)(local_res8 + 8),
             (bool *)&local_78);
  DestructItems<FDS_TextFormatArg,int>(local_28,(int)local_20);
  if (local_28 != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  pFVar3 = TMapBase<enum_EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>_>
           ::FindChecked(pTVar2,NotSpawned);
  pFVar3->StringTableType = StringUi;
  pFVar3->StringTableID = 0x5a55a;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pFVar3->FormatArgs).AllocatorInstance.Data,
             (pFVar3->FormatArgs).ArrayNum);
  piVar1 = &(pFVar3->FormatArgs).ArrayMax;
  (pFVar3->FormatArgs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(pFVar3->FormatArgs).AllocatorInstance,0,piVar1);
  }
  pFVar3 = TMapBase<enum_EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>_>
           ::FindChecked(pTVar2,Upcoming);
  pFVar3->StringTableType = StringUi;
  pFVar3->StringTableID = 0x5a55a;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pFVar3->FormatArgs).AllocatorInstance.Data,
             (pFVar3->FormatArgs).ArrayNum);
  piVar1 = &(pFVar3->FormatArgs).ArrayMax;
  (pFVar3->FormatArgs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(pFVar3->FormatArgs).AllocatorInstance,0,piVar1);
  }
  pFVar3 = TMapBase<enum_EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>_>
           ::FindChecked(pTVar2,Spawned);
  pFVar3->StringTableType = StringUi;
  pFVar3->StringTableID = 0x5a559;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pFVar3->FormatArgs).AllocatorInstance.Data,
             (pFVar3->FormatArgs).ArrayNum);
  piVar1 = &(pFVar3->FormatArgs).ArrayMax;
  (pFVar3->FormatArgs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(pFVar3->FormatArgs).AllocatorInstance,0,piVar1);
  }
  local_78 = (FName)local_res8;
  local_68[0] = 0;
  pTVar2 = &this->SpawnStateTextMap;
  local_70 = local_68;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = (void *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  local_30 = 0;
  local_28 = (FDS_TextFormatArg *)0x0;
  local_20 = 0;
  local_res8[0] = 1;
  TSet<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossSpawnStatus_&&,FDS_Text_&&>_>
            (pTVar2,(TPairInitializer<EDS_WorldBossSpawnStatus_&&,FDS_Text_&&> *)(local_res8 + 8),
             (bool *)&local_78);
  DestructItems<FDS_TextFormatArg,int>(local_28,(int)local_20);
  if (local_28 != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  local_78 = (FName)local_res8;
  local_68[0] = 0;
  local_70 = local_68;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (FDS_TextFormatArg *)0x0;
  local_20 = 0;
  local_res8[0] = 2;
  TSet<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossSpawnStatus_&&,FDS_Text_&&>_>
            (pTVar2,(TPairInitializer<EDS_WorldBossSpawnStatus_&&,FDS_Text_&&> *)(local_res8 + 8),
             (bool *)&local_78);
  DestructItems<FDS_TextFormatArg,int>(local_28,(int)local_20);
  if (local_28 != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  local_78 = (FName)local_res8;
  local_68[0] = 0;
  local_70 = local_68;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (FDS_TextFormatArg *)0x0;
  local_20 = 0;
  local_res8[0] = 3;
  TSet<TTuple<enum_EDS_WorldBossSpawnStatus,FDS_Text>,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WorldBossSpawnStatus_&&,FDS_Text_&&>_>
            (pTVar2,(TPairInitializer<EDS_WorldBossSpawnStatus_&&,FDS_Text_&&> *)(local_res8 + 8),
             (bool *)&local_78);
  DestructItems<FDS_TextFormatArg,int>(local_28,(int)local_20);
  if (local_28 != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  pFVar3 = TMapBase<enum_EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>_>
           ::FindChecked(pTVar2,NotSpawned);
  pFVar3->StringTableType = StringUi;
  pFVar3->StringTableID = 0x5a562;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pFVar3->FormatArgs).AllocatorInstance.Data,
             (pFVar3->FormatArgs).ArrayNum);
  piVar1 = &(pFVar3->FormatArgs).ArrayMax;
  (pFVar3->FormatArgs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(pFVar3->FormatArgs).AllocatorInstance,0,piVar1);
  }
  pFVar3 = TMapBase<enum_EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>_>
           ::FindChecked(pTVar2,Upcoming);
  pFVar3->StringTableType = StringUi;
  pFVar3->StringTableID = 0x5a561;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pFVar3->FormatArgs).AllocatorInstance.Data,
             (pFVar3->FormatArgs).ArrayNum);
  piVar1 = &(pFVar3->FormatArgs).ArrayMax;
  (pFVar3->FormatArgs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(pFVar3->FormatArgs).AllocatorInstance,0,piVar1);
  }
  pFVar3 = TMapBase<enum_EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>_>
           ::FindChecked(pTVar2,Spawned);
  pFVar3->StringTableType = StringUi;
  pFVar3->StringTableID = 0x5a556;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pFVar3->FormatArgs).AllocatorInstance.Data,
             (pFVar3->FormatArgs).ArrayNum);
  piVar1 = &(pFVar3->FormatArgs).ArrayMax;
  (pFVar3->FormatArgs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(pFVar3->FormatArgs).AllocatorInstance,0,piVar1);
  }
  return;
}

// OnChangedWorldBossStatus @ 14c025b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldBoss_SpawnInfo::OnChangedWorldBossStatus
          (UDS_VM_WorldBoss_SpawnInfo *this,EDS_WorldBossSpawnStatus *param_1,int param_2)

{
  UDS_WorldBossManager *pUVar1;
  FDS_Text *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_WorldBossManager::GetInst();
  if ((pUVar1 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldBoss_SpawnInfo::OnChangedWorldBossStatus",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x73,L"UDS_WorldBossManager is InValid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if (param_2 == pUVar1->SelectedWorldBossID) {
    pFVar2 = TMapBase<enum_EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>_>
             ::FindChecked(&this->RemainTimeLabelTextMap,*param_1);
    FDS_Text::operator=(&this->RemainTimeLabel_Text,pFVar2);
    local_140 = FFieldNotificationClassDescriptor::RemainTimeLabel_Text.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::RemainTimeLabel_Text.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    pFVar2 = TMapBase<enum_EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>_>
             ::FindChecked(&this->SpawnStateTextMap,*param_1);
    FDS_Text::operator=(&this->SpawnState_Text,pFVar2);
    local_140 = FFieldNotificationClassDescriptor::SpawnState_Text.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::SpawnState_Text.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  return;
}

// OnSelectedWorldBoss @ 14c030100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldBoss_SpawnInfo::OnSelectedWorldBoss(UDS_VM_WorldBoss_SpawnInfo *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_WorldBossManager *pUVar5;
  int *piVar6;
  UDS_LogManager *pUVar7;
  ForElementType<FSetElementId> FVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  undefined1 auStackY_308 [32];
  FName local_2c8;
  int local_2c0;
  undefined1 local_2b8 [32];
  void *local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 local_288;
  int local_284;
  undefined1 local_280 [8];
  ForElementType<FSetElementId> local_278;
  int local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pUVar5 = UDS_WorldBossManager::GetInst();
  if ((pUVar5 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0)) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WorldBoss_SpawnInfo::OnSelectedWorldBoss",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0x57,L"UDS_WorldBossManager is InValid")
    ;
    pFVar9 = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    if (*(int *)&(pUVar5->WorldBossInfoMap).field_0x8 !=
        *(int *)&(pUVar5->WorldBossInfoMap).field_0x34) {
      puVar10 = *(undefined1 **)&(pUVar5->WorldBossInfoMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(pUVar5->WorldBossInfoMap).field_0x38;
      }
      iVar4 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(pUVar5->WorldBossInfoMap).field_0x48 - 1U & param_1) * 4
                      );
      if (iVar4 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar4 * 0x30 + *(longlong *)&pUVar5->WorldBossInfoMap);
          if (*piVar6 == param_1) {
            pFVar9 = (FScriptContainerElement *)(piVar6 + 1);
            if (piVar6 == (int *)0x0) {
              pFVar9 = (FScriptContainerElement *)0x0;
            }
            if (pFVar9 != (FScriptContainerElement *)0x0) {
              FDS_Text::SetTextFromStringTable
                        (&this->AreaName_Text,StringWorld,(longlong)*(int *)(pFVar9 + 8));
              local_2c0 = FFieldNotificationClassDescriptor::AreaName_Text.BitNumber;
              local_2c8 = FFieldNotificationClassDescriptor::AreaName_Text.FieldName;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
              local_2b8._0_8_ = (FScriptContainerElement *)0x0;
              local_2b8._8_8_ = 0;
              local_298 = (void *)0x0;
              local_290 = 0;
              local_28c = 0x80;
              local_288 = 0xffffffff;
              local_284 = 0;
              local_278 = (ForElementType<FSetElementId>)0x0;
              local_270 = 0;
              TSet<TTuple<int,FDS_WorldBossStateInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>,FDefaultSetAllocator>
              ::operator=((TSet<TTuple<int,FDS_WorldBossStateInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>,FDefaultSetAllocator>
                           *)local_2b8,
                          (TSet<TTuple<int,FDS_WorldBossStateInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>,FDefaultSetAllocator>
                           *)&pUVar5->WorldBossStateInfoMap);
              if (local_2b8._8_4_ == local_284) goto LAB_14c03037d;
              FVar8 = (ForElementType<FSetElementId>)local_280;
              if (local_278 != (ForElementType<FSetElementId>)0x0) {
                FVar8 = local_278;
              }
              lVar1 = (ulonglong)(local_270 - 1U & param_1) * 4;
              iVar4 = *(int *)(lVar1 + (longlong)FVar8);
              goto joined_r0x00014c0302dd;
            }
            break;
          }
          iVar4 = piVar6[10];
        } while (iVar4 != -1);
      }
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_VM_WorldBoss_SpawnInfo::OnSelectedWorldBoss",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_268.Ptr,0x5f,L"WorldBossInfoMap not found for ID: %d");
    pFVar9 = (FScriptContainerElement *)local_268._padding_;
  }
  goto LAB_14c03047b;
joined_r0x00014c0302dd:
  if (iVar4 == -1) goto LAB_14c03037d;
  if (*(int *)(local_2b8._0_8_ + (longlong)iVar4 * 0x28) == param_1) {
    FVar8 = (ForElementType<FSetElementId>)local_280;
    if (local_278 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_278;
    }
    iVar4 = *(int *)(lVar1 + (longlong)FVar8);
    goto joined_r0x00014c03031d;
  }
  iVar4 = *(int *)(local_2b8._0_8_ + (longlong)iVar4 * 0x28 + 0x20);
  goto joined_r0x00014c0302dd;
joined_r0x00014c03031d:
  pFVar9 = (FScriptContainerElement *)0x0;
  if (iVar4 == -1) goto LAB_14c030344;
  pFVar9 = (FScriptContainerElement *)(local_2b8._0_8_ + (longlong)iVar4 * 0x28);
  if (*(int *)(local_2b8._0_8_ + (longlong)iVar4 * 0x28) == param_1) {
    if (pFVar9 != (FScriptContainerElement *)0x0) goto LAB_14c03036a;
    goto LAB_14c030344;
  }
  iVar4 = *(int *)(pFVar9 + 0x20);
  goto joined_r0x00014c03031d;
LAB_14c030344:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14c03036a:
  OnChangedWorldBossStatus(this,(EDS_WorldBossSpawnStatus *)(pFVar9 + 0xc),param_1);
LAB_14c03037d:
  local_270 = 0;
  if (local_278 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_278);
  }
  iVar4 = SUB84(local_2b8._8_8_,4);
  local_2b8._8_8_ = local_2b8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_2b8,0,(int *)(local_2b8 + 0xc));
  }
  local_288 = 0xffffffff;
  local_284 = 0;
  local_290 = 0;
  if (0x80 < local_28c) {
    local_28c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b8 + 0x10),0);
  }
  pFVar9 = (FScriptContainerElement *)local_2b8._0_8_;
  if (local_298 != (void *)0x0) {
    FMemory::Free(local_298);
    pFVar9 = (FScriptContainerElement *)local_2b8._0_8_;
  }
LAB_14c03047b:
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return;
}

// OnSetViewModel @ 14c036fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_WorldBoss_SpawnInfo::OnSetViewModel
          (UDS_VM_WorldBoss_SpawnInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_WorldBossManager *pUVar2;
  FTimerManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  code *local_148;
  undefined8 uStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pUVar2 = UDS_WorldBossManager::GetInst();
  if ((pUVar2 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldBoss_SpawnInfo::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x13,L"UDS_WorldBossManager is InValid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    OnSelectedWorldBoss(this,pUVar2->SelectedWorldBossID);
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
    local_148 = UpdateSpawnInfoTime;
    FTimerManager::SetTimer<UDS_VM_WorldBoss_SpawnInfo>
              (this_00,&this->SpawnInfoTimerHandle,this,(pmf_0f70c7c0 *)&local_148,__real_3f800000,
               true,__real_bf800000);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSpawnTimeValueText @ 14c043830

void __thiscall
UDS_VM_WorldBoss_SpawnInfo::SetSpawnTimeValueText
          (UDS_VM_WorldBoss_SpawnInfo *this,FTimespan *param_1)

{
  UDS_WorldBossManager *this_00;
  FDS_WorldBossStateInfo *pFVar1;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->RemainTimeValue_Text);
  if (param_1->Ticks < 0) {
    this_00 = UDS_WorldBossManager::GetInst();
    if (this_00 == (UDS_WorldBossManager *)0x0) {
      return;
    }
    pFVar1 = UDS_WorldBossManager::GetWorldBossStateInfo(this_00,this_00->SelectedWorldBossID);
    if (pFVar1->Status == Spawned) {
      FDS_Text::SetTextFromStringTable(&this->RemainTimeValue_Text,StringUi,0x5a563);
    }
  }
  else {
    FDS_Text::SetTextFromTimespan(&this->RemainTimeValue_Text,param_1,StatusTime,false);
  }
  local_10 = FFieldNotificationClassDescriptor::RemainTimeValue_Text.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RemainTimeValue_Text.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14c049100

void __thiscall UDS_VM_WorldBoss_SpawnInfo::UnbindModel(UDS_VM_WorldBoss_SpawnInfo *this)

{
  UDS_WorldBossEvent *pUVar1;
  
  pUVar1 = UDS_WorldBossEvent::GetEvent();
  if (pUVar1 != (UDS_WorldBossEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWorldBoss,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedWorldBossStatus,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

// UpdateSpawnInfoTime @ 14c04ea30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_SpawnInfo::UpdateSpawnInfoTime(UDS_VM_WorldBoss_SpawnInfo *this)

{
  longlong lVar1;
  int iVar2;
  UDS_WorldBossManager *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_TimeUtilManager *pUVar5;
  FDateTime FVar6;
  FDS_WorldBossStateInfo *pFVar7;
  FTimerManager *this_00;
  FTimerData *pFVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStackY_198 [32];
  FTimespan local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar3 = UDS_WorldBossManager::GetInst();
  if ((pUVar3 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldBoss_SpawnInfo::UpdateSpawnInfoTime",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x89,L"UDS_WorldBossManager is InValid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar8 = FTimerManager::FindTimer(this_00,&this->SpawnInfoTimerHandle);
    if (pFVar8 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->SpawnInfoTimerHandle).Handle);
    }
    (this->SpawnInfoTimerHandle).Handle = 0;
  }
  else {
    if (*(int *)&(pUVar3->WorldBossStateInfoMap).field_0x8 !=
        *(int *)&(pUVar3->WorldBossStateInfoMap).field_0x34) {
      puVar9 = *(undefined1 **)&(pUVar3->WorldBossStateInfoMap).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(pUVar3->WorldBossStateInfoMap).field_0x38;
      }
      iVar2 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(pUVar3->WorldBossStateInfoMap).field_0x48 - 1U &
                                pUVar3->SelectedWorldBossID) * 4);
      if (iVar2 != -1) {
        do {
          lVar1 = *(longlong *)&pUVar3->WorldBossStateInfoMap + (longlong)iVar2 * 0x28;
          if (*(uint *)(*(longlong *)&pUVar3->WorldBossStateInfoMap + (longlong)iVar2 * 0x28) ==
              pUVar3->SelectedWorldBossID) {
            lVar10 = lVar1 + 8;
            if (lVar1 == 0) {
              lVar10 = 0;
            }
            if (lVar10 != 0) {
              pUVar5 = UDS_TimeUtilManager::GetInst();
              if ((pUVar5 != (UDS_TimeUtilManager *)0x0) &&
                 (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) {
                FVar6 = UDS_TimeUtilManager::GetCurrentServerDateTime();
                local_158[0].Ticks = *(longlong *)(lVar10 + 8) - *(longlong *)FVar6.Ticks;
                FDS_Text::Reset(&this->RemainTimeValue_Text);
                if (local_158[0].Ticks < 0) {
                  pUVar3 = UDS_WorldBossManager::GetInst();
                  if (pUVar3 == (UDS_WorldBossManager *)0x0) {
                    return;
                  }
                  pFVar7 = UDS_WorldBossManager::GetWorldBossStateInfo
                                     (pUVar3,pUVar3->SelectedWorldBossID);
                  if (pFVar7->Status == Spawned) {
                    FDS_Text::SetTextFromStringTable(&this->RemainTimeValue_Text,StringUi,0x5a563);
                  }
                }
                else {
                  FDS_Text::SetTextFromTimespan
                            (&this->RemainTimeValue_Text,local_158,StatusTime,false);
                }
                local_140 = FFieldNotificationClassDescriptor::RemainTimeValue_Text.BitNumber;
                local_148 = FFieldNotificationClassDescriptor::RemainTimeValue_Text.FieldName;
                (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
                return;
              }
              pUVar4 = UDS_LogManager::GetInst();
              if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14c04eb58;
              pUVar4 = UDS_LogManager::GetInst();
              local_138._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_138,"UDS_VM_WorldBoss_SpawnInfo::UpdateSpawnInfoTime",0x2f,Yes);
              UDS_LogManager::PrintLog
                        (pUVar4,1,Warning,local_138.Ptr,0x9c,L"UDS_TimeUtilManager is InValid");
              goto LAB_14c04eb46;
            }
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x20);
        } while (iVar2 != -1);
      }
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldBoss_SpawnInfo::UpdateSpawnInfoTime",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x94,L"WorldBossStateInfoMap not found for ID: %d");
LAB_14c04eb46:
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
LAB_14c04eb58:
    ClearSpawnInfoTimer(this);
  }
  return;
}

