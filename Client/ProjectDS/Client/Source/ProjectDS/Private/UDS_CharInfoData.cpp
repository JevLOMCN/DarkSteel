// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 51

// StaticClass @ 14b447e90

UClass * __cdecl UDS_CharInfoData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharInfoData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharInfoData",
               &Z_Registration_Info_UClass_UDS_CharInfoData.InnerSingleton,
               StaticRegisterNativesUDS_CharInfoData,0x3b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharInfoData>,
               InternalVTableHelperCtorCaller<UDS_CharInfoData>,local_res8,UDS_DataBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharInfoData.InnerSingleton;
}

// UDS_CharInfoData @ 14b44cd30

UDS_CharInfoData * __thiscall
UDS_CharInfoData::UDS_CharInfoData(UDS_CharInfoData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharInfoData__6B_;
  *(undefined8 *)&this->DataPropertyDelegate_CharLevel = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharLevel).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharLevel).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_LevelUp = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_LevelUp).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_LevelUp).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_Exp = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_Exp).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_Exp).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_CharAscend = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharAscend).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharAscend).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_CharEvolution = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharEvolution).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharEvolution).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_CharCombatPower = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharCombatPower).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharCombatPower).field_0x10 = 0;
  *(undefined8 *)&this->OnChangedTeamInfoDelegate = 0;
  *(undefined8 *)&(this->OnChangedTeamInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTeamInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedTeamInfoDelegate).field_0x18 = 2;
  *(undefined8 *)&this->DataPropertyDelegate_BattleNpcTargetEntityID = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x10 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x18 = 2;
  *(undefined8 *)&(this->DataPropertyDelegate_WeaponType).Delegate = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x18 = 2;
  this->CharID = 0;
  this->CharLevel = 0;
  this->Exp = 0;
  ::FString::FString(&this->CharName,"");
  ::FString::FString(&this->CharTitle,"");
  (this->CharNameText).StringTableType = None;
  (this->CharNameText).StringTableID = 0;
  (this->CharNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharNameText).StringEnumTableNameID.Number = 0;
  (this->CharNameText).DateTime.Ticks = 0;
  (this->CharNameText).TimeSpan.Ticks = 0;
  (this->CharNameText).TimeExpressionType = None;
  (this->CharNameText).IsExpression = false;
  (this->CharNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharNameText).UniqueString.Data.ArrayNum = 0;
  (this->CharNameText).UniqueString.Data.ArrayMax = 0;
  (this->CharNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharNameText).FormatArgs.ArrayNum = 0;
  (this->CharNameText).FormatArgs.ArrayMax = 0;
  (this->CharTitleText).StringTableType = None;
  (this->CharTitleText).StringTableID = 0;
  (this->CharTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharTitleText).StringEnumTableNameID.Number = 0;
  (this->CharTitleText).DateTime.Ticks = 0;
  (this->CharTitleText).TimeSpan.Ticks = 0;
  (this->CharTitleText).TimeExpressionType = None;
  (this->CharTitleText).IsExpression = false;
  (this->CharTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharTitleText).UniqueString.Data.ArrayNum = 0;
  (this->CharTitleText).UniqueString.Data.ArrayMax = 0;
  (this->CharTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharTitleText).FormatArgs.ArrayNum = 0;
  (this->CharTitleText).FormatArgs.ArrayMax = 0;
  this->CharAscend = 0;
  this->CharEvolution = 0;
  this->CharSkinID = 0;
  this->CombatPower = 0.0;
  (this->SpawnPosition).field0_0x0._s_0.X = 0.0;
  (this->SpawnPosition).field0_0x0._s_0.Y = 0.0;
  (this->SpawnPosition).field0_0x0._s_0.Z = 0.0;
  (this->Position).field0_0x0._s_0.X = 0.0;
  (this->Position).field0_0x0._s_0.Y = 0.0;
  (this->Position).field0_0x0._s_0.Z = 0.0;
  this->Direction = 0.0;
  this->CameraYaw = 0.0;
  this->TargetChoiceRemoveDistance = 0.0;
  *(undefined8 *)&(this->MyTeamInfo).TeamTypeMap = 0;
  *(undefined8 *)&(this->MyTeamInfo).TeamTypeMap.field_0x8 = 0;
  *(undefined8 *)&(this->MyTeamInfo).TeamTypeMap.field_0x20 = 0;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x28 = 0;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x34 = 0;
  *(undefined8 *)&(this->MyTeamInfo).TeamTypeMap.field_0x40 = 0;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x48 = 0;
  *(undefined8 *)&(this->MyTeamInfo).AddedTeamTypeMap = 0;
  *(undefined8 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x8 = 0;
  *(undefined8 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x20 = 0;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x28 = 0;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x34 = 0;
  *(undefined8 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x40 = 0;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x48 = 0;
  *(undefined8 *)&(this->MyTeamInfo).RemovedTeamTypeMap = 0;
  *(undefined8 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x8 = 0;
  *(undefined8 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x20 = 0;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x28 = 0;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x34 = 0;
  *(undefined8 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x40 = 0;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x48 = 0;
  this->IsBot = false;
  this->SyncState = 0;
  this->BattleNpcTargetEntityID = 0;
  return this;
}

// ~UDS_CharInfoData @ 14b44fc60

void __thiscall UDS_CharInfoData::~UDS_CharInfoData(UDS_CharInfoData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_CharInfoData__6B_;
  FDS_TeamInfo::~FDS_TeamInfo(&this->MyTeamInfo);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharTitleText).FormatArgs.AllocatorInstance.Data,
             (this->CharTitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->CharTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharNameText).FormatArgs.AllocatorInstance.Data,
             (this->CharNameText).FormatArgs.ArrayNum);
  pFVar1 = (this->CharNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharTitle).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DataPropertyDelegate_WeaponType).Delegate.field_0x8,
             *(int *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x10);
  pvVar2 = *(void **)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_WeaponType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x8,
             *(int *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x10);
  pvVar2 = *(void **)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_BattleNpcTargetEntityID);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedTeamInfoDelegate).field_0x8,
             *(int *)&(this->OnChangedTeamInfoDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnChangedTeamInfoDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedTeamInfoDelegate);
  pvVar2 = *(void **)&(this->DataPropertyDelegate_CharCombatPower).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_CharCombatPower);
  pvVar2 = *(void **)&(this->DataPropertyDelegate_CharEvolution).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_CharEvolution);
  pvVar2 = *(void **)&(this->DataPropertyDelegate_CharAscend).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_CharAscend);
  pvVar2 = *(void **)&(this->DataPropertyDelegate_Exp).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_Exp);
  pvVar2 = *(void **)&(this->DataPropertyDelegate_LevelUp).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_LevelUp);
  pvVar2 = *(void **)&(this->DataPropertyDelegate_CharLevel).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_CharLevel);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b453c40

UClass * __cdecl UDS_CharInfoData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharInfoData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharInfoData",
               &Z_Registration_Info_UClass_UDS_CharInfoData.InnerSingleton,
               StaticRegisterNativesUDS_CharInfoData,0x3b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharInfoData>,
               InternalVTableHelperCtorCaller<UDS_CharInfoData>,local_res8,UDS_DataBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharInfoData.InnerSingleton;
}

// StaticRegisterNativesUDS_CharInfoData @ 14b4550d0

void __cdecl UDS_CharInfoData::StaticRegisterNativesUDS_CharInfoData(void)

{
  return;
}

// UDS_CharInfoData @ 14ba32530

