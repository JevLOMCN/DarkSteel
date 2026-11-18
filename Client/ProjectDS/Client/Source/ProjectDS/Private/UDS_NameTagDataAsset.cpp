// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b52cf00

UClass * __cdecl UDS_NameTagDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NameTagDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NameTagDataAsset",
               &Z_Registration_Info_UClass_UDS_NameTagDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_NameTagDataAsset,0x278,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NameTagDataAsset>,
               InternalVTableHelperCtorCaller<UDS_NameTagDataAsset>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NameTagDataAsset.InnerSingleton;
}

// UDS_NameTagDataAsset @ 14b52f020

UDS_NameTagDataAsset * __thiscall
UDS_NameTagDataAsset::UDS_NameTagDataAsset(UDS_NameTagDataAsset *this,FVTableHelper *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->DefaultStartFadeDistance = 2000.0;
  this->_padding_ = (longlong)&___7UDS_NameTagDataAsset__6B_;
  *(undefined8 *)&(this->PlayerNameTag).AlphaDataMap = 0;
  *(undefined8 *)&(this->PlayerNameTag).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->PlayerNameTag).AlphaDataMap.field_0x20 = 0;
  this->DefaultEndFadeDistance = 3000.0;
  this->DisplayOffTime_BattleNpcNameTag = 3.0;
  this->DisplayOffTime_PlayerHPBar = 3.0;
  this->DisplayOffTime_MainTarget = 3.0;
  (this->PlayerNameTag).NameTagType = None;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlayerNameTag).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->PlayerNameTag).NameTagDataMap = 0;
  *(undefined8 *)&(this->PlayerNameTag).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->PlayerNameTag).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlayerNameTag).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x48 = 0;
  (this->NetPlayerNameTag).NameTagType = None;
  *(undefined8 *)&(this->NetPlayerNameTag).AlphaDataMap = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).NameTagDataMap = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x48 = 0;
  (this->BattleNpcNameTag).NameData.EnemyNameData.AggressiveEnemyNameStyleID = 0;
  (this->BattleNpcNameTag).NameData.EnemyNameData.NonAggressiveEnemyNameStyleID = 0;
  (this->BattleNpcNameTag).NameData.NeutralityNameStyleID = 0;
  (this->BattleNpcNameTag).NameData.FriendNameStyleId = 0;
  (this->BattleNpcNameTag).TitleData.DefaultTitleStyleID = 0;
  (this->BattleNpcNameTag).TitleData.DeathTitleStyleID = 0;
  (this->BattleNpcNameTag).HpBarData.DefaultHpBarColorID = 0;
  (this->BattleNpcNameTag).HpBarData.AggressiveHpBarColorID = 0;
  (this->BattleNpcNameTag).StartIconFadeDistance = 0.0;
  (this->BattleNpcNameTag).EndIconFadeDistance = 0.0;
  (this->MountNpcNameTag).ID_PlayerNameColor = 0;
  (this->MountNpcNameTag).ID_NameColor = 0;
  (this->NonBattleNpcNameTag).NameTagType = None;
  *(undefined8 *)&(this->NonBattleNpcNameTag).AlphaDataMap = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).NameTagDataMap = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x48 = 0;
  (this->StuffNameTag).ID_GaugeDefaultColor = 0;
  return this;
}

// UDS_NameTagDataAsset @ 14b52f230

