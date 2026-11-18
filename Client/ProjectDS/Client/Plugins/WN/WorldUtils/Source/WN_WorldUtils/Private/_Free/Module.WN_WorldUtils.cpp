// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 247

// `dynamic_initializer_for_'ModuleName'' @ 1411b6650

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWN_WorldUtils'' @ 1411b6670

void __cdecl _dynamic_initializer_for__ModuleRegistrantWN_WorldUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WN_WorldUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WN_WorldUtils",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWN_WorldUtilsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 1411b66c0

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 1411b66e0

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 1411b6700

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 1411b6720

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 1411b6740

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 1411b6760

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 1411b6780

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 1411b67a0

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1411b67c0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1411b6850

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1411b68e0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1411b6970

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1411b6a00

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1411b6a90

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1411b6b20

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1411b6bb0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1411b6c40

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1411b6cd0

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

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 1411b6d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HandleViewParallelForImp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HandleViewParallelForImp ==
      (FThreadSafeStaticStat<FStat_STAT_HandleViewParallelForImp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HandleViewParallelForImp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleViewParallelForImp,*pFVar1,
               L"HandleViewParallelForImp","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 1411b6df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleViewParallelForImp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleViewParallelForImp ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleViewParallelForImp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleViewParallelForImp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleViewParallelForImp,*pFVar1,
               L"ParticleViewParallelForImp","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 1411b6e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesParallelFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesParallelFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesParallelFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesParallelFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesParallelFor,*pFVar1,
               L"ParticlesParallelFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 1411b6f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesSequentialFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesSequentialFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesSequentialFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesSequentialFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesSequentialFor,*pFVar1,
               L"ParticlesSequentialFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'WorldUtils'' @ 1411b6fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__WorldUtils__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&WorldUtils,L"WorldUtils",Log,All);
  atexit(_dynamic_atexit_destructor_for__WorldUtils__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Private_WN_BVC_VoxelVisualizer_h__Script_WN_WorldUtils_565986117'' @ 1411b6fe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Private_WN_BVC_VoxelVisualizer_h__Script_WN_WorldUtils_565986117__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Private_WN_BVC_VoxelVisualizer_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_BGMVolumeComponent_h__Script_WN_WorldUtils_1214737349'' @ 1411b7020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_BGMVolumeComponent_h__Script_WN_WorldUtils_1214737349__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_BGMVolumeComponent_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_BGMVolume_h__Script_WN_WorldUtils_3307974862'' @ 1411b7060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_BGMVolume_h__Script_WN_WorldUtils_3307974862__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_BGMVolume_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_DistrictVolumeComponent_h__Script_WN_WorldUtils_3954905441'' @ 1411b70a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_DistrictVolumeComponent_h__Script_WN_WorldUtils_3954905441__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_DistrictVolumeComponent_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_OcclusionVolumeComponent_h__Script_WN_WorldUtils_78965050'' @ 1411b70e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_OcclusionVolumeComponent_h__Script_WN_WorldUtils_78965050__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_OcclusionVolumeComponent_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_OcclusionVolume_h__Script_WN_WorldUtils_3494615079'' @ 1411b7120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_OcclusionVolume_h__Script_WN_WorldUtils_3494615079__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_OcclusionVolume_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_PhasingVolume_h__Script_WN_WorldUtils_2438152769'' @ 1411b7160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_PhasingVolume_h__Script_WN_WorldUtils_2438152769__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_PhasingVolume_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_StaticMesh_Inherited_h__Script_WN_WorldUtils_659242585'' @ 1411b71a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_StaticMesh_Inherited_h__Script_WN_WorldUtils_659242585__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_StaticMesh_Inherited_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_WorldInfo_h__Script_WN_WorldUtils_1135307365'' @ 1411b71e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_WorldInfo_h__Script_WN_WorldUtils_1135307365__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_WorldInfo_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_WorldInfo_h__Script_WN_WorldUtils_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_WorldInfo_h__Script_WN_WorldUtils_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_WorldUtils_Subsystem_h__Script_WN_WorldUtils_2556197788'' @ 1411b7230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_WorldUtils_Subsystem_h__Script_WN_WorldUtils_2556197788__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_WorldUtils_Subsystem_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_WorldUtils_Subsystem_h__Script_WN_WorldUtils_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_ZoneVolumeComponent_h__Script_WN_WorldUtils_1819131314'' @ 1411b7280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_ZoneVolumeComponent_h__Script_WN_WorldUtils_1819131314__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_ZoneVolumeComponent_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_ZoneVolume_h__Script_WN_WorldUtils_1073049434'' @ 1411b72c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_ZoneVolume_h__Script_WN_WorldUtils_1073049434__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_WorldUtils",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_WorldUtils_Source_WN_WorldUtils_Public_WN_ZoneVolume_h__Script_WN_WorldUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WN_WorldUtils'' @ 1411b7300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WN_WorldUtils__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xcd5d858;
  local_res8[0].DeclarationsHash = 0xc3325019;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WN_WorldUtils,L"/Script/WN_WorldUtils",
             &Z_Registration_Info_UPackage__Script_WN_WorldUtils,local_res8);
  return;
}

// `dynamic_initializer_for_'sWorldInfoCustomVersionRegistration'' @ 1411b7340

void __cdecl _dynamic_initializer_for__sWorldInfoCustomVersionRegistration__(void)

{
  FGuid local_18;
  
  local_18 = FWN_WorldInfoCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,6,L"WorldInfoVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__sWorldInfoCustomVersionRegistration__);
  return;
}

// Z_Construct_UClass_UWN_Island_ZoneIDMap @ 14a024410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_Island_ZoneIDMap(void)

{
  if (Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.OuterSingleton,
               &Z_Construct_UClass_UWN_Island_ZoneIDMap_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.OuterSingleton;
}

// Z_Construct_UClass_UWN_WorldEditInfo @ 14a024450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_WorldEditInfo(void)

{
  if (Z_Registration_Info_UClass_UWN_WorldEditInfo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_WorldEditInfo.OuterSingleton,
               &Z_Construct_UClass_UWN_WorldEditInfo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_WorldEditInfo.OuterSingleton;
}

// Z_Construct_UClass_UWN_WorldInfo @ 14a024490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_WorldInfo(void)

{
  if (Z_Registration_Info_UClass_UWN_WorldInfo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_WorldInfo.OuterSingleton,
               &Z_Construct_UClass_UWN_WorldInfo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_WorldInfo.OuterSingleton;
}

// Z_Construct_UScriptStruct_FWN_VolumeMinMax @ 14a0244d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_VolumeMinMax(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_VolumeMinMax.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_VolumeMinMax.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_VolumeMinMax_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_VolumeMinMax.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_VolumeMinMax.InnerSingleton;
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

// EWN_WorldEditDataType_StaticEnum @ 14a024550

UEnum * __cdecl EWN_WorldEditDataType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_WorldEditDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_WorldUtils();
    Z_Registration_Info_UEnum_EWN_WorldEditDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditDataType,(UObject *)pUVar1,
                       L"EWN_WorldEditDataType");
  }
  return Z_Registration_Info_UEnum_EWN_WorldEditDataType.OuterSingleton;
}

// NewStructOps @ 14a024590

void * __cdecl Z_Construct_UScriptStruct_FWN_PropertyInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_PropertyInfo,&UE::CoreUObject::Private::Construct<FWN_PropertyInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_PropertyInfo>,&UE::CoreUObject::Private::Destruct<FWN_PropertyInfo>,&UE::CoreUObject::Private::Copy<FWN_PropertyInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_IsDistrictVolume_SetBit @ 14a0245d0

void __cdecl
Z_Construct_UScriptStruct_FWN_DistrictInfo_Statics::NewProp_IsDistrictVolume_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14a0245e0

void * __cdecl Z_Construct_UScriptStruct_FWN_DistrictInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_DistrictInfo,&UE::CoreUObject::Private::Construct<FWN_DistrictInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_DistrictInfo>,&UE::CoreUObject::Private::Destruct<FWN_DistrictInfo>,&UE::CoreUObject::Private::Copy<FWN_DistrictInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_IsZoneVolume_SetBit @ 14a024620

void __cdecl
Z_Construct_UScriptStruct_FWN_ZoneInfo_Statics::NewProp_IsZoneVolume_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_IsDistrictVolume_SetBit @ 14a024630

void __cdecl
Z_Construct_UScriptStruct_FWN_ZoneInfo_Statics::NewProp_IsDistrictVolume_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewStructOps @ 14a024640

void * __cdecl Z_Construct_UScriptStruct_FWN_ZoneInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_ZoneInfo,&UE::CoreUObject::Private::Construct<FWN_ZoneInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_ZoneInfo>,&UE::CoreUObject::Private::Destruct<FWN_ZoneInfo>,&UE::CoreUObject::Private::Copy<FWN_ZoneInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a024680

void * __cdecl Z_Construct_UScriptStruct_FWN_IslandInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_IslandInfo,&UE::CoreUObject::Private::Construct<FWN_IslandInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_IslandInfo>,&UE::CoreUObject::Private::Destruct<FWN_IslandInfo>,&UE::CoreUObject::Private::Copy<FWN_IslandInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a0246c0

void * __cdecl Z_Construct_UScriptStruct_FWN_PhasingVolumeInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_PhasingVolumeInfo,&UE::CoreUObject::Private::Construct<FWN_PhasingVolumeInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_PhasingVolumeInfo>,&UE::CoreUObject::Private::Destruct<FWN_PhasingVolumeInfo>,&UE::CoreUObject::Private::Copy<FWN_PhasingVolumeInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a024700

void * __cdecl Z_Construct_UScriptStruct_FWN_BGMSoundInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_BGMSoundInfo,&UE::CoreUObject::Private::Construct<FWN_BGMSoundInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_BGMSoundInfo>,&UE::CoreUObject::Private::Destruct<FWN_BGMSoundInfo>,&UE::CoreUObject::Private::Copy<FWN_BGMSoundInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EWN_WorldEditInfo_Type_StaticEnum @ 14a024740

UEnum * __cdecl EWN_WorldEditInfo_Type_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_WorldEditInfo_Type.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_WorldUtils();
    Z_Registration_Info_UEnum_EWN_WorldEditInfo_Type.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditInfo_Type,(UObject *)pUVar1,
                       L"EWN_WorldEditInfo_Type");
  }
  return Z_Registration_Info_UEnum_EWN_WorldEditInfo_Type.OuterSingleton;
}

// NewStructOps @ 14a024780

void * __cdecl Z_Construct_UScriptStruct_FWN_VolumeMinMax_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_VolumeMinMax,&UE::CoreUObject::Private::Construct<FWN_VolumeMinMax>,&UE::CoreUObject::Private::ConstructForTests<FWN_VolumeMinMax>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_AWN_BVC_VoxelVisualizer @ 14a024880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_BVC_VoxelVisualizer(void)

{
  if (Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.OuterSingleton,
               &Z_Construct_UClass_AWN_BVC_VoxelVisualizer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.OuterSingleton;
}

// Z_Construct_UClass_UWN_DistrictVolumeComponent @ 14a024980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_DistrictVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_DistrictVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a024ac0

void * __thiscall
FWN_WorldUtilsModule::_scalar_deleting_destructor_(FWN_WorldUtilsModule *this,uint param_1)

{
  *this = (FWN_WorldUtilsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UWN_WorldUtils_Subsystem @ 14a024b00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_WorldUtils_Subsystem(void)

{
  if (Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.OuterSingleton,
               &Z_Construct_UClass_UWN_WorldUtils_Subsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.OuterSingleton;
}

// EWN_SoundPlayMode_StaticEnum @ 14a024b40

UEnum * __cdecl EWN_SoundPlayMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_SoundPlayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_WorldUtils();
    Z_Registration_Info_UEnum_EWN_SoundPlayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_WorldUtils_EWN_SoundPlayMode,(UObject *)pUVar1,
                       L"EWN_SoundPlayMode");
  }
  return Z_Registration_Info_UEnum_EWN_SoundPlayMode.OuterSingleton;
}

// Z_Construct_UFunction_UWN_WorldUtils_Subsystem_OnVolumeEnter @ 14a024b80

UFunction * __cdecl Z_Construct_UFunction_UWN_WorldUtils_Subsystem_OnVolumeEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_WorldUtils_Subsystem_OnVolumeEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_WorldUtils_Subsystem_OnVolumeLeave @ 14a024bc0

UFunction * __cdecl Z_Construct_UFunction_UWN_WorldUtils_Subsystem_OnVolumeLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_WorldUtils_Subsystem_OnVolumeLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AWN_OcclusionVolume @ 14a024c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_OcclusionVolume(void)

{
  if (Z_Registration_Info_UClass_AWN_OcclusionVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_OcclusionVolume.OuterSingleton,
               &Z_Construct_UClass_AWN_OcclusionVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_OcclusionVolume.OuterSingleton;
}

// Z_Construct_UClass_UWN_OcclusionVolumeComponent_NoRegister @ 14a024c40

UClass * __cdecl Z_Construct_UClass_UWN_OcclusionVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_OcclusionVolumeComponent",
               &Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton,
               UWN_OcclusionVolumeComponent::StaticRegisterNativesUWN_OcclusionVolumeComponent,0x6a0
               ,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_OcclusionVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_OcclusionVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton;
}

// Z_Construct_UFunction_AWN_OcclusionVolume_AddAlwaysVisibleActorClass @ 14a024dc0

UFunction * __cdecl Z_Construct_UFunction_AWN_OcclusionVolume_AddAlwaysVisibleActorClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_OcclusionVolume_AddAlwaysVisibleActorClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a024e30

void __cdecl
Z_Construct_UFunction_AWN_OcclusionVolume_IsActorVisibleInVolume_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AWN_OcclusionVolume_IsActorVisibleInVolume @ 14a024e40

UFunction * __cdecl Z_Construct_UFunction_AWN_OcclusionVolume_IsActorVisibleInVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_OcclusionVolume_IsActorVisibleInVolume_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWN_OcclusionVolume_RemoveAlwaysVisibleActorClass @ 14a024ec0

UFunction * __cdecl Z_Construct_UFunction_AWN_OcclusionVolume_RemoveAlwaysVisibleActorClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_OcclusionVolume_RemoveAlwaysVisibleActorClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AWN_ZoneVolume @ 14a024fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_ZoneVolume(void)

{
  if (Z_Registration_Info_UClass_AWN_ZoneVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_ZoneVolume.OuterSingleton,
               &Z_Construct_UClass_AWN_ZoneVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_ZoneVolume.OuterSingleton;
}

// Z_Construct_UClass_UWN_ZoneVolumeComponent_NoRegister @ 14a024ff0

UClass * __cdecl Z_Construct_UClass_UWN_ZoneVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_ZoneVolumeComponent",
               &Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.InnerSingleton,
               UWN_ZoneVolumeComponent::StaticRegisterNativesUWN_ZoneVolumeComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_ZoneVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_ZoneVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_ZoneVolumeComponent @ 14a025170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_ZoneVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_ZoneVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_OcclusionVolumeComponent @ 14a0253d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_OcclusionVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_OcclusionVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.OuterSingleton;
}

// Z_Construct_UClass_AWN_BGMVolume_NoRegister @ 14a025410

UClass * __cdecl Z_Construct_UClass_AWN_BGMVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_BGMVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_BGMVolume",
               &Z_Registration_Info_UClass_AWN_BGMVolume.InnerSingleton,
               AWN_BGMVolume::StaticRegisterNativesAWN_BGMVolume,0x310,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_BGMVolume>,InternalVTableHelperCtorCaller<AWN_BGMVolume>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_BGMVolume.InnerSingleton;
}

// Z_Construct_UPackage__Script_WN_WorldUtils @ 14a025650

UPackage * __cdecl Z_Construct_UPackage__Script_WN_WorldUtils(void)

{
  if (Z_Registration_Info_UPackage__Script_WN_WorldUtils.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WN_WorldUtils.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_WN_WorldUtils.OuterSingleton;
}

// Z_Construct_UClass_AWN_BGMVolume @ 14a025690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_BGMVolume(void)

{
  if (Z_Registration_Info_UClass_AWN_BGMVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_BGMVolume.OuterSingleton,
               &Z_Construct_UClass_AWN_BGMVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_BGMVolume.OuterSingleton;
}

// Z_Construct_UClass_UWN_BGMVolumeComponent_NoRegister @ 14a0256d0

UClass * __cdecl Z_Construct_UClass_UWN_BGMVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_BGMVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_BGMVolumeComponent",
               &Z_Registration_Info_UClass_UWN_BGMVolumeComponent.InnerSingleton,
               UWN_BGMVolumeComponent::StaticRegisterNativesUWN_BGMVolumeComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_BGMVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_BGMVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_BGMVolumeComponent.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWN_BGMSoundInfo @ 14a025790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_BGMSoundInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_BGMSoundInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_BGMSoundInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_BGMSoundInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_BGMSoundInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_BGMSoundInfo.InnerSingleton;
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

// Z_Construct_UClass_UWN_BGMVolumeComponent @ 14a0259d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_BGMVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_BGMVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_BGMVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_BGMVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_BGMVolumeComponent.OuterSingleton;
}

// Z_Construct_UClass_AWN_PhasingVolume @ 14a025b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_PhasingVolume(void)

{
  if (Z_Registration_Info_UClass_AWN_PhasingVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_PhasingVolume.OuterSingleton,
               &Z_Construct_UClass_AWN_PhasingVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_PhasingVolume.OuterSingleton;
}

// NewProp_InFromSweep_SetBit @ 14a025bb0

void __cdecl
Z_Construct_UFunction_AWN_PhasingVolume_NotifyEnterSphereCollisionBeginOverlap_Statics::
NewProp_InFromSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UFunction_AWN_PhasingVolume_NotifyEnterSphereCollisionBeginOverlap @ 14a025c10

UFunction * __cdecl
Z_Construct_UFunction_AWN_PhasingVolume_NotifyEnterSphereCollisionBeginOverlap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_PhasingVolume_NotifyEnterSphereCollisionBeginOverlap_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWN_PhasingVolume_NotifyEnterSphereCollisionEndOverlap @ 14a025c50

UFunction * __cdecl
Z_Construct_UFunction_AWN_PhasingVolume_NotifyEnterSphereCollisionEndOverlap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_PhasingVolume_NotifyEnterSphereCollisionEndOverlap_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InFromSweep_SetBit @ 14a025c90

void __cdecl
Z_Construct_UFunction_AWN_PhasingVolume_NotifyOutSphereCollisionBeginOverlap_Statics::
NewProp_InFromSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UFunction_AWN_PhasingVolume_NotifyOutSphereCollisionBeginOverlap @ 14a025ca0

UFunction * __cdecl
Z_Construct_UFunction_AWN_PhasingVolume_NotifyOutSphereCollisionBeginOverlap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_PhasingVolume_NotifyOutSphereCollisionBeginOverlap_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWN_PhasingVolume_NotifyOutSphereCollisionEndOverlap @ 14a025ce0

UFunction * __cdecl Z_Construct_UFunction_AWN_PhasingVolume_NotifyOutSphereCollisionEndOverlap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_PhasingVolume_NotifyOutSphereCollisionEndOverlap_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AWN_StaticMesh_Inherited @ 14a026150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_StaticMesh_Inherited(void)

{
  if (Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.OuterSingleton,
               &Z_Construct_UClass_AWN_StaticMesh_Inherited_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.OuterSingleton;
}

// Z_Construct_UClass_AWN_StaticMesh_NoVoxel @ 14a026190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_StaticMesh_NoVoxel(void)

{
  if (Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.OuterSingleton,
               &Z_Construct_UClass_AWN_StaticMesh_NoVoxel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.OuterSingleton;
}

// Z_Construct_UClass_AWN_StaticMesh_NoWPMerge @ 14a0261d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_StaticMesh_NoWPMerge(void)

{
  if (Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.OuterSingleton,
               &Z_Construct_UClass_AWN_StaticMesh_NoWPMerge_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.OuterSingleton;
}

// Z_Construct_UClass_UWN_WorldEditInfo_NoRegister @ 14a0262b0

UClass * __cdecl Z_Construct_UClass_UWN_WorldEditInfo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_WorldEditInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_WorldEditInfo",
               &Z_Registration_Info_UClass_UWN_WorldEditInfo.InnerSingleton,
               UWN_WorldEditInfo::StaticRegisterNativesUWN_WorldEditInfo,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_WorldEditInfo>,
               InternalVTableHelperCtorCaller<UWN_WorldEditInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_WorldEditInfo.InnerSingleton;
}

// Z_Construct_UClass_UWN_WorldInfo_NoRegister @ 14a026360

UClass * __cdecl Z_Construct_UClass_UWN_WorldInfo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_WorldInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_WorldInfo",
               &Z_Registration_Info_UClass_UWN_WorldInfo.InnerSingleton,
               UWN_WorldInfo::StaticRegisterNativesUWN_WorldInfo,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_WorldInfo>,
               InternalVTableHelperCtorCaller<UWN_WorldInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_WorldInfo.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14a026450

void * __thiscall
FWN_PropertyInfo::_scalar_deleting_destructor_(FWN_PropertyInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0264d0

void * __thiscall
FWN_DistrictInfo::_scalar_deleting_destructor_(FWN_DistrictInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_DistrictProp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a026560

void * __thiscall FWN_ZoneInfo::_scalar_deleting_destructor_(FWN_ZoneInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0265e0

void * __thiscall FWN_IslandInfo::_scalar_deleting_destructor_(FWN_IslandInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a026660

void * __thiscall
FWN_PhasingVolumeInfo::_scalar_deleting_destructor_(FWN_PhasingVolumeInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// DefaultConstructItems<FWN_VoxelizeTriangleInfo,int> @ 14a026ca0

void __cdecl DefaultConstructItems<FWN_VoxelizeTriangleInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x30);
    do {
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      *(undefined1 *)(puVar1 + 0x12) = 0;
      puVar1[0x13] = 0;
      *(undefined4 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x18] = 0;
      *(undefined2 *)(puVar1 + 0x19) = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x20;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`WN_VoxelizeImpl'::__l2::_FWN_VoxelInfo,int> @ 14a026d40

void __cdecl
DefaultConstructItems<_WN_VoxelizeImpl_::__l2::_FWN_VoxelInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWN_AmbientSoundInfo,int> @ 14a026d90

void __cdecl DestructItems<FWN_AmbientSoundInfo,int>(FWN_AmbientSoundInfo *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->AmbientSound).SoftObjectPtr.field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEachComponent_Internal<ULocalFogVolumeComponent,1,1,`AActor::GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14a027b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<ULocalFogVolumeComponent,1,1,_AActor::GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  ULocalFogVolumeComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14a027c93;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a027c93:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14a027d2d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14a027d2d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14a027e30;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14a027e30:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<ULocalFogVolumeComponent,1,1,_AActor::GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(ULocalFogVolumeComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (ULocalFogVolumeComponent *)0x0) {
      `AActor::
      GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) &&
         (local_1a0._0_4_ = pUVar8->HeightFogFalloff, local_1a0._4_4_ = pUVar8->HeightFogOffset,
         local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<ULocalFogVolumeComponent,0,1,`AActor::GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14a0280a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<ULocalFogVolumeComponent,0,1,_AActor::GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ULocalFogVolumeComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14a028193;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a028193:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14a028240;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14a028240:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14a028350;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14a028350:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<ULocalFogVolumeComponent,0,1,_AActor::GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(ULocalFogVolumeComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (ULocalFogVolumeComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) &&
         (local_1a0._0_4_ = pUVar8->HeightFogFalloff, local_1a0._4_4_ = pUVar8->HeightFogOffset,
         local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USkyAtmosphereComponent,1,1,`AActor::GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14a0285e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkyAtmosphereComponent,1,1,_AActor::GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  USkyAtmosphereComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14a028703;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a028703:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14a02879d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14a02879d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14a0288a0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14a0288a0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USkyAtmosphereComponent,1,1,_AActor::GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USkyAtmosphereComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkyAtmosphereComponent *)0x0) {
      `AActor::
      GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) &&
         (local_1a0._0_4_ = pUVar8->GroundAlbedo, local_1a0._4_4_ = pUVar8->AtmosphereHeight,
         local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USkyAtmosphereComponent,0,1,`AActor::GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14a028b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkyAtmosphereComponent,0,1,_AActor::GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  USkyAtmosphereComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14a028c03;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a028c03:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14a028cb0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14a028cb0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14a028dc0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14a028dc0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USkyAtmosphereComponent,0,1,_AActor::GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USkyAtmosphereComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkyAtmosphereComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) &&
         (local_1a0._0_4_ = pUVar8->GroundAlbedo, local_1a0._4_4_ = pUVar8->AtmosphereHeight,
         local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UVolumetricCloudComponent,1,1,`AActor::GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14a029050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UVolumetricCloudComponent,1,1,_AActor::GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UVolumetricCloudComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14a029173;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a029173:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14a02920d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14a02920d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14a029310;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14a029310:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UVolumetricCloudComponent,1,1,_AActor::GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UVolumetricCloudComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UVolumetricCloudComponent *)0x0) {
      `AActor::
      GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) &&
         (local_1a0._0_4_ = pUVar8->TracingStartMaxDistance,
         local_1a0._4_4_ = pUVar8->TracingStartDistanceFromCamera, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UVolumetricCloudComponent,0,1,`AActor::GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14a029580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UVolumetricCloudComponent,0,1,_AActor::GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UVolumetricCloudComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14a029673;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a029673:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14a029720;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14a029720:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14a029830;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14a029830:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UVolumetricCloudComponent,0,1,_AActor::GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UVolumetricCloudComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UVolumetricCloudComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) &&
         (local_1a0._0_4_ = pUVar8->TracingStartMaxDistance,
         local_1a0._4_4_ = pUVar8->TracingStartDistanceFromCamera, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// InternalConstructor<AWN_BGMVolume> @ 14a029be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWN_BGMVolume>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  USceneComponent *pUVar2;
  code *pcVar3;
  longlong *plVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_BGMVolume__6B_;
    this[1]._padding_ = (longlong)&___7FWN_BGMSoundInfo__6B_;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    pFVar5 = FName::FName(&local_res8,L"VolumeComponent");
    FVar1 = *pFVar5;
    pUVar6 = UWN_BGMVolumeComponent::StaticClass();
    pUVar7 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar6,pUVar6,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar7 == (UObject *)0x0)) {
      this[1].PrimaryActorTick._padding_ = (longlong)pUVar7;
      if (pUVar7 == (UObject *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar7);
      this[1].PrimaryActorTick._padding_ = (longlong)pUVar7;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    pUVar2 = (USceneComponent *)this[1].PrimaryActorTick._padding_;
    (this->RootComponent).field0_0x0.DebugPtr = pUVar2;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x788);
    pFVar5 = FName::FName(&local_res8,"NoCollision");
    (*pcVar3)(pUVar2,*pFVar5,1);
    plVar4 = (longlong *)this[1].PrimaryActorTick._padding_;
    (**(code **)(*plVar4 + 0x5f8))(plVar4,0);
  }
  return;
}

// InternalConstructor<AWN_BVC_VoxelVisualizer> @ 14a029d40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<AWN_BVC_VoxelVisualizer>(FObjectInitializer *param_1)

{
  if ((AWN_BVC_VoxelVisualizer *)param_1->Obj != (AWN_BVC_VoxelVisualizer *)0x0) {
    AWN_BVC_VoxelVisualizer::AWN_BVC_VoxelVisualizer
              ((AWN_BVC_VoxelVisualizer *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AWN_OcclusionVolume> @ 14a029d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWN_OcclusionVolume>(FObjectInitializer *param_1)

{
  AActor **this;
  AActor *this_00;
  code *pcVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FName FVar4;
  FName FStackX_8;
  TVector<double>_u_0 TStack_28;
  
  this_00 = (AActor *)param_1->Obj;
  if (this_00 != (AActor *)0x0) {
    AActor::AActor(this_00,param_1);
    this_00->_padding_ = (longlong)&___7AWN_OcclusionVolume__6B_;
    this = &this_00[1].PrimaryActorTick.Target;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this_00[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this_00[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this_00[1].PrimaryActorTick._padding_ + 4) = 0;
    this_00[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this_00[1].PrimaryActorTick._padding_ = 0;
    *this = (AActor *)0x0;
    FStackX_8.ComparisonIndex.Value = 0;
    FStackX_8.Number = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&FStackX_8);
    *(undefined8 *)&this_00[1].field_0x58 = 0;
    this_00[1].RemoteRole = '\0';
    this_00[1].ActorCategory = '\0';
    *(undefined2 *)&this_00[1].field_0x62 = 0;
    this_00[1].InitialLifeSpan = 0.0;
    *(undefined8 *)&this_00[1].AttachmentReplication.LocationOffset = 0;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0xc = 0x80;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0x10 = 0xffffffff;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0x14 = 0;
    *(undefined8 *)&this_00[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
    *(undefined4 *)&this_00[1].AttachmentReplication.RelativeScale3D.field_0x10 = 0;
    *(undefined1 *)&this_00[1].AttachmentReplication.RotationOffset.Pitch = 0;
    this_00[1].AttachmentReplication.RotationOffset.Yaw = 0.0;
    this_00[1].AttachmentReplication.RotationOffset.Roll = 0.0;
    this_00[1].AttachmentReplication.AttachSocket.ComparisonIndex = 0;
    this_00[1].AttachmentReplication.AttachSocket.Number = 0;
    pFVar2 = FName::FName(&FStackX_8,L"VolumeComponent");
    FVar4 = *pFVar2;
    pUVar3 = UWN_OcclusionVolumeComponent::StaticClass();
    FVar4 = (FName)UObject::CreateDefaultSubobject
                             ((UObject *)this_00,FVar4,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (FVar4 == (FName)0x0)) {
      this_00[1].AttachmentReplication.AttachSocket = FVar4;
      if (FVar4 == (FName)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)FVar4);
      this_00[1].AttachmentReplication.AttachSocket = FVar4;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    FVar4 = this_00[1].AttachmentReplication.AttachSocket;
    (this_00->RootComponent).field0_0x0.DebugPtr = (USceneComponent *)FVar4;
    pcVar1 = *(code **)(*(longlong *)FVar4 + 0x788);
    pFVar2 = FName::FName(&FStackX_8,"NoCollision");
    (*pcVar1)(FVar4,*pFVar2,1);
    FVar4 = this_00[1].AttachmentReplication.AttachSocket;
    (**(code **)(*(longlong *)FVar4 + 0x5f8))(FVar4,0);
    TStack_28._s_0.Z = __real_40c3880000000000;
    TStack_28._s_0.X = ___xmm_40c388000000000040c3880000000000;
    TStack_28._s_0.Y = _UNK_15201e8f8;
    *(undefined1 *)((longlong)this_00[1].AttachmentReplication.AttachSocket + 0x618) = 0;
    *(undefined1 *)((longlong)this_00[1].AttachmentReplication.AttachSocket + 0x549) = 0;
    UWN_VolumeComponent::SetVolumeExtent
              ((UWN_VolumeComponent *)this_00[1].AttachmentReplication.AttachSocket,
               (TVector<double> *)&TStack_28._s_0);
  }
  return;
}

// InternalConstructor<AWN_PhasingVolume> @ 14a029d70

void __cdecl InternalConstructor<AWN_PhasingVolume>(FObjectInitializer *param_1)

{
  if ((AWN_PhasingVolume *)param_1->Obj != (AWN_PhasingVolume *)0x0) {
    AWN_PhasingVolume::AWN_PhasingVolume((AWN_PhasingVolume *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AWN_StaticMesh_Inherited> @ 14a029d90

void __cdecl InternalConstructor<AWN_StaticMesh_Inherited>(FObjectInitializer *param_1)

{
  AStaticMeshActor *this;
  
  this = (AStaticMeshActor *)param_1->Obj;
  if (this != (AStaticMeshActor *)0x0) {
    AStaticMeshActor::AStaticMeshActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_StaticMesh_Inherited__6B_;
  }
  return;
}

// InternalConstructor<AWN_StaticMesh_NoVoxel> @ 14a029dc0

void __cdecl InternalConstructor<AWN_StaticMesh_NoVoxel>(FObjectInitializer *param_1)

{
  AStaticMeshActor *this;
  
  this = (AStaticMeshActor *)param_1->Obj;
  if (this != (AStaticMeshActor *)0x0) {
    AStaticMeshActor::AStaticMeshActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_StaticMesh_NoVoxel__6B_;
  }
  return;
}

// InternalConstructor<AWN_StaticMesh_NoWPMerge> @ 14a029df0

void __cdecl InternalConstructor<AWN_StaticMesh_NoWPMerge>(FObjectInitializer *param_1)

{
  AStaticMeshActor *this;
  
  this = (AStaticMeshActor *)param_1->Obj;
  if (this != (AStaticMeshActor *)0x0) {
    AStaticMeshActor::AStaticMeshActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_StaticMesh_NoWPMerge__6B_;
  }
  return;
}

// InternalConstructor<AWN_ZoneVolume> @ 14a029e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWN_ZoneVolume>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  USceneComponent *pUVar2;
  code *pcVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7AWN_ZoneVolume__6B_;
    this[1]._padding_ = 0;
    pFVar4 = FName::FName(&local_res8,L"VolumeComponent");
    FVar1 = *pFVar4;
    pUVar5 = UWN_ZoneVolumeComponent::StaticClass();
    pUVar6 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar5,pUVar5,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UObject *)0x0)) {
      this[1]._padding_ = (longlong)pUVar6;
      if (pUVar6 == (UObject *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar6);
      this[1]._padding_ = (longlong)pUVar6;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    pUVar2 = (USceneComponent *)this[1]._padding_;
    (this->RootComponent).field0_0x0.DebugPtr = pUVar2;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x788);
    pFVar4 = FName::FName(&local_res8,"NoCollision");
    (*pcVar3)(pUVar2,*pFVar4,1);
    (**(code **)(*(longlong *)this[1]._padding_ + 0x5f8))((longlong *)this[1]._padding_,0);
  }
  return;
}

// InternalConstructor<UWN_BGMVolumeComponent> @ 14a029f40

void __cdecl InternalConstructor<UWN_BGMVolumeComponent>(FObjectInitializer *param_1)

{
  UWN_VolumeComponent *this;
  
  this = (UWN_VolumeComponent *)param_1->Obj;
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_BGMVolumeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWN_BGMVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_BGMVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_BGMVolumeComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_BGMVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_BGMVolumeComponent::_vftable__for__IPhysicsComponent__;
  }
  return;
}

// InternalConstructor<UWN_DistrictVolumeComponent> @ 14a029fb0

void __cdecl InternalConstructor<UWN_DistrictVolumeComponent>(FObjectInitializer *param_1)

{
  UWN_VolumeComponent *this;
  
  this = (UWN_VolumeComponent *)param_1->Obj;
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_DistrictVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_DistrictVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_DistrictVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_DistrictVolumeComponent::_vftable__for__INavRelevantInterface__
    ;
    this->_padding_ =
         (longlong)&UWN_DistrictVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_DistrictVolumeComponent::_vftable__for__IPhysicsComponent__;
  }
  return;
}

// InternalConstructor<UWN_Island_ZoneIDMap> @ 14a02a020

void __cdecl InternalConstructor<UWN_Island_ZoneIDMap>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0xffffffffffffffff;
    *(undefined ***)this = &___7UWN_Island_ZoneIDMap__6B_;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0xffffffffffffffff;
  }
  return;
}

// InternalConstructor<UWN_OcclusionVolumeComponent> @ 14a02a080

void __cdecl InternalConstructor<UWN_OcclusionVolumeComponent>(FObjectInitializer *param_1)

{
  UWN_VolumeComponent *this;
  
  this = (UWN_VolumeComponent *)param_1->Obj;
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__IPhysicsComponent__;
  }
  return;
}

// InternalConstructor<UWN_WorldEditInfo> @ 14a02a0f0

void __cdecl InternalConstructor<UWN_WorldEditInfo>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UWN_WorldEditInfo__6B_;
  }
  return;
}

// InternalConstructor<UWN_WorldInfo> @ 14a02a130

void __cdecl InternalConstructor<UWN_WorldInfo>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWN_WorldInfo__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x18,0);
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x4 = 0x80;
    *(undefined4 *)&this[3].field_0xc = 0;
    *(undefined4 *)&this[3].field_0x8 = 0xffffffff;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x4 = 0x80;
    *(undefined4 *)&this[5].field_0xc = 0;
    *(undefined4 *)&this[5].field_0x8 = 0xffffffff;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined4 *)&this[5].field_0x20 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    this[7].field_0x10 = 0;
    *(undefined4 *)&this[7].field_0x11 = 0;
    *(undefined2 *)&this[7].field_0x15 = 0;
    this[7].field_0x17 = 0;
  }
  return;
}

// InternalConstructor<UWN_WorldUtils_Subsystem> @ 14a02a250

void __cdecl InternalConstructor<UWN_WorldUtils_Subsystem>(FObjectInitializer *param_1)

{
  UTickableWorldSubsystem *this;
  
  this = (UTickableWorldSubsystem *)param_1->Obj;
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this);
    this->_padding_ = (longlong)&UWN_WorldUtils_Subsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UWN_WorldUtils_Subsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].bInitialized = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 2;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2].bInitialized = 0xffffffff;
    *(undefined4 *)&this[2].field_0x44 = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3].bInitialized = 0;
    *(undefined4 *)&this[3].field_0x44 = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined8 *)&this[4].bInitialized = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined8 *)&this[5].bInitialized = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 2;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 2;
    this[6]._padding_ = 0;
    *(undefined8 *)&this[6].bInitialized = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7].bInitialized = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8].bInitialized = false;
  }
  return;
}