UDS_CharInfoData * __thiscall
UDS_CharInfoData::UDS_CharInfoData(UDS_CharInfoData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_CharInfoData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->DataPropertyDelegate_CharLevel = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharLevel).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharLevel).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_LevelUp = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_LevelUp).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_LevelUp).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_Exp = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_Exp).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_Exp).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_CharAscend = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharAscend).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharAscend).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_CharEvolution = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharEvolution).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharEvolution).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_CharCombatPower = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharCombatPower).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_CharCombatPower).field_0x10 = 0;
  *(undefined8 *)&this->OnChangedTeamInfoDelegate = 0;
  *(undefined8 *)&(this->OnChangedTeamInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTeamInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedTeamInfoDelegate).field_0x18 = 2;
  *(undefined8 *)&this->DataPropertyDelegate_BattleNpcTargetEntityID = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x10 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x18 = 2;
  *(undefined8 *)&(this->DataPropertyDelegate_WeaponType).Delegate = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x18 = 2;
  this->CharID = 0;
  this->CharLevel = 0;
  this->Exp = 0;
  ::FString::FString(&this->CharName,"");
  ::FString::FString(&this->CharTitle,"");
  (this->CharNameText).StringTableType = None;
  (this->CharNameText).StringTableID = 0;
  (this->CharNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharNameText).StringEnumTableNameID.Number = 0;
  (this->CharNameText).DateTime.Ticks = 0;
  (this->CharNameText).TimeSpan.Ticks = 0;
  (this->CharNameText).TimeExpressionType = None;
  (this->CharNameText).IsExpression = false;
  (this->CharNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharNameText).UniqueString.Data.ArrayNum = 0;
  (this->CharNameText).UniqueString.Data.ArrayMax = 0;
  (this->CharNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharNameText).FormatArgs.ArrayNum = 0;
  (this->CharNameText).FormatArgs.ArrayMax = 0;
  (this->CharTitleText).StringTableType = None;
  (this->CharTitleText).StringTableID = 0;
  (this->CharTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharTitleText).StringEnumTableNameID.Number = 0;
  (this->CharTitleText).DateTime.Ticks = 0;
  (this->CharTitleText).TimeSpan.Ticks = 0;
  (this->CharTitleText).TimeExpressionType = None;
  (this->CharTitleText).IsExpression = false;
  (this->CharTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharTitleText).UniqueString.Data.ArrayNum = 0;
  (this->CharTitleText).UniqueString.Data.ArrayMax = 0;
  (this->CharTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharTitleText).FormatArgs.ArrayNum = 0;
  (this->CharTitleText).FormatArgs.ArrayMax = 0;
  this->CharAscend = 0;
  this->CharEvolution = 0;
  this->CharSkinID = 0;
  this->CombatPower = 0.0;
  (this->SpawnPosition).field0_0x0._s_0.X = 0.0;
  (this->SpawnPosition).field0_0x0._s_0.Y = 0.0;
  (this->SpawnPosition).field0_0x0._s_0.Z = 0.0;
  (this->Position).field0_0x0._s_0.X = 0.0;
  (this->Position).field0_0x0._s_0.Y = 0.0;
  (this->Position).field0_0x0._s_0.Z = 0.0;
  this->Direction = 0.0;
  this->CameraYaw = 0.0;
  *(undefined8 *)&(this->MyTeamInfo).TeamTypeMap = 0;
  *(undefined8 *)&(this->MyTeamInfo).TeamTypeMap.field_0x8 = 0;
  *(undefined8 *)&(this->MyTeamInfo).TeamTypeMap.field_0x20 = 0;
  this->TargetChoiceRemoveDistance = 0.0;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x28 = 0;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x34 = 0;
  *(undefined8 *)&(this->MyTeamInfo).TeamTypeMap.field_0x40 = 0;
  *(undefined4 *)&(this->MyTeamInfo).TeamTypeMap.field_0x48 = 0;
  *(undefined8 *)&(this->MyTeamInfo).AddedTeamTypeMap = 0;
  *(undefined8 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x8 = 0;
  *(undefined8 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x20 = 0;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x28 = 0;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x34 = 0;
  *(undefined8 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x40 = 0;
  *(undefined4 *)&(this->MyTeamInfo).AddedTeamTypeMap.field_0x48 = 0;
  *(undefined8 *)&(this->MyTeamInfo).RemovedTeamTypeMap = 0;
  *(undefined8 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x8 = 0;
  *(undefined8 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x20 = 0;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x28 = 0;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x34 = 0;
  *(undefined8 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x40 = 0;
  *(undefined4 *)&(this->MyTeamInfo).RemovedTeamTypeMap.field_0x48 = 0;
  this->IsBot = false;
  this->SyncState = 0;
  this->BattleNpcTargetEntityID = 0;
  return this;
}

// CanAscend @ 14ba37e60

bool __thiscall UDS_CharInfoData::CanAscend(UDS_CharInfoData *this)

{
  int iVar1;
  bool bVar2;
  FDS_CharacterBaseTableRow *pFVar3;
  FDS_CharacterAscendTableRow *this_00;
  FDS_CharacterLevelTableRow *this_01;
  longlong lVar4;
  long64 lVar5;
  
  pFVar3 = FDS_CharacterBaseTableRow::Get((longlong)this->CharID,true);
  if ((pFVar3 == (FDS_CharacterBaseTableRow *)0x0) || (this->CharLevel < pFVar3->MaxLevel)) {
    iVar1 = this->CharAscend;
    pFVar3 = FDS_CharacterBaseTableRow::GetRef((longlong)this->CharID,true);
    bVar2 = FDS_CharacterBaseTableRow::IsValid(pFVar3);
    lVar5 = 0;
    lVar4 = lVar5;
    if (bVar2) {
      lVar4 = (longlong)(pFVar3->ID_AscendGroup * 1000 + 1 + iVar1);
    }
    this_00 = FDS_CharacterAscendTableRow::GetRef(lVar4,true);
    bVar2 = FDS_CharacterAscendTableRow::IsValid(this_00);
    if ((bVar2) && (iVar1 = this->CharLevel, this_00->ReqCharLevel <= iVar1)) {
      pFVar3 = FDS_CharacterBaseTableRow::GetRef((longlong)this->CharID,true);
      bVar2 = FDS_CharacterBaseTableRow::IsValid(pFVar3);
      if (bVar2) {
        lVar5 = (long64)(pFVar3->ID_LevelGroup * 1000 + iVar1);
      }
      this_01 = FDS_CharacterLevelTableRow::GetRef(lVar5,true);
      bVar2 = FDS_CharacterLevelTableRow::IsValid(this_01);
      if (bVar2) {
        return this_01->ReqCharExp <= this->Exp;
      }
    }
  }
  return false;
}

// CanLevelup @ 14ba37f80

bool __thiscall UDS_CharInfoData::CanLevelup(UDS_CharInfoData *this)

{
  int iVar1;
  bool bVar2;
  FDS_CharacterBaseTableRow *pFVar3;
  FDS_CharacterLevelTableRow *this_00;
  long64 lVar4;
  
  pFVar3 = FDS_CharacterBaseTableRow::Get((longlong)this->CharID,true);
  if ((pFVar3 == (FDS_CharacterBaseTableRow *)0x0) || (this->CharLevel < pFVar3->MaxLevel)) {
    iVar1 = this->CharLevel;
    pFVar3 = FDS_CharacterBaseTableRow::GetRef((longlong)this->CharID,true);
    bVar2 = FDS_CharacterBaseTableRow::IsValid(pFVar3);
    if (bVar2) {
      lVar4 = (long64)(pFVar3->ID_LevelGroup * 1000 + iVar1);
    }
    else {
      lVar4 = 0;
    }
    this_00 = FDS_CharacterLevelTableRow::GetRef(lVar4,true);
    bVar2 = FDS_CharacterLevelTableRow::IsValid(this_00);
    if ((bVar2) && (0 < this_00->ReqCharExp)) {
      return this->Exp < this_00->ReqCharExp;
    }
  }
  return false;
}

// Created @ 14ba3c060

void __thiscall UDS_CharInfoData::Created(UDS_CharInfoData *this)

{
  return;
}

// Deleted @ 14ba3c750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_CharInfoData::Deleted(UDS_CharInfoData *this)

{
  longlong *this_00;
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  uint uVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  longlong *local_98;
  longlong lStack_90;
  undefined1 local_88 [16];
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  TMap<TeamType::ItemCase,FDS_TeamGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,FDS_TeamGroupInfo,0>_>
  *local_38;
  undefined2 local_30;
  
  this_00 = &this->_padding_;
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),
                       (void *)0x0);
    if (!bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
    }
  }
  uVar7 = 0;
  UDS_CharStateData::GetData((ulong64)&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[7].field_0x20,this);
  }
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),
                       (void *)0x0);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
      local_res18[0] = *(ulong64 *)(pUVar4 + 1);
      goto LAB_14ba3c81d;
    }
  }
  local_res18[0] = 0;
