// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 165

// `dynamic_initializer_for_'GClothMaxDeltaTimeTeleportMultiplier'' @ 1411653d0

void __cdecl _dynamic_initializer_for__GClothMaxDeltaTimeTeleportMultiplier__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GClothMaxDeltaTimeTeleportMultiplier,L"p.Cloth.MaxDeltaTimeTeleportMultiplier",
             local_res8,
             L"A multiplier of the MaxPhysicsDelta time at which we will automatically just teleport cloth to its new location\n default: 1.5"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GClothMaxDeltaTimeTeleportMultiplier__);
  return;
}

// `dynamic_initializer_for_'GClothMaxVelocityScale'' @ 141165420

void __cdecl _dynamic_initializer_for__GClothMaxVelocityScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GClothMaxVelocityScale,L"p.Cloth.MaxVelocityScale",local_res8,
             L"The maximum amount of the component induced velocity allowed on all cloths.\nUse 1.0 for fully induced velocity(default), or use 0.0 for no induced velocity, and any other values in between for a reduced induced velocity.\nWhen set to 0.0, it also provides a way to force the clothing to simulate in local space.\n default: 1.0"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GClothMaxVelocityScale__);
  return;
}

// `dynamic_initializer_for_'GRegisterClothingAssetCustomVersion'' @ 141165470

void __cdecl _dynamic_initializer_for__GRegisterClothingAssetCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FClothingAssetCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,2,L"ClothingAssetVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterClothingAssetCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogClothingMeshUtils'' @ 1411654b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogClothingMeshUtils__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogClothingMeshUtils,L"LogClothingMeshUtils",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogClothingMeshUtils__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantClothingSystemRuntimeCommon'' @ 1411654f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantClothingSystemRuntimeCommon__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ClothingSystemRuntimeCommon";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ClothingSystemRuntimeCommon",0x1b);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FClothingSystemRuntimeCommonModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 141165540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1411655d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 141165660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1411656f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 141165780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 141165810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1411658a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 141165930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1411659c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 141165a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClothComputeNormals'' @ 141165ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ClothComputeNormals__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClothComputeNormals == (FThreadSafeStaticStat<FStat_STAT_ClothComputeNormals>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_ClothComputeNormals");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothComputeNormals,*pFVar1,
               L"Compute Clothing Normals","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClothFillContext'' @ 141165b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ClothFillContext__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClothFillContext == (FThreadSafeStaticStat<FStat_STAT_ClothFillContext>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ClothFillContext");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothFillContext,*pFVar1,L"Fill Context",
               "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClothInternalSolve'' @ 141165c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ClothInternalSolve__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClothInternalSolve == (FThreadSafeStaticStat<FStat_STAT_ClothInternalSolve>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ClothInternalSolve");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothInternalSolve,*pFVar1,
               L"Internal Solve","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClothSkinPhysMesh'' @ 141165c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ClothSkinPhysMesh__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClothSkinPhysMesh == (FThreadSafeStaticStat<FStat_STAT_ClothSkinPhysMesh>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ClothSkinPhysMesh");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothSkinPhysMesh,*pFVar1,
               L"Skin Physics Mesh","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClothUpdateCollisions'' @ 141165d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ClothUpdateCollisions__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClothUpdateCollisions ==
      (FThreadSafeStaticStat<FStat_STAT_ClothUpdateCollisions>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ClothUpdateCollisions");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothUpdateCollisions,*pFVar1,
               L"Update Collisions","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h__Script_ClothingSystemRuntimeCommon_836375242'' @ 141165db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h__Script_ClothingSystemRuntimeCommon_836375242__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeCommon",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h__Script_ClothingSystemRuntimeCommon_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h__Script_ClothingSystemRuntimeCommon_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h__Script_ClothingSystemRuntimeCommon_392757824'' @ 141165e00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h__Script_ClothingSystemRuntimeCommon_392757824__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeCommon",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h__Script_ClothingSystemRuntimeCommon_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h__Script_ClothingSystemRuntimeCommon_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h__Script_ClothingSystemRuntimeCommon_1317880728'' @ 141165e50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h__Script_ClothingSystemRuntimeCommon_1317880728__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeCommon",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h__Script_ClothingSystemRuntimeCommon_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h__Script_ClothingSystemRuntimeCommon_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h__Script_ClothingSystemRuntimeCommon_1601414743'' @ 141165ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h__Script_ClothingSystemRuntimeCommon_1601414743__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeCommon",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h__Script_ClothingSystemRuntimeCommon_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothPhysicalMeshData_h__Script_ClothingSystemRuntimeCommon_2896766456'' @ 141165ee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothPhysicalMeshData_h__Script_ClothingSystemRuntimeCommon_2896766456__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeCommon",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothPhysicalMeshData_h__Script_ClothingSystemRuntimeCommon_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h__Script_ClothingSystemRuntimeCommon_4115870207'' @ 141165f20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h__Script_ClothingSystemRuntimeCommon_4115870207__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeCommon",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h__Script_ClothingSystemRuntimeCommon_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h__Script_ClothingSystemRuntimeCommon_2422629571'' @ 141165f60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h__Script_ClothingSystemRuntimeCommon_2422629571__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeCommon",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothingAsset_h__Script_ClothingSystemRuntimeCommon_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h__Script_ClothingSystemRuntimeCommon_1560652997'' @ 141165fa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h__Script_ClothingSystemRuntimeCommon_1560652997__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeCommon",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h__Script_ClothingSystemRuntimeCommon_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h__Script_ClothingSystemRuntimeCommon_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ClothingSystemRuntimeCommon'' @ 141165ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ClothingSystemRuntimeCommon__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xee3da6a8;
  local_res8[0].DeclarationsHash = 0x8f3923f;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
             L"/Script/ClothingSystemRuntimeCommon",
             &Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeCommon,local_res8);
  return;
}

// Z_Construct_UClass_UClothLODDataCommon_Legacy @ 148c09b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothLODDataCommon_Legacy(void)

{
  if (Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.OuterSingleton,
               &Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 148c09bb0

void __cdecl
Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 148c09bc0

void * __cdecl Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothParameterMask_Legacy,&UE::CoreUObject::Private::Construct<FClothParameterMask_Legacy>,&UE::CoreUObject::Private::ConstructForTests<FClothParameterMask_Legacy>,&UE::CoreUObject::Private::Destruct<FClothParameterMask_Legacy>,&UE::CoreUObject::Private::Copy<FClothParameterMask_Legacy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FClothTetherData @ 148c09c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothTetherData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothTetherData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothTetherData.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothTetherData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothTetherData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothTetherData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 148c09c80

void * __cdecl Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothPhysicalMeshData,&UE::CoreUObject::Private::Construct<FClothPhysicalMeshData>,&UE::CoreUObject::Private::ConstructForTests<FClothPhysicalMeshData>,&UE::CoreUObject::Private::Destruct<FClothPhysicalMeshData>,&UE::CoreUObject::Private::Copy<FClothPhysicalMeshData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy @ 148c09f10

UEnum * __cdecl Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy(void)

{
  if (Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.InnerSingleton,
               &Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.InnerSingleton;
}

// Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy @ 148c09f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothConstraintSetup_Legacy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothConstraintSetup_Legacy.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothConstraintSetup_Legacy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothConstraintSetup_Legacy.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon @ 148c09fd0

UPackage * __cdecl Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(void)

{
  if (Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeCommon.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeCommon.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeCommon.OuterSingleton;
}

// EClothingWindMethod_Legacy_StaticEnum @ 148c0a010

UEnum * __cdecl EClothingWindMethod_Legacy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy,
                       (UObject *)pUVar1,L"EClothingWindMethod_Legacy");
  }
  return Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton;
}

// NewStructOps @ 148c0a050

void * __cdecl Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothConstraintSetup_Legacy,&UE::CoreUObject::Private::Construct<FClothConstraintSetup_Legacy>,&UE::CoreUObject::Private::ConstructForTests<FClothConstraintSetup_Legacy>,&UE::CoreUObject::Private::Destruct<FClothConstraintSetup_Legacy>,&UE::CoreUObject::Private::Copy<FClothConstraintSetup_Legacy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseGravityOverride_SetBit @ 148c0a090

void __cdecl
Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  return;
}

// NewStructOps @ 148c0a0a0

void * __cdecl Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothConfig_Legacy,&UE::CoreUObject::Private::Construct<FClothConfig_Legacy>,&UE::CoreUObject::Private::ConstructForTests<FClothConfig_Legacy>,&UE::CoreUObject::Private::Destruct<FClothConfig_Legacy>,&UE::CoreUObject::Private::Copy<FClothConfig_Legacy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148c0a170

void * __cdecl Z_Construct_UScriptStruct_FClothTetherData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothTetherData,&UE::CoreUObject::Private::Construct<FClothTetherData>,&UE::CoreUObject::Private::ConstructForTests<FClothTetherData>,&UE::CoreUObject::Private::Destruct<FClothTetherData>,&UE::CoreUObject::Private::SerializeArchive<FClothTetherData>,&UE::CoreUObject::Private::Copy<FClothTetherData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon @ 148c0a360

UEnum * __cdecl Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon(void)

{
  if (Z_Registration_Info_UEnum_EWeightMapTargetCommon.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWeightMapTargetCommon.InnerSingleton,
               &Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EWeightMapTargetCommon.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPointWeightMap @ 148c0a3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPointWeightMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPointWeightMap.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPointWeightMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FPointWeightMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPointWeightMap.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPointWeightMap.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EWeightMapTargetCommon_StaticEnum @ 148c0a420

UEnum * __cdecl EWeightMapTargetCommon_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWeightMapTargetCommon.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UEnum_EWeightMapTargetCommon.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon,
                       (UObject *)pUVar1,L"EWeightMapTargetCommon");
  }
  return Z_Registration_Info_UEnum_EWeightMapTargetCommon.OuterSingleton;
}

// NewStructOps @ 148c0a480

void * __cdecl Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPointWeightMap,&UE::CoreUObject::Private::Construct<FPointWeightMap>,&UE::CoreUObject::Private::ConstructForTests<FPointWeightMap>,&UE::CoreUObject::Private::Destruct<FPointWeightMap>,&UE::CoreUObject::Private::Copy<FPointWeightMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UClothConfigCommon @ 148c0a930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothConfigCommon(void)

{
  if (Z_Registration_Info_UClass_UClothConfigCommon.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothConfigCommon.OuterSingleton,
               &Z_Construct_UClass_UClothConfigCommon_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothConfigCommon.OuterSingleton;
}

// Z_Construct_UClass_UClothSharedConfigCommon @ 148c0a970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothSharedConfigCommon(void)

{
  if (Z_Registration_Info_UClass_UClothSharedConfigCommon.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothSharedConfigCommon.OuterSingleton,
               &Z_Construct_UClass_UClothSharedConfigCommon_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothSharedConfigCommon.OuterSingleton;
}

// EClothMassMode_StaticEnum @ 148c0a9b0

UEnum * __cdecl EClothMassMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode,
                       (UObject *)pUVar1,L"EClothMassMode");
  }
  return Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton;
}

// Z_Construct_UScriptStruct_FClothPhysicalMeshData @ 148c0af30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothPhysicalMeshData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothPhysicalMeshData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothPhysicalMeshData.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothPhysicalMeshData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothPhysicalMeshData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bUseMultipleInfluences_SetBit @ 148c0afb0

void __cdecl
Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x128) = 1;
  return;
}

// NewProp_bSmoothTransition_SetBit @ 148c0afc0

void __cdecl
Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x130) = 1;
  return;
}

// NewStructOps @ 148c0afd0

void * __cdecl Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothLODDataCommon,&UE::CoreUObject::Private::Construct<FClothLODDataCommon>,&UE::CoreUObject::Private::ConstructForTests<FClothLODDataCommon>,&UE::CoreUObject::Private::Destruct<FClothLODDataCommon>,&UE::CoreUObject::Private::SerializeArchive<FClothLODDataCommon>,&UE::CoreUObject::Private::Copy<FClothLODDataCommon>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UClothingAssetCommon @ 148c0b010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothingAssetCommon(void)

{
  if (Z_Registration_Info_UClass_UClothingAssetCommon.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothingAssetCommon.OuterSingleton,
               &Z_Construct_UClass_UClothingAssetCommon_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothingAssetCommon.OuterSingleton;
}

// Z_Construct_UClass_UClothingAssetCustomData @ 148c0b050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothingAssetCustomData(void)

{
  if (Z_Registration_Info_UClass_UClothingAssetCustomData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothingAssetCustomData.OuterSingleton,
               &Z_Construct_UClass_UClothingAssetCustomData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothingAssetCustomData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FClothLODDataCommon @ 148c0b090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothLODDataCommon(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothLODDataCommon.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothLODDataCommon.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothLODDataCommon.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FClothLODDataCommon.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// operator<<<int,int,float> @ 148c0b4e0

FArchive * __cdecl operator<<<int,int,float>(FArchive *param_1,TTuple<int,int,float> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x4;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
    }
  }
  else {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x8;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// operator<<<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> @ 148c0b600

FArchive * __cdecl
operator<<<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TTuple<int,int,float> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<<int,int,float>
                        (param_1,(TTuple<int,int,float> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pTVar2 = (TTuple<int,int,float> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<TTuple<int,int,float>,int>(pTVar2,1);
              operator<<<int,int,float>(param_1,pTVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 148c0b610

FArchive * __cdecl
operator<<<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar8) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            TArrayPrivateFriend::Serialize<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
            uVar11 = uVar11 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          pTVar9 = (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
          TArrayPrivateFriend::Serialize<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>
                    (param_1,pTVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// ComputeWorldSpaceBoundingBox<double,ClothingMeshUtils::ClothMeshDesc::FClothBvEntry> @ 148c0b740

TAABB<double,3> * __cdecl
Chaos::ComputeWorldSpaceBoundingBox<double,ClothingMeshUtils::ClothMeshDesc::FClothBvEntry>
          (TAABB<double,3> *__return_storage_ptr__,FClothBvEntry *param_1,bool param_2,
          double param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  TAABB<double,3> *pTVar7;
  uint *puVar8;
  TVector<float> *pTVar9;
  TVector<float> *pTVar10;
  TVector<float> *pTVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (param_2) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1833774039789731592>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\BoundingVolumeUtilities.h"
                       ,0xf8,"!bUseVelocity");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TAABB<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  iVar5 = param_1->Index * 3;
  puVar8 = TArrayView<unsigned_int_const_,int>::operator[](&param_1->TmData->Indices,iVar5);
  uVar1 = *puVar8;
  puVar8 = TArrayView<unsigned_int_const_,int>::operator[](&param_1->TmData->Indices,iVar5 + 1);
  uVar2 = *puVar8;
  puVar8 = TArrayView<unsigned_int_const_,int>::operator[](&param_1->TmData->Indices,iVar5 + 2);
  uVar3 = *puVar8;
  pTVar9 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                     (&param_1->TmData->Positions,uVar1);
  pTVar10 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                      (&param_1->TmData->Positions,uVar2);
  pTVar11 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                      (&param_1->TmData->Positions,uVar3);
  dVar14 = (double)(pTVar9->field0_0x0)._s_0.Y;
  dVar12 = (double)(pTVar9->field0_0x0)._s_0.X;
  dVar15 = (double)(pTVar9->field0_0x0)._s_0.Z;
  *(double *)&__return_storage_ptr__->MMin = dVar12;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar14;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar15;
  *(double *)&__return_storage_ptr__->MMax = dVar12;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar14;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar15;
  dVar12 = *(double *)&(__return_storage_ptr__->MMin).field_0x8;
  dVar14 = *(double *)&(__return_storage_ptr__->MMin).field_0x10;
  dVar15 = (double)(pTVar10->field0_0x0)._s_0.Z;
  dVar17 = (double)(pTVar10->field0_0x0)._s_0.X;
  if (dVar15 <= dVar14) {
    dVar14 = dVar15;
  }
  dVar13 = *(double *)&__return_storage_ptr__->MMin;
  if (dVar17 <= *(double *)&__return_storage_ptr__->MMin) {
    dVar13 = dVar17;
  }
  dVar16 = (double)(pTVar10->field0_0x0)._s_0.Y;
  *(double *)&__return_storage_ptr__->MMin = dVar13;
  if (dVar16 <= dVar12) {
    dVar12 = dVar16;
  }
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar12;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar14;
  dVar12 = *(double *)&(__return_storage_ptr__->MMax).field_0x10;
  if (dVar15 <= dVar12) {
    dVar15 = dVar12;
  }
  dVar12 = *(double *)&(__return_storage_ptr__->MMax).field_0x8;
  dVar14 = *(double *)&__return_storage_ptr__->MMax;
  if (*(double *)&__return_storage_ptr__->MMax <= dVar17) {
    dVar14 = dVar17;
  }
  if (dVar12 <= dVar16) {
    dVar12 = dVar16;
  }
  *(double *)&__return_storage_ptr__->MMax = dVar14;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar12;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar15;
  dVar12 = *(double *)&(__return_storage_ptr__->MMin).field_0x8;
  dVar14 = *(double *)&(__return_storage_ptr__->MMin).field_0x10;
  dVar17 = (double)(pTVar11->field0_0x0)._s_0.Y;
  dVar15 = (double)(pTVar11->field0_0x0)._s_0.Z;
  if (dVar17 <= dVar12) {
    dVar12 = dVar17;
  }
  if (dVar15 <= dVar14) {
    dVar14 = dVar15;
  }
  dVar16 = (double)(pTVar11->field0_0x0)._s_0.X;
  dVar13 = *(double *)&__return_storage_ptr__->MMin;
  if (dVar16 <= *(double *)&__return_storage_ptr__->MMin) {
    dVar13 = dVar16;
  }
  *(double *)&__return_storage_ptr__->MMin = dVar13;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar12;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar14;
  dVar12 = *(double *)&(__return_storage_ptr__->MMax).field_0x8;
  dVar14 = *(double *)&(__return_storage_ptr__->MMax).field_0x10;
  if (dVar15 <= dVar14) {
    dVar15 = dVar14;
  }
  if (dVar12 <= dVar17) {
    dVar12 = dVar17;
  }
  dVar14 = *(double *)&__return_storage_ptr__->MMax;
  if (*(double *)&__return_storage_ptr__->MMax <= dVar16) {
    dVar14 = dVar16;
  }
  *(double *)&__return_storage_ptr__->MMax = dVar14;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar12;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar15;
  return __return_storage_ptr__;
}

// ConstructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int> @ 148c0b920

void __cdecl
ConstructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 * 0xc);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 148c0b9d0

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int *param_3,<lambda_1> *param_4)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  LARGE_INTEGER local_res8;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_4170000000000000;
  dVar5 = __real_3e45798ee2308c3a;
  iVar13 = 0;
  uVar15 = (ulonglong)param_2->ArrayNum;
  if (param_2->ArrayNum < param_1->ArrayNum) {
    lVar17 = uVar15 * 4;
    iVar13 = 0;
    do {
      iVar12 = *param_3;
      bVar9 = true;
      if (iVar12 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar12) && (iVar12 <= iVar13)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar2 = param_4->__this->StartSliceTimeStamp;
            if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar8,
                                         SUB84(dVar2,0) & uVar7)) {
              bVar9 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)
                      - dVar2 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar9) break;
          }
        }
      }
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar16 = (param_1->AllocatorInstance).Data + lVar17;
      if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar12 + 1;
      iVar13 = iVar13 + 4;
      uVar15 = (ulonglong)(uVar14 + 1);
      lVar17 = lVar17 + 4;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 4) =
           *(undefined4 *)pFVar16;
    } while ((int)(uVar14 + 1) < param_1->ArrayNum);
  }
  iVar12 = *param_3;
  if (0 < iVar12) {
    if (iVar12 < iVar13) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar12 - iVar13;
    }
  }
  return param_2->ArrayNum == param_1->ArrayNum;
}

// ContinueTimeSliceCopy<TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 148c0bc50

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *param_2,int *param_3,
          <lambda_1> *param_4)

{
  double dVar1;
  TAABBTreeNode<double> *pTVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  TAABBTreeNode<double> *pTVar14;
  int iVar15;
  LARGE_INTEGER local_res8;
  
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar5 = __real_4170000000000000;
  dVar4 = __real_3e45798ee2308c3a;
  iVar15 = 0;
  uVar13 = param_2->ArrayNum;
  iVar11 = 0;
  if ((int)uVar13 < param_1->ArrayNum) {
    do {
      iVar15 = iVar11;
      iVar11 = *param_3;
      bVar8 = true;
      if (iVar11 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar11) && (iVar11 <= iVar15)) break;
        }
        else {
          piVar12 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar12 = *piVar12 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar1 = param_4->__this->StartSliceTimeStamp;
            if (dVar4 < (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar7,
                                         SUB84(dVar1,0) & uVar6)) {
              bVar8 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5)
                      - dVar1 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar8) break;
          }
        }
      }
      uVar10 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      piVar12 = &param_2->ArrayMax;
      pTVar2 = (TAABBTreeNode<double> *)(param_2->AllocatorInstance).Data;
      pTVar14 = (TAABBTreeNode<double> *)
                ((param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x70);
      if (((pTVar2 <= pTVar14) && (pTVar14 < pTVar2 + *piVar12)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      iVar11 = param_2->ArrayNum;
      if (iVar11 == *piVar12) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x870,&param_2->AllocatorInstance,piVar12);
      }
      param_2->ArrayNum = iVar11 + 1;
      TAABBTreeNode<double>::TAABBTreeNode<double>
                ((TAABBTreeNode<double> *)
                 ((param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x70),pTVar14);
      iVar15 = iVar15 + 0x70;
      uVar13 = uVar13 + 1;
      iVar11 = iVar15;
    } while ((int)uVar13 < param_1->ArrayNum);
  }
  iVar11 = *param_3;
  if (0 < iVar11) {
    if (iVar11 < iVar15) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar11 - iVar15;
    }
  }
  return param_2->ArrayNum == param_1->ArrayNum;
}

// ContinueTimeSliceCopy<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 148c0bf10

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *param_2,int *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  LARGE_INTEGER local_res8;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_4170000000000000;
  dVar5 = __real_3e45798ee2308c3a;
  iVar13 = 0;
  uVar15 = (ulonglong)param_2->ArrayNum;
  if (param_2->ArrayNum < param_1->ArrayNum) {
    lVar17 = uVar15 * 8;
    iVar13 = 0;
    do {
      iVar12 = *param_3;
      bVar9 = true;
      if (iVar12 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar12) && (iVar12 <= iVar13)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar2 = param_4->__this->StartSliceTimeStamp;
            if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar8,
                                         SUB84(dVar2,0) & uVar7)) {
              bVar9 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)
                      - dVar2 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar9) break;
          }
        }
      }
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar16 = (param_1->AllocatorInstance).Data + lVar17;
      if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar12 + 1;
      iVar13 = iVar13 + 8;
      uVar15 = (ulonglong)(uVar14 + 1);
      lVar17 = lVar17 + 8;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 8) =
           *(undefined8 *)pFVar16;
    } while ((int)(uVar14 + 1) < param_1->ArrayNum);
  }
  iVar12 = *param_3;
  if (0 < iVar12) {
    if (iVar12 < iVar13) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar12 - iVar13;
    }
  }
  return param_2->ArrayNum == param_1->ArrayNum;
}

// ContinueTimeSliceCopy<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 148c0c190

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *param_2,
          int *param_3,<lambda_1> *param_4)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  LARGE_INTEGER local_res8;
  
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar7 = __real_4170000000000000;
  dVar6 = __real_3e45798ee2308c3a;
  iVar15 = 0;
  uVar16 = (ulonglong)param_2->ArrayNum;
  if (param_2->ArrayNum < param_1->ArrayNum) {
    lVar17 = uVar16 * 0x38;
    iVar15 = 0;
    do {
      iVar12 = *param_3;
      bVar10 = true;
      if (iVar12 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar12) && (iVar12 <= iVar15)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar2 = param_4->__this->StartSliceTimeStamp;
            uVar18 = SUB84(dVar2,0) & uVar8;
            uVar19 = (uint)((ulonglong)dVar2 >> 0x20) & uVar9;
            if (dVar6 <= (double)CONCAT44(uVar19,uVar18) && (double)CONCAT44(uVar19,uVar18) != dVar6
               ) {
              bVar10 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7)
                       - dVar2 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar10) break;
          }
        }
      }
      uVar19 = (uint)uVar16;
      uVar18 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar14 = (param_1->AllocatorInstance).Data + lVar17;
      if (((pFVar3 <= pFVar14) && (pFVar14 < pFVar3 + (longlong)param_2->ArrayMax * 0x38)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      iVar15 = iVar15 + 0x38;
      param_2->ArrayNum = iVar12 + 1;
      uVar16 = (ulonglong)(uVar19 + 1);
      pFVar3 = (param_2->AllocatorInstance).Data;
      lVar17 = lVar17 + 0x38;
      lVar13 = (longlong)iVar12 * 0x38;
      *(undefined4 *)(pFVar3 + lVar13) = *(undefined4 *)pFVar14;
      uVar5 = *(undefined8 *)(pFVar14 + 0x10);
      *(undefined8 *)(pFVar3 + lVar13 + 8) = *(undefined8 *)(pFVar14 + 8);
      *(undefined8 *)(pFVar3 + lVar13 + 8 + 8) = uVar5;
      *(undefined8 *)(pFVar3 + lVar13 + 0x18) = *(undefined8 *)(pFVar14 + 0x18);
      uVar5 = *(undefined8 *)(pFVar14 + 0x28);
      *(undefined8 *)(pFVar3 + lVar13 + 0x20) = *(undefined8 *)(pFVar14 + 0x20);
      *(undefined8 *)(pFVar3 + lVar13 + 0x20 + 8) = uVar5;
      *(undefined8 *)(pFVar3 + lVar13 + 0x30) = *(undefined8 *)(pFVar14 + 0x30);
    } while ((int)(uVar19 + 1) < param_1->ArrayNum);
  }
  iVar12 = *param_3;
  if (0 < iVar12) {
    if (iVar12 < iVar15) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar12 - iVar15;
    }
  }
  return param_2->ArrayNum == param_1->ArrayNum;
}

// ContinueTimeSliceCopy<Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 148c0c440

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *param_1,
          TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *param_2,int *param_3,<lambda_1> *param_4)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  LARGE_INTEGER local_res8;
  
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_4170000000000000;
  dVar7 = __real_3e45798ee2308c3a;
  iVar15 = 0;
  iVar13 = (param_2->Entries).ArrayNum;
  uVar16 = (ulonglong)iVar13;
  if (iVar13 < (param_1->Entries).ArrayNum) {
    lVar17 = uVar16 * 0x18;
    iVar15 = 0;
    do {
      iVar13 = *param_3;
      bVar11 = true;
      if (iVar13 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar13) && (iVar13 <= iVar15)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar2 = param_4->__this->StartSliceTimeStamp;
            uVar18 = SUB84(dVar2,0) & uVar9;
            uVar19 = (uint)((ulonglong)dVar2 >> 0x20) & uVar10;
            if (dVar7 <= (double)CONCAT44(uVar19,uVar18) && (double)CONCAT44(uVar19,uVar18) != dVar7
               ) {
              bVar11 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8)
                       - dVar2 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar11) break;
          }
        }
      }
      uVar19 = (uint)uVar16;
      uVar18 = 0;
      if ((int)uVar19 < (param_1->Entries).ArrayNum) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      pFVar3 = (param_2->Entries).AllocatorInstance.Data;
      pFVar14 = (param_1->Entries).AllocatorInstance.Data + lVar17;
      if (((pFVar3 <= pFVar14) && (pFVar14 < pFVar3 + (longlong)(param_2->Entries).ArrayMax * 0x18))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      iVar13 = (param_2->Entries).ArrayNum;
      piVar1 = &(param_2->Entries).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,(ForAnyElementType *)param_2,piVar1);
      }
      iVar15 = iVar15 + 0x14;
      (param_2->Entries).ArrayNum = iVar13 + 1;
      uVar16 = (ulonglong)(uVar19 + 1);
      uVar6 = *(undefined8 *)(pFVar14 + 8);
      lVar17 = lVar17 + 0x18;
      pFVar4 = (param_2->Entries).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar13 * 0x18;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar14;
      *(undefined8 *)(pFVar3 + 8) = uVar6;
      *(undefined8 *)(pFVar4 + (longlong)iVar13 * 0x18 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
    } while ((int)(uVar19 + 1) < (param_1->Entries).ArrayNum);
  }
  iVar13 = *param_3;
  if (0 < iVar13) {
    if (iVar13 < iVar15) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar13 - iVar15;
    }
  }
  return (param_2->Entries).ArrayNum == (param_1->Entries).ArrayNum;
}

// ContinueTimeSliceCopy<Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,double>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 148c0c6d0

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,double>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,double>_> *param_1,
          TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,double>_> *param_2,int *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  TAABBTreeLeafArray<int,0,double> *pTVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  LARGE_INTEGER local_res8;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_4170000000000000;
  dVar5 = __real_3e45798ee2308c3a;
  iVar15 = 0;
  uVar14 = *(uint *)&param_2->field_0x8;
  iVar12 = 0;
  if ((int)uVar14 < *(int *)&param_1->field_0x8) {
    do {
      iVar15 = iVar12;
      iVar12 = *param_3;
      bVar9 = true;
      if (iVar12 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar12) && (iVar12 <= iVar15)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar3 = param_4->__this->StartSliceTimeStamp;
            if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar8,
                                         SUB84(dVar3,0) & uVar7)) {
              bVar9 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)
                      - dVar3 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar9) break;
          }
        }
      }
      uVar11 = 0;
      if ((int)uVar14 < *(int *)&param_1->field_0x8) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      puVar13 = &param_2->field_0xc;
      pTVar2 = (TAABBTreeLeafArray<int,0,double> *)
               (*(longlong *)param_1 + (longlong)(int)uVar14 * 0x18);
      if (((*(TAABBTreeLeafArray<int,0,double> **)param_2 <= pTVar2) &&
          (pTVar2 < *(TAABBTreeLeafArray<int,0,double> **)param_2 + *(int *)puVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar12 = *(int *)&param_2->field_0x8;
      if (iVar12 == *(int *)puVar13) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_2,(int *)puVar13);
      }
      *(int *)&param_2->field_0x8 = iVar12 + 1;
      TAABBTreeLeafArray<int,0,double>::TAABBTreeLeafArray<int,0,double>
                ((TAABBTreeLeafArray<int,0,double> *)
                 (*(longlong *)param_2 + (longlong)iVar12 * 0x18),pTVar2);
      iVar15 = iVar15 + 0x18;
      uVar14 = uVar14 + 1;
      iVar12 = iVar15;
    } while ((int)uVar14 < *(int *)&param_1->field_0x8);
  }
  iVar12 = *param_3;
  if (0 < iVar12) {
    if (iVar12 < iVar15) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar12 - iVar15;
    }
  }
  return *(int *)&param_2->field_0x8 == *(int *)&param_1->field_0x8;
}

// DefaultConstructItems<TTuple<int,int,float>,int> @ 148c0c990

void __cdecl DefaultConstructItems<TTuple<int,int,float>,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<float,int>,int> @ 148c0c9c0

void __cdecl DefaultConstructItems<TTuple<float,int>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FClothVertBoneData,int> @ 148c0c9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl DefaultConstructItems<FClothVertBoneData,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = _UNK_15060db28;
  uVar1 = ___xmm_ffffffffffffffffffffffffffffffff;
  if (param_2 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 0x1c);
    do {
      *(undefined4 *)((longlong)puVar3 + -0x1c) = 0;
      puVar3[-3] = uVar1;
      puVar3[-2] = uVar2;
      puVar3[-1] = uVar1;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 0x4c);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int> @ 148c0ca30