// InternalConstructor<UWN_ZoneVolumeComponent> @ 14a02a450

void __cdecl InternalConstructor<UWN_ZoneVolumeComponent>(FObjectInitializer *param_1)

{
  UWN_VolumeComponent *this;
  
  this = (UWN_VolumeComponent *)param_1->Obj;
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_ZoneVolumeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWN_ZoneVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_ZoneVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_ZoneVolumeComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_ZoneVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_ZoneVolumeComponent::_vftable__for__IPhysicsComponent__;
  }
  return;
}

// InternalVTableHelperCtorCaller<AWN_BGMVolume> @ 14a02a4c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_BGMVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_BGMVolume::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_BGMVolume__6B_;
    this[1]._padding_ = (longlong)&___7FWN_BGMSoundInfo__6B_;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_BVC_VoxelVisualizer> @ 14a02a5c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_BVC_VoxelVisualizer>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  AActor *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = AWN_BVC_VoxelVisualizer::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&___7AWN_BVC_VoxelVisualizer__6B_;
    this[1]._padding_ = 0x4069000000000000;
    this[1].PrimaryActorTick._padding_ = 0x40b9000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1].PrimaryActorTick.Target = (AActor *)(double)GlobalVectorConstants::Float0001.m128_f32[0]
    ;
    *(double *)&this[1].field_0x58 = (double)fVar1;
    *(double *)&this[1].RemoteRole = (double)fVar2;
    *(double *)&this[1].CustomTimeDilation = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].AttachmentReplication.AttachParent.field0_0x0 =
         (TObjectPtr<AActor>_u_0)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[1].AttachmentReplication.LocationOffset = (double)fVar1;
    *(double *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = (double)fVar2;
    *(double *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[1].AttachmentReplication.RelativeScale3D =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[1].AttachmentReplication.RelativeScale3D.field_0x8 = (double)fVar1;
    *(double *)&this[1].AttachmentReplication.RelativeScale3D.field_0x10 = (double)fVar2;
    this[1].AttachmentReplication.RotationOffset.Pitch = (double)fVar3;
    this[1].AttachmentReplication.RotationOffset.Yaw = 0.0;
    this[1].AttachmentReplication.RotationOffset.Roll = 0.0;
    this[1].AttachmentReplication.AttachSocket.ComparisonIndex = 0;
    this[1].AttachmentReplication.AttachSocket.Number = 0;
    this[1].AttachmentReplication.AttachComponent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_OcclusionVolume> @ 14a02a740

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_OcclusionVolume>(FVTableHelper *param_1)

{
  AActor **this;
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this_00;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_OcclusionVolume::GetPrivateStaticClass();
  this_00 = (AActor *)
            StaticAllocateObject
                      (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                       Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (this_00 != (AActor *)0x0) {
    AActor::AActor(this_00,param_1);
    local_res10 = 0;
    this_00->_padding_ = (longlong)&___7AWN_OcclusionVolume__6B_;
    this = &this_00[1].PrimaryActorTick.Target;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this_00[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this_00[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this_00[1].PrimaryActorTick._padding_ + 4) = 0;
    this_00[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this_00[1].PrimaryActorTick._padding_ = 0;
    *this = (AActor *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res10);
    *(undefined8 *)&this_00[1].field_0x58 = 0;
    this_00[1].RemoteRole = '\0';
    this_00[1].ActorCategory = '\0';
    *(undefined2 *)&this_00[1].field_0x62 = 0;
    this_00[1].InitialLifeSpan = 0.0;
    *(undefined8 *)&this_00[1].AttachmentReplication.LocationOffset = 0;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0xc = 0x80;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0x10 = 0xffffffff;
    *(undefined4 *)&this_00[1].AttachmentReplication.LocationOffset.field_0x14 = 0;
    *(undefined8 *)&this_00[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
    *(undefined4 *)&this_00[1].AttachmentReplication.RelativeScale3D.field_0x10 = 0;
    *(undefined1 *)&this_00[1].AttachmentReplication.RotationOffset.Pitch = 0;
    this_00[1].AttachmentReplication.RotationOffset.Yaw = 0.0;
    this_00[1].AttachmentReplication.RotationOffset.Roll = 0.0;
    this_00[1].AttachmentReplication.AttachSocket.ComparisonIndex = 0;
    this_00[1].AttachmentReplication.AttachSocket.Number = 0;
    return (UObject *)this_00;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_PhasingVolume> @ 14a02a8b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_PhasingVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_PhasingVolume::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0x3e9;
    this->_padding_ = (longlong)&___7AWN_PhasingVolume__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)&DAT_00000002;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0 = (TObjectPtr<AActor>_u_0)0x2;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 2;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x10 = 0;
    this[1].AttachmentReplication.RotationOffset.Pitch = 0.0;
    this[1].AttachmentReplication.RotationOffset.Yaw = 9.88131291682493e-324;
    this[1].AttachmentReplication.AttachComponent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this[1].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.X = 0.0;
    *(undefined8 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x42c80000;
    this[1].AttachmentReplication.AttachSocket.ComparisonIndex.Value = 0xbf000000;
    this[1].AttachmentReplication.AttachSocket.Number = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_StaticMesh_Inherited> @ 14a02aa40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_StaticMesh_Inherited>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AStaticMeshActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_StaticMesh_Inherited::GetPrivateStaticClass();
  this = (AStaticMeshActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AStaticMeshActor *)0x0) {
    AStaticMeshActor::AStaticMeshActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_StaticMesh_Inherited__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_StaticMesh_NoVoxel> @ 14a02aaf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_StaticMesh_NoVoxel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AStaticMeshActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_StaticMesh_NoVoxel::GetPrivateStaticClass();
  this = (AStaticMeshActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AStaticMeshActor *)0x0) {
    AStaticMeshActor::AStaticMeshActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_StaticMesh_NoVoxel__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_StaticMesh_NoWPMerge> @ 14a02aba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_StaticMesh_NoWPMerge>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AStaticMeshActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_StaticMesh_NoWPMerge::GetPrivateStaticClass();
  this = (AStaticMeshActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AStaticMeshActor *)0x0) {
    AStaticMeshActor::AStaticMeshActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_StaticMesh_NoWPMerge__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_ZoneVolume> @ 14a02ac50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_ZoneVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_ZoneVolume::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7AWN_ZoneVolume__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_BGMVolumeComponent> @ 14a02ad10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_BGMVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWN_VolumeComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_BGMVolumeComponent::GetPrivateStaticClass();
  this = (UWN_VolumeComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_BGMVolumeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWN_BGMVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_BGMVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_BGMVolumeComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_BGMVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_BGMVolumeComponent::_vftable__for__IPhysicsComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_DistrictVolumeComponent> @ 14a02ae00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_DistrictVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWN_VolumeComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_DistrictVolumeComponent::GetPrivateStaticClass();
  this = (UWN_VolumeComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_DistrictVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_DistrictVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_DistrictVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_DistrictVolumeComponent::_vftable__for__INavRelevantInterface__
    ;
    this->_padding_ =
         (longlong)&UWN_DistrictVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_DistrictVolumeComponent::_vftable__for__IPhysicsComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_Island_ZoneIDMap> @ 14a02aef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_Island_ZoneIDMap>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_Island_ZoneIDMap::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0xffffffffffffffff;
    *(undefined ***)pUVar1 = &___7UWN_Island_ZoneIDMap__6B_;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0xffffffffffffffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_OcclusionVolumeComponent> @ 14a02afc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_OcclusionVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWN_VolumeComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_OcclusionVolumeComponent::GetPrivateStaticClass();
  this = (UWN_VolumeComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_OcclusionVolumeComponent::_vftable__for__IPhysicsComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_WorldEditInfo> @ 14a02b0b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_WorldEditInfo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_WorldEditInfo::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UWN_WorldEditInfo__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_WorldInfo> @ 14a02b160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_WorldInfo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_WorldInfo::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWN_WorldInfo__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[1].field_0x18,0);
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0xc = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    pUVar1[7].field_0x10 = 0;
    *(undefined4 *)&pUVar1[7].field_0x11 = 0;
    *(undefined2 *)&pUVar1[7].field_0x15 = 0;
    pUVar1[7].field_0x17 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_WorldUtils_Subsystem> @ 14a02b2f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_WorldUtils_Subsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_WorldUtils_Subsystem::GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&UWN_WorldUtils_Subsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UWN_WorldUtils_Subsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    *(undefined8 *)&this[1].bInitialized = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2].bInitialized = 0xffffffff;
    *(undefined4 *)&this[2].field_0x44 = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3].bInitialized = 0;
    *(undefined4 *)&this[3].field_0x44 = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined8 *)&this[4].bInitialized = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined8 *)&this[5].bInitialized = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 2;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 2;
    this[6]._padding_ = 0;
    *(undefined8 *)&this[6].bInitialized = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7].bInitialized = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8].bInitialized = false;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_ZoneVolumeComponent> @ 14a02b300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_ZoneVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWN_VolumeComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_ZoneVolumeComponent::GetPrivateStaticClass();
  this = (UWN_VolumeComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_ZoneVolumeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWN_ZoneVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_ZoneVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_ZoneVolumeComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_ZoneVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_ZoneVolumeComponent::_vftable__for__IPhysicsComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<AWN_BGMVolume,AWN_BGMVolume_*,0> @ 14a02b3f0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AWN_BGMVolume,AWN_BGMVolume_*,0>
          (TObjectPtr<AWN_BGMVolume> *param_1,AWN_BGMVolume **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AWN_BGMVolume *)0x0) {
    return *param_2 == (AWN_BGMVolume *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<AWN_OcclusionVolume,AWN_OcclusionVolume_*,0> @ 14a02b410

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AWN_OcclusionVolume,AWN_OcclusionVolume_*,0>
          (TObjectPtr<AWN_OcclusionVolume> *param_1,AWN_OcclusionVolume **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AWN_OcclusionVolume *)0x0) {
    return *param_2 == (AWN_OcclusionVolume *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// SetComponentsVisibility<ULocalFogVolumeComponent> @ 14a02bbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
SetComponentsVisibility<ULocalFogVolumeComponent>(AActor *param_1,bool param_2,bool param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  UClass *pUVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  if (param_1 == (AActor *)0x0) {
    return;
  }
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar6 = (UClass *)0x0;
  pUVar8 = (UClass *)0x0;
  local_2c = 0x18;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  pUVar4 = Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UClass *)0x0) goto LAB_14a02bc94;
  }
  else {
    pUVar8 = pUVar6;
    if (pUVar4 == (UClass *)0x0) goto LAB_14a02bc94;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar8 = pUVar6;
  if (pUVar5 != (UClass *)0x0) {
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar8 = pUVar4;
    }
  }
LAB_14a02bc94:
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100 = pUVar4;
  if (pUVar8 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<ULocalFogVolumeComponent,1,1,_AActor::GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<ULocalFogVolumeComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<ULocalFogVolumeComponent,0,1,_AActor::GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<ULocalFogVolumeComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  iVar2 = local_30;
  puVar7 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar7 = local_38;
  }
  puVar1 = puVar7 + local_30;
  while( true ) {
    if (local_30 != iVar2) {
      `TCheckedPointerIterator<ULocalFogVolumeComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_108);
    }
    if (puVar7 == puVar1) break;
    if ((USceneComponent *)*puVar7 != (USceneComponent *)0x0) {
      USceneComponent::SetVisibility((USceneComponent *)*puVar7,param_2,DirtyOnly);
    }
    if (!param_3) break;
    puVar7 = puVar7 + 1;
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// SetComponentsVisibility<USkyAtmosphereComponent> @ 14a02bda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
SetComponentsVisibility<USkyAtmosphereComponent>(AActor *param_1,bool param_2,bool param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  UClass *pUVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  if (param_1 == (AActor *)0x0) {
    return;
  }
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar6 = (UClass *)0x0;
  pUVar8 = (UClass *)0x0;
  local_2c = 0x18;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  pUVar4 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UClass *)0x0) goto LAB_14a02be44;
  }
  else {
    pUVar8 = pUVar6;
    if (pUVar4 == (UClass *)0x0) goto LAB_14a02be44;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar8 = pUVar6;
  if (pUVar5 != (UClass *)0x0) {
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar8 = pUVar4;
    }
  }
LAB_14a02be44:
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100 = pUVar4;
  if (pUVar8 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<USkyAtmosphereComponent,1,1,_AActor::GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<USkyAtmosphereComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<USkyAtmosphereComponent,0,1,_AActor::GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<USkyAtmosphereComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  iVar2 = local_30;
  puVar7 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar7 = local_38;
  }
  puVar1 = puVar7 + local_30;
  while( true ) {
    if (local_30 != iVar2) {
      `TCheckedPointerIterator<USkyAtmosphereComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_108);
    }
    if (puVar7 == puVar1) break;
    if ((USceneComponent *)*puVar7 != (USceneComponent *)0x0) {
      USceneComponent::SetVisibility((USceneComponent *)*puVar7,param_2,DirtyOnly);
    }
    if (!param_3) break;
    puVar7 = puVar7 + 1;
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// SetComponentsVisibility<UVolumetricCloudComponent> @ 14a02bf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
SetComponentsVisibility<UVolumetricCloudComponent>(AActor *param_1,bool param_2,bool param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  UClass *pUVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  if (param_1 == (AActor *)0x0) {
    return;
  }
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar6 = (UClass *)0x0;
  pUVar8 = (UClass *)0x0;
  local_2c = 0x18;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  pUVar4 = Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UClass *)0x0) goto LAB_14a02bff4;
  }
  else {
    pUVar8 = pUVar6;
    if (pUVar4 == (UClass *)0x0) goto LAB_14a02bff4;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar8 = pUVar6;
  if (pUVar5 != (UClass *)0x0) {
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar8 = pUVar4;
    }
  }
LAB_14a02bff4:
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100 = pUVar4;
  if (pUVar8 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UVolumetricCloudComponent,1,1,_AActor::GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UVolumetricCloudComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UVolumetricCloudComponent,0,1,_AActor::GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UVolumetricCloudComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  iVar2 = local_30;
  puVar7 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar7 = local_38;
  }
  puVar1 = puVar7 + local_30;
  while( true ) {
    if (local_30 != iVar2) {
      `TCheckedPointerIterator<UVolumetricCloudComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_108);
    }
    if (puVar7 == puVar1) break;
    if ((USceneComponent *)*puVar7 != (USceneComponent *)0x0) {
      USceneComponent::SetVisibility((USceneComponent *)*puVar7,param_2,DirtyOnly);
    }
    if (!param_3) break;
    puVar7 = puVar7 + 1;
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// StaticEnum<enum_EWN_SoundPlayMode> @ 14a02c100

UEnum * __cdecl StaticEnum<enum_EWN_SoundPlayMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_SoundPlayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_WorldUtils();
    Z_Registration_Info_UEnum_EWN_SoundPlayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_WorldUtils_EWN_SoundPlayMode,(UObject *)pUVar1,
                       L"EWN_SoundPlayMode");
  }
  return Z_Registration_Info_UEnum_EWN_SoundPlayMode.OuterSingleton;
}

// StaticEnum<enum_EWN_WorldEditDataType> @ 14a02c140

UEnum * __cdecl StaticEnum<enum_EWN_WorldEditDataType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_WorldEditDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_WorldUtils();
    Z_Registration_Info_UEnum_EWN_WorldEditDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditDataType,(UObject *)pUVar1,
                       L"EWN_WorldEditDataType");
  }
  return Z_Registration_Info_UEnum_EWN_WorldEditDataType.OuterSingleton;
}

// StaticEnum<enum_EWN_WorldEditInfo_Type> @ 14a02c180

UEnum * __cdecl StaticEnum<enum_EWN_WorldEditInfo_Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_WorldEditInfo_Type.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_WorldUtils();
    Z_Registration_Info_UEnum_EWN_WorldEditInfo_Type.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditInfo_Type,(UObject *)pUVar1,
                       L"EWN_WorldEditInfo_Type");
  }
  return Z_Registration_Info_UEnum_EWN_WorldEditInfo_Type.OuterSingleton;
}

// ~TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>,0,1> @ 14a02e430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_AWN_PhasingVolume::PlayCurveByTimer_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  return;
}

// operator() @ 14a02fa60

bool __thiscall
`WN_TriangleAABBOverlap'::__l2::<lambda_1>::operator()(void *this,TVector<double> *param_1)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar11;
  double dVar9;
  double dVar10;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  double dVar14;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  pdVar2 = *(double **)((longlong)this + 0x18);
  uVar12 = (uint)((ulonglong)dVar1 >> 0x20);
  pdVar3 = *(double **)((longlong)this + 0x10);
  pdVar4 = *(double **)((longlong)this + 8);
  pdVar5 = *(double **)this;
  uVar16 = (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar9 = (param_1->field0_0x0)._s_0.Z;
  uVar18 = (uint)((ulonglong)dVar9 >> 0x20);
  uVar13 = SUB84(dVar9,0) ^ uVar16;
  uVar15 = uVar18 ^ uVar17;
  if (__real_3c32725dd1d243ac <=
      dVar1 * dVar1 + (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13)) {
    dVar7 = (double)CONCAT44(uVar15,uVar13) * pdVar5[1] + dVar1 * pdVar5[2];
    dVar8 = dVar1 * pdVar4[2] + (double)CONCAT44(uVar15,uVar13) * pdVar4[1];
    dVar10 = dVar1 * pdVar3[2] + (double)CONCAT44(uVar15,uVar13) * pdVar3[1];
    dVar14 = dVar8;
    if (dVar7 <= dVar8) {
      dVar14 = dVar7;
    }
    dVar6 = (double)CONCAT44(uVar12 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
            pdVar2[2] +
            (double)CONCAT44(uVar15 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar13 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * pdVar2[1];
    if (dVar10 <= dVar14) {
      dVar14 = dVar10;
    }
    if (dVar6 + __real_3e112e0be826d695 < dVar14) {
      return false;
    }
    if (dVar8 <= dVar7) {
      dVar8 = dVar7;
    }
    if (dVar8 <= dVar10) {
      dVar8 = dVar10;
    }
    if (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar17,SUB84(dVar6,0) ^ uVar16)
                - __real_3e112e0be826d695) {
      return false;
    }
  }
  dVar7 = (param_1->field0_0x0)._s_0.X;
  uVar13 = (uint)((ulonglong)dVar7 >> 0x20);
  uVar15 = SUB84(dVar7,0) ^ uVar16;
  uVar11 = uVar13 ^ uVar17;
  if (__real_3c32725dd1d243ac <=
      dVar9 * dVar9 + (double)CONCAT44(uVar11,uVar15) * (double)CONCAT44(uVar11,uVar15)) {
    dVar10 = (double)CONCAT44(uVar11,uVar15) * pdVar5[2] + dVar9 * *pdVar5;
    dVar6 = (double)CONCAT44(uVar11,uVar15) * pdVar4[2] + dVar9 * *pdVar4;
    dVar14 = dVar9 * *pdVar3 + (double)CONCAT44(uVar11,uVar15) * pdVar3[2];
    dVar8 = dVar6;
    if (dVar10 <= dVar6) {
      dVar8 = dVar10;
    }
    dVar9 = (double)CONCAT44(uVar11 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * pdVar2[2] +
            (double)CONCAT44(uVar18 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
            *pdVar2;
    if (dVar14 <= dVar8) {
      dVar8 = dVar14;
    }
    if (dVar9 + __real_3e112e0be826d695 < dVar8) {
      return false;
    }
    if (dVar6 <= dVar10) {
      dVar6 = dVar10;
    }
    if (dVar6 <= dVar14) {
      dVar6 = dVar14;
    }
    if (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar17,SUB84(dVar9,0) ^ uVar16)
                - __real_3e112e0be826d695) {
      return false;
    }
  }
  uVar15 = SUB84(dVar1,0) ^ uVar16;
  uVar12 = uVar12 ^ uVar17;
  if (dVar7 * dVar7 + (double)CONCAT44(uVar12,uVar15) * (double)CONCAT44(uVar12,uVar15) <
      __real_3c32725dd1d243ac) {
    return true;
  }
  dVar14 = (double)CONCAT44(uVar12,uVar15) * *pdVar5 + dVar7 * pdVar5[1];
  dVar10 = (double)CONCAT44(uVar12,uVar15) * *pdVar4 + dVar7 * pdVar4[1];
  dVar1 = dVar7 * pdVar3[1] + (double)CONCAT44(uVar12,uVar15) * *pdVar3;
  dVar9 = dVar10;
  if (dVar14 <= dVar10) {
    dVar9 = dVar14;
  }
  dVar7 = (double)CONCAT44(uVar13 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
          pdVar2[1] +
          (double)CONCAT44(uVar12 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * *pdVar2;
  if (dVar1 <= dVar9) {
    dVar9 = dVar1;
  }
  if (dVar9 <= dVar7 + __real_3e112e0be826d695) {
    if (dVar10 <= dVar14) {
      dVar10 = dVar14;
    }
    if (dVar10 <= dVar1) {
      dVar10 = dVar1;
    }
    if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar17,SUB84(dVar7,0) ^ uVar16) -
        __real_3e112e0be826d695 <= dVar10) {
      return true;
    }
  }
  return false;
}

// operator() @ 14a02fd20

void __thiscall `WN_VoxelizeImpl'::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  TVector<double> *this_00;
  longlong lVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined7 uStack_bf;
  
  plVar9 = *(longlong **)((longlong)this + 0x10);
  uVar28 = 0;
  if ((int)param_1 < (int)plVar9[1]) {
    uVar28 = ~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  plVar10 = *(longlong **)((longlong)this + 8);
  lVar11 = *plVar9;
  uVar28 = param_1 * 3;
  lVar27 = (longlong)(int)param_1 * 0x100;
  uVar25 = 0;
  if ((int)uVar28 < (int)plVar10[1]) {
    uVar25 = ~uVar28 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar25 = uVar28 + 1;
  plVar9 = *(longlong **)((longlong)this + 8);
  uVar8 = *(uint *)(*plVar10 + (longlong)(int)uVar28 * 4);
  uVar26 = 0;
  if ((int)uVar25 < (int)plVar9[1]) {
    uVar26 = ~uVar25 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar28 = uVar28 + 2;
  plVar10 = *(longlong **)((longlong)this + 8);
  uVar25 = *(uint *)(*plVar9 + (longlong)(int)uVar25 * 4);
  uVar26 = 0;
  if ((int)uVar28 < (int)plVar10[1]) {
    uVar26 = ~uVar28 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  plVar9 = *(longlong **)this;
  uVar28 = *(uint *)(*plVar10 + (longlong)(int)uVar28 * 4);
  uVar26 = 0;
  if ((int)uVar8 < (int)plVar9[1]) {
    uVar26 = ~uVar8 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar12 = *plVar9;
  plVar9 = *(longlong **)this;
  pdVar1 = (double *)(lVar12 + (longlong)(int)uVar8 * 0x18);
  dVar16 = *pdVar1;
  dVar50 = pdVar1[1];
  dVar6 = *(double *)(lVar12 + 0x10 + (longlong)(int)uVar8 * 0x18);
  uVar26 = 0;
  if ((int)uVar25 < (int)plVar9[1]) {
    uVar26 = ~uVar25 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar12 = *plVar9;
  plVar9 = *(longlong **)this;
  pdVar1 = (double *)(lVar12 + (longlong)(int)uVar25 * 0x18);
  dVar41 = *pdVar1;
  dVar18 = pdVar1[1];
  dVar40 = *(double *)(lVar12 + 0x10 + (longlong)(int)uVar25 * 0x18);
  uVar26 = 0;
  if ((int)uVar28 < (int)plVar9[1]) {
    uVar26 = ~uVar28 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar12 = *plVar9;
  dVar7 = *(double *)(lVar12 + 0x10 + (longlong)(int)uVar28 * 0x18);
  pdVar1 = (double *)(lVar12 + (longlong)(int)uVar28 * 0x18);
  dVar17 = *pdVar1;
  dVar19 = pdVar1[1];
  if (((uVar8 == uVar25) && (uVar25 == uVar28)) && (uVar28 == uVar8)) {
    *(undefined1 *)(lVar27 + 0xf8 + lVar11) = 1;
  }
  else {
    auVar34 = *(undefined1 (*) [16])((longlong)this + 0x40);
    dVar23 = *(double *)((longlong)this + 0x48);
    dVar16 = *(double *)((longlong)this + 0x70) * dVar16;
    dVar50 = *(double *)((longlong)this + 0x78) * dVar50;
    uVar58 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar30 = *(undefined1 (*) [16])((longlong)this + 0x30);
    auVar61._8_4_ = SUB84(dVar50,0);
    auVar61._0_8_ = dVar16;
    auVar61._12_4_ = uVar58;
    dVar6 = dVar6 * *(double *)((longlong)this + 0x80);
    dVar22 = *(double *)((longlong)this + 0x88) * 0.0;
    auVar42 = blendpd(auVar30,auVar34,2);
    dVar15 = auVar34._0_8_;
    auVar62._0_8_ = auVar61._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar16;
    auVar62._8_8_ = dVar6 * auVar30._8_8_ - dVar15 * dVar50;
    auVar29._8_4_ = SUB84(dVar50,0);
    auVar29._0_8_ = dVar16;
    auVar29._12_4_ = uVar58;
    auVar44._8_4_ = SUB84(dVar22,0);
    auVar44._0_8_ = dVar6;
    auVar44._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    auVar30 = blendpd(auVar29,auVar44,2);
    auVar31._0_8_ = auVar30._0_8_ * dVar15 - auVar42._0_8_ * dVar6;
    auVar31._8_8_ = auVar30._8_8_ * auVar34._8_8_ - auVar42._8_8_ * dVar22;
    auVar30 = *(undefined1 (*) [16])((longlong)this + 0x30);
    auVar42 = blendpd(auVar62,auVar31,2);
    auVar63._0_8_ = auVar42._0_8_ + auVar42._0_8_;
    auVar63._8_8_ = auVar42._8_8_ + auVar42._8_8_;
    dVar22 = auVar62._8_8_ + auVar62._8_8_;
    dVar14 = auVar31._0_8_ + auVar31._0_8_;
    uVar58 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auVar51._8_4_ = SUB84(dVar14,0);
    auVar51._0_8_ = dVar22;
    auVar51._12_4_ = uVar58;
    auVar43._8_4_ = SUB84(dVar14,0);
    auVar43._0_8_ = dVar22;
    auVar43._12_4_ = uVar58;
    auVar44 = blendpd(auVar43,auVar63,2);
    auVar42 = blendpd(auVar30,auVar34,2);
    auVar52._0_8_ = auVar51._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar22;
    auVar52._8_8_ = auVar63._0_8_ * auVar30._8_8_ - dVar15 * dVar14;
    auVar32._8_4_ = SUB84(auVar52._8_8_,0);
    auVar32._0_8_ = auVar52._0_8_;
    auVar32._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
    auVar45._0_8_ = auVar44._0_8_ * dVar15 - auVar42._0_8_ * auVar63._0_8_;
    auVar45._8_8_ = auVar44._8_8_ * auVar34._8_8_ - auVar42._8_8_ * auVar63._8_8_;
    dVar15 = dVar14 * dVar23 + dVar50 + auVar45._0_8_ + *(double *)((longlong)this + 0x58);
    auVar30 = blendpd(auVar52,auVar45,2);
    dVar50 = *(double *)((longlong)this + 0x60);
    auVar34._8_4_ = SUB84(dVar15,0);
    auVar34._0_8_ = dVar22 * dVar23 + dVar16 + auVar32._8_8_ + *(double *)((longlong)this + 0x50);
    auVar34._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(lVar27 + lVar11) = auVar34;
    *(double *)(lVar27 + 0x10 + lVar11) = auVar63._0_8_ * dVar23 + dVar6 + auVar30._0_8_ + dVar50;
    dVar40 = dVar40 * *(double *)((longlong)this + 0x80);
    dVar16 = *(double *)((longlong)this + 0x88) * 0.0;
    auVar34 = *(undefined1 (*) [16])((longlong)this + 0x30);
    auVar30 = *(undefined1 (*) [16])((longlong)this + 0x40);
    dVar15 = *(double *)((longlong)this + 0x48);
    dVar41 = *(double *)((longlong)this + 0x70) * dVar41;
    dVar18 = *(double *)((longlong)this + 0x78) * dVar18;
    uVar58 = (undefined4)((ulonglong)dVar18 >> 0x20);
    auVar42 = blendpd(auVar34,auVar30,2);
    auVar64._8_4_ = SUB84(dVar18,0);
    auVar64._0_8_ = dVar41;
    auVar64._12_4_ = uVar58;
    dVar6 = auVar30._0_8_;
    auVar65._0_8_ = auVar64._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar41;
    auVar65._8_8_ = dVar40 * auVar34._8_8_ - dVar6 * dVar18;
    auVar33._8_4_ = SUB84(dVar18,0);
    auVar33._0_8_ = dVar41;
    auVar33._12_4_ = uVar58;
    auVar20._8_4_ = SUB84(dVar16,0);
    auVar20._0_8_ = dVar40;
    auVar20._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar34 = blendpd(auVar33,auVar20,2);
    auVar35._0_8_ = auVar34._0_8_ * dVar6 - auVar42._0_8_ * dVar40;
    auVar35._8_8_ = auVar34._8_8_ * auVar30._8_8_ - auVar42._8_8_ * dVar16;
    auVar34 = *(undefined1 (*) [16])((longlong)this + 0x30);
    auVar42 = blendpd(auVar65,auVar35,2);
    auVar66._0_8_ = auVar42._0_8_ + auVar42._0_8_;
    auVar66._8_8_ = auVar42._8_8_ + auVar42._8_8_;
    dVar16 = auVar65._8_8_ + auVar65._8_8_;
    dVar50 = auVar35._0_8_ + auVar35._0_8_;
    uVar58 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar53._8_4_ = SUB84(dVar50,0);
    auVar53._0_8_ = dVar16;
    auVar53._12_4_ = uVar58;
    auVar46._8_4_ = SUB84(dVar50,0);
    auVar46._0_8_ = dVar16;
    auVar46._12_4_ = uVar58;
    auVar42 = blendpd(auVar46,auVar66,2);
    auVar54._0_8_ = auVar53._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar16;
    auVar54._8_8_ = auVar66._0_8_ * auVar34._8_8_ - dVar6 * dVar50;
    auVar34 = blendpd(auVar34,auVar30,2);
    auVar47._0_8_ = auVar42._0_8_ * dVar6 - auVar34._0_8_ * auVar66._0_8_;
    auVar47._8_8_ = auVar42._8_8_ * auVar30._8_8_ - auVar34._8_8_ * auVar66._8_8_;
    auVar36._8_4_ = SUB84(auVar54._8_8_,0);
    auVar36._0_8_ = auVar54._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
    auVar34 = blendpd(auVar54,auVar47,2);
    dVar50 = dVar50 * dVar15 + dVar18 + auVar47._0_8_ + *(double *)((longlong)this + 0x58);
    dVar6 = *(double *)((longlong)this + 0x60);
    auVar30._8_4_ = SUB84(dVar50,0);
    auVar30._0_8_ = dVar16 * dVar15 + dVar41 + auVar36._8_8_ + *(double *)((longlong)this + 0x50);
    auVar30._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    *(undefined1 (*) [16])(lVar27 + 0x18 + lVar11) = auVar30;
    *(double *)(lVar27 + 0x28 + lVar11) = auVar66._0_8_ * dVar15 + dVar40 + auVar34._0_8_ + dVar6;
    auVar34 = *(undefined1 (*) [16])((longlong)this + 0x40);
    dVar7 = dVar7 * *(double *)((longlong)this + 0x80);
    dVar16 = *(double *)((longlong)this + 0x88) * 0.0;
    auVar30 = *(undefined1 (*) [16])((longlong)this + 0x30);
    dVar40 = *(double *)((longlong)this + 0x48);
    dVar17 = *(double *)((longlong)this + 0x70) * dVar17;
    dVar19 = *(double *)((longlong)this + 0x78) * dVar19;
    uVar58 = (undefined4)((ulonglong)dVar19 >> 0x20);
    auVar42 = blendpd(auVar30,auVar34,2);
    auVar67._8_4_ = SUB84(dVar19,0);
    auVar67._0_8_ = dVar17;
    auVar67._12_4_ = uVar58;
    dVar6 = auVar34._0_8_;
    auVar68._0_8_ = auVar67._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar17;
    auVar68._8_8_ = dVar7 * auVar30._8_8_ - dVar6 * dVar19;
    auVar37._8_4_ = SUB84(dVar19,0);
    auVar37._0_8_ = dVar17;
    auVar37._12_4_ = uVar58;
    auVar21._8_4_ = SUB84(dVar16,0);
    auVar21._0_8_ = dVar7;
    auVar21._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar30 = blendpd(auVar37,auVar21,2);
    auVar38._0_8_ = auVar30._0_8_ * dVar6 - auVar42._0_8_ * dVar7;
    auVar38._8_8_ = auVar30._8_8_ * auVar34._8_8_ - auVar42._8_8_ * dVar16;
    auVar30 = *(undefined1 (*) [16])((longlong)this + 0x30);
    auVar42 = blendpd(auVar68,auVar38,2);
    dVar16 = auVar68._8_8_ + auVar68._8_8_;
    dVar50 = auVar38._0_8_ + auVar38._0_8_;
    uVar58 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar69._0_8_ = auVar42._0_8_ + auVar42._0_8_;
    auVar69._8_8_ = auVar42._8_8_ + auVar42._8_8_;
    auVar55._8_4_ = SUB84(dVar50,0);
    auVar55._0_8_ = dVar16;
    auVar55._12_4_ = uVar58;
    auVar48._8_4_ = SUB84(dVar50,0);
    auVar48._0_8_ = dVar16;
    auVar48._12_4_ = uVar58;
    auVar42 = blendpd(auVar48,auVar69,2);
    auVar56._0_8_ = auVar55._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar16;
    auVar56._8_8_ = auVar69._0_8_ * auVar30._8_8_ - dVar6 * dVar50;
    auVar30 = blendpd(auVar30,auVar34,2);
    auVar39._8_4_ = SUB84(auVar56._8_8_,0);
    auVar39._0_8_ = auVar56._0_8_;
    auVar39._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    auVar49._0_8_ = auVar42._0_8_ * dVar6 - auVar30._0_8_ * auVar69._0_8_;
    auVar49._8_8_ = auVar42._8_8_ * auVar34._8_8_ - auVar30._8_8_ * auVar69._8_8_;
    dVar50 = dVar50 * dVar40 + dVar19 + auVar49._0_8_ + *(double *)((longlong)this + 0x58);
    auVar34 = blendpd(auVar56,auVar49,2);
    dVar6 = *(double *)((longlong)this + 0x60);
    auVar42._8_4_ = SUB84(dVar50,0);
    auVar42._0_8_ = dVar16 * dVar40 + dVar17 + auVar39._8_8_ + *(double *)((longlong)this + 0x50);
    auVar42._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    *(undefined1 (*) [16])(lVar27 + 0x30 + lVar11) = auVar42;
    *(double *)(lVar27 + 0x40 + lVar11) = auVar69._0_8_ * dVar40 + dVar7 + auVar34._0_8_ + dVar6;
    dVar6 = *(double *)(lVar27 + lVar11);
    uVar70 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar16 = *(double *)(lVar27 + 8 + lVar11);
    uVar57 = (undefined4)((ulonglong)dVar16 >> 0x20);
    dVar50 = *(double *)(lVar27 + 0x18 + lVar11);
    dVar40 = *(double *)(lVar27 + 0x10 + lVar11);
    uVar71 = (undefined4)((ulonglong)dVar50 >> 0x20);
    uVar58 = SUB84(dVar6,0);
    uVar72 = uVar70;
    if (dVar50 <= dVar6) {
      uVar58 = SUB84(dVar50,0);
      uVar72 = uVar71;
    }
    dVar41 = *(double *)(lVar27 + 0x20 + lVar11);
    dVar18 = *(double *)(lVar27 + 0x28 + lVar11);
    uVar74 = (undefined4)((ulonglong)dVar41 >> 0x20);
    uVar75 = SUB84(dVar16,0);
    uVar76 = uVar57;
    if (dVar16 <= dVar41) {
      uVar75 = SUB84(dVar41,0);
      uVar76 = uVar74;
    }
    uVar59 = SUB84(dVar40,0);
    uVar60 = (int)((ulonglong)dVar40 >> 0x20);
    if (dVar18 <= dVar40) {
      uVar59 = SUB84(dVar18,0);
      uVar60 = (int)((ulonglong)dVar18 >> 0x20);
    }
    uVar73 = SUB84(dVar16,0);
    if (dVar41 <= dVar16) {
      uVar73 = SUB84(dVar41,0);
      uVar57 = uVar74;
    }
    dVar7 = *(double *)(lVar27 + 0x30 + lVar11);
    if (dVar7 <= (double)CONCAT44(uVar72,uVar58)) {
      uVar58 = SUB84(dVar7,0);
      uVar72 = (undefined4)((ulonglong)dVar7 >> 0x20);
    }
    uVar74 = SUB84(dVar6,0);
    if (dVar6 <= dVar50) {
      uVar74 = SUB84(dVar50,0);
      uVar70 = uVar71;
    }
    dVar7 = *(double *)(lVar27 + 0x38 + lVar11);
    if ((double)CONCAT44(uVar76,uVar75) <= dVar7) {
      uVar75 = SUB84(dVar7,0);
      uVar76 = (undefined4)((ulonglong)dVar7 >> 0x20);
    }
    dVar7 = *(double *)(lVar27 + 0x40 + lVar11);
    if (dVar7 <= (double)CONCAT44(uVar60,uVar59)) {
      uVar59 = SUB84(dVar7,0);
      uVar60 = (undefined4)((ulonglong)dVar7 >> 0x20);
    }
    dVar7 = *(double *)(lVar27 + 0x38 + lVar11);
    if (dVar7 <= (double)CONCAT44(uVar57,uVar73)) {
      uVar73 = SUB84(dVar7,0);
      uVar57 = (undefined4)((ulonglong)dVar7 >> 0x20);
    }
    dVar7 = dVar40;
    if (dVar40 <= dVar18) {
      dVar7 = dVar18;
    }
    dVar17 = *(double *)(lVar27 + 0x30 + lVar11);
    if ((double)CONCAT44(uVar70,uVar74) <= dVar17) {
      uVar74 = SUB84(dVar17,0);
      uVar70 = (undefined4)((ulonglong)dVar17 >> 0x20);
    }
    dVar17 = *(double *)(lVar27 + 0x40 + lVar11);
    if (dVar7 <= dVar17) {
      dVar7 = dVar17;
    }
    puVar4 = (undefined8 *)(lVar27 + 0x90 + lVar11);
    *puVar4 = CONCAT44(uVar72,uVar58);
    puVar4[1] = CONCAT44(uVar57,uVar73);
    puVar5 = (undefined4 *)(lVar27 + 0xa0 + lVar11);
    *puVar5 = uVar59;
    puVar5[1] = uVar60;
    puVar5[2] = uVar74;
    puVar5[3] = uVar70;
    puVar4 = (undefined8 *)(lVar27 + 0xb0 + lVar11);
    *puVar4 = CONCAT44(uVar76,uVar75);
    puVar4[1] = dVar7;
    *(ulonglong *)(lVar27 + 0xc0 + lVar11) = CONCAT71(uStack_bf,1);
    if ((((*(double *)(lVar27 + 0xa8 + lVar11) < *(double *)((longlong)this + 0x90)) ||
         (*(double *)((longlong)this + 0xa8) < *(double *)(lVar27 + 0x90 + lVar11))) ||
        ((*(double *)(lVar27 + 0xb0 + lVar11) < *(double *)((longlong)this + 0x98) ||
         ((*(double *)((longlong)this + 0xb0) < *(double *)(lVar27 + 0x98 + lVar11) ||
          (*(double *)(lVar27 + 0xb8 + lVar11) < *(double *)((longlong)this + 0xa0))))))) ||
       (*(double *)((longlong)this + 0xb8) < *(double *)(lVar27 + 0xa0 + lVar11))) {
      *(undefined1 *)(lVar27 + 0xf9 + lVar11) = 1;
    }
    else {
      *(double *)(lVar27 + 0x48 + lVar11) = dVar50 - dVar6;
      *(double *)(lVar27 + 0x50 + lVar11) = dVar41 - dVar16;
      *(double *)(lVar27 + 0x58 + lVar11) = dVar18 - dVar40;
      pdVar1 = (double *)(lVar27 + 0x20 + lVar11);
      dVar50 = pdVar1[1];
      pdVar2 = (double *)(lVar27 + 0x38 + lVar11);
      dVar41 = pdVar2[1];
      *(double *)(lVar27 + 0x60 + lVar11) =
           *(double *)(lVar27 + 0x30 + lVar11) - *(double *)(lVar27 + 0x18 + lVar11);
      pdVar3 = (double *)(lVar27 + 0x68 + lVar11);
      *pdVar3 = *pdVar2 - *pdVar1;
      pdVar3[1] = dVar41 - dVar50;
      *(double *)(lVar27 + 0x78 + lVar11) = dVar6 - *(double *)(lVar27 + 0x30 + lVar11);
      *(double *)(lVar27 + 0x80 + lVar11) = dVar16 - *(double *)(lVar27 + 0x38 + lVar11);
      *(double *)(lVar27 + 0x88 + lVar11) = dVar40 - *(double *)(lVar27 + 0x40 + lVar11);
      dVar50 = __real_4000000000000000;
      dVar16 = __real_3fe0000000000000;
      dVar40 = __real_4000000000000000 / *(double *)((longlong)this + 0x20);
      dVar6 = ((double)CONCAT44(uVar60,uVar59) + (double)CONCAT44(uVar60,uVar59)) /
              *(double *)((longlong)this + 0x20) - __real_3fe0000000000000;
      dVar41 = dVar40 * (double)CONCAT44(uVar57,uVar73) - __real_3fe0000000000000;
      *(int *)(lVar27 + 200 + lVar11) =
           (int)((longlong)ROUND(dVar40 * (double)CONCAT44(uVar72,uVar58) - __real_3fe0000000000000)
                >> 1);
      *(int *)(lVar27 + 0xcc + lVar11) = (int)((longlong)ROUND(dVar41) >> 1);
      *(int *)(lVar27 + 0xd0 + lVar11) = (int)((longlong)ROUND(dVar6) >> 1);
      dVar6 = *(double *)((longlong)this + 0x20);
      dVar50 = dVar50 / dVar6;
      *(int *)(lVar27 + 0xd4 + lVar11) =
           (int)((longlong)ROUND(dVar50 * (double)CONCAT44(uVar70,uVar74) - dVar16) >> 1);
      *(int *)(lVar27 + 0xd8 + lVar11) =
           (int)((longlong)ROUND(dVar50 * (double)CONCAT44(uVar76,uVar75) - dVar16) >> 1);
      *(int *)(lVar27 + 0xdc + lVar11) =
           (int)((longlong)ROUND((dVar7 + dVar7) / dVar6 - dVar16) >> 1);
      this_00 = (TVector<double> *)(lVar11 + 0xe0 + lVar27);
      dVar6 = *(double *)(lVar27 + 0x58 + lVar11);
      dVar16 = *(double *)(lVar27 + 0x70 + lVar11);
      dVar50 = *(double *)(lVar27 + 0x50 + lVar11);
      dVar40 = *(double *)(lVar27 + 0x68 + lVar11);
      dVar41 = *(double *)(lVar27 + 0x48 + lVar11);
      dVar18 = *(double *)(lVar27 + 0x60 + lVar11);
      (this_00->field0_0x0)._s_0.X = dVar50 * dVar16 - dVar6 * dVar40;
      (this_00->field0_0x0)._s_0.Y = dVar18 * dVar6 - dVar41 * dVar16;
      (this_00->field0_0x0)._s_0.Z = dVar41 * dVar40 - dVar18 * dVar50;
      UE::Math::TVector<double>::Normalize(this_00,__real_3e45798ee0000000);
    }
  }
  return;
}

// operator() @ 14a0306d0

void __thiscall `WN_VoxelizeImpl'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  plVar2 = *(longlong **)((longlong)this + 0x30);
  uVar8 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)((longlong)this + 0x28);
  puVar1 = (uint *)(*plVar2 + (longlong)param_1 * 8);
  uVar8 = *puVar1;
  uVar6 = 0;
  if ((int)uVar8 < (int)plVar3[1]) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar7 = (longlong)(int)uVar8 * 0x30 + *plVar3;
  if (*(int *)(lVar7 + 0x28) < 1) {
    uVar8 = puVar1[1];
    plVar2 = *(longlong **)((longlong)this + 0x20);
    uVar6 = 0;
    if ((int)uVar8 < (int)plVar2[1]) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar5 = WN_VoxelTriangleIntersection
                      ((TVector<double> *)(lVar7 + 0x10),(TVector<double> *)((longlong)this + 8),
                       (FWN_VoxelizeTriangleInfo *)((longlong)(int)uVar8 * 0x100 + *plVar2));
    if (bVar5) {
      LOCK();
      *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
      UNLOCK();
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14a03082c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_BGMVolumeComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_BGMVolumeComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_BGMVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_BGMVolumeComponent *)&this[-1].field_0x450,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14a030840

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_BGMVolumeComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_BGMVolumeComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_BGMVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_BGMVolumeComponent *)&this[-1].field_0x448,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14a030854

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_BGMVolumeComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_BGMVolumeComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_BGMVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_BGMVolumeComponent *)&this[-1].field_0x440,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a030868

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_BGMVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_BGMVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_BGMVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_BGMVolumeComponent *)&this[-1].field_0x678,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14a030878

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_DistrictVolumeComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_DistrictVolumeComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_DistrictVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_DistrictVolumeComponent *)&this[-1].field_0x450,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14a03088c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_DistrictVolumeComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_DistrictVolumeComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_DistrictVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_DistrictVolumeComponent *)&this[-1].field_0x448,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14a0308a0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_DistrictVolumeComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_DistrictVolumeComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_DistrictVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_DistrictVolumeComponent *)&this[-1].field_0x440,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a0308b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_DistrictVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_DistrictVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_DistrictVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_DistrictVolumeComponent *)&this[-1].field_0x678,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14a0308c4

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_OcclusionVolumeComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_OcclusionVolumeComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_OcclusionVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_OcclusionVolumeComponent *)&this[-1].field_0x450,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14a0308d8

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_OcclusionVolumeComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_OcclusionVolumeComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_OcclusionVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_OcclusionVolumeComponent *)&this[-1].field_0x448,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14a0308ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_OcclusionVolumeComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_OcclusionVolumeComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_OcclusionVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_OcclusionVolumeComponent *)&this[-1].field_0x440,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a030900

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_OcclusionVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_OcclusionVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_OcclusionVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_OcclusionVolumeComponent *)&this[-1].field_0x678,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14a030910

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_WorldUtils_Subsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UWN_WorldUtils_Subsystem::_vector_deleting_destructor__adjustor_56__
          (UWN_WorldUtils_Subsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_WorldUtils_Subsystem *)&this[-1].CachedWorldBounds,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14a030920

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_ZoneVolumeComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_ZoneVolumeComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_ZoneVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_ZoneVolumeComponent *)&this[-1].field_0x450,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14a030934

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_ZoneVolumeComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_ZoneVolumeComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_ZoneVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_ZoneVolumeComponent *)&this[-1].field_0x448,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14a030948

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_ZoneVolumeComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_ZoneVolumeComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_ZoneVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_ZoneVolumeComponent *)&this[-1].field_0x440,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a03095c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_ZoneVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_ZoneVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_ZoneVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_ZoneVolumeComponent *)&this[-1].field_0x678,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a030970

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0309a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,AWN_OcclusionVolume_const_,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,AWN_OcclusionVolume_const_,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0309d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_OcclusionVolume,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AWN_OcclusionVolume,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030a50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWN_ViewExtension,SharedPointerInternals::DefaultDeleter<FWN_ViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWN_ViewExtension,SharedPointerInternals::DefaultDeleter<FWN_ViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AWN_BGMVolume::_scalar_deleting_destructor_(AWN_BGMVolume *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7AWN_BGMVolume__6B_;
  pvVar1 = *(void **)&(this->BGMSoundInfo).BGM.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030b10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AWN_BVC_VoxelVisualizer::_scalar_deleting_destructor_(AWN_BVC_VoxelVisualizer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWN_BVC_VoxelVisualizer__6B_;
  pFVar1 = (this->VoxelByteFlags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VCIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AWN_OcclusionVolume::_scalar_deleting_destructor_(AWN_OcclusionVolume *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7AWN_OcclusionVolume__6B_;
  (this->AlwaysVisibleActorNames).HashSize = 0;
  FVar1 = (this->AlwaysVisibleActorNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AlwaysVisibleActorNames).Elements);
  (this->AlwaysVisibleActorClasses).HashSize = 0;
  FVar1 = (this->AlwaysVisibleActorClasses).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSubclassOf<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSubclassOf<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AlwaysVisibleActorClasses).Elements);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AWN_PhasingVolume::_scalar_deleting_destructor_(AWN_PhasingVolume *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7AWN_PhasingVolume__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OutSphereCollisionEndOverlapDelegate).field_0x8,
             *(int *)&(this->OutSphereCollisionEndOverlapDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OutSphereCollisionEndOverlapDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OutSphereCollisionEndOverlapDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OutSphereCollisionBeginOverlapDelegate).field_0x8,
             *(int *)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OutSphereCollisionBeginOverlapDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EnterSphereCollisionEndOverlapDelegate).field_0x8,
             *(int *)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x10);
  pvVar1 = *(void **)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EnterSphereCollisionEndOverlapDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EnterSphereCollisionBeginOverlapDelegate).field_0x8,
             *(int *)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x10);
  pvVar1 = *(void **)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EnterSphereCollisionBeginOverlapDelegate);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x398);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030d90