LAB_14ba3c81d:
  pFVar5 = FDS_EntityBase::GetEntityBase(local_res18);
  if (pFVar5 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x1b8))(pFVar5);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[4].field_0x10,this);
    }
  }
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),
                       (void *)0x0);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
      uVar7 = *(ulong64 *)(pUVar4 + 1);
    }
  }
  TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_98,
             (TSet<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
              *)&TeamGroupInfoMap);
  local_38 = &TeamGroupInfoMap;
  stack0xffffffffffffffa8 = local_88;
  local_68 = local_98;
  auStack_60._0_8_ = lStack_90;
  local_30 = 0;
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uVar6 = local_88._8_8_ >> 0x20;
  if (local_88._12_4_ < *(int *)(local_88._0_8_ + 0x18)) {
    do {
      FDS_TeamGroupInfo::RemoveEntityID
                ((FDS_TeamGroupInfo *)(*local_68 + 8 + (longlong)(int)uVar6 * 0x68),uVar7);
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar6 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar8 = *(int *)&local_38->field_0x8 - *(int *)&local_38->field_0x34;
      if (uVar8 < 4) {
        iVar3 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (*(int *)&local_38->field_0x48 < iVar3)) ||
         (iVar3 < *(int *)&local_38->field_0x48)) {
        *(int *)&local_38->field_0x48 = iVar3;
        TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// GetAscendLimitLevel @ 14ba44d60

int __thiscall UDS_CharInfoData::GetAscendLimitLevel(UDS_CharInfoData *this)

{
  int iVar1;
  bool bVar2;
  FDS_CharacterBaseTableRow *this_00;
  FDS_CharacterAscendTableRow *this_01;
  long64 lVar3;
  
  iVar1 = this->CharAscend;
  this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)this->CharID,true);
  bVar2 = FDS_CharacterBaseTableRow::IsValid(this_00);
  if (bVar2) {
    lVar3 = (long64)(this_00->ID_AscendGroup * 1000 + 1 + iVar1);
  }
  else {
    lVar3 = 0;
  }
  this_01 = FDS_CharacterAscendTableRow::GetRef(lVar3,true);
  bVar2 = FDS_CharacterAscendTableRow::IsValid(this_01);
  if (!bVar2) {
    return 0;
  }
  return this_01->ReqCharLevel;
}

// GetAscendTableRowID @ 14ba44de0

long64 __thiscall UDS_CharInfoData::GetAscendTableRowID(UDS_CharInfoData *this,int param_1)

{
  bool bVar1;
  FDS_CharacterBaseTableRow *this_00;
  
  this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)this->CharID,true);
  bVar1 = FDS_CharacterBaseTableRow::IsValid(this_00);
  if (!bVar1) {
    return 0;
  }
  return (longlong)(this_00->ID_AscendGroup * 1000 + 1 + param_1);
}

// GetData @ 14ba47c20

TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> __cdecl UDS_CharInfoData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_CharDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_CharInfoData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14ba47cc4;
  }
  pUVar3 = (UObject *)0x0;
LAB_14ba47cc4:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetLevelTableRowID @ 14ba4c6f0

long64 __thiscall UDS_CharInfoData::GetLevelTableRowID(UDS_CharInfoData *this,int param_1)

{
  bool bVar1;
  FDS_CharacterBaseTableRow *this_00;
  
  this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)this->CharID,true);
  bVar1 = FDS_CharacterBaseTableRow::IsValid(this_00);
  if (!bVar1) {
    return 0;
  }
  return (longlong)(this_00->ID_LevelGroup * 1000 + param_1);
}

// GetRequiredCharExp @ 14ba4eaa0

long64 __thiscall UDS_CharInfoData::GetRequiredCharExp(UDS_CharInfoData *this)

{
  bool bVar1;
  FDS_CharacterLevelTableRow *this_00;
  
  this_00 = FDS_CharacterLevelTableRow::GetRef((longlong)this->CharLevel + 1000,true);
  bVar1 = FDS_CharacterLevelTableRow::IsValid(this_00);
  if (!bVar1) {
    return 0;
  }
  return this_00->ReqCharExp;
}

// GetTeamGroupInfo @ 14ba50880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDS_TeamGroupInfo * __thiscall
UDS_CharInfoData::GetTeamGroupInfo(UDS_CharInfoData *this,ItemCase *param_1)

{
  ItemCase IVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FDS_TeamGroupInfo *pFVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>_> *pTVar8;
  undefined1 auStackY_d8 [32];
  int local_a8 [2];
  FSparseArrayAllocationInfo local_a0;
  ItemCase local_88;
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  iVar5 = TeamGroupInfoMap._48_4_;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  IVar1 = *param_1;
  if (TeamGroupInfoMap._8_4_ != TeamGroupInfoMap._52_4_) {
    lVar7 = 0x154cf72c8;
    if (TeamGroupInfoMap._64_8_ != 0) {
      lVar7 = TeamGroupInfoMap._64_8_;
    }
    for (iVar2 = *(int *)(lVar7 + (ulonglong)(TeamGroupInfoMap._72_4_ - kNeutral & IVar1) * 4);
        iVar2 != -1; iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + TeamGroupInfoMap._0_8_)) {
      if (*(ItemCase *)((longlong)iVar2 * 0x68 + TeamGroupInfoMap._0_8_) == IVar1) {
        if (iVar2 != -1) goto LAB_14ba50af6;
        break;
      }
    }
  }
  pTVar8 = (TSparseSetElement<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>_> *)0x0;
  local_80._0_8_ = (FScriptContainerElement *)0x0;
  local_80._8_8_ = 0;
  local_60 = (void *)0x0;
  local_58 = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_40 = (ForElementType<FSetElementId>)0x0;
  local_38 = 0;
  local_88 = IVar1;
  if (TeamGroupInfoMap._52_4_ == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)&TeamGroupInfoMap,
                       (int *)&TeamGroupInfoMap.field_0x8,(int *)&TeamGroupInfoMap.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&TeamGroupInfoMap.field_0x10,false);
  }
  else {
    TeamGroupInfoMap._52_4_ = TeamGroupInfoMap._52_4_ + -1;
    TeamGroupInfoMap._48_4_ =
         *(int *)((longlong)(int)TeamGroupInfoMap._48_4_ * 0x68 + 4 + TeamGroupInfoMap._0_8_);
    if (TeamGroupInfoMap._52_4_ != 0) {
      *(undefined4 *)((longlong)(int)TeamGroupInfoMap._48_4_ * 0x68 + TeamGroupInfoMap._0_8_) =
           0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&TeamGroupInfoMap,&local_a0,iVar5);
  if (local_a0.Pointer != (TSparseSetElement<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>_> *)0x0) {
    *(ItemCase *)local_a0.Pointer = *param_1;
    *(ItemCase *)((longlong)local_a0.Pointer + 8) = local_88;
    TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ((TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)((longlong)local_a0.Pointer + 0x10),
               (TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_80);
    *(undefined4 *)((longlong)local_a0.Pointer + 0x60) = 0xffffffff;
    pTVar8 = local_a0.Pointer;
  }
  uVar3 = *(uint *)pTVar8;
  local_a8[0] = local_a0.Index;
  bVar4 = TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&TeamGroupInfoMap,uVar3,pTVar8,local_a8,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(&TeamGroupInfoMap,uVar3,pTVar8,local_a8[0]);
  }
  local_38 = 0;
  if (local_40 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_80,0,local_80._8_4_);
  iVar5 = SUB84(local_80._8_8_,4);
  local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
  }
  uVar3 = local_58._4_4_;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  uStack_50 = 0xffffffff;
  if (0x80 < uVar3) {
    local_58 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
LAB_14ba50af6:
  pFVar6 = TMapBase<enum_TeamType::ItemCase,FDS_TeamGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>_>
           ::FindChecked(&TeamGroupInfoMap,*param_1);
  return pFVar6;
}