UDS_NameTagDataAsset * __thiscall
UDS_NameTagDataAsset::UDS_NameTagDataAsset(UDS_NameTagDataAsset *this,FObjectInitializer *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->DefaultStartFadeDistance = 2000.0;
  this->_padding_ = (longlong)&___7UDS_NameTagDataAsset__6B_;
  *(undefined8 *)&(this->PlayerNameTag).AlphaDataMap = 0;
  *(undefined8 *)&(this->PlayerNameTag).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->PlayerNameTag).AlphaDataMap.field_0x20 = 0;
  this->DefaultEndFadeDistance = 3000.0;
  this->DisplayOffTime_BattleNpcNameTag = 3.0;
  this->DisplayOffTime_PlayerHPBar = 3.0;
  this->DisplayOffTime_MainTarget = 3.0;
  (this->PlayerNameTag).NameTagType = None;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlayerNameTag).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->PlayerNameTag).NameTagDataMap = 0;
  *(undefined8 *)&(this->PlayerNameTag).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->PlayerNameTag).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlayerNameTag).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x48 = 0;
  (this->NetPlayerNameTag).NameTagType = None;
  *(undefined8 *)&(this->NetPlayerNameTag).AlphaDataMap = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).NameTagDataMap = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x48 = 0;
  (this->BattleNpcNameTag).NameData.EnemyNameData.AggressiveEnemyNameStyleID = 0;
  (this->BattleNpcNameTag).NameData.EnemyNameData.NonAggressiveEnemyNameStyleID = 0;
  (this->BattleNpcNameTag).NameData.NeutralityNameStyleID = 0;
  (this->BattleNpcNameTag).NameData.FriendNameStyleId = 0;
  (this->BattleNpcNameTag).TitleData.DefaultTitleStyleID = 0;
  (this->BattleNpcNameTag).TitleData.DeathTitleStyleID = 0;
  (this->BattleNpcNameTag).HpBarData.DefaultHpBarColorID = 0;
  (this->BattleNpcNameTag).HpBarData.AggressiveHpBarColorID = 0;
  (this->BattleNpcNameTag).StartIconFadeDistance = 0.0;
  (this->BattleNpcNameTag).EndIconFadeDistance = 0.0;
  (this->MountNpcNameTag).ID_PlayerNameColor = 0;
  (this->MountNpcNameTag).ID_NameColor = 0;
  (this->NonBattleNpcNameTag).NameTagType = None;
  *(undefined8 *)&(this->NonBattleNpcNameTag).AlphaDataMap = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).NameTagDataMap = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x48 = 0;
  (this->StuffNameTag).ID_GaugeDefaultColor = 0;
  return this;
}

// ~UDS_NameTagDataAsset @ 14b5306f0

void __thiscall UDS_NameTagDataAsset::~UDS_NameTagDataAsset(UDS_NameTagDataAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_NameTagDataAsset__6B_;
  *(undefined4 *)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NonBattleNpcNameTag).NameTagDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NonBattleNpcNameTag).NameTagDataMap);
  *(undefined4 *)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NonBattleNpcNameTag).AlphaDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NonBattleNpcNameTag).AlphaDataMap);
  *(undefined4 *)&(this->NetPlayerNameTag).NameTagDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NetPlayerNameTag).NameTagDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NetPlayerNameTag).NameTagDataMap);
  *(undefined4 *)&(this->NetPlayerNameTag).AlphaDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NetPlayerNameTag).AlphaDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NetPlayerNameTag).AlphaDataMap);
  *(undefined4 *)&(this->PlayerNameTag).NameTagDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PlayerNameTag).NameTagDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PlayerNameTag).NameTagDataMap);
  *(undefined4 *)&(this->PlayerNameTag).AlphaDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PlayerNameTag).AlphaDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PlayerNameTag).AlphaDataMap);
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b5329c0

UClass * __cdecl UDS_NameTagDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NameTagDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NameTagDataAsset",
               &Z_Registration_Info_UClass_UDS_NameTagDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_NameTagDataAsset,0x278,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NameTagDataAsset>,
               InternalVTableHelperCtorCaller<UDS_NameTagDataAsset>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NameTagDataAsset.InnerSingleton;
}

// StaticRegisterNativesUDS_NameTagDataAsset @ 14b533120

void __cdecl UDS_NameTagDataAsset::StaticRegisterNativesUDS_NameTagDataAsset(void)

{
  return;
}