void * __thiscall
AWN_StaticMesh_Inherited::_scalar_deleting_destructor_(AWN_StaticMesh_Inherited *this,uint param_1)

{
  *(undefined ***)this = &___7AWN_StaticMesh_Inherited__6B_;
  AStaticMeshActor::~AStaticMeshActor((AStaticMeshActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030df0

void * __thiscall
AWN_StaticMesh_NoVoxel::_scalar_deleting_destructor_(AWN_StaticMesh_NoVoxel *this,uint param_1)

{
  *(undefined ***)this = &___7AWN_StaticMesh_Inherited__6B_;
  AStaticMeshActor::~AStaticMeshActor((AStaticMeshActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030e50

void * __thiscall
AWN_StaticMesh_NoWPMerge::_scalar_deleting_destructor_(AWN_StaticMesh_NoWPMerge *this,uint param_1)

{
  *(undefined ***)this = &___7AWN_StaticMesh_Inherited__6B_;
  AStaticMeshActor::~AStaticMeshActor((AStaticMeshActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AWN_ZoneVolume::_scalar_deleting_destructor_(AWN_ZoneVolume *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AWN_ZoneVolume__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030f10

void * __thiscall
FWN_BGMSoundInfo::_scalar_deleting_destructor_(FWN_BGMSoundInfo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->BGM).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030f60

void * __thiscall
FWN_ViewExtension::_scalar_deleting_destructor_(FWN_ViewExtension *this,uint param_1)

{
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a030fa0

void * __thiscall
UWN_BGMVolumeComponent::_scalar_deleting_destructor_(UWN_BGMVolumeComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UWN_VolumeComponent::~UWN_VolumeComponent((UWN_VolumeComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a031040

void * __thiscall
UWN_DistrictVolumeComponent::_scalar_deleting_destructor_
          (UWN_DistrictVolumeComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UWN_VolumeComponent::~UWN_VolumeComponent((UWN_VolumeComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0310e0

void * __thiscall
UWN_Island_ZoneIDMap::_scalar_deleting_destructor_(UWN_Island_ZoneIDMap *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWN_Island_ZoneIDMap__6B_;
  pFVar1 = (this->ZoneVolumePositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ZonePaintIdMapDataPerTile).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a031160

void * __thiscall
UWN_OcclusionVolumeComponent::_scalar_deleting_destructor_
          (UWN_OcclusionVolumeComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UWN_VolumeComponent::~UWN_VolumeComponent((UWN_VolumeComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a031200

void * __thiscall
UWN_WorldEditInfo::_scalar_deleting_destructor_(UWN_WorldEditInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWN_WorldEditInfo__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a031260

void * __thiscall UWN_WorldInfo::_scalar_deleting_destructor_(UWN_WorldInfo *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UWN_WorldInfo__6B_;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AmbientSoundInfos).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FWN_AmbientSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FWN_AmbientSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FWN_AmbientSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AmbientSoundInfos);
  *(undefined4 *)&(this->BGMSoundInfos).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BGMSoundInfos).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FWN_BGMSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FWN_BGMSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FWN_BGMSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BGMSoundInfos);
  pvVar1 = *(void **)&(this->Map).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a031330

void * __thiscall
UWN_WorldUtils_Subsystem::_scalar_deleting_destructor_(UWN_WorldUtils_Subsystem *this,uint param_1)

{
  ~UWN_WorldUtils_Subsystem(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a031390

void * __thiscall
UWN_ZoneVolumeComponent::_scalar_deleting_destructor_(UWN_ZoneVolumeComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UWN_VolumeComponent::~UWN_VolumeComponent((UWN_VolumeComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6a0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWN_BGMVolume @ 14a033060

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_BGMVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_BGMVolumeComponent @ 14a033070

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_BGMVolumeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_BVC_VoxelVisualizer @ 14a033080

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_BVC_VoxelVisualizer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_DistrictVolumeComponent @ 14a033090

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_DistrictVolumeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_OcclusionVolume @ 14a0330a0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_OcclusionVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_OcclusionVolumeComponent @ 14a0330b0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_OcclusionVolumeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_PhasingVolume @ 14a0330c0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_PhasingVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_StaticMesh_Inherited @ 14a0330d0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_StaticMesh_Inherited(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_WorldInfo @ 14a0330e0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_WorldInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_WorldUtils_Subsystem @ 14a0330f0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_WorldUtils_Subsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_WorldUtils_init @ 14a033100

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_WorldUtils_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_ZoneVolume @ 14a033110

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_ZoneVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_ZoneVolumeComponent @ 14a033120

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_ZoneVolumeComponent(void)

{
  return;
}

// WN_ClearAllCustomedPrimitives @ 14a03b4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl WN_ClearAllCustomedPrimitives(UWorld *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  UWN_WorldUtils_Subsystem *pUVar4;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *this;
  
  pUVar4 = GWN_WorldUtilsSubsystem;
  if (GWN_WorldUtilsSubsystem != (UWN_WorldUtils_Subsystem *)0x0) {
    this = &GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs;
    bVar3 = 1 < (GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs).HashSize;
    if (!bVar3) {
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      UnhashElements(this);
    }
    puVar1 = &(pUVar4->CustomHiddenPrimitiveIDs).Elements.field_0xc;
    *(undefined4 *)&(pUVar4->CustomHiddenPrimitiveIDs).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(pUVar4->CustomHiddenPrimitiveIDs).Elements.field_0x34 = 0;
    *(undefined4 *)&(pUVar4->CustomHiddenPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(pUVar4->CustomHiddenPrimitiveIDs).Elements.field_0x2c;
    *(undefined4 *)&(pUVar4->CustomHiddenPrimitiveIDs).Elements.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(pUVar4->CustomHiddenPrimitiveIDs).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(pUVar4->CustomHiddenPrimitiveIDs).Elements.field_0x10,0);
    }
    if (bVar3) {
      (pUVar4->CustomHiddenPrimitiveIDs).HashSize = 1;
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      Rehash(this);
      return;
    }
  }
  return;
}

// WN_IsRegisteredHiddenPrimitive @ 14a03b5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl WN_IsRegisteredHiddenPrimitive(UPrimitiveComponent *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  UWN_WorldUtils_Subsystem *pUVar5;
  
  pUVar5 = (UWN_WorldUtils_Subsystem *)0x0;
  if (GWN_WorldUtilsSubsystem != (UWN_WorldUtils_Subsystem *)0x0) {
    pUVar5 = GWN_WorldUtilsSubsystem;
  }
  if ((param_1 == (UPrimitiveComponent *)0x0) || (pUVar5 == (UWN_WorldUtils_Subsystem *)0x0)) {
    return false;
  }
  uVar1 = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
  if (*(int *)&(pUVar5->CustomHiddenPrimitiveIDs).Elements.field_0x8 !=
      *(int *)&(pUVar5->CustomHiddenPrimitiveIDs).Elements.field_0x34) {
    FVar4 = (pUVar5->CustomHiddenPrimitiveIDs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(pUVar5->CustomHiddenPrimitiveIDs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((pUVar5->CustomHiddenPrimitiveIDs).HashSize - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(pUVar5->CustomHiddenPrimitiveIDs).Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0xc) == uVar1) goto LAB_14a03b62e;
        iVar3 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14a03b62e:
  return iVar3 != -1;
}

// WN_RegisterHiddenPrimitive @ 14a03b640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl WN_RegisterHiddenPrimitive(UPrimitiveComponent *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  UWN_WorldUtils_Subsystem *pUVar5;
  int iVar6;
  bool bVar7;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [16];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  uint local_48;
  FPrimitiveComponentId local_44;
  FPrimitiveComponentId local_40;
  FPrimitiveComponentId local_3c;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_38;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("InComponent",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                       ,0x47,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar5 = GWN_WorldUtilsSubsystem;
  if ((GWN_WorldUtilsSubsystem != (UWN_WorldUtils_Subsystem *)0x0) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    if (param_2) {
      if ((param_1->field_0x98 & param_2) != 0) {
        local_res18[0] = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
        TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
        Emplace<FPrimitiveComponentId>
                  (&GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs,&local_44,(bool *)local_res18)
        ;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        USceneComponent::GetChildrenComponents((USceneComponent *)param_1,param_2,&local_38);
        iVar6 = local_38.ArrayNum;
        pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
        FVar9.Data = local_38.AllocatorInstance.Data;
        while( true ) {
          if (local_38.ArrayNum != iVar6) {
            `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar9.Data == pFVar1) break;
          lVar3 = *(longlong *)FVar9.Data;
          if (lVar3 != 0) {
            pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
            iVar2 = (int)pUVar8->_padding_;
            if (((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
                 &pUVar8->_padding_)) && ((*(byte *)(lVar3 + 0x98) & 1) != 0)) {
              local_res20[0] = *(undefined4 *)(lVar3 + 0x344);
              TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
              ::Emplace<FPrimitiveComponentId>
                        (&pUVar5->CustomHiddenPrimitiveIDs,&local_40,(bool *)local_res20);
            }
          }
          FVar9.Data = FVar9.Data + 8;
        }
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
          return;
        }
      }
    }
    else if ((param_1->field_0x98 & 1) != 0) {
      local_48 = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      Emplace<FPrimitiveComponentId>
                (&GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs,&local_3c,(bool *)&local_48);
    }
  }
  return;
}

// WN_RegisterHiddenPrimitives @ 14a03b7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl WN_RegisterHiddenPrimitives(TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  AActor *this;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  UClass *local_110;
  undefined8 local_108 [24];
  undefined8 *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    pFVar12 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar12 + (longlong)iVar3 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_118);
      }
      if (pFVar12 == pFVar1) break;
      this = *(AActor **)pFVar12;
      if (this != (AActor *)0x0) {
        local_48 = (undefined8 *)0x0;
        local_3c = 0x18;
        local_40 = 0;
        pUVar7 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UClass *)0x0) goto LAB_14a03b895;
LAB_14a03b8c6:
          pUVar8 = (UClass *)0x0;
        }
        else {
          if (pUVar7 == (UClass *)0x0) goto LAB_14a03b8c6;
          UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_14a03b895:
          pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar8 == (UClass *)0x0) goto LAB_14a03b8c6;
          iVar4 = (int)pUVar8->_padding_;
          if (((int)pUVar7->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar8->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          pUVar8 = pUVar7;
          if (!bVar5) goto LAB_14a03b8c6;
        }
        pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
        local_110 = pUVar7;
        if (pUVar8 == pUVar9) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          AActor::
          ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (this,(TSubclassOf<UActorComponent>)&local_110,
                     (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_108);
        }
        else {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          AActor::
          ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (this,(TSubclassOf<UActorComponent>)&local_110,
                     (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_108);
        }
        uVar6 = local_40;
        uVar10 = (ulonglong)(int)local_40;
        puVar11 = local_108;
        if (local_48 != (undefined8 *)0x0) {
          puVar11 = local_48;
        }
        puVar2 = puVar11 + uVar10;
        while( true ) {
          if ((uint)uVar10 != uVar6) {
            `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_118);
          }
          if (puVar11 == puVar2) break;
          WN_RegisterHiddenPrimitive((UPrimitiveComponent *)*puVar11,false);
          uVar10 = (ulonglong)local_40;
          puVar11 = puVar11 + 1;
        }
        if (local_48 != (undefined8 *)0x0) {
          FMemory::Free(local_48);
        }
      }
      pFVar12 = pFVar12 + 8;
    }
  }
  return;
}

// WN_RegisterHiddenPrimitives @ 14a03b9f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
WN_RegisterHiddenPrimitives
          (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UPrimitiveComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      WN_RegisterHiddenPrimitive(*(UPrimitiveComponent **)pFVar3,param_2);
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// WN_RegisterHiddenPrimitives @ 14a03ba60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl WN_RegisterHiddenPrimitives(AActor *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  UClass *pUVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  UClass *local_f0;
  undefined8 local_e8 [24];
  undefined8 *local_28;
  uint local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  if (param_1 == (AActor *)0x0) {
    return;
  }
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar7 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  local_1c = 0x18;
  pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (UClass *)0x0) goto LAB_14a03baf9;
  }
  else {
    pUVar10 = pUVar7;
    if (pUVar5 == (UClass *)0x0) goto LAB_14a03baf9;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar10 = pUVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar10 = pUVar5;
    }
  }
LAB_14a03baf9:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_f0 = pUVar5;
  if (pUVar10 == pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_f0,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_f0,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e8);
  }
  uVar4 = local_20;
  uVar8 = (ulonglong)(int)local_20;
  puVar9 = local_e8;
  if (local_28 != (undefined8 *)0x0) {
    puVar9 = local_28;
  }
  puVar1 = puVar9 + uVar8;
  while( true ) {
    if ((uint)uVar8 != uVar4) {
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_f8);
    }
    if (puVar9 == puVar1) break;
    WN_RegisterHiddenPrimitive((UPrimitiveComponent *)*puVar9,false);
    uVar8 = (ulonglong)local_20;
    puVar9 = puVar9 + 1;
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// WN_TriangleAABBOverlap @ 14a03bc00

bool __cdecl
WN_TriangleAABBOverlap
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  TVector<double>_u_0 local_158;
  TVector<double> *local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0 [7];
  
  dVar4 = __real_3e112e0be826d695;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  local_100 = (param_1->field0_0x0)._s_0.Y;
  local_f8 = (param_1->field0_0x0)._s_0.Z;
  local_120 = (param_4->field0_0x0)._s_0.X - dVar1;
  local_118 = (param_4->field0_0x0)._s_0.Y - local_100;
  local_108 = (param_5->field0_0x0)._s_0.X - dVar1;
  dVar7 = *(double *)&param_2->field0_0x0;
  dVar1 = (param_3->field0_0x0)._s_0.X - dVar1;
  dVar2 = (param_3->field0_0x0)._s_0.Y - local_100;
  local_100 = (param_5->field0_0x0)._s_0.Y - local_100;
  dVar3 = (param_3->field0_0x0)._s_0.Z - local_f8;
  local_110 = (param_4->field0_0x0)._s_0.Z - local_f8;
  local_f8 = (param_5->field0_0x0)._s_0.Z - local_f8;
  dVar6 = local_120;
  if (dVar1 <= local_120) {
    dVar6 = dVar1;
  }
  dVar8 = local_120;
  if (local_120 <= dVar1) {
    dVar8 = dVar1;
  }
  if (local_108 <= dVar6) {
    dVar6 = local_108;
  }
  if (dVar8 <= local_108) {
    dVar8 = local_108;
  }
  if (dVar6 <= dVar7 + __real_3e112e0be826d695) {
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar10,SUB84(dVar7,0) ^ uVar9) -
        __real_3e112e0be826d695 <= dVar8) {
      dVar7 = *(double *)((longlong)&param_2->field0_0x0 + 8);
      dVar6 = local_118;
      if (dVar2 <= local_118) {
        dVar6 = dVar2;
      }
      if (local_100 <= dVar6) {
        dVar6 = local_100;
      }
      if (dVar6 <= dVar7 + __real_3e112e0be826d695) {
        dVar6 = local_118;
        if (local_118 <= dVar2) {
          dVar6 = dVar2;
        }
        if (dVar6 <= local_100) {
          dVar6 = local_100;
        }
        if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar10,SUB84(dVar7,0) ^ uVar9) -
            __real_3e112e0be826d695 <= dVar6) {
          dVar7 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
          dVar6 = local_110;
          if (dVar3 <= local_110) {
            dVar6 = dVar3;
          }
          if (local_f8 <= dVar6) {
            dVar6 = local_f8;
          }
          if (dVar6 <= dVar7 + __real_3e112e0be826d695) {
            dVar6 = local_110;
            if (local_110 <= dVar3) {
              dVar6 = dVar3;
            }
            if (dVar6 <= local_f8) {
              dVar6 = local_f8;
            }
            if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar10,SUB84(dVar7,0) ^ uVar9) -
                __real_3e112e0be826d695 <= dVar6) {
              local_d8._s_0.X = local_108 - local_120;
              local_f0._s_0.X = local_120 - dVar1;
              local_d8._s_0.Y = local_100 - local_118;
              local_f0._s_0.Y = local_118 - dVar2;
              local_c0[0]._0_8_ = dVar1 - local_108;
              local_c0[0]._8_8_ = dVar2 - local_100;
              local_d8._s_0.Z = local_f8 - local_110;
              local_c0[0]._16_8_ = dVar3 - local_f8;
              local_f0._s_0.Z = local_110 - dVar3;
              local_158._s_0.Z =
                   local_d8._s_0.Y * local_f0._s_0.X - local_d8._s_0.X * local_f0._s_0.Y;
              local_158._s_0.X =
                   local_d8._s_0.Z * local_f0._s_0.Y - local_d8._s_0.Y * local_f0._s_0.Z;
              local_158._s_0.Y =
                   local_d8._s_0.X * local_f0._s_0.Z - local_d8._s_0.Z * local_f0._s_0.X;
              local_138 = dVar1;
              local_130 = dVar2;
              local_128 = dVar3;
              UE::Math::TVector<double>::Normalize
                        ((TVector<double> *)&local_158._s_0,__real_3e45798ee0000000);
              dVar1 = dVar2 * local_158._s_0.Y + dVar1 * local_158._s_0.X + dVar3 * local_158._s_0.Z
              ;
              dVar7 = (double)CONCAT44((uint)((ulonglong)local_158._0_8_ >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_158._s_0.X,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                      (param_2->field0_0x0)._s_0.X +
                      (double)CONCAT44((uint)((ulonglong)local_158._8_8_ >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_158._s_0.Y,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                      (param_2->field0_0x0)._s_0.Y +
                      (double)CONCAT44((uint)((ulonglong)local_158._16_8_ >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_158._s_0.Z,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                      (param_2->field0_0x0)._s_0.Z;
              if ((dVar1 <= dVar7 + dVar4) &&
                 ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar10,SUB84(dVar7,0) ^ uVar9)
                  - dVar4 <= dVar1)) {
                local_158._s_0.X = (double)&local_138;
                local_158._s_0.Y = (double)&local_120;
                local_158._s_0.Z = (double)&local_108;
                local_140 = param_2;
                bVar5 = `WN_TriangleAABBOverlap'::__l2::<lambda_1>::operator()
                                  (&local_158,(TVector<double> *)&local_f0._s_0);
                if ((bVar5) &&
                   ((bVar5 = `WN_TriangleAABBOverlap'::__l2::<lambda_1>::operator()
                                       (&local_158,(TVector<double> *)&local_d8._s_0), bVar5 &&
                    (bVar5 = `WN_TriangleAABBOverlap'::__l2::<lambda_1>::operator()
                                       (&local_158,(TVector<double> *)&local_c0[0]._s_0), bVar5))))
                {
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// WN_UnregisterHiddenPrimitive @ 14a03bfe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
WN_UnregisterHiddenPrimitive
          (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UPrimitiveComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      WN_UnregisterHiddenPrimitive(*(UPrimitiveComponent **)pFVar3,param_2);
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// WN_UnregisterHiddenPrimitive @ 14a03c050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl WN_UnregisterHiddenPrimitive(UPrimitiveComponent *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  UWN_WorldUtils_Subsystem *pUVar5;
  int iVar6;
  bool bVar7;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [16];
  FPrimitiveComponentId local_res18 [2];
  FPrimitiveComponentId local_res20 [2];
  FPrimitiveComponentId local_48 [2];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_40;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("InComponent",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                       ,0x8b,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar5 = GWN_WorldUtilsSubsystem;
  if (GWN_WorldUtilsSubsystem != (UWN_WorldUtils_Subsystem *)0x0) {
    if (param_2) {
      if ((param_1 != (UPrimitiveComponent *)0x0) && ((param_1->field_0x98 & param_2) != 0)) {
        local_res18[0].PrimIDValue = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
        if (*(int *)&(GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs).Elements.field_0x8 !=
            *(int *)&(GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs).Elements.field_0x34) {
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          ::RemoveImpl<FPrimitiveComponentId>
                    (&GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs,local_res18[0].PrimIDValue,
                     local_res18);
        }
        local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_40.ArrayNum = 0;
        local_40.ArrayMax = 0;
        USceneComponent::GetChildrenComponents((USceneComponent *)param_1,true,&local_40);
        iVar6 = local_40.ArrayNum;
        pFVar1 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 8;
        FVar9.Data = local_40.AllocatorInstance.Data;
        while( true ) {
          if (local_40.ArrayNum != iVar6) {
            `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar9.Data == pFVar1) break;
          lVar3 = *(longlong *)FVar9.Data;
          if (lVar3 != 0) {
            pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
            iVar2 = (int)pUVar8->_padding_;
            if (((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
                 &pUVar8->_padding_)) && ((*(byte *)(lVar3 + 0x98) & 1) != 0)) {
              local_res20[0].PrimIDValue = *(uint *)(lVar3 + 0x344);
              if (*(int *)&(pUVar5->CustomHiddenPrimitiveIDs).Elements.field_0x8 !=
                  *(int *)&(pUVar5->CustomHiddenPrimitiveIDs).Elements.field_0x34) {
                TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                ::RemoveImpl<FPrimitiveComponentId>
                          (&pUVar5->CustomHiddenPrimitiveIDs,local_res20[0].PrimIDValue,local_res20)
                ;
              }
            }
          }
          FVar9.Data = FVar9.Data + 8;
        }
        if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.AllocatorInstance.Data);
          return;
        }
      }
    }
    else if ((param_1 != (UPrimitiveComponent *)0x0) && ((param_1->field_0x98 & 1) != 0)) {
      local_48[0].PrimIDValue = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
      if (*(int *)&(GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs).Elements.field_0x8 !=
          *(int *)&(GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs).Elements.field_0x34) {
        TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
        RemoveImpl<FPrimitiveComponentId>
                  (&GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs,local_48[0].PrimIDValue,
                   local_48);
      }
    }
  }
  return;
}

// WN_UnregisterHiddenPrimitives @ 14a03c1f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl WN_UnregisterHiddenPrimitives(TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar3 == pFVar1) break;
      WN_UnregisterHiddenPrimitives(*(AActor **)pFVar3);
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// WN_UnregisterHiddenPrimitives @ 14a03c260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl WN_UnregisterHiddenPrimitives(AActor *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  FPrimitiveComponentId local_f4;
  UClass *local_f0;
  UClass *local_e8;
  longlong local_e0 [24];
  longlong *local_20;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  if (param_1 == (AActor *)0x0) {
    return;
  }
  local_10 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar8 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_20 = (longlong *)0x0;
  local_18 = 0;
  local_14 = 0x18;
  pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) goto LAB_14a03c2fd;
  }
  else {
    pUVar9 = pUVar8;
    if (pUVar6 == (UClass *)0x0) goto LAB_14a03c2fd;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar9 = pUVar8;
  if (pUVar7 != (UClass *)0x0) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar9 = pUVar6;
    }
  }
LAB_14a03c2fd:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == pUVar8) {
    local_f0 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_f0,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e0);
  }
  else {
    local_e8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_e8,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e0);
  }
  iVar2 = local_18;
  plVar10 = local_e0;
  if (local_20 != (longlong *)0x0) {
    plVar10 = local_20;
  }
  plVar1 = plVar10 + local_18;
  while( true ) {
    if (local_18 != iVar2) {
      local_f8[0] = 0;
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_f8);
    }
    if (plVar10 == plVar1) break;
    lVar3 = *plVar10;
    if ((lVar3 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("InComponent",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                           ,0x8b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((((GWN_WorldUtilsSubsystem != (UWN_WorldUtils_Subsystem *)0x0) && (lVar3 != 0)) &&
        ((*(byte *)(lVar3 + 0x98) & 1) != 0)) &&
       (local_f4.PrimIDValue = *(uint *)(lVar3 + 0x344),
       *(int *)&(GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs).Elements.field_0x8 !=
       *(int *)&(GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs).Elements.field_0x34)) {
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      RemoveImpl<FPrimitiveComponentId>
                (&GWN_WorldUtilsSubsystem->CustomHiddenPrimitiveIDs,local_f4.PrimIDValue,&local_f4);
    }
    plVar10 = plVar10 + 1;
  }
  if (local_20 != (longlong *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// WN_VoxelTriangleIntersection @ 14a03c470

bool __cdecl
WN_VoxelTriangleIntersection
          (TVector<double> *param_1,TVector<double> *param_2,FWN_VoxelizeTriangleInfo *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar15;
  double dVar14;
  uint uVar16;
  uint uVar20;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  double local_168 [44];
  
  local_168[2] = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  dVar22 = (param_3->Normal).field0_0x0._s_0.Z;
  dVar18 = (param_3->Normal).field0_0x0._s_0.Y;
  uVar23 = (uint)__xmm_80000000000000008000000000000000;
  uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_168[5] = (double)CONCAT44((uint)((ulonglong)local_168[2] >> 0x20) ^ uVar24,
                                  SUB84(local_168[2],0) ^ uVar23);
  local_168[0xb] = local_168[5];
  local_168[0x11] = local_168[5];
  local_168[0x17] = local_168[5];
  local_168[1] = (param_2->field0_0x0)._s_0.Y;
  local_168[0] = (param_2->field0_0x0)._s_0.X;
  local_168[7] = (double)CONCAT44((uint)((ulonglong)local_168[1] >> 0x20) ^ uVar24,
                                  SUB84(local_168[1],0) ^ uVar23);
  local_168[0xc] =
       (double)CONCAT44((uint)((ulonglong)local_168[0] >> 0x20) ^ uVar24,
                        SUB84(local_168[0],0) ^ uVar23);
  local_168[10] = local_168[7];
  local_168[0x13] = local_168[7];
  local_168[0x16] = local_168[7];
  dVar12 = (param_1->field0_0x0)._s_0.Y;
  dVar9 = (param_3->V1).field0_0x0._s_0.Y - dVar12;
  dVar2 = (param_3->V0).field0_0x0._s_0.Y - dVar12;
  local_168[0xf] = local_168[0xc];
  local_168[0x12] = local_168[0xc];
  local_168[0x15] = local_168[0xc];
  dVar8 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_3->V0).field0_0x0._s_0.Z - dVar8;
  dVar10 = (param_3->V1).field0_0x0._s_0.Z - dVar8;
  local_168[8] = local_168[2];
  local_168[0xe] = local_168[2];
  local_168[0x14] = local_168[2];
  dVar11 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_3->V1).field0_0x0._s_0.X - dVar11;
  dVar4 = (param_3->V0).field0_0x0._s_0.X - dVar11;
  dVar11 = (param_3->V2).field0_0x0._s_0.X - dVar11;
  dVar14 = (param_3->Normal).field0_0x0._s_0.X;
  local_168[3] = local_168[0];
  local_168[4] = local_168[1];
  dVar12 = (param_3->V2).field0_0x0._s_0.Y - dVar12;
  local_168[6] = local_168[0];
  dVar8 = (param_3->V2).field0_0x0._s_0.Z - dVar8;
  local_168[9] = local_168[0];
  local_168[0xd] = local_168[1];
  local_168[0x10] = local_168[1];
  iVar6 = 4;
  if (0.0 <= dVar14) {
    iVar6 = 0;
  }
  iVar5 = 2;
  if (0.0 <= dVar18) {
    iVar5 = 0;
  }
  uVar7 = (ulonglong)(iVar6 + iVar5 + (uint)(dVar22 < 0.0));
  dVar13 = dVar18 * dVar2 + dVar14 * dVar4 + dVar22 * dVar1;
  dVar22 = dVar18 * local_168[uVar7 * 3 + 1] + dVar14 * local_168[uVar7 * 3] +
           dVar22 * local_168[uVar7 * 3 + 2];
  if ((double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    return false;
  }
  dVar22 = (param_3->E10).field0_0x0._s_0.Y;
  dVar18 = (param_3->E10).field0_0x0._s_0.Z;
  uVar25 = (uint)((ulonglong)dVar18 >> 0x20);
  uVar15 = (uint)((ulonglong)dVar22 >> 0x20);
  uVar16 = SUB84(dVar18,0) ^ uVar23;
  uVar20 = uVar25 ^ uVar24;
  if (__real_3c32725dd1d243ac <=
      dVar22 * dVar22 + (double)CONCAT44(uVar20,uVar16) * (double)CONCAT44(uVar20,uVar16)) {
    dVar14 = (double)CONCAT44(uVar20,uVar16) * dVar2 + dVar1 * dVar22;
    dVar21 = (double)CONCAT44(uVar20,uVar16) * dVar9 + dVar10 * dVar22;
    dVar13 = (double)CONCAT44(uVar20,uVar16) * dVar12 + dVar8 * dVar22;
    dVar19 = dVar21;
    if (dVar14 <= dVar21) {
      dVar19 = dVar14;
    }
    if (dVar13 <= dVar19) {
      dVar19 = dVar13;
    }
    dVar17 = (double)CONCAT44(uVar20 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * local_168[1]
             + (double)CONCAT44(uVar15 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
               (param_2->field0_0x0)._s_0.Z;
    if (dVar17 + __real_3e112e0be826d695 < dVar19) {
      return false;
    }
    if (dVar21 <= dVar14) {
      dVar21 = dVar14;
    }
    if (dVar21 <= dVar13) {
      dVar21 = dVar13;
    }
    if (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar24,
                                  SUB84(dVar17,0) ^ uVar23) - __real_3e112e0be826d695) {
      return false;
    }
  }
  dVar14 = (param_3->E10).field0_0x0._s_0.X;
  uVar26 = (uint)((ulonglong)dVar14 >> 0x20);
  uVar16 = SUB84(dVar14,0) ^ uVar23;
  uVar20 = uVar26 ^ uVar24;
  dVar13 = (double)CONCAT44(uVar20,uVar16);
  if (__real_3c32725dd1d243ac <= (double)CONCAT44(uVar20,uVar16) * dVar13 + dVar18 * dVar18) {
    dVar19 = dVar1 * dVar13 + dVar4 * dVar18;
    dVar13 = dVar10 * dVar13 + dVar3 * dVar18;
    dVar21 = (double)CONCAT44(uVar20,uVar16) * dVar8 + dVar11 * dVar18;
    dVar17 = dVar13;
    if (dVar19 <= dVar13) {
      dVar17 = dVar19;
    }
    dVar18 = (double)CONCAT44(uVar20 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             (param_2->field0_0x0)._s_0.Z +
             (double)CONCAT44(uVar25 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             local_168[0];
    if (dVar21 <= dVar17) {
      dVar17 = dVar21;
    }
    if (dVar18 + __real_3e112e0be826d695 < dVar17) {
      return false;
    }
    if (dVar13 <= dVar19) {
      dVar13 = dVar19;
    }
    if (dVar13 <= dVar21) {
      dVar13 = dVar21;
    }
    if (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar24,
                                  SUB84(dVar18,0) ^ uVar23) - __real_3e112e0be826d695) {
      return false;
    }
  }
  uVar16 = SUB84(dVar22,0) ^ uVar23;
  uVar15 = uVar15 ^ uVar24;
  if (__real_3c32725dd1d243ac <=
      dVar14 * dVar14 + (double)CONCAT44(uVar15,uVar16) * (double)CONCAT44(uVar15,uVar16)) {
    dVar22 = (double)CONCAT44(uVar15,uVar16) * dVar4 + dVar2 * dVar14;
    dVar19 = (double)CONCAT44(uVar15,uVar16) * dVar3 + dVar9 * dVar14;
    dVar18 = (double)CONCAT44(uVar15,uVar16) * dVar11 + dVar12 * dVar14;
    dVar13 = dVar19;
    if (dVar22 <= dVar19) {
      dVar13 = dVar22;
    }
    dVar14 = (double)CONCAT44(uVar15 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * local_168[0]
             + (double)CONCAT44(uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
               local_168[1];
    if (dVar18 <= dVar13) {
      dVar13 = dVar18;
    }
    if (dVar14 + __real_3e112e0be826d695 < dVar13) {
      return false;
    }
    if (dVar19 <= dVar22) {
      dVar19 = dVar22;
    }
    if (dVar19 <= dVar18) {
      dVar19 = dVar18;
    }
    if (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar24,
                                  SUB84(dVar14,0) ^ uVar23) - __real_3e112e0be826d695) {
      return false;
    }
  }
  dVar22 = (param_3->E21).field0_0x0._s_0.Y;
  dVar18 = (param_3->E21).field0_0x0._s_0.Z;
  uVar16 = (uint)((ulonglong)dVar22 >> 0x20);
  uVar15 = (uint)((ulonglong)dVar18 >> 0x20);
  uVar20 = SUB84(dVar18,0) ^ uVar23;
  uVar25 = uVar15 ^ uVar24;
  if (__real_3c32725dd1d243ac <=
      dVar22 * dVar22 + (double)CONCAT44(uVar25,uVar20) * (double)CONCAT44(uVar25,uVar20)) {
    dVar13 = dVar22 * dVar1 + (double)CONCAT44(uVar25,uVar20) * dVar2;
    dVar14 = dVar22 * dVar10 + (double)CONCAT44(uVar25,uVar20) * dVar9;
    dVar19 = dVar22 * dVar8 + (double)CONCAT44(uVar25,uVar20) * dVar12;
    dVar21 = dVar14;
    if (dVar13 <= dVar14) {
      dVar21 = dVar13;
    }
    dVar17 = (double)CONCAT44(uVar16 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             (param_2->field0_0x0)._s_0.Z +
             (double)CONCAT44(uVar25 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * local_168[1];
    if (dVar19 <= dVar21) {
      dVar21 = dVar19;
    }
    if (dVar17 + __real_3e112e0be826d695 < dVar21) {
      return false;
    }
    if (dVar14 <= dVar13) {
      dVar14 = dVar13;
    }
    if (dVar14 <= dVar19) {
      dVar14 = dVar19;
    }
    if (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar24,
                                  SUB84(dVar17,0) ^ uVar23) - __real_3e112e0be826d695) {
      return false;
    }
  }
  dVar14 = (param_3->E21).field0_0x0._s_0.X;
  uVar20 = (uint)((ulonglong)dVar14 >> 0x20);
  uVar25 = SUB84(dVar14,0) ^ uVar23;
  uVar26 = uVar20 ^ uVar24;
  if (__real_3c32725dd1d243ac <=
      dVar18 * dVar18 + (double)CONCAT44(uVar26,uVar25) * (double)CONCAT44(uVar26,uVar25)) {
    dVar19 = dVar18 * dVar4 + (double)CONCAT44(uVar26,uVar25) * dVar1;
    dVar13 = dVar18 * dVar3 + (double)CONCAT44(uVar26,uVar25) * dVar10;
    dVar21 = dVar18 * dVar11 + (double)CONCAT44(uVar26,uVar25) * dVar8;
    dVar17 = dVar13;
    if (dVar19 <= dVar13) {
      dVar17 = dVar19;
    }
    dVar18 = (double)CONCAT44(uVar15 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             local_168[0] +
             (double)CONCAT44(uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar25 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             (param_2->field0_0x0)._s_0.Z;
    if (dVar21 <= dVar17) {
      dVar17 = dVar21;
    }
    if (dVar18 + __real_3e112e0be826d695 < dVar17) {
      return false;
    }
    if (dVar13 <= dVar19) {
      dVar13 = dVar19;
    }
    if (dVar13 <= dVar21) {
      dVar13 = dVar21;
    }
    if (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar24,
                                  SUB84(dVar18,0) ^ uVar23) - __real_3e112e0be826d695) {
      return false;
    }
  }
  uVar15 = SUB84(dVar22,0) ^ uVar23;
  uVar16 = uVar16 ^ uVar24;
  if (__real_3c32725dd1d243ac <=
      (double)CONCAT44(uVar16,uVar15) * (double)CONCAT44(uVar16,uVar15) + dVar14 * dVar14) {
    dVar22 = (double)CONCAT44(uVar16,uVar15) * dVar4 + dVar14 * dVar2;
    dVar19 = (double)CONCAT44(uVar16,uVar15) * dVar3 + dVar14 * dVar9;
    dVar18 = (double)CONCAT44(uVar16,uVar15) * dVar11 + dVar14 * dVar12;
    dVar13 = dVar19;
    if (dVar22 <= dVar19) {
      dVar13 = dVar22;
    }
    dVar14 = (double)CONCAT44(uVar20 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             local_168[1] +
             (double)CONCAT44(uVar16 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * local_168[0];
    if (dVar18 <= dVar13) {
      dVar13 = dVar18;
    }
    if (dVar14 + __real_3e112e0be826d695 < dVar13) {
      return false;
    }
    if (dVar19 <= dVar22) {
      dVar19 = dVar22;
    }
    if (dVar19 <= dVar18) {
      dVar19 = dVar18;
    }
    if (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar24,
                                  SUB84(dVar14,0) ^ uVar23) - __real_3e112e0be826d695) {
      return false;
    }
  }
  dVar22 = (param_3->E02).field0_0x0._s_0.Y;
  dVar18 = (param_3->E02).field0_0x0._s_0.Z;
  uVar20 = (uint)((ulonglong)dVar22 >> 0x20);
  uVar25 = (uint)((ulonglong)dVar18 >> 0x20);
  uVar15 = SUB84(dVar18,0) ^ uVar23;
  uVar16 = uVar25 ^ uVar24;
  if (__real_3c32725dd1d243ac <=
      dVar22 * dVar22 + (double)CONCAT44(uVar16,uVar15) * (double)CONCAT44(uVar16,uVar15)) {
    dVar13 = (double)CONCAT44(uVar16,uVar15) * dVar2 + dVar22 * dVar1;
    dVar14 = (double)CONCAT44(uVar16,uVar15) * dVar9 + dVar22 * dVar10;
    dVar19 = (double)CONCAT44(uVar16,uVar15) * dVar12 + dVar22 * dVar8;
    dVar21 = dVar14;
    if (dVar13 <= dVar14) {
      dVar21 = dVar13;
    }
    if (dVar19 <= dVar21) {
      dVar21 = dVar19;
    }
    dVar17 = (double)CONCAT44(uVar16 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * local_168[1]
             + (double)CONCAT44(uVar20 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
               (param_2->field0_0x0)._s_0.Z;
    if (dVar17 + __real_3e112e0be826d695 < dVar21) {
      return false;
    }
    if (dVar14 <= dVar13) {
      dVar14 = dVar13;
    }
    if (dVar14 <= dVar19) {
      dVar14 = dVar19;
    }
    if (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar24,
                                  SUB84(dVar17,0) ^ uVar23) - __real_3e112e0be826d695) {
      return false;
    }
  }
  dVar14 = (param_3->E02).field0_0x0._s_0.X;
  uVar15 = (uint)((ulonglong)dVar14 >> 0x20);
  uVar16 = SUB84(dVar14,0) ^ uVar23;
  uVar26 = uVar15 ^ uVar24;
  if (__real_3c32725dd1d243ac <=
      dVar18 * dVar18 + (double)CONCAT44(uVar26,uVar16) * (double)CONCAT44(uVar26,uVar16)) {
    dVar13 = dVar18 * dVar4 + (double)CONCAT44(uVar26,uVar16) * dVar1;
    dVar1 = dVar18 * dVar3 + (double)CONCAT44(uVar26,uVar16) * dVar10;
    dVar8 = dVar18 * dVar11 + (double)CONCAT44(uVar26,uVar16) * dVar8;
    dVar10 = dVar1;
    if (dVar13 <= dVar1) {
      dVar10 = dVar13;
    }
    dVar18 = (double)CONCAT44(uVar25 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             local_168[0] +
             (double)CONCAT44(uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             (param_2->field0_0x0)._s_0.Z;
    if (dVar8 <= dVar10) {
      dVar10 = dVar8;
    }
    if (dVar18 + __real_3e112e0be826d695 < dVar10) {
      return false;
    }
    if (dVar1 <= dVar13) {
      dVar1 = dVar13;
    }
    if (dVar1 <= dVar8) {
      dVar1 = dVar8;
    }
    if (dVar1 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar24,SUB84(dVar18,0) ^ uVar23
                                ) - __real_3e112e0be826d695) {
      return false;
    }
  }
  uVar16 = SUB84(dVar22,0) ^ uVar23;
  uVar20 = uVar20 ^ uVar24;
  if ((double)CONCAT44(uVar20,uVar16) * (double)CONCAT44(uVar20,uVar16) + dVar14 * dVar14 <
      __real_3c32725dd1d243ac) {
    return true;
  }
  dVar22 = dVar14 * dVar2 + (double)CONCAT44(uVar20,uVar16) * dVar4;
  dVar8 = dVar14 * dVar9 + (double)CONCAT44(uVar20,uVar16) * dVar3;
  dVar18 = dVar14 * dVar12 + (double)CONCAT44(uVar20,uVar16) * dVar11;
  dVar12 = dVar8;
  if (dVar22 <= dVar8) {
    dVar12 = dVar22;
  }
  dVar11 = (double)CONCAT44(uVar15 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           local_168[1] +
           (double)CONCAT44(uVar20 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) * local_168[0];
  if (dVar18 <= dVar12) {
    dVar12 = dVar18;
  }
  if (dVar12 <= dVar11 + __real_3e112e0be826d695) {
    if (dVar8 <= dVar22) {
      dVar8 = dVar22;
    }
    if (dVar8 <= dVar18) {
      dVar8 = dVar18;
    }
    if ((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar24,SUB84(dVar11,0) ^ uVar23) -
        __real_3e112e0be826d695 <= dVar8) {
      return true;
    }
  }
  return false;
}

// WN_Voxelize @ 14a03ce50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           ULandscapeHeightfieldCollisionComponent *param_1,TBox<double> *param_2,double param_3,
           TBox<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  code *pcVar8;
  ulonglong uVar9;
  bool bVar10;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  FHeightField *pFVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  TArray<int,TSizedDefaultAllocator<32>_> local_138;
  int local_128;
  int local_124;
  uint local_120;
  int local_11c;
  int local_118;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_110;
  FHeightField *local_100;
  TTransform<double> local_f8;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  
  pFVar19 = (((param_1->HeightfieldRef).Reference)->HeightfieldGeometry).Reference;
  uVar5 = (pFVar19->GeomData).NumCols;
  uVar6 = (pFVar19->GeomData).NumRows;
  local_120 = (uint)uVar5;
  iVar20 = uVar5 - 1;
  iVar13 = uVar6 - 1;
  iVar15 = uVar6 * local_120;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  local_11c = iVar20;
  local_118 = iVar13;
  local_100 = pFVar19;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_110,iVar15,Default);
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar17 = iVar20 * iVar13;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  uVar12 = iVar17 * 6;
  local_124 = iVar17;
  if ((int)uVar12 < 1) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&local_138.AllocatorInstance,&local_138.ArrayNum,&local_138.ArrayMax);
  }
  uVar12 = 0;
  if (0 < iVar15) {
    lVar23 = 0;
    lVar14 = 0;
    do {
      uVar16 = ~uVar12 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar12 < (pFVar19->GeomData).Heights.ArrayNum) {
        uVar21 = uVar16;
      }
      if ((uVar21 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar11;
      }
      uVar22 = (uint)(pFVar19->GeomData).NumCols;
      uVar5 = *(ushort *)((pFVar19->GeomData).Heights.AllocatorInstance.Data + lVar23 * 2);
      dVar1 = *(double *)&(pFVar19->GeomData).Scale.field_0x8;
      dVar2 = *(double *)&(pFVar19->GeomData).Scale;
      uVar21 = 0;
      if ((int)uVar12 < local_110.ArrayNum) {
        uVar21 = uVar16;
      }
      dVar3 = (pFVar19->GeomData).HeightPerUnit;
      dVar4 = (pFVar19->GeomData).MinValue;
      dVar31 = *(double *)&(pFVar19->GeomData).Scale.field_0x10;
      if ((uVar21 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar11;
      }
      *(double *)(local_110.AllocatorInstance.Data + lVar14) =
           (double)(float)((double)((int)uVar12 % (int)uVar22) * dVar2);
      *(double *)(local_110.AllocatorInstance.Data + lVar14 + 8) =
           (double)(float)((double)((int)uVar12 / (int)uVar22) * dVar1);
      *(double *)(local_110.AllocatorInstance.Data + lVar14 + 0x10) =
           (double)(float)(((double)uVar5 * dVar3 + dVar4) * dVar31);
      dVar1 = *(double *)&param_1->field_0x120;
      dVar2 = *(double *)&param_1->field_0x138;
      uVar21 = 0;
      if ((int)uVar12 < local_110.ArrayNum) {
        uVar21 = uVar16;
      }
      if ((uVar21 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar11;
      }
      local_88 = *(double *)&param_1->field_0x220;
      local_98 = *(undefined8 *)&param_1->field_0x210;
      uStack_90 = *(undefined8 *)&param_1->field_0x218;
      if (local_88 + *(double *)(local_110.AllocatorInstance.Data + lVar14 + 0x10) < dVar1 - dVar2)
      {
        local_128 = 0;
      }
      uVar12 = uVar12 + 1;
      lVar23 = lVar23 + 1;
      lVar14 = lVar14 + 0x18;
      iVar20 = local_11c;
      iVar13 = local_118;
      iVar17 = local_124;
    } while (lVar23 < iVar15);
  }
  local_128 = (pFVar19->GeomData).MaterialIndices.ArrayNum;
  if (((1 < local_128) && (local_128 != iVar17)) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("!bHasMaterialIndices || (numMaterialIndices == (rowBounds * colBounds))",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_VoxelizeUtils.cpp"
                          ,0x6c,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar11;
  }
  uVar12 = 0;
  local_124 = 0;
  if (0 < iVar13) {
    lVar14 = 0;
    do {
      iVar17 = local_124;
      if (0 < iVar20) {
        iVar15 = local_124 * local_120;
        iVar18 = -iVar15;
        do {
          bVar10 = false;
          if (1 < local_128) {
            uVar16 = iVar20 * iVar17 + iVar18 + iVar15;
            uVar21 = 0;
            if ((int)uVar16 < (pFVar19->GeomData).MaterialIndices.ArrayNum) {
              uVar21 = ~uVar16 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            bVar10 = (pFVar19->GeomData).MaterialIndices.AllocatorInstance.Data[(int)uVar16] ==
                     (FScriptContainerElement)0xff;
          }
          uVar21 = ~uVar12 >> 0x1f;
          if (bVar10) {
            uVar16 = 0;
            if ((int)uVar12 < local_138.ArrayNum) {
              uVar16 = uVar21;
            }
            if ((uVar16 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            *(int *)(local_138.AllocatorInstance.Data + lVar14 * 4) = iVar15;
            uVar16 = 0;
            if ((int)uVar12 < local_138.ArrayNum) {
              uVar16 = uVar21;
            }
            if (uVar16 == 0) {
              bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar11;
              }
            }
            uVar7 = *(undefined4 *)(local_138.AllocatorInstance.Data + lVar14 * 4);
            uVar16 = 0;
            if ((int)(uVar12 + 1) < local_138.ArrayNum) {
              uVar16 = ~(uVar12 + 1) >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            *(undefined4 *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 4) = uVar7;
            uVar16 = 0;
            if ((int)uVar12 < local_138.ArrayNum) {
              uVar16 = uVar21;
            }
            if (uVar16 == 0) {
              bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar11;
              }
            }
            uVar7 = *(undefined4 *)(local_138.AllocatorInstance.Data + lVar14 * 4);
            uVar21 = 0;
            if ((int)(uVar12 + 2) < local_138.ArrayNum) {
              uVar21 = ~(uVar12 + 2) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            uVar16 = uVar12 + 3;
            *(undefined4 *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 8) = uVar7;
            uVar22 = ~uVar16 >> 0x1f;
            uVar21 = 0;
            if ((int)uVar16 < local_138.ArrayNum) {
              uVar21 = uVar22;
            }
            if ((uVar21 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            *(int *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 0xc) = iVar15;
            uVar21 = 0;
            if ((int)uVar16 < local_138.ArrayNum) {
              uVar21 = uVar22;
            }
            if (uVar21 == 0) {
              bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar11;
              }
            }
            uVar7 = *(undefined4 *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 0xc);
            uVar21 = 0;
            if ((int)(uVar12 + 4) < local_138.ArrayNum) {
              uVar21 = ~(uVar12 + 4) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            *(undefined4 *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 0x10) = uVar7;
            uVar21 = 0;
            if ((int)uVar16 < local_138.ArrayNum) {
              uVar21 = uVar22;
            }
            if (uVar21 == 0) {
              bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar11;
              }
            }
            uVar7 = *(undefined4 *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 0xc);
            uVar21 = 0;
            if ((int)(uVar12 + 5) < local_138.ArrayNum) {
              uVar21 = ~(uVar12 + 5) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            *(undefined4 *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 0x14) = uVar7;
            iVar17 = local_124;
          }
          else {
            uVar16 = 0;
            if ((int)uVar12 < local_138.ArrayNum) {
              uVar16 = uVar21;
            }
            if ((uVar16 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            *(int *)(local_138.AllocatorInstance.Data + lVar14 * 4) = iVar15;
            uVar21 = 0;
            if ((int)(uVar12 + 1) < local_138.ArrayNum) {
              uVar21 = ~(uVar12 + 1) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            uVar21 = local_120;
            *(uint *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 4) =
                 (iVar17 + 1) * local_120 + 1 + iVar18 + iVar15;
            uVar16 = 0;
            if ((int)(uVar12 + 2) < local_138.ArrayNum) {
              uVar16 = ~(uVar12 + 2) >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            *(int *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 8) = iVar15 + 1;
            uVar16 = 0;
            if ((int)(uVar12 + 3) < local_138.ArrayNum) {
              uVar16 = ~(uVar12 + 3) >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            *(int *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 0xc) = iVar15;
            uVar16 = 0;
            if ((int)(uVar12 + 4) < local_138.ArrayNum) {
              uVar16 = ~(uVar12 + 4) >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            iVar20 = uVar21 * (iVar17 + 1) + iVar18 + iVar15;
            *(int *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 0x10) = iVar20;
            uVar21 = 0;
            if ((int)(uVar12 + 5) < local_138.ArrayNum) {
              uVar21 = ~(uVar12 + 5) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar11;
            }
            *(int *)(local_138.AllocatorInstance.Data + lVar14 * 4 + 0x14) = iVar20 + 1;
          }
          lVar14 = lVar14 + 6;
          iVar15 = iVar15 + 1;
          uVar12 = uVar12 + 6;
          pFVar19 = local_100;
          iVar20 = local_11c;
          iVar13 = local_118;
        } while (iVar18 + iVar15 < local_11c);
      }
      local_124 = iVar17 + 1;
    } while (local_124 < iVar13);
  }
  dVar1 = *(double *)&param_1->field_0x1f0;
  dVar2 = *(double *)&param_1->field_0x1f8;
  dVar3 = *(double *)&param_1->field_0x200;
  dVar4 = *(double *)&param_1->field_0x208;
  local_f8.Translation.XY.m128d_f64[0] = *(double *)&param_1->field_0x210;
  local_f8.Translation.XY.m128d_f64[1] = *(double *)&param_1->field_0x218;
  local_f8.Translation.ZW.m128d_f64[0] = *(double *)&param_1->field_0x220;
  local_f8.Translation.ZW.m128d_f64[1] = *(double *)&param_1->field_0x228;
  local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  auVar35._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
  auVar35._0_8_ = auVar35._8_8_;
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  dVar31 = dVar1 * dVar1 + dVar3 * dVar3;
  dVar34 = dVar2 * dVar2 + dVar4 * dVar4;
  auVar28._8_4_ = SUB84(dVar34,0);
  auVar28._0_8_ = dVar31;
  auVar28._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar29._0_8_ = auVar28._8_8_ + dVar31;
  auVar29._8_8_ = dVar31 + dVar34;
  auVar36 = sqrtpd(auVar35,auVar29);
  uVar24 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar29._0_8_);
  uVar26 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar29._8_8_);
  uVar25 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar29._0_8_);
  uVar27 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar29._8_8_);
  auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
  auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
  auVar33._0_8_ = uVar24 & (ulonglong)(auVar32._0_8_ * dVar1);
  uVar9 = uVar26 & (ulonglong)(auVar32._8_8_ * dVar2);
  auVar33._8_4_ = (undefined4)uVar9;
  auVar33._12_4_ = (undefined4)(uVar9 >> 0x20);
  auVar30._0_8_ = uVar25 & (ulonglong)(auVar36._0_8_ * dVar3);
  uVar9 = uVar27 & (ulonglong)(auVar36._8_8_ * dVar4);
  auVar30._8_4_ = (undefined4)uVar9;
  auVar30._12_4_ = (undefined4)(uVar9 >> 0x20);
  auVar36._4_4_ = ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar36._0_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar36._8_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar36._12_4_ = ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  local_f8.Rotation.XY.m128d_f64 = (double  [2])(auVar33 | auVar36);
  auVar32._4_4_ = ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar32._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar32._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar32._12_4_ = ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  local_f8.Rotation.ZW.m128d_f64 = (double  [2])(auVar30 | auVar32);
  WN_VoxelizeImpl(__return_storage_ptr__,&local_110,&local_138,local_138.ArrayNum / 3,param_3,
                  &local_f8,param_2,param_4);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03d970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           UPrimitiveComponent *param_1,TBox<double> *param_2,double param_3,TBox<double> *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  UObject *pUVar5;
  UStaticMesh *this;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  UClass *pUVar13;
  FStaticMeshRenderData *pFVar14;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar15;
  byte *pbVar16;
  FKShapeElem *pFVar17;
  FString *pFVar18;
  longlong lVar19;
  uint uVar20;
  float *pfVar21;
  ulonglong uVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  uint uVar25;
  ulonglong uVar27;
  undefined1 auStackY_1e8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_198;
  uint local_188 [2];
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *local_180;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_178;
  TBox<double> *local_168;
  TBox<double> *local_160;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_150;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  undefined1 local_100 [56];
  TTransform<double> local_c8;
  ulonglong local_68;
  ulonglong uVar26;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_160 = param_4;
  uVar22 = 0;
  local_180 = __return_storage_ptr__;
  local_168 = param_2;
  lVar12 = (**(code **)(*(longlong *)param_1 + 0x800))(param_1);
  local_c8.Rotation.XY.m128d_f64[0] = *(double *)&param_1->field_0x1f0;
  local_c8.Rotation.XY.m128d_f64[1] = *(double *)&param_1->field_0x1f8;
  local_c8.Rotation.ZW.m128d_f64[0] = *(double *)&param_1->field_0x200;
  local_c8.Rotation.ZW.m128d_f64[1] = *(double *)&param_1->field_0x208;
  local_c8.Translation.XY.m128d_f64[0] = *(double *)&param_1->field_0x210;
  local_c8.Translation.XY.m128d_f64[1] = *(double *)&param_1->field_0x218;
  local_c8.Translation.ZW.m128d_f64[0] = *(double *)&param_1->field_0x220;
  local_c8.Translation.ZW.m128d_f64[1] = *(double *)&param_1->field_0x228;
  local_c8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&param_1->field_0x230;
  local_c8.Scale3D.XY.m128d_f64[0]._4_4_ = *(undefined4 *)&param_1->field_0x234;
  local_c8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&param_1->field_0x238;
  local_c8.Scale3D.XY.m128d_f64[1]._4_4_ = *(undefined4 *)&param_1->field_0x23c;
  local_c8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)&param_1->field_0x240;
  local_c8.Scale3D.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)&param_1->field_0x244;
  local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&param_1->field_0x248;
  local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)&param_1->field_0x24c;
  (**(code **)(*(longlong *)param_1 + 0x598))(param_1,local_100);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  cVar3 = *(char *)(lVar12 + 0x31);
  if (cVar3 == '\0') {
    pUVar13 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar13);
    }
    pUVar5 = (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar5 == (UObject *)0x0) {
      pFVar18 = GetTypeName<UPhysicsSettings>(&local_130);
      if ((pFVar18->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar24);
    }
    pUVar13 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    iVar10 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar13->_padding_)) {
      pFVar18 = GetTypeName<UPhysicsSettings>(&local_120);
      pwVar24 = L"";
      if ((pFVar18->Data).ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
      }
      pFVar18 = GetFullNameForCastLogError<UObject>(&local_110,pUVar5);
      if ((pFVar18->Data).ArrayNum != 0) {
        pwVar24 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar24,pwVar23);
    }
    cVar3 = pUVar5[2].field_0x25;
  }
  if (cVar3 == '\x03') {
    pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar10 = (int)pUVar13->_padding_;
    if (((iVar10 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
         &pUVar13->_padding_)) && (param_1 != (UPrimitiveComponent *)0x0)) {
      this = *(UStaticMesh **)&param_1[1].field_0x50;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this == (UStaticMesh *)0x0) {
          return __return_storage_ptr__;
        }
      }
      else {
        if (this == (UStaticMesh *)0x0) {
          return __return_storage_ptr__;
        }
        UE::GC::MarkAsReachable((UObject *)this);
      }
      pFVar14 = UStaticMesh::GetRenderData(this);
      if ((pFVar14 != (FStaticMeshRenderData *)0x0) &&
         (pFVar14 = UStaticMesh::GetRenderData(this), (pFVar14->LODResources).Array.ArrayNum != 0))
      {
        pFVar14 = UStaticMesh::GetRenderData(this);
        if (((pFVar14->LODResources).Array.ArrayNum < 1) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar15;
        }
        lVar12 = *(longlong *)(pFVar14->LODResources).Array.AllocatorInstance.Data;
        uVar20 = *(uint *)(lVar12 + 0x1cc);
        local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.ArrayNum = 0;
        local_178.ArrayMax = 0;
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        uVar27 = uVar22;
        if (0 < (int)uVar20) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar20,&local_178.AllocatorInstance,0,&local_178.ArrayMax);
          uVar27 = (ulonglong)(uint)local_178.ArrayNum;
        }
        uVar26 = uVar22;
        if (uVar20 != 0) {
          while( true ) {
            pfVar21 = (float *)((ulonglong)(uint)((int)uVar26 * *(int *)(lVar12 + 0x1c8)) +
                               *(longlong *)(lVar12 + 0x1c0));
            iVar10 = (int)uVar27;
            if (iVar10 == local_178.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_178.AllocatorInstance,&local_178.ArrayMax);
            }
            local_178.ArrayNum = iVar10 + 1;
            uVar25 = (int)uVar26 + 1;
            uVar26 = (ulonglong)uVar25;
            uVar2 = *(undefined8 *)(pfVar21 + 1);
            dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
            *(double *)(local_178.AllocatorInstance.Data + (longlong)iVar10 * 0x18) =
                 (double)*pfVar21;
            auVar7._8_4_ = SUB84(dVar8,0);
            auVar7._0_8_ = (double)(float)uVar2;
            auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])(local_178.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 8) =
                 auVar7;
            if (uVar20 <= uVar25) break;
            uVar27 = (ulonglong)(uint)local_178.ArrayNum;
          }
        }
        uVar20 = *(uint *)(lVar12 + 0x270);
        if ((int)uVar20 < 0) {
          iVar10 = *(int *)(lVar12 + 0x260);
          if (*(char *)(lVar12 + 0x274) == '\0') {
            uVar20 = iVar10 / 2;
          }
          else {
            uVar20 = (int)((iVar10 >> 0x1f & 3U) + iVar10) >> 2;
          }
          local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.ArrayNum = 0;
          local_198.ArrayMax = 0;
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
          }
        }
        local_198.ArrayNum = 0;
        local_198.ArrayMax = 0;
        local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (uVar20 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar20,&local_198.AllocatorInstance,0,&local_198.ArrayMax);
        }
        if (uVar20 != 0) {
          pbVar1 = (byte *)(lVar12 + 600);
          uVar27 = uVar22;
          do {
            if ((*(uint *)(lVar12 + 0x260) <= (uint)uVar22) &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("At >= 0 && At < (uint32)IndexStorage.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RawIndexBuffer.h"
                                   ,0xc6,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar15;
            }
            pbVar16 = *(byte **)pbVar1;
            if (*(char *)(lVar12 + 0x274) == '\0') {
              if ((*pbVar1 & 1) != 0) {
                pbVar16 = pbVar1 + ((longlong)pbVar16 >> 0x18);
              }
              local_188[0] = (uint)*(ushort *)(pbVar16 + uVar27 * 2);
            }
            else {
              if ((*pbVar1 & 1) != 0) {
                pbVar16 = pbVar1 + ((longlong)pbVar16 >> 0x18);
              }
              local_188[0] = *(uint *)(pbVar16 + uVar27 * 4);
            }
            if (((local_198.AllocatorInstance.Data <= (FScriptContainerElement *)local_188) &&
                ((FScriptContainerElement *)local_188 <
                 local_198.AllocatorInstance.Data + (longlong)local_198.ArrayMax * 4)) &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar15;
            }
            if (local_198.ArrayNum == local_198.ArrayMax) {
              local_198.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_198.AllocatorInstance,&local_198.ArrayMax);
            }
            lVar19 = (longlong)local_198.ArrayNum;
            uVar22 = (ulonglong)((uint)uVar22 + 1);
            uVar27 = uVar27 + 1;
            local_198.ArrayNum = local_198.ArrayNum + 1;
            *(uint *)(local_198.AllocatorInstance.Data + lVar19 * 4) = local_188[0];
            __return_storage_ptr__ = local_180;
          } while ((longlong)uVar27 < (longlong)(ulonglong)uVar20);
        }
        pTVar15 = WN_VoxelizeImpl(&local_150,&local_178,&local_198,local_198.ArrayNum / 3,param_3,
                                  &local_c8,local_168,local_160);
        TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::
        Append<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>
                  (__return_storage_ptr__,pTVar15);
        if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.AllocatorInstance.Data);
        }
        if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.AllocatorInstance.Data);
        }
        if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    iVar10 = *(int *)(lVar12 + 0xc0) + *(int *)(lVar12 + 0xb0) + *(int *)(lVar12 + 0xa0) +
             *(int *)(lVar12 + 0x90) + *(int *)(lVar12 + 0x80) + *(int *)(lVar12 + 0x70) +
             *(int *)(lVar12 + 0x60) + *(int *)(lVar12 + 0x50) + *(int *)(lVar12 + 0x40);
    if (0 < iVar10) {
      do {
        pFVar17 = FKAggregateGeom::GetElement((FKAggregateGeom *)(lVar12 + 0x38),(int)uVar22);
        pTVar15 = WN_Voxelize(&local_140,pFVar17,&local_c8,param_3,param_2,param_4);
        if ((local_180 == pTVar15) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar15;
        }
        iVar4 = pTVar15->ArrayNum;
        if (iVar4 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,iVar4,&local_180->AllocatorInstance,&local_180->ArrayNum,
                              &local_180->ArrayMax);
          memmove((local_180->AllocatorInstance).Data + (longlong)iVar11 * 0xc,
                  (pTVar15->AllocatorInstance).Data,(longlong)iVar4 * 0xc);
          pTVar15->ArrayNum = 0;
        }
        if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.AllocatorInstance.Data);
        }
        uVar20 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar20;
        __return_storage_ptr__ = local_180;
        param_2 = local_168;
        param_4 = local_160;
      } while ((int)uVar20 < iVar10);
    }
  }
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03e020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           FKBoxElem *param_1,TTransform<double> *param_2,double param_3,TBox<double> *param_4,
           TBox<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  TQuat<double> *pTVar20;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStackY_2f8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2a8 [2];
  TQuat<double> local_288;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (FKBoxElem *)0x0) {
    pTVar20 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,&local_288);
    local_148.Translation.XY.m128d_f64[0] = (param_1->Center).field0_0x0._s_0.X;
    local_148.Translation.XY.m128d_f64[1] = (param_1->Center).field0_0x0._s_0.Y;
    local_148.Rotation.ZW.m128d_f64[0] = pTVar20->Z;
    local_148.Rotation.ZW.m128d_f64[1] = pTVar20->W;
    local_148.Rotation.XY.m128d_f64[0] = pTVar20->X;
    local_148.Rotation.XY.m128d_f64[1] = pTVar20->Y;
    local_148.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_148.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_148.Translation.ZW.m128d_f64[0] = (param_1->Center).field0_0x0._s_0.Z;
    local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_148.Translation.ZW.m128d_f64[1] = 0.0;
    local_148.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_148.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_1a8,&local_148,param_2);
    dStack_260 = (double)param_1->Y * __real_3fe0000000000000;
    local_258 = (double)param_1->Z * __real_3fe0000000000000;
    local_268 = (double)param_1->X * __real_3fe0000000000000;
    uVar22 = (uint)__xmm_80000000000000008000000000000000;
    uVar24 = SUB84(local_258,0) ^ uVar22;
    uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar25 = (uint)((ulonglong)local_258 >> 0x20) ^ uVar23;
    dStack_230 = (double)CONCAT44((uint)((ulonglong)dStack_260 >> 0x20) ^ uVar23,
                                  SUB84(dStack_260,0) ^ uVar22);
    dStack_240 = (double)CONCAT44(uVar25,uVar24);
    local_208 = (double)CONCAT44((uint)((ulonglong)local_268 >> 0x20) ^ uVar23,
                                 SUB84(local_268,0) ^ uVar22);
    dStack_210 = (double)CONCAT44(uVar25,uVar24);
    dStack_1e0 = (double)CONCAT44(uVar25,uVar24);
    dStack_1b0 = (double)CONCAT44(uVar25,uVar24);
    local_2a8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8[0].ArrayNum = 8;
    dStack_250 = local_268;
    local_248 = dStack_260;
    local_238 = local_268;
    local_228 = local_258;
    dStack_220 = local_268;
    local_218 = dStack_230;
    dStack_200 = dStack_260;
    local_1f8 = local_258;
    dStack_1f0 = local_208;
    local_1e8 = dStack_260;
    local_1d8 = local_208;
    dStack_1d0 = dStack_230;
    local_1c8 = local_258;
    dStack_1c0 = local_208;
    local_1b8 = dStack_230;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,8,0,&local_2a8[0].AllocatorInstance,8,&local_2a8[0].ArrayMax);
    uVar19 = _UNK_152044638;
    uVar18 = ___xmm_00000007000000050000000600000002;
    uVar17 = _UNK_152044628;
    uVar16 = ___xmm_00000007000000030000000600000006;
    uVar15 = _UNK_152044618;
    uVar14 = ___xmm_00000005000000040000000500000007;
    uVar13 = _UNK_152044608;
    uVar12 = ___xmm_00000004000000040000000700000006;
    uVar11 = _UNK_1520445f8;
    uVar10 = ___xmm_00000004000000040000000200000000;
    uVar9 = _UNK_1520445e8;
    uVar8 = ___xmm_00000003000000070000000100000001;
    uVar7 = _UNK_1520445d8;
    uVar6 = ___xmm_00000002000000020000000100000000;
    uVar5 = _UNK_1520445c8;
    uVar4 = ___xmm_00000001000000050000000000000000;
    uVar3 = _UNK_150b28828;
    uVar2 = ___xmm_00000003000000020000000300000001;
    *(double *)local_2a8[0].AllocatorInstance.Data = local_268;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 8) = dStack_260;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x10) = local_258;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x18) = dStack_250;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x20) = local_248;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x28) = dStack_240;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x30) = local_238;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x38) = dStack_230;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x40) = local_228;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x48) = dStack_220;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x50) = local_218;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x58) = dStack_210;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x60) = local_208;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x68) = dStack_200;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x70) = local_1f8;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x78) = dStack_1f0;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x80) = local_1e8;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x88) = dStack_1e0;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x90) = local_1d8;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0x98) = dStack_1d0;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0xa0) = local_1c8;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0xa8) = dStack_1c0;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0xb0) = local_1b8;
    *(double *)(local_2a8[0].AllocatorInstance.Data + 0xb8) = dStack_1b0;
    local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.ArrayNum = 0x24;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x24,0,&local_2b8.AllocatorInstance,0x24,&local_2b8.ArrayMax);
    *(undefined8 *)local_2b8.AllocatorInstance.Data = uVar6;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 8) = uVar7;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x10) = uVar2;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x18) = uVar3;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x20) = uVar16;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x28) = uVar17;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x30) = uVar12;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x38) = uVar13;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x40) = uVar14;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x48) = uVar15;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x50) = uVar4;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x58) = uVar5;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x60) = uVar10;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x68) = uVar11;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x70) = uVar18;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x78) = uVar19;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x80) = uVar8;
    *(undefined8 *)(local_2b8.AllocatorInstance.Data + 0x88) = uVar9;
    pTVar21 = WN_VoxelizeImpl((TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                              &local_288,local_2a8,&local_2b8,0xc,param_3,&local_1a8,param_4,param_5
                             );
    if (__return_storage_ptr__ != pTVar21) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar21->AllocatorInstance).Data;
      (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar21->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar21->ArrayMax;
      pTVar21->ArrayNum = 0;
      pTVar21->ArrayMax = 0;
    }
    if ((void *)local_288.X != (void *)0x0) {
      FMemory::Free((void *)local_288.X);
    }
    if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.AllocatorInstance.Data);
    }
    if (local_2a8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8[0].AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03e4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           FKConvexElem *param_1,TTransform<double> *param_2,double param_3,TBox<double> *param_4,
           TBox<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auStackY_168 [32];
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_120;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (FKConvexElem *)0x0) {
    local_a8.Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
    local_a8.Rotation.XY.m128d_f64[1] = (param_1->Transform).Rotation.XY.m128d_f64[1];
    local_a8.Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
    local_a8.Rotation.ZW.m128d_f64[1] = (param_1->Transform).Rotation.ZW.m128d_f64[1];
    local_a8.Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
    local_a8.Translation.XY.m128d_f64[1] = (param_1->Transform).Translation.XY.m128d_f64[1];
    local_a8.Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
    local_a8.Translation.ZW.m128d_f64[1] = (param_1->Transform).Translation.ZW.m128d_f64[1];
    local_a8.Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
    local_a8.Scale3D.XY.m128d_f64[1] = (param_1->Transform).Scale3D.XY.m128d_f64[1];
    local_a8.Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
    local_a8.Scale3D.ZW.m128d_f64[1] = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_108,&local_a8,param_2);
    pTVar2 = WN_VoxelizeImpl(&local_120,&param_1->VertexData,&param_1->IndexData,
                             (param_1->IndexData).ArrayNum / 3,param_3,&local_108,param_4,param_5);
    if (__return_storage_ptr__ != pTVar2) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar2->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar2->ArrayMax;
      pTVar2->ArrayNum = 0;
      pTVar2->ArrayMax = 0;
    }
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03e690

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           FKLevelSetElem *param_1,TTransform<double> *param_2,double param_3,TBox<double> *param_4,
           TBox<double> *param_5)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03e6b0

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           FKMLLevelSetElem *param_1,TTransform<double> *param_2,double param_3,
           TBox<double> *param_4,TBox<double> *param_5)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03e6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           FKShapeElem *param_1,TTransform<double> *param_2,double param_3,TBox<double> *param_4,
           TBox<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  undefined1 auStackY_1d8 [32];
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_198;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_180;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_170;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_160;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_150;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_140;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar3 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == (FKShapeElem *)0x0) {
    return __return_storage_ptr__;
  }
  switch(param_1->ShapeType) {
  case Sphere:
    pTVar2 = WN_Voxelize(&local_198,(FKSphereElem *)param_1,param_2,param_3,param_4,param_5);
    goto LAB_14a03e761;
  case Box:
    pTVar2 = WN_Voxelize(&local_198,(FKBoxElem *)param_1,param_2,param_3,param_4,param_5);
    goto LAB_14a03e761;
  case Sphyl:
    pTVar2 = WN_Voxelize(&local_198,(FKSphylElem *)param_1,param_2,param_3,param_4,param_5);
LAB_14a03e761:
    if (__return_storage_ptr__ != pTVar2) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar2->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar2->ArrayMax;
LAB_14a03e987:
      pTVar2->ArrayNum = 0;
      pTVar2->ArrayMax = 0;
    }