void __cdecl
DefaultConstructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x98);
    do {
      *(undefined4 *)(puVar1 + -0x13) = 0;
      puVar1[-0x12] = 0x7fefffffffffffff;
      puVar1[-0x11] = 0x7fefffffffffffff;
      puVar1[-0x10] = 0x7fefffffffffffff;
      puVar1[-0xf] = 0xffefffffffffffff;
      puVar1[-0xe] = 0xffefffffffffffff;
      puVar1[-0xd] = 0xffefffffffffffff;
      puVar1[-0xb] = 0;
      puVar1[-2] = 0x7fefffffffffffff;
      puVar1[-1] = 0x7fefffffffffffff;
      *puVar1 = 0x7fefffffffffffff;
      puVar1[1] = 0xffefffffffffffff;
      puVar1[2] = 0xffefffffffffffff;
      puVar1[3] = 0xffefffffffffffff;
      puVar1[5] = 0x7fefffffffffffff;
      puVar1[6] = 0x7fefffffffffffff;
      puVar1[7] = 0x7fefffffffffffff;
      puVar1[8] = 0xffefffffffffffff;
      puVar1[9] = 0xffefffffffffffff;
      puVar1[10] = 0xffefffffffffffff;
      puVar1[-0xc] = 0;
      puVar1 = puVar1 + 0x1f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FClothLODDataCommon,int> @ 148c0cad0

void __cdecl DestructItems<FClothLODDataCommon,int>(FClothLODDataCommon *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->TransitionUpSkinData;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FClothPhysicalMeshData::~FClothPhysicalMeshData
                ((FClothPhysicalMeshData *)((longlong)(pTVar2 + -0x14) + 8));
      pTVar2 = (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 0x15) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int> @ 148c0cb30

void __cdecl
DestructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int>
          (FWorkSnapshot *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Elems;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 0xf) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int> @ 148c0cb70

void __cdecl
DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
          (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DoForSweepIntersectCells<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l42::<lambda_3>_> @ 148c0cbb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::
DoForSweepIntersectCells<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l42::<lambda_3>_>
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          double param_4,double param_5,double param_6,<lambda_3> *param_7)

{
  double dVar1;
  double dVar2;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar3;
  undefined1 *puVar4;
  TArray<Chaos::DirtyGridHashEntry,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 *puVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  double dVar68;
  double dVar69;
  undefined8 in_XMM3_Qb;
  double dVar70;
  undefined1 auVar71 [16];
  uint uVar72;
  double dVar73;
  uint uVar76;
  double dVar74;
  double dVar75;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar84;
  double dVar83;
  double local_1a8;
  double local_1a0;
  longlong local_190;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_140;
  longlong local_128;
  longlong local_118;
  longlong local_f8;
  
  dVar2 = __real_3cb0000000000000;
  dVar45 = __real_7fefffffffffffff;
  uVar81 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar80 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  auVar49._8_4_ = (int)in_XMM3_Qb;
  auVar49._0_8_ = param_4;
  auVar49._12_4_ = (int)((ulonglong)in_XMM3_Qb >> 0x20);
  auVar71._8_8_ = auVar49._8_8_;
  auVar71._0_8_ = param_4 * *(double *)param_3;
  dVar67 = param_4 * *(double *)&param_3->field_0x8;
  uVar77 = SUB84(auVar71._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar78 = (uint)((ulonglong)auVar71._0_8_ >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar73 = (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((__real_3e45798ee0000000 <= (double)CONCAT44(uVar78,uVar77) &&
       (double)CONCAT44(uVar78,uVar77) != __real_3e45798ee0000000) ||
     (__real_3e45798ee0000000 < dVar73)) {
    uVar80 = (uint)__xmm_80000000000000008000000000000000;
    uVar81 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (dVar73 <= (double)CONCAT44(uVar78,uVar77)) {
      dVar47 = *(double *)param_2;
      lVar35 = 1;
      dVar68 = *(double *)&param_2->field_0x8;
      dVar1 = *(double *)&param_1->field_0x8;
      pTVar3 = param_7->__this;
      pTVar5 = param_7->HashEntryForOverlappedCells;
      dVar63 = *(double *)param_1;
      auVar51._0_8_ = dVar47 * param_6;
      auVar51._8_8_ = 0;
      bVar25 = (double)CONCAT44(uVar78,uVar77) != __real_3e45798ee0000000;
      bVar7 = __real_3e45798ee0000000 <= (double)CONCAT44(uVar78,uVar77);
      auVar50._8_8_ = 0;
      auVar50._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar51._0_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(auVar51._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + auVar51._0_8_;
      auVar49 = roundpd(auVar51,auVar50,1);
      lVar42 = (longlong)auVar49._0_8_;
      dVar70 = dVar68 * param_6;
      auVar52._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar70 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar70,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar70;
      auVar52._8_8_ = 0;
      auVar49 = roundpd(auVar49,auVar52,1);
      lVar44 = (longlong)auVar49._0_8_;
      dVar70 = (double)lVar44 * param_5;
      dVar46 = dVar47 - (double)lVar42 * param_5;
      bVar24 = dVar73 <= __real_3e45798ee0000000;
      if (bVar7 && bVar25) {
        lVar35 = -1;
        local_f8 = -1;
        if (0.0 <= auVar71._0_8_) {
          local_f8 = 1;
        }
        if (0.0 <= dVar67) {
          lVar35 = 1;
        }
      }
      else {
        local_f8 = 1;
      }
      dVar73 = (double)local_f8;
      dVar23 = __real_3ff0000000000000;
      if (!bVar24) {
        dVar23 = (dVar73 * auVar71._0_8_) / dVar67;
      }
      uVar72 = SUB84(dVar63,0);
      uVar76 = (uint)((ulonglong)dVar63 >> 0x20);
      uVar82 = uVar72 ^ uVar80;
      uVar84 = uVar76 ^ uVar81;
      dVar69 = (double)CONCAT44(uVar84,uVar82);
      uVar77 = uVar82;
      uVar78 = uVar84;
      if (-1 < local_f8) {
        uVar77 = uVar72;
        uVar78 = uVar76;
      }
      dVar74 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar81,SUB84(dVar1,0) ^ uVar80);
      dVar75 = dVar74;
      if (-1 < lVar35) {
        dVar75 = dVar1;
      }
      dVar83 = dVar69;
      if (local_f8 < 0) {
        dVar83 = dVar63;
      }
      dVar83 = dVar83 + dVar46;
      local_1a0 = dVar1;
      if (-1 < lVar35) {
        local_1a0 = dVar74;
      }
      local_1a0 = local_1a0 + (dVar68 - dVar70);
      if (-1 < local_f8) {
        dVar69 = dVar63;
      }
      dVar63 = ((double)lVar42 * param_5 + dVar83) * param_6;
      auVar53._0_8_ = (dVar69 + dVar46) * param_6;
      auVar53._8_8_ = 0;
      dVar47 = (dVar47 + auVar71._0_8_ + (double)CONCAT44(uVar78,uVar77)) * param_6;
      dVar68 = (dVar67 + dVar68 + dVar75) * param_6;
      auVar15._8_8_ = 0;
      auVar15._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar53._0_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(auVar53._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + auVar53._0_8_;
      auVar49 = roundpd(auVar53,auVar15,1);
      auVar54._0_8_ = (double)lVar35;
      auVar54._8_8_ = 0;
      auVar16._8_8_ = 0;
      auVar16._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar63 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar63,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar63;
      auVar50 = roundpd(auVar54,auVar16,1);
      lVar38 = (longlong)auVar50._0_8_;
      local_1a8 = (dVar1 + dVar1) * auVar54._0_8_ + local_1a0;
      dVar67 = (local_1a8 + dVar70) * param_6;
      auVar17._8_8_ = 0;
      auVar17._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar67;
      auVar50 = roundpd(auVar50,auVar17,1);
      dVar67 = (local_1a0 + dVar70) * param_6;
      lVar37 = (longlong)auVar50._0_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar67;
      auVar50 = roundpd(auVar50,auVar18,1);
      lVar29 = (longlong)auVar50._0_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar47,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar47;
      auVar50 = roundpd(auVar50,auVar19,1);
      auVar55._8_8_ = 0;
      auVar55._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar68 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar68,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar68;
      auVar51 = roundpd(auVar55,auVar55,1);
      lVar33 = (longlong)auVar51._0_8_;
      if ((!bVar7 || !bVar25) && (lVar33 < lVar37)) {
        lVar33 = lVar37;
      }
      lVar41 = lVar38 - lVar42;
      local_140 = lVar38 * local_f8;
      lVar28 = lVar37 * lVar35;
      local_158 = local_f8 * lVar41;
      lVar39 = lVar38;
      dVar67 = dVar83;
      uVar80 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar81 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_190 = lVar37;
      local_168 = lVar38;
      local_160 = lVar41;
      local_128 = lVar28;
      local_118 = lVar29;
      do {
        if (((lVar28 < lVar33 * lVar35) && (!bVar24)) &&
           (dVar47 = ((double)(longlong)(((ulonglong)(0 < lVar35) - lVar44) + lVar37) * param_5 -
                     local_1a8) * dVar23,
           dVar47 < ((double)(longlong)(((ulonglong)(0 < local_f8) - lVar42) + lVar39) * param_5 -
                    dVar83) * dVar73)) {
          lVar37 = lVar37 + lVar35;
          lVar28 = lVar28 + lVar35 * lVar35;
          local_1a8 = local_1a8 + dVar47 / dVar23;
          dVar83 = dVar83 + dVar47 / dVar73;
          local_190 = lVar37;
          local_128 = lVar28;
        }
        lVar34 = lVar29 * lVar35;
        lVar40 = lVar29;
        if (lVar34 - lVar28 == 0 || lVar34 < lVar28) {
          do {
            dVar47 = (double)lVar39 * param_5 * pTVar3->DirtyElementGridCellSizeInv;
            auVar65._0_8_ = (double)lVar29 * param_5 * pTVar3->DirtyElementGridCellSizeInv;
            auVar65._8_8_ = 0;
            auVar56._8_8_ = 0;
            auVar56._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) & uVar81,
                                  SUB84(dVar47,0) & uVar80) * dVar2 + dVar47;
            auVar71 = roundpd(auVar71,auVar56,1);
            uVar77 = (uint)(longlong)auVar71._0_8_ & 0xffff;
            uVar77 = (uVar77 << 8 ^ uVar77) & 0xff00ff;
            uVar77 = (uVar77 << 4 ^ uVar77) & 0xf0f0f0f;
            auVar20._8_8_ = 0;
            auVar20._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)auVar65._0_8_ >> 0x20) & uVar81,
                                  SUB84(auVar65._0_8_,0) & uVar80) * dVar2 + auVar65._0_8_;
            auVar51 = roundpd(auVar65,auVar20,1);
            uVar78 = (uVar77 * 4 ^ uVar77) & 0x33333333;
            uVar77 = (uint)(longlong)auVar51._0_8_ & 0xffff;
            uVar77 = (uVar77 << 8 ^ uVar77) & 0xff00ff;
            uVar77 = (uVar77 << 4 ^ uVar77) & 0xf0f0f0f;
            uVar78 = uVar78 * 2 ^ uVar78;
            uVar77 = (uVar77 * 4 ^ uVar77) & 0x33333333;
            uVar78 = ((uVar77 * 2 ^ uVar77) * 2 ^ uVar78) & 0xaaaaaaaa ^ uVar78;
            if (*(int *)&(pTVar3->CellHashToFlatArray).field_0x8 !=
                *(int *)&(pTVar3->CellHashToFlatArray).field_0x34) {
              puVar4 = *(undefined1 **)&(pTVar3->CellHashToFlatArray).field_0x40;
              puVar30 = &(pTVar3->CellHashToFlatArray).field_0x38;
              if (puVar4 != (undefined1 *)0x0) {
                puVar30 = puVar4;
              }
              iVar27 = *(int *)(puVar30 +
                               (ulonglong)
                               (*(int *)&(pTVar3->CellHashToFlatArray).field_0x48 - 1U & uVar78) * 4
                               );
              if (iVar27 != -1) {
                do {
                  lVar38 = *(longlong *)&pTVar3->CellHashToFlatArray + (longlong)iVar27 * 0x14;
                  if (*(uint *)(*(longlong *)&pTVar3->CellHashToFlatArray + (longlong)iVar27 * 0x14)
                      == uVar78) {
                    pFVar31 = (FScriptContainerElement *)(lVar38 + 4);
                    if (lVar38 == 0) {
                      pFVar31 = (FScriptContainerElement *)0x0;
                    }
                    if (pFVar31 != (FScriptContainerElement *)0x0) {
                      pFVar6 = (pTVar5->AllocatorInstance).Data;
                      if (((pFVar6 <= pFVar31) &&
                          (pFVar31 < pFVar6 + (longlong)pTVar5->ArrayMax * 8)) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar26)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar27 = pTVar5->ArrayNum;
                      if (iVar27 == pTVar5->ArrayMax) {
                        iVar27 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x408,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                      }
                      uVar81 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                      uVar80 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                      pTVar5->ArrayNum = iVar27 + 1;
                      pFVar6 = (pTVar5->AllocatorInstance).Data;
                      *(undefined4 *)(pFVar6 + (longlong)iVar27 * 8) = *(undefined4 *)pFVar31;
                      *(undefined4 *)(pFVar6 + (longlong)iVar27 * 8 + 4) =
                           *(undefined4 *)(pFVar31 + 4);
                    }
                    break;
                  }
                  iVar27 = *(int *)(lVar38 + 0xc);
                } while (iVar27 != -1);
              }
            }
            lVar29 = lVar29 + lVar35;
            lVar34 = lVar34 + lVar35 * lVar35;
            lVar28 = local_128;
            lVar40 = local_118;
            lVar38 = local_168;
            lVar37 = local_190;
            lVar41 = local_160;
          } while (lVar34 <= local_128);
        }
        if ((lVar37 == lVar33) || (bVar24)) {
          dVar47 = dVar73 * param_5;
        }
        else {
          dVar68 = ((double)(longlong)(((ulonglong)(0 < local_f8) - lVar42) + lVar39) * param_5 -
                   dVar83) * dVar73;
          dVar47 = dVar68 / dVar73;
          local_1a8 = local_1a8 + dVar68 / dVar23;
        }
        dVar83 = dVar83 + dVar47;
        lVar29 = lVar40;
        if (lVar38 != (longlong)auVar50._0_8_) {
          if (local_158 < (longlong)auVar49._0_8_ * local_f8) {
            dVar67 = dVar67 + dVar73 * param_5;
          }
          else {
            if (lVar41 == (longlong)auVar49._0_8_) {
              uVar77 = uVar82;
              uVar78 = uVar84;
              if (-1 < local_f8) {
                uVar77 = uVar72;
                uVar78 = uVar76;
              }
              dVar67 = (double)CONCAT44(uVar78,uVar77) + dVar46;
            }
            dVar47 = dVar45;
            if (bVar7 && bVar25) {
              dVar47 = ((double)(longlong)(((ulonglong)(0 < local_f8) - lVar42) + lVar38) * param_5
                       - dVar67) * dVar73;
            }
            dVar68 = dVar45;
            if (!bVar24) {
              dVar68 = ((double)(longlong)(((ulonglong)(0 < lVar35) - lVar44) + lVar40) * param_5 -
                       local_1a0) * dVar23;
            }
            lVar29 = lVar40 + lVar35;
            if (dVar47 <= dVar68) {
              lVar29 = lVar40;
            }
            if (bVar7 && bVar25) {
              dVar67 = dVar67 + dVar47 / dVar73;
            }
            local_118 = lVar29;
            if (!bVar24) {
              local_1a0 = local_1a0 + dVar47 / dVar23;
            }
          }
          lVar38 = lVar38 + local_f8;
          lVar41 = lVar41 + local_f8;
          local_158 = local_158 + local_f8 * local_f8;
          local_168 = lVar38;
          local_160 = lVar41;
        }
        lVar39 = lVar39 + local_f8;
        local_140 = local_140 + local_f8 * local_f8;
      } while ((lVar37 != lVar33) || (local_140 <= (longlong)auVar50._0_8_ * local_f8));
    }
    else {
      lVar35 = 1;
      dVar47 = *(double *)&param_1->field_0x8;
      uVar76 = (uint)((ulonglong)dVar47 >> 0x20);
      dVar2 = *(double *)param_1;
      uVar72 = (uint)((ulonglong)dVar2 >> 0x20);
      auVar57._0_8_ = *(double *)&param_2->field_0x8 * param_6;
      auVar57._8_8_ = 0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar57._0_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(auVar57._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + auVar57._0_8_;
      auVar49 = roundpd(auVar57,auVar21,1);
      lVar42 = (longlong)auVar49._0_8_;
      dVar68 = *(double *)param_2 * param_6;
      auVar66._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar68 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar68,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar68;
      auVar66._8_8_ = 0;
      auVar49 = roundpd(auVar49,auVar66,1);
      lVar44 = (longlong)auVar49._0_8_;
      bVar24 = dVar73 <= __real_3e45798ee0000000;
      bVar25 = (double)CONCAT44(uVar78,uVar77) == __real_3e45798ee0000000;
      bVar7 = (double)CONCAT44(uVar78,uVar77) < __real_3e45798ee0000000;
      dVar68 = (double)lVar44 * param_5;
      dVar73 = *(double *)&param_2->field_0x8 - (double)lVar42 * param_5;
      if (bVar24) {
        lVar29 = 1;
      }
      else {
        lVar35 = -1;
        lVar29 = -1;
        if (0.0 <= dVar67) {
          lVar29 = 1;
        }
        if (0.0 <= auVar71._0_8_) {
          lVar35 = 1;
        }
      }
      dVar1 = (double)lVar29;
      dVar63 = __real_3ff0000000000000;
      if (!bVar7 && !bVar25) {
        dVar63 = (dVar1 * dVar67) / auVar71._0_8_;
      }
      uVar82 = SUB84(dVar47,0) ^ uVar80;
      uVar84 = uVar76 ^ uVar81;
      uVar77 = uVar82;
      uVar78 = uVar84;
      if (-1 < lVar29) {
        uVar77 = SUB84(dVar47,0);
        uVar78 = uVar76;
      }
      uVar80 = SUB84(dVar2,0) ^ uVar80;
      uVar81 = uVar72 ^ uVar81;
      dVar70 = dVar2;
      if (lVar35 < 0) {
        dVar70 = (double)CONCAT44(uVar81,uVar80);
      }
      uVar76 = uVar82;
      uVar79 = uVar84;
      if (lVar29 < 0) {
        dVar47 = *(double *)&param_1->field_0x8;
        uVar76 = SUB84(dVar47,0);
        uVar79 = (uint)((ulonglong)dVar47 >> 0x20);
      }
      dVar46 = (double)CONCAT44(uVar79,uVar76) + dVar73;
      if (lVar35 < 0) {
        uVar80 = SUB84(dVar2,0);
        uVar81 = uVar72;
      }
      dVar23 = (double)CONCAT44(uVar81,uVar80) + (*(double *)param_2 - dVar68);
      if (lVar29 < 0) {
        dVar47 = (double)CONCAT44(uVar84,uVar82);
      }
      dVar47 = (dVar47 + dVar73) * param_6;
      dVar69 = (dVar67 + *(double *)&param_2->field_0x8 + (double)CONCAT44(uVar78,uVar77)) * param_6
      ;
      dVar70 = (auVar71._0_8_ + *(double *)param_2 + dVar70) * param_6;
      auVar58._8_8_ = 0;
      auVar58._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar47,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar47;
      auVar71 = roundpd(auVar58,auVar58,1);
      dVar2 = (dVar2 + dVar2) * (double)lVar35 + dVar23;
      dVar67 = (dVar46 + (double)lVar42 * param_5) * param_6;
      dVar47 = (dVar2 + dVar68) * param_6;
      auVar59._8_8_ = 0;
      auVar59._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar67;
      auVar49 = roundpd(auVar59,auVar59,1);
      lVar37 = (longlong)auVar49._0_8_;
      auVar22._8_8_ = 0;
      auVar22._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar47,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar47;
      auVar49 = roundpd(auVar49,auVar22,1);
      dVar67 = (dVar23 + dVar68) * param_6;
      lVar28 = (longlong)auVar49._0_8_;
      auVar60._8_8_ = 0;
      auVar60._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar67;
      auVar49 = roundpd(auVar60,auVar60,1);
      lVar33 = (longlong)auVar49._0_8_;
      auVar61._8_8_ = 0;
      auVar61._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar69 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar69,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar69;
      auVar49 = roundpd(auVar61,auVar61,1);
      auVar62._8_8_ = 0;
      auVar62._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar70 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar70,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar70;
      auVar50 = roundpd(auVar62,auVar62,1);
      lVar38 = (longlong)auVar50._0_8_;
      if ((bVar24) && (lVar38 < lVar28)) {
        lVar38 = lVar28;
      }
      lVar41 = lVar37 - lVar42;
      lVar34 = lVar37 * lVar29;
      lVar40 = lVar29 * lVar41;
      lVar43 = lVar28 * lVar35;
      lVar39 = lVar37;
      dVar67 = dVar46;
      local_178 = lVar40;
      local_170 = lVar41;
      local_168 = lVar37;
      do {
        if (((lVar43 < lVar38 * lVar35) && (!bVar7 && !bVar25)) &&
           (dVar47 = ((double)(longlong)(((ulonglong)(0 < lVar35) - lVar44) + lVar28) * param_5 -
                     dVar2) * dVar63,
           dVar47 < ((double)(longlong)(((ulonglong)(0 < lVar29) - lVar42) + lVar37) * param_5 -
                    dVar46) * dVar1)) {
          lVar28 = lVar28 + lVar35;
          lVar43 = lVar43 + lVar35 * lVar35;
          dVar46 = dVar46 + dVar47 / dVar1;
          dVar2 = dVar2 + dVar47 / dVar63;
        }
        lVar32 = lVar33 * lVar35;
        if (lVar32 - lVar43 == 0 || lVar32 < lVar43) {
          lVar36 = lVar33;
          do {
            `Chaos::
            TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            ::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l42::
            <lambda_3>::operator()(param_7,(double)lVar36 * param_5,(double)lVar37 * param_5);
            lVar36 = lVar36 + lVar35;
            lVar32 = lVar32 + lVar35 * lVar35;
            lVar39 = local_168;
            lVar41 = local_170;
            lVar40 = local_178;
          } while (lVar32 <= lVar43);
        }
        if ((lVar28 == lVar38) || (bVar7 || bVar25)) {
          dVar47 = dVar1 * param_5;
        }
        else {
          dVar68 = ((double)(longlong)(((ulonglong)(0 < lVar29) - lVar42) + lVar37) * param_5 -
                   dVar46) * dVar1;
          dVar47 = dVar68 / dVar1;
          dVar2 = dVar2 + dVar68 / dVar63;
        }
        dVar46 = dVar46 + dVar47;
        if (lVar39 != (longlong)auVar49._0_8_) {
          if (lVar40 < (longlong)auVar71._0_8_ * lVar29) {
            dVar67 = dVar67 + dVar1 * param_5;
            lVar32 = lVar33;
          }
          else {
            if (lVar41 == (longlong)auVar71._0_8_) {
              uVar80 = uVar82;
              uVar81 = uVar84;
              if (-1 < lVar29) {
                uVar80 = (uint)*(undefined8 *)&param_1->field_0x8;
                uVar81 = (uint)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20);
              }
              dVar67 = (double)CONCAT44(uVar81,uVar80) + dVar73;
            }
            dVar47 = dVar45;
            if (!bVar24) {
              dVar47 = ((double)(longlong)(((ulonglong)(0 < lVar29) - lVar42) + lVar39) * param_5 -
                       dVar67) * dVar1;
            }
            dVar68 = dVar45;
            if (!bVar7 && !bVar25) {
              dVar68 = ((double)(longlong)(((ulonglong)(0 < lVar35) - lVar44) + lVar33) * param_5 -
                       dVar23) * dVar63;
            }
            lVar32 = lVar33 + lVar35;
            if (dVar47 <= dVar68) {
              lVar32 = lVar33;
            }
            if (!bVar24) {
              dVar67 = dVar67 + dVar47 / dVar1;
            }
            if (!bVar7 && !bVar25) {
              dVar23 = dVar23 + dVar47 / dVar63;
            }
          }
          lVar39 = lVar39 + lVar29;
          lVar41 = lVar41 + lVar29;
          lVar40 = lVar40 + lVar29 * lVar29;
          lVar33 = lVar32;
          local_178 = lVar40;
          local_170 = lVar41;
          local_168 = lVar39;
        }
        lVar37 = lVar37 + lVar29;
        lVar34 = lVar34 + lVar29 * lVar29;
      } while ((lVar28 != lVar38) || (lVar34 <= lVar29 * (longlong)auVar49._0_8_));
    }
  }
  else {
    auVar48._0_8_ = (*(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8) * param_6;
    auVar48._8_8_ = 0;
    dVar73 = (*(double *)&param_2->field_0x8 + *(double *)&param_1->field_0x8) * param_6;
    dVar67 = (*(double *)param_2 + *(double *)param_1) * param_6;
    dVar45 = (*(double *)param_2 - *(double *)param_1) * param_6;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (double)CONCAT44((uint)((ulonglong)auVar48._0_8_ >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(auVar48._0_8_,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                   __real_3cb0000000000000 + auVar48._0_8_;
    auVar49 = roundpd(auVar48,auVar9,1);
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
         __real_3cb0000000000000 + dVar67;
    auVar50 = roundpd(auVar49,auVar10,1);
    auVar11._8_8_ = 0;
    auVar11._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
         __real_3cb0000000000000 + dVar73;
    auVar51 = roundpd(auVar50,auVar11,1);
    auVar12._8_8_ = 0;
    auVar12._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar45,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
         __real_3cb0000000000000 + dVar45;
    auVar52 = roundpd(auVar51,auVar12,1);
    for (lVar44 = (longlong)auVar52._0_8_; lVar44 <= (longlong)auVar50._0_8_; lVar44 = lVar44 + 1) {
      if ((longlong)auVar49._0_8_ <= (longlong)auVar51._0_8_) {
        lVar35 = (longlong)auVar49._0_8_;
        do {
          pTVar3 = param_7->__this;
          dVar45 = pTVar3->DirtyElementGridCellSizeInv * (double)lVar44 * param_5;
          auVar64._0_8_ = (double)lVar35 * param_5 * pTVar3->DirtyElementGridCellSizeInv;
          auVar64._8_8_ = 0;
          auVar13._8_8_ = 0;
          auVar13._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar81,SUB84(dVar45,0) & uVar80)
               * dVar2 + dVar45;
          auVar71 = roundpd(auVar71,auVar13,1);
          uVar77 = (uint)(longlong)auVar71._0_8_ & 0xffff;
          uVar77 = (uVar77 << 8 ^ uVar77) & 0xff00ff;
          uVar77 = (uVar77 << 4 ^ uVar77) & 0xf0f0f0f;
          auVar14._8_8_ = 0;
          auVar14._0_8_ =
               (double)CONCAT44((uint)((ulonglong)auVar64._0_8_ >> 0x20) & uVar81,
                                SUB84(auVar64._0_8_,0) & uVar80) * dVar2 + auVar64._0_8_;
          auVar52 = roundpd(auVar64,auVar14,1);
          uVar78 = (uVar77 * 4 ^ uVar77) & 0x33333333;
          uVar77 = (uint)(longlong)auVar52._0_8_ & 0xffff;
          uVar77 = (uVar77 << 8 ^ uVar77) & 0xff00ff;
          uVar77 = (uVar77 << 4 ^ uVar77) & 0xf0f0f0f;
          uVar78 = uVar78 * 2 ^ uVar78;
          uVar77 = (uVar77 * 4 ^ uVar77) & 0x33333333;
          uVar78 = ((uVar77 * 2 ^ uVar77) * 2 ^ uVar78) & 0xaaaaaaaa ^ uVar78;
          if (*(int *)&(pTVar3->CellHashToFlatArray).field_0x8 !=
              *(int *)&(pTVar3->CellHashToFlatArray).field_0x34) {
            puVar4 = *(undefined1 **)&(pTVar3->CellHashToFlatArray).field_0x40;
            puVar30 = &(pTVar3->CellHashToFlatArray).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar30 = puVar4;
            }
            iVar27 = *(int *)(puVar30 +
                             (ulonglong)
                             (*(int *)&(pTVar3->CellHashToFlatArray).field_0x48 - 1U & uVar78) * 4);
            if (iVar27 != -1) {
              do {
                lVar42 = *(longlong *)&pTVar3->CellHashToFlatArray + (longlong)iVar27 * 0x14;
                if (*(uint *)(*(longlong *)&pTVar3->CellHashToFlatArray + (longlong)iVar27 * 0x14)
                    == uVar78) {
                  pFVar31 = (FScriptContainerElement *)(lVar42 + 4);
                  if (lVar42 == 0) {
                    pFVar31 = (FScriptContainerElement *)0x0;
                  }
                  if (pFVar31 != (FScriptContainerElement *)0x0) {
                    pTVar5 = param_7->HashEntryForOverlappedCells;
                    pFVar6 = (pTVar5->AllocatorInstance).Data;
                    if (((pFVar6 <= pFVar31) && (pFVar31 < pFVar6 + (longlong)pTVar5->ArrayMax * 8))
                       && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar25)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar27 = pTVar5->ArrayNum;
                    if (iVar27 == pTVar5->ArrayMax) {
                      iVar27 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x408,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                    }
                    pTVar5->ArrayNum = iVar27 + 1;
                    pFVar6 = (pTVar5->AllocatorInstance).Data;
                    *(undefined4 *)(pFVar6 + (longlong)iVar27 * 8) = *(undefined4 *)pFVar31;
                    *(undefined4 *)(pFVar6 + (longlong)iVar27 * 8 + 4) =
                         *(undefined4 *)(pFVar31 + 4);
                  }
                  break;
                }
                iVar27 = *(int *)(lVar42 + 0xc);
              } while (iVar27 != -1);
            }
          }
          lVar35 = lVar35 + 1;
        } while (lVar35 <= (longlong)auVar51._0_8_);
      }
    }
  }
  return;
}

// DuplicateObject<UClothSharedConfigCommon> @ 148c0df40

UClothSharedConfigCommon * __cdecl
DuplicateObject<UClothSharedConfigCommon>
          (UClothSharedConfigCommon *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = UClothSharedConfigCommon::StaticClass();
  pUVar2 = DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return (UClothSharedConfigCommon *)pUVar2;
}

// GetNBestTrianglesBaseIndices<5> @ 148c10c00

TStaticArray<TTuple<int,float>,5,4294967295> * __cdecl
ClothingMeshUtils::`anonymous_namespace'::GetNBestTrianglesBaseIndices<5>
          (TStaticArray<TTuple<int,float>,5,4294967295> *__return_storage_ptr__,
          ClothMeshDesc *param_1,TVector<double> *param_2)

{
  undefined1 *puVar1;
  TTuple<int,float> TVar2;
  code *pcVar3;
  int iVar4;
  TTuple<int,float> TVar5;
  TTuple<int,float> TVar6;
  bool bVar7;
  uint uVar8;
  TStaticArray<TTuple<int,float>,5,4294967295> *pTVar9;
  ForAnyElementType FVar10;
  TTuple<int,float> *pTVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  undefined8 local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  ClothMeshDesc::FindCandidateTriangles(param_1,local_60,param_2,__real_38d1b717);
  uVar8 = (param_1->FilteredTriangles).ArrayNum;
  uVar15 = (uint)local_60[0]._8_8_;
  uVar19 = uVar15;
  if (uVar15 < 5) {
    uVar19 = uVar8;
    if ((int)uVar8 < 1) {
      uVar19 = (param_1->Indices).ArrayNum / 3;
    }
    if (uVar19 < 5) {
      uVar13 = 0;
      __return_storage_ptr__->Elements[0] = (TTuple<int,float>)0x0;
      uVar14 = 0;
      __return_storage_ptr__->Elements[1] = (TTuple<int,float>)0x0;
      __return_storage_ptr__->Elements[2] = (TTuple<int,float>)0x0;
      __return_storage_ptr__->Elements[3] = (TTuple<int,float>)0x0;
      __return_storage_ptr__->Elements[4] = (TTuple<int,float>)0x0;
      uVar15 = uVar14;
      if (0 < (int)uVar19) {
        uVar20 = uVar13;
        pTVar11 = __return_storage_ptr__->Elements;
        if ((int)uVar8 < 1) {
          if (0 < (int)uVar19) {
            do {
              iVar18 = (int)uVar13;
              fVar21 = ClothMeshDesc::DistanceToTriangle(param_1,param_2,iVar18);
              uVar13 = (ulonglong)(iVar18 + 3);
              TVar2._4_4_ = fVar21;
              TVar2._0_4_ = iVar18;
              __return_storage_ptr__->Elements[uVar20] = TVar2;
              uVar20 = uVar20 + 1;
              uVar15 = uVar19;
            } while ((longlong)uVar20 < (longlong)(int)uVar19);
          }
        }
        else {
          do {
            uVar15 = (uint)uVar13;
            uVar8 = uVar14;
            if ((int)uVar15 < (param_1->FilteredTriangles).ArrayNum) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
              return pTVar9;
            }
            iVar18 = *(int *)((param_1->FilteredTriangles).AllocatorInstance.Data + uVar20) * 3;
            fVar21 = ClothMeshDesc::DistanceToTriangle(param_1,param_2,iVar18);
            uVar15 = uVar15 + 1;
            uVar13 = (ulonglong)uVar15;
            TVar5._4_4_ = fVar21;
            TVar5._0_4_ = iVar18;
            *pTVar11 = TVar5;
            uVar20 = uVar20 + 4;
            pTVar11 = pTVar11 + 1;
          } while ((int)uVar15 < (int)uVar19);
          if (4 < uVar15) goto LAB_148c113f6;
        }
      }
      uVar13 = (ulonglong)(5 - uVar15);
      pTVar11 = __return_storage_ptr__->Elements + (int)uVar15;
      do {
        *pTVar11 = (TTuple<int,float>)0xffffffff;
        pTVar11 = pTVar11 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      goto LAB_148c113f6;
    }
  }
  __return_storage_ptr__->Elements[0] = (TTuple<int,float>)0x0;
  __return_storage_ptr__->Elements[1] = (TTuple<int,float>)0x0;
  __return_storage_ptr__->Elements[2] = (TTuple<int,float>)0x0;
  __return_storage_ptr__->Elements[3] = (TTuple<int,float>)0x0;
  __return_storage_ptr__->Elements[4] = (TTuple<int,float>)0x0;
  if (uVar15 < 5) {
    uVar15 = 0;
    if (0 < (int)uVar8) {
      if (((param_1->FilteredTriangles).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)(param_1->FilteredTriangles).AllocatorInstance.Data;
    }
  }
  else {
    if (((int)uVar15 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
      return pTVar9;
    }
    uVar15 = *(uint *)local_60[0].AllocatorInstance.Data;
  }
  local_res10._4_4_ = ClothMeshDesc::DistanceToTriangle(param_1,param_2,uVar15 * 3);
  local_res10._0_4_ = uVar15 * 3;
  __return_storage_ptr__->Elements[0] = local_res10;
  if ((uint)local_60[0]._8_8_ < 5) {
    if ((int)uVar8 < 1) {
      uVar15 = 1;
    }
    else {
      if (((param_1->FilteredTriangles).ArrayNum < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)((param_1->FilteredTriangles).AllocatorInstance.Data + 4);
    }
  }
  else {
    if (((int)(uint)local_60[0]._8_8_ < 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
      return pTVar9;
    }
    uVar15 = *(uint *)(local_60[0].AllocatorInstance.Data + 4);
  }
  local_res10._4_4_ = ClothMeshDesc::DistanceToTriangle(param_1,param_2,uVar15 * 3);
  local_res10._0_4_ = uVar15 * 3;
  __return_storage_ptr__->Elements[1] = local_res10;
  if ((uint)local_60[0]._8_8_ < 5) {
    if ((int)uVar8 < 1) {
      uVar15 = 2;
    }
    else {
      if (((param_1->FilteredTriangles).ArrayNum < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)((param_1->FilteredTriangles).AllocatorInstance.Data + 8);
    }
  }
  else {
    if (((int)(uint)local_60[0]._8_8_ < 3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
      return pTVar9;
    }
    uVar15 = *(uint *)(local_60[0].AllocatorInstance.Data + 8);
  }
  local_res10._4_4_ = ClothMeshDesc::DistanceToTriangle(param_1,param_2,uVar15 * 3);
  local_res10._0_4_ = uVar15 * 3;
  __return_storage_ptr__->Elements[2] = local_res10;
  if ((uint)local_60[0]._8_8_ < 5) {
    if ((int)uVar8 < 1) {
      uVar15 = 3;
    }
    else {
      if (((param_1->FilteredTriangles).ArrayNum < 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)((param_1->FilteredTriangles).AllocatorInstance.Data + 0xc);
    }
  }
  else {
    if (((int)(uint)local_60[0]._8_8_ < 4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
      return pTVar9;
    }
    uVar15 = *(uint *)(local_60[0].AllocatorInstance.Data + 0xc);
  }
  local_res10._4_4_ = ClothMeshDesc::DistanceToTriangle(param_1,param_2,uVar15 * 3);
  local_res10._0_4_ = uVar15 * 3;
  __return_storage_ptr__->Elements[3] = local_res10;
  if ((uint)local_60[0]._8_8_ < 5) {
    if ((int)uVar8 < 1) {
      uVar15 = 4;
    }
    else {
      if (((param_1->FilteredTriangles).ArrayNum < 5) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)((param_1->FilteredTriangles).AllocatorInstance.Data + 0x10);
    }
  }
  else {
    if (((int)(uint)local_60[0]._8_8_ < 5) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
      return pTVar9;
    }
    uVar15 = *(uint *)(local_60[0].AllocatorInstance.Data + 0x10);
  }
  local_res10._4_4_ = ClothMeshDesc::DistanceToTriangle(param_1,param_2,uVar15 * 3);
  local_res10._0_4_ = uVar15 * 3;
  uVar15 = 5;
  iVar18 = 1;
  __return_storage_ptr__->Elements[4] = local_res10;
  do {
    iVar17 = iVar18;
    if (iVar18 < 2) {
      do {
        iVar4 = iVar17 * 2;
        iVar12 = iVar4 + 1;
        if (iVar4 + 2 < 5) {
          fVar21 = *(float *)&__return_storage_ptr__->Elements[iVar12].field_0x4;
          puVar1 = &__return_storage_ptr__->Elements[(longlong)iVar4 + 2].field_0x4;
          if (*(float *)puVar1 <= fVar21 && fVar21 != *(float *)puVar1) {
            iVar12 = iVar4;
          }
          iVar12 = iVar12 + 1;
        }
        if (*(float *)&__return_storage_ptr__->Elements[iVar12].field_0x4 <=
            *(float *)&__return_storage_ptr__->Elements[iVar17].field_0x4) break;
        TVar2 = __return_storage_ptr__->Elements[iVar17];
        __return_storage_ptr__->Elements[iVar17] = __return_storage_ptr__->Elements[iVar12];
        __return_storage_ptr__->Elements[iVar12] = TVar2;
        iVar17 = iVar12;
      } while (iVar12 * 2 < 4);
    }
    if (iVar18 == 0) break;
    iVar18 = iVar18 + -1;
  } while( true );
  if (5 < (longlong)(int)uVar19) {
    lVar16 = 5;
    do {
      if ((uint)local_60[0]._8_8_ < 5) {
        uVar14 = uVar15;
        if (0 < (int)uVar8) {
          uVar14 = 0;
          if ((int)uVar15 < (param_1->FilteredTriangles).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
            return pTVar9;
          }
          FVar10.Data = (param_1->FilteredTriangles).AllocatorInstance.Data;
          goto LAB_148c11330;
        }
      }
      else {
        uVar14 = 0;
        if ((int)uVar15 < (int)(uint)local_60[0]._8_8_) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        FVar10.Data = local_60[0].AllocatorInstance.Data;
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , FVar10.Data = local_60[0].AllocatorInstance.Data, bVar7)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TStaticArray<TTuple<int,float>,5,4294967295> *)(*pcVar3)();
          return pTVar9;
        }
LAB_148c11330:
        uVar14 = *(uint *)(FVar10.Data + lVar16 * 4);
      }
      fVar21 = ClothMeshDesc::DistanceToTriangle(param_1,param_2,uVar14 * 3);
      if (fVar21 < *(float *)&__return_storage_ptr__->Elements[0].field_0x4) {
        iVar18 = 1;
        TVar6._4_4_ = fVar21;
        TVar6._0_4_ = uVar14 * 3;
        __return_storage_ptr__->Elements[0] = TVar6;
        do {
          iVar17 = iVar18;
          if (iVar18 < 2) {
            do {
              iVar4 = iVar17 * 2;
              iVar12 = iVar4 + 1;
              if (iVar4 + 2 < 5) {
                fVar21 = *(float *)&__return_storage_ptr__->Elements[iVar12].field_0x4;
                puVar1 = &__return_storage_ptr__->Elements[(longlong)iVar4 + 2].field_0x4;
                if (*(float *)puVar1 <= fVar21 && fVar21 != *(float *)puVar1) {
                  iVar12 = iVar4;
                }
                iVar12 = iVar12 + 1;
              }
              if (*(float *)&__return_storage_ptr__->Elements[iVar12].field_0x4 <=
                  *(float *)&__return_storage_ptr__->Elements[iVar17].field_0x4) break;
              TVar2 = __return_storage_ptr__->Elements[iVar17];
              __return_storage_ptr__->Elements[iVar17] = __return_storage_ptr__->Elements[iVar12];
              __return_storage_ptr__->Elements[iVar12] = TVar2;
              iVar17 = iVar12;
            } while (iVar12 * 2 < 4);
          }
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
        } while( true );
      }
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uVar19);
  }
LAB_148c113f6:
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasBoundingBox<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry> @ 148c11420

bool __cdecl
Chaos::HasBoundingBox<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry>(FClothBvEntry *param_1)

{
  return true;
}

// HeapPush<``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 148c11430

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::
HeapPush<__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1,<lambda_1> *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar7 + 1;
  *(int *)((this->AllocatorInstance).Data + (longlong)iVar7 * 4) = *param_1;
  pFVar4 = (this->AllocatorInstance).Data;
  iVar7 = this->ArrayNum + -1;
  if (0 < iVar7) {
    do {
      this_00 = param_2->SeedGeodesicDistances;
      lVar10 = (longlong)iVar7;
      iVar8 = (iVar7 + -1) / 2;
      lVar11 = (longlong)iVar8;
      iVar2 = *(int *)(pFVar4 + lVar11 * 4);
      pfVar9 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
               FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                            *)this_00,*(int *)(pFVar4 + lVar10 * 4));
      fVar1 = *pfVar9;
      pfVar9 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
               FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                            *)this_00,iVar2);
      if (*pfVar9 <= fVar1) {
        return iVar7;
      }
      uVar3 = *(undefined4 *)(pFVar4 + lVar10 * 4);
      *(undefined4 *)(pFVar4 + lVar10 * 4) = *(undefined4 *)(pFVar4 + lVar11 * 4);
      *(undefined4 *)(pFVar4 + lVar11 * 4) = uVar3;
      iVar7 = iVar8;
    } while (0 < iVar8);
    return iVar8;
  }
  return iVar7;
}

// HeapSiftDown<int,int,FIdentityFunctor,TDereferenceWrapper<int,``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>_> @ 148c11590

void __cdecl
AlgoImpl::
HeapSiftDown<int,int,FIdentityFunctor,TDereferenceWrapper<int,__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TDereferenceWrapper<int,_public:___cdecl__private:_void___cdecl_FClothTetherDataPrivate::GenerateGeodesicTethers(TArrayView<UE::Math::TVector<float>_const_,int>_const_&,TFunctionRef<bool___cdecl(int)>)_::_2_::<lambda_1>::operator()(int)const_::_2_::<lambda_1>_>
          *param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar4;
  float *pfVar5;
  int iVar6;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar3 = param_2 * 2;
    iVar6 = iVar3 + 1;
    if (iVar3 + 2 < param_3) {
      iVar2 = param_1[(longlong)iVar3 + 2];
      pTVar4 = param_5->Predicate->SeedGeodesicDistances;
      pfVar5 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
               FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                            *)pTVar4,param_1[iVar6]);
      fVar1 = *pfVar5;
      pfVar5 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
               FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                            *)pTVar4,iVar2);
      if (fVar1 < *pfVar5) {
        iVar6 = iVar3;
      }
      iVar6 = iVar6 + 1;
    }
    pTVar4 = param_5->Predicate->SeedGeodesicDistances;
    iVar3 = param_1[param_2];
    pfVar5 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
             FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                          *)pTVar4,param_1[iVar6]);
    fVar1 = *pfVar5;
    pfVar5 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
             FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                          *)pTVar4,iVar3);
    if (*pfVar5 <= fVar1) break;
    iVar3 = param_1[param_2];
    param_1[param_2] = param_1[iVar6];
    param_1[iVar6] = iVar3;
    param_2 = iVar6;
  }
  return;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>_> @ 148c116b0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:___cdecl__private:_void___cdecl_FClothTetherDataPrivate::GenerateGeodesicTethers(TArrayView<UE::Math::TVector<float>_const_,int>_const_&,TFunctionRef<bool___cdecl(int)>)_::_2_::<lambda_2>::operator()(int)const_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_148c117cc:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = ``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::
                          operator()'::__l2::<lambda_1>::operator()
                                    (param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = ``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::
                        operator()'::__l2::<lambda_1>::operator()
                                  (param_4.Predicate,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = ``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::operator()'::
              __l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = ``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::operator()'::__l2
            ::<lambda_1>::operator()(param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_148c117cc;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<double,int,FIdentityFunctor,`ClothingMeshUtils::CoplanarityParam'::__l7::<lambda_1>_> @ 148c118b0

void __cdecl
AlgoImpl::
HeapSortInternal<double,int,FIdentityFunctor,_ClothingMeshUtils::CoplanarityParam_::__l7::<lambda_1>_>
          (double *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar11 = iVar8;
  iVar10 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_148c119a8:
      if (iVar10 == 0) {
        iVar8 = param_2 + -1;
        lVar12 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar11 = 0;
            dVar1 = *param_1;
            *param_1 = param_1[lVar12];
            param_1[lVar12] = dVar1;
            if (1 < iVar8) {
              do {
                iVar7 = iVar11 * 2;
                iVar10 = iVar7 + 1;
                if (iVar7 + 2 < iVar8) {
                  if ((double)CONCAT44((uint)((ulonglong)param_1[(longlong)iVar7 + 2] >> 0x20) &
                                       uVar5,SUB84(param_1[(longlong)iVar7 + 2],0) & uVar4) <
                      (double)CONCAT44((uint)((ulonglong)param_1[iVar10] >> 0x20) & uVar5,
                                       SUB84(param_1[iVar10],0) & uVar4)) {
                    iVar10 = iVar7;
                  }
                  iVar10 = iVar10 + 1;
                }
                dVar1 = param_1[iVar10];
                dVar2 = param_1[iVar11];
                if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar5,SUB84(dVar1,0) & uVar4
                                    ) <=
                    (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar5,SUB84(dVar2,0) & uVar4
                                    )) break;
                param_1[iVar11] = dVar1;
                param_1[iVar10] = dVar2;
                iVar11 = iVar10;
              } while (iVar10 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar12 = lVar12 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar7 = iVar10 + -1;
      iVar8 = iVar11 + -2;
      iVar11 = iVar8;
      iVar10 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      if ((double)CONCAT44((uint)((ulonglong)param_1[(longlong)iVar8 + 2] >> 0x20) & uVar5,
                           SUB84(param_1[(longlong)iVar8 + 2],0) & uVar4) <
          (double)CONCAT44((uint)((ulonglong)param_1[iVar9] >> 0x20) & uVar5,
                           SUB84(param_1[iVar9],0) & uVar4)) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    dVar1 = param_1[iVar9];
    dVar2 = param_1[iVar7];
    if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar5,SUB84(dVar1,0) & uVar4) <=
        (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar5,SUB84(dVar2,0) & uVar4))
    goto LAB_148c119a8;
    param_1[iVar7] = dVar1;
    param_1[iVar9] = dVar2;
    iVar8 = iVar9 * 2 + 1;
    iVar7 = iVar9;
  } while( true );
}

// HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,TLess<void>_>_> @ 148c11a80

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,TLess<void>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,TLess<void>_> param_4)

{
  TTuple<float,int> TVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_148c11b9e:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            TVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = TVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if ((*(float *)(param_1 + (longlong)iVar8 + 2) <
                       *(float *)(param_1 + (longlong)iVar8 + 1)) ||
                     ((*(float *)(param_1 + (longlong)iVar8 + 2) <=
                       *(float *)(param_1 + (longlong)iVar8 + 1) &&
                      (*(int *)&param_1[(longlong)iVar8 + 2].field_0x4 <
                       *(int *)&param_1[(longlong)iVar8 + 1].field_0x4)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if (bVar3) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if ((*(float *)(param_1 + iVar4) <= *(float *)(param_1 + iVar7)) &&
                   ((*(float *)(param_1 + iVar4) < *(float *)(param_1 + iVar7) ||
                    (*(int *)&param_1[iVar4].field_0x4 <= *(int *)&param_1[iVar7].field_0x4))))
                break;
                TVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = TVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if ((*(float *)(param_1 + (longlong)iVar5 + 2) < *(float *)(param_1 + (longlong)iVar5 + 1)) ||
         ((*(float *)(param_1 + (longlong)iVar5 + 2) <= *(float *)(param_1 + (longlong)iVar5 + 1) &&
          (*(int *)&param_1[(longlong)iVar5 + 2].field_0x4 <
           *(int *)&param_1[(longlong)iVar5 + 1].field_0x4)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if ((*(float *)(param_1 + iVar6) <= *(float *)(param_1 + iVar4)) &&
       ((*(float *)(param_1 + iVar6) < *(float *)(param_1 + iVar4) ||
        (*(int *)&param_1[iVar6].field_0x4 <= *(int *)&param_1[iVar4].field_0x4))))
    goto LAB_148c11b9e;
    TVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = TVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapifyInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>_> @ 148c11c90

void __cdecl
AlgoImpl::
HeapifyInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:___cdecl__private:_void___cdecl_FClothTetherDataPrivate::GenerateGeodesicTethers(TArrayView<UE::Math::TVector<float>_const_,int>_const_&,TFunctionRef<bool___cdecl(int)>)_::_2_::<lambda_1>::operator()(int)const_::_2_::<lambda_1>_>
          param_4)

{
  float fVar1;
  int iVar2;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar9 = iVar7 * 2 + 1;
  iVar5 = iVar9;
  iVar8 = iVar7;
  do {
    while (param_2 <= iVar9) {
LAB_148c11db8:
      if (iVar8 == 0) {
        return;
      }
      iVar7 = iVar8 + -1;
      iVar9 = iVar5 + -2;
      iVar5 = iVar9;
      iVar8 = iVar7;
    }
    iVar9 = iVar7 * 2;
    iVar11 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      pTVar3 = (param_4.Predicate)->SeedGeodesicDistances;
      iVar2 = param_1[(longlong)iVar9 + 2];
      pfVar10 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
                FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                             *)pTVar3,param_1[iVar11]);
      fVar1 = *pfVar10;
      pfVar10 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
                FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                             *)pTVar3,iVar2);
      if (fVar1 < *pfVar10) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 + 1;
    }
    pTVar3 = (param_4.Predicate)->SeedGeodesicDistances;
    iVar9 = param_1[iVar7];
    pfVar10 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
              FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                           *)pTVar3,param_1[iVar11]);
    fVar1 = *pfVar10;
    pfVar10 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
              FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                           *)pTVar3,iVar9);
    if (*pfVar10 <= fVar1) goto LAB_148c11db8;
    iVar2 = param_1[iVar7];
    param_1[iVar7] = param_1[iVar11];
    iVar9 = iVar11 * 2 + 1;
    param_1[iVar11] = iVar2;
    iVar7 = iVar11;
  } while( true );
}

// InternalConstructor<UClothConfigCommon> @ 148c11e00

void __cdecl InternalConstructor<UClothConfigCommon>(FObjectInitializer *param_1)

{
  UClothConfigBase *this;
  
  this = (UClothConfigBase *)param_1->Obj;
  if (this != (UClothConfigBase *)0x0) {
    UClothConfigBase::UClothConfigBase(this);
    *(undefined ***)this = &___7UClothConfigCommon__6B_;
  }
  return;
}

// InternalConstructor<UClothLODDataCommon_Legacy> @ 148c11e30

void __cdecl InternalConstructor<UClothLODDataCommon_Legacy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UClothLODDataCommon_Legacy__6B_;
    *(undefined8 *)(this + 1) = 0;
    FClothPhysicalMeshData::FClothPhysicalMeshData((FClothPhysicalMeshData *)&this[1].field_0x8);
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined8 *)&this[8].field_0x20 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0;
    *(undefined8 *)&this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)(this + 10) = 0;
    *(undefined8 *)&this[10].field_0x8 = 0;
    *(undefined8 *)&this[10].field_0x10 = 0;
    *(undefined8 *)&this[10].field_0x18 = 0;
    *(undefined8 *)&this[10].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UClothSharedConfigCommon> @ 148c11ed0

void __cdecl InternalConstructor<UClothSharedConfigCommon>(FObjectInitializer *param_1)

{
  UClothConfigBase *this;
  
  this = (UClothConfigBase *)param_1->Obj;
  if (this != (UClothConfigBase *)0x0) {
    UClothConfigBase::UClothConfigBase(this);
    *(undefined ***)this = &___7UClothSharedConfigCommon__6B_;
  }
  return;
}

// InternalConstructor<UClothingAssetCommon> @ 148c11f00

void __cdecl InternalConstructor<UClothingAssetCommon>(FObjectInitializer *param_1)

{
  UClothingAssetBase *this;
  
  this = (UClothingAssetBase *)param_1->Obj;
  if (this != (UClothingAssetBase *)0x0) {
    UClothingAssetBase::UClothingAssetBase(this,param_1);
    this->_padding_ = (longlong)&___7UClothingAssetCommon__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AssetGuid.A = 0;
    this[1].AssetGuid.B = 0;
    this[1].AssetGuid.C = 0;
    this[1].AssetGuid.D = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].AssetGuid.A = 0;
    this[2].AssetGuid.B = 0;
    this[2].AssetGuid.C = 0;
    this[2].AssetGuid.D = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].AssetGuid.A = 0;
  }
  return;
}

// InternalConstructor<UClothingAssetCustomData> @ 148c11fb0

void __cdecl InternalConstructor<UClothingAssetCustomData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UClothingAssetCustomData__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UClothConfigCommon> @ 148c11fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothConfigCommon>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothConfigCommon::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UClothConfigBase::UClothConfigBase((UClothConfigBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothConfigCommon__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothLODDataCommon_Legacy> @ 148c12090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothLODDataCommon_Legacy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothLODDataCommon_Legacy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothLODDataCommon_Legacy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    FClothPhysicalMeshData::FClothPhysicalMeshData((FClothPhysicalMeshData *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothSharedConfigCommon> @ 148c121a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothSharedConfigCommon>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothSharedConfigCommon::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UClothConfigBase::UClothConfigBase((UClothConfigBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothSharedConfigCommon__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothingAssetCommon> @ 148c12250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothingAssetCommon>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UClothingAssetBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothingAssetCommon::GetPrivateStaticClass();
  this = (UClothingAssetBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UClothingAssetBase *)0x0) {
    UClothingAssetBase::UClothingAssetBase(this,param_1);
    this->_padding_ = (longlong)&___7UClothingAssetCommon__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AssetGuid.A = 0;
    this[1].AssetGuid.B = 0;
    this[1].AssetGuid.C = 0;
    this[1].AssetGuid.D = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].AssetGuid.A = 0;
    this[2].AssetGuid.B = 0;
    this[2].AssetGuid.C = 0;
    this[2].AssetGuid.D = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothingAssetCustomData> @ 148c12370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothingAssetCustomData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothingAssetCustomData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothingAssetCustomData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>_> @ 148c12420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:___cdecl__private:_void___cdecl_FClothTetherDataPrivate::GenerateGeodesicTethers(TArrayView<UE::Math::TVector<float>_const_,int>_const_&,TFunctionRef<bool___cdecl(int)>)_::_2_::<lambda_2>::operator()(int)const_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148c124e0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_148c12510:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x000148c12519;
          goto LAB_148c12530;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = ``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::
                    operator()'::__l2::<lambda_1>::operator()(param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_148c125f4;
      }
LAB_148c125e3:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_148c125f4:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x000148c12519:
  bVar2 = ``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::operator()'::__l2::
          <lambda_1>::operator()(param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_148c12510;
LAB_148c12530:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = ``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::operator()'::__l2
            ::<lambda_1>::operator()(param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_148c12510;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_148c125f4;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_148c125f4;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_148c125e3;
  goto LAB_148c124e0;
}

// IntroSortInternal<double,int,FIdentityFunctor,`ClothingMeshUtils::CoplanarityParam'::__l7::<lambda_1>_> @ 148c126b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<double,int,FIdentityFunctor,_ClothingMeshUtils::CoplanarityParam_::__l7::<lambda_1>_>
          (double *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  double **ppdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_378 [48];
  double *local_348;
  double *local_338;
  double *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    ppdVar8 = &local_338;
    do {
      pdVar10 = ppdVar8[1];
      pdVar7 = *ppdVar8;
      pdVar1 = ppdVar8[2];
      iVar5 = (int)((longlong)pdVar10 - (longlong)pdVar7 >> 3) + 1;
      local_348._0_4_ = (int)pdVar1;
      pdVar11 = pdVar7;
      if ((int)local_348 != 0) {
LAB_148c12770:
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          pdVar6 = pdVar10 + 1;
          dVar13 = pdVar11[iVar5 >> 1];
          pdVar11[iVar5 >> 1] = *pdVar11;
          *pdVar11 = dVar13;
          pdVar7 = pdVar11;
LAB_148c127a0:
          pdVar7 = pdVar7 + 1;
          if (pdVar7 <= pdVar10) goto code_r0x000148c127a9;
          goto LAB_148c127c0;
        }
        if (pdVar11 < pdVar10) {
          pdVar1 = pdVar11 + 1;
          do {
            pdVar7 = pdVar11;
            if (pdVar1 <= pdVar10) {
              pdVar6 = pdVar1;
              if (0x1f < ((longlong)pdVar10 + (8 - (longlong)pdVar1) & 0xfffffffffffffff8U)) {
                do {
                  dVar13 = *pdVar7;
                  dVar2 = *pdVar6;
                  if ((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar4,
                                       SUB84(dVar13,0) & uVar3) <
                      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar4,
                                       SUB84(dVar2,0) & uVar3)) {
                    pdVar7 = pdVar6;
                    dVar13 = dVar2;
                  }
                  dVar2 = pdVar6[2];
                  if ((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar4,
                                       SUB84(dVar13,0) & uVar3) <
                      (double)CONCAT44((uint)((ulonglong)pdVar6[1] >> 0x20) & uVar4,
                                       SUB84(pdVar6[1],0) & uVar3)) {
                    pdVar7 = pdVar6 + 1;
                  }
                  dVar13 = *pdVar7;
                  if ((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar4,
                                       SUB84(dVar13,0) & uVar3) <
                      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar4,
                                       SUB84(dVar2,0) & uVar3)) {
                    pdVar7 = pdVar6 + 2;
                    dVar13 = dVar2;
                  }
                  if ((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar4,
                                       SUB84(dVar13,0) & uVar3) <
                      (double)CONCAT44((uint)((ulonglong)pdVar6[3] >> 0x20) & uVar4,
                                       SUB84(pdVar6[3],0) & uVar3)) {
                    pdVar7 = pdVar6 + 3;
                  }
                  pdVar6 = pdVar6 + 4;
                } while (pdVar6 <= pdVar10 + -3);
              }
              for (; pdVar6 <= pdVar10; pdVar6 = pdVar6 + 1) {
                if ((double)CONCAT44((uint)((ulonglong)*pdVar7 >> 0x20) & uVar4,
                                     SUB84(*pdVar7,0) & uVar3) <
                    (double)CONCAT44((uint)((ulonglong)*pdVar6 >> 0x20) & uVar4,
                                     SUB84(*pdVar6,0) & uVar3)) {
                  pdVar7 = pdVar6;
                }
              }
            }
            dVar13 = *pdVar7;
            pdVar6 = pdVar10 + -1;
            *pdVar7 = *pdVar10;
            *pdVar10 = dVar13;
            pdVar10 = pdVar6;
          } while (pdVar11 < pdVar6);
        }
        goto LAB_148c12890;
      }
LAB_148c1287e:
      local_348 = pdVar1;
      HeapSortInternal<double,int,FIdentityFunctor,_ClothingMeshUtils::CoplanarityParam_::__l7::<lambda_1>_>
                (pdVar7,iVar5,param_3,param_4);
LAB_148c12890:
      ppdVar8 = ppdVar8 + -3;
    } while (&local_338 <= ppdVar8);
  }
  return;