// __VTableCtorCaller @ 14b533f10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_NameTagDataAsset::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimaryDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UPrimaryDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimaryDataAsset *)0x0) {
    UPrimaryDataAsset::UPrimaryDataAsset(this,param_1);
    *(undefined4 *)(this + 1) = 0x44fa0000;
    *(undefined ***)this = &___7UDS_NameTagDataAsset__6B_;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x4 = 0x453b8000;
    *(undefined4 *)&this[1].field_0x8 = 0x40400000;
    *(undefined4 *)&this[1].field_0xc = 0x40400000;
    *(undefined4 *)&this[1].field_0x10 = 0x40400000;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0xc = 0x80;
    *(undefined4 *)&this[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x14 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)&this[4].field_0x28 = 0;
    *(undefined1 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x4 = 0x80;
    *(undefined4 *)&this[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[6].field_0xc = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x28 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined4 *)&this[7].field_0x20 = 0;
    *(undefined4 *)&this[7].field_0x24 = 0x80;
    *(undefined4 *)&this[7].field_0x28 = 0xffffffff;
    *(undefined4 *)&this[7].field_0x2c = 0;
    *(undefined8 *)&this[8].field_0x8 = 0;
    *(undefined4 *)&this[8].field_0x10 = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined8 *)&this[8].field_0x20 = 0;
    *(undefined8 *)&this[8].field_0x28 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0;
    this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)&this[9].field_0x28 = 0;
    *(undefined8 *)&this[10].field_0x10 = 0;
    *(undefined4 *)&this[10].field_0x18 = 0;
    *(undefined4 *)&this[10].field_0x1c = 0x80;
    *(undefined4 *)&this[10].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[10].field_0x24 = 0;
    *(undefined8 *)(this + 0xb) = 0;
    *(undefined4 *)&this[0xb].field_0x8 = 0;
    *(undefined8 *)&this[0xb].field_0x10 = 0;
    *(undefined8 *)&this[0xb].field_0x18 = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined4 *)&this[0xc].field_0x8 = 0;
    *(undefined4 *)&this[0xc].field_0xc = 0x80;
    *(undefined4 *)&this[0xc].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[0xc].field_0x14 = 0;
    *(undefined8 *)&this[0xc].field_0x20 = 0;
    *(undefined4 *)&this[0xc].field_0x28 = 0;
    *(undefined4 *)(this + 0xd) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// GetAlphaByDistance @ 14b905040

float __cdecl UDS_NameTagDataAsset::GetAlphaByDistance(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_2 * param_2;
  if (param_1 < fVar1) {
    return __real_3f800000;
  }
  if (param_3 * param_3 < param_1) {
    return 0.0;
  }
  return __real_3f800000 - (param_1 - fVar1) / (param_3 * param_3 - fVar1);
}

// GetAlphaByDistance @ 14b905090