// InitByEntityInfo @ 14ba536a0

void __thiscall UDS_CharInfoData::InitByEntityInfo(UDS_CharInfoData *this)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_EntityType EVar3;
  int iVar4;
  FWeakObjectPtr local_res8 [2];
  
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar1) {
LAB_14ba536f0:
    EVar3 = None;
  }
  else {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (bVar1) goto LAB_14ba536f0;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
    EVar3 = pUVar2[1].field_0x8;
  }
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      iVar4 = *(int *)&pUVar2[1].field_0xc;
      goto LAB_14ba53733;
    }
  }
  iVar4 = 0;
LAB_14ba53733:
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
    }
  }
  UDS_CharStateData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_CharInfoData>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar2[7].field_0x20,(UDS_CharInfoData *)(local_res8 + 1),(pmf_7e28bdd2)this);
  }
  Initialize(this,EVar3,iVar4);
  return;
}

// Initialize @ 14ba59750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharInfoData::Initialize(UDS_CharInfoData *this,EDS_EntityType param_1,int param_2)

{
  bool bVar1;
  EDS_ElementType EVar2;
  int iVar3;
  FDS_NpcBaseTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  FString *pFVar6;
  UObject *pUVar7;
  FDS_NpcBattleTableRow *pFVar8;
  FDS_CharacterBaseTableRow *pFVar9;
  undefined1 auStackY_1f8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FDS_Text local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (((param_1 == MainCharacter) || (param_1 == NetCharacter)) || (param_1 == DummyCharacter)) {
    this->CharID = param_2;
    *(undefined1 *)&this->_padding_ = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar7[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
        pUVar7[3].field_0x20 = 1;
      }
    }
    pFVar9 = FDS_CharacterBaseTableRow::Get((longlong)param_2,true);
    if (pFVar9 == (FDS_CharacterBaseTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_CharInfoData::Initialize",0x1c,Yes);
      pwVar11 = L"characterBaseTable is nullptr. (%d)";
      uVar10 = 0x412;
LAB_14ba59b36:
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_168.Ptr,uVar10,pwVar11);
LAB_14ba59b50:
      if ((void *)local_168._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_168._padding_);
      return;
    }
    SetCharNameText(this,&pFVar9->ID_Name);
    SetCharTitleText(this,&pFVar9->ID_Title);
    EVar2 = pFVar9->ElementType;
  }
  else {
    if (param_1 != NPC) goto LAB_14ba59b85;
    pFVar4 = FDS_NpcBaseTableRow::Get((longlong)param_2,true);
    if (pFVar4 == (FDS_NpcBaseTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_CharInfoData::Initialize",0x1c,Yes);
      pwVar11 = L"npcBaseTable is nullptr. (%d)";
      uVar10 = 0x421;
      goto LAB_14ba59b36;
    }
    pFVar6 = (FString *)(**(code **)((pFVar4->ID_NameSid)._padding_ + 8))(&pFVar4->ID_NameSid);
    ::FString::operator=(&this->CharName,pFVar6);
    local_1b8.StringTableType = None;
    local_1b8.StringTableID = 0;
    local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1b8.StringEnumTableNameID.Number = 0;
    local_1b8.TimeExpressionType = None;
    local_1b8.DateTime.Ticks = 0;
    local_1b8.TimeSpan.Ticks = 0;
    local_1b8.IsExpression = false;
    local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.UniqueString.Data.ArrayNum = 0;
    local_1b8.UniqueString.Data.ArrayMax = 0;
    local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.FormatArgs.ArrayNum = 0;
    local_1b8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_1b8,&pFVar4->ID_NameSid);
    FDS_Text::operator=(&this->CharNameText,&local_1b8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data,
               local_1b8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1b8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.UniqueString.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)&this->_padding_ = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar7[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
        pUVar7[3].field_0x20 = 1;
      }
    }
    pFVar6 = (FString *)
             (**(code **)((pFVar4->ID_NameTitleSid)._padding_ + 8))(&pFVar4->ID_NameTitleSid);
    ::FString::operator=(&this->CharTitle,pFVar6);
    local_1b8.StringTableType = None;
    local_1b8.StringTableID = 0;
    local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1b8.StringEnumTableNameID.Number = 0;
    local_1b8.DateTime.Ticks = 0;
    local_1b8.TimeSpan.Ticks = 0;
    local_1b8.TimeExpressionType = None;
    local_1b8.IsExpression = false;
    local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.UniqueString.Data.ArrayNum = 0;
    local_1b8.UniqueString.Data.ArrayMax = 0;
    local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.FormatArgs.ArrayNum = 0;
    local_1b8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_1b8,&pFVar4->ID_NameTitleSid);
    FDS_Text::operator=(&this->CharTitleText,&local_1b8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data,
               local_1b8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1b8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.UniqueString.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)&this->_padding_ = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar7[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
        pUVar7[3].field_0x20 = 1;
      }
    }
    if (pFVar4->ID_NpcBattle < 1) goto LAB_14ba59b85;
    pFVar8 = FDS_NpcBattleTableRow::Get((longlong)pFVar4->ID_NpcBattle,true);
    if (pFVar8 == (FDS_NpcBattleTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_CharInfoData::Initialize",0x1c,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_168.Ptr,0x42d,L"npcBattleTable is nullptr. (%d, %d)");
      goto LAB_14ba59b50;
    }
    EVar2 = pFVar8->ElementType;
  }
  this->CharElementType = EVar2;
LAB_14ba59b85:
  if (param_1 == MainCharacter) {
    iVar3 = DS_CommonDataHelper::TargetChoiceRemove();
    this->TargetChoiceRemoveDistance = (float)iVar3;
  }
  return;
}

// IsAscendLimitLevel @ 14ba5a0a0

bool __thiscall UDS_CharInfoData::IsAscendLimitLevel(UDS_CharInfoData *this)

{
  int iVar1;
  bool bVar2;
  FDS_CharacterBaseTableRow *this_00;
  FDS_CharacterAscendTableRow *this_01;
  long64 lVar3;
  int iVar4;
  
  iVar1 = this->CharAscend;
  this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)this->CharID,true);
  bVar2 = FDS_CharacterBaseTableRow::IsValid(this_00);
  lVar3 = 0;
  iVar4 = 0;
  if (bVar2) {
    lVar3 = (long64)(this_00->ID_AscendGroup * 1000 + 1 + iVar1);
  }
  this_01 = FDS_CharacterAscendTableRow::GetRef(lVar3,true);
  bVar2 = FDS_CharacterAscendTableRow::IsValid(this_01);
  if (bVar2) {
    iVar4 = this_01->ReqCharLevel;
  }
  return this->CharLevel == iVar4;
}

// IsCombatable @ 14ba5a420

bool __thiscall UDS_CharInfoData::IsCombatable(UDS_CharInfoData *this)