LAB_14a03e98b:
    if (local_198.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
LAB_14a03e995:
    FMemory::Free(local_198.AllocatorInstance.Data);
    return __return_storage_ptr__;
  case Convex:
    local_c8.Rotation.XY.m128d_f64[0] = (double)param_1[3]._padding_;
    local_c8.Rotation.XY.m128d_f64[1] = *(double *)&param_1[3].RestOffset;
    local_c8.Rotation.ZW.m128d_f64[0] = *(double *)&param_1[3].Name.Number;
    local_c8.Rotation.ZW.m128d_f64[1] = *(double *)&param_1[3].field_0x18;
    local_c8.Translation.XY.m128d_f64[0] = *(double *)&param_1[3].UserData;
    local_c8.Translation.XY.m128d_f64[1] = (double)param_1[3].UserData.Payload;
    local_c8.Translation.ZW.m128d_f64[0] = (double)param_1[4]._padding_;
    local_c8.Translation.ZW.m128d_f64[1] = *(double *)&param_1[4].RestOffset;
    local_c8.Scale3D.XY.m128d_f64[0] = *(double *)&param_1[4].Name.Number;
    local_c8.Scale3D.XY.m128d_f64[1] = *(double *)&param_1[4].field_0x18;
    local_c8.Scale3D.ZW.m128d_f64[0] = *(double *)&param_1[4].UserData;
    local_c8.Scale3D.ZW.m128d_f64[1] = (double)param_1[4].UserData.Payload;
    local_128.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_128.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_128.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_128.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_128.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_128.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_128,&local_c8,param_2);
    pTVar2 = WN_VoxelizeImpl(&local_198,
                             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                             (param_1 + 1),
                             (TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[1].Name.Number,
                             *(int *)&param_1[1].field_0x18 / 3,param_3,&local_128,param_4,param_5);
    iVar5 = iVar4;
    if (&local_180 != pTVar2) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar4 = pTVar2->ArrayNum;
      iVar5 = pTVar2->ArrayMax;
      pTVar2->ArrayNum = 0;
      pTVar2->ArrayMax = 0;
    }
    if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
    }
    local_198.AllocatorInstance.Data = pFVar3;
    if (__return_storage_ptr__ != &local_180) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = pFVar3;
      __return_storage_ptr__->ArrayNum = iVar4;
      __return_storage_ptr__->ArrayMax = iVar5;
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_198.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    goto LAB_14a03e995;
  case TaperedCapsule:
    pTVar2 = WN_Voxelize(&local_198,param_1,param_2,param_3,param_4,param_5);
    if (__return_storage_ptr__ != pTVar2) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar2->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar2->ArrayMax;
      goto LAB_14a03e987;
    }
    goto LAB_14a03e98b;
  case LevelSet:
    pTVar2 = &local_170;
    break;
  case SkinnedLevelSet:
    pTVar2 = &local_150;
    break;
  case MLLevelSet:
    pTVar2 = &local_160;
    break;
  case SkinnedTriangleMesh:
    pTVar2 = &local_140;
    break;
  default:
    goto switchD_14a03e748_default;
  }
  if (__return_storage_ptr__ != pTVar2) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