float __cdecl
UDS_NameTagDataAsset::GetAlphaByDistance
          (EDS_NameTagType param_1,EDS_NameTagElementType param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FDS_NameTagElementAlphaData *pFVar4;
  float fVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  float fStack_2c;
  
  GetInst();
  bVar1 = FWeakObjectPtr::IsValid(&local_38);
  if (bVar1) {
    FWeakObjectPtr::Get(&local_38);
    GetInst();
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      if (param_1 == Player) {
        pUVar3 = FWeakObjectPtr::Get(&local_res20);
        pUVar3 = pUVar3 + 2;
      }
      else if (param_1 == NetPlayer) {
        pUVar3 = FWeakObjectPtr::Get(&local_res20);
        pUVar3 = (UObject *)&pUVar3[6].field_0x8;
      }
      else if (param_1 == NoneBattleNpc) {
        pUVar3 = FWeakObjectPtr::Get(&local_res20);
        pUVar3 = (UObject *)&pUVar3[0xb].field_0x18;
      }
      else {
        pUVar3 = (UObject *)&FDS_NameTagDataCollection::Empty.AlphaDataMap;
      }
    }
    else {
      pUVar3 = (UObject *)&FDS_NameTagDataCollection::Empty.AlphaDataMap;
    }
    fVar5 = FDS_NameTagElementAlphaData::EmptyNameTagElementAlphaData.EndFadeDistance;
    uVar7 = FDS_NameTagElementAlphaData::EmptyNameTagElementAlphaData._0_8_;
    if (*(int *)&pUVar3->field_0x8 != *(int *)&pUVar3[1].field_0xc) {
      puVar6 = *(undefined1 **)&pUVar3[1].field_0x18;
      if (*(undefined1 **)&pUVar3[1].field_0x18 == (undefined1 *)0x0) {
        puVar6 = &pUVar3[1].field_0x10;
      }
      iVar2 = *(int *)(puVar6 + ((ulonglong)(*(int *)&pUVar3[1].field_0x20 - 1) & (ulonglong)param_2
                                ) * 4);
      if (iVar2 != -1) {
        do {
          if (*(EDS_NameTagElementType *)(*(longlong *)pUVar3 + (longlong)iVar2 * 0x18) == param_2)
          {
            pFVar4 = TMapBase<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData,0>_>
                     ::FindChecked(pUVar3,param_2);
            uVar7._0_1_ = pFVar4->ElementType;
            uVar7._1_3_ = *(undefined3 *)&pFVar4->field_0x1;
            uVar7._4_4_ = pFVar4->StartFadeDistance;
            fVar5 = pFVar4->EndFadeDistance;
            break;
          }
          iVar2 = *(int *)(*(longlong *)pUVar3 + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
    }
    fStack_2c = SUB84(uVar7,4);
    fStack_2c = fStack_2c * fStack_2c;
    if (param_3 < fStack_2c) {
      return __real_3f800000;
    }
    if (param_3 <= fVar5 * fVar5) {
      return __real_3f800000 - (param_3 - fStack_2c) / (fVar5 * fVar5 - fStack_2c);
    }
  }
  return 0.0;
}

// GetInst @ 14b905cb0

TWeakObjectPtr<UDS_NameTagDataAsset,FWeakObjectPtr> __cdecl UDS_NameTagDataAsset::GetInst(void)

{
  UDS_NameTagDataAsset *pUVar1;
  FWeakObjectPtr in_RCX;
  UDS_GameInstance *local_res10 [3];
  
  local_res10[0] = UDS_GameInstance::GetInst();
  if (local_res10[0] == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_NameTagDataAsset,FWeakObjectPtr>)in_RCX;
  }
  pUVar1 = (local_res10[0]->NameTagDataAsset).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_NameTagDataAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_NameTagDataAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RCX = 0;
  local_res10[0] = (UDS_GameInstance *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_NameTagDataAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_NameTagDataAsset,FWeakObjectPtr>)in_RCX;
}

// GetNameTagData @ 14b9061e0

void __thiscall
UDS_NameTagDataAsset::GetNameTagData
          (UDS_NameTagDataAsset *this,FDS_NameTagDataCollection *param_1,
          EDS_NameTagStateType param_2,FDS_NameTagData *param_3)

{
  TMap<EDS_NameTagStateType,FDS_NameTagData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_NameTagStateType,FDS_NameTagData,0>_>
  *this_00;
  TMap<EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_NameTagElementType,FDS_NameTagElementData,0>_>
  *pTVar1;
  FDS_NameTagElementData *pFVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  TMap<EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_NameTagElementType,FDS_NameTagElementData,0>_>
  *pTVar7;
  EDS_NameTagType EVar8;
  bool bVar9;
  FDS_NameTagData *pFVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res18 [8];
  int local_res20;
  TPairInitializer<EDS_NameTagElementType_const_&,FDS_NameTagElementData_const_&> local_b8;
  int *local_a8;
  TMap<EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_NameTagElementType,FDS_NameTagElementData,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_NameTagElementType,FDS_NameTagElementData,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  this_00 = &param_1->NameTagDataMap;
  if (*(int *)&(param_1->NameTagDataMap).field_0x8 != *(int *)&(param_1->NameTagDataMap).field_0x34)
  {
    puVar11 = *(undefined1 **)&(param_1->NameTagDataMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(param_1->NameTagDataMap).field_0x38;
    }
    iVar15 = *(int *)(puVar11 +
                     (ulonglong)(*(int *)&(param_1->NameTagDataMap).field_0x48 - 1U & 1) * 4);
    if (iVar15 != -1) {
      do {
        if (*(char *)((longlong)iVar15 * 0x68 + *(longlong *)this_00) == '\x01') {
          pFVar10 = TMapBase<enum_EDS_NameTagStateType,FDS_NameTagData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagStateType,FDS_NameTagData,0>_>
                    ::FindChecked(this_00,Default);
          pTVar1 = &param_3->ElementDataMap;
          param_3->NameTagType = pFVar10->NameTagType;
          param_3->NameTagStateType = pFVar10->NameTagStateType;
          if (pTVar1 != &pFVar10->ElementDataMap) {
            UE::Core::Private::
            CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                      ((ForElementType<FSetElementId> *)&(param_3->ElementDataMap).field_0x38,
                       (int *)&(param_3->ElementDataMap).field_0x48,
                       (ForElementType<FSetElementId> *)&(pFVar10->ElementDataMap).field_0x38,
                       *(int *)&(pFVar10->ElementDataMap).field_0x48);
            iVar15 = *(int *)&(pFVar10->ElementDataMap).field_0x8;
            TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty(pTVar1,iVar15);
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,iVar15,(ForAnyElementType *)pTVar1,
                       (int *)&(param_3->ElementDataMap).field_0x8,
                       (int *)&(param_3->ElementDataMap).field_0xc);
            puVar11 = &(pFVar10->ElementDataMap).field_0x10;
            puVar18 = &(param_3->ElementDataMap).field_0x10;
            *(undefined4 *)&(param_3->ElementDataMap).field_0x30 =
                 *(undefined4 *)&(pFVar10->ElementDataMap).field_0x30;
            *(undefined4 *)&(param_3->ElementDataMap).field_0x34 =
                 *(undefined4 *)&(pFVar10->ElementDataMap).field_0x34;
            if (puVar18 != puVar11) {
              TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                        ((TBitArray<FDefaultBitArrayAllocator> *)puVar18,
                         (TBitArray<FDefaultBitArrayAllocator> *)puVar11);
            }
            if (iVar15 != 0) {
              memcpy(*(void **)pTVar1,*(void **)&pFVar10->ElementDataMap,(longlong)iVar15 * 0x18);
            }
          }
          param_3->NameTagStateType = Default;
          break;
        }
        iVar15 = *(int *)((longlong)iVar15 * 0x68 + 0x60 + *(longlong *)this_00);
      } while (iVar15 != -1);
    }
  }
  if (*(int *)&(param_1->NameTagDataMap).field_0x8 != *(int *)&(param_1->NameTagDataMap).field_0x34)
  {
    puVar11 = *(undefined1 **)&(param_1->NameTagDataMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(param_1->NameTagDataMap).field_0x38;
    }
    iVar15 = *(int *)(puVar11 +
                     ((ulonglong)(*(int *)&(param_1->NameTagDataMap).field_0x48 - 1) &
                     (ulonglong)param_2) * 4);
    if (iVar15 != -1) {
      do {
        if (*(EDS_NameTagStateType *)((longlong)iVar15 * 0x68 + *(longlong *)this_00) == param_2) {
          param_3->NameTagStateType = param_2;
          pFVar10 = TMapBase<enum_EDS_NameTagStateType,FDS_NameTagData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagStateType,FDS_NameTagData,0>_>
                    ::FindChecked(this_00,param_2);
          uStack_94 = 1;
          iVar15 = *(int *)&(pFVar10->ElementDataMap).field_0x28;
          puVar11 = &(pFVar10->ElementDataMap).field_0x10;
          pTVar1 = &pFVar10->ElementDataMap;
          iStack_98 = 0;
          local_80 = 0;
          iStack_84 = 0;
          if (iVar15 == 0) goto LAB_14b90640d;
          puVar19 = *(uint **)&(pFVar10->ElementDataMap).field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar11;
          }
          uVar17 = *puVar19;
          local_80 = 0;
          goto joined_r0x00014b9063c9;
        }
        iVar15 = *(int *)((longlong)iVar15 * 0x68 + 0x60 + *(longlong *)this_00);
      } while (iVar15 != -1);
    }
  }
  EVar8 = param_1->NameTagType;
  goto LAB_14b906359;