{
  bool bVar1;
  EDS_EntityType EVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (bVar1) {
      cVar5 = '\0';
    }
    else {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      cVar5 = pUVar3[1].field_0x8;
    }
    if (cVar5 == '\x02') {
      return true;
    }
  }
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (bVar1) {
      cVar5 = '\0';
    }
    else {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      cVar5 = pUVar3[1].field_0x8;
    }
    if (cVar5 == '\x03') {
      TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        uVar4 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        if (*(int *)&pUVar3[6].field_0x8 != *(int *)&pUVar3[7].field_0xc) {
          puVar7 = *(undefined1 **)&pUVar3[7].field_0x18;
          if (*(undefined1 **)&pUVar3[7].field_0x18 == (undefined1 *)0x0) {
            puVar7 = &pUVar3[7].field_0x10;
          }
          iVar8 = *(int *)(puVar7 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                                    (ulonglong)(*(int *)&pUVar3[7].field_0x20 - 1)) * 4);
          if (iVar8 != -1) {
            do {
              if (*(ulong64 *)(*(longlong *)(pUVar3 + 6) + (longlong)iVar8 * 0x18) == uVar4) {
                return true;
              }
              iVar8 = *(int *)(*(longlong *)(pUVar3 + 6) + 0x10 + (longlong)iVar8 * 0x18);
            } while (iVar8 != -1);
          }
        }
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        uVar4 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        iVar8 = (int)(uVar4 >> 0x20) * 0x17;
        if (*(int *)&pUVar3[8].field_0x8 != *(int *)&pUVar3[9].field_0xc) {
          puVar7 = *(undefined1 **)&pUVar3[9].field_0x18;
          if (*(undefined1 **)&pUVar3[9].field_0x18 == (undefined1 *)0x0) {
            puVar7 = &pUVar3[9].field_0x10;
          }
          iVar6 = *(int *)(puVar7 + (ulonglong)
                                    (*(int *)&pUVar3[9].field_0x20 - 1U & (int)uVar4 + iVar8) * 4);
          if (iVar6 != -1) {
            do {
              if (*(ulong64 *)(*(longlong *)(pUVar3 + 8) + (longlong)iVar6 * 0x18) == uVar4) {
                if (iVar6 != -1) {
                  return true;
                }
                break;
              }
              iVar6 = *(int *)(*(longlong *)(pUVar3 + 8) + 0x10 + (longlong)iVar6 * 0x18);
            } while (iVar6 != -1);
          }
        }
        if (*(int *)&pUVar3[10].field_0x8 != *(int *)&pUVar3[0xb].field_0xc) {
          puVar7 = *(undefined1 **)&pUVar3[0xb].field_0x18;
          if (*(undefined1 **)&pUVar3[0xb].field_0x18 == (undefined1 *)0x0) {
            puVar7 = &pUVar3[0xb].field_0x10;
          }
          iVar8 = *(int *)(puVar7 + (ulonglong)
                                    (*(int *)&pUVar3[0xb].field_0x20 - 1U & (int)uVar4 + iVar8) * 4)
          ;
          if (iVar8 != -1) {
            do {
              if (*(ulong64 *)(*(longlong *)(pUVar3 + 10) + (longlong)iVar8 * 0x18) == uVar4) {
                return true;
              }
              iVar8 = *(int *)(*(longlong *)(pUVar3 + 10) + 0x10 + (longlong)iVar8 * 0x18);
            } while (iVar8 != -1);
          }
        }
      }
      UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
      TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_res10);
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (!bVar1) {
        return false;
      }
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      if (*(double *)&pUVar3[0xc].field_0x18 <= 0.0) {
        return false;
      }
      return true;
    }
  }
  EVar2 = UDS_DataBase::GetEntityType((UDS_DataBase *)this);
  if (EVar2 != NPC) {
    return false;
  }
  UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
  UDS_NPCBattleData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  return bVar1;
}

// IsMaxLevel @ 14ba5ba80

bool __thiscall UDS_CharInfoData::IsMaxLevel(UDS_CharInfoData *this)

{
  FDS_CharacterBaseTableRow *pFVar1;
  
  pFVar1 = FDS_CharacterBaseTableRow::Get((longlong)this->CharID,true);
  if (pFVar1 != (FDS_CharacterBaseTableRow *)0x0) {
    return pFVar1->MaxLevel <= this->CharLevel;
  }
  return false;
}

// IsSameTeam @ 14ba5ccb0

bool __thiscall
UDS_CharInfoData::IsSameTeam
          (UDS_CharInfoData *this,TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  ItemCase local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  
  local_res10[0] = ITEM_NOT_SET;
  local_res18[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res18);
  bVar1 = FDS_TeamInfo::IsSameTeam
                    (&this->MyTeamInfo,(FDS_TeamInfo *)&pUVar2[0xf].field_0x18,local_res10);
  return bVar1;
}

// IsSameTeam @ 14ba5cd10

bool __thiscall
UDS_CharInfoData::IsSameTeam
          (UDS_CharInfoData *this,TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1,
          ItemCase param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10;
  ItemCase local_res18 [4];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res10);
  bVar1 = FDS_TeamInfo::IsSameTeam
                    (&this->MyTeamInfo,(FDS_TeamInfo *)&pUVar2[0xf].field_0x18,local_res18);
  return bVar1;
}

// OnChangedCharState @ 14ba602b0

void __thiscall
UDS_CharInfoData::OnChangedCharState
          (UDS_CharInfoData *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  FWeakObjectPtr::IsValid(local_res10);
  return;
}

// ResetData @ 14ba68380

void __thiscall UDS_CharInfoData::ResetData(UDS_CharInfoData *this)

{
  undefined1 *puVar1;
  FDS_EventDelegate<EDS_WeaponType_const_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UObject *pUVar10;
  FDS_CharacterBaseTableRow *pFVar11;
  uint uVar12;
  longlong lVar13;
  FDS_StringBaseID local_58;
  FDS_StringBaseID local_48;
  FDestructionSentinel local_38;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->CharID = 0;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  SetCharLevel(this,0);
  this->Exp = 0;
  FDS_DataPropertyDelegate_int64_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->DataPropertyDelegate_Exp
             ,&this->Exp);
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  local_58.ID = 0;
  local_58._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  SetCharNameText(this,&local_58);
  local_48._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  local_48.ID = 0;
  SetCharTitleText(this,&local_48);
  this->CharAscend = 0;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_CharAscend,&this->CharAscend);
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  this->CharEvolution = 0;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_CharEvolution,&this->CharEvolution);
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  this->CharSkinID = 0;
  bVar6 = UDS_GameInstance::GetIsAIGymMode();
  if ((bVar6) &&
     (pFVar11 = FDS_CharacterBaseTableRow::Get((longlong)this->CharID,true),
     pFVar11 != (FDS_CharacterBaseTableRow *)0x0)) {
    this->CharSkinID = pFVar11->ID_DefaultSkin;
  }
  SetCombatPower(this,0.0);
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SpawnPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpawnPosition).field0_0x0._s_0.Y = (double)uVar5;
  (this->SpawnPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar5;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  this->Direction = 0.0;
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  this->CameraYaw = 0.0;
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  this->TargetChoiceRemoveDistance = 0.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar5;
  (this->Destination).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  this->IsBot = false;
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar5;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  this->SyncState = 0;
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pUVar10[3].field_0x20 = 1;
    }
  }
  if (this->WeaponType != None) {
    this_00 = &this->DataPropertyDelegate_WeaponType;
    this->WeaponType = None;
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(this->DataPropertyDelegate_WeaponType).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar12 = *(int *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar12) {
        lVar13 = (longlong)(int)uVar12 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x10) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar13) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar13), plVar3 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      puVar1 = &(this->DataPropertyDelegate_WeaponType).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// SetBattleNpcTargetEntityID @ 14ba6a3d0

void __thiscall UDS_CharInfoData::SetBattleNpcTargetEntityID(UDS_CharInfoData *this,ulong64 param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  this->BattleNpcTargetEntityID = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_BattleNpcTargetEntityID,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->DataPropertyDelegate_BattleNpcTargetEntityID).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->DataPropertyDelegate_BattleNpcTargetEntityID,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SetCameraYaw @ 14ba6a850