switchD_14a03e748_default:
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03e9f0

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           FKSkinnedLevelSetElem *param_1,TTransform<double> *param_2,double param_3,
           TBox<double> *param_4,TBox<double> *param_5)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03ea10

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           FKSkinnedTriangleMeshElem *param_1,TTransform<double> *param_2,double param_3,
           TBox<double> *param_4,TBox<double> *param_5)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03ea30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           FKSphereElem *param_1,TTransform<double> *param_2,double param_3,TBox<double> *param_4,
           TBox<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar18;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar19;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auStackY_2e8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_298;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_288;
  float local_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float local_268;
  float fStack_264;
  undefined4 uStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  FKSphereElem *local_220;
  TTransform<double> *local_218;
  TBox<double> *local_210;
  TBox<double> *local_208;
  double local_200;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *local_1f8;
  FLinearColor_u_0 local_1f0;
  TVector4<float>_u_0 local_1d8;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_1c8;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  ulonglong uVar17;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar13 = 0;
  local_208 = param_4;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_210 = param_5;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (FKSphereElem *)0x0) {
    local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.ArrayNum = 0;
    local_288.ArrayMax = 0;
    local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.ArrayNum = 0;
    local_298.ArrayMax = 0;
    local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = 0;
    local_2a8.ArrayMax = 0;
    local_220 = param_1;
    local_218 = param_2;
    local_200 = param_3;
    local_1f8 = __return_storage_ptr__;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_288,0x231,Default);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_298,0x11,Default);
    fVar19 = __real_3e490fdb;
    uVar12 = uVar13;
    uVar15 = uVar13;
    do {
      iVar18 = (int)uVar15;
      fVar20 = (float)iVar18 * fVar19;
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      __libm_sse2_sincosf_();
      if ((local_298.ArrayNum <= iVar18) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar9;
      }
      uVar15 = (ulonglong)(iVar18 + 1U);
      *(undefined4 *)(local_298.AllocatorInstance.Data + uVar12) = 0;
      *(undefined4 *)(local_298.AllocatorInstance.Data + uVar12 + 4) = extraout_XMM0_Da;
      *(undefined4 *)(local_298.AllocatorInstance.Data + uVar12 + 8) = extraout_XMM0_Db;
      uVar6 = __xmm_80000000800000008000000080000000;
      uVar12 = uVar12 + 0xc;
      uVar17 = uVar13;
    } while ((int)(iVar18 + 1U) < 0x11);
    do {
      uVar15 = 0;
      __vdecl_sincosf4();
      uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      uStack_25c = 0;
      uStack_24c = 0;
      fVar27 = fVar24 * fVar20;
      uStack_23c = 0;
      fVar30 = fVar20 * extraout_XMM0_Db_00;
      uStack_22c = 0x3f800000;
      fVar21 = extraout_XMM0_Dc * extraout_XMM0_Da_00 * fVar24 - fVar25 * extraout_XMM0_Db_00;
      fVar19 = (float)((uint)(fVar20 * extraout_XMM0_Dc) ^ uVar6);
      fVar22 = fVar25 * fVar24 + extraout_XMM0_Dc * extraout_XMM0_Da_00 * extraout_XMM0_Db_00;
      fVar33 = fVar25 * fVar20;
      local_238 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      fVar38 = fVar24 * extraout_XMM0_Dc - fVar25 * extraout_XMM0_Da_00 * extraout_XMM0_Db_00;
      fVar23 = (float)((uint)(extraout_XMM0_Dc * extraout_XMM0_Db_00 +
                             fVar25 * extraout_XMM0_Da_00 * fVar24) ^ uVar6);
      fStack_234 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      fStack_230 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar12 = uVar15;
      local_268 = fVar27;
      fStack_264 = fVar30;
      local_258 = fVar21;
      fStack_254 = fVar22;
      fStack_250 = fVar19;
      local_248 = fVar23;
      fStack_244 = fVar38;
      fStack_240 = fVar33;
      local_f8 = fVar20;
      fStack_f4 = fVar24;
      fStack_f0 = fVar25;
      fStack_ec = fVar26;
      do {
        iVar18 = (int)uVar15;
        if ((local_298.ArrayNum <= iVar18) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar9;
        }
        local_278 = *(float *)(local_298.AllocatorInstance.Data + uVar12);
        fStack_274 = *(float *)(local_298.AllocatorInstance.Data + uVar12 + 4);
        fStack_270 = *(float *)(local_298.AllocatorInstance.Data + uVar12 + 8);
        uStack_26c = 0x3f800000;
        fVar20 = fStack_270 * fVar23;
        fVar24 = fStack_270 * fVar38;
        fVar25 = fStack_270 * fVar33;
        fVar26 = fStack_270 * 0.0;
        local_1d8._s_0.X = fStack_274 * fVar21 + local_278 * fVar27 + fVar20 + (float)uVar28 * 1.0;
        local_1d8._s_0.Y = fStack_274 * fVar22 + local_278 * fVar30 + fVar24 + (float)uVar29 * 1.0;
        local_1d8._s_0.Z =
             fStack_274 * fVar19 + local_278 * extraout_XMM0_Da_00 + fVar25 + (float)uVar31 * 1.0;
        local_1d8._s_0.W = fStack_274 * 0.0 + local_278 * 0.0 + fVar26 + 1.0;
        FLinearColor::FLinearColor
                  ((FLinearColor *)&local_1f0._s_0,(TVector4<float> *)&local_1d8._s_0);
        uVar10 = iVar18 + (int)uVar17;
        dVar3 = (double)local_1f0._s_0.R;
        uVar16 = 0;
        if ((int)uVar10 < local_288.ArrayNum) {
          uVar16 = ~uVar10 >> 0x1f;
        }
        dVar4 = (double)local_1f0._s_0.G;
        dVar5 = (double)local_1f0._s_0.B;
        if ((uVar16 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar9;
        }
        uVar15 = (ulonglong)(iVar18 + 1U);
        uVar12 = uVar12 + 0xc;
        *(double *)(local_288.AllocatorInstance.Data + uVar13) = dVar3;
        *(double *)(local_288.AllocatorInstance.Data + uVar13 + 8) = dVar4;
        *(double *)(local_288.AllocatorInstance.Data + uVar13 + 0x10) = dVar5;
        uVar13 = uVar13 + 0x18;
      } while ((int)(iVar18 + 1U) < 0x11);
      uVar16 = (int)uVar17 + 0x11;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < 0x231);
    iVar18 = 1;
    do {
      lVar14 = 0x10;
      iVar11 = iVar18;
      do {
        if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
          local_2a8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
        }
        iVar8 = local_2a8.ArrayNum + 1;
        *(int *)(local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayNum * 4) = iVar11 + -1;
        if (iVar8 == local_2a8.ArrayMax) {
          local_2a8.ArrayNum = iVar8;
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
        }
        local_2a8.ArrayNum = iVar8 + 1;
        *(int *)(local_2a8.AllocatorInstance.Data + (longlong)iVar8 * 4) = iVar11 + 0x10;
        if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
          local_2a8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
        }
        iVar8 = local_2a8.ArrayNum + 1;
        *(int *)(local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayNum * 4) = iVar11;
        if (iVar8 == local_2a8.ArrayMax) {
          local_2a8.ArrayNum = iVar8;
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
        }
        local_2a8.ArrayNum = iVar8 + 1;
        *(int *)(local_2a8.AllocatorInstance.Data + (longlong)iVar8 * 4) = iVar11 + 0x10;
        if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
          local_2a8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
        }
        iVar8 = local_2a8.ArrayNum + 1;
        *(int *)(local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayNum * 4) =
             iVar11 + 0x11;
        if (iVar8 == local_2a8.ArrayMax) {
          local_2a8.ArrayNum = iVar8;
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
        }
        local_2a8.ArrayNum = iVar8 + 1;
        *(int *)(local_2a8.AllocatorInstance.Data + (longlong)iVar8 * 4) = iVar11;
        iVar11 = iVar11 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      iVar18 = iVar18 + 0x11;
    } while (iVar18 < 0x221);
    local_158.Translation.XY.m128d_f64[0] = (local_220->Center).field0_0x0._s_0.X;
    local_158.Translation.XY.m128d_f64[1] = (local_220->Center).field0_0x0._s_0.Y;
    uVar36 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar37 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    uVar34 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    uVar35 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_158.Translation.ZW.m128d_f64[0] = (local_220->Center).field0_0x0._s_0.Z;
    uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_158.Translation.ZW.m128d_f64[1] = 0.0;
    local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_158.Rotation.XY.m128d_f64[1]._0_4_ = uVar36;
    local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_158.Rotation.XY.m128d_f64[1]._4_4_ = uVar37;
    local_158.Rotation.ZW.m128d_f64[1]._0_4_ = uVar34;
    local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_158.Rotation.ZW.m128d_f64[1]._4_4_ = uVar35;
    local_158.Scale3D.XY.m128d_f64[1]._0_4_ = uVar31;
    local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_158.Scale3D.XY.m128d_f64[1]._4_4_ = uVar32;
    local_158.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
    local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_158.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
    local_1b8.Rotation.XY.m128d_f64[1]._0_4_ = uVar36;
    local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1b8.Rotation.XY.m128d_f64[1]._4_4_ = uVar37;
    local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar34;
    local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar35;
    local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar31;
    local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar32;
    local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
    local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
    UE::Math::TTransform<double>::Multiply(&local_1b8,&local_158,local_218);
    pTVar9 = WN_VoxelizeImpl(&local_1c8,&local_288,&local_2a8,local_2a8.ArrayNum / 3,local_200,
                             &local_1b8,local_208,local_210);
    __return_storage_ptr__ = local_1f8;
    if (local_1f8 != pTVar9) {
      pFVar1 = (local_1f8->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar9->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar9->ArrayMax;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
    }
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.AllocatorInstance.Data);
    }
    if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// WN_Voxelize @ 14a03f210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_Voxelize(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           FKSphylElem *param_1,TTransform<double> *param_2,double param_3,TBox<double> *param_4,
           TBox<double> *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar21;
  ulonglong uVar22;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_248 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_1f8;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1c0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  TBox<double> *local_150;
  TBox<double> *local_148;
  TTransform<double> *local_140;
  double local_138;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *local_130;
  FLinearColor_u_0 local_128;
  TVector4<float>_u_0 local_118;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  ulonglong uVar20;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar16 = 0;
  local_148 = param_4;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_150 = param_5;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (FKSphylElem *)0x0) {
    fVar24 = param_1->Radius;
    fVar25 = param_1->Length;
    local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.ArrayNum = 0;
    local_1c0.ArrayMax = 0;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 0;
    local_1d0.ArrayMax = 0;
    local_140 = param_2;
    local_138 = param_3;
    local_130 = __return_storage_ptr__;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_1c0,0x252,Default);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_1d0,0x12,Default);
    fVar31 = __real_3e490fdb;
    fVar27 = __real_3f000000;
    fVar26 = __real_bf000000;
    uVar22 = uVar16;
    uVar18 = uVar16;
    do {
      uVar19 = (uint)uVar22;
      uVar12 = uVar19 - 1;
      fVar32 = fVar26;
      if (uVar19 < 9) {
        uVar12 = uVar19;
        fVar32 = fVar27;
      }
      fVar23 = (float)(int)uVar12 * fVar31;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      __libm_sse2_sincosf_();
      if ((local_1d0.ArrayNum <= (int)uVar19) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar11;
      }
      uVar22 = (ulonglong)(uVar19 + 1);
      *(undefined4 *)(local_1d0.AllocatorInstance.Data + uVar18) = 0;
      *(float *)(local_1d0.AllocatorInstance.Data + uVar18 + 4) = extraout_XMM0_Da * fVar24;
      *(float *)(local_1d0.AllocatorInstance.Data + uVar18 + 8) =
           extraout_XMM0_Db * fVar24 + fVar32 * fVar25;
      uVar12 = __xmm_80000000800000008000000080000000;
      uVar18 = uVar18 + 0xc;
      uVar20 = uVar16;
    } while ((int)(uVar19 + 1) < 0x12);
    do {
      uVar18 = 0;
      __vdecl_sincosf4();
      uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      uStack_18c = 0;
      uStack_17c = 0;
      fVar31 = fVar28 * fVar23;
      uStack_16c = 0;
      fVar32 = fVar23 * extraout_XMM0_Db_00;
      uStack_15c = 0x3f800000;
      fVar24 = fVar28 * extraout_XMM0_Dc * extraout_XMM0_Da_00 - fVar29 * extraout_XMM0_Db_00;
      fVar25 = extraout_XMM0_Db_00 * extraout_XMM0_Dc * extraout_XMM0_Da_00 + fVar29 * fVar28;
      fVar33 = fVar29 * fVar23;
      fVar26 = (float)((uint)(fVar23 * extraout_XMM0_Dc) ^ uVar12);
      local_168 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      fVar34 = fVar28 * extraout_XMM0_Dc - extraout_XMM0_Db_00 * fVar29 * extraout_XMM0_Da_00;
      fStack_160 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      fVar27 = (float)((uint)(fVar28 * fVar29 * extraout_XMM0_Da_00 +
                             extraout_XMM0_Dc * extraout_XMM0_Db_00) ^ uVar12);
      fStack_164 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar22 = uVar18;
      local_198 = fVar31;
      fStack_194 = fVar32;
      local_188 = fVar24;
      fStack_184 = fVar25;
      fStack_180 = fVar26;
      local_178 = fVar27;
      fStack_174 = fVar34;
      fStack_170 = fVar33;
      local_f8 = fVar23;
      fStack_f4 = fVar28;
      fStack_f0 = fVar29;
      fStack_ec = fVar30;
      do {
        iVar21 = (int)uVar18;
        if ((local_1d0.ArrayNum <= iVar21) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        local_1a8 = *(float *)(local_1d0.AllocatorInstance.Data + uVar22);
        fStack_1a4 = *(float *)(local_1d0.AllocatorInstance.Data + uVar22 + 4);
        fStack_1a0 = *(float *)(local_1d0.AllocatorInstance.Data + uVar22 + 8);
        uStack_19c = 0x3f800000;
        fVar23 = fStack_1a0 * fVar27;
        fVar28 = fStack_1a0 * fVar34;
        fVar29 = fStack_1a0 * fVar33;
        fVar30 = fStack_1a0 * 0.0;
        local_118._s_0.X = fStack_1a4 * fVar24 + local_1a8 * fVar31 + fVar23 + (float)uVar7 * 1.0;
        local_118._s_0.Y = fStack_1a4 * fVar25 + local_1a8 * fVar32 + fVar28 + (float)uVar8 * 1.0;
        local_118._s_0.Z =
             fStack_1a4 * fVar26 + local_1a8 * extraout_XMM0_Da_00 + fVar29 + (float)uVar9 * 1.0;
        local_118._s_0.W = fStack_1a4 * 0.0 + local_1a8 * 0.0 + fVar30 + 1.0;
        FLinearColor::FLinearColor
                  ((FLinearColor *)&local_128._s_0,(TVector4<float> *)&local_118._s_0);
        uVar14 = (int)uVar20 + iVar21;
        dVar4 = (double)local_128._s_0.R;
        uVar19 = 0;
        if ((int)uVar14 < local_1c0.ArrayNum) {
          uVar19 = ~uVar14 >> 0x1f;
        }
        dVar5 = (double)local_128._s_0.G;
        dVar6 = (double)local_128._s_0.B;
        if ((uVar19 == 0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        uVar18 = (ulonglong)(iVar21 + 1U);
        uVar22 = uVar22 + 0xc;
        *(double *)(local_1c0.AllocatorInstance.Data + uVar16) = dVar4;
        *(double *)(local_1c0.AllocatorInstance.Data + uVar16 + 8) = dVar5;
        *(double *)(local_1c0.AllocatorInstance.Data + uVar16 + 0x10) = dVar6;
        uVar16 = uVar16 + 0x18;
      } while ((int)(iVar21 + 1U) < 0x12);
      uVar19 = (int)uVar20 + 0x12;
      uVar20 = (ulonglong)uVar19;
    } while ((int)uVar19 < 0x252);
    iVar21 = 1;
    local_1f8.ArrayNum = 0;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayMax = 0;
    do {
      lVar17 = 0x11;
      iVar15 = iVar21;
      do {
        local_1e8 = iVar15 + -1;
        if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 <
             local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 4)) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
          local_1f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
        }
        iVar13 = local_1f8.ArrayNum + 1;
        iVar1 = iVar15 + 0x11;
        *(int *)(local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 4) = local_1e8;
        local_1f8.ArrayNum = iVar13;
        local_1e4 = iVar1;
        if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e4) &&
            ((FScriptContainerElement *)&local_1e4 <
             local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 4)) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
          local_1f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
        }
        iVar13 = local_1f8.ArrayNum + 1;
        *(int *)(local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 4) = local_1e4;
        local_1f8.ArrayNum = iVar13;
        local_1e0 = iVar15;
        if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e0) &&
            ((FScriptContainerElement *)&local_1e0 <
             local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 4)) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
          local_1f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
        }
        iVar13 = local_1f8.ArrayNum + 1;
        *(int *)(local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 4) = local_1e0;
        local_1f8.ArrayNum = iVar13;
        local_1dc = iVar1;
        if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1dc) &&
            ((FScriptContainerElement *)&local_1dc <
             local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 4)) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
          local_1f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
        }
        iVar1 = local_1f8.ArrayNum + 1;
        *(int *)(local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 4) = local_1dc;
        local_1d8 = iVar15 + 0x12;
        local_1f8.ArrayNum = iVar1;
        if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1d8) &&
            ((FScriptContainerElement *)&local_1d8 <
             local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 4)) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
          local_1f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
        }
        iVar1 = local_1f8.ArrayNum + 1;
        *(int *)(local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 4) = local_1d8;
        local_1f8.ArrayNum = iVar1;
        local_1d4 = iVar15;
        if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1d4) &&
            ((FScriptContainerElement *)&local_1d4 <
             local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 4)) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
        if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
          local_1f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
        }
        iVar1 = local_1f8.ArrayNum + 1;
        iVar15 = iVar15 + 1;
        *(int *)(local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 4) = local_1d4;
        lVar17 = lVar17 + -1;
        local_1f8.ArrayNum = iVar1;
      } while (lVar17 != 0);
      iVar21 = iVar21 + 0x12;
    } while (iVar21 < 0x241);
    pTVar11 = WN_VoxelizeImpl(&local_108,&local_1c0,&local_1f8,iVar1 / 3,local_138,local_140,
                              local_148,local_150);
    __return_storage_ptr__ = local_130;
    if (local_130 != pTVar11) {
      pFVar2 = (local_130->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar11->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar11->ArrayMax;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
    if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.AllocatorInstance.Data);
    }
    if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// WN_VoxelizeImpl @ 14a03fc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __cdecl