code_r0x000148c127a9:
  if ((double)CONCAT44((uint)((ulonglong)*pdVar7 >> 0x20) & uVar4,SUB84(*pdVar7,0) & uVar3) <=
      (double)CONCAT44((uint)((ulonglong)*pdVar11 >> 0x20) & uVar4,SUB84(*pdVar11,0) & uVar3))
  goto LAB_148c127a0;
LAB_148c127c0:
  do {
    pdVar9 = pdVar6;
    pdVar6 = pdVar9 + -1;
    if (pdVar6 <= pdVar11) break;
  } while ((double)CONCAT44((uint)((ulonglong)*pdVar11 >> 0x20) & uVar4,SUB84(*pdVar11,0) & uVar3)
           <= (double)CONCAT44((uint)((ulonglong)*pdVar6 >> 0x20) & uVar4,SUB84(*pdVar6,0) & uVar3))
  ;
  if (pdVar7 <= pdVar6) {
    dVar13 = *pdVar7;
    *pdVar7 = *pdVar6;
    *pdVar6 = dVar13;
    goto LAB_148c127a0;
  }
  dVar13 = *pdVar11;
  *pdVar11 = *pdVar6;
  *pdVar6 = dVar13;
  local_348._0_4_ = (int)local_348 + -1;
  if ((longlong)((longlong)pdVar6 + (-8 - (longlong)pdVar11) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pdVar10 - (longlong)pdVar7 & 0xfffffffffffffff8U)) {
    if (pdVar7 < pdVar10) {
      *ppdVar8 = pdVar7;
      ppdVar8[1] = pdVar10;
      *(int *)(ppdVar8 + 2) = (int)local_348;
      ppdVar8 = ppdVar8 + 3;
    }
    if (pdVar6 <= pdVar11 + 1) goto LAB_148c12890;
    pdVar10 = pdVar9 + -2;
    pdVar7 = pdVar11;
  }
  else {
    if (pdVar11 + 1 < pdVar6) {
      *ppdVar8 = pdVar11;
      ppdVar8[1] = pdVar9 + -2;
      *(int *)(ppdVar8 + 2) = (int)local_348;
      ppdVar8 = ppdVar8 + 3;
    }
    if (pdVar10 <= pdVar7) goto LAB_148c12890;
  }
  iVar5 = (int)((longlong)pdVar10 - (longlong)pdVar7 >> 3) + 1;
  pdVar11 = pdVar7;
  if ((int)local_348 == 0) goto LAB_148c1287e;
  goto LAB_148c12770;
}

// IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,TLess<void>_>_> @ 148c129e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,TLess<void>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,TLess<void>_> param_4)

{
  TTuple<float,int> TVar1;
  int iVar2;
  TTuple<float,int> *pTVar3;
  TTuple<float,int> *pTVar4;
  TTuple<float,int> **ppTVar5;
  TTuple<float,int> *pTVar6;
  TTuple<float,int> *pTVar7;
  TTuple<float,int> *pTVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  int local_338;
  undefined4 uStack_334;
  TTuple<float,int> *local_328;
  TTuple<float,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppTVar5 = &local_328;
    do {
      pTVar6 = ppTVar5[1];
      pTVar8 = *ppTVar5;
      local_338 = *(int *)(ppTVar5 + 2);
      uStack_334 = *(undefined4 *)((longlong)ppTVar5 + 0x14);
      iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
      pTVar7 = pTVar8;
      iVar9 = local_338;
      if (local_338 != 0) {
LAB_148c12a90:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          TVar1 = pTVar7[iVar2 >> 1];
          pTVar7[iVar2 >> 1] = *pTVar7;
          pTVar4 = pTVar6 + 1;
          *pTVar7 = TVar1;
          pTVar8 = pTVar7;
LAB_148c12ac0:
          pTVar3 = pTVar8;
          pTVar8 = pTVar3 + 1;
          if (pTVar8 <= pTVar6) goto code_r0x000148c12ac9;
          goto LAB_148c12ae7;
        }
        if (pTVar7 < pTVar6) {
          pTVar8 = pTVar7 + 1;
          do {
            pTVar4 = pTVar7;
            if (pTVar8 <= pTVar6) {
              pTVar3 = pTVar8;
              if (0x1f < ((longlong)pTVar6 + (8 - (longlong)pTVar8) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = *(float *)pTVar3;
                  fVar11 = *(float *)pTVar4;
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 && (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3->field_0x4)
                      ))) {
                    pTVar4 = pTVar3;
                    fVar11 = fVar10;
                  }
                  fVar10 = *(float *)(pTVar3 + 1);
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 &&
                      (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3[1].field_0x4)))) {
                    pTVar4 = pTVar3 + 1;
                  }
                  else {
                    fVar10 = *(float *)pTVar4;
                  }
                  fVar11 = *(float *)(pTVar3 + 2);
                  if ((fVar10 < fVar11) ||
                     ((fVar10 <= fVar11 &&
                      (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3[2].field_0x4)))) {
                    pTVar4 = pTVar3 + 2;
                    fVar10 = fVar11;
                  }
                  if ((fVar10 < *(float *)(pTVar3 + 3)) ||
                     ((fVar10 <= *(float *)(pTVar3 + 3) &&
                      (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3[3].field_0x4)))) {
                    pTVar4 = pTVar3 + 3;
                  }
                  pTVar3 = pTVar3 + 4;
                } while (pTVar3 <= pTVar6 + -3);
              }
              for (; pTVar3 <= pTVar6; pTVar3 = pTVar3 + 1) {
                if ((*(float *)pTVar4 < *(float *)pTVar3) ||
                   ((*(float *)pTVar4 <= *(float *)pTVar3 &&
                    (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3->field_0x4)))) {
                  pTVar4 = pTVar3;
                }
              }
            }
            TVar1 = *pTVar4;
            pTVar3 = pTVar6 + -1;
            *pTVar4 = *pTVar6;
            *pTVar6 = TVar1;
            pTVar6 = pTVar3;
          } while (pTVar7 < pTVar3);
        }
        goto LAB_148c12bb5;
      }
LAB_148c12ba4:
      HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,TLess<void>_>_>
                (pTVar8,iVar2,param_3,param_4);
LAB_148c12bb5:
      ppTVar5 = ppTVar5 + -3;
    } while (&local_328 <= ppTVar5);
  }
  return;
code_r0x000148c12ac9:
  if ((*(float *)pTVar8 <= *(float *)pTVar7) &&
     ((*(float *)pTVar8 < *(float *)pTVar7 ||
      (*(int *)&pTVar3[1].field_0x4 <= *(int *)&pTVar7->field_0x4)))) goto LAB_148c12ac0;
LAB_148c12ae7:
  while (pTVar3 = pTVar4, pTVar4 = pTVar3 + -1, pTVar7 < pTVar4) {
    if ((*(float *)pTVar4 < *(float *)pTVar7) ||
       ((*(float *)pTVar4 <= *(float *)pTVar7 &&
        (*(int *)&pTVar3[-1].field_0x4 < *(int *)&pTVar7->field_0x4)))) break;
  }
  if (pTVar8 <= pTVar4) {
    TVar1 = *pTVar8;
    *pTVar8 = *pTVar4;
    *pTVar4 = TVar1;
    goto LAB_148c12ac0;
  }
  TVar1 = *pTVar7;
  iVar9 = iVar9 + -1;
  *pTVar7 = *pTVar4;
  *pTVar4 = TVar1;
  if ((longlong)((longlong)pTVar4 + (-8 - (longlong)pTVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar6 - (longlong)pTVar8 & 0xfffffffffffffff8U)) {
    if (pTVar8 < pTVar6) {
      *ppTVar5 = pTVar8;
      ppTVar5[1] = pTVar6;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar4 <= pTVar7 + 1) goto LAB_148c12bb5;
    pTVar6 = pTVar3 + -2;
    pTVar8 = pTVar7;
  }
  else {
    if (pTVar7 + 1 < pTVar4) {
      *ppTVar5 = pTVar7;
      ppTVar5[1] = pTVar3 + -2;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar6 <= pTVar8) goto LAB_148c12bb5;
  }
  iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
  pTVar7 = pTVar8;
  if (iVar9 == 0) goto LAB_148c12ba4;
  goto LAB_148c12a90;
}

// Map<float,`ClothingMeshUtils::FVertexParameterMapper::Map'::__l2::<lambda_1>_> @ 148c12d70