void __thiscall UDS_CharInfoData::SetCameraYaw(UDS_CharInfoData *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->CameraYaw = param_1;
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// SetCharAscend @ 14ba6a930

void __thiscall UDS_CharInfoData::SetCharAscend(UDS_CharInfoData *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->CharAscend = param_1;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_CharAscend,&this->CharAscend);
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// SetCharElementType @ 14ba6a9b0

void __thiscall UDS_CharInfoData::SetCharElementType(UDS_CharInfoData *this,EDS_ElementType param_1)

{
  this->CharElementType = param_1;
  return;
}

// SetCharEvolution @ 14ba6a9c0

void __thiscall UDS_CharInfoData::SetCharEvolution(UDS_CharInfoData *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->CharEvolution = param_1;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_CharEvolution,&this->CharEvolution);
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// SetCharLevel @ 14ba6aa50

void __thiscall UDS_CharInfoData::SetCharLevel(UDS_CharInfoData *this,int param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  
  iVar1 = this->CharLevel;
  this->CharLevel = param_1;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_CharLevel,&this->CharLevel);
  *(undefined1 *)&this->_padding_ = 1;
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar3[4].field_0x8 = 1;
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      pUVar3[3].field_0x20 = 1;
    }
  }
  if ((0 < this->CharLevel) && (iVar1 < this->CharLevel)) {
    FDS_DataPropertyDelegate_int32_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->DataPropertyDelegate_LevelUp,&this->CharLevel);
  }
  return;
}

// SetCharNameText @ 14ba6ab10

void __thiscall UDS_CharInfoData::SetCharNameText(UDS_CharInfoData *this,FDS_StringBaseID *param_1)

{
  bool bVar1;
  FString *pFVar2;
  UObject *pUVar3;
  FDS_Text local_58;
  
  pFVar2 = (FString *)(**(code **)(param_1->_padding_ + 8))(param_1);
  ::FString::operator=(&this->CharName,pFVar2);
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.TimeExpressionType = None;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_58,param_1);
  FDS_Text::operator=(&this->CharNameText,&local_58);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar3[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      pUVar3[3].field_0x20 = 1;
    }
  }
  return;
}

// SetCharNameText @ 14ba6ac20

void __thiscall UDS_CharInfoData::SetCharNameText(UDS_CharInfoData *this,FDS_StringWorldID *param_1)

{
  bool bVar1;
  FString *pFVar2;
  UObject *pUVar3;
  FDS_Text local_58;
  
  pFVar2 = (FString *)(**(code **)(param_1->_padding_ + 8))(param_1);
  ::FString::operator=(&this->CharName,pFVar2);
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.TimeExpressionType = None;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_58,param_1);
  FDS_Text::operator=(&this->CharNameText,&local_58);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar3[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      pUVar3[3].field_0x20 = 1;
    }
  }
  return;
}

// SetCharSkinID @ 14ba6ad30

void __thiscall UDS_CharInfoData::SetCharSkinID(UDS_CharInfoData *this,int param_1)

{
  bool bVar1;
  FDS_CharacterBaseTableRow *pFVar2;
  
  this->CharSkinID = param_1;
  bVar1 = UDS_GameInstance::GetIsAIGymMode();
  if (bVar1) {
    pFVar2 = FDS_CharacterBaseTableRow::Get((longlong)this->CharID,true);
    if (pFVar2 != (FDS_CharacterBaseTableRow *)0x0) {
      this->CharSkinID = pFVar2->ID_DefaultSkin;
    }
  }
  return;
}

// SetCharTitleText @ 14ba6ad80

void __thiscall UDS_CharInfoData::SetCharTitleText(UDS_CharInfoData *this,FDS_StringBaseID *param_1)

{
  bool bVar1;
  FString *pFVar2;
  UObject *pUVar3;
  FDS_Text local_58;
  
  pFVar2 = (FString *)(**(code **)(param_1->_padding_ + 8))(param_1);
  ::FString::operator=(&this->CharTitle,pFVar2);
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.TimeExpressionType = None;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_58,param_1);
  FDS_Text::operator=(&this->CharTitleText,&local_58);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar3[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      pUVar3[3].field_0x20 = 1;
    }
  }
  return;
}

// SetCharTitleText @ 14ba6ae90

void __thiscall
UDS_CharInfoData::SetCharTitleText(UDS_CharInfoData *this,FDS_StringWorldID *param_1)

{
  bool bVar1;
  FString *pFVar2;
  UObject *pUVar3;
  FDS_Text local_58;
  
  pFVar2 = (FString *)(**(code **)(param_1->_padding_ + 8))(param_1);
  ::FString::operator=(&this->CharTitle,pFVar2);
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.TimeExpressionType = None;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_58,param_1);
  FDS_Text::operator=(&this->CharTitleText,&local_58);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar3[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      pUVar3[3].field_0x20 = 1;
    }
  }
  return;
}

// SetCombatPower @ 14ba6b490

void __thiscall UDS_CharInfoData::SetCombatPower(UDS_CharInfoData *this,double param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->CombatPower = (float)param_1;
  FDS_DataPropertyDelegate_float_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_CharCombatPower,&this->CombatPower);
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// SetDataByCharacterAscendResponse @ 14ba6ecb0

void __thiscall
UDS_CharInfoData::SetDataByCharacterAscendResponse
          (UDS_CharInfoData *this,CharacterAscendResponse *param_1)

{
  SetCharAscend(this,(param_1->_impl_).ascend_);
  return;
}

// SetDataByExpChangeResponse @ 14ba6ecc0

void __thiscall
UDS_CharInfoData::SetDataByExpChangeResponse(UDS_CharInfoData *this,ExpChangeResponse *param_1)

{
  SetExp(this,(param_1->_impl_).exp_);
  return;
}

// SetDataByLevelChangeResponse @ 14ba6f690

void __thiscall
UDS_CharInfoData::SetDataByLevelChangeResponse(UDS_CharInfoData *this,LevelChangeResponse *param_1)

{
  SetCharLevel(this,(param_1->_impl_).level_);
  return;
}

// SetDataByMyCharacterInfoResponseComplete @ 14ba6f6a0

void __thiscall
UDS_CharInfoData::SetDataByMyCharacterInfoResponseComplete
          (UDS_CharInfoData *this,MyCharacterInfoResponseComplete *param_1)

{
  Vector *pVVar1;
  TeamInfo *pTVar2;
  bool bVar3;
  UObject *pUVar4;
  Vector *pVVar5;
  TeamInfo *pTVar6;
  TVector<double>_u_0 local_28;
  
  pVVar1 = (param_1->_impl_).destination_;
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pVVar5 = &_Vector_default_instance_._instance;
  if (pVVar1 != (Vector *)0x0) {
    pVVar5 = pVVar1;
  }
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar5);
  (this->Destination).field0_0x0._s_0.X = local_28._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = local_28._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  (this->Destination).field0_0x0._s_0.Z = local_28._s_0.Z;
  bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar4[4].field_0x8 = 1;
    bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),
                       (void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
      pUVar4[3].field_0x20 = 1;
    }
  }
  this->IsBot = (param_1->_impl_).is_bot_;
  *(undefined1 *)&this->_padding_ = 1;
  bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar4[4].field_0x8 = 1;
    bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),
                       (void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
      pUVar4[3].field_0x20 = 1;
    }
  }
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pTVar2 = (param_1->_impl_).team_;
    pTVar6 = &_TeamInfo_default_instance_._instance;
    if (pTVar2 != (TeamInfo *)0x0) {
      pTVar6 = pTVar2;
    }
    UpdateTeamInfo(this,pTVar6);
  }
  return;
}

// SetDataBySpawnCharacterResponse @ 14ba70120