WN_VoxelizeImpl(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>
                *__return_storage_ptr__,
               TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
               TArray<int,TSizedDefaultAllocator<32>_> *param_2,uint param_3,double param_4,
               TTransform<double> *param_5,TBox<double> *param_6,TBox<double> *param_7)

{
  undefined4 *puVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  ForAnyElementType FVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  byte bVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint *puVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  ulong64 uVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStackY_478 [32];
  <lambda_1> local_428 [4];
  uint local_424;
  undefined1 local_420 [4];
  uint local_41c;
  uint local_418;
  int local_414;
  ForAnyElementType local_410;
  int local_408 [2];
  ForAnyElementType local_400;
  undefined8 local_3f8;
  int local_3f0;
  uint local_3ec;
  ForAnyElementType local_3e8;
  int local_3e0 [2];
  ulonglong local_3d8;
  ForAnyElementType local_3d0;
  int local_3c8 [4];
  ulonglong local_3b8;
  int local_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_39c;
  uint local_398;
  TIntVector3<int>_u_0 local_394;
  longlong *local_388;
  uint uStack_380;
  uint uStack_37c;
  TBitArray<FDefaultBitArrayAllocator> *local_378;
  undefined4 uStack_370;
  uint uStack_36c;
  uint local_368;
  undefined4 uStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *local_358;
  longlong *local_350;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_348;
  undefined8 uStack_328;
  ulonglong local_320;
  int local_318;
  TIntVector3<int>_u_0 *local_310;
  TBox<double> *local_308;
  longlong local_300;
  int local_2f8;
  int local_2f4;
  longlong local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  int local_2d8;
  longlong *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  undefined8 uStack_2a8;
  TArrayView<std::nullptr_t,int> local_2a0;
  code *local_290;
  uint *local_288;
  code *local_280;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_278;
  TArrayView<std::nullptr_t,int> local_270;
  uint local_260 [2];
  undefined1 local_258 [16];
  double local_248;
  ForAnyElementType *local_240;
  ForAnyElementType *local_238;
  ForAnyElementType *local_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  undefined4 local_1d4;
  undefined4 local_1b4;
  undefined1 local_1a8 [32];
  uint *local_188;
  uint local_180;
  undefined4 local_17c;
  undefined4 local_178;
  int local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_158;
  TArray<int,TSizedDefaultAllocator<32>_> *local_150;
  ForAnyElementType *local_148;
  uint local_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_308 = param_7;
  local_398 = param_3;
  local_358 = __return_storage_ptr__;
  if ((param_3 * 3 != param_2->ArrayNum) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("InTriangleCount * 3 == InIndices.Num()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_VoxelizeUtils.cpp"
                         ,0x1db,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar15;
  }
  dStack_210 = _UNK_150a9e6d8;
  local_218 = ___xmm_ffefffffffffffff7fefffffffffffff;
  dStack_220 = _UNK_150a9e648;
  local_228 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dStack_200 = _UNK_1508ffb58;
  local_208 = ___xmm_ffefffffffffffffffefffffffffffff;
  dVar31 = __real_4000000000000000;
  dVar2 = __real_3fe0000000000000;
  (param_7->Min).field0_0x0._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  (param_7->Min).field0_0x0._s_0.Y = dStack_220;
  local_1f8 = 1;
  (param_7->Min).field0_0x0._s_0.Z = local_218;
  (param_7->Max).field0_0x0._s_0.X = dStack_210;
  (param_7->Max).field0_0x0._s_0.Y = local_208;
  (param_7->Max).field0_0x0._s_0.Z = dStack_200;
  dVar30 = dVar31 / param_4;
  param_7->IsValid = 1;
  param_7->Pad[0] = (char)uStack_1f7;
  param_7->Pad[1] = (char)((uint7)uStack_1f7 >> 8);
  param_7->Pad[2] = (char)((uint7)uStack_1f7 >> 0x10);
  param_7->Pad[3] = (char)((uint7)uStack_1f7 >> 0x18);
  param_7->Pad[4] = (char)((uint7)uStack_1f7 >> 0x20);
  param_7->Pad[5] = (char)((uint7)uStack_1f7 >> 0x28);
  param_7->Pad[6] = (char)((uint7)uStack_1f7 >> 0x30);
  local_2f0 = (longlong)ROUND(dVar30 * (param_6->Min).field0_0x0._s_0.X - dVar2) >> 1;
  local_2e8 = (longlong)ROUND(dVar30 * (param_6->Min).field0_0x0._s_0.Y - dVar2) >> 1;
  local_2e0 = (longlong)ROUND(dVar30 * (param_6->Min).field0_0x0._s_0.Z - dVar2) >> 1;
  local_300 = (longlong)ROUND(dVar30 * (param_6->Max).field0_0x0._s_0.X - dVar2) >> 1;
  local_320 = (longlong)ROUND(dVar30 * (param_6->Max).field0_0x0._s_0.Y - dVar2) >> 1;
  local_3b8 = (longlong)ROUND((dVar31 / param_4) * (param_6->Max).field0_0x0._s_0.Z - dVar2) >> 1;
  if ((((4 < (byte)LogTemp._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTemp),
       4 < (byte)LogTemp._0_1_)) &&
      (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTemp),
      4 < (byte)LogTemp._0_1_)) &&
     (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTemp),
     4 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  local_410.Data = (FScriptContainerElement *)0x0;
  local_408[0] = 0;
  local_408[1] = 0;
  if ((int)param_3 < 1) {
    if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_3);
    }
  }
  else {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x100,8,param_3,&local_410,local_408,local_408 + 1);
    DefaultConstructItems<FWN_VoxelizeTriangleInfo,int>
              (local_410.Data + (longlong)iVar8 * 0x100,param_3);
  }
  local_148 = &local_410;
  local_138 = param_4;
  local_128 = (param_5->Rotation).XY.m128d_f64[0];
  dStack_120 = (param_5->Rotation).XY.m128d_f64[1];
  local_118 = (param_5->Rotation).ZW.m128d_f64[0];
  dStack_110 = (param_5->Rotation).ZW.m128d_f64[1];
  local_108 = (param_5->Translation).XY.m128d_f64[0];
  dStack_100 = (param_5->Translation).XY.m128d_f64[1];
  local_f8 = (param_5->Translation).ZW.m128d_f64[0];
  dStack_f0 = (param_5->Translation).ZW.m128d_f64[1];
  local_e8 = (param_5->Scale3D).XY.m128d_f64[0];
  dStack_e0 = (param_5->Scale3D).XY.m128d_f64[1];
  local_d8 = (param_5->Scale3D).ZW.m128d_f64[0];
  dStack_d0 = (param_5->Scale3D).ZW.m128d_f64[1];
  local_280 = UE::Core::Private::Function::
              TFunctionRefCaller<`WN_VoxelizeImpl'::__l2::<lambda_1>,void,int>::Call;
  local_278 = &local_158;
  local_c8 = (param_6->Min).field0_0x0._s_0.X;
  dStack_c0 = (param_6->Min).field0_0x0._s_0.Y;
  local_b8 = (param_6->Min).field0_0x0._s_0.Z;
  dStack_b0 = (param_6->Max).field0_0x0._s_0.X;
  local_a8 = (param_6->Max).field0_0x0._s_0.Y;
  dStack_a0 = (param_6->Max).field0_0x0._s_0.Z;
  local_98._0_1_ = param_6->IsValid;
  local_98._1_1_ = param_6->Pad[0];
  local_98._2_1_ = param_6->Pad[1];
  local_98._3_1_ = param_6->Pad[2];
  local_98._4_1_ = param_6->Pad[3];
  local_98._5_1_ = param_6->Pad[4];
  local_98._6_1_ = param_6->Pad[5];
  local_98._7_1_ = param_6->Pad[6];
  local_2a0.DataPtr = (void **)0x0;
  local_2a0.ArrayNum = 0;
  local_158 = param_1;
  local_150 = param_2;
  local_140 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3,1,(TFunctionRef<void___cdecl(int)> *)&local_280,
             local_428[0],None,&local_2a0);
  local_414 = 0x7fffffff;
  iVar13 = -0x7fffffff;
  local_3f0 = 0x7fffffff;
  local_168 = (ForElementType<FSetElementId>)0x0;
  local_418 = 0x80000001;
  uVar12 = 0x7fffffff;
  local_41c = 0x80000001;
  local_1a8._0_8_ = 0;
  local_1a8._8_8_ = 0;
  local_188 = (uint *)0x0;
  local_180 = 0;
  local_17c = 0x80;
  local_178 = 0xffffffff;
  local_174 = 0;
  local_160 = 0;
  local_424 = 0;
  iVar8 = local_408[0];
  if (0 < local_408[0]) {
    do {
      uVar20 = local_424;
      uVar21 = 0;
      if ((int)local_424 < iVar8) {
        uVar21 = ~local_424 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar15;
        }
        iVar8 = local_408[0];
      }
      uVar21 = local_424;
      lVar16 = (longlong)(int)uVar20 * 0x100;
      if ((local_410.Data[lVar16 + 0xf8] == (FScriptContainerElement)0x0) &&
         (local_410.Data[lVar16 + 0xf9] == (FScriptContainerElement)0x0)) {
        iVar14 = *(int *)(local_410.Data + lVar16 + 200);
        if (*(int *)(local_410.Data + lVar16 + 200) < (int)local_2f0) {
          iVar14 = (int)local_2f0;
        }
        uVar23 = (ulonglong)*(uint *)(local_410.Data + lVar16 + 0xcc);
        if ((int)*(uint *)(local_410.Data + lVar16 + 0xcc) < (int)local_2e8) {
          uVar23 = local_2e8 & 0xffffffff;
        }
        local_3a0 = (uint)uVar23;
        uVar27 = (ulonglong)*(uint *)(local_410.Data + lVar16 + 0xd0);
        if ((int)*(uint *)(local_410.Data + lVar16 + 0xd0) < (int)local_2e0) {
          uVar27 = local_2e0 & 0xffffffff;
        }
        iVar29 = *(int *)(local_410.Data + lVar16 + 0xd4);
        if ((int)local_300 < *(int *)(local_410.Data + lVar16 + 0xd4)) {
          iVar29 = (int)local_300;
        }
        uVar22 = (ulonglong)*(uint *)(local_410.Data + lVar16 + 0xd8);
        if ((int)local_320 < (int)*(uint *)(local_410.Data + lVar16 + 0xd8)) {
          uVar22 = local_320 & 0xffffffff;
        }
        local_3a4 = (uint)uVar22;
        uVar25 = (ulonglong)*(uint *)(local_410.Data + lVar16 + 0xdc);
        if ((int)local_3b8 < (int)*(uint *)(local_410.Data + lVar16 + 0xdc)) {
          uVar25 = local_3b8 & 0xffffffff;
        }
        local_39c = (uint)uVar25;
        iVar9 = iVar14;
        if (local_414 < iVar14) {
          iVar9 = local_414;
        }
        local_3ec = local_3a0;
        if ((int)uVar12 < (int)local_3a0) {
          local_3ec = uVar12;
        }
        iVar26 = (int)uVar27;
        iVar10 = iVar26;
        if (local_3f0 < iVar26) {
          iVar10 = local_3f0;
        }
        iVar11 = iVar29;
        if (iVar29 < iVar13) {
          iVar11 = iVar13;
        }
        local_3d8 = CONCAT44(local_3d8._4_4_,iVar11);
        uVar20 = local_3a4;
        if ((int)local_3a4 < (int)local_418) {
          uVar20 = local_418;
        }
        uVar21 = local_39c;
        if ((int)local_39c < (int)local_41c) {
          uVar21 = local_41c;
        }
        uVar12 = local_3ec;
        iVar13 = iVar11;
        local_41c = uVar21;
        local_418 = uVar20;
        local_414 = iVar9;
        local_3f0 = iVar10;
        if (iVar26 <= (int)local_39c) {
          do {
            if ((int)uVar23 <= (int)uVar22) {
              do {
                iVar8 = iVar14;
                if (iVar14 <= iVar29) {
                  do {
                    local_394._s_0.X = iVar8;
                    local_394._s_0.Y = (int)uVar23;
                    local_394._s_0.Z = (int)uVar27;
                    uVar12 = FCrc::MemCrc_DEPRECATED(&local_394,0xc,0);
                    iVar13 = TSet<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<UE::Math::TIntVector3<int>_>
                                       ((TSet<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                         *)local_1a8,uVar12,(TIntVector3<int> *)&local_394._s_0);
                    if ((iVar13 == -1) ||
                       (lVar16 = local_1a8._0_8_ + (longlong)iVar13 * 0x28, lVar16 == 0)) {
                      local_310 = &local_394;
                      TSet<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      ::EmplaceByHash<TKeyInitializer<UE::Math::TIntVector3<int>_&&>_>
                                ((TSet<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                  *)local_1a8,(uint)&local_3a8,
                                 (TKeyInitializer<UE::Math::TIntVector3<int>_&&> *)(ulonglong)uVar12
                                 ,(bool *)&local_310);
                      lVar16 = local_1a8._0_8_ + (longlong)local_3a8 * 0x28;
                    }
                    if (((*(uint **)(lVar16 + 0x10) <= &local_424) &&
                        (&local_424 < *(uint **)(lVar16 + 0x10) + *(int *)(lVar16 + 0x1c))) &&
                       (bVar7 = FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar3 = (code *)swi(3);
                      pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                                (*pcVar3)();
                      return pTVar15;
                    }
                    iVar13 = *(int *)(lVar16 + 0x18);
                    if (iVar13 == *(int *)(lVar16 + 0x1c)) {
                      iVar13 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)(lVar16 + 0x10),
                                          (int *)(lVar16 + 0x1c));
                    }
                    *(int *)(lVar16 + 0x18) = iVar13 + 1;
                    iVar8 = iVar8 + 1;
                    *(uint *)(*(longlong *)(lVar16 + 0x10) + (longlong)iVar13 * 4) = local_424;
                  } while (iVar8 <= iVar29);
                  uVar22 = (ulonglong)local_3a4;
                }
                uVar12 = (int)uVar23 + 1;
                uVar23 = (ulonglong)uVar12;
              } while ((int)uVar12 <= (int)uVar22);
              uVar23 = (ulonglong)local_3a0;
              uVar25 = (ulonglong)local_39c;
            }
            uVar12 = (int)uVar27 + 1;
            uVar27 = (ulonglong)uVar12;
          } while ((int)uVar12 <= (int)uVar25);
          iVar8 = local_408[0];
          uVar12 = local_3ec;
          iVar13 = (int)local_3d8;
        }
      }
      else {
        uVar20 = 0;
        if ((int)local_424 < iVar8) {
          uVar20 = ~local_424 >> 0x1f;
        }
        if (uVar20 == 0) {
          bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar15;
          }
          iVar8 = local_408[0];
        }
        iVar14 = (iVar8 - uVar21) + -1;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove(local_410.Data + (longlong)(int)uVar21 * 0x100,
                  local_410.Data + (longlong)(iVar8 - iVar14) * 0x100,(longlong)iVar14 << 8);
          iVar8 = local_408[0];
        }
        local_408[0] = iVar8 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x100,8,&local_410,iVar8 + -1,local_408 + 1);
        local_424 = local_424 - 1;
        iVar8 = local_408[0];
      }
      local_424 = local_424 + 1;
      __return_storage_ptr__ = local_358;
    } while ((int)local_424 < iVar8);
  }
  uVar28 = 0;
  uVar12 = local_1a8._8_4_ - local_174;
  uVar23 = (ulonglong)uVar12;
  local_3ec = uVar12;
  if (uVar12 != 0) {
    if ((4 < (byte)LogTemp._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTemp),
       4 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    uVar20 = 0;
    lVar16 = 0;
    dVar31 = param_4 * dVar2;
    local_3e8.Data = (FScriptContainerElement *)0x0;
    local_3e0[0] = 0;
    local_3e0[1] = 0;
    if ((int)uVar12 < 1) {
      if ((int)uVar12 < 0) goto LAB_14a040f34;
    }
    else {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,uVar12,&local_3e8,local_3e0,local_3e0 + 1);
      DefaultConstructItems<_WN_VoxelizeImpl_::__l2::_FWN_VoxelInfo,int>
                (local_3e8.Data + (longlong)iVar8 * 0x30,uVar12);
    }
    uStack_37c = 1;
    uStack_380 = uVar20;
    local_368 = uVar20;
    uStack_36c = uVar20;
    if (local_180 != 0) {
      puVar24 = (uint *)(local_1a8 + 0x10);
      if (local_188 != (uint *)0x0) {
        puVar24 = local_188;
      }
      uVar12 = *puVar24;
      while (uVar12 == 0) {
        lVar18 = (longlong)(int)uStack_380;
        local_368 = local_368 + 0x20;
        uStack_380 = uStack_380 + 1;
        uStack_36c = local_180;
        if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_380)
        goto LAB_14a040623;
        uVar12 = puVar24[lVar18 + 1];
      }
      uStack_37c = -uVar12 & uVar12;
      uVar23 = (ulonglong)uStack_37c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_318 = (int)lVar18;
      uStack_36c = local_318 + -1 + local_368;
      if ((int)local_180 < (int)uStack_36c) {
        uStack_36c = local_180;
      }
    }
LAB_14a040623:
    local_388 = (longlong *)local_1a8;
    uStack_364 = local_1d4;
    iStack_360 = local_1a8._8_4_ - local_174;
    local_378 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
    TStack_348._padding_ = CONCAT44(uStack_37c,uStack_380);
    uStack_370 = 0xffffffff;
    TStack_348.CurrentBitIndex = uStack_36c;
    TStack_348.UnvisitedBitMask = 0xffffffff;
    TStack_348._28_4_ = local_1d4;
    TStack_348.BaseBitIndex = local_368;
    uStack_328 = CONCAT44(uStack_35c,iStack_360);
    local_350 = local_388;
    TStack_348.Array = local_378;
    do {
      uVar21 = local_180;
      iVar8 = (int)local_180 >> 5;
      bVar17 = (byte)local_180;
      uVar12 = local_180 & 0xffffffe0;
      if (((int)local_180 < 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
      plVar6 = local_350;
      if (uVar21 != local_180) {
        puVar24 = (uint *)(local_1a8 + 0x10);
        if (local_188 != (uint *)0x0) {
          puVar24 = local_188;
        }
        uVar21 = -1 << (bVar17 & 0x1f) & puVar24[iVar8];
        while (uVar21 == 0) {
          lVar18 = (longlong)iVar8;
          uVar12 = uVar12 + 0x20;
          iVar8 = iVar8 + 1;
          uVar21 = local_180;
          if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_14a040744;
          uVar21 = puVar24[lVar18 + 1];
        }
        uVar23 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_2f8 = (int)lVar18;
        uVar21 = (uVar12 - 1) + local_2f8;
        if ((int)local_180 < (int)uVar21) {
          uVar21 = local_180;
        }
      }
LAB_14a040744:
      if ((int)local_350[1] - *(int *)((longlong)local_350 + 0x34) != (int)uStack_328) {
        local_420[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_420);
      }
      iVar8 = TStack_348.CurrentBitIndex;
      lVar18 = (longlong)TStack_348.CurrentBitIndex;
      uVar12 = (uint)uVar28;
      if (((TStack_348.CurrentBitIndex == uVar21) &&
          (TStack_348.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10))) &&
         (plVar6 == (longlong *)local_1a8)) {
        uVar20 = 0;
        uVar23 = 0;
        local_3d0.Data = (FScriptContainerElement *)0x0;
        local_3c8[0] = 0;
        local_3c8[1] = 0;
        local_418 = uVar12;
        if ((int)uVar12 < 1) {
          if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar28);
          }
        }
        else {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar12,&local_3d0,local_3c8,local_3c8 + 1);
        }
        local_41c = 0;
        uStack_37c = 1;
        uStack_36c = uVar20;
        local_368 = uVar20;
        uStack_380 = uVar20;
        if (local_180 == 0) goto LAB_14a040985;
        puVar24 = (uint *)(local_1a8 + 0x10);
        if (local_188 != (uint *)0x0) {
          puVar24 = local_188;
        }
        uVar12 = *puVar24;
        uVar27 = uVar23;
        uStack_380 = 0;
        goto joined_r0x00014a040940;
      }
      lVar19 = *plVar6;
      uVar21 = 0;
      if ((int)uVar20 < local_3e0[0]) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
      *(undefined8 *)(local_3e8.Data + lVar16) = *(undefined8 *)(lVar19 + lVar18 * 0x28);
      *(undefined4 *)(local_3e8.Data + lVar16 + 8) = *(undefined4 *)(lVar19 + 8 + lVar18 * 0x28);
      local_3b8 = *(ulonglong *)(*plVar6 + (longlong)iVar8 * 0x28);
      iVar8 = *(int *)(*plVar6 + 8 + (longlong)iVar8 * 0x28);
      *(double *)(local_3e8.Data + lVar16 + 0x10) = ((double)(int)local_3b8 + dVar2) * param_4;
      *(double *)(local_3e8.Data + lVar16 + 0x18) =
           ((double)(int)(local_3b8 >> 0x20) + dVar2) * param_4;
      *(double *)(local_3e8.Data + lVar16 + 0x20) = ((double)iVar8 + dVar2) * param_4;
      TStack_348.UnvisitedBitMask = TStack_348.UnvisitedBitMask & ~TStack_348._padding_._4_4_;
      uVar28 = (ulong64)(uVar12 + *(int *)(*local_350 + 0x18 +
                                          (longlong)TStack_348.CurrentBitIndex * 0x28));
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_348);
      uVar20 = uVar20 + 1;
      lVar16 = lVar16 + 0x30;
    } while( true );
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
LAB_14a040ed0:
  local_160 = 0;
  if (local_168 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_168);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1a8);
  if (local_410.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data);
  }
  return __return_storage_ptr__;
joined_r0x00014a040940:
  if (uVar12 != 0) goto LAB_14a04095e;
  iVar8 = (int)uVar27;
  local_368 = local_368 + 0x20;
  uStack_380 = iVar8 + 1;
  uVar27 = (ulonglong)uStack_380;
  uStack_36c = local_180;
  if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_380)
  goto LAB_14a040985;
  uVar12 = puVar24[(longlong)iVar8 + 1];
  goto joined_r0x00014a040940;
LAB_14a04095e:
  uStack_37c = -uVar12 & uVar12;
  uVar27 = (ulonglong)uStack_37c * 2 + 1;
  lVar16 = 0x3f;
  if (uVar27 != 0) {
    for (; uVar27 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  local_2f4 = (int)lVar16;
  uStack_36c = local_2f4 + -1 + local_368;
  if ((int)local_180 < (int)uStack_36c) {
    uStack_36c = local_180;
  }
LAB_14a040985:
  local_388 = (longlong *)local_1a8;
  uStack_364 = local_1b4;
  iStack_360 = local_1a8._8_4_ - local_174;
  local_378 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
  TStack_2c8._padding_ = CONCAT44(uStack_37c,uStack_380);
  uStack_370 = 0xffffffff;
  TStack_2c8.CurrentBitIndex = uStack_36c;
  TStack_2c8.UnvisitedBitMask = 0xffffffff;
  TStack_2c8._28_4_ = local_1b4;
  TStack_2c8.BaseBitIndex = local_368;
  uStack_2a8 = CONCAT44(uStack_35c,iStack_360);
  local_3d8 = 0;
  local_2d0 = local_388;
  TStack_2c8.Array = local_378;
  do {
    uVar21 = local_180;
    uVar27 = 0;
    iVar8 = (int)local_180 >> 5;
    bVar17 = (byte)local_180;
    uVar12 = local_180 & 0xffffffe0;
    if (((int)local_180 < 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar15;
    }
    plVar6 = local_2d0;
    if (uVar21 != local_180) {
      puVar24 = (uint *)(local_1a8 + 0x10);
      if (local_188 != (uint *)0x0) {
        puVar24 = local_188;
      }
      uVar21 = -1 << (bVar17 & 0x1f) & puVar24[iVar8];
      while (uVar21 == 0) {
        lVar16 = (longlong)iVar8;
        uVar12 = uVar12 + 0x20;
        iVar8 = iVar8 + 1;
        uVar21 = local_180;
        if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_14a040ab4;
        uVar21 = puVar24[lVar16 + 1];
      }
      uVar22 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_2d8 = (int)lVar16;
      uVar21 = local_2d8 + -1 + uVar12;
      if ((int)local_180 < (int)uVar21) {
        uVar21 = local_180;
      }
    }
LAB_14a040ab4:
    if ((int)local_2d0[1] - *(int *)((longlong)local_2d0 + 0x34) != (int)uStack_2a8) {
      local_428[0] = (<lambda_1>)0x0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_428);
    }
    lVar16 = (longlong)TStack_2c8.CurrentBitIndex;
    if (((TStack_2c8.CurrentBitIndex == uVar21) &&
        (TStack_2c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10))) &&
       (plVar6 == (longlong *)local_1a8)) break;
    lVar18 = *plVar6;
    if (0 < *(int *)(lVar18 + 0x18 + lVar16 * 0x28)) {
      lVar19 = uVar23 * 8;
      uVar22 = uVar27;
      do {
        uVar12 = 0;
        if ((int)uVar20 < local_3c8[0]) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar15;
        }
        FVar5.Data = local_3d0.Data;
        uVar21 = (uint)uVar27;
        *(uint *)(local_3d0.Data + lVar19) = local_41c;
        uVar12 = 0;
        if ((int)uVar21 < *(int *)(lVar18 + 0x18 + lVar16 * 0x28)) {
          uVar12 = ~uVar21 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar15;
        }
        uVar27 = (ulonglong)(uVar21 + 1);
        uVar20 = uVar20 + 1;
        puVar1 = (undefined4 *)(uVar22 + *(longlong *)(lVar18 + 0x10 + lVar16 * 0x28));
        uVar22 = uVar22 + 4;
        *(undefined4 *)(FVar5.Data + lVar19 + 4) = *puVar1;
        lVar19 = lVar19 + 8;
        uVar23 = local_3d8 + 1;
        local_3d8 = uVar23;
      } while ((int)(uVar21 + 1) < *(int *)(lVar18 + 0x18 + lVar16 * 0x28));
    }
    TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
    local_41c = local_41c + 1;
  } while( true );
  TSet<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)local_1a8);
  local_260[0] = local_398;
  local_240 = &local_410;
  local_238 = &local_3e8;
  local_230 = &local_3d0;
  local_290 = UE::Core::Private::Function::
              TFunctionRefCaller<`WN_VoxelizeImpl'::__l2::<lambda_2>,void,int>::Call;
  local_288 = local_260;
  local_258._8_4_ = SUB84(dVar31,0);
  local_258._0_8_ = dVar31;
  local_258._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  local_270.DataPtr = (void **)0x0;
  local_270.ArrayNum = 0;
  local_248 = dVar31;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_418,1,(TFunctionRef<void___cdecl(int)> *)&local_290,
             local_428[0],None,&local_270);
  uVar23 = (ulonglong)(int)local_3ec;
  local_400.Data = (FScriptContainerElement *)0x0;
  local_3f8 = 0;
  if ((int)local_3ec < 0) {
LAB_14a040f34:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar23 & 0xffffffff);
  }
  if (0 < (int)local_3ec) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_3ec,&local_400,0,(int *)((longlong)&local_3f8 + 4));
    uVar22 = uVar27;
    do {
      uVar20 = (uint)uVar22;
      uVar12 = 0;
      if ((int)uVar20 < local_3e0[0]) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
      FVar5.Data = local_3e8.Data;
      if (*(int *)(local_3e8.Data + uVar27 + 0x28) != 0) {
        iVar8 = (int)local_3f8;
        if ((int)local_3f8 == local_3f8._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_400,(int *)((longlong)&local_3f8 + 4));
        }
        local_3f8 = CONCAT44(local_3f8._4_4_,iVar8 + 1);
        *(undefined8 *)(local_400.Data + (longlong)iVar8 * 0xc) =
             *(undefined8 *)(FVar5.Data + uVar27);
        *(undefined4 *)(local_400.Data + (longlong)iVar8 * 0xc + 8) =
             *(undefined4 *)(FVar5.Data + uVar27 + 8);
        local_3b8 = *(ulonglong *)(FVar5.Data + uVar27);
        dVar2 = (local_308->Min).field0_0x0._s_0.X;
        dVar31 = (local_308->Min).field0_0x0._s_0.Z;
        dVar33 = (double)*(int *)(FVar5.Data + uVar27 + 8) * param_4;
        dVar30 = (double)(int)(local_3b8 >> 0x20) * param_4;
        if (dVar33 <= dVar31) {
          dVar31 = dVar33;
        }
        dVar32 = (local_308->Min).field0_0x0._s_0.Y;
        dVar4 = dVar30;
        if (dVar32 <= dVar30) {
          dVar4 = dVar32;
        }
        dVar32 = (double)(int)local_3b8 * param_4;
        if (dVar32 <= dVar2) {
          dVar2 = dVar32;
        }
        (local_308->Min).field0_0x0._s_0.X = dVar2;
        (local_308->Min).field0_0x0._s_0.Y = dVar4;
        (local_308->Min).field0_0x0._s_0.Z = dVar31;
        dVar2 = (local_308->Max).field0_0x0._s_0.X;
        dVar31 = dVar32 + param_4;
        if (dVar32 + param_4 <= dVar2) {
          dVar31 = dVar2;
        }
        dVar2 = (local_308->Max).field0_0x0._s_0.Y;
        dVar32 = dVar30 + param_4;
        if (dVar30 + param_4 <= dVar2) {
          dVar32 = dVar2;
        }
        dVar2 = (local_308->Max).field0_0x0._s_0.Z;
        dVar30 = dVar33 + param_4;
        if (dVar33 + param_4 <= dVar2) {
          dVar30 = dVar2;
        }
        (local_308->Max).field0_0x0._s_0.X = dVar31;
        (local_308->Max).field0_0x0._s_0.Y = dVar32;
        (local_308->Max).field0_0x0._s_0.Z = dVar30;
      }
      uVar22 = (ulonglong)(uVar20 + 1);
      uVar27 = uVar27 + 0x30;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  __return_storage_ptr__ = local_358;
  FVar5.Data = local_400.Data;
  local_400.Data = (FScriptContainerElement *)0x0;
  (local_358->AllocatorInstance).Data = FVar5.Data;
  local_358->ArrayNum = (int)local_3f8;
  local_358->ArrayMax = local_3f8._4_4_;
  local_3f8 = 0;
  if (local_3d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data);
  }
  if (local_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data);
  }
  goto LAB_14a040ed0;
}