joined_r0x00014b9063c9:
  if (uVar17 != 0) goto LAB_14b9063e8;
  lVar12 = (longlong)iStack_98;
  local_80 = local_80 + 0x20;
  iStack_98 = iStack_98 + 1;
  iStack_84 = iVar15;
  if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14b90640d;
  uVar17 = puVar19[lVar12 + 1];
  goto joined_r0x00014b9063c9;
LAB_14b9063e8:
  uStack_94 = -uVar17 & uVar17;
  uVar3 = (ulonglong)uStack_94 * 2 + 1;
  lVar12 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  local_res20 = (int)lVar12;
  iStack_84 = local_80 + -1 + local_res20;
  if (iVar15 < iStack_84) {
    iStack_84 = iVar15;
  }
LAB_14b90640d:
  iStack_78 = *(int *)&(pFVar10->ElementDataMap).field_0x8 -
              *(int *)&(pFVar10->ElementDataMap).field_0x34;
  uVar17 = *(uint *)&(pFVar10->ElementDataMap).field_0x28;
  uStack_88 = 0xffffffff;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar1;
  local_90 = puVar11;
  iStack_7c = iStack_84;
  local_70 = pTVar1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar11;
  if (((int)uVar17 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(pFVar10->ElementDataMap).field_0x28;
  if (uVar17 != uVar5) {
    puVar18 = *(undefined1 **)&(pFVar10->ElementDataMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar11;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14b9064fa;
      uVar17 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = (int)lVar12 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14b9064fa:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_68.CurrentBitIndex == uVar17) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar11)) && (pTVar7 == pTVar1))
    break;
    lVar12 = *(longlong *)pTVar7;
    bVar4 = *(byte *)(lVar12 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    pFVar2 = (FDS_NameTagElementData *)(lVar12 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    if (*(int *)&(param_3->ElementDataMap).field_0x8 !=
        *(int *)&(param_3->ElementDataMap).field_0x34) {
      puVar18 = *(undefined1 **)&(param_3->ElementDataMap).field_0x40;
      puVar14 = &(param_3->ElementDataMap).field_0x38;
      if (puVar18 != (undefined1 *)0x0) {
        puVar14 = puVar18;
      }
      iVar15 = *(int *)(puVar14 +
                       ((ulonglong)(*(int *)&(param_3->ElementDataMap).field_0x48 - 1) &
                       (ulonglong)bVar4) * 4);
      if (iVar15 != -1) {
        do {
          lVar12 = *(longlong *)&param_3->ElementDataMap + (longlong)iVar15 * 0x18;
          if (*(byte *)(*(longlong *)&param_3->ElementDataMap + (longlong)iVar15 * 0x18) == bVar4) {
            puVar13 = (undefined8 *)(lVar12 + 4);
            if (lVar12 == 0) {
              puVar13 = (undefined8 *)0x0;
            }
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = *(undefined8 *)&pFVar2->ID_Color;
              *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(pFVar2 + 1);
              goto LAB_14b9065b4;
            }
            break;
          }
          iVar15 = *(int *)(lVar12 + 0x10);
        } while (iVar15 != -1);
      }
    }
    local_b8.Value = pFVar2;
    local_a8 = &pFVar2->ID_Color;
    TSet<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementData>,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_NameTagElementType_const_&,FDS_NameTagElementData_const_&>_>
              (&param_3->ElementDataMap,&local_b8,(bool *)&local_b8.Value);
LAB_14b9065b4:
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  EVar8 = param_1->NameTagType;
LAB_14b906359:
  param_3->NameTagType = EVar8;
  return;
}