void __thiscall
ClothingMeshUtils::FVertexParameterMapper::
Map<float,_ClothingMeshUtils::FVertexParameterMapper::Map_::__l2::<lambda_1>_>
          (FVertexParameterMapper *this,TArrayView<float_const_,int> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_c8 [9];
  
  iVar8 = (this->Mesh1Positions).ArrayNum;
  iVar9 = (this->Mesh1Indices).ArrayNum;
  iVar10 = (this->Mesh0Positions).ArrayNum;
  iVar11 = (this->Mesh1Normals).ArrayNum;
  if ((iVar10 != (this->Mesh0Normals).ArrayNum) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumMesh0Positions == NumMesh0Normals",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Public\\Utils\\ClothingMeshUtils.h"
                          ,0xdf,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((iVar8 != iVar11) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumMesh1Positions == NumMesh1Normals",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Public\\Utils\\ClothingMeshUtils.h"
                          ,0xe0,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((iVar9 != (iVar9 / 3 + (iVar9 >> 0x1f) +
                (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3)
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumMesh1Indices % 3 == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Public\\Utils\\ClothingMeshUtils.h"
                             ,0xe1,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((param_1->ArrayNum != iVar8) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceData.Num() == NumMesh1Positions",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Public\\Utils\\ClothingMeshUtils.h"
                          ,0xe2,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  piVar1 = &param_2->ArrayNum;
  uVar19 = 0;
  lVar21 = 0;
  if (*piVar1 != iVar10) {
    *piVar1 = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  local_c8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8[0].ArrayNum = 0;
  local_c8[0].ArrayMax = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  GenerateEmbeddedPositions(this,local_c8,&local_d8);
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar13 = __real_3e45798ee0000000;
  if (0 < iVar10) {
    uVar20 = 2;
    lVar23 = 8;
    lVar22 = lVar21;
    do {
      uVar17 = 0;
      if ((int)uVar19 < local_c8[0].ArrayNum) {
        uVar17 = ~uVar19 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      dVar5 = *(double *)(local_c8[0].AllocatorInstance.Data + lVar21);
      dVar6 = *(double *)(local_c8[0].AllocatorInstance.Data + lVar21 + 8);
      dVar7 = *(double *)(local_c8[0].AllocatorInstance.Data + lVar21 + 0x10);
      uVar17 = 0;
      if ((int)(uVar20 - 2) < local_d8.ArrayNum) {
        uVar17 = ~(uVar20 - 2) >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar17 = *(uint *)(local_d8.AllocatorInstance.Data + lVar23 + -8);
      uVar18 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar2 = param_1->DataPtr[(int)uVar17];
      uVar17 = 0;
      if ((int)(uVar20 - 1) < local_d8.ArrayNum) {
        uVar17 = ~(uVar20 - 1) >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar17 = *(uint *)(local_d8.AllocatorInstance.Data + lVar23 + -4);
      uVar18 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar3 = param_1->DataPtr[(int)uVar17];
      uVar17 = 0;
      if ((int)uVar20 < local_d8.ArrayNum) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar17 = *(uint *)(local_d8.AllocatorInstance.Data + lVar23);
      uVar18 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar4 = param_1->DataPtr[(int)uVar17];
      uVar17 = 0;
      if ((int)uVar19 < param_2->ArrayNum) {
        uVar17 = ~uVar19 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      dVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X - dVar5;
      dVar25 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y - dVar6;
      dVar26 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z - dVar7;
      fVar27 = fVar2;
      if (((dVar13 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar15,
                                      SUB84(dVar24,0) & uVar14)) &&
          (fVar27 = fVar3,
          dVar13 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar15,
                                    SUB84(dVar25,0) & uVar14))) &&
         (fVar27 = fVar4,
         dVar13 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar15,
                                   SUB84(dVar26,0) & uVar14))) {
        fVar27 = (float)dVar6 * fVar3 + (float)dVar5 * fVar2 + (float)dVar7 * fVar4;
      }
      *(float *)((param_2->AllocatorInstance).Data + lVar22 * 4) = fVar27;
      uVar19 = uVar19 + 1;
      lVar22 = lVar22 + 1;
      uVar20 = uVar20 + 3;
      lVar21 = lVar21 + 0x20;
      lVar23 = lVar23 + 0xc;
    } while (lVar22 < iVar10);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_c8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].AllocatorInstance.Data);
  }
  return;
}

// MultipleSkinningDataForVertex<5> @ 148c13350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ClothingMeshUtils::`anonymous_namespace'::MultipleSkinningDataForVertex<5>
          (TStaticArray<FMeshToMeshVertData,5,4294967295> *param_1,ClothMeshDesc *param_2,
          ClothMeshDesc *param_3,int param_4,float param_5,float param_6)

{
  longlong lVar1;
  longlong lVar2;
  TStaticArray<FMeshToMeshVertData,5,4294967295> *pTVar3;
  TVector<float> *pTVar4;
  TVector<float> *pTVar5;
  TVector<float> *pTVar6;
  TVector<float> *pTVar7;
  TVector<float> *pTVar8;
  code *pcVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  TVector<float> *pTVar17;
  TVector<float> *pTVar18;
  float *pfVar19;
  TVector4<float> *pTVar20;
  uint *puVar21;
  FText *pFVar22;
  FText *pFVar23;
  FText *pFVar24;
  FText *pFVar25;
  FTextFormat *pFVar26;
  uint uVar27;
  TVector4<float> *pTVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStackY_2d8 [32];
  uint local_290;
  TVector<float>_u_0 local_240;
  TVector<float>_u_0 local_230;
  TVector<float>_u_0 local_224;
  TVector<float> *local_218;
  TStaticArray<FMeshToMeshVertData,5,4294967295> *local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FText local_1d8;
  TVector<double>_u_0 local_1c8;
  FText local_1b0;
  TVector<float> local_1a0 [2];
  TVector4<float> local_188;
  TVector4<float> local_178;
  TVector4<float> local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FTextFormat local_128;
  undefined1 local_118 [40];
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_210 = param_1;
  if (((param_3->Normals).ArrayNum != (param_3->AveragedNormals).ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceMesh.HasAveragedNormals()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                          ,0x1f1,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  pTVar17 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](&param_2->Positions,param_4)
  ;
  local_218 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](&param_2->Normals,param_4)
  ;
  if ((param_2->Positions).ArrayNum == (param_2->Tangents).ArrayNum) {
    pTVar18 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                        (&param_2->Tangents,param_4);
    uVar41 = (pTVar18->field0_0x0)._s_0.X;
    uVar42 = (pTVar18->field0_0x0)._s_0.Y;
    uVar43 = (pTVar18->field0_0x0)._s_0.Z;
  }
  else {
    UE::Math::TVector<float>::FindBestAxisVectors
              (local_218,(TVector<float> *)&local_240._s_0,local_1a0);
    uVar41 = local_240._s_0.X;
    uVar42 = local_240._s_0.Y;
    uVar43 = local_240._s_0.Z;
  }
  local_1c8._s_0.X = (double)(pTVar17->field0_0x0)._s_0.X;
  local_1c8._s_0.Y = (double)(pTVar17->field0_0x0)._s_0.Y;
  local_1c8._s_0.Z = (double)(pTVar17->field0_0x0)._s_0.Z;
  GetNBestTrianglesBaseIndices<5>
            ((TStaticArray<TTuple<int,float>,5,4294967295> *)local_118,param_3,
             (TVector<double> *)&local_1c8._s_0);
  fVar12 = __real_3f800000;
  fVar11 = __real_322bcc77;
  pfVar19 = (float *)(local_118 + 4);
  pTVar28 = &param_1->Elements[0].TangentBaryCoordsAndDist;
  local_290 = 0;
  fVar40 = 0.0;
  do {
    fVar33 = pfVar19[-1];
    lVar29 = (longlong)(int)fVar33;
    if (fVar33 == -NAN) {
      *(float *)((longlong)(pTVar28 + 1) + 8) = 0.0;
      *(ushort *)((longlong)(pTVar28 + 1) + 6) = 0xffff;
    }
    else {
      uVar30 = ~(uint)fVar33 >> 0x1f;
      uVar15 = 0;
      if ((int)fVar33 < (param_3->Indices).ArrayNum) {
        uVar15 = uVar30;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      uVar15 = (param_3->Indices).DataPtr[lVar29];
      uVar31 = 0;
      if ((int)uVar15 < (param_3->Positions).ArrayNum) {
        uVar31 = ~uVar15 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      uVar31 = ~((int)fVar33 + 1U) >> 0x1f;
      pTVar18 = (param_3->Positions).DataPtr + (int)uVar15;
      uVar15 = 0;
      if ((int)((int)fVar33 + 1U) < (param_3->Indices).ArrayNum) {
        uVar15 = uVar31;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      lVar1 = lVar29 + 1;
      uVar15 = (param_3->Indices).DataPtr[lVar1];
      uVar27 = 0;
      if ((int)uVar15 < (param_3->Positions).ArrayNum) {
        uVar27 = ~uVar15 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pTVar4 = (param_3->Positions).DataPtr + (int)uVar15;
      uVar27 = ~((int)fVar33 + 2U) >> 0x1f;
      uVar15 = 0;
      if ((int)((int)fVar33 + 2U) < (param_3->Indices).ArrayNum) {
        uVar15 = uVar27;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      lVar2 = lVar29 + 2;
      uVar15 = (param_3->Indices).DataPtr[lVar2];
      uVar16 = 0;
      if ((int)uVar15 < (param_3->Positions).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pTVar5 = (param_3->Positions).DataPtr + (int)uVar15;
      uVar15 = 0;
      if ((int)fVar33 < (param_3->Indices).ArrayNum) {
        uVar15 = uVar30;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      uVar15 = (param_3->Indices).DataPtr[lVar29];
      uVar16 = 0;
      if ((int)uVar15 < (param_3->Normals).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pTVar6 = (param_3->Normals).DataPtr + (int)uVar15;
      uVar15 = 0;
      if ((int)fVar33 + 1 < (param_3->Indices).ArrayNum) {
        uVar15 = uVar31;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      uVar15 = (param_3->Indices).DataPtr[lVar1];
      uVar16 = 0;
      if ((int)uVar15 < (param_3->Normals).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pTVar7 = (param_3->Normals).DataPtr + (int)uVar15;
      uVar15 = 0;
      if ((int)fVar33 + 2 < (param_3->Indices).ArrayNum) {
        uVar15 = uVar27;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      uVar15 = (param_3->Indices).DataPtr[lVar2];
      uVar16 = 0;
      if ((int)uVar15 < (param_3->Normals).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      fVar36 = (pTVar4->field0_0x0)._s_0.Z - (pTVar18->field0_0x0)._s_0.Z;
      fVar34 = (pTVar4->field0_0x0)._s_0.Y - (pTVar18->field0_0x0)._s_0.Y;
      pTVar8 = (param_3->Normals).DataPtr + (int)uVar15;
      fVar38 = (pTVar4->field0_0x0)._s_0.X - (pTVar18->field0_0x0)._s_0.X;
      fVar37 = (pTVar5->field0_0x0)._s_0.Y - (pTVar18->field0_0x0)._s_0.Y;
      fVar35 = (pTVar5->field0_0x0)._s_0.Z - (pTVar18->field0_0x0)._s_0.Z;
      fVar39 = (pTVar5->field0_0x0)._s_0.X - (pTVar18->field0_0x0)._s_0.X;
      fVar32 = fVar34 * fVar35 - fVar36 * fVar37;
      fVar37 = fVar38 * fVar37 - fVar34 * fVar39;
      fVar34 = fVar36 * fVar39 - fVar38 * fVar35;
      if (fVar34 * fVar34 + fVar32 * fVar32 + fVar37 * fVar37 < fVar11) {
        puVar21 = TArrayView<unsigned_int_const_,int>::operator[](&param_3->Indices,(int)fVar33);
        uVar15 = *puVar21;
        puVar21 = TArrayView<unsigned_int_const_,int>::operator[](&param_3->Indices,(int)fVar33 + 1)
        ;
        uVar30 = *puVar21;
        puVar21 = TArrayView<unsigned_int_const_,int>::operator[](&param_3->Indices,(int)fVar33 + 2)
        ;
        uVar31 = *puVar21;
        ::FString::PrintfImpl(&local_1e8,L"X=%3.3f Y=%3.3f Z=%3.3f");
        pFVar22 = FText::FromString(&local_158,&local_1e8);
        ::FString::PrintfImpl(&local_1f8,L"X=%3.3f Y=%3.3f Z=%3.3f");
        pFVar23 = FText::FromString(&local_148,&local_1f8);
        ::FString::PrintfImpl(&local_208,L"X=%3.3f Y=%3.3f Z=%3.3f");
        pFVar24 = FText::FromString(&local_138,&local_208);
        pFVar25 = FText::AsLocalizable_Advanced_LocText
                            (&local_1b0,L"ClothingMeshUtils",
                             L"DegenerateTriangleErrorMultipleInfluences",
                             L"Failed to generate skinning data, found coincident vertices in triangle ({0}, {1}, {2}), points A={3} B={4} C={5}"
                            );
        pFVar26 = FTextFormat::FTextFormat(&local_128,pFVar25,Default);
        FText::Format<unsigned_int,unsigned_int,unsigned_int,FText,FText,FText>
                  (&local_1d8,pFVar26,uVar15,uVar30,uVar31,pFVar24,pFVar23,pFVar22);
        if (local_1b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (2 < (byte)LogClothingMeshUtils._0_1_) {
          FText::ToString(&local_1d8);
          UE::Logging::Private::BasicLog<3>
                    (&`ClothingMeshUtils::MultipleSkinningDataForVertex<5>'::`23'::LOG_Static,
                     (FLogCategoryBase *)&LogClothingMeshUtils);
        }
        if (local_1d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
        }
        return false;
      }
      pTVar20 = GetPointBaryAndDistWithNormals
                          (&local_188,pTVar18,pTVar4,pTVar5,pTVar6,pTVar7,pTVar8,pTVar17);
      uVar10 = *(undefined8 *)((longlong)&pTVar20->field0_0x0 + 8);
      *(undefined8 *)
       &(((FMeshToMeshVertData *)(pTVar28 + -2))->PositionBaryCoordsAndDist).field0_0x0 =
           *(undefined8 *)&pTVar20->field0_0x0;
      *(undefined8 *)
       ((longlong)&(((FMeshToMeshVertData *)(pTVar28 + -2))->PositionBaryCoordsAndDist).field0_0x0 +
       8) = uVar10;
      local_230._s_0.X = (local_218->field0_0x0)._s_0.X + (pTVar17->field0_0x0)._s_0.X;
      local_230._s_0.Y = (local_218->field0_0x0)._s_0.Y + (pTVar17->field0_0x0)._s_0.Y;
      local_230._s_0.Z = (local_218->field0_0x0)._s_0.Z + (pTVar17->field0_0x0)._s_0.Z;
      pTVar20 = GetPointBaryAndDistWithNormals
                          (&local_178,pTVar18,pTVar4,pTVar5,pTVar6,pTVar7,pTVar8,
                           (TVector<float> *)&local_230._s_0);
      uVar10 = *(undefined8 *)((longlong)&pTVar20->field0_0x0 + 8);
      *(undefined8 *)&pTVar28[-1].field0_0x0 = *(undefined8 *)&pTVar20->field0_0x0;
      *(undefined8 *)((longlong)&pTVar28[-1].field0_0x0 + 8) = uVar10;
      local_224._s_0.X = (float)uVar41 + (pTVar17->field0_0x0)._s_0.X;
      local_224._s_0.Y = (float)uVar42 + (pTVar17->field0_0x0)._s_0.Y;
      local_224._s_0.Z = (float)uVar43 + (pTVar17->field0_0x0)._s_0.Z;
      pTVar20 = GetPointBaryAndDistWithNormals
                          (&local_168,pTVar18,pTVar4,pTVar5,pTVar6,pTVar7,pTVar8,
                           (TVector<float> *)&local_224._s_0);
      uVar10 = *(undefined8 *)((longlong)&pTVar20->field0_0x0 + 8);
      *(undefined8 *)&pTVar28->field0_0x0 = *(undefined8 *)&pTVar20->field0_0x0;
      *(undefined8 *)((longlong)&pTVar28->field0_0x0 + 8) = uVar10;
      uVar15 = 0;
      if ((int)fVar33 < (param_3->Indices).ArrayNum) {
        uVar15 = uVar30;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      *(ushort *)(pTVar28 + 1) = (ushort)(param_3->Indices).DataPtr[lVar29];
      uVar15 = 0;
      if ((int)fVar33 + 1 < (param_3->Indices).ArrayNum) {
        uVar15 = uVar31;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      *(ushort *)((longlong)(pTVar28 + 1) + 2) = (ushort)(param_3->Indices).DataPtr[lVar1];
      uVar15 = 0;
      if ((int)fVar33 + 2 < (param_3->Indices).ArrayNum) {
        uVar15 = uVar27;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      *(ushort *)((longlong)(pTVar28 + 1) + 4) = (ushort)(param_3->Indices).DataPtr[lVar2];
      *(ushort *)((longlong)(pTVar28 + 1) + 6) = 0;
      if (param_5 == 0.0) {
        fVar33 = 0.0;
      }
      else {
        fVar33 = *pfVar19 / param_5;
        if (fVar12 <= *pfVar19 / param_5) {
          fVar33 = fVar12;
        }
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        fVar33 = fVar12 - fVar33 * fVar33;
        fVar33 = fVar33 * fVar33 * fVar33;
      }
      fVar40 = fVar40 + fVar33;
      *(float *)((longlong)(pTVar28 + 1) + 8) = fVar33;
    }
    local_290 = local_290 + 1;
    pfVar19 = pfVar19 + 2;
    pTVar28 = pTVar28 + 4;
    if (4 < local_290) {
      if ((0.0 < fVar40) && (local_210 != local_210 + 1)) {
        pfVar19 = &local_210->Elements[0].Weight;
        do {
          pTVar3 = (TStaticArray<FMeshToMeshVertData,5,4294967295> *)(pfVar19 + 2);
          *pfVar19 = (fVar12 / fVar40) * *pfVar19;
          pfVar19 = pfVar19 + 0x10;
        } while (pTVar3 != local_210 + 1);
      }
      return true;
    }
  } while( true );
}

// NewObject<UClothConfigBase> @ 148c13f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClothConfigBase * __cdecl
NewObject<UClothConfigBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UClothConfigBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UClothConfigBase *)pUVar2;
}

// OverlapFast<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor> @ 148c142b0

bool __thiscall
Chaos::TAABBTreeLeafArray<int,0,double>::
OverlapFast<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
          (TAABBTreeLeafArray<int,0,double> *this,TAABB<double,3> *param_1,FSimpleVisitor *param_2)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FScriptContainerElement *pFVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  code *pcVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  bool bVar25;
  undefined1 uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  TVector<double,3> *pTVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  int iVar38;
  int iVar39;
  longlong lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int local_238;
  int local_234;
  longlong local_218;
  longlong local_210;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  
  iVar28 = (this->Elems).ArrayNum;
  pTVar1 = &param_1->MMax;
  iVar27 = (int)(iVar28 + (iVar28 >> 0x1f & 3U)) >> 2;
  if (0 < iVar27) {
    lVar37 = 0;
    local_1d8 = (longlong)iVar27;
    uVar36 = 3;
    local_1e0 = 0x70;
    local_1d0 = 0xa8;
    local_238 = 2;
    iVar39 = 1;
    local_218 = 0x38;
    local_234 = 0;
    local_210 = 0;
    do {
      uVar34 = ~uVar36 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar36 < (this->Elems).ArrayNum) {
        uVar29 = uVar34;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar2 = *(double *)((this->Elems).AllocatorInstance.Data + local_1d0 + 8);
      uVar35 = ~(uVar36 - 3) >> 0x1f;
      uVar29 = 0;
      if (local_238 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar3 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 8);
      uVar29 = 0;
      if (iVar39 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar4 = *(double *)((this->Elems).AllocatorInstance.Data + local_218 + 8);
      uVar29 = 0;
      if (local_234 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      local_138 = *(double *)((this->Elems).AllocatorInstance.Data + local_210 + 8);
      uVar29 = 0;
      if ((int)uVar36 < (this->Elems).ArrayNum) {
        uVar29 = uVar34;
      }
      dStack_130 = dVar4;
      local_108 = dVar3;
      dStack_100 = dVar2;
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      iVar31 = uVar36 - 1;
      dVar2 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x58);
      uVar29 = 0;
      if (iVar31 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      iVar32 = uVar36 - 2;
      dVar3 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x20);
      uVar29 = 0;
      if (iVar32 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      iVar38 = uVar36 - 3;
      dVar4 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + -0x18);
      uVar29 = 0;
      if (iVar38 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      local_128 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + -0x50);
      uVar29 = 0;
      if ((int)uVar36 < (this->Elems).ArrayNum) {
        uVar29 = uVar34;
      }
      dStack_120 = dVar4;
      local_f8 = dVar3;
      dStack_f0 = dVar2;
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar2 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x48);
      uVar29 = 0;
      if (iVar31 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar3 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x10);
      uVar29 = 0;
      if (iVar32 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar4 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + -0x28);
      uVar29 = 0;
      if (iVar38 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      local_148 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + -0x60);
      uVar29 = 0;
      if ((int)uVar36 < (this->Elems).ArrayNum) {
        uVar29 = uVar34;
      }
      dStack_140 = dVar4;
      local_118 = dVar3;
      dStack_110 = dVar2;
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar2 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x60);
      uVar29 = 0;
      if (iVar31 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar3 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x28);
      uVar29 = 0;
      if (iVar32 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar4 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + -0x10);
      uVar29 = 0;
      if (iVar38 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar5 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + -0x48);
      uVar29 = 0;
      if ((int)uVar36 < (this->Elems).ArrayNum) {
        uVar29 = uVar34;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar6 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x50);
      uVar29 = 0;
      if (iVar31 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar7 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x18);
      uVar29 = 0;
      if (iVar32 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar8 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + -0x20);
      uVar29 = 0;
      if (iVar38 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar9 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + -0x58);
      uVar29 = 0;
      if ((int)uVar36 < (this->Elems).ArrayNum) {
        uVar29 = uVar34;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar10 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x68);
      uVar29 = 0;
      if (iVar31 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar11 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + 0x30);
      uVar29 = 0;
      if (iVar32 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar12 = *(double *)((this->Elems).AllocatorInstance.Data + local_1e0 + -8);
      uVar29 = 0;
      if (iVar38 < (this->Elems).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      dVar13 = *(double *)&(param_1->MMax).field_0x8;
      dVar14 = *(double *)pTVar1;
      dVar15 = *(double *)&param_1->MMin;
      dVar16 = *(double *)&(param_1->MMin).field_0x8;
      dVar17 = *(double *)&(param_1->MMax).field_0x10;
      dVar18 = *(double *)&(param_1->MMin).field_0x10;
      pFVar19 = (this->Elems).AllocatorInstance.Data;
      auVar49._8_4_ = SUB84(dVar13,0);
      auVar49._0_8_ = dVar13;
      auVar49._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < dStack_140);
      auVar50._0_8_ = -(ulonglong)(dVar13 < local_148);
      auVar52._8_8_ = -(ulonglong)(dVar13 < dStack_110);
      auVar52._0_8_ = -(ulonglong)(dVar13 < local_118);
      auVar41._8_4_ = SUB84(dVar14,0);
      auVar41._0_8_ = dVar14;
      auVar41._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < dStack_130);
      auVar42._0_8_ = -(ulonglong)(dVar14 < local_138);
      auVar51._8_8_ = -(ulonglong)(dVar14 < dStack_100);
      auVar51._0_8_ = -(ulonglong)(dVar14 < local_108);
      auVar46._8_8_ = -(ulonglong)(dStack_120 < dVar15);
      auVar46._0_8_ = -(ulonglong)(local_128 < dVar15);
      lVar40 = -(ulonglong)(dVar4 < dVar16);
      auVar23._8_4_ = (int)lVar40;
      auVar23._0_8_ = -(ulonglong)(dVar5 < dVar16);
      auVar23._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      auVar43._8_4_ = SUB84(dVar17,0);
      auVar43._0_8_ = dVar17;
      auVar43._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      auVar47._8_8_ = -(ulonglong)(dVar12 < dVar18);
      auVar47._0_8_ = -(ulonglong)(*(double *)(pFVar19 + local_1e0 + -0x40) < dVar18);
      auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < dVar8);
      auVar44._0_8_ = -(ulonglong)(dVar17 < dVar9);
      auVar45._8_8_ = -(ulonglong)(dStack_f0 < dVar15);
      auVar45._0_8_ = -(ulonglong)(local_f8 < dVar15);
      uVar29 = movmskpd((int)param_1,auVar50 | auVar23 | auVar42 | auVar46 | auVar47 | auVar44);
      lVar40 = -(ulonglong)(dVar2 < dVar16);
      auVar24._8_4_ = (int)lVar40;
      auVar24._0_8_ = -(ulonglong)(dVar3 < dVar16);
      auVar24._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      auVar48._8_8_ = -(ulonglong)(dVar10 < dVar18);
      auVar48._0_8_ = -(ulonglong)(dVar11 < dVar18);
      lVar40 = -(ulonglong)(dVar17 < dVar6);
      auVar22._8_4_ = (int)lVar40;
      auVar22._0_8_ = -(ulonglong)(dVar17 < dVar7);
      auVar22._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      iVar31 = movmskpd((int)pFVar19,auVar52 | auVar24 | auVar51 | auVar45 | auVar48 | auVar22);
      uVar34 = 0;
      do {
        if (((uVar29 | iVar31 << 2) >> (uVar34 & 0x1f) & 1) == 0) {
          uVar35 = 0;
          if ((int)(uVar34 + iVar38) < (this->Elems).ArrayNum) {
            uVar35 = ~(uVar34 + (uVar36 - 3)) >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            uVar26 = (*pcVar21)();
            return (bool)uVar26;
          }
          pFVar19 = (this->Elems).AllocatorInstance.Data;
          pTVar20 = param_2->CollectedResults;
          local_1b8 = *(undefined8 *)(pFVar19 + lVar37 + 8);
          uStack_1b0 = *(undefined8 *)(pFVar19 + lVar37 + 8 + 8);
          local_1a0 = *(undefined1 (*) [16])(pFVar19 + lVar37 + 0x20);
          local_1a8 = *(undefined8 *)(pFVar19 + lVar37 + 0x18);
          local_190 = *(undefined8 *)(pFVar19 + lVar37 + 0x30);
          local_1c0 = *(undefined4 *)(pFVar19 + lVar37);
          local_1bc = 1;
          pFVar19 = (pTVar20->AllocatorInstance).Data;
          if (((pFVar19 <= (FScriptContainerElement *)&local_1c0) &&
              ((FScriptContainerElement *)&local_1c0 < pFVar19 + (longlong)pTVar20->ArrayMax * 4))
             && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar25)) {
            pcVar21 = (code *)swi(3);
            uVar26 = (*pcVar21)();
            return (bool)uVar26;
          }
          iVar32 = pTVar20->ArrayNum;
          if (iVar32 == pTVar20->ArrayMax) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
          }
          pTVar20->ArrayNum = iVar32 + 1;
          *(undefined4 *)((pTVar20->AllocatorInstance).Data + (longlong)iVar32 * 4) = local_1c0;
        }
        uVar34 = uVar34 + 1;
        lVar37 = lVar37 + 0x38;
      } while ((int)uVar34 < 4);
      local_218 = local_218 + 0xe0;
      local_1d0 = local_1d0 + 0xe0;
      local_238 = local_238 + 4;
      iVar39 = iVar39 + 4;
      local_210 = local_210 + 0xe0;
      uVar36 = uVar36 + 4;
      local_1e0 = local_1e0 + 0xe0;
      local_1d8 = local_1d8 + -1;
      local_234 = local_234 + 4;
    } while (local_1d8 != 0);
  }
  uVar36 = iVar27 * 4;
  if ((int)uVar36 < iVar28) {
    lVar37 = (longlong)(int)uVar36 * 0x38;
    lVar40 = (longlong)iVar28 - (longlong)(int)uVar36;
    do {
      uVar29 = 0;
      if ((int)uVar36 < (this->Elems).ArrayNum) {
        uVar29 = ~uVar36 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      pFVar19 = (this->Elems).AllocatorInstance.Data;
      lVar33 = 0;
      pTVar30 = pTVar1;
      do {
        if ((*(double *)pTVar30 <=
             *(double *)
              (pFVar19 + ((lVar37 + 8) - (longlong)pTVar1) + (longlong)&pTVar30->field_0x0) &&
             *(double *)
              (pFVar19 + ((lVar37 + 8) - (longlong)pTVar1) + (longlong)&pTVar30->field_0x0) !=
             *(double *)pTVar30) ||
           (*(double *)(pFVar19 + (lVar37 - (longlong)pTVar1) + 0x20 + (longlong)pTVar30) <
            *(double *)(((longlong)param_1 - (longlong)pTVar1) + (longlong)pTVar30)))
        goto LAB_148c15210;
        lVar33 = lVar33 + 1;
        pTVar30 = (TVector<double,3> *)&pTVar30->field_0x8;
      } while (lVar33 < 3);
      local_180 = *(undefined8 *)(pFVar19 + lVar37 + 8);
      uStack_178 = *(undefined8 *)(pFVar19 + lVar37 + 8 + 8);
      local_188 = *(undefined4 *)(pFVar19 + lVar37);
      local_170 = *(undefined8 *)(pFVar19 + lVar37 + 0x18);
      pTVar20 = param_2->CollectedResults;
      local_168 = *(undefined8 *)(pFVar19 + lVar37 + 0x20);
      uStack_160 = *(undefined8 *)(pFVar19 + lVar37 + 0x20 + 8);
      local_184 = 1;
      local_158 = *(undefined8 *)(pFVar19 + lVar37 + 0x30);
      pFVar19 = (pTVar20->AllocatorInstance).Data;
      if (((pFVar19 <= (FScriptContainerElement *)&local_188) &&
          ((FScriptContainerElement *)&local_188 < pFVar19 + (longlong)pTVar20->ArrayMax * 4)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar21 = (code *)swi(3);
        uVar26 = (*pcVar21)();
        return (bool)uVar26;
      }
      iVar28 = pTVar20->ArrayNum;
      if (iVar28 == pTVar20->ArrayMax) {
        iVar28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
      }
      pTVar20->ArrayNum = iVar28 + 1;
      *(undefined4 *)((pTVar20->AllocatorInstance).Data + (longlong)iVar28 * 4) = local_188;
LAB_148c15210:
      uVar36 = uVar36 + 1;
      lVar37 = lVar37 + 0x38;
      lVar40 = lVar40 + -1;
    } while (lVar40 != 0);
  }
  return true;
}

// QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor> @ 148c15fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TVector<double,3> *param_1,FQueryFastDataVoid *param_2,TVector<double,3> *param_3,
          TAABB<double,3> *param_4,FSimpleVisitor *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,bool *param_8)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  code *pcVar7;
  FSimpleVisitor *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  FVar15;
  void *_Dst;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  bool bVar19;
  undefined1 auStackY_11a8 [32];
  undefined1 local_1158 [8];
  undefined8 local_1150;
  undefined8 uStack_1148;
  FSimpleVisitor *local_1140;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *local_1138;
  TVector<double,3> *local_1130;
  bool *local_1128;
  TVector<double,3> *local_1120;
  TVector<double,3> *local_1118;
  TVector<double,3> *local_1110;
  undefined4 local_1108;
  undefined1 local_1104;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  double local_10d0 [12];
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  local_1070;
  int local_78;
  int local_74;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x148c15fbf;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_11a8;
  pFVar17 = (this->GlobalPayloads).AllocatorInstance.Data;
  iVar13 = (this->GlobalPayloads).ArrayNum;
  local_1118 = param_6;
  pFVar16 = pFVar17 + 0x20;
  pFVar18 = pFVar17 + (longlong)iVar13 * 0x38;
  local_1120 = param_7;
  local_1140 = param_5;
  local_1128 = param_8;
  local_1150 = param_2;
  local_1138 = this;
  local_1130 = param_1;
  local_1110 = param_3;
  while( true ) {
    if ((this->GlobalPayloads).ArrayNum != iVar13) {
      local_1158[0] = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1158);
    }
    if (pFVar17 == pFVar18) break;
    lVar14 = 0;
    local_10d0[0] = *(double *)(pFVar16 + -0x18);
    local_10d0[1] = (double)*(undefined8 *)(pFVar16 + -0x10);
    local_10d0[2] = (double)*(undefined8 *)(pFVar16 + -8);
    local_10d0[3] = (double)*(undefined8 *)pFVar16;
    local_10d0[4] = (double)*(undefined8 *)(pFVar16 + 8);
    local_10d0[5] = (double)*(undefined8 *)(pFVar16 + 0x10);
    do {
      dVar3 = *(double *)(&(param_4->MMin).field_0x0 + lVar14);
      pdVar2 = (double *)((longlong)local_10d0 + lVar14 + 0x18);
      if ((*pdVar2 <= dVar3 && dVar3 != *pdVar2) ||
         (*(double *)(&(param_4->MMax).field_0x0 + lVar14) <
          *(double *)((longlong)local_10d0 + lVar14))) goto LAB_148c16171;
      lVar14 = lVar14 + 8;
    } while (lVar14 < 0x18);
    local_1100 = *(undefined8 *)(pFVar16 + -0x18);
    uStack_10f8 = *(undefined8 *)(pFVar16 + -0x10);
    local_1108 = *(undefined4 *)pFVar17;
    local_10f0 = *(undefined8 *)(pFVar16 + -8);
    pTVar5 = local_1140->CollectedResults;
    local_10e8 = *(undefined8 *)pFVar16;
    uStack_10e0 = *(undefined8 *)(pFVar16 + 8);
    local_1104 = 1;
    local_10d8 = *(undefined8 *)(pFVar16 + 0x10);
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_1108) &&
        ((FScriptContainerElement *)&local_1108 < pFVar6 + (longlong)pTVar5->ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    iVar11 = pTVar5->ArrayNum;
    if (iVar11 == pTVar5->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
    }
    pTVar5->ArrayNum = iVar11 + 1;
    *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_1108;
LAB_148c16171:
    pFVar17 = pFVar17 + 0x38;
    pFVar16 = pFVar16 + 0x38;
  }
  this_00 = (this->DirtyElementTree).Ptr;
  if ((this_00 !=
       (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        *)0x0) &&
     (bVar9 = QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
                        (this_00,local_1130,local_1150,local_1110,param_4,local_1140,local_1118,
                         local_1120,local_1128), !bVar9)) {
    return bVar9;
  }
  pFVar8 = local_1140;
  local_1070.SecondaryData =
       (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
        )0x0;
  local_78 = 0;
  local_74 = 0xff;
  if (this->bDynamicTree == false) {
    if ((this->Nodes).ArrayNum == 0) goto LAB_148c164b3;
    local_1150 = (FQueryFastDataVoid *)((ulonglong)local_1150._4_4_ << 0x20);
  }
  else {
    if (this->RootNode == -1) goto LAB_148c164b3;
    local_1150 = (FQueryFastDataVoid *)CONCAT44(local_1150._4_4_,this->RootNode);
  }
  iVar13 = 1;
  local_78 = 1;
  bVar9 = false;
  bVar19 = false;
  local_1070.InlineData._0_8_ = local_1150;
  local_1070.InlineData[8] = '\0';
  local_1070.InlineData[9] = '\0';
  local_1070.InlineData[10] = '\0';
  local_1070.InlineData[0xb] = '\0';
  local_1070.InlineData[0xc] = '\0';
  local_1070.InlineData[0xd] = '\0';
  local_1070.InlineData[0xe] = '\0';
  local_1070.InlineData[0xf] = '\0';
  uStack_1148 = 0;
  do {
    if ((bVar19 || bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar13 = local_78, bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    FVar15 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_1070;
    if (local_1070.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar15 = local_1070.SecondaryData;
    }
    lVar14 = (longlong)(iVar13 + -1) * 0x10;
    uVar4 = *(uint *)(lVar14 + (longlong)FVar15);
    FVar15 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_1070;
    if (local_1070.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar15 = local_1070.SecondaryData;
    }
    _Dst = (void *)(lVar14 + (longlong)FVar15);
    iVar11 = (iVar13 - (iVar13 + -1)) + -1;
    if (iVar11 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar11 << 4);
      iVar13 = local_78;
    }
    local_78 = iVar13 + -1;
    uVar12 = 0;
    if ((int)uVar4 < (this->Nodes).ArrayNum) {
      uVar12 = ~uVar4 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pFVar17 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x70;
    pFVar16 = pFVar17 + 0x60;
    pFVar18 = pFVar16;
    iVar13 = local_78;
    if (((byte)pFVar17[0x6c] & 1) == 0) {
      for (; pFVar17 != pFVar16; pFVar17 = pFVar17 + 0x30) {
        local_10d0[6] = (double)*(undefined8 *)pFVar17;
        local_10d0[7] = (double)*(undefined8 *)(pFVar17 + 8);
        local_10d0[8] = (double)*(undefined8 *)(pFVar17 + 0x10);
        local_10d0[9] = (double)*(undefined8 *)(pFVar17 + 0x18);
        local_10d0[10] = (double)*(undefined8 *)(pFVar17 + 0x20);
        local_10d0[0xb] = (double)*(undefined8 *)(pFVar17 + 0x28);
        lVar14 = 0;
        do {
          dVar3 = *(double *)(&(param_4->MMin).field_0x0 + lVar14);
          pdVar2 = (double *)((longlong)local_10d0 + lVar14 + 0x48);
          if ((*pdVar2 <= dVar3 && dVar3 != *pdVar2) ||
             (*(double *)(&(param_4->MMax).field_0x0 + lVar14) <
              *(double *)((longlong)local_10d0 + lVar14 + 0x30))) goto LAB_148c16494;
          lVar14 = lVar14 + 8;
        } while (lVar14 < 0x18);
        local_1150._4_4_ = (uint)((ulonglong)local_1150 >> 0x20);
        local_1150 = (FQueryFastDataVoid *)CONCAT44(local_1150._4_4_,*(uint *)pFVar18);
        uStack_1148 = 0;
        if (iVar13 == local_74) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>_::__l2::FNodeQueueEntry>_>
                             (0x810,&local_1070,&local_74);
        }
        local_78 = iVar13 + 1;
        FVar15 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                  )&local_1070;
        if (local_1070.SecondaryData !=
            (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
             )0x0) {
          FVar15 = local_1070.SecondaryData;
        }
        puVar1 = (undefined8 *)((longlong)FVar15 + (longlong)iVar13 * 0x10);
        *puVar1 = local_1150;
        puVar1[1] = uStack_1148;
        iVar13 = local_78;
LAB_148c16494:
        pFVar18 = pFVar18 + 4;
        this = local_1138;
      }
    }
    else {
      uVar4 = *(uint *)pFVar16;
      uVar12 = 0;
      if ((int)uVar4 < *(int *)&(this->Leaves).field_0x8) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      bVar9 = TAABBTreeLeafArray<int,0,double>::
              OverlapFast<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
                        ((TAABBTreeLeafArray<int,0,double> *)
                         (*(longlong *)&this->Leaves + (longlong)(int)uVar4 * 0x18),param_4,pFVar8);
      iVar13 = local_78;
      if (!bVar9) {
        bVar9 = false;
        goto LAB_148c164b5;
      }
    }
    bVar9 = iVar13 < 0;
    bVar19 = iVar13 == 0;
  } while (!bVar19);
LAB_148c164b3:
  bVar9 = true;
LAB_148c164b5:
  if (local_1070.SecondaryData !=
      (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
       )0x0) {
    FMemory::Free((void *)local_1070.SecondaryData);
  }
  return bVar9;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 148c17840

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (ushort param_1,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0xff;
    uVar7 = (ulonglong)(byte)param_1;
    if (0xff < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x100) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>_> @ 148c17910

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>_::__l2::FNodeQueueEntry>_>
          (ushort param_1,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0xff;
    uVar7 = (ulonglong)(byte)param_1;
    if (0xff < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x100) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 148c179e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (ushort param_1,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0xff;
    uVar7 = (ulonglong)(byte)param_1;
    if (0xff < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x100) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 148c17ab0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (ushort param_1,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0xff;
    uVar7 = (ulonglong)(byte)param_1;
    if (0xff < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x100) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 148c17b80

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0xff;
  if (0xff < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>_> @ 148c17c40

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>_::__l2::FNodeQueueEntry>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0xff;
  if (0xff < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 148c17d00

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0xff;
  if (0xff < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 148c17dc0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0xff;
  if (0xff < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// StaticEnum<enum_EClothMassMode> @ 148c182d0

UEnum * __cdecl StaticEnum<enum_EClothMassMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode,
                       (UObject *)pUVar1,L"EClothMassMode");
  }
  return Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton;
}

// StaticEnum<enum_EClothingWindMethod_Legacy> @ 148c18310

UEnum * __cdecl StaticEnum<enum_EClothingWindMethod_Legacy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy,
                       (UObject *)pUVar1,L"EClothingWindMethod_Legacy");
  }
  return Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton;
}

// StaticEnum<enum_EWeightMapTargetCommon> @ 148c18350

UEnum * __cdecl StaticEnum<enum_EWeightMapTargetCommon>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWeightMapTargetCommon.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UEnum_EWeightMapTargetCommon.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon,
                       (UObject *)pUVar1,L"EWeightMapTargetCommon");
  }
  return Z_Registration_Info_UEnum_EWeightMapTargetCommon.OuterSingleton;
}

// ~TFunction_OwnedObject<`FClothPhysicalMeshData::CalculateInverseMasses'::__l2::<lambda_2>,0,0> @ 148c1a5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FClothPhysicalMeshData::CalculateInverseMasses'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FClothPhysicalMeshData::CalculateInverseMasses_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FClothPhysicalMeshData::CalculateInverseMasses'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 148c1b810

bool __thiscall
``FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>
::operator()(void *this,int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_00;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_01;
  float *pfVar4;
  
  this_00 = TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
            ::FindChecked(*(TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
                            **)this,param_1);
  iVar2 = *(int *)((longlong)this + 8);
  this_01 = TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
            ::FindChecked(*(TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
                            **)this,param_2);
  iVar3 = *(int *)((longlong)this + 8);
  pfVar4 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
           FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                        *)this_00,iVar2);
  fVar1 = *pfVar4;
  pfVar4 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
           FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                        *)this_01,iVar3);
  return fVar1 < *pfVar4;
}

// operator() @ 148c1c920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`ClothingMeshUtils::SkinPhysicsMesh'::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  bool bVar46;
  uint uVar47;
  longlong lVar48;
  longlong lVar49;
  uint uVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  uint uVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  double dVar77;
  double dVar84;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  uint uVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined4 uVar90;
  undefined4 uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  
  lVar52 = *(longlong *)this;
  lVar49 = (longlong)(int)param_1;
  uVar50 = ~param_1 >> 0x1f;
  uVar47 = 0;
  if ((int)param_1 < *(int *)(lVar52 + 0x98)) {
    uVar47 = uVar50;
  }
  if ((uVar47 == 0) &&
     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar46)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar52 = *(longlong *)(lVar52 + 0x90);
  lVar53 = *(longlong *)this;
  lVar51 = lVar49 * 0x4c;
  uVar47 = 0;
  if ((int)param_1 < *(int *)(lVar53 + 0x98)) {
    uVar47 = uVar50;
  }
  if ((uVar47 == 0) &&
     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar46)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar53 = *(longlong *)(lVar53 + 0x90);
  plVar5 = *(longlong **)this;
  uVar47 = 0;
  if ((int)param_1 < (int)plVar5[1]) {
    uVar47 = uVar50;
  }
  if ((uVar47 == 0) &&
     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar46)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar6 = *(longlong *)this;
  lVar7 = *plVar5;
  uVar47 = 0;
  if ((int)param_1 < *(int *)(lVar6 + 0x18)) {
    uVar47 = uVar50;
  }
  if ((uVar47 == 0) &&
     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar46)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  plVar5 = *(longlong **)((longlong)this + 0x20);
  lVar6 = *(longlong *)(lVar6 + 0x10);
  uVar47 = 0;
  if ((int)param_1 < (int)plVar5[1]) {
    uVar47 = uVar50;
  }
  if ((uVar47 == 0) &&
     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar46)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  plVar8 = *(longlong **)((longlong)this + 0x28);
  lVar9 = *plVar5;
  uVar47 = 0;
  if ((int)param_1 < (int)plVar8[1]) {
    uVar47 = uVar50;
  }
  if ((uVar47 == 0) &&
     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar46)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar10 = *(longlong *)this;
  lVar11 = *plVar8;
  uVar47 = 0;
  if ((int)param_1 < *(int *)(lVar10 + 0x98)) {
    uVar47 = uVar50;
  }
  if ((uVar47 == 0) &&
     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar46)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  switch(*(undefined4 *)(*(longlong *)(lVar10 + 0x90) + lVar51)) {
  case 1:
    goto LAB_148c1dcc8;
  case 2:
    goto LAB_148c1db38;
  case 3:
    goto LAB_148c1d9a8;
  case 4:
    goto LAB_148c1d818;
  case 5:
    goto LAB_148c1d694;
  case 6:
    goto LAB_148c1d510;
  case 7:
    goto LAB_148c1d38c;
  case 8:
    goto LAB_148c1d211;
  case 9:
    goto LAB_148c1d096;
  case 10:
    goto LAB_148c1cf1b;
  case 0xb:
    break;
  case 0xc:
    fVar71 = *(float *)(lVar7 + lVar49 * 0xc);
    fVar72 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
    fVar76 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
    fVar85 = *(float *)(lVar53 + 0x48 + lVar51);
    lVar10 = *(longlong *)((longlong)this + 0x18);
    lVar48 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x10) +
                     (ulonglong)*(ushort *)(lVar52 + 0x1a + lVar51) * 4) * 0x40;
    pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
    fVar29 = pfVar2[1];
    fVar30 = pfVar2[2];
    pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
    fVar31 = pfVar3[1];
    fVar32 = pfVar3[2];
    pfVar1 = (float *)(lVar48 + lVar10);
    fVar33 = pfVar1[1];
    fVar34 = pfVar1[2];
    pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
    fVar35 = pfVar4[1];
    fVar36 = pfVar4[2];
    *(float *)(lVar9 + lVar49 * 0xc) =
         (fVar72 * *pfVar2 + fVar71 * *pfVar1 + fVar76 * *pfVar3 + *pfVar4 * 1.0) * fVar85 +
         *(float *)(lVar9 + lVar49 * 0xc);
    *(float *)(lVar9 + 4 + lVar49 * 0xc) =
         (fVar72 * fVar29 + fVar71 * fVar33 + fVar76 * fVar31 + fVar35 * 1.0) * fVar85 +
         *(float *)(lVar9 + 4 + lVar49 * 0xc);
    *(float *)(lVar9 + 8 + lVar49 * 0xc) =
         (fVar72 * fVar30 + fVar71 * fVar34 + fVar76 * fVar32 + fVar36 * 1.0) * fVar85 +
         *(float *)(lVar9 + 8 + lVar49 * 0xc);
    fVar71 = *(float *)(lVar6 + lVar49 * 0xc);
    fVar72 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
    fVar76 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
    pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
    fVar29 = pfVar2[1];
    fVar30 = pfVar2[2];
    pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
    fVar31 = pfVar3[1];
    fVar32 = pfVar3[2];
    pfVar1 = (float *)(lVar48 + lVar10);
    fVar33 = pfVar1[1];
    fVar34 = pfVar1[2];
    pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
    fVar35 = pfVar4[1];
    fVar36 = pfVar4[2];
    *(float *)(lVar11 + lVar49 * 0xc) =
         (fVar72 * *pfVar2 + fVar71 * *pfVar1 + fVar76 * *pfVar3 + *pfVar4 * 0.0) * fVar85 +
         *(float *)(lVar11 + lVar49 * 0xc);
    *(float *)(lVar11 + 4 + lVar49 * 0xc) =
         (fVar72 * fVar29 + fVar71 * fVar33 + fVar76 * fVar31 + fVar35 * 0.0) * fVar85 +
         *(float *)(lVar11 + 4 + lVar49 * 0xc);
    *(float *)(lVar11 + 8 + lVar49 * 0xc) =
         (fVar72 * fVar30 + fVar71 * fVar34 + fVar76 * fVar32 + fVar36 * 0.0) * fVar85 +
         *(float *)(lVar11 + 8 + lVar49 * 0xc);
    break;
  default:
    goto switchD_148c1cc10_default;
  }
  fVar71 = *(float *)(lVar53 + 0x44 + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 0x18 + lVar51) * 4) * 0x40;
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 1.0) +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 1.0) +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 0.0) +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 0.0) +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1cf1b:
  fVar71 = *(float *)(lVar53 + 0x40 + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 0x16 + lVar51) * 4) * 0x40;
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar29 = pfVar2[1];
  fVar30 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar31 = pfVar3[1];
  fVar32 = pfVar3[2];
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar33 = pfVar1[1];
  fVar34 = pfVar1[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) * fVar71 +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       (fVar76 * fVar29 + fVar72 * fVar33 + fVar85 * fVar31 + fVar35 * 1.0) * fVar71 +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       (fVar76 * fVar30 + fVar72 * fVar34 + fVar85 * fVar32 + fVar36 * 1.0) * fVar71 +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar29 = pfVar2[1];
  fVar30 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar31 = pfVar3[1];
  fVar32 = pfVar3[2];
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar33 = pfVar1[1];
  fVar34 = pfVar1[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) * fVar71 +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       (fVar76 * fVar29 + fVar72 * fVar33 + fVar85 * fVar31 + fVar35 * 0.0) * fVar71 +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       (fVar76 * fVar30 + fVar72 * fVar34 + fVar85 * fVar32 + fVar36 * 0.0) * fVar71 +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1d096:
  fVar71 = *(float *)(lVar53 + 0x3c + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 0x14 + lVar51) * 4) * 0x40;
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar29 = pfVar2[1];
  fVar30 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar31 = pfVar3[1];
  fVar32 = pfVar3[2];
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar33 = pfVar1[1];
  fVar34 = pfVar1[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) * fVar71 +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       (fVar76 * fVar29 + fVar72 * fVar33 + fVar85 * fVar31 + fVar35 * 1.0) * fVar71 +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       (fVar76 * fVar30 + fVar72 * fVar34 + fVar85 * fVar32 + fVar36 * 1.0) * fVar71 +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar29 = pfVar2[1];
  fVar30 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar31 = pfVar3[1];
  fVar32 = pfVar3[2];
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar33 = pfVar1[1];
  fVar34 = pfVar1[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) * fVar71 +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       (fVar76 * fVar29 + fVar72 * fVar33 + fVar85 * fVar31 + fVar35 * 0.0) * fVar71 +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       (fVar76 * fVar30 + fVar72 * fVar34 + fVar85 * fVar32 + fVar36 * 0.0) * fVar71 +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1d211:
  fVar71 = *(float *)(lVar53 + 0x38 + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 0x12 + lVar51) * 4) * 0x40;
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar29 = pfVar2[1];
  fVar30 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar31 = pfVar3[1];
  fVar32 = pfVar3[2];
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar33 = pfVar1[1];
  fVar34 = pfVar1[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) * fVar71 +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       (fVar76 * fVar29 + fVar72 * fVar33 + fVar85 * fVar31 + fVar35 * 1.0) * fVar71 +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       (fVar76 * fVar30 + fVar72 * fVar34 + fVar85 * fVar32 + fVar36 * 1.0) * fVar71 +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar29 = pfVar2[1];
  fVar30 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar31 = pfVar3[1];
  fVar32 = pfVar3[2];
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar33 = pfVar1[1];
  fVar34 = pfVar1[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) * fVar71 +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       (fVar76 * fVar29 + fVar72 * fVar33 + fVar85 * fVar31 + fVar35 * 0.0) * fVar71 +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       (fVar76 * fVar30 + fVar72 * fVar34 + fVar85 * fVar32 + fVar36 * 0.0) * fVar71 +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1d38c:
  fVar71 = *(float *)(lVar53 + 0x34 + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 0x10 + lVar51) * 4) * 0x40;
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 1.0) +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 1.0) +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 0.0) +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 0.0) +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1d510:
  fVar71 = *(float *)(lVar53 + 0x30 + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 0xe + lVar51) * 4) * 0x40;
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 1.0) +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 1.0) +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 0.0) +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 0.0) +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1d694:
  fVar71 = *(float *)(lVar53 + 0x2c + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 0xc + lVar51) * 4) * 0x40;
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 1.0) +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 1.0) +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 0.0) +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 0.0) +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1d818:
  fVar71 = *(float *)(lVar53 + 0x28 + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 10 + lVar51) * 4) * 0x40;
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 1.0) +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 1.0) +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 0.0) +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 0.0) +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1d9a8:
  fVar71 = *(float *)(lVar53 + 0x24 + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 8 + lVar51) * 4) * 0x40;
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 1.0) +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 1.0) +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 0.0) +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 0.0) +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1db38:
  fVar71 = *(float *)(lVar53 + 0x20 + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  lVar48 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 6 + lVar51) * 4) * 0x40;
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 1.0) +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 1.0) +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar1 = (float *)(lVar48 + lVar10);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar48 + 0x10 + lVar10);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar48 + 0x20 + lVar10);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar48 + 0x30 + lVar10);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 0.0) +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 0.0) +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
LAB_148c1dcc8:
  fVar71 = *(float *)(lVar53 + 0x1c + lVar51);
  fVar72 = *(float *)(lVar7 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar7 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar7 + 8 + lVar49 * 0xc);
  lVar53 = *(longlong *)((longlong)this + 0x18);
  lVar52 = (longlong)
           *(int *)(*(longlong *)((longlong)this + 0x10) +
                   (ulonglong)*(ushort *)(lVar52 + 4 + lVar51) * 4) * 0x40;
  pfVar1 = (float *)(lVar52 + lVar53);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar52 + 0x10 + lVar53);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar52 + 0x20 + lVar53);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar52 + 0x30 + lVar53);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar9 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 1.0) +
       *(float *)(lVar9 + lVar49 * 0xc);
  *(float *)(lVar9 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 1.0) +
       *(float *)(lVar9 + 4 + lVar49 * 0xc);
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 1.0) +
       *(float *)(lVar9 + 8 + lVar49 * 0xc);
  fVar72 = *(float *)(lVar6 + lVar49 * 0xc);
  fVar76 = *(float *)(lVar6 + 4 + lVar49 * 0xc);
  fVar85 = *(float *)(lVar6 + 8 + lVar49 * 0xc);
  pfVar1 = (float *)(lVar52 + lVar53);
  fVar29 = pfVar1[1];
  fVar30 = pfVar1[2];
  pfVar2 = (float *)(lVar52 + 0x10 + lVar53);
  fVar31 = pfVar2[1];
  fVar32 = pfVar2[2];
  pfVar3 = (float *)(lVar52 + 0x20 + lVar53);
  fVar33 = pfVar3[1];
  fVar34 = pfVar3[2];
  pfVar4 = (float *)(lVar52 + 0x30 + lVar53);
  fVar35 = pfVar4[1];
  fVar36 = pfVar4[2];
  *(float *)(lVar11 + lVar49 * 0xc) =
       fVar71 * (fVar76 * *pfVar2 + fVar72 * *pfVar1 + fVar85 * *pfVar3 + *pfVar4 * 0.0) +
       *(float *)(lVar11 + lVar49 * 0xc);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar31 + fVar72 * fVar29 + fVar85 * fVar33 + fVar35 * 0.0) +
       *(float *)(lVar11 + 4 + lVar49 * 0xc);
  *(float *)(lVar11 + 8 + lVar49 * 0xc) =
       fVar71 * (fVar76 * fVar32 + fVar72 * fVar30 + fVar85 * fVar34 + fVar36 * 0.0) +
       *(float *)(lVar11 + 8 + lVar49 * 0xc);