// Z_Construct_UClass_AWN_BVC_VoxelVisualizer_NoRegister @ 14a040f60

UClass * __cdecl Z_Construct_UClass_AWN_BVC_VoxelVisualizer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_BVC_VoxelVisualizer",
               &Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.InnerSingleton,
               AWN_BVC_VoxelVisualizer::StaticRegisterNativesAWN_BVC_VoxelVisualizer,0x390,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_BVC_VoxelVisualizer>,
               InternalVTableHelperCtorCaller<AWN_BVC_VoxelVisualizer>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_BVC_VoxelVisualizer.InnerSingleton;
}

// Z_Construct_UClass_AWN_OcclusionVolume_NoRegister @ 14a041020

UClass * __cdecl Z_Construct_UClass_AWN_OcclusionVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_OcclusionVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_OcclusionVolume",
               &Z_Registration_Info_UClass_AWN_OcclusionVolume.InnerSingleton,
               AWN_OcclusionVolume::StaticRegisterNativesAWN_OcclusionVolume,0x388,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_OcclusionVolume>,
               InternalVTableHelperCtorCaller<AWN_OcclusionVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_OcclusionVolume.InnerSingleton;
}

// Z_Construct_UClass_AWN_PhasingVolume_NoRegister @ 14a0410e0

UClass * __cdecl Z_Construct_UClass_AWN_PhasingVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_PhasingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_PhasingVolume",
               &Z_Registration_Info_UClass_AWN_PhasingVolume.InnerSingleton,
               AWN_PhasingVolume::StaticRegisterNativesAWN_PhasingVolume,0x398,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_PhasingVolume>,
               InternalVTableHelperCtorCaller<AWN_PhasingVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_PhasingVolume.InnerSingleton;
}