void __thiscall
UDS_CharInfoData::SetDataBySpawnCharacterResponse
          (UDS_CharInfoData *this,SpawnCharacterResponse *param_1)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  TeamInfo *pTVar3;
  bool bVar4;
  UObject *pUVar5;
  VectorF *pVVar6;
  FDS_CharacterBaseTableRow *pFVar7;
  Vector *pVVar8;
  TeamInfo *pTVar9;
  TVector<double>_u_0 local_38;
  
  pVVar1 = (param_1->_impl_).position_;
  local_38._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_38._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pVVar8 = &_Vector_default_instance_._instance;
  if (pVVar1 != (Vector *)0x0) {
    pVVar8 = pVVar1;
  }
  DS_Util::SetFVector((TVector<double> *)&local_38._s_0,pVVar8);
  (this->SpawnPosition).field0_0x0._s_0.X = local_38._s_0.X;
  (this->SpawnPosition).field0_0x0._s_0.Y = local_38._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  (this->SpawnPosition).field0_0x0._s_0.Z = local_38._s_0.Z;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar5[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
      pUVar5[3].field_0x20 = 1;
    }
  }
  (this->Position).field0_0x0._s_0.X = local_38._s_0.X;
  (this->Position).field0_0x0._s_0.Y = local_38._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  (this->Position).field0_0x0._s_0.Z = local_38._s_0.Z;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar5[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
      pUVar5[3].field_0x20 = 1;
    }
  }
  pVVar2 = (param_1->_impl_).direction_;
  pVVar6 = &_VectorF_default_instance_._instance;
  if (pVVar2 != (VectorF *)0x0) {
    pVVar6 = pVVar2;
  }
  this->Direction = (pVVar6->_impl_).y_;
  *(undefined1 *)&this->_padding_ = 1;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar5[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
      pUVar5[3].field_0x20 = 1;
    }
  }
  SetCharLevel(this,(param_1->_impl_).level_);
  pVVar2 = (param_1->_impl_).velocity_;
  pVVar6 = &_VectorF_default_instance_._instance;
  if (pVVar2 != (VectorF *)0x0) {
    pVVar6 = pVVar2;
  }
  DS_Util::SetFVector((TVector<double> *)&local_38._s_0,pVVar6);
  (this->Velocity).field0_0x0._s_0.X = local_38._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = local_38._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  (this->Velocity).field0_0x0._s_0.Z = local_38._s_0.Z;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar5[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
      pUVar5[3].field_0x20 = 1;
    }
  }
  pVVar1 = (param_1->_impl_).destination_;
  pVVar8 = &_Vector_default_instance_._instance;
  if (pVVar1 != (Vector *)0x0) {
    pVVar8 = pVVar1;
  }
  DS_Util::SetFVector((TVector<double> *)&local_38._s_0,pVVar8);
  (this->Destination).field0_0x0._s_0.X = local_38._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = local_38._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  (this->Destination).field0_0x0._s_0.Z = local_38._s_0.Z;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar5[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
      pUVar5[3].field_0x20 = 1;
    }
  }
  this->IsBot = (param_1->_impl_).is_bot_;
  *(undefined1 *)&this->_padding_ = 1;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar5[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
      pUVar5[3].field_0x20 = 1;
    }
  }
  this->SyncState = (param_1->_impl_).sync_state_;
  *(undefined1 *)&this->_padding_ = 1;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar5[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
      pUVar5[3].field_0x20 = 1;
    }
  }
  this->CharSkinID = (param_1->_impl_).skin_id_;
  bVar4 = UDS_GameInstance::GetIsAIGymMode();
  if ((bVar4) &&
     (pFVar7 = FDS_CharacterBaseTableRow::Get((longlong)this->CharID,true),
     pFVar7 != (FDS_CharacterBaseTableRow *)0x0)) {
    this->CharSkinID = pFVar7->ID_DefaultSkin;
  }
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) {
    pTVar3 = (param_1->_impl_).team_;
    pTVar9 = &_TeamInfo_default_instance_._instance;
    if (pTVar3 != (TeamInfo *)0x0) {
      pTVar9 = pTVar3;
    }
    UpdateTeamInfo(this,pTVar9);
  }
  return;
}

// SetDataBySpawnNpcResponse @ 14ba705d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_CharInfoData::SetDataBySpawnNpcResponse(UDS_CharInfoData *this,SpawnNpcResponse *param_1)

{
  NpcData *pNVar1;
  Vector *pVVar2;
  VectorF *pVVar3;
  TeamInfo *pTVar4;
  bool bVar5;
  UObject *pUVar6;
  VectorF *pVVar7;
  FDS_EntityBase *this_00;
  Vector *pVVar8;
  TeamInfo *pTVar9;
  NpcData *pNVar10;
  ulong64 local_res8;
  TVector<double>_u_0 local_48;
  
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pNVar1 = (param_1->_impl_).npc_data_;
  pNVar10 = &server_msg::_NpcData_default_instance_._instance;
  if (pNVar1 != (NpcData *)0x0) {
    pNVar10 = pNVar1;
  }
  pVVar2 = (pNVar10->_impl_).position_;
  pVVar8 = &_Vector_default_instance_._instance;
  if (pVVar2 != (Vector *)0x0) {
    pVVar8 = pVVar2;
  }
  DS_Util::SetFVector((TVector<double> *)&local_48._s_0,pVVar8);
  (this->SpawnPosition).field0_0x0._s_0.X = local_48._s_0.X;
  (this->SpawnPosition).field0_0x0._s_0.Y = local_48._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  (this->SpawnPosition).field0_0x0._s_0.Z = local_48._s_0.Z;
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar6[4].field_0x8 = 1;
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                       (void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
      pUVar6[3].field_0x20 = 1;
    }
  }
  (this->Position).field0_0x0._s_0.X = local_48._s_0.X;
  (this->Position).field0_0x0._s_0.Y = local_48._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  (this->Position).field0_0x0._s_0.Z = local_48._s_0.Z;
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar6[4].field_0x8 = 1;
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                       (void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
      pUVar6[3].field_0x20 = 1;
    }
  }
  pVVar3 = (pNVar10->_impl_).direction_;
  pVVar7 = &_VectorF_default_instance_._instance;
  if (pVVar3 != (VectorF *)0x0) {
    pVVar7 = pVVar3;
  }
  this->Direction = (pVVar7->_impl_).y_;
  *(undefined1 *)&this->_padding_ = 1;
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar6[4].field_0x8 = 1;
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                       (void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
      pUVar6[3].field_0x20 = 1;
    }
  }
  SetCharLevel(this,(pNVar10->_impl_).level_);
  pVVar2 = (pNVar10->_impl_).destination_;
  pVVar8 = &_Vector_default_instance_._instance;
  if (pVVar2 != (Vector *)0x0) {
    pVVar8 = pVVar2;
  }
  DS_Util::SetFVector((TVector<double> *)&local_48._s_0,pVVar8);
  (this->Destination).field0_0x0._s_0.X = local_48._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = local_48._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  (this->Destination).field0_0x0._s_0.Z = local_48._s_0.Z;
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar6[4].field_0x8 = 1;
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                       (void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
      pUVar6[3].field_0x20 = 1;
    }
  }
  pVVar3 = (pNVar10->_impl_).velocity_;
  pVVar7 = &_VectorF_default_instance_._instance;
  if (pVVar3 != (VectorF *)0x0) {
    pVVar7 = pVVar3;
  }
  DS_Util::SetFVector((TVector<double> *)&local_48._s_0,pVVar7);
  (this->Velocity).field0_0x0._s_0.X = local_48._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = local_48._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  (this->Velocity).field0_0x0._s_0.Z = local_48._s_0.Z;
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar6[4].field_0x8 = 1;
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                       (void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
      pUVar6[3].field_0x20 = 1;
    }
  }
  this->SyncState = (param_1->_impl_).sync_state_;
  *(undefined1 *)&this->_padding_ = 1;
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar6[4].field_0x8 = 1;
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                       (void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
      pUVar6[3].field_0x20 = 1;
    }
  }
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                       (void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
      local_res8 = *(ulong64 *)(pUVar6 + 1);
      goto LAB_14ba70906;
    }
  }
  local_res8 = 0;