switchD_148c1cc10_default:
  uVar45 = _UNK_150689688;
  uVar44 = ___xmm_3ff00000000000003ff0000000000000;
  uVar43 = _UNK_15061cc8c;
  uVar42 = _UNK_15061cc88;
  uVar41 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar39 = __real_3ff0000000000000;
  pdVar12 = *(double **)((longlong)this + 8);
  dVar17 = pdVar12[2];
  dVar19 = pdVar12[3];
  dVar25 = *pdVar12;
  dVar26 = pdVar12[1];
  dVar77 = dVar25 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar84 = dVar26 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar73._8_4_ = SUB84(dVar84,0);
  auVar73._0_8_ = dVar77;
  auVar73._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
  uVar54 = (uint)__real_3ff0000000000000;
  dVar16 = dVar17 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar18 = dVar19 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar67._8_4_ = SUB84(dVar18,0);
  auVar67._0_8_ = dVar16;
  auVar67._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar74 = blendpd(auVar73,auVar67,2);
  dVar55 = (double)*(float *)(lVar9 + 8 + lVar49 * 0xc) - pdVar12[6];
  auVar56._8_4_ = SUB84(dVar16,0);
  auVar56._0_8_ = dVar84;
  auVar56._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  dVar22 = (double)*(float *)(lVar9 + lVar49 * 0xc) - pdVar12[4];
  dVar65 = (double)*(float *)(lVar9 + 4 + lVar49 * 0xc) - pdVar12[5];
  uVar90 = (undefined4)((ulonglong)dVar65 >> 0x20);
  auVar96._8_4_ = SUB84(dVar65,0);
  auVar96._0_8_ = dVar22;
  auVar96._12_4_ = uVar90;
  auVar66._8_4_ = SUB84(dVar65,0);
  auVar66._0_8_ = dVar22;
  auVar66._12_4_ = uVar90;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar55;
  auVar67 = blendpd(auVar66,auVar23,2);
  auVar97._0_8_ = auVar96._8_8_ * dVar77 - dVar84 * dVar22;
  auVar97._8_8_ = dVar55 * dVar84 - auVar56._8_8_ * dVar65;
  auVar68._0_8_ = auVar67._0_8_ * dVar16 - auVar74._0_8_ * dVar55;
  auVar68._8_8_ = auVar67._8_8_ * dVar18 - auVar74._8_8_ * 0.0;
  dVar20 = auVar97._8_8_ + auVar97._8_8_;
  dVar21 = auVar68._0_8_ + auVar68._0_8_;
  uVar90 = SUB84(dVar21,0);
  uVar91 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar67 = blendpd(auVar97,auVar68,2);
  auVar98._0_8_ = auVar67._0_8_ + auVar67._0_8_;
  auVar98._8_8_ = auVar67._8_8_ + auVar67._8_8_;
  auVar92._8_4_ = uVar90;
  auVar92._0_8_ = dVar20;
  auVar92._12_4_ = uVar91;
  auVar57._8_4_ = uVar90;
  auVar57._0_8_ = dVar20;
  auVar57._12_4_ = uVar91;
  auVar86._8_4_ = uVar90;
  auVar86._0_8_ = dVar20;
  auVar86._12_4_ = uVar91;
  auVar27._4_8_ = dVar84;
  auVar27._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar78._0_8_ = auVar27._0_8_ << 0x20;
  auVar78._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar78._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar93._0_8_ = auVar92._8_8_ * dVar77 - dVar20 * dVar84;
  auVar93._8_8_ = auVar98._0_8_ * dVar84 - auVar57._8_8_ * dVar16;
  auVar67 = blendpd(auVar86,auVar98,2);
  auVar79._8_8_ = auVar78._8_8_;
  auVar79._0_8_ = __real_3ff0000000000000;
  auVar58._8_4_ = SUB84(auVar98._8_8_,0);
  auVar58._0_8_ = auVar98._0_8_;
  auVar58._12_4_ = (int)((ulonglong)auVar98._8_8_ >> 0x20);
  auVar87._0_8_ = auVar67._0_8_ * dVar16 - auVar98._0_8_ * auVar74._0_8_;
  auVar87._8_8_ = auVar67._8_8_ * dVar18 - auVar58._8_8_ * auVar74._8_8_;
  uVar83 = (uint)((ulonglong)__real_3ff0000000000000 >> 0x20);
  lVar52 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar83,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & uVar54) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar37._8_8_ = _UNK_150689688;
  auVar37._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
  uVar47 = (uint)___xmm_3ff00000000000003ff0000000000000;
  uVar50 = (uint)((ulonglong)___xmm_3ff00000000000003ff0000000000000 >> 0x20);
  uVar14 = (uint)_UNK_150689688;
  uVar15 = (uint)((ulonglong)_UNK_150689688 >> 0x20);
  auVar74 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
  lVar53 = -(ulonglong)
            ((double)CONCAT44(uVar50 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar47 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar51 = -(ulonglong)
            ((double)CONCAT44(uVar15 & _UNK_15061cc8c,uVar14 & _UNK_15061cc88) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar59._8_4_ = SUB84(auVar93._8_8_,0);
  auVar59._0_8_ = auVar93._0_8_;
  auVar59._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
  auVar67 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar79);
  dVar16 = (double)CONCAT44(~(uint)((ulonglong)lVar53 >> 0x20) & auVar74._4_4_,
                            ~(uint)lVar53 & auVar74._0_4_) *
           (dVar20 * dVar18 + dVar22 + auVar59._8_8_);
  dVar20 = (double)CONCAT44(~(uint)((ulonglong)lVar51 >> 0x20) & auVar74._12_4_,
                            ~(uint)lVar51 & auVar74._8_4_) *
           (dVar21 * dVar18 + dVar65 + auVar87._0_8_);
  auVar60._0_8_ = (ulonglong)dVar16 & 0xffffffff00000000;
  auVar60._8_4_ = SUB84(dVar20,0);
  auVar60._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar74 = blendpd(auVar93,auVar87,2);
  *(float *)(lVar9 + lVar49 * 0xc) = (float)dVar16;
  *(float *)(lVar9 + 4 + lVar49 * 0xc) = (float)auVar60._8_8_;
  *(float *)(lVar9 + 8 + lVar49 * 0xc) =
       (float)((double)CONCAT44(~(uint)((ulonglong)lVar52 >> 0x20) & auVar67._4_4_,
                                ~(uint)lVar52 & auVar67._0_4_) *
              (auVar98._0_8_ * dVar18 + dVar55 + auVar74._0_8_));
  dVar25 = dVar25 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar26 = dVar26 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar90 = (undefined4)((ulonglong)dVar26 >> 0x20);
  auVar75._8_4_ = SUB84(dVar26,0);
  auVar75._0_8_ = dVar25;
  auVar75._12_4_ = uVar90;
  auVar80._8_4_ = SUB84(dVar26,0);
  auVar80._0_8_ = dVar25;
  auVar80._12_4_ = uVar90;
  dVar17 = dVar17 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar19 = dVar19 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar22 = (double)*(float *)(lVar11 + 8 + lVar49 * 0xc);
  dVar21 = (double)*(float *)(lVar11 + lVar49 * 0xc);
  dVar55 = auVar75._8_8_;
  auVar74._8_4_ = SUB84(dVar19,0);
  auVar74._0_8_ = dVar17;
  auVar74._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  auVar74 = blendpd(auVar80,auVar74,2);
  dVar16 = (double)*(float *)(lVar11 + 4 + lVar49 * 0xc);
  auVar61._8_4_ = SUB84(dVar17,0);
  auVar61._0_8_ = dVar55;
  auVar61._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  uVar90 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar99._8_4_ = SUB84(dVar16,0);
  auVar99._0_8_ = dVar21;
  auVar99._12_4_ = uVar90;
  auVar69._8_4_ = SUB84(dVar16,0);
  auVar69._0_8_ = dVar21;
  auVar69._12_4_ = uVar90;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar22;
  auVar67 = blendpd(auVar69,auVar24,2);
  auVar100._0_8_ = auVar99._8_8_ * dVar25 - dVar55 * dVar21;
  auVar100._8_8_ = dVar22 * dVar26 - auVar61._8_8_ * dVar16;
  dVar65 = auVar74._8_8_;
  auVar70._0_8_ = auVar67._0_8_ * dVar17 - auVar74._0_8_ * dVar22;
  auVar70._8_8_ = auVar67._8_8_ * dVar19 - dVar65 * 0.0;
  dVar18 = auVar100._8_8_ + auVar100._8_8_;
  dVar20 = auVar70._0_8_ + auVar70._0_8_;
  uVar90 = SUB84(dVar20,0);
  uVar91 = (undefined4)((ulonglong)dVar20 >> 0x20);
  auVar67 = blendpd(auVar100,auVar70,2);
  auVar101._0_8_ = auVar67._0_8_ + auVar67._0_8_;
  auVar101._8_8_ = auVar67._8_8_ + auVar67._8_8_;
  auVar94._8_4_ = uVar90;
  auVar94._0_8_ = dVar18;
  auVar94._12_4_ = uVar91;
  auVar62._8_4_ = uVar90;
  auVar62._0_8_ = dVar18;
  auVar62._12_4_ = uVar91;
  auVar88._8_4_ = uVar90;
  auVar88._0_8_ = dVar18;
  auVar88._12_4_ = uVar91;
  auVar67 = blendpd(auVar88,auVar101,2);
  auVar95._0_8_ = auVar94._8_8_ * dVar25 - dVar18 * dVar55;
  auVar95._8_8_ = auVar101._0_8_ * dVar26 - auVar62._8_8_ * dVar17;
  auVar63._8_4_ = SUB84(auVar101._8_8_,0);
  auVar63._0_8_ = auVar101._0_8_;
  auVar63._12_4_ = (int)((ulonglong)auVar101._8_8_ >> 0x20);
  auVar28._4_8_ = dVar65;
  auVar28._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar81._0_8_ = auVar28._0_8_ << 0x20;
  auVar81._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar81._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar89._0_8_ = auVar67._0_8_ * dVar17 - auVar101._0_8_ * auVar74._0_8_;
  auVar89._8_8_ = auVar67._8_8_ * dVar19 - auVar63._8_8_ * dVar65;
  auVar82._8_8_ = auVar81._8_8_;
  auVar82._0_8_ = uVar39;
  auVar38._8_8_ = uVar45;
  auVar38._0_8_ = uVar44;
  lVar52 = -(ulonglong)
            ((double)CONCAT44(uVar41 & uVar83,uVar40 & uVar54) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar74 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
  lVar53 = -(ulonglong)
            ((double)CONCAT44(uVar50 & uVar41,uVar47 & uVar40) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar51 = -(ulonglong)
            ((double)CONCAT44(uVar15 & uVar43,uVar14 & uVar42) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar64._8_4_ = SUB84(auVar95._8_8_,0);
  auVar64._0_8_ = auVar95._0_8_;
  auVar64._12_4_ = (int)((ulonglong)auVar95._8_8_ >> 0x20);
  auVar67 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar82);
  fVar72 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar53 >> 0x20) & auVar74._4_4_,
                                    ~(uint)lVar53 & auVar74._0_4_) *
                  (dVar18 * dVar19 + dVar21 + auVar64._8_8_));
  fVar76 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar51 >> 0x20) & auVar74._12_4_,
                                    ~(uint)lVar51 & auVar74._8_4_) *
                  (dVar20 * dVar19 + dVar16 + auVar89._0_8_));
  *(float *)(lVar11 + lVar49 * 0xc) = fVar72;
  auVar74 = blendpd(auVar95,auVar89,2);
  *(float *)(lVar11 + 4 + lVar49 * 0xc) = fVar76;
  fVar85 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar52 >> 0x20) & auVar67._4_4_,
                                    ~(uint)lVar52 & auVar67._0_4_) *
                  (auVar101._0_8_ * dVar19 + dVar22 + auVar74._0_8_));
  *(float *)(lVar11 + 8 + lVar49 * 0xc) = fVar85;
  fVar71 = fVar76 * fVar76 + fVar72 * fVar72 + fVar85 * fVar85;
  if (__real_322bcc77 < fVar71) {
    fVar71 = __real_3f800000 / SQRT(fVar71);
    *(float *)(lVar11 + lVar49 * 0xc) = fVar72 * fVar71;
    *(float *)(lVar11 + 4 + lVar49 * 0xc) = fVar76 * fVar71;
    *(float *)(lVar11 + 8 + lVar49 * 0xc) = fVar85 * fVar71;
  }
  return;
}

// `scalar_deleting_destructor' @ 148c1ee70

void * __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::_scalar_deleting_destructor_
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,uint param_1)