// GetNameTagDataCollection @ 14b906610

FDS_NameTagDataCollection * __cdecl
UDS_NameTagDataAsset::GetNameTagDataCollection(EDS_NameTagType param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    if (param_1 == Player) {
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      return (FDS_NameTagDataCollection *)&pUVar2[1].field_0x20;
    }
    if (param_1 == NetPlayer) {
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      return (FDS_NameTagDataCollection *)(pUVar2 + 6);
    }
    if (param_1 == NoneBattleNpc) {
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      return (FDS_NameTagDataCollection *)&pUVar2[0xb].field_0x10;
    }
  }
  return &FDS_NameTagDataCollection::Empty;
}

// Initialize @ 14b90baa0

void __cdecl UDS_NameTagDataAsset::Initialize(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    FDS_NameTagElementAlphaData::EmptyNameTagElementAlphaData.StartFadeDistance =
         *(float *)&pUVar2[1].field_0x8;
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    FDS_NameTagElementAlphaData::EmptyNameTagElementAlphaData.EndFadeDistance =
         *(float *)&pUVar2[1].field_0xc;
    DISPLAY_NAME_TAG = false;
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    DISPLAY_TIME_OF_SLIDER_BAR_AFTER_HIT = *(float *)&pUVar2[1].field_0x10;
  }
  return;
}

// SetDisplayNameTag @ 14b90c440

void __cdecl UDS_NameTagDataAsset::SetDisplayNameTag(bool param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_28;
  
  DISPLAY_NAME_TAG = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnChangedDisplayNameTag,
             (FWriteAccessScope *)&local_28);
  bVar3 = false;
  OnChangedDisplayNameTag._28_4_ = OnChangedDisplayNameTag._28_4_ + 1;
  uVar7 = OnChangedDisplayNameTag._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnChangedDisplayNameTag._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + OnChangedDisplayNameTag._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnChangedDisplayNameTag._8_8_), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnChangedDisplayNameTag._28_4_ = OnChangedDisplayNameTag._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnChangedDisplayNameTag,false)
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