// Z_Construct_UClass_AWN_StaticMesh_Inherited_NoRegister @ 14a0411a0

UClass * __cdecl Z_Construct_UClass_AWN_StaticMesh_Inherited_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_StaticMesh_Inherited",
               &Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.InnerSingleton,
               AWN_StaticMesh_Inherited::StaticRegisterNativesAWN_StaticMesh_Inherited,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_StaticMesh_Inherited>,
               InternalVTableHelperCtorCaller<AWN_StaticMesh_Inherited>,local_res8,
               AStaticMeshActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.InnerSingleton;
}

// Z_Construct_UClass_AWN_StaticMesh_NoVoxel_NoRegister @ 14a041260

UClass * __cdecl Z_Construct_UClass_AWN_StaticMesh_NoVoxel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_StaticMesh_NoVoxel",
               &Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.InnerSingleton,
               AWN_StaticMesh_NoVoxel::StaticRegisterNativesAWN_StaticMesh_NoVoxel,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_StaticMesh_NoVoxel>,
               InternalVTableHelperCtorCaller<AWN_StaticMesh_NoVoxel>,local_res8,
               AWN_StaticMesh_Inherited::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.InnerSingleton;
}

// Z_Construct_UClass_AWN_StaticMesh_NoWPMerge_NoRegister @ 14a041320

UClass * __cdecl Z_Construct_UClass_AWN_StaticMesh_NoWPMerge_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_StaticMesh_NoWPMerge",
               &Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.InnerSingleton,
               AWN_StaticMesh_NoWPMerge::StaticRegisterNativesAWN_StaticMesh_NoWPMerge,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_StaticMesh_NoWPMerge>,
               InternalVTableHelperCtorCaller<AWN_StaticMesh_NoWPMerge>,local_res8,
               AWN_StaticMesh_Inherited::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.InnerSingleton;
}

// Z_Construct_UClass_AWN_ZoneVolume_NoRegister @ 14a0413e0

UClass * __cdecl Z_Construct_UClass_AWN_ZoneVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ZoneVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_ZoneVolume",
               &Z_Registration_Info_UClass_AWN_ZoneVolume.InnerSingleton,
               AWN_ZoneVolume::StaticRegisterNativesAWN_ZoneVolume,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_ZoneVolume>,InternalVTableHelperCtorCaller<AWN_ZoneVolume>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ZoneVolume.InnerSingleton;
}

// Z_Construct_UClass_UWN_DistrictVolumeComponent_NoRegister @ 14a0414a0

UClass * __cdecl Z_Construct_UClass_UWN_DistrictVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_DistrictVolumeComponent",
               &Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.InnerSingleton,
               UWN_DistrictVolumeComponent::StaticRegisterNativesUWN_DistrictVolumeComponent,0x6a0,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_DistrictVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_DistrictVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_Island_ZoneIDMap_NoRegister @ 14a041560

UClass * __cdecl Z_Construct_UClass_UWN_Island_ZoneIDMap_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_Island_ZoneIDMap",
               &Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.InnerSingleton,
               UWN_Island_ZoneIDMap::StaticRegisterNativesUWN_Island_ZoneIDMap,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UWN_Island_ZoneIDMap>,
               InternalVTableHelperCtorCaller<UWN_Island_ZoneIDMap>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Island_ZoneIDMap.InnerSingleton;
}

// Z_Construct_UClass_UWN_WorldUtils_Subsystem_NoRegister @ 14a041610

UClass * __cdecl Z_Construct_UClass_UWN_WorldUtils_Subsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_WorldUtils_Subsystem",
               &Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.InnerSingleton,
               UWN_WorldUtils_Subsystem::StaticRegisterNativesUWN_WorldUtils_Subsystem,0x288,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_WorldUtils_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_WorldUtils_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.InnerSingleton;
}

// Z_Construct_UEnum_WN_WorldUtils_EWN_SoundPlayMode @ 14a0416d0

UEnum * __cdecl Z_Construct_UEnum_WN_WorldUtils_EWN_SoundPlayMode(void)

{
  if (Z_Registration_Info_UEnum_EWN_SoundPlayMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_SoundPlayMode.InnerSingleton,
               &Z_Construct_UEnum_WN_WorldUtils_EWN_SoundPlayMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_SoundPlayMode.InnerSingleton;
}

// Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditDataType @ 14a041710

UEnum * __cdecl Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditDataType(void)

{
  if (Z_Registration_Info_UEnum_EWN_WorldEditDataType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_WorldEditDataType.InnerSingleton,
               &Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditDataType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_WorldEditDataType.InnerSingleton;
}

// Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditInfo_Type @ 14a041750

UEnum * __cdecl Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditInfo_Type(void)

{
  if (Z_Registration_Info_UEnum_EWN_WorldEditInfo_Type.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_WorldEditInfo_Type.InnerSingleton,
               &Z_Construct_UEnum_WN_WorldUtils_EWN_WorldEditInfo_Type_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_WorldEditInfo_Type.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWN_DistrictInfo @ 14a041790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_DistrictInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_DistrictInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_DistrictInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_DistrictInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_DistrictInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_DistrictInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_IslandInfo @ 14a041810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_IslandInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_IslandInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_IslandInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_IslandInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_IslandInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_IslandInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_PhasingVolumeInfo @ 14a041890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_PhasingVolumeInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_PhasingVolumeInfo.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_PhasingVolumeInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_PhasingVolumeInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_PhasingVolumeInfo.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FWN_PhasingVolumeInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_PropertyInfo @ 14a041910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_PropertyInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_PropertyInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_PropertyInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_PropertyInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_PropertyInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_PropertyInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_ZoneInfo @ 14a041990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_ZoneInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_ZoneInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_ZoneInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_ZoneInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_ZoneInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_ZoneInfo.InnerSingleton;
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

// begin @ 14a041ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorIterator * __cdecl begin(FActorIterator *__return_storage_ptr__,FActorRange *param_1)

{
  EActorIteratorFlags EVar1;
  UWorld *pUVar2;
  UClass *local_res8;
  
  EVar1 = param_1->Flags;
  pUVar2 = param_1->World;
  local_res8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  *(EActorIteratorFlags *)__return_storage_ptr__ = EVar1;
  __return_storage_ptr__->field_0x58 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FActorIteratorState::FActorIteratorState
            ((FActorIteratorState *)&__return_storage_ptr__->field_0x8,pUVar2,
             (TSubclassOf<AActor>)&local_res8);
  __return_storage_ptr__->field_0x58 = 1;
  TActorIteratorBase<FActorIterator>::operator++
            ((TActorIteratorBase<FActorIterator> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_WN_WorldUtils @ 14a0434a0

void __cdecl IMPLEMENT_MODULE_WN_WorldUtils(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'WorldUtils'' @ 15041b450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__WorldUtils__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&WorldUtils);
  return;
}

// `dynamic_atexit_destructor_for_'sWorldInfoCustomVersionRegistration'' @ 15041b470

void __cdecl _dynamic_atexit_destructor_for__sWorldInfoCustomVersionRegistration__(void)

{
  FCurrentCustomVersions::Unregister(&sWorldInfoCustomVersionRegistration.Key);
  return;
}