{
  ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c1eeb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FClothPhysicalMeshData::CalculateInverseMasses'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FClothPhysicalMeshData::CalculateInverseMasses'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c1eef0

void * __thiscall
FClothingSimulationCommon::_scalar_deleting_destructor_
          (FClothingSimulationCommon *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FClothingSimulationCommon__6B_;
  IClothingSimulation::~IClothingSimulation((IClothingSimulation *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c1ef40

void * __thiscall
FClothingSimulationContextCommon::_scalar_deleting_destructor_
          (FClothingSimulationContextCommon *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FClothingSimulationContextCommon__6B_;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CacheData).CachedReferenceSpaceTransforms);
  pFVar2 = (this->CacheData).CacheIndices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CacheData).CachedVelocities.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CacheData).CachedPositions.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RefToLocals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BoneTransforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  IClothingSimulationContext::~IClothingSimulationContext((IClothingSimulationContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c1f010

void * __thiscall
FClothingSystemRuntimeCommonModule::_scalar_deleting_destructor_
          (FClothingSystemRuntimeCommonModule *this,uint param_1)

{
  *this = (FClothingSystemRuntimeCommonModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c1f050

void * __thiscall
UClothConfigCommon::_scalar_deleting_destructor_(UClothConfigCommon *this,uint param_1)

{
  *(undefined ***)this = &___7UClothConfigCommon__6B_;
  UClothConfigBase::~UClothConfigBase((UClothConfigBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c1f0b0

void * __thiscall
UClothLODDataCommon_Legacy::_scalar_deleting_destructor_
          (UClothLODDataCommon_Legacy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UClothLODDataCommon_Legacy__6B_;
  pFVar1 = (this->TransitionDownSkinData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TransitionUpSkinData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionData).Boxes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)(this->CollisionData).Convexes.AllocatorInstance.Data,
             (this->CollisionData).Convexes.ArrayNum);
  pFVar1 = (this->CollisionData).Convexes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionData).SphereConnections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionData).Spheres.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FClothPhysicalMeshData::~FClothPhysicalMeshData(&this->ClothPhysicalMeshData);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c1f1a0

void * __thiscall
UClothSharedConfigCommon::_scalar_deleting_destructor_(UClothSharedConfigCommon *this,uint param_1)

{
  *(undefined ***)this = &___7UClothConfigCommon__6B_;
  UClothConfigBase::~UClothConfigBase((UClothConfigBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c1f200

void * __thiscall
UClothingAssetCommon::_scalar_deleting_destructor_(UClothingAssetCommon *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UClothingAssetCommon__6B_;
  pFVar1 = (this->UsedBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedBoneNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LodMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothLODDataCommon,int>
            ((FClothLODDataCommon *)(this->LodData).AllocatorInstance.Data,(this->LodData).ArrayNum)
  ;
  pFVar1 = (this->LodData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ClothConfigs).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ClothConfigs).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothConfigs);
  UClothingAssetBase::~UClothingAssetBase((UClothingAssetBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c1f2f0

void * __thiscall
UClothingAssetCustomData::_scalar_deleting_destructor_(UClothingAssetCustomData *this,uint param_1)

{
  *(undefined ***)this = &___7UClothingAssetCustomData__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// ComputeAveragedNormals @ 148c22920

void __thiscall ClothingMeshUtils::ClothMeshDesc::ComputeAveragedNormals(ClothMeshDesc *this)

{
  TVector<float> *pTVar1;
  TVector<float> *pTVar2;
  TVector<float> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong local_d8;
  longlong local_d0;
  
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->AveragedNormals,&UE::Math::TVector<float>::ZeroVector,(this->Positions).ArrayNum
            );
  fVar7 = __real_3f800000;
  fVar6 = __real_322bcc77;
  iVar13 = (this->Indices).ArrayNum;
  iVar13 = iVar13 / 3 + (iVar13 >> 0x1f) +
           (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU) >> 0x1f);
  local_d0 = (longlong)iVar13;
  if (0 < iVar13) {
    uVar14 = 2;
    local_d8 = 0;
    do {
      uVar9 = 0;
      if ((int)(uVar14 - 2) < (this->Indices).ArrayNum) {
        uVar9 = ~(uVar14 - 2) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = *(uint *)(local_d8 + (longlong)(this->Indices).DataPtr);
      lVar16 = (longlong)(int)uVar9;
      uVar10 = 0;
      if ((int)(uVar14 - 1) < (this->Indices).ArrayNum) {
        uVar10 = ~(uVar14 - 1) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = *(uint *)(local_d8 + 4 + (longlong)(this->Indices).DataPtr);
      lVar15 = (longlong)(int)uVar10;
      uVar11 = 0;
      if ((int)uVar14 < (this->Indices).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = *(uint *)(local_d8 + 8 + (longlong)(this->Indices).DataPtr);
      uVar12 = 0;
      if ((int)uVar9 < (this->Positions).ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar1 = (this->Positions).DataPtr;
      uVar12 = 0;
      if ((int)uVar10 < (this->Positions).ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar17 = (longlong)(int)uVar11;
      pTVar2 = (this->Positions).DataPtr;
      uVar12 = 0;
      if ((int)uVar11 < (this->Positions).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (this->Positions).DataPtr;
      fVar22 = pTVar3[lVar17].field0_0x0._s_0.Z - pTVar1[lVar16].field0_0x0._s_0.Z;
      fVar23 = pTVar3[lVar17].field0_0x0._s_0.X - pTVar1[lVar16].field0_0x0._s_0.X;
      fVar19 = pTVar3[lVar17].field0_0x0._s_0.Y - pTVar1[lVar16].field0_0x0._s_0.Y;
      fVar20 = pTVar2[lVar15].field0_0x0._s_0.Y - pTVar1[lVar16].field0_0x0._s_0.Y;
      fVar18 = pTVar2[lVar15].field0_0x0._s_0.Z - pTVar1[lVar16].field0_0x0._s_0.Z;
      fVar21 = pTVar2[lVar15].field0_0x0._s_0.X - pTVar1[lVar16].field0_0x0._s_0.X;
      fVar24 = fVar19 * fVar18 - fVar22 * fVar20;
      fVar20 = fVar23 * fVar20 - fVar19 * fVar21;
      fVar19 = fVar22 * fVar21 - fVar23 * fVar18;
      fVar18 = fVar19 * fVar19 + fVar24 * fVar24 + fVar20 * fVar20;
      if (fVar6 < fVar18) {
        uVar12 = 0;
        if ((int)uVar9 < (this->AveragedNormals).ArrayNum) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        fVar18 = fVar7 / SQRT(fVar18);
        fVar24 = fVar24 * fVar18;
        fVar19 = fVar19 * fVar18;
        fVar20 = fVar20 * fVar18;
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->AveragedNormals).AllocatorInstance.Data;
        fVar18 = *(float *)(pFVar4 + lVar16 * 0xc + 4);
        *(float *)(pFVar4 + lVar16 * 0xc) = fVar24 + *(float *)(pFVar4 + lVar16 * 0xc);
        *(float *)(pFVar4 + lVar16 * 0xc + 4) = fVar19 + fVar18;
        *(float *)(pFVar4 + lVar16 * 0xc + 8) = fVar20 + *(float *)(pFVar4 + lVar16 * 0xc + 8);
        uVar9 = 0;
        if ((int)uVar10 < (this->AveragedNormals).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->AveragedNormals).AllocatorInstance.Data;
        fVar18 = *(float *)(pFVar4 + lVar15 * 0xc + 4);
        *(float *)(pFVar4 + lVar15 * 0xc) = fVar24 + *(float *)(pFVar4 + lVar15 * 0xc);
        *(float *)(pFVar4 + lVar15 * 0xc + 4) = fVar19 + fVar18;
        *(float *)(pFVar4 + lVar15 * 0xc + 8) = fVar20 + *(float *)(pFVar4 + lVar15 * 0xc + 8);
        uVar9 = 0;
        if ((int)uVar11 < (this->AveragedNormals).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->AveragedNormals).AllocatorInstance.Data;
        fVar18 = *(float *)(pFVar4 + lVar17 * 0xc + 4);
        fVar21 = *(float *)(pFVar4 + lVar17 * 0xc + 8);
        *(float *)(pFVar4 + lVar17 * 0xc) = fVar24 + *(float *)(pFVar4 + lVar17 * 0xc);
        *(float *)(pFVar4 + lVar17 * 0xc + 4) = fVar19 + fVar18;
        *(float *)(pFVar4 + lVar17 * 0xc + 8) = fVar20 + fVar21;
      }
      uVar14 = uVar14 + 3;
      local_d8 = local_d8 + 0xc;
      local_d0 = local_d0 + -1;
    } while (local_d0 != 0);
  }
  uVar14 = 0;
  if (0 < (this->AveragedNormals).ArrayNum) {
    lVar16 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar14 < (this->AveragedNormals).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->AveragedNormals).AllocatorInstance.Data;
      fVar18 = *(float *)(pFVar4 + lVar16);
      fVar19 = *(float *)(pFVar4 + lVar16 + 4);
      fVar20 = *(float *)(pFVar4 + lVar16 + 8);
      fVar21 = fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20;
      if (fVar21 <= fVar6) {
        *(undefined8 *)(pFVar4 + lVar16) = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
        *(float *)(pFVar4 + lVar16 + 8) = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
      }
      else {
        fVar21 = fVar7 / SQRT(fVar21);
        *(float *)(pFVar4 + lVar16) = fVar21 * fVar18;
        *(float *)(pFVar4 + lVar16 + 4) = fVar21 * fVar19;
        *(float *)(pFVar4 + lVar16 + 8) = fVar21 * fVar20;
      }
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 0xc;
    } while ((int)uVar14 < (this->AveragedNormals).ArrayNum);
  }
  return;
}

// ComputeVertexContributions @ 148c24640

void __cdecl
ClothingMeshUtils::ComputeVertexContributions
          (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *param_1,FPointWeightMap *param_2
          ,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  undefined1 local_res10 [8];
  undefined1 local_78 [80];
  
  fVar7 = __real_477fff00;
  fVar6 = __real_3dcccccd;
  fVar5 = __real_3f800000;
  if ((param_2 == (FPointWeightMap *)0x0) || ((param_2->Values).ArrayNum == 0)) {
    iVar1 = param_1->ArrayNum;
    pFVar8 = (param_1->AllocatorInstance).Data;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x40;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMeshToMeshVertData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_78);
      }
      if (pFVar8 == pFVar9) break;
      *(undefined2 *)(pFVar8 + 0x36) = 0;
      pFVar8 = pFVar8 + 0x40;
    }
  }
  else {
    pFVar8 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x40;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMeshToMeshVertData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar8 == pFVar9) break;
      if (((param_2->Values).ArrayNum <= (int)(uint)*(ushort *)(pFVar8 + 0x30)) ||
         (fVar6 < *(float *)((param_2->Values).AllocatorInstance.Data +
                            (ulonglong)*(ushort *)(pFVar8 + 0x30) * 4))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((param_2->Values).ArrayNum <= (int)(uint)*(ushort *)(pFVar8 + 0x32)) ||
         (fVar6 < *(float *)((param_2->Values).AllocatorInstance.Data +
                            (ulonglong)*(ushort *)(pFVar8 + 0x32) * 4))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((param_2->Values).ArrayNum <= (int)(uint)*(ushort *)(pFVar8 + 0x34)) ||
         (fVar6 < *(float *)((param_2->Values).AllocatorInstance.Data +
                            (ulonglong)*(ushort *)(pFVar8 + 0x34) * 4))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((((bVar2) && (bVar3)) && (bVar4)) || ((param_4 && (*(float *)(pFVar8 + 0x38) == 0.0)))) {
        *(undefined2 *)(pFVar8 + 0x36) = 0xffff;
        pFVar8 = pFVar8 + 0x40;
      }
      else if ((((bVar2) || (bVar3)) || (bVar4)) && (param_3)) {
        fVar10 = (float)bVar3 * *(float *)(pFVar8 + 4) + (float)bVar2 * *(float *)pFVar8 +
                 (float)bVar4 * *(float *)(pFVar8 + 8);
        if (fVar5 <= fVar10) {
          fVar10 = fVar5;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        *(short *)(pFVar8 + 0x36) = (short)(int)(fVar10 * fVar7);
        pFVar8 = pFVar8 + 0x40;
      }
      else {
        *(undefined2 *)(pFVar8 + 0x36) = 0;
        pFVar8 = pFVar8 + 0x40;
      }
    }
  }
  return;
}

// CoplanarityParam @ 148c24850

int __cdecl
ClothingMeshUtils::CoplanarityParam
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3,
          TVector<float> *param_4,TVector<float> *param_5,TVector<float> *param_6,
          TVector<float> *param_7,double *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  double *pdVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  float fVar49;
  uint uVar50;
  uint uVar51;
  float fVar52;
  TVector<float>_u_0 local_158;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  TVector<float>_u_0 local_138;
  TVector<float>_u_0 local_128;
  double local_118 [27];
  
  dVar12 = __real_bfe0000000000000;
  dVar11 = __real_bff0000000000000;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3fe0000000000000;
  dVar7 = __real_3e45798ee2308c3a;
  dVar34 = __real_3ff0000000000000;
  fVar25 = (param_7->field0_0x0)._s_0.X;
  fVar26 = (param_7->field0_0x0)._s_0.Y;
  fVar21 = (param_1->field0_0x0)._s_0.X - fVar25;
  fVar23 = (param_7->field0_0x0)._s_0.Z;
  fVar40 = (param_2->field0_0x0)._s_0.Z - fVar23;
  fVar22 = (param_1->field0_0x0)._s_0.Y - fVar26;
  fVar42 = (param_2->field0_0x0)._s_0.Y - fVar26;
  fVar1 = (param_4->field0_0x0)._s_0.X;
  fVar49 = (param_3->field0_0x0)._s_0.Z - fVar23;
  fVar31 = (param_5->field0_0x0)._s_0.Y;
  fVar35 = (param_5->field0_0x0)._s_0.X;
  fVar2 = (param_4->field0_0x0)._s_0.Y;
  fVar23 = (param_1->field0_0x0)._s_0.Z - fVar23;
  fVar41 = (param_6->field0_0x0)._s_0.Z;
  fVar43 = (param_6->field0_0x0)._s_0.X;
  fVar24 = (param_2->field0_0x0)._s_0.X - fVar25;
  fVar25 = (param_3->field0_0x0)._s_0.X - fVar25;
  fVar26 = (param_3->field0_0x0)._s_0.Y - fVar26;
  fVar3 = (param_5->field0_0x0)._s_0.Z;
  fVar39 = fVar31 * fVar41 - fVar3 * (param_6->field0_0x0)._s_0.Y;
  fVar38 = fVar43 * fVar3 - fVar35 * fVar41;
  fVar37 = fVar35 * (param_6->field0_0x0)._s_0.Y - fVar43 * fVar31;
  fVar3 = (param_6->field0_0x0)._s_0.Y;
  local_158._0_8_ =
       (undefined8)(fVar38 * fVar2 + fVar39 * fVar1 + fVar37 * (param_4->field0_0x0)._s_0.Z);
  fVar44 = fVar41 * fVar42 - fVar3 * fVar40;
  fVar28 = fVar3 * fVar24 - fVar43 * fVar42;
  fVar3 = (param_5->field0_0x0)._s_0.Z;
  fVar4 = (param_4->field0_0x0)._s_0.Z;
  fVar43 = fVar43 * fVar40 - fVar41 * fVar24;
  fVar41 = fVar31 * fVar49 - fVar3 * fVar26;
  fVar52 = fVar35 * fVar26 - fVar31 * fVar25;
  fVar31 = fVar3 * fVar25 - fVar35 * fVar49;
  dVar36 = (double)(fVar38 * fVar22 + fVar39 * fVar21 + fVar37 * fVar23) +
           (double)(fVar43 * fVar2 + fVar44 * fVar1 + fVar28 * fVar4) +
           (double)(fVar31 * fVar2 + fVar41 * fVar1 + fVar52 * fVar4);
  fVar35 = fVar49 * fVar42 - fVar26 * fVar40;
  fVar26 = fVar26 * fVar24 - fVar25 * fVar42;
  fVar25 = fVar25 * fVar40 - fVar49 * fVar24;
  dVar27 = (double)(fVar25 * fVar22 + fVar35 * fVar21 + fVar26 * fVar23);
  dVar33 = (double)(fVar31 * fVar22 + fVar41 * fVar21 + fVar52 * fVar23) +
           (double)(fVar43 * fVar22 + fVar44 * fVar21 + fVar28 * fVar23) +
           (double)(fVar25 * fVar2 + fVar35 * fVar1 + fVar26 * fVar4);
  dVar32 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar32 <= __real_3e45798ee0000000) {
    local_158._0_8_ = *(undefined8 *)&param_3->field0_0x0;
    local_158._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_138._0_8_ = *(undefined8 *)&param_2->field0_0x0;
    local_138._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_128._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_128._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    UE::Math::TPlane<float>::TPlane<float>
              ((TPlane<float> *)&local_148,(TVector<float> *)&local_128._s_0,
               (TVector<float> *)&local_138._s_0,(TVector<float> *)&local_158._s_0);
    *param_8 = (double)(float)((uint)(((param_7->field0_0x0)._s_0.Y * local_144 +
                                       (param_7->field0_0x0)._s_0.X * local_148 +
                                      (param_7->field0_0x0)._s_0.Z * local_140) - local_13c) ^
                              __xmm_80000000800000008000000080000000);
    return 1;
  }
  dVar6 = (double)local_158._0_8_ * __real_4008000000000000;
  uVar50 = SUB84(dVar36,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar51 = (uint)((ulonglong)dVar36 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = 0;
  uVar45 = SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar46 = (uint)((ulonglong)dVar33 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar47 = (uint)local_158._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar48 = (uint)((ulonglong)local_158._0_8_ >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
  ;
  dVar29 = dVar36 + dVar36;
  dVar32 = ((double)CONCAT44(uVar51,uVar50) + (double)CONCAT44(uVar48,uVar47) +
           (double)CONCAT44(uVar46,uVar45) + dVar32) * __real_3fb999999999999a;
  iVar14 = 0;
  uVar15 = uVar18;
  pdVar16 = param_8;
  uVar20 = uVar18;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar29 = (__real_3ff0000000000000 / dVar6) * dVar29;
    auVar30._0_8_ =
         dVar29 * __real_3fd0000000000000 * dVar29 - (__real_3ff0000000000000 / dVar6) * dVar33;
    auVar30._8_8_ = 0;
    uVar17 = uVar18;
    if (0.0 <= auVar30._0_8_) {
      auVar30 = sqrtpd(auVar30,auVar30);
      local_118[0] = dVar29 * __real_bfe0000000000000 - auVar30._0_8_;
      local_118[1] = auVar30._0_8_ - dVar29 * __real_3fe0000000000000;
      uVar17 = 2;
    }
    iVar19 = 0;
    if (uVar17 == 0) goto LAB_148c24e48;
  }
  else {
    iVar19 = iVar14;
    if ((double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee2308c3a) goto LAB_148c24e48;
    uVar17 = 1;
    local_118[0] = (__real_bff0000000000000 / dVar29) * dVar33;
  }
  do {
    dVar6 = local_118[uVar15];
    dVar29 = (((double)local_158._0_8_ * dVar6 + dVar36) * dVar6 + dVar33) * dVar6 + dVar27;
    if ((double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar10,SUB84(dVar29,0) & uVar9) <=
        dVar32) {
      uVar20 = (ulonglong)((int)uVar20 + 1);
      *pdVar16 = dVar6;
      pdVar16 = pdVar16 + 1;
    }
    iVar19 = (int)uVar20;
    uVar15 = uVar15 + 1;
  } while ((longlong)uVar15 < (longlong)uVar17);
LAB_148c24e48:
  if (dVar7 <= (double)CONCAT44(uVar48,uVar47) && (double)CONCAT44(uVar48,uVar47) != dVar7) {
    dVar34 = dVar34 / (double)local_158._0_8_;
    iVar14 = CubicRoots(dVar34 * dVar36,dVar34 * dVar33,dVar34 * dVar27,local_118 + 2);
  }
  else if (dVar7 <= (double)CONCAT44(uVar51,uVar50) && (double)CONCAT44(uVar51,uVar50) != dVar7) {
    dVar34 = dVar34 / dVar36;
    dVar33 = dVar34 * dVar33;
    dVar27 = dVar33 * __real_3fd0000000000000 * dVar33 - dVar34 * dVar27;
    if (dVar27 < 0.0) {
      iVar14 = 0;
    }
    else {
      iVar14 = 2;
      dVar27 = SQRT(dVar27);
      local_118[2] = dVar33 * dVar12 - dVar27;
      local_118[3] = dVar27 - dVar33 * dVar8;
    }
  }
  else if (dVar7 <= (double)CONCAT44(uVar46,uVar45) && (double)CONCAT44(uVar46,uVar45) != dVar7) {
    local_118[2] = (dVar11 / dVar33) * dVar27;
    iVar14 = 1;
  }
  if (0 < iVar14) {
    do {
      if ((4 < (longlong)((longlong)iVar19 + uVar18)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("NextI < MaxNumRootsAndExtrema",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                              ,0x3fe,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        iVar14 = (*pcVar5)();
        return iVar14;
      }
      param_8[(longlong)iVar19 + uVar18] = local_118[uVar18 + 2];
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < (longlong)iVar14);
  }
  iVar14 = iVar14 + iVar19;
  if ((iVar14 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    iVar14 = (*pcVar5)();
    return iVar14;
  }
  param_7._0_1_ = SUB41(fVar42,0);
  AlgoImpl::
  IntroSortInternal<double,int,FIdentityFunctor,_ClothingMeshUtils::CoplanarityParam_::__l7::<lambda_1>_>
            (param_8,iVar14,param_7._0_1_,(<lambda_1>)param_7._0_1_);
  return iVar14;
}

// CubicRoots @ 148c25090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
ClothingMeshUtils::CubicRoots(double param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = __real_3fd5555555555555;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_3fe0000000000000;
  dVar10 = param_1 * param_1 - param_2 * __real_4008000000000000;
  dVar2 = dVar10 * ___real_3fbc71c71c71c71c;
  dVar8 = (param_1 * param_1 * ___real_3fa2f684bda12f68 - param_2 * __real_3fc5555555555555) *
          param_1 + param_3 * __real_3fe0000000000000;
  dVar10 = dVar10 * dVar10 * dVar2 * ___real_3f8948b0fcd6e9e0;
  if (dVar10 + __real_3e45798ee0000000 < dVar8 * dVar8) {
    dVar7 = pow(SQRT(dVar8 * dVar8 - dVar10) +
                (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
                __real_3fd5555555555555);
    dVar10 = __real_3e45798ee2308c3a;
    dVar9 = 0.0;
    if (0.0 < dVar8) {
      dVar7 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) & uVar4,SUB84(param_1,0) & uVar3)) {
      dVar9 = dVar2 / dVar7;
    }
    dVar8 = (dVar7 - dVar9) * ___real_3febb67ae0000000;
    *param_4 = (dVar9 + dVar7) - param_1 * dVar1;
    if ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar4,SUB84(dVar8,0) & uVar3) <= dVar10)
    {
      iVar5 = 2;
      param_4[1] = (dVar7 * __real_bfe0000000000000 - dVar9 * dVar6) - param_1 * dVar1;
    }
    else {
      iVar5 = 1;
    }
  }
  else {
    dVar8 = dVar8 / SQRT(dVar10);
    dVar6 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar8) && (dVar6 = dVar8, __real_3ff0000000000000 <= dVar8)) {
      dVar6 = __real_3ff0000000000000;
    }
    dVar6 = acos(dVar6);
    dVar10 = __real_3fd5555555555555;
    dVar8 = dVar6 * __real_3fd5555555555555;
    dVar2 = SQRT(dVar2) * __real_c000000000000000;
    dVar1 = param_1 * __real_3fd5555555555555;
    dVar7 = cos(dVar8);
    dVar8 = dVar8 + ___real_4000c15240000000;
    *param_4 = dVar7 * dVar2 - dVar1;
    dVar8 = cos(dVar8);
    dVar6 = dVar6 - __real_401921fb60000000;
    param_4[1] = dVar8 * dVar2 - dVar1;
    dVar8 = cos(dVar6 * dVar10);
    iVar5 = 3;
    param_4[2] = dVar8 * dVar2 - dVar1;
  }
  return iVar5;
}

// DistanceToTriangle @ 148c25a80

float __thiscall
ClothingMeshUtils::ClothMeshDesc::DistanceToTriangle
          (ClothMeshDesc *this,TVector<double> *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  uint *puVar5;
  TVector<float> *pTVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  puVar5 = TArrayView<unsigned_int_const_,int>::operator[](&this->Indices,param_2);
  uVar1 = *puVar5;
  puVar5 = TArrayView<unsigned_int_const_,int>::operator[](&this->Indices,param_2 + 1);
  uVar2 = *puVar5;
  puVar5 = TArrayView<unsigned_int_const_,int>::operator[](&this->Indices,param_2 + 2);
  uVar3 = *puVar5;
  pTVar6 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](&this->Positions,uVar1);
  local_48._s_0.Z = (double)(pTVar6->field0_0x0)._s_0.Z;
  local_48._s_0.Y = (double)(pTVar6->field0_0x0)._s_0.Y;
  local_48._s_0.X = (double)(pTVar6->field0_0x0)._s_0.X;
  pTVar6 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](&this->Positions,uVar2);
  local_60._s_0.Z = (double)(pTVar6->field0_0x0)._s_0.Z;
  local_60._s_0.Y = (double)(pTVar6->field0_0x0)._s_0.Y;
  local_60._s_0.X = (double)(pTVar6->field0_0x0)._s_0.X;
  pTVar6 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](&this->Positions,uVar3);
  local_78._s_0.Z = (double)(pTVar6->field0_0x0)._s_0.Z;
  local_78._s_0.Y = (double)(pTVar6->field0_0x0)._s_0.Y;
  local_78._s_0.X = (double)(pTVar6->field0_0x0)._s_0.X;
  FMath::ClosestPointOnTriangleToPoint
            ((TVector<double> *)&local_30._s_0,param_1,(TVector<double> *)&local_48._s_0,
             (TVector<double> *)&local_60._s_0,(TVector<double> *)&local_78._s_0);
  dVar4 = local_30._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar7 = local_30._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar10 = local_30._s_0.X - (param_1->field0_0x0)._s_0.X;
  auVar8._0_8_ = dVar7 * dVar7;
  auVar8._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar4 * dVar4 + dVar10 * dVar10 + auVar8._0_8_;
  auVar9 = sqrtpd(auVar8,auVar9);
  return (float)auVar9._0_8_;
}

// EmptyLinkFunctionForGeneratedCodeClothConfig @ 148c25f40

void __cdecl EmptyLinkFunctionForGeneratedCodeClothConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothConfig_Legacy @ 148c25f50

void __cdecl EmptyLinkFunctionForGeneratedCodeClothConfig_Legacy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothLODData @ 148c25f60

void __cdecl EmptyLinkFunctionForGeneratedCodeClothLODData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothLODData_Legacy @ 148c25f70

void __cdecl EmptyLinkFunctionForGeneratedCodeClothLODData_Legacy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshData @ 148c25f80

void __cdecl EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothTetherData @ 148c25f90

void __cdecl EmptyLinkFunctionForGeneratedCodeClothTetherData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingAsset @ 148c25fa0

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeCommon_init @ 148c25fb0

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeCommon_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePointWeightMap @ 148c25fc0

void __cdecl EmptyLinkFunctionForGeneratedCodePointWeightMap(void)

{
  return;
}

// FindCandidateTriangles @ 148c27c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
ClothingMeshUtils::ClothMeshDesc::FindCandidateTriangles
          (ClothMeshDesc *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  ForAnyElementType *pFVar12;
  int iVar13;
  ForAnyElementType FVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  undefined1 auStackY_1b8 [32];
  TArray<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_150;
  ForAnyElementType local_140;
  int local_138;
  int iStack_134;
  undefined1 local_130 [16];
  double local_120;
  undefined1 local_118 [16];
  double local_108;
  FSimpleVisitor local_100;
  ClothMeshDesc *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TVector<double,3> local_d8;
  TVector<double,3> local_c0;
  undefined1 local_a8 [16];
  longlong lStack_98;
  longlong local_90;
  bool local_78 [8];
  TVector<double,3> local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  FVar14.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Indices).ArrayNum;
  local_100.CollectedResults = local_100.CollectedResults & 0xffffffff00000000;
  if ((((this->Positions).ArrayNum != (this->Normals).ArrayNum) ||
      (iVar2 = *piVar1,
      *piVar1 !=
      (iVar2 / 3 + (iVar2 >> 0x1f) +
      (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5265761373844930655>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                         ,0x5f,"HasValidMesh()"), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar10;
  }
  if ((this->FilteredTriangles).ArrayNum == 0) {
    iVar2 = *piVar1 / 3;
    if (100 < iVar2) {
      if (this->bHasValidBVH == false) {
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.ArrayNum = 0;
        local_168.ArrayMax = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,&local_168.AllocatorInstance,0,&local_168.ArrayMax);
        do {
          iVar13 = (int)FVar14.Data;
          local_f8 = this;
          iStack_f0 = iVar13;
          if (((local_168.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 <
               local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar10;
          }
          iVar9 = local_168.ArrayNum;
          if (local_168.ArrayNum == local_168.ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_168.AllocatorInstance,&local_168.ArrayMax);
          }
          FVar14.Data = (FScriptContainerElement *)(ulonglong)(iVar13 + 1U);
          local_168.ArrayNum = iVar9 + 1;
          *(ClothMeshDesc **)(local_168.AllocatorInstance.Data + (longlong)iVar9 * 0x10) = local_f8;
          *(ulonglong *)(local_168.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + 8) =
               CONCAT44(uStack_ec,iStack_f0);
        } while ((int)(iVar13 + 1U) < iVar2);
        (this->BVH).bDynamicTree = false;
        (this->BVH).MaxChildrenInLeaf = 0xc;
        (this->BVH).MaxTreeDepth = 0x10;
        (this->BVH).MaxPayloadBounds = 100000.0;
        (this->BVH).MaxNumToProcess = 0;
        (this->BVH).bModifyingTreeMultiThreadingFastCheck = false;
        (this->BVH).bShouldRebuild = true;
        (this->BVH).bBuildOverlapCache = true;
        Chaos::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        GenerateTree<TArray<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,TSizedDefaultAllocator<32>_>_>
                  (&this->BVH,&local_168);
        this->bHasValidBVH = true;
        if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
      }
      dVar5 = (param_1->field0_0x0)._s_0.X;
      dVar6 = (param_1->field0_0x0)._s_0.Y;
      local_a8._0_8_ = &local_70;
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108 = (param_1->field0_0x0)._s_0.Z;
      local_100.CollectedResults = &local_150;
      local_90 = 0;
      local_78[0] = false;
      local_78[1] = false;
      local_78[2] = false;
      local_d8._16_8_ = 0;
      local_c0._16_8_ = 0;
      dVar16 = (double)param_2;
      local_150.ArrayNum = 0;
      local_150.ArrayMax = 0;
      local_120 = local_108 - dVar16;
      local_108 = local_108 + dVar16;
      local_c0._0_8_ = 0;
      local_c0._8_8_ = 0;
      local_130._8_8_ = dVar6 - dVar16;
      local_130._0_8_ = dVar5 - dVar16;
      local_118._8_8_ = dVar6 + dVar16;
      local_118._0_8_ = dVar5 + dVar16;
      local_a8._8_8_ = 0;
      lStack_98 = 0;
      local_d8._0_8_ = 0;
      local_d8._8_8_ = 0;
      Chaos::
      TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
      ::
      QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
                (&this->BVH,&local_c0,(FQueryFastDataVoid *)local_a8,&local_d8,
                 (TAABB<double,3> *)local_130,&local_100,(TVector<double,3> *)local_a8._0_8_,
                 (TVector<double,3> *)(local_a8 + 8),local_78);
      iVar2 = local_150.ArrayNum;
      uVar11 = (ulonglong)local_150.ArrayNum;
      if (local_150.ArrayNum != 0) {
        pFVar3 = local_150.AllocatorInstance.Data + uVar11 * 4;
        FVar14.Data = local_150.AllocatorInstance.Data;
        fVar17 = __real_7f7fffff;
        while( true ) {
          if ((int)uVar11 != iVar2) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_158);
          }
          if (FVar14.Data == pFVar3) break;
          fVar15 = DistanceToTriangle(this,param_1,*(int *)FVar14.Data * 3);
          uVar11 = local_150._8_8_ & 0xffffffff;
          if (fVar17 <= fVar15) {
            fVar15 = fVar17;
          }
          FVar14.Data = FVar14.Data + 4;
          fVar17 = fVar15;
        }
        dVar16 = (double)fVar17;
        dVar5 = (double)local_130._8_8_ - dVar16;
        dVar6 = (double)local_118._8_8_ + dVar16;
        local_130._8_4_ = SUB84(dVar5,0);
        local_130._0_8_ = (double)local_130._0_8_ - dVar16;
        local_130._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_118._8_4_ = SUB84(dVar6,0);
        local_118._0_8_ = (double)local_118._0_8_ + dVar16;
        local_118._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_120 = local_120 - dVar16;
        local_108 = local_108 + dVar16;
        Chaos::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::FindAllIntersections(&this->BVH,__return_storage_ptr__,(TAABB<double,3> *)local_130);
        FVar14.Data = local_150.AllocatorInstance.Data;
        goto LAB_148c280f7;
      }
      if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
    }
    local_e0 = 0;
    pFVar12 = &local_e8;
    bVar7 = false;
    bVar8 = true;
    FVar14.Data = (FScriptContainerElement *)0x0;
  }
  else {
    iVar2 = (this->FilteredTriangles).ArrayNum;
    pFVar3 = (this->FilteredTriangles).AllocatorInstance.Data;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138 = iVar2;
    if (iVar2 == 0) {
      iStack_134 = 0;
      pFVar12 = &local_140;
      bVar7 = true;
      bVar8 = false;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,0,&local_140,iVar2,&iStack_134);
      memcpy(local_140.Data,pFVar3,(longlong)iVar2 << 2);
      pFVar12 = &local_140;
      bVar7 = true;
      bVar8 = false;
      FVar14.Data = local_140.Data;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = FVar14.Data;
  pFVar12->Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = *(int *)&pFVar12[1].Data;
  __return_storage_ptr__->ArrayMax = *(int *)((longlong)&pFVar12[1].Data + 4);
  pFVar12[1].Data = (FScriptContainerElement *)0x0;
  if ((bVar8) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data);
  }
  FVar14.Data = local_140.Data;
  if (!bVar7) {
    return __return_storage_ptr__;
  }
LAB_148c280f7:
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return __return_storage_ptr__;
}

// FixZeroWeightVertices @ 148c283b0

void __cdecl
ClothingMeshUtils::`anonymous_namespace'::FixZeroWeightVertices
          (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *param_1,ClothMeshDesc *param_2,
          ClothMeshDesc *param_3,
          TArray<ClothingMeshUtils::FMeshToMeshFilterSet,TSizedDefaultAllocator<32>_> *param_4)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  TVector<float> *pTVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FMeshToMeshVertData *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  TVector<float> *pTVar15;
  ulonglong uVar16;
  TVector<float> *this;
  float fVar17;
  uint local_res8;
  longlong local_d8;
  longlong local_d0;
  TVector<float>_u_0 local_c8;
  longlong local_b8;
  TVector<float>_u_0 local_b0;
  TArrayView<float_const_,int> local_a0;
  TVector<double>_u_0 local_90;
  TVector<float> local_78 [5];
  
  if (0 < param_1->ArrayNum) {
    iVar9 = (param_2->Positions).ArrayNum;
    if (iVar9 * 5 == param_1->ArrayNum) {
      ClothMeshDesc::GetMaxEdgeLengths(param_2,&local_a0);
      if ((iVar9 != local_a0.ArrayNum) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumTargetMeshVerts == MaxEdgeLengths.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                             ,600,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar5 = __real_38d1b717;
      uVar13 = 0;
      if (0 < iVar9) {
        uVar11 = 2;
        local_d8 = 0;
        local_d0 = 0;
        local_res8 = 0;
        uVar14 = uVar13;
        uVar16 = uVar13;
        local_b8 = (longlong)iVar9;
        do {
          fVar17 = 0.0;
          uVar7 = 0;
          uVar8 = uVar7;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar8 = ~(uVar11 - 2) >> 0x1f;
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
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (*(short *)(pFVar2 + uVar13 + 0x36) != -1) {
            fVar17 = *(float *)(pFVar2 + uVar13 + 0x38);
          }
          uVar8 = uVar7;
          if ((int)(uVar11 - 1) < param_1->ArrayNum) {
            uVar8 = ~(uVar11 - 1) >> 0x1f;
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
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (*(short *)(pFVar2 + uVar13 + 0x76) != -1) {
            fVar17 = fVar17 + *(float *)(pFVar2 + uVar13 + 0x78);
          }
          uVar8 = uVar7;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
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
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (*(short *)(pFVar2 + uVar13 + 0xb6) != -1) {
            fVar17 = fVar17 + *(float *)(pFVar2 + uVar13 + 0xb8);
          }
          uVar8 = uVar7;
          if ((int)(uVar11 + 1) < param_1->ArrayNum) {
            uVar8 = ~(uVar11 + 1) >> 0x1f;
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
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (*(short *)(pFVar2 + uVar13 + 0xf6) != -1) {
            fVar17 = fVar17 + *(float *)(pFVar2 + uVar13 + 0xf8);
          }
          uVar8 = uVar7;
          if ((int)(uVar11 + 2) < param_1->ArrayNum) {
            uVar8 = ~(uVar11 + 2) >> 0x1f;
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
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (*(short *)(pFVar2 + uVar13 + 0x136) != -1) {
            fVar17 = fVar17 + *(float *)(pFVar2 + uVar13 + 0x138);
          }
          uVar8 = (uint)uVar16;
          if (fVar17 < fVar5) {
            uVar10 = ~uVar8 >> 0x1f;
            if ((int)uVar8 < (param_2->Positions).ArrayNum) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar15 = (TVector<float> *)
                      ((longlong)&((param_2->Positions).DataPtr)->field0_0x0 + local_d0);
            uVar7 = 0;
            if ((int)uVar8 < (param_2->Normals).ArrayNum) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this = (TVector<float> *)
                   ((longlong)&((param_2->Normals).DataPtr)->field0_0x0 + local_d0);
            iVar9 = (param_2->Tangents).ArrayNum;
            if ((param_2->Positions).ArrayNum == iVar9) {
              uVar7 = 0;
              if ((int)uVar8 < iVar9) {
                uVar7 = uVar10;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar3 = (param_2->Tangents).DataPtr;
              local_c8._0_8_ = *(undefined8 *)((longlong)&pTVar3->field0_0x0 + local_d0);
              local_c8._s_0.Z = *(float *)((longlong)&pTVar3->field0_0x0 + local_d0 + 8);
            }
            else {
              UE::Math::TVector<float>::FindBestAxisVectors
                        (this,(TVector<float> *)&local_b0._s_0,local_78);
              local_c8._0_8_ = local_b0._0_8_;
              local_c8._s_0.Z = local_b0._s_0.Z;
            }
            uVar7 = 0;
            if ((int)(uVar11 - 2) < param_1->ArrayNum) {
              uVar7 = ~(uVar11 - 2) >> 0x1f;
            }
            if ((uVar7 == 0) &&
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
            pFVar12 = (FMeshToMeshVertData *)((param_1->AllocatorInstance).Data + uVar13);
            uVar7 = 0;
            if ((int)uVar8 < local_a0.ArrayNum) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_90._s_0.X = (double)(pTVar15->field0_0x0)._s_0.X;
            local_90._s_0.Z = (double)(pTVar15->field0_0x0)._s_0.Z;
            local_90._s_0.Y = (double)(pTVar15->field0_0x0)._s_0.Y;
            iVar9 = GetBestTriangleBaseIndex
                              (param_3,(TVector<double> *)&local_90._s_0,local_a0.DataPtr[local_d8])
            ;
            if (iVar9 == -1) {
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5265761373844931198>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                                 ,0x27e,"ClosestTriangleBaseIdx != INDEX_NONE");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar12->Weight = 0.0;
            }
            else {
              uVar1 = pFVar12->SourceMeshVertIndices[3];
              SingleSkinningDataForVertex
                        (pTVar15,this,(TVector<float> *)&local_c8._s_0,param_3,iVar9,pFVar12);
              pFVar12->SourceMeshVertIndices[3] = uVar1;
            }
            uVar7 = 0;
            if ((int)(uVar11 - 1) < param_1->ArrayNum) {
              uVar7 = ~(uVar11 - 1) >> 0x1f;
            }
            if ((uVar7 == 0) &&
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
            pFVar2 = (param_1->AllocatorInstance).Data;
            *(undefined2 *)(pFVar2 + uVar13 + 0x76) = 0xffff;
            *(undefined4 *)(pFVar2 + uVar13 + 0x78) = 0;
            uVar10 = 0;
            uVar7 = uVar10;
            if ((int)uVar11 < param_1->ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
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
            pFVar2 = (param_1->AllocatorInstance).Data;
            *(undefined2 *)(pFVar2 + uVar13 + 0xb6) = 0xffff;
            *(undefined4 *)(pFVar2 + uVar13 + 0xb8) = 0;
            uVar7 = uVar10;
            if ((int)(uVar11 + 1) < param_1->ArrayNum) {
              uVar7 = ~(uVar11 + 1) >> 0x1f;
            }
            if ((uVar7 == 0) &&
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
            pFVar2 = (param_1->AllocatorInstance).Data;
            *(undefined2 *)(pFVar2 + uVar13 + 0xf6) = 0xffff;
            *(undefined4 *)(pFVar2 + uVar13 + 0xf8) = 0;
            if ((int)(uVar11 + 2) < param_1->ArrayNum) {
              uVar10 = ~(uVar11 + 2) >> 0x1f;
            }
            if ((uVar10 == 0) &&
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
            pFVar2 = (param_1->AllocatorInstance).Data;
            *(undefined2 *)(pFVar2 + uVar13 + 0x136) = 0xffff;
            *(undefined4 *)(pFVar2 + uVar13 + 0x138) = 0;
          }
          local_d0 = local_d0 + 0xc;
          local_d8 = local_d8 + 1;
          local_res8 = local_res8 + 5;
          uVar14 = (ulonglong)local_res8;
          uVar16 = (ulonglong)(uVar8 + 1);
          uVar11 = uVar11 + 5;
          uVar13 = uVar13 + 0x140;
        } while (local_d8 < local_b8);
      }
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5265761373844931154>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                         ,0x252,"NumTargetMeshVerts * 5 == InOutSkinningData.Num()");
      if (bVar6) goto code_r0x000148c28447;
    }
    return;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5265761373844931147>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                     ,0x24b,"InOutSkinningData.Num() > 0");
  if (!bVar6) {
    return;
  }
code_r0x000148c28447:
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GatherAllSourceTrianglesForTargetVertex @ 148c28e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ClothingMeshUtils::ClothMeshDesc::GatherAllSourceTrianglesForTargetVertex
          (ClothMeshDesc *this,
          TArray<ClothingMeshUtils::FMeshToMeshFilterSet,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined1 local_d0 [16];
  undefined4 local_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar11 = (this->FilteredTriangles).ArrayNum;
  uVar9 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar11 == 0) goto LAB_148c290e9;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar15 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar11 <= (int)local_40)) goto LAB_148c290e9;
  local_40 = uVar11;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar11 != 0) {
    uVar14 = uVar11;
    if (uVar11 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_148c28f65;
      }
    }
    else {
LAB_148c28f65:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar14,4);
    }
    if (0 < (int)uVar11) {
      uVar16 = (ulonglong)uVar11;
      uVar15 = uVar9;
      do {
        FVar8.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_48.Data;
        }
        uVar5 = uVar15 & (longlong)(int)uVar11 - 1U;
        uVar15 = uVar15 + 1;
        *(undefined4 *)(FVar8.Data + uVar5 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_40 != 0) {
    local_d0._8_8_ = local_88 + 0x10;
    local_d0._0_4_ = 0;
    local_d0._4_4_ = 1;
    uStack_bc = 0;
    uStack_b8 = 0;
    if (local_60 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_68;
      }
      uVar11 = *(uint *)FVar17;
      uVar15 = uVar9;
      while (uVar11 == 0) {
        uStack_b8 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_b8;
        iVar7 = (int)uVar9;
        local_d0._0_4_ = iVar7 + 1;
        uVar9 = (ulonglong)(uint)local_d0._0_4_;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_d0._0_4_
           ) goto LAB_148c2905a;
        uVar11 = ((uint *)((longlong)FVar17 + 4))[iVar7];
      }
      local_d0._4_4_ = -uVar11 & uVar11;
      uVar9 = (ulonglong)(uint)local_d0._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_bc = (int)lVar3 + -1 + uStack_b8;
      uVar9 = (ulonglong)uStack_bc;
      if ((int)local_60 < (int)uStack_bc) {
LAB_148c2905a:
        uVar9 = (ulonglong)local_60;
        uStack_bc = local_60;
      }
    }
    local_c0 = 0xffffffff;
    local_b0 = (longlong *)local_88;
    local_a8._padding_ = CONCAT44(local_d0._4_4_,local_d0._0_4_);
    local_a8.CurrentBitIndex = uStack_bc;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_b4;
    local_a8.BaseBitIndex = uStack_b8;
    local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d0._8_8_;
    if ((int)uVar9 < (int)local_60) {
      do {
        iVar7 = (int)uVar9;
        uVar11 = local_40 - 1 & *(uint *)(*local_b0 + (longlong)iVar7 * 0xc);
        lVar3 = *local_b0 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar3 + 8) = uVar11;
        FVar8.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_48.Data;
        }
        uVar9 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar8.Data + uVar9 * 4);
        *(int *)(FVar8.Data + uVar9 * 4) = iVar7;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        uVar9 = (ulonglong)(uint)local_a8.CurrentBitIndex;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_148c290e9:
  pTVar13 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            (param_1->AllocatorInstance).Data;
  iVar7 = param_1->ArrayNum;
  piVar12 = (int *)&pTVar13[1].Elements.field_0x34;
  pTVar18 = pTVar13 + (longlong)iVar7 * 2;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar7) {
        `TCheckedPointerIterator<ClothingMeshUtils::FMeshToMeshFilterSet_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_d8);
      }
      if (pTVar13 == pTVar18) {
        if (((this->FilteredTriangles).ArrayNum != 0) || (local_88._8_4_ != local_54)) {
          this->bHasValidBVH = false;
        }
        pTVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                           ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,
                            (TArray<int,TSizedDefaultAllocator<32>_> *)local_d0);
        pTVar1 = &this->FilteredTriangles;
        if (pTVar1 != pTVar6) {
          pFVar2 = (pTVar1->AllocatorInstance).Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pTVar1->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
          (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (this->FilteredTriangles).ArrayNum = pTVar6->ArrayNum;
          (this->FilteredTriangles).ArrayMax = pTVar6->ArrayMax;
          pTVar6->ArrayNum = 0;
          pTVar6->ArrayMax = 0;
        }
        if ((void *)CONCAT44(local_d0._4_4_,local_d0._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_d0._4_4_,local_d0._0_4_));
        }
        local_40 = 0;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        return;
      }
      if (piVar12[-0xb] != *piVar12) break;
LAB_148c29184:
      pTVar13 = pTVar13 + 2;
      piVar12 = piVar12 + 0x28;
    }
    piVar10 = *(int **)(piVar12 + 3);
    if (*(int **)(piVar12 + 3) == (int *)0x0) {
      piVar10 = piVar12 + 1;
    }
    iVar4 = piVar10[piVar12[5] - 1U & param_2];
    if (iVar4 == -1) goto LAB_148c29184;
    do {
      if (*(int *)(*(longlong *)(piVar12 + -0xd) + (longlong)iVar4 * 0xc) == param_2) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,pTVar13);
        goto LAB_148c29184;
      }
      iVar4 = *(int *)(*(longlong *)(piVar12 + -0xd) + 4 + (longlong)iVar4 * 0xc);
    } while (iVar4 != -1);
    pTVar13 = pTVar13 + 2;
    piVar12 = piVar12 + 0x28;
  } while( true );
}

