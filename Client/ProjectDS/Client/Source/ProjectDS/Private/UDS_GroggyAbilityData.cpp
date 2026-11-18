// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4a3d30

UClass * __cdecl UDS_GroggyAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GroggyAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GroggyAbilityData",
               &Z_Registration_Info_UClass_UDS_GroggyAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_GroggyAbilityData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GroggyAbilityData>,
               InternalVTableHelperCtorCaller<UDS_GroggyAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GroggyAbilityData.InnerSingleton;
}

// UDS_GroggyAbilityData @ 14b4a7150

UDS_GroggyAbilityData * __thiscall
UDS_GroggyAbilityData::UDS_GroggyAbilityData(UDS_GroggyAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_GroggyAbilityData__6B_;
  this->GroggyState = None;
  this->GroggyStartTime = 0.0;
  this->GroggyGetUpTime = 0.0;
  this->GroggyEndTime = 0.0;
  return this;
}

// UDS_GroggyAbilityData @ 14b4a7190

UDS_GroggyAbilityData * __thiscall
UDS_GroggyAbilityData::UDS_GroggyAbilityData
          (UDS_GroggyAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_GroggyAbilityData__6B_;
  this->GroggyState = None;
  this->GroggyStartTime = 0.0;
  this->GroggyGetUpTime = 0.0;
  this->GroggyEndTime = 0.0;
  return this;
}

// ~UDS_GroggyAbilityData @ 14b4a78d0

void __thiscall UDS_GroggyAbilityData::~UDS_GroggyAbilityData(UDS_GroggyAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_GroggyAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a8d70

UClass * __cdecl UDS_GroggyAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GroggyAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GroggyAbilityData",
               &Z_Registration_Info_UClass_UDS_GroggyAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_GroggyAbilityData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GroggyAbilityData>,
               InternalVTableHelperCtorCaller<UDS_GroggyAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GroggyAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_GroggyAbilityData @ 14b4a95b0

void __cdecl UDS_GroggyAbilityData::StaticRegisterNativesUDS_GroggyAbilityData(void)

{
  return;
}

// InitData @ 14b9f7de0

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

bool __thiscall
UDS_GroggyAbilityData::InitData(UDS_GroggyAbilityData *this,ulong64 *param_1,double *param_2)

{
  FDS_EntityBase *pFVar1;
  FDS_NpcBaseTableRow *pFVar2;
  FDS_NpcBattleTableRow *pFVar3;
  FDS_NpcGroggyTableRow *pFVar4;
  double dVar5;
  
  pFVar1 = FDS_EntityBase::GetEntityBase(param_1);
  if ((pFVar1 != (FDS_EntityBase *)0x0) && (pFVar1->EntityType == NPC)) {
    pFVar2 = FDS_NpcBaseTableRow::Get(pFVar1->TableID,true);
    if (pFVar2 != (FDS_NpcBaseTableRow *)0x0) {
      pFVar3 = FDS_NpcBattleTableRow::Get((longlong)pFVar2->ID_NpcBattle,true);
      if (pFVar3 != (FDS_NpcBattleTableRow *)0x0) {
        pFVar4 = FDS_NpcGroggyTableRow::Get((longlong)pFVar3->ID_NpcGroggy,true);
        if (pFVar4 != (FDS_NpcGroggyTableRow *)0x0) {
          this->GroggyState = Groggy_StartAndLoop;
          dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
          this->GroggyStartTime = dVar5;
          this->GroggyGetUpTime = *param_2 - (double)pFVar4->GroggyGetUpTime;
          this->GroggyEndTime = *param_2;
          return true;
        }
      }
    }
  }
  return false;
}

// ResetData @ 14ba18800

void __thiscall UDS_GroggyAbilityData::ResetData(UDS_GroggyAbilityData *this)

{
  this->GroggyState = None;
  this->GroggyStartTime = 0.0;
  this->GroggyGetUpTime = 0.0;
  this->GroggyEndTime = 0.0;
  return;
}