LAB_14ba70906:
  this_00 = FDS_EntityBase::GetEntityBase(&local_res8);
  if (this_00 != (FDS_EntityBase *)0x0) {
    FDS_EntityBase::SetBattleState(this_00,(param_1->_impl_).battle_state_);
  }
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 8) != 0) {
    pTVar4 = (param_1->_impl_).team_;
    pTVar9 = &_TeamInfo_default_instance_._instance;
    if (pTVar4 != (TeamInfo *)0x0) {
      pTVar9 = pTVar4;
    }
    UpdateTeamInfo(this,pTVar9);
  }
  return;
}

// SetDirection @ 14ba70eb0

void __thiscall UDS_CharInfoData::SetDirection(UDS_CharInfoData *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->Direction = param_1;
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// SetExp @ 14ba70f50

void __thiscall UDS_CharInfoData::SetExp(UDS_CharInfoData *this,long64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->Exp = param_1;
  FDS_DataPropertyDelegate_int64_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->DataPropertyDelegate_Exp
             ,&this->Exp);
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// SetPosition @ 14ba73eb0

void __thiscall UDS_CharInfoData::SetPosition(UDS_CharInfoData *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  *(undefined1 *)&this->_padding_ = 1;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->Position).field0_0x0._s_0.X = dVar2;
  (this->Position).field0_0x0._s_0.Y = dVar3;
  (this->Position).field0_0x0._s_0.Z = dVar1;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar5[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
      pUVar5[3].field_0x20 = 1;
    }
  }
  return;
}

// SetUpdateTeamInfoResponse @ 14ba751c0

void __thiscall
UDS_CharInfoData::SetUpdateTeamInfoResponse(UDS_CharInfoData *this,UpdateTeamInfoResponse *param_1)

{
  TeamInfo *pTVar1;
  TeamInfo *pTVar2;
  
  pTVar1 = (param_1->_impl_).team_;
  pTVar2 = &_TeamInfo_default_instance_._instance;
  if (pTVar1 != (TeamInfo *)0x0) {
    pTVar2 = pTVar1;
  }
  UpdateTeamInfo(this,pTVar2);
  return;
}

// SetWeaponType @ 14ba75240

void __thiscall UDS_CharInfoData::SetWeaponType(UDS_CharInfoData *this,EDS_WeaponType param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<EDS_WeaponType_const_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  if (this->WeaponType != param_1) {
    this->WeaponType = param_1;
    this_00 = &this->DataPropertyDelegate_WeaponType;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(this->DataPropertyDelegate_WeaponType).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar9 = *(int *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar9) {
        lVar10 = (longlong)(int)uVar9 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar9 < *(int *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x10) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(this->DataPropertyDelegate_WeaponType).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar10 = lVar10 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      puVar1 = &(this->DataPropertyDelegate_WeaponType).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// UpdateCharacterID @ 14ba7c130

void __thiscall UDS_CharInfoData::UpdateCharacterID(UDS_CharInfoData *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->CharID = param_1;
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// UpdateData @ 14ba7c6b0

void __thiscall UDS_CharInfoData::UpdateData(UDS_CharInfoData *this,DbWorkItem *param_1)

{
  uint uVar1;
  bool bVar2;
  FDS_CharacterBaseTableRow *pFVar3;
  undefined1 local_48 [40];
  int local_20;
  int local_1c;
  int local_18;
  
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  if (uVar1 == 3) {
    ds_game::SqlCharacterLevelTable::SqlCharacterLevelTable
              ((SqlCharacterLevelTable *)local_48,(Arena *)0x0,
               (SqlCharacterLevelTable *)(param_1->_impl_).Item_.characterlevel_);
    local_48._0_8_ = &___7SqlCharacterLevelTable_ds_game__6B_;
    SetCharLevel(this,local_20);
    SetExp(this,CONCAT44(local_48._36_4_,local_48._32_4_));
    SetCharAscend(this,local_1c);
    SetCharEvolution(this,local_18);
    ds_game::SqlCharacterLevelTable::~SqlCharacterLevelTable((SqlCharacterLevelTable *)local_48);
  }
  else {
    if (uVar1 == 0x22) {
      ds_game::SqlCharacterSkinTable::SqlCharacterSkinTable
                ((SqlCharacterSkinTable *)local_48,(Arena *)0x0,
                 (SqlCharacterSkinTable *)(param_1->_impl_).Item_.characterlevel_);
      local_48._0_8_ = &___7SqlCharacterSkinTable_ds_game__6B_;
      this->CharSkinID = local_48._32_4_;
      bVar2 = UDS_GameInstance::GetIsAIGymMode();
      if (bVar2) {
        pFVar3 = FDS_CharacterBaseTableRow::Get((longlong)this->CharID,true);
        if (pFVar3 != (FDS_CharacterBaseTableRow *)0x0) {
          this->CharSkinID = pFVar3->ID_DefaultSkin;
        }
      }
      ds_game::SqlCharacterSkinTable::~SqlCharacterSkinTable((SqlCharacterSkinTable *)local_48);
      return;
    }
    if (uVar1 == 0x3a) {
      ds_game::SqlCombatPowerTable::SqlCombatPowerTable
                ((SqlCombatPowerTable *)local_48,(Arena *)0x0,
                 (SqlCombatPowerTable *)(param_1->_impl_).Item_.characterlevel_);
      local_48._0_8_ = &___7SqlCombatPowerTable_ds_game__6B_;
      SetCombatPower(this,(double)(float)local_48._32_4_);
      ds_game::SqlCombatPowerTable::~SqlCombatPowerTable((SqlCombatPowerTable *)local_48);
      return;
    }
  }
  return;
}

// UpdateTeamInfo @ 14ba82c20

void __thiscall UDS_CharInfoData::UpdateTeamInfo(UDS_CharInfoData *this,TeamInfo *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UObject *pUVar9;
  ulong64 uVar10;
  uint uVar11;
  longlong lVar12;
  FWeakObjectPtr local_res8;
  UDS_CharInfoData *local_res18 [2];
  FDestructionSentinel local_48;
  
  FDS_TeamInfo::UpdateTeamInfo(&this->MyTeamInfo,param_1);
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar5) {
LAB_14ba82c81:
    uVar10 = 0;
  }
  else {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar9 + 4),
                       (void *)0x0);
    if (bVar5) goto LAB_14ba82c81;
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar9 + 4));
    uVar10 = *(ulong64 *)(pUVar9 + 1);
  }
  FDS_TeamGroupInfo::AddTeamGroupData(&(this->MyTeamInfo).AddedTeamTypeMap,uVar10);
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar9 + 4),
                       (void *)0x0);
    if (!bVar5) {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar9 + 4));
      uVar10 = *(ulong64 *)(pUVar9 + 1);
      goto LAB_14ba82ccc;
    }
  }
  uVar10 = 0;
LAB_14ba82ccc:
  FDS_TeamGroupInfo::RemoveTeamGroupData(&(this->MyTeamInfo).RemovedTeamTypeMap,uVar10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CharInfoData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CharInfoData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnChangedTeamInfoDelegate,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnChangedTeamInfoDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar11 = *(int *)&(this->OnChangedTeamInfoDelegate).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar11 < *(int *)&(this->OnChangedTeamInfoDelegate).field_0x10) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnChangedTeamInfoDelegate).field_0x8;
      if (((*(int *)(lVar12 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar12 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->OnChangedTeamInfoDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnChangedTeamInfoDelegate,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