// GenerateMeshToMeshVertData @ 148c2a7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ClothingMeshUtils::GenerateMeshToMeshVertData
          (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *param_1,ClothMeshDesc *param_2,
          ClothMeshDesc *param_3,FPointWeightMap *param_4,bool param_5,bool param_6,float param_7,
          TArray<ClothingMeshUtils::FMeshToMeshFilterSet,TSizedDefaultAllocator<32>_> *param_8)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FFeedbackContext *pFVar9;
  TVector4<float>_u_0 *pTVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FText *pFVar15;
  TVector4<float>_u_0 *pTVar16;
  FScriptContainerElement *pFVar17;
  TVector<float> *pTVar18;
  TVector<float> *pTVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  int *piVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_328 [32];
  TArrayView<float_const_,int> local_2d0;
  TVector<float>_u_0 local_2c0;
  TVector<float>_u_0 local_2b0;
  TVector<float> *local_2a0;
  FPointWeightMap *local_298;
  TVector<double>_u_0 local_290;
  FText local_278;
  FText local_268;
  FText local_258;
  TVector<float> local_248;
  FSlowTask local_238;
  TVector4<float>_u_0 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_298 = param_4;
  if (((param_3->Normals).ArrayNum != (param_3->AveragedNormals).ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceMesh.HasAveragedNormals()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                          ,0x2b0,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar26 = &param_1->ArrayMax;
  piVar1 = &param_1->ArrayNum;
  *piVar1 = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&param_1->AllocatorInstance,0,piVar26);
  }
  iVar13 = (param_3->Indices).ArrayNum;
  if (iVar13 != 0) {
    uVar3 = (param_2->Positions).ArrayNum;
    if (uVar3 != 0) {
      if ((uVar3 == (param_2->Normals).ArrayNum) &&
         (iVar14 = (param_2->Indices).ArrayNum,
         (param_2->Indices).ArrayNum ==
         (iVar14 / 3 + (iVar14 >> 0x1f) +
         (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3)) {
        if (((param_3->Positions).ArrayNum == (param_3->Normals).ArrayNum) &&
           (iVar13 == (iVar13 / 3 + (iVar13 >> 0x1f) +
                      (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * 3)) {
          ClothMeshDesc::GetMaxEdgeLengths(param_2,&local_2d0);
          if ((uVar3 != local_2d0.ArrayNum) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumMesh0Verts == MaxEdgeLengths.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                                  ,0x2c8,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9 = GWarn;
          pFVar15 = FText::AsLocalizable_Advanced_LocText
                              (&local_278,L"ClothingMeshUtils",L"GenerateMeshToMeshVertData",
                               L"Generating cloth deformer data...");
          FSlowTask::FSlowTask(&local_238,(float)((int)uVar3 / 100),pFVar15,true,pFVar9);
          FSlowTask::Initialize(&local_238);
          if (local_278.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
          }
          fVar6 = __real_3f800000;
          FSlowTask::MakeDialogDelayed(&local_238,__real_3f800000,false,false);
          lVar23 = (longlong)(int)uVar3;
          if (param_6) {
            uVar3 = uVar3 * 5;
            if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
            }
            if (*piVar26 < (int)uVar3) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,uVar3,&param_1->AllocatorInstance,*piVar1,piVar26);
            }
            uVar8 = _UNK_150689648;
            uVar7 = ___xmm_3f800000000000000000000000000000;
            uVar25 = 0;
            if (0 < lVar23) {
              lVar24 = 0;
              do {
                ClothMeshDesc::GatherAllSourceTrianglesForTargetVertex(param_3,param_8,uVar25);
                local_1d8._0_8_ = uVar7;
                local_1d8._8_8_ = uVar8;
                local_1c8 = uVar7;
                uStack_1c0 = uVar8;
                local_1b8 = uVar7;
                uStack_1b0 = uVar8;
                uStack_1a0 = 0;
                uVar12 = 0;
                if ((int)uVar25 < local_2d0.ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                local_198 = uVar7;
                uStack_190 = uVar8;
                local_188 = uVar7;
                uStack_180 = uVar8;
                local_178 = uVar7;
                uStack_170 = uVar8;
                uStack_160 = 0;
                local_158 = uVar7;
                uStack_150 = uVar8;
                local_148 = uVar7;
                uStack_140 = uVar8;
                local_138 = uVar7;
                uStack_130 = uVar8;
                uStack_120 = 0;
                local_118 = uVar7;
                uStack_110 = uVar8;
                local_108 = uVar7;
                uStack_100 = uVar8;
                local_f8 = uVar7;
                uStack_f0 = uVar8;
                local_e0 = 0;
                local_d8 = uVar7;
                uStack_d0 = uVar8;
                local_c8 = uVar7;
                uStack_c0 = uVar8;
                local_b8 = uVar7;
                uStack_b0 = uVar8;
                local_a0 = 0;
                if ((uVar12 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar11)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                bVar11 = `anonymous_namespace'::MultipleSkinningDataForVertex<5>
                                   ((TStaticArray<FMeshToMeshVertData,5,4294967295> *)
                                    &local_1d8._s_0,param_2,param_3,uVar25,param_7,
                                    local_2d0.DataPtr[lVar24]);
                if (!bVar11) {
                  if (2 < (byte)LogClothingMeshUtils._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogClothingMeshUtils);
                  }
                  *piVar1 = 0;
                  if (*piVar26 < 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40,0x10,0,&param_1->AllocatorInstance,0,piVar26);
                  }
                  goto LAB_148c2b044;
                }
                iVar13 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40,0x10,5,&param_1->AllocatorInstance,piVar1,piVar26);
                lVar20 = 2;
                pTVar10 = &local_1d8;
                pFVar17 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x40;
                do {
                  pFVar22 = pFVar17;
                  pTVar16 = pTVar10;
                  uVar5 = *(undefined8 *)((longlong)pTVar16 + 8);
                  *(undefined8 *)pFVar22 = *(undefined8 *)pTVar16;
                  *(undefined8 *)(pFVar22 + 8) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)pTVar16 + 0x18);
                  *(undefined8 *)(pFVar22 + 0x10) = *(undefined8 *)(pTVar16 + 1);
                  *(undefined8 *)(pFVar22 + 0x18) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)pTVar16 + 0x28);
                  *(undefined8 *)(pFVar22 + 0x20) = *(undefined8 *)(pTVar16 + 2);
                  *(undefined8 *)(pFVar22 + 0x28) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)pTVar16 + 0x38);
                  *(undefined8 *)(pFVar22 + 0x30) = *(undefined8 *)(pTVar16 + 3);
                  *(undefined8 *)(pFVar22 + 0x38) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)pTVar16 + 0x48);
                  *(undefined8 *)(pFVar22 + 0x40) = *(undefined8 *)(pTVar16 + 4);
                  *(undefined8 *)(pFVar22 + 0x48) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)pTVar16 + 0x58);
                  *(undefined8 *)(pFVar22 + 0x50) = *(undefined8 *)(pTVar16 + 5);
                  *(undefined8 *)(pFVar22 + 0x58) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)pTVar16 + 0x68);
                  *(undefined8 *)(pFVar22 + 0x60) = *(undefined8 *)(pTVar16 + 6);
                  *(undefined8 *)(pFVar22 + 0x68) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)pTVar16 + 0x78);
                  *(undefined8 *)(pFVar22 + 0x70) = *(undefined8 *)(pTVar16 + 7);
                  *(undefined8 *)(pFVar22 + 0x78) = uVar5;
                  lVar20 = lVar20 + -1;
                  pTVar10 = pTVar16 + 8;
                  pFVar17 = pFVar22 + 0x80;
                } while (lVar20 != 0);
                uVar5 = *(undefined8 *)((longlong)pTVar16 + 0x88);
                uVar25 = uVar25 + 1;
                *(undefined8 *)(pFVar22 + 0x80) = *(undefined8 *)(pTVar16 + 8);
                *(undefined8 *)(pFVar22 + 0x88) = uVar5;
                uVar5 = *(undefined8 *)((longlong)pTVar16 + 0x98);
                *(undefined8 *)(pFVar22 + 0x90) = *(undefined8 *)(pTVar16 + 9);
                *(undefined8 *)(pFVar22 + 0x98) = uVar5;
                uVar5 = *(undefined8 *)((longlong)pTVar16 + 0xa8);
                *(undefined8 *)(pFVar22 + 0xa0) = *(undefined8 *)(pTVar16 + 10);
                *(undefined8 *)(pFVar22 + 0xa8) = uVar5;
                uVar5 = *(undefined8 *)((longlong)pTVar16 + 0xb8);
                *(undefined8 *)(pFVar22 + 0xb0) = *(undefined8 *)(pTVar16 + 0xb);
                *(undefined8 *)(pFVar22 + 0xb8) = uVar5;
                if (uVar25 == ((int)uVar25 / 100) * 100) {
                  pFVar15 = FText::FText(&local_268);
                  FSlowTask::EnterProgressFrame(&local_238,fVar6,pFVar15);
                  if (local_268.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
                  }
                }
                lVar24 = lVar24 + 1;
              } while (lVar24 < lVar23);
            }
            if ((*piVar1 != uVar3) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutMeshToMeshVertData.Num() == NumMesh0Verts * 5",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                                    ,0x2f1,L""), bVar11)) {
code_r0x000148c2affd:
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
            }
            if (*piVar26 < (int)uVar3) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,uVar3,&param_1->AllocatorInstance,*piVar1,piVar26);
            }
            uVar25 = 0;
            if (0 < (int)uVar3) {
              lVar24 = 0;
              do {
                piVar26 = &param_1->ArrayNum;
                ClothMeshDesc::GatherAllSourceTrianglesForTargetVertex(param_3,param_8,uVar25);
                iVar13 = *piVar26;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x1040,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                *piVar26 = iVar13 + 1;
                pFVar17 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x40;
                *(undefined8 *)pFVar17 = 0;
                *(undefined8 *)(pFVar17 + 8) = 0;
                *(undefined8 *)(pFVar17 + 0x10) = 0;
                *(undefined8 *)(pFVar17 + 0x18) = 0;
                *(undefined8 *)(pFVar17 + 0x20) = 0;
                *(undefined8 *)(pFVar17 + 0x28) = 0;
                *(undefined8 *)(pFVar17 + 0x30) = 0;
                *(undefined8 *)(pFVar17 + 0x38) = 0;
                uVar21 = *piVar26 - 1;
                uVar12 = 0;
                if ((int)uVar21 < *piVar26) {
                  uVar12 = ~uVar21 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar13 = *piVar26;
                pFVar17 = (param_1->AllocatorInstance).Data;
                pTVar18 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                                    (&param_2->Positions,uVar25);
                local_2a0 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                                      (&param_2->Normals,uVar25);
                if ((param_2->Positions).ArrayNum == (param_2->Tangents).ArrayNum) {
                  pTVar19 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                                      (&param_2->Tangents,uVar25);
                  uVar27 = (pTVar19->field0_0x0)._s_0.Y;
                  uVar28 = (pTVar19->field0_0x0)._s_0.Z;
                  uVar2 = (pTVar19->field0_0x0)._s_0.X;
                }
                else {
                  UE::Math::TVector<float>::FindBestAxisVectors
                            (local_2a0,(TVector<float> *)&local_2c0._s_0,&local_248);
                  uVar27 = local_2c0._s_0.Y;
                  uVar28 = local_2c0._s_0.Z;
                  uVar2 = local_2c0._s_0.X;
                }
                uVar12 = 0;
                if ((int)uVar25 < local_2d0.ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar11)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                local_290._s_0.X = (double)(pTVar18->field0_0x0)._s_0.X;
                local_290._s_0.Z = (double)(pTVar18->field0_0x0)._s_0.Z;
                local_290._s_0.Y = (double)(pTVar18->field0_0x0)._s_0.Y;
                iVar14 = GetBestTriangleBaseIndex
                                   (param_3,(TVector<double> *)&local_290._s_0,
                                    local_2d0.DataPtr[lVar24]);
                if ((iVar14 == -1) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ClosestTriangleBaseIdx != INDEX_NONE",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                                        ,0x310,L""), bVar11)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                local_2b0._s_0.X = (float)uVar2;
                local_2b0._s_0.Y = (float)uVar27;
                local_2b0._s_0.Z = (float)uVar28;
                `anonymous_namespace'::SingleSkinningDataForVertex
                          (pTVar18,local_2a0,(TVector<float> *)&local_2b0._s_0,param_3,iVar14,
                           (FMeshToMeshVertData *)(pFVar17 + (longlong)(iVar13 + -1) * 0x40));
                uVar25 = uVar25 + 1;
                if (uVar25 == ((int)uVar25 / 100) * 100) {
                  pFVar15 = FText::FText(&local_258);
                  FSlowTask::EnterProgressFrame(&local_238,fVar6,pFVar15);
                  if (local_258.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
                  }
                }
                lVar24 = lVar24 + 1;
              } while (lVar24 < lVar23);
            }
            if ((param_1->ArrayNum != uVar3) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutMeshToMeshVertData.Num() == NumMesh0Verts",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                                    ,799,L""), bVar11)) goto code_r0x000148c2affd;
          }
          if (param_1->ArrayNum != 0) {
            if (param_6) {
              `anonymous_namespace'::FixZeroWeightVertices(param_1,param_2,param_3,param_8);
            }
            if (local_298 != (FPointWeightMap *)0x0) {
              ComputeVertexContributions(param_1,local_298,param_5,param_6);
            }
          }
LAB_148c2b044:
          FSlowTask::Destroy(&local_238);
          if (local_238.FrameMessage.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_238.FrameMessage.TextData.Reference + 0x10))();
          }
          if (local_238.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_238.DefaultMessage.TextData.Reference + 0x10))();
          }
        }
        else if (2 < (byte)LogClothingMeshUtils._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClothingMeshUtils)
          ;
        }
      }
      else if (2 < (byte)LogClothingMeshUtils._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClothingMeshUtils);
      }
    }
  }
  return;
}

// GetBestTriangleBaseIndex @ 148c2bc50

int __cdecl
ClothingMeshUtils::GetBestTriangleBaseIndex
          (ClothMeshDesc *param_1,TVector<double> *param_2,float param_3)

{
  TVector<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  uint local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  longlong local_b8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68 [2];
  
  fVar16 = __real_7f7fffff;
  local_res20 = 0xffffffff;
  ClothMeshDesc::FindCandidateTriangles(param_1,&local_c8,param_2,param_3);
  iVar7 = local_c8.ArrayNum;
  if (iVar7 == 0) {
    iVar7 = (param_1->Indices).ArrayNum;
    iVar7 = iVar7 / 3 + (iVar7 >> 0x1f) +
            (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
  }
  uVar10 = 0;
  local_b8 = (longlong)iVar7;
  uVar6 = 0xffffffff;
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar6 = uVar10;
      if (local_c8.ArrayNum != 0) {
        uVar6 = 0;
        if ((int)uVar10 < local_c8.ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar7 = (*pcVar2)();
          return iVar7;
        }
        uVar6 = *(uint *)(local_c8.AllocatorInstance.Data + lVar11 * 4);
      }
      uVar6 = uVar6 * 3;
      uVar4 = 0;
      if ((int)uVar6 < (param_1->Indices).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      uVar8 = uVar6 + 1;
      uVar4 = (param_1->Indices).DataPtr[(int)uVar6];
      uVar5 = 0;
      if ((int)uVar8 < (param_1->Indices).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      uVar9 = uVar6 + 2;
      uVar5 = (param_1->Indices).DataPtr[(int)uVar8];
      uVar8 = 0;
      if ((int)uVar9 < (param_1->Indices).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      uVar8 = (param_1->Indices).DataPtr[(int)uVar9];
      uVar9 = 0;
      if ((int)uVar4 < (param_1->Positions).ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      pTVar1 = (param_1->Positions).DataPtr;
      local_80._s_0.Z = (double)pTVar1[(int)uVar4].field0_0x0._s_0.Z;
      uVar9 = 0;
      if ((int)uVar5 < (param_1->Positions).ArrayNum) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      local_80._s_0.Y = (double)pTVar1[(int)uVar4].field0_0x0._s_0.Y;
      local_80._s_0.X = (double)pTVar1[(int)uVar4].field0_0x0._s_0.X;
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      pTVar1 = (param_1->Positions).DataPtr;
      local_98._s_0.Z = (double)pTVar1[(int)uVar5].field0_0x0._s_0.Z;
      uVar4 = 0;
      if ((int)uVar8 < (param_1->Positions).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      local_98._s_0.Y = (double)pTVar1[(int)uVar5].field0_0x0._s_0.Y;
      local_98._s_0.X = (double)pTVar1[(int)uVar5].field0_0x0._s_0.X;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      pTVar1 = (param_1->Positions).DataPtr;
      local_b0._s_0.Z = (double)pTVar1[(int)uVar8].field0_0x0._s_0.Z;
      local_b0._s_0.Y = (double)pTVar1[(int)uVar8].field0_0x0._s_0.Y;
      local_b0._s_0.X = (double)pTVar1[(int)uVar8].field0_0x0._s_0.X;
      FMath::ClosestPointOnTriangleToPoint
                ((TVector<double> *)&local_68[0]._s_0,param_2,(TVector<double> *)&local_80._s_0,
                 (TVector<double> *)&local_98._s_0,(TVector<double> *)&local_b0._s_0);
      dVar15 = (double)local_68[0]._8_8_ - (param_2->field0_0x0)._s_0.Y;
      dVar14 = (double)local_68[0]._0_8_ - (param_2->field0_0x0)._s_0.X;
      dVar12 = (double)local_68[0]._16_8_ - (param_2->field0_0x0)._s_0.Z;
      fVar13 = (float)(dVar15 * dVar15 + dVar14 * dVar14 + dVar12 * dVar12);
      if (fVar13 < fVar16) {
        fVar16 = fVar13;
        local_res20 = uVar6;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 1;
      uVar6 = local_res20;
    } while (lVar11 < local_b8);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return uVar6;
}

// GetMaxEdgeLengths @ 148c2c2f0

TArrayView<float_const_,int> * __thiscall
ClothingMeshUtils::ClothMeshDesc::GetMaxEdgeLengths
          (ClothMeshDesc *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  float fVar1;
  uint *puVar2;
  TVector<float> *pTVar3;
  code *pcVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TArrayView<float_const_,int> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float local_res8 [2];
  TArrayView<float_const_,int> *local_res10;
  longlong local_res18;
  longlong local_res20;
  
  this_00 = &this->MaxEdgeLengths;
  local_res10 = __return_storage_ptr__;
  if ((this->MaxEdgeLengths).ArrayNum == 0) {
    iVar15 = (this->Indices).ArrayNum;
    if ((this->Indices).ArrayNum !=
        (iVar15 / 3 + (iVar15 >> 0x1f) +
        (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5265761373844930711>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                         ,0x97,"Indices.Num() % 3 == 0");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TArrayView<float_const_,int> *)(*pcVar4)();
        return pTVar11;
      }
    }
    local_res8[0] = 0.0;
    iVar15 = (this->Indices).ArrayNum / 3;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(this_00,local_res8,(this->Positions).ArrayNum);
    local_res20 = (longlong)iVar15;
    if (0 < iVar15) {
      uVar14 = 0;
      local_res18 = 0;
      do {
        lVar6 = local_res18;
        uVar8 = 0;
        if ((int)uVar14 < (this->Indices).ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pTVar11 = (TArrayView<float_const_,int> *)(*pcVar4)();
            return pTVar11;
          }
        }
        puVar2 = (this->Indices).DataPtr;
        iVar15 = 1;
        lVar13 = 0;
        do {
          uVar8 = *(uint *)((longlong)puVar2 + lVar13 * 4 + lVar6);
          uVar9 = 0;
          if ((int)uVar8 < (this->Positions).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArrayView<float_const_,int> *)(*pcVar4)();
              return pTVar11;
            }
          }
          pTVar3 = (this->Positions).DataPtr;
          lVar12 = (longlong)
                   (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                             (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3);
          fVar20 = pTVar3[(int)uVar8].field0_0x0._s_0.X;
          fVar19 = pTVar3[(int)uVar8].field0_0x0._s_0.Y;
          fVar1 = pTVar3[(int)uVar8].field0_0x0._s_0.Z;
          uVar8 = *(uint *)((longlong)puVar2 + lVar12 * 4 + lVar6);
          uVar9 = 0;
          if ((int)uVar8 < (this->Positions).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArrayView<float_const_,int> *)(*pcVar4)();
              return pTVar11;
            }
          }
          pTVar3 = (this->Positions).DataPtr;
          uVar9 = *(uint *)((longlong)puVar2 + lVar13 * 4 + lVar6);
          uVar10 = 0;
          if ((int)uVar9 < (this->MaxEdgeLengths).ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          dVar5 = (double)pTVar3[(int)uVar8].field0_0x0._s_0.Y - (double)fVar19;
          dVar16 = (double)pTVar3[(int)uVar8].field0_0x0._s_0.Z - (double)fVar1;
          auVar17._0_8_ = dVar16 * dVar16;
          auVar17._8_8_ = 0;
          dVar16 = (double)pTVar3[(int)uVar8].field0_0x0._s_0.X - (double)fVar20;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = dVar5 * dVar5 + dVar16 * dVar16 + auVar17._0_8_;
          auVar18 = sqrtpd(auVar17,auVar18);
          fVar20 = (float)auVar18._0_8_;
          if (uVar10 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArrayView<float_const_,int> *)(*pcVar4)();
              return pTVar11;
            }
          }
          fVar19 = *(float *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
          uVar8 = *(uint *)((longlong)puVar2 + lVar13 * 4 + lVar6);
          if (fVar19 <= fVar20) {
            fVar19 = fVar20;
          }
          uVar9 = 0;
          if ((int)uVar8 < (this->MaxEdgeLengths).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArrayView<float_const_,int> *)(*pcVar4)();
              return pTVar11;
            }
          }
          *(float *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = fVar19;
          uVar8 = *(uint *)((longlong)puVar2 + lVar12 * 4 + lVar6);
          uVar9 = 0;
          if ((int)uVar8 < (this->MaxEdgeLengths).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArrayView<float_const_,int> *)(*pcVar4)();
              return pTVar11;
            }
          }
          fVar19 = *(float *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
          uVar8 = *(uint *)((longlong)puVar2 + lVar12 * 4 + lVar6);
          if (fVar19 <= fVar20) {
            fVar19 = fVar20;
          }
          uVar9 = 0;
          if ((int)uVar8 < (this->MaxEdgeLengths).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArrayView<float_const_,int> *)(*pcVar4)();
              return pTVar11;
            }
          }
          iVar15 = iVar15 + 1;
          lVar13 = lVar13 + 1;
          *(float *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = fVar19;
        } while (lVar13 < 3);
        uVar14 = uVar14 + 3;
        local_res18 = local_res18 + 0xc;
        local_res20 = local_res20 + -1;
      } while (local_res20 != 0);
      local_res20 = 0;
      __return_storage_ptr__ = local_res10;
    }
  }
  iVar15 = (this->MaxEdgeLengths).ArrayNum;
  __return_storage_ptr__->DataPtr = (float *)(this_00->AllocatorInstance).Data;
  if (iVar15 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TArrayView<float_const_,int> *)(*pcVar4)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar15;
  return __return_storage_ptr__;
}

// GetPointBaryAndDist @ 148c2c870

TVector4<float> * __cdecl
ClothingMeshUtils::GetPointBaryAndDist
          (TVector4<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  float fVar7;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  double local_a8;
  undefined1 local_98 [32];
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [3];
  
  local_b8._0_12_ = (undefined1  [12])param_3->field0_0x0;
  local_98._8_4_ = (param_2->field0_0x0)._s_0.Z;
  local_98._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_d8._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_d8._8_4_ = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TPlane<float>::TPlane<float>
            ((TPlane<float> *)&local_e8,(TVector<float> *)local_d8,(TVector<float> *)local_98,
             (TVector<float> *)local_b8);
  fVar1 = (param_4->field0_0x0)._s_0.X;
  fVar2 = (param_4->field0_0x0)._s_0.Y;
  fVar3 = (param_4->field0_0x0)._s_0.Z;
  dVar5 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  local_98._8_4_ = SUB84(dVar5,0);
  local_98._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  local_98._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_98._16_8_ = (undefined8)(param_3->field0_0x0)._s_0.Z;
  fVar7 = (fVar2 * local_e4 + fVar1 * local_e8 + fVar3 * local_e0) - local_dc;
  dVar5 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  local_b8._8_4_ = SUB84(dVar5,0);
  local_b8._0_8_ = (double)(float)*(undefined8 *)&param_2->field0_0x0;
  local_b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_a8 = (double)(param_2->field0_0x0)._s_0.Z;
  dVar5 = (double)(float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  local_78._8_4_ = SUB84(dVar5,0);
  local_78._0_8_ = (double)(float)*(undefined8 *)&param_1->field0_0x0;
  local_78._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_78._s_0.Z = (double)(param_1->field0_0x0)._s_0.Z;
  local_d8._0_8_ = (undefined8)(fVar1 - fVar7 * local_e8);
  local_d8._8_8_ = (undefined8)(fVar2 - fVar7 * local_e4);
  local_d8._16_8_ = (undefined8)(fVar3 - fVar7 * local_e0);
  pTVar6 = FMath::ComputeBaryCentric2D
                     (local_60,(TVector<double> *)local_d8,(TVector<double> *)&local_78._s_0,
                      (TVector<double> *)local_b8,(TVector<double> *)local_98);
  dVar5 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(pTVar6->field0_0x0)._s_0.X;
  fVar1 = (param_4->field0_0x0)._s_0.X;
  fVar2 = (param_4->field0_0x0)._s_0.Y;
  fVar3 = (param_4->field0_0x0)._s_0.Z;
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       (local_e8 * fVar1 + local_e4 * fVar2 + local_e0 * fVar3) - local_dc;
  return __return_storage_ptr__;
}

// GetPointBaryAndDistWithNormals @ 148c2ca60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __cdecl
ClothingMeshUtils::GetPointBaryAndDistWithNormals
          (TVector4<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4,TVector<float> *param_5,
          TVector<float> *param_6,TVector<float> *param_7)

{
  double dVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TVector<double> *pTVar6;
  TVector4<float> *pTVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  uint uVar29;
  double dVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_388 [32];
  float local_328;
  float local_318;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined8 local_2e8;
  TVector<float>_u_0 local_2d8;
  TVector<float>_u_0 local_2c8;
  TVector<float>_u_0 local_2b8;
  double local_2a8;
  double local_2a0;
  double local_298;
  float local_290;
  float local_28c;
  float local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  longlong local_258;
  float local_250;
  float fStack_24c;
  float local_248;
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [8];
  float fStack_210;
  float fStack_20c;
  undefined8 local_208;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double> local_150;
  TVector<double> local_138;
  double local_120 [5];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  fVar49 = (float)((uint)(param_4->field0_0x0)._s_0.X ^ __xmm_80000000800000008000000080000000);
  fVar46 = (float)((uint)(param_4->field0_0x0)._s_0.Y ^ __xmm_80000000800000008000000080000000);
  fVar35 = (float)((uint)(param_4->field0_0x0)._s_0.Z ^ __xmm_80000000800000008000000080000000);
  fVar37 = (float)((uint)(param_5->field0_0x0)._s_0.X ^ __xmm_80000000800000008000000080000000);
  fVar48 = (float)((uint)(param_5->field0_0x0)._s_0.Y ^ __xmm_80000000800000008000000080000000);
  fVar42 = (float)((uint)(param_5->field0_0x0)._s_0.Z ^ __xmm_80000000800000008000000080000000);
  fVar39 = (float)((uint)(param_6->field0_0x0)._s_0.X ^ __xmm_80000000800000008000000080000000);
  fVar44 = (float)((uint)(param_6->field0_0x0)._s_0.Y ^ __xmm_80000000800000008000000080000000);
  fVar16 = (float)((uint)(param_6->field0_0x0)._s_0.Z ^ __xmm_80000000800000008000000080000000);
  local_2d8._s_0.X = fVar39;
  local_2d8._s_0.Y = fVar44;
  local_2d8._s_0.Z = fVar16;
  local_2c8._s_0.X = fVar49;
  local_2c8._s_0.Y = fVar46;
  local_2c8._s_0.Z = fVar35;
  local_2b8._s_0.X = fVar37;
  local_2b8._s_0.Y = fVar48;
  local_2b8._s_0.Z = fVar42;
  iVar5 = CoplanarityParam(param_1,param_2,param_3,(TVector<float> *)&local_2c8._s_0,
                           (TVector<float> *)&local_2b8._s_0,(TVector<float> *)&local_2d8._s_0,
                           param_7,local_120);
  lVar9 = (longlong)iVar5;
  if (iVar5 != 0) {
    local_1f8._s_0.X = (double)(param_3->field0_0x0)._s_0.X;
    local_1e0._s_0.X = (double)(param_2->field0_0x0)._s_0.X;
    local_1f8._s_0.Y = (double)(param_3->field0_0x0)._s_0.Y;
    local_1f8._s_0.Z = (double)(param_3->field0_0x0)._s_0.Z;
    local_1c8._s_0.X = (double)(param_1->field0_0x0)._s_0.X;
    local_1e0._s_0.Y = (double)(param_2->field0_0x0)._s_0.Y;
    local_1e0._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
    local_1b0._s_0.X = (double)(param_7->field0_0x0)._s_0.X;
    local_1c8._s_0.Y = (double)(param_1->field0_0x0)._s_0.Y;
    local_1c8._s_0.Z = (double)(param_1->field0_0x0)._s_0.Z;
    local_1b0._s_0.Y = (double)(param_7->field0_0x0)._s_0.Y;
    local_1b0._s_0.Z = (double)(param_7->field0_0x0)._s_0.Z;
    pTVar6 = FMath::ClosestPointOnTriangleToPoint
                       (&local_150,(TVector<double> *)&local_1b0._s_0,
                        (TVector<double> *)&local_1c8._s_0,(TVector<double> *)&local_1e0._s_0,
                        (TVector<double> *)&local_1f8._s_0);
    bVar4 = false;
    uVar10 = 0;
    fStack_2f4 = _UNK_150689644;
    local_2f8 = ___xmm_3f800000000000000000000000000000;
    fStack_2ec = _UNK_15068964c;
    fStack_2f0 = _UNK_150689648;
    fVar17 = (float)(pTVar6->field0_0x0)._s_0.X - (param_7->field0_0x0)._s_0.X;
    fVar19 = (float)(pTVar6->field0_0x0)._s_0.Y - (param_7->field0_0x0)._s_0.Y;
    fVar12 = (float)(pTVar6->field0_0x0)._s_0.Z - (param_7->field0_0x0)._s_0.Z;
    local_328 = __real_7f7fffff;
    if (0 < iVar5) {
      dVar22 = (double)(SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar12 * fVar12) * __real_40400000)
      ;
      local_238._4_4_ = _UNK_15068964c;
      local_238._0_4_ = _UNK_15068964c;
      fStack_230 = _UNK_15068964c;
      fStack_22c = _UNK_15068964c;
      local_318 = ___xmm_3f800000000000000000000000000000;
      local_228._4_4_ = _UNK_150689648;
      local_228._0_4_ = _UNK_150689648;
      fStack_220 = _UNK_150689648;
      fStack_21c = _UNK_150689648;
      local_218._4_4_ = _UNK_150689644;
      local_218._0_4_ = _UNK_150689644;
      fStack_210 = _UNK_150689644;
      fStack_20c = _UNK_150689644;
      uVar11 = uVar10;
      fVar12 = __real_3f800000;
      uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      fVar17 = ___xmm_3f800000000000000000000000000000;
      fVar19 = _UNK_150689644;
      fVar41 = _UNK_150689648;
      fVar32 = _UNK_15068964c;
      local_278 = dVar22;
      local_258 = lVar9;
      do {
        dVar1 = local_120[uVar10];
        uVar13 = SUB84(dVar1,0) & uVar25;
        uVar15 = (uint)((ulonglong)dVar1 >> 0x20) & uVar29;
        if (dVar22 <= (double)CONCAT44(uVar15,uVar13) && (double)CONCAT44(uVar15,uVar13) != dVar22)
        {
LAB_148c2d402:
          fVar21 = (float)local_238._0_4_;
          fVar18 = (float)local_218._0_4_;
          fVar14 = (float)local_228._0_4_;
        }
        else {
          fVar14 = (float)dVar1;
          fVar20 = fVar37 * fVar14 + (param_2->field0_0x0)._s_0.X;
          fVar26 = fVar48 * fVar14 + (param_2->field0_0x0)._s_0.Y;
          fVar18 = fVar49 * fVar14 + (param_1->field0_0x0)._s_0.X;
          fVar43 = fVar44 * fVar14 + (param_3->field0_0x0)._s_0.Y;
          fVar47 = fVar46 * fVar14 + (param_1->field0_0x0)._s_0.Y;
          fVar33 = fVar20 - fVar18;
          fVar30 = fVar16 * fVar14 + (param_3->field0_0x0)._s_0.Z;
          fVar40 = fVar39 * fVar14 + (param_3->field0_0x0)._s_0.X;
          fVar45 = fVar43 - fVar47;
          fVar38 = fVar42 * fVar14 + (param_2->field0_0x0)._s_0.Z;
          fVar36 = fVar35 * fVar14 + (param_1->field0_0x0)._s_0.Z;
          fVar31 = fVar26 - fVar47;
          fVar27 = fVar40 - fVar18;
          fVar21 = fVar38 - fVar36;
          fVar14 = fVar30 - fVar36;
          local_248 = fVar45 * fVar33 - fVar27 * fVar31;
          fVar27 = fVar27 * fVar21 - fVar14 * fVar33;
          fVar21 = fVar14 * fVar31 - fVar45 * fVar21;
          fVar14 = fVar27 * fVar27 + fVar21 * fVar21 + local_248 * local_248;
          if (fVar14 == fVar12) {
            lVar9 = local_258;
            fVar14 = fVar27;
            fVar31 = fVar21;
            fVar33 = local_248;
            local_208 = CONCAT44(fVar27,fVar21);
          }
          else if (__real_322bcc77 <= fVar14) {
            fVar33 = __real_3f800000 / SQRT(fVar14);
            fVar31 = fVar21 * fVar33;
            fVar14 = fVar27 * fVar33;
            fVar33 = local_248 * fVar33;
          }
          else {
            fVar14 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
            local_208 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            uVar3 = local_208;
            local_208._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar31 = (float)local_208;
            fVar33 = (float)uVar8;
            local_208 = uVar3;
          }
          _local_250 = CONCAT44(fVar27,fVar21);
          local_290 = (param_7->field0_0x0)._s_0.X;
          local_28c = (param_7->field0_0x0)._s_0.Y;
          local_288 = (param_7->field0_0x0)._s_0.Z;
          local_2a8 = (double)fVar20;
          local_260 = (double)fVar38;
          local_268 = (double)fVar18;
          local_298 = (double)fVar43;
          fVar18 = (fVar14 * local_28c + local_290 * fVar31 + fVar33 * local_288) -
                   (fVar14 * fVar47 + fVar18 * fVar31 + fVar33 * fVar36);
          dVar23 = (double)fVar36;
          local_280 = (double)fVar40;
          local_270 = (double)fVar47;
          local_2a0 = (double)fVar26;
          dVar34 = (double)fVar30;
          dVar22 = dVar34 - dVar23;
          dVar28 = (local_280 - local_268) * (local_260 - dVar23) - (local_2a8 - local_268) * dVar22
          ;
          dVar1 = (local_298 - local_270) * (local_2a8 - local_268) -
                  (local_280 - local_268) * (local_2a0 - local_270);
          dVar24 = (local_2a0 - local_270) * dVar22 - (local_298 - local_270) * (local_260 - dVar23)
          ;
          dVar22 = local_278;
          fVar12 = __real_3f800000;
          uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          _local_2f8 = dVar23;
          if (dVar24 * dVar24 + dVar28 * dVar28 + dVar1 * dVar1 <= __real_3e45798ee2308c3a)
          goto LAB_148c2d402;
          _local_2f8 = (undefined8)(local_290 - fVar18 * fVar31);
          _fStack_2f0 = (undefined8)(local_28c - fVar18 * fVar14);
          local_2e8 = (undefined8)(local_288 - fVar18 * fVar33);
          local_198._s_0.X = local_280;
          local_198._s_0.Y = local_298;
          local_198._s_0.Z = dVar34;
          local_180._s_0.X = local_2a8;
          local_180._s_0.Y = local_2a0;
          local_180._s_0.Z = local_260;
          local_168._s_0.X = local_268;
          local_168._s_0.Y = local_270;
          local_168._s_0.Z = dVar23;
          pTVar6 = FMath::ComputeBaryCentric2D
                             (&local_138,(TVector<double> *)&local_2f8,
                              (TVector<double> *)&local_168._s_0,(TVector<double> *)&local_180._s_0,
                              (TVector<double> *)&local_198._s_0);
          fVar20 = (float)(pTVar6->field0_0x0)._s_0.X;
          fVar18 = (float)(pTVar6->field0_0x0)._s_0.Y;
          fVar14 = (float)(pTVar6->field0_0x0)._s_0.Z;
          if ((((fVar20 == fVar18) && (fVar18 == fVar14)) && (fVar14 == 0.0)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!(BaryCoords.X == BaryCoords.Y && BaryCoords.Y == BaryCoords.Z && BaryCoords.Z == 0.0f)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                                 ,0x447,
                                 L"ComputeBaryCentric2D returned all zeros despite triangle area being non-zero"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TVector4<float> *)(*pcVar2)();
            return pTVar7;
          }
          bVar4 = true;
          if ((((0.0 <= fVar20) && (fVar20 <= __real_3f800000)) &&
              ((0.0 <= fVar18 && ((fVar18 <= __real_3f800000 && (0.0 <= fVar14)))))) &&
             (fVar14 <= __real_3f800000)) {
            fVar21 = (float)local_120[(int)uVar11];
            local_318 = fVar20;
            fVar17 = fVar20;
            fVar19 = fVar18;
            fVar41 = fVar14;
            fVar32 = fVar21;
            goto LAB_148c2d474;
          }
          fVar26 = (float)(((double)fVar18 - __real_3fe0000000000000) *
                           ((double)fVar18 - __real_3fe0000000000000) +
                           ((double)fVar20 - __real_3fe0000000000000) *
                           ((double)fVar20 - __real_3fe0000000000000) +
                          ((double)fVar14 - __real_3fe0000000000000) *
                          ((double)fVar14 - __real_3fe0000000000000));
          lVar9 = local_258;
          dVar22 = local_278;
          fVar12 = __real_3f800000;
          uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if (local_328 <= fVar26) goto LAB_148c2d402;
          _local_228 = ZEXT416((uint)fVar14);
          fVar32 = (float)local_120[uVar10];
          fStack_2f4 = fVar18;
          local_2f8 = fVar20;
          fStack_2ec = fVar32;
          fStack_2f0 = fVar14;
          _local_218 = ZEXT416((uint)fVar18);
          _local_238 = ZEXT416((uint)fVar32);
          fVar21 = fVar32;
          fVar17 = fVar20;
          fVar19 = fVar18;
          fVar41 = fVar14;
          local_328 = fVar26;
          local_318 = fVar20;
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < lVar9);
      if (bVar4) {
LAB_148c2d474:
        fVar39 = ((fVar49 * fVar21 + (param_1->field0_0x0)._s_0.X) * local_318 +
                  (fVar37 * fVar21 + (param_2->field0_0x0)._s_0.X) * fVar18 +
                 (fVar39 * fVar21 + (param_3->field0_0x0)._s_0.X) * fVar14) -
                 (param_7->field0_0x0)._s_0.X;
        fVar37 = ((fVar48 * fVar21 + (param_2->field0_0x0)._s_0.Y) * fVar18 +
                  (fVar46 * fVar21 + (param_1->field0_0x0)._s_0.Y) * local_318 +
                 (fVar44 * fVar21 + (param_3->field0_0x0)._s_0.Y) * fVar14) -
                 (param_7->field0_0x0)._s_0.Y;
        fVar16 = ((fVar42 * fVar21 + (param_2->field0_0x0)._s_0.Z) * fVar18 +
                  (fVar35 * fVar21 + (param_1->field0_0x0)._s_0.Z) * local_318 +
                 (fVar16 * fVar21 + (param_3->field0_0x0)._s_0.Z) * fVar14) -
                 (param_7->field0_0x0)._s_0.Z;
        if (SQRT(fVar37 * fVar37 + fVar39 * fVar39 + fVar16 * fVar16) <= __real_38d1b717) {
          (__return_storage_ptr__->field0_0x0)._s_0.X = fVar17;
          (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar19;
          (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar41;
          (__return_storage_ptr__->field0_0x0)._s_0.W = fVar32;
          return __return_storage_ptr__;
        }
      }
    }
  }
  GetPointBaryAndDist(__return_storage_ptr__,param_1,param_2,param_3,param_7);
  return __return_storage_ptr__;
}

// QuadraticRoots @ 148c30110

int __cdecl ClothingMeshUtils::QuadraticRoots(double param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = param_1 * __real_3fd0000000000000 * param_1 - param_2;
  if (0.0 <= dVar2) {
    dVar1 = param_1 * __real_3fe0000000000000;
    dVar2 = SQRT(dVar2);
    *param_3 = param_1 * __real_bfe0000000000000 - dVar2;
    param_3[1] = dVar2 - dVar1;
    return 2;
  }
  return 0;
}

// SingleSkinningDataForVertex @ 148c322f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ClothingMeshUtils::`anonymous_namespace'::SingleSkinningDataForVertex
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3,
          ClothMeshDesc *param_4,int param_5,FMeshToMeshVertData *param_6)

{
  TArrayView<unsigned_int_const_,int> *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  TVector<float> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint *puVar11;
  TVector<float> *pTVar12;
  TVector<float> *pTVar13;
  TVector<float> *pTVar14;
  TVector<float> *pTVar15;
  TVector<float> *pTVar16;
  FText *pFVar17;
  FText *pFVar18;
  FText *pFVar19;
  FText *pFVar20;
  FTextFormat *pFVar21;
  TVector4<float> *pTVar22;
  TArrayView<UE::Math::TVector<float>_const_,int> *this_00;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  TVector<float>_u_0 local_150;
  TVector<float>_u_0 local_144;
  TVector<float> *local_138;
  TVector<float> *local_130;
  TVector<float> *local_128;
  TVector<float> *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FTextFormat local_98;
  TVector4<float> local_88;
  TVector4<float> local_78;
  TVector4<float> local_68 [3];
  
  if (((param_4->Normals).ArrayNum != (param_4->AveragedNormals).ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceMesh.HasAveragedNormals()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\Utils\\ClothingMeshUtils.cpp"
                         ,0x1bf,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  this = &param_4->Indices;
  puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,param_5);
  pTVar12 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                      (&param_4->Positions,*puVar11);
  iVar1 = param_5 + 1;
  local_128 = pTVar12;
  puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,iVar1);
  pTVar13 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                      (&param_4->Positions,*puVar11);
  iVar2 = param_5 + 2;
  local_130 = pTVar13;
  puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,iVar2);
  pTVar14 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                      (&param_4->Positions,*puVar11);
  local_138 = pTVar14;
  puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,param_5);
  this_00 = &param_4->Normals;
  local_120 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](this_00,*puVar11);
  puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,iVar1);
  pTVar15 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](this_00,*puVar11);
  puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,iVar2);
  pTVar16 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](this_00,*puVar11);
  pTVar8 = local_120;
  fVar26 = (pTVar13->field0_0x0)._s_0.Z - (pTVar12->field0_0x0)._s_0.Z;
  fVar24 = (pTVar13->field0_0x0)._s_0.Y - (pTVar12->field0_0x0)._s_0.Y;
  fVar28 = (pTVar13->field0_0x0)._s_0.X - (pTVar12->field0_0x0)._s_0.X;
  fVar27 = (pTVar14->field0_0x0)._s_0.Y - (pTVar12->field0_0x0)._s_0.Y;
  fVar25 = (pTVar14->field0_0x0)._s_0.Z - (pTVar12->field0_0x0)._s_0.Z;
  fVar29 = (pTVar14->field0_0x0)._s_0.X - (pTVar12->field0_0x0)._s_0.X;
  fVar23 = fVar24 * fVar25 - fVar26 * fVar27;
  fVar27 = fVar28 * fVar27 - fVar24 * fVar29;
  fVar24 = fVar26 * fVar29 - fVar28 * fVar25;
  if (__real_322bcc77 <= fVar24 * fVar24 + fVar23 * fVar23 + fVar27 * fVar27) {
    pTVar22 = GetPointBaryAndDistWithNormals
                        (&local_88,pTVar12,pTVar13,pTVar14,local_120,pTVar15,pTVar16,param_1);
    uVar7 = *(undefined8 *)((longlong)&pTVar22->field0_0x0 + 8);
    *(undefined8 *)&(param_6->PositionBaryCoordsAndDist).field0_0x0 =
         *(undefined8 *)&pTVar22->field0_0x0;
    *(undefined8 *)((longlong)&(param_6->PositionBaryCoordsAndDist).field0_0x0 + 8) = uVar7;
    local_150._s_0.X = (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
    local_150._s_0.Y = (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_150._s_0.Z = (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    pTVar22 = GetPointBaryAndDistWithNormals
                        (&local_78,pTVar12,pTVar13,pTVar14,pTVar8,pTVar15,pTVar16,
                         (TVector<float> *)&local_150._s_0);
    uVar7 = *(undefined8 *)((longlong)&pTVar22->field0_0x0 + 8);
    *(undefined8 *)&(param_6->NormalBaryCoordsAndDist).field0_0x0 =
         *(undefined8 *)&pTVar22->field0_0x0;
    *(undefined8 *)((longlong)&(param_6->NormalBaryCoordsAndDist).field0_0x0 + 8) = uVar7;
    local_144._s_0.X = (param_1->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    local_144._s_0.Y = (param_3->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_144._s_0.Z = (param_3->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    pTVar22 = GetPointBaryAndDistWithNormals
                        (local_68,pTVar12,pTVar13,pTVar14,pTVar8,pTVar15,pTVar16,
                         (TVector<float> *)&local_144._s_0);
    uVar7 = *(undefined8 *)((longlong)&pTVar22->field0_0x0 + 8);
    *(undefined8 *)&(param_6->TangentBaryCoordsAndDist).field0_0x0 =
         *(undefined8 *)&pTVar22->field0_0x0;
    *(undefined8 *)((longlong)&(param_6->TangentBaryCoordsAndDist).field0_0x0 + 8) = uVar7;
    puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,param_5);
    param_6->SourceMeshVertIndices[0] = (ushort)*puVar11;
    puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,iVar1);
    param_6->SourceMeshVertIndices[1] = (ushort)*puVar11;
    puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,iVar2);
    uVar3 = *puVar11;
    param_6->SourceMeshVertIndices[3] = 0;
    bVar9 = true;
    param_6->SourceMeshVertIndices[2] = (ushort)uVar3;
    param_6->Weight = 1.0;
  }
  else {
    puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,param_5);
    uVar3 = *puVar11;
    puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,iVar1);
    uVar4 = *puVar11;
    puVar11 = TArrayView<unsigned_int_const_,int>::operator[](this,iVar2);
    uVar5 = *puVar11;
    ::FString::PrintfImpl(&local_f8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    pFVar17 = FText::FromString(&local_c8,&local_f8);
    ::FString::PrintfImpl(&local_108,L"X=%3.3f Y=%3.3f Z=%3.3f");
    pFVar18 = FText::FromString(&local_b8,&local_108);
    ::FString::PrintfImpl(&local_118,L"X=%3.3f Y=%3.3f Z=%3.3f");
    pFVar19 = FText::FromString(&local_a8,&local_118);
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_d8,L"ClothingMeshUtils",L"DegenerateTriangleError",
                         L"Failed to generate skinning data, found coincident vertices in triangle ({0}, {1}, {2}), points A={3} B={4} C={5}"
                        );
    pFVar21 = FTextFormat::FTextFormat(&local_98,pFVar20,Default);
    FText::Format<unsigned_int,unsigned_int,unsigned_int,FText,FText,FText>
              (&local_e8,pFVar21,uVar3,uVar4,uVar5,pFVar19,pFVar18,pFVar17);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogClothingMeshUtils._0_1_) {
      FText::ToString(&local_e8);
      UE::Logging::Private::BasicLog<3>
                (&`ClothingMeshUtils::SingleSkinningDataForVertex'::`13'::LOG_Static,
                 (FLogCategoryBase *)&LogClothingMeshUtils);
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    bVar9 = false;
  }
  return bVar9;
}

// SkinPhysicsMesh @ 148c32840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ClothingMeshUtils::SkinPhysicsMesh
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FClothPhysicalMeshData *param_2,
          TTransform<double> *param_3,TMatrix<float> *param_4,int param_5,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_7)

{
  uint uVar1;
  <lambda_1> local_res10;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  FClothPhysicalMeshData **local_60;
  FClothPhysicalMeshData *local_58;
  TTransform<double> *local_50;
  FScriptContainerElement *local_48;
  TMatrix<float> *local_40;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_38;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_30;
  
  uVar1 = (param_2->Vertices).ArrayNum;
  if (-1 < (int)uVar1) {
    param_6->ArrayNum = 0;
    if (param_6->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar1,&param_6->AllocatorInstance,0,&param_6->ArrayMax);
    }
    param_7->ArrayNum = 0;
    if (param_7->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar1,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
    }
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed(param_6,uVar1);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed(param_7,uVar1);
    if ((2 < (byte)LogClothingMeshUtils._0_1_) && (0xc < param_2->MaxBoneWeights)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClothingMeshUtils);
    }
    local_48 = (param_1->AllocatorInstance).Data;
    local_78.DataPtr = (void **)0x0;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`ClothingMeshUtils::SkinPhysicsMesh'::__l2::<lambda_1>,void,int>::
               Call;
    local_60 = &local_58;
    local_78.ArrayNum = 0;
    local_38 = param_6;
    local_30 = param_7;
    local_58 = param_2;
    local_50 = param_3;
    local_40 = param_4;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",uVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_68,local_res10,
               (uint)(uVar1 < 0x1f5),&local_78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// TripleProduct @ 148c34660

double __cdecl
ClothingMeshUtils::TripleProduct
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_3->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Z;
  fVar3 = (param_2->field0_0x0)._s_0.Y;
  fVar4 = (param_2->field0_0x0)._s_0.X;
  return (double)((fVar1 * fVar2 - fVar4 * (param_3->field0_0x0)._s_0.Z) *
                  (param_1->field0_0x0)._s_0.Y +
                  (fVar3 * (param_3->field0_0x0)._s_0.Z - fVar2 * (param_3->field0_0x0)._s_0.Y) *
                  (param_1->field0_0x0)._s_0.X +
                 (fVar4 * (param_3->field0_0x0)._s_0.Y - fVar1 * fVar3) *
                 (param_1->field0_0x0)._s_0.Z);
}

// Z_Construct_UClass_UClothConfigCommon_NoRegister @ 148c35050

UClass * __cdecl Z_Construct_UClass_UClothConfigCommon_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothConfigCommon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothConfigCommon",
               &Z_Registration_Info_UClass_UClothConfigCommon.InnerSingleton,
               UClothConfigCommon::StaticRegisterNativesUClothConfigCommon,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothConfigCommon>,
               InternalVTableHelperCtorCaller<UClothConfigCommon>,local_res8,
               UClothConfigBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothConfigCommon.InnerSingleton;
}

// Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister @ 148c35110

UClass * __cdecl Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothLODDataCommon_Legacy",
               &Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.InnerSingleton,
               UClothLODDataCommon_Legacy::StaticRegisterNativesUClothLODDataCommon_Legacy,0x1b8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothLODDataCommon_Legacy>,
               InternalVTableHelperCtorCaller<UClothLODDataCommon_Legacy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.InnerSingleton;
}

// Z_Construct_UClass_UClothSharedConfigCommon_NoRegister @ 148c351c0

UClass * __cdecl Z_Construct_UClass_UClothSharedConfigCommon_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothSharedConfigCommon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothSharedConfigCommon",
               &Z_Registration_Info_UClass_UClothSharedConfigCommon.InnerSingleton,
               UClothSharedConfigCommon::StaticRegisterNativesUClothSharedConfigCommon,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothSharedConfigCommon>,
               InternalVTableHelperCtorCaller<UClothSharedConfigCommon>,local_res8,
               UClothConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothSharedConfigCommon.InnerSingleton;
}

// Z_Construct_UClass_UClothingAssetCommon_NoRegister @ 148c35280

UClass * __cdecl Z_Construct_UClass_UClothingAssetCommon_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingAssetCommon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothingAssetCommon",
               &Z_Registration_Info_UClass_UClothingAssetCommon.InnerSingleton,
               UClothingAssetCommon::StaticRegisterNativesUClothingAssetCommon,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UClothingAssetCommon>,
               InternalVTableHelperCtorCaller<UClothingAssetCommon>,local_res8,
               UClothingAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingAssetCommon.InnerSingleton;
}

// Z_Construct_UClass_UClothingAssetCustomData_NoRegister @ 148c35340

UClass * __cdecl Z_Construct_UClass_UClothingAssetCustomData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingAssetCustomData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothingAssetCustomData",
               &Z_Registration_Info_UClass_UClothingAssetCustomData.InnerSingleton,
               UClothingAssetCustomData::StaticRegisterNativesUClothingAssetCustomData,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothingAssetCustomData>,
               InternalVTableHelperCtorCaller<UClothingAssetCustomData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingAssetCustomData.InnerSingleton;
}

// Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode @ 148c353f0

UEnum * __cdecl Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode(void)

{
  if (Z_Registration_Info_UEnum_EClothMassMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EClothMassMode.InnerSingleton,
               &Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EClothMassMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FClothConfig_Legacy @ 148c35430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothConfig_Legacy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothConfig_Legacy.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothConfig_Legacy.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothConfig_Legacy.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FClothConfig_Legacy.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FClothParameterMask_Legacy @ 148c354b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothParameterMask_Legacy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothParameterMask_Legacy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothParameterMask_Legacy.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothParameterMask_Legacy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothParameterMask_Legacy.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_ClothingSystemRuntimeCommon @ 148c35530

void __cdecl IMPLEMENT_MODULE_ClothingSystemRuntimeCommon(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GClothMaxDeltaTimeTeleportMultiplier'' @ 15040b2b0

void __cdecl _dynamic_atexit_destructor_for__GClothMaxDeltaTimeTeleportMultiplier__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GClothMaxDeltaTimeTeleportMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'GClothMaxVelocityScale'' @ 15040b2d0

void __cdecl _dynamic_atexit_destructor_for__GClothMaxVelocityScale__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GClothMaxVelocityScale);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterClothingAssetCustomVersion'' @ 15040b2f0

void __cdecl _dynamic_atexit_destructor_for__GRegisterClothingAssetCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterClothingAssetCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogClothingMeshUtils'' @ 15040b310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogClothingMeshUtils__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogClothingMeshUtils);
  return;
}

