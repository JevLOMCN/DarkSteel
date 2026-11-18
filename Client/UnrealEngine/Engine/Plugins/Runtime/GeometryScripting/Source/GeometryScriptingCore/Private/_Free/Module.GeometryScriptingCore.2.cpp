// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 874

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413ba240

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413ba2d0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413ba360

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413ba3f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413ba480

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413ba510

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413ba5a0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413ba630

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413ba6c0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413ba750

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h__Script_GeometryScriptingCore_2744987649'' @ 1413ba7e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h__Script_GeometryScriptingCore_2744987649__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h__Script_GeometryScriptingCore_79081663'' @ 1413ba830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h__Script_GeometryScriptingCore_79081663__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h__Script_GeometryScriptingCore_3244059854'' @ 1413ba880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h__Script_GeometryScriptingCore_3244059854__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPoolFunctions_h__Script_GeometryScriptingCore_3479033508'' @ 1413ba8c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPoolFunctions_h__Script_GeometryScriptingCore_3479033508__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPoolFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h__Script_GeometryScriptingCore_153119224'' @ 1413ba900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h__Script_GeometryScriptingCore_153119224__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h__Script_GeometryScriptingCore_2312744798'' @ 1413ba950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h__Script_GeometryScriptingCore_2312744798__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h__Script_GeometryScriptingCore_1817336802'' @ 1413ba990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h__Script_GeometryScriptingCore_1817336802__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h__Script_GeometryScriptingCore_4247947108'' @ 1413ba9e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h__Script_GeometryScriptingCore_4247947108__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h__Script_GeometryScriptingCore_573663631'' @ 1413baa30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h__Script_GeometryScriptingCore_573663631__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h__Script_GeometryScriptingCore_695266574'' @ 1413baa80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h__Script_GeometryScriptingCore_695266574__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h__Script_GeometryScriptingCore_4207164343'' @ 1413baad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h__Script_GeometryScriptingCore_4207164343__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h__Script_GeometryScriptingCore_2714875648'' @ 1413bab20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h__Script_GeometryScriptingCore_2714875648__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h__Script_GeometryScriptingCore_2096587262'' @ 1413bab60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h__Script_GeometryScriptingCore_2096587262__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h__Script_GeometryScriptingCore_29946600'' @ 1413babb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h__Script_GeometryScriptingCore_29946600__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h__Script_GeometryScriptingCore_521999943'' @ 1413bac00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h__Script_GeometryScriptingCore_521999943__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h__Script_GeometryScriptingCore_1855104413'' @ 1413bac50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h__Script_GeometryScriptingCore_1855104413__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h__Script_GeometryScriptingCore_609427311'' @ 1413bac90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h__Script_GeometryScriptingCore_609427311__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryScriptingCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h__Script_GeometryScriptingCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h__Script_GeometryScriptingCore_Statics
             ::ScriptStructInfo,9,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h__Script_GeometryScriptingCore_Statics
             ::EnumInfo,4);
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling @ 14ce16c20

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties @ 14ce16c60

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_CreateConstrainedEdgesChain @ 14ce16ca0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_CreateConstrainedEdgesChain
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_CreateConstrainedEdgesChain_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList @ 14ce16ce0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges @ 14ce16e40

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection @ 14ce16e80

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bProcessAllIfEmptySelection_SetBit @ 14ce16ec0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshProjectionSettings_Statics::
NewProp_bProcessAllIfEmptySelection_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_CreateConstrainedEdgesLoop @ 14ce16ed0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_CreateConstrainedEdgesLoop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_CreateConstrainedEdgesLoop_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bResetUVsForUnmatched_SetBit @ 14ce16f10

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshProjectionSettings_Statics::
NewProp_bResetUVsForUnmatched_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 14ce16f20

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshProjectionSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshProjectionSettings,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshProjectionSettings>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshProjectionSettings>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshProjectionSettings>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshProjectionSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDisable_SetBit @ 14ce16fb0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics
::NewProp_bDisable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection @ 14ce17050

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bContract_SetBit @ 14ce17220

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics
::NewProp_bContract_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bOnlyExpandToFaceNeighbours_SetBit @ 14ce17230

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics
::NewProp_bOnlyExpandToFaceNeighbours_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection @ 14ce17280

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshPoolFunctions @ 14ce172c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshPoolFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshPoolFunctions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.OuterSingleton;
}

// NewProp_bIsValidUVSet_SetBit @ 14ce17300

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AddUVElementToMesh_Statics::
NewProp_bIsValidUVSet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce17310

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AddUVElementToMesh_Statics::
NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPoolFunctions_DiscardGlobalMeshPool @ 14ce17320

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPoolFunctions_DiscardGlobalMeshPool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPoolFunctions_DiscardGlobalMeshPool_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AddUVElementToMesh @ 14ce17360

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AddUVElementToMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AddUVElementToMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPoolFunctions_GetGlobalMeshPool @ 14ce173a0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPoolFunctions_GetGlobalMeshPool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPoolFunctions_GetGlobalMeshPool_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected @ 14ce173e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ApplyTexelDensityUVScaling @ 14ce17670

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ApplyTexelDensityUVScaling(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ApplyTexelDensityUVScaling_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo @ 14ce176b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshUniqueSelectionInfo @ 14ce17830

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshUniqueSelectionInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshUniqueSelectionInfo_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs @ 14ce178b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnlyToConnected_SetBit @ 14ce178f0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::
NewProp_bOnlyToConnected_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeRenderCaptureCamerasForBox @ 14ce17910

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeRenderCaptureCamerasForBox
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeRenderCaptureCamerasForBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection @ 14ce17970

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs @ 14ce179b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions @ 14ce17a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection @ 14ce17a60

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode @ 14ce17aa0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode @ 14ce17ae0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType @ 14ce17b20

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea @ 14ce17b60

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions @ 14ce17ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshBevelOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshBevelOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshBevelOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshBevelOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions @ 14ce17c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions @ 14ce17ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions @ 14ce17d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshExtrudeOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshExtrudeOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshExtrudeOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshExtrudeOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions @ 14ce17da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions @ 14ce17e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions @ 14ce17ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions @ 14ce17f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshOffsetOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshOffsetOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshOffsetOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshOffsetOptions.InnerSingleton;
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

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshBoundaryEdges @ 14ce18050

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshBoundaryEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshBoundaryEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptMeshEditPolygroupMode_StaticEnum @ 14ce18090

UEnum * __cdecl EGeometryScriptMeshEditPolygroupMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode,
                       (UObject *)pUVar1,L"EGeometryScriptMeshEditPolygroupMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ClearUVChannel @ 14ce180d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ClearUVChannel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ClearUVChannel_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeRenderCapturePointSampling @ 14ce18110

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeRenderCapturePointSampling
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeRenderCapturePointSampling_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce18240

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshEditPolygroupOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshEditPolygroupOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshEditPolygroupOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshEditPolygroupOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshEditPolygroupOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseInterpolatedNormal_SetBit @ 14ce18280

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ComputeMeshLocalUVParam_Statics::
NewProp_bUseInterpolatedNormal_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByMaterialID @ 14ce182d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByMaterialID
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByMaterialID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeUniformRandomPointSampling @ 14ce18450

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeUniformRandomPointSampling
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeUniformRandomPointSampling_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInvert_SetBit @ 14ce18490

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics
::NewProp_bInvert_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ComputeMeshLocalUVParam @ 14ce184e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ComputeMeshLocalUVParam(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ComputeMeshLocalUVParam_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle @ 14ce185a0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFoundTopologyErrors_SetBit @ 14ce185e0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::
NewProp_bFoundTopologyErrors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bIsValidUVSet_SetBit @ 14ce185f0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::
NewProp_bIsValidUVSet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_bOnlyUVPositions_SetBit @ 14ce18600

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::
NewProp_bOnlyUVPositions_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// NewProp_bFixedBoundary_SetBit @ 14ce18610

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bFixedBoundary_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bReprojectDuringSmoothing_SetBit @ 14ce18620

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::
NewProp_bReprojectDuringSmoothing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14ce18630

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshOffsetOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshOffsetOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshOffsetOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshOffsetOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshOffsetOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling @ 14ce18670

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer @ 14ce187a0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByPolygroup @ 14ce18820

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByPolygroup
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByPolygroup_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInvert_SetBit @ 14ce18a80

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics
::NewProp_bInvert_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// EGeometryScriptPolyOperationArea_StaticEnum @ 14ce18b80

UEnum * __cdecl EGeometryScriptPolyOperationArea_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea,
                       (UObject *)pUVar1,L"EGeometryScriptPolyOperationArea");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox @ 14ce18bc0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSolidsToShells_SetBit @ 14ce18c50

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_bSolidsToShells_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewStructOps @ 14ce18c60

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshExtrudeOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshExtrudeOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshExtrudeOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshExtrudeOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshExtrudeOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInvert_SetBit @ 14ce18ca0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics
::NewProp_bInvert_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewProp_bInvalidTopology_SetBit @ 14ce18ce0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::
NewProp_bInvalidTopology_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bIsValidUVSet_SetBit @ 14ce18d10

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::
NewProp_bIsValidUVSet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh @ 14ce18d20

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions @ 14ce18d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptClusterSimplifyConstraintLevel @ 14ce18df0

UEnum * __cdecl
Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptClusterSimplifyConstraintLevel(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptClusterSimplifyConstraintLevel.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptClusterSimplifyConstraintLevel.
                InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptClusterSimplifyConstraintLevel_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptClusterSimplifyConstraintLevel.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType @ 14ce18e30

UEnum * __cdecl
Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.InnerSingleton
               ,&Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics
                 ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions @ 14ce18e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions
                .InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions @ 14ce18ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions @ 14ce18f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPlanarSimplifyOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptPlanarSimplifyOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPlanarSimplifyOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptPlanarSimplifyOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions @ 14ce18ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions @ 14ce19070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSimplifyMeshOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptSimplifyMeshOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSimplifyMeshOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptSimplifyMeshOptions.InnerSingleton;
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

// NewProp_bAutoCompact_SetBit @ 14ce190f0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_bAutoCompact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// EGeometryScriptLinearExtrudeDirection_StaticEnum @ 14ce19100

UEnum * __cdecl EGeometryScriptLinearExtrudeDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection
                       ,(UObject *)pUVar1,L"EGeometryScriptLinearExtrudeDirection");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.OuterSingleton;
}

// NewStructOps @ 14ce19140

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptPlanarSimplifyOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptPlanarSimplifyOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPlanarSimplifyOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptPlanarSimplifyOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptPlanarSimplifyOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInvert_SetBit @ 14ce19180

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics
::NewProp_bInvert_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh @ 14ce19190

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSolidsToShells_SetBit @ 14ce19250

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::
NewProp_bSolidsToShells_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 14ce19260

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshLinearExtrudeOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshLinearExtrudeOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshLinearExtrudeOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshLinearExtrudeOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshLinearExtrudeOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere @ 14ce192a0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet @ 14ce193a0

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInvert_SetBit @ 14ce193e0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics
::NewProp_bInvert_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bAutoCompact_SetBit @ 14ce193f0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::
NewProp_bAutoCompact_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14ce19400

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptPolygroupSimplifyOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptPolygroupSimplifyOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPolygroupSimplifyOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptPolygroupSimplifyOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptPolygroupSimplifyOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsValidUVSet_SetBit @ 14ce19460

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::
NewProp_bIsValidUVSet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bHasVertexIDGaps_SetBit @ 14ce19490

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::
NewProp_bHasVertexIDGaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_bHasSplitUVs_SetBit @ 14ce194b0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::
NewProp_bHasSplitUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions @ 14ce194c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane @ 14ce19500

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidTriangle_SetBit @ 14ce19540

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics
::NewProp_bIsValidTriangle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// EGeometryScriptOffsetFacesType_StaticEnum @ 14ce19580

UEnum * __cdecl EGeometryScriptOffsetFacesType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType,
                       (UObject *)pUVar1,L"EGeometryScriptOffsetFacesType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs @ 14ce195c0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExcludeMeshBoundaryEdges_SetBit @ 14ce19600

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshPolyGroupBoundaryEdges_Statics
::NewProp_bExcludeMeshBoundaryEdges_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// EGeometryScriptRemoveMeshSimplificationType_StaticEnum @ 14ce196b0

UEnum * __cdecl EGeometryScriptRemoveMeshSimplificationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType
                       ,(UObject *)pUVar1,L"EGeometryScriptRemoveMeshSimplificationType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords @ 14ce196f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSolidsToShells_SetBit @ 14ce19760

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::
NewProp_bSolidsToShells_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewStructOps @ 14ce19780

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshOffsetFacesOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshOffsetFacesOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshOffsetFacesOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshOffsetFacesOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshOffsetFacesOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshPolyGroupBoundaryEdges @ 14ce197c0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshPolyGroupBoundaryEdges
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshPolyGroupBoundaryEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHaveValidUVs_SetBit @ 14ce19800

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshTriangleUVElementIDs_Statics::
NewProp_bHaveValidUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bAllowSeamCollapse_SetBit @ 14ce19890

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::
NewProp_bAllowSeamCollapse_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bAllowSeamSmoothing_SetBit @ 14ce198a0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::
NewProp_bAllowSeamSmoothing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bAllowSeamSplits_SetBit @ 14ce198b0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::
NewProp_bAllowSeamSplits_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bPreserveVertexPositions_SetBit @ 14ce198c0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::
NewProp_bPreserveVertexPositions_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions @ 14ce198d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.OuterSingleton;
}

// NewProp_bRetainQuadricMemory_SetBit @ 14ce19910

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::
NewProp_bRetainQuadricMemory_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolygonFillMode @ 14ce19920

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolygonFillMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptPolygonFillMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptPolygonFillMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolygonFillMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPolygonFillMode.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode @ 14ce19960

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode @ 14ce199a0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.InnerSingleton;
}

// NewProp_bAutoCompact_SetBit @ 14ce199e0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAutoCompact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode @ 14ce199f0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions @ 14ce19a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions
                .InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions.
           InnerSingleton;
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

// NewProp_bHaveValidUVs_SetBit @ 14ce19ab0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllSplitUVsAtVertex_Statics::
NewProp_bHaveValidUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions @ 14ce19ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions @ 14ce19b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPrimitiveOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptPrimitiveOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPrimitiveOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptPrimitiveOptions.InnerSingleton;
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

// NewStructOps @ 14ce19bc0

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptSimplifyMeshOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptSimplifyMeshOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSimplifyMeshOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptSimplifyMeshOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptSimplifyMeshOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions @ 14ce19c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRevolveOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptRevolveOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRevolveOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptRevolveOptions.InnerSingleton;
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

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshTriangleUVElementIDs @ 14ce19c80

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshTriangleUVElementIDs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshTriangleUVElementIDs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions @ 14ce19cc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptVoronoiOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptVoronoiOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptVoronoiOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptVoronoiOptions.InnerSingleton;
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

// EGeometryScriptPrimitivePolygroupMode_StaticEnum @ 14ce19d40

UEnum * __cdecl EGeometryScriptPrimitivePolygroupMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode
                       ,(UObject *)pUVar1,L"EGeometryScriptPrimitivePolygroupMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshSharpEdges @ 14ce19d80

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshSharpEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshSharpEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptPrimitiveOriginMode_StaticEnum @ 14ce19e40

UEnum * __cdecl EGeometryScriptPrimitiveOriginMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode,
                       (UObject *)pUVar1,L"EGeometryScriptPrimitiveOriginMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.OuterSingleton;
}

// NewProp_bIsValidElementID_SetBit @ 14ce19e80

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVElementPosition_Statics::
NewProp_bIsValidElementID_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllSplitUVsAtVertex @ 14ce19e90

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllSplitUVsAtVertex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllSplitUVsAtVertex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptPrimitiveUVMode_StaticEnum @ 14ce1a080

UEnum * __cdecl EGeometryScriptPrimitiveUVMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode,
                       (UObject *)pUVar1,L"EGeometryScriptPrimitiveUVMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.OuterSingleton;
}

// NewProp_bReproject_SetBit @ 14ce1a0d0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::
NewProp_bReproject_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bBoundaryOnly_SetBit @ 14ce1a0e0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::
NewProp_bBoundaryOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshSplitNormalEdges @ 14ce1a0f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshSplitNormalEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshSplitNormalEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVElementPosition @ 14ce1a130

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVElementPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVElementPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasTriangleIDGaps_SetBit @ 14ce1a170

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::
NewProp_bHasTriangleIDGaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14ce1a180

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshInsetOutsetFacesOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshInsetOutsetFacesOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshInsetOutsetFacesOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshInsetOutsetFacesOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshInsetOutsetFacesOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EGeometryScriptPolygonFillMode_StaticEnum @ 14ce1a1c0

UEnum * __cdecl EGeometryScriptPolygonFillMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPolygonFillMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPolygonFillMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolygonFillMode,
                       (UObject *)pUVar1,L"EGeometryScriptPolygonFillMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPolygonFillMode.OuterSingleton;
}

// NewProp_bHaveValidUVs_SetBit @ 14ce1a350

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshUVSeamEdges_Statics::
NewProp_bHaveValidUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bExcludeMeshBoundaryEdges_SetBit @ 14ce1a360

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshUVSeamEdges_Statics::
NewProp_bExcludeMeshBoundaryEdges_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs @ 14ce1a430

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidUVSet_SetBit @ 14ce1a470

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::
NewProp_bIsValidUVSet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// NewProp_bFoundUnsetUVs_SetBit @ 14ce1a480

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::
NewProp_bFoundUnsetUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x91) = 1;
  return;
}

// EGeometryScriptClusterSimplifyConstraintLevel_StaticEnum @ 14ce1a490

UEnum * __cdecl EGeometryScriptClusterSimplifyConstraintLevel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptClusterSimplifyConstraintLevel.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptClusterSimplifyConstraintLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptClusterSimplifyConstraintLevel
                       ,(UObject *)pUVar1,L"EGeometryScriptClusterSimplifyConstraintLevel");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptClusterSimplifyConstraintLevel.OuterSingleton;
}

// NewProp_bOnlyIncludeValidUVTris_SetBit @ 14ce1a4d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::
NewProp_bOnlyIncludeValidUVTris_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x92) = 1;
  return;
}

// NewProp_bFlipOrientation_SetBit @ 14ce1a4e0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewProp_bFlipOrientation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14ce1a4f0

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptPrimitiveOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptPrimitiveOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPrimitiveOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptPrimitiveOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptPrimitiveOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSkipGaps_SetBit @ 14ce1a530

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::
NewProp_bSkipGaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshUVSeamEdges @ 14ce1a540

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshUVSeamEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshUVSeamEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasTriangleIDGaps_SetBit @ 14ce1a580

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::
NewProp_bHasTriangleIDGaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewStructOps @ 14ce1a590

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyEdgeConstraintOptions_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 6;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptClusterSimplifyEdgeConstraintOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptClusterSimplifyEdgeConstraintOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptClusterSimplifyEdgeConstraintOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptClusterSimplifyEdgeConstraintOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptClusterSimplifyEdgeConstraintOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bExcludeMeshBoundaryEdges_SetBit @ 14ce1a5d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectSelectionBoundaryEdges_Statics
::NewProp_bExcludeMeshBoundaryEdges_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices @ 14ce1a5e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo @ 14ce1a620

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInferMaterialID_SetBit @ 14ce1a660

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bInferMaterialID_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bApplyFilterBox_SetBit @ 14ce1a670

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bApplyFilterBox_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bFullyContained_SetBit @ 14ce1a680

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bFullyContained_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewStructOps @ 14ce1a690

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshBevelOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshBevelOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshBevelOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshBevelOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshBevelOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectSelectionBoundaryEdges @ 14ce1a6d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectSelectionBoundaryEdges
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectSelectionBoundaryEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHaveValidUVs_SetBit @ 14ce1a710

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllUVSeamEdges_Statics::
NewProp_bHaveValidUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bWrappedToUnitRange_SetBit @ 14ce1a7e0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_IntersectsUVBox2D_Statics::
NewProp_bWrappedToUnitRange_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14ce1a7f0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_IntersectsUVBox2D_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewProp_bReverseDirection_SetBit @ 14ce1a800

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bReverseDirection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bHardNormals_SetBit @ 14ce1a810

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bHardNormals_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bProfileAtMidpoint_SetBit @ 14ce1a820

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewProp_bProfileAtMidpoint_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bFillPartialRevolveEndcaps_SetBit @ 14ce1a830

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::
NewProp_bFillPartialRevolveEndcaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllUVSeamEdges @ 14ce1a840

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllUVSeamEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllUVSeamEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce1a880

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptRevolveOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptRevolveOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRevolveOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptRevolveOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptRevolveOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_IntersectsUVBox2D @ 14ce1a8c0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_IntersectsUVBox2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_IntersectsUVBox2D_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDiscardAttributes_SetBit @ 14ce1a900

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions_Statics::
NewProp_bDiscardAttributes_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bHasVertexIDGaps_SetBit @ 14ce1a940

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::
NewProp_bHasVertexIDGaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14ce1a980

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptClusterSimplifyMeshOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptClusterSimplifyMeshOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptClusterSimplifyMeshOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptClusterSimplifyMeshOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptClusterSimplifyMeshOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptClusterSimplifyMeshOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs @ 14ce1aa40

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptMeshBevelSelectionMode_StaticEnum @ 14ce1aab0

UEnum * __cdecl EGeometryScriptMeshBevelSelectionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode
                       ,(UObject *)pUVar1,L"EGeometryScriptMeshBevelSelectionMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_LayoutMeshUVs @ 14ce1aaf0

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_LayoutMeshUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_LayoutMeshUVs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSkipGaps_SetBit @ 14ce1ab30

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::
NewProp_bSkipGaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bHasVertexIDGaps_SetBit @ 14ce1ab40

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::
NewProp_bHasVertexIDGaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bInferMaterialID_SetBit @ 14ce1ab50

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::
NewProp_bInferMaterialID_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14ce1ab60

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshBevelSelectionOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshBevelSelectionOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshBevelSelectionOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshBevelSelectionOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshBevelSelectionOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIncludeBoundary_SetBit @ 14ce1aba0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewProp_bIncludeBoundary_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewStructOps @ 14ce1abb0

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptVoronoiOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptVoronoiOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptVoronoiOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptVoronoiOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptVoronoiOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions @ 14ce1abf0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs @ 14ce1ac60

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplyClusterSimplifyToEdgeLength @ 14ce1ace0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplyClusterSimplifyToEdgeLength
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplyClusterSimplifyToEdgeLength_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositionsAtEdges @ 14ce1ada0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositionsAtEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositionsAtEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs @ 14ce1adf0

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1ae30

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplyEditorSimplifyToTriangleCount @ 14ce1ae80

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplyEditorSimplifyToTriangleCount
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplyEditorSimplifyToTriangleCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bValidateEdgesInResult_SetBit @ 14ce1aec0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions_Statics::
NewProp_bValidateEdgesInResult_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bRemoveDuplicateVertices_SetBit @ 14ce1aed0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions_Statics::
NewProp_bRemoveDuplicateVertices_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewStructOps @ 14ce1aee0

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions_Statics::
NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptConstrainedDelaunayTriangulationOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptConstrainedDelaunayTriangulationOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptConstrainedDelaunayTriangulationOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptConstrainedDelaunayTriangulationOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptConstrainedDelaunayTriangulationOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs @ 14ce1af20

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelEdgeSelection @ 14ce1af60

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelEdgeSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelEdgeSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1afa0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs @ 14ce1afb0

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplyEditorSimplifyToVertexCount @ 14ce1aff0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplyEditorSimplifyToVertexCount
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplyEditorSimplifyToVertexCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups @ 14ce1b030

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1b070

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bStillAppendOnTriangulationError_SetBit @ 14ce1b080

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions_Statics::
NewProp_bStillAppendOnTriangulationError_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToEdgeLength @ 14ce1b090

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToEdgeLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToEdgeLength_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce1b0d0

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptPolygonsTriangulationOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptPolygonsTriangulationOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPolygonsTriangulationOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptPolygonsTriangulationOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptPolygonsTriangulationOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps @ 14ce1b110

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs @ 14ce1b150

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection @ 14ce1b190

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1b1d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bIsValidTriangle_SetBit @ 14ce1b220

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVElementIDs_Statics::
NewProp_bIsValidTriangle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1b230

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVElementIDs_Statics::
NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// NewProp_bAllowBowtiesInOutput_SetBit @ 14ce1b250

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics
::NewProp_bAllowBowtiesInOutput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals @ 14ce1b260

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar @ 14ce1b2a0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions @ 14ce1b2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14ce1b320

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bAlreadyExisted_SetBit @ 14ce1b360

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_AddNamedPolygroupLayer_Statics::
NewProp_bAlreadyExisted_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces @ 14ce1b370

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVElementIDs @ 14ce1b3b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVElementIDs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVElementIDs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors @ 14ce1b3f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology @ 14ce1b430

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_AddNamedPolygroupLayer @ 14ce1b470

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_AddNamedPolygroupLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_AddNamedPolygroupLayer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1b4b0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bIsValidTriangle_SetBit @ 14ce1b4c0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::
NewProp_bIsValidTriangle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1b4d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::
NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFacesAlongEdges @ 14ce1b4e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFacesAlongEdges
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFacesAlongEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps @ 14ce1b520

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoundingBox @ 14ce1b5d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoundingBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoundingBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs @ 14ce1b610

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTriHasValidNormals_SetBit @ 14ce1b650

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics
::NewProp_bTriHasValidNormals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance @ 14ce1b660

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups @ 14ce1b6e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidElementID_SetBit @ 14ce1b7a0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVElementPosition_Statics::
NewProp_bIsValidElementID_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1b7c0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVElementPosition_Statics::
NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces @ 14ce1b7d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal @ 14ce1b810

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount @ 14ce1b890

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTriHasValidElements_SetBit @ 14ce1b8d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics
::NewProp_bTriHasValidElements_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold @ 14ce1b8e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVElementPosition @ 14ce1b920

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVElementPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVElementPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoundingBoxWithCollision @ 14ce1b960

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoundingBoxWithCollision
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoundingBoxWithCollision_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions @ 14ce1b9a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes @ 14ce1b9e0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions @ 14ce1ba20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptCalculateNormalsOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptCalculateNormalsOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptCalculateNormalsOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptCalculateNormalsOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions @ 14ce1baa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSplitNormalsOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptSplitNormalsOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSplitNormalsOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptSplitNormalsOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions @ 14ce1bb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptTangentsOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptTangentsOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptTangentsOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptTangentsOptions.InnerSingleton;
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

// NewProp_bAngleWeighted_SetBit @ 14ce1bba0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::
NewProp_bAngleWeighted_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bAreaWeighted_SetBit @ 14ce1bbb0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::
NewProp_bAreaWeighted_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0 @ 14ce1bbc0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce1bc00

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptCalculateNormalsOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptCalculateNormalsOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptCalculateNormalsOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptCalculateNormalsOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptCalculateNormalsOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRespectUVSeams_SetBit @ 14ce1bc40

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics
::NewProp_bRespectUVSeams_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bRespectHardNormals_SetBit @ 14ce1bc50

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics
::NewProp_bRespectHardNormals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents @ 14ce1bc60

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount @ 14ce1bca0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection @ 14ce1bce0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidTriangle_SetBit @ 14ce1bd20

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics
::NewProp_bIsValidTriangle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces @ 14ce1bd30

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection @ 14ce1bd70

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox @ 14ce1bdb0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition @ 14ce1be30

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSplitByOpeningAngle_SetBit @ 14ce1beb0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::
NewProp_bSplitByOpeningAngle_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bSplitByFaceGroup_SetBit @ 14ce1bec0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::
NewProp_bSplitByFaceGroup_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14ce1bed0

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptSplitNormalsOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptSplitNormalsOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSplitNormalsOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptSplitNormalsOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptSplitNormalsOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces @ 14ce1c040

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection @ 14ce1c080

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTriHasValidUVs_SetBit @ 14ce1c100

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::
NewProp_bTriHasValidUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups @ 14ce1c110

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV @ 14ce1c2b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset @ 14ce1c2f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups @ 14ce1c370

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection @ 14ce1c3b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoxWithCollision @ 14ce1c3f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoxWithCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBoxWithCollision_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTriHasValidVertexColors_SetBit @ 14ce1c430

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics
::NewProp_bTriHasValidVertexColors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// EGeometryScriptTangentTypes_StaticEnum @ 14ce1c440

UEnum * __cdecl EGeometryScriptTangentTypes_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes,
                       (UObject *)pUVar1,L"EGeometryScriptTangentTypes");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces @ 14ce1c5e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor @ 14ce1c620

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer @ 14ce1c660

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce1c6a0

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptTangentsOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptTangentsOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptTangentsOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptTangentsOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptTangentsOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets @ 14ce1c6e0

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1c770

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1c780

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics
::NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bInsertSeams_SetBit @ 14ce1c790

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetUVSeamsAlongSelectedEdges_Statics::
NewProp_bInsertSeams_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1c7a0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetUVSeamsAlongSelectedEdges_Statics::
NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule @ 14ce1c7b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel @ 14ce1c7f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh @ 14ce1c830

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup @ 14ce1c870

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1c8b0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetUVSeamsAlongSelectedEdges @ 14ce1c8c0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetUVSeamsAlongSelectedEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetUVSeamsAlongSelectedEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh @ 14ce1c900

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell @ 14ce1c940

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups @ 14ce1c980

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals @ 14ce1c9c0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox @ 14ce1ca00

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsuleWithCollision @ 14ce1ca40

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsuleWithCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsuleWithCollision_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1ca80

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals @ 14ce1cad0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TransferMeshUVsByProjection @ 14ce1cb10

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TransferMeshUVsByProjection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TransferMeshUVsByProjection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet @ 14ce1cb50

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_FindExtendedPolygroupLayerByName @ 14ce1cb90

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_FindExtendedPolygroupLayerByName
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_FindExtendedPolygroupLayerByName_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCapped_SetBit @ 14ce1cbd0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics::
NewProp_bCapped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString @ 14ce1ccf0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents @ 14ce1cd30

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone @ 14ce1cda0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs @ 14ce1cde0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidUVChannel_SetBit @ 14ce1ce20

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshUVArea_Statics::
NewProp_bIsValidUVChannel_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs @ 14ce1ce30

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshUVArea @ 14ce1ce70

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshUVArea(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshUVArea_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents @ 14ce1ceb0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFloating_SetBit @ 14ce1cef0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics::
NewProp_bFloating_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  return;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions @ 14ce1cf00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions @ 14ce1cf40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions.InnerSingleton;
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

// NewProp_bRecomputeNormals_SetBit @ 14ce1cfc0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions_Statics::
NewProp_bRecomputeNormals_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14ce1cfd0

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptSculptLayerUpdateOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptSculptLayerUpdateOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSculptLayerUpdateOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptSculptLayerUpdateOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptSculptLayerUpdateOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupBoundingBox @ 14ce1d010

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupBoundingBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupBoundingBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals @ 14ce1d0d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea @ 14ce1d110

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs @ 14ce1d150

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFlipTriangleOrientation_SetBit @ 14ce1d1d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipTriangleSelectionNormals_Statics
::NewProp_bFlipTriangleOrientation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bFlipNormalDirection_SetBit @ 14ce1d1e0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipTriangleSelectionNormals_Statics
::NewProp_bFlipNormalDirection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh @ 14ce1d1f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeAreaCenter @ 14ce1d230

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeAreaCenter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeAreaCenter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCapped_SetBit @ 14ce1d270

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics::
NewProp_bCapped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipTriangleSelectionNormals @ 14ce1d280

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipTriangleSelectionNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_FlipTriangleSelectionNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupUVBoundingBox @ 14ce1d2c0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupUVBoundingBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupUVBoundingBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasTangents_SetBit @ 14ce1d300

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics::
NewProp_bHasTangents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents @ 14ce1d310

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_DiscardSculptLayers @ 14ce1d350

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_DiscardSculptLayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_DiscardSculptLayers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder @ 14ce1d390

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents @ 14ce1d3d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValid_SetBit @ 14ce1d410

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupUVCentroid_Statics::
NewProp_bIsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers @ 14ce1d420

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_EnableSculptLayers @ 14ce1d460

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_EnableSculptLayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_EnableSculptLayers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidNormalSet_SetBit @ 14ce1d4a0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::
NewProp_bIsValidNormalSet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bHasVertexIDGaps_SetBit @ 14ce1d4b0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::
NewProp_bHasVertexIDGaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bAverageSplitVertexValues_SetBit @ 14ce1d4c0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics::
NewProp_bAverageSplitVertexValues_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupUVCentroid @ 14ce1d4d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupUVCentroid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolyGroupUVCentroid_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions @ 14ce1d510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType @ 14ce1d550

UEnum * __cdecl
Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType @ 14ce1d590

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType @ 14ce1d5d0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions @ 14ce1d610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRemeshOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptRemeshOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRemeshOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptRemeshOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions @ 14ce1d690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptUniformRemeshOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptUniformRemeshOptions.InnerSingleton
               ,&Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptUniformRemeshOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptUniformRemeshOptions.InnerSingleton;
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

// EGeometryScriptUniformRemeshTargetType_StaticEnum @ 14ce1d710

UEnum * __cdecl EGeometryScriptUniformRemeshTargetType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType
                       ,(UObject *)pUVar1,L"EGeometryScriptUniformRemeshTargetType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges @ 14ce1d750

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_GetActiveSculptLayer @ 14ce1d790

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_GetActiveSculptLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_GetActiveSculptLayer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAmbiguousTopologyFound_SetBit @ 14ce1d7d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::
NewProp_bAmbiguousTopologyFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bIsValidTriangle_SetBit @ 14ce1d7e0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::
NewProp_bIsValidTriangle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// EGeometryScriptRemeshEdgeConstraintType_StaticEnum @ 14ce1d7f0

UEnum * __cdecl EGeometryScriptRemeshEdgeConstraintType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType
                       ,(UObject *)pUVar1,L"EGeometryScriptRemeshEdgeConstraintType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals @ 14ce1d830

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops @ 14ce1d870

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_GetNumSculptLayers @ 14ce1d8b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_GetNumSculptLayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_GetNumSculptLayers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptRemeshSmoothingType_StaticEnum @ 14ce1d8f0

UEnum * __cdecl EGeometryScriptRemeshSmoothingType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType,
                       (UObject *)pUVar1,L"EGeometryScriptRemeshSmoothingType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID @ 14ce1d930

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidTangentSet_SetBit @ 14ce1d970

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::
NewProp_bIsValidTangentSet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bHasVertexIDGaps_SetBit @ 14ce1d980

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::
NewProp_bHasVertexIDGaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bAverageSplitVertexValues_SetBit @ 14ce1d9a0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics::
NewProp_bAverageSplitVertexValues_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// NewProp_bDiscardAttributes_SetBit @ 14ce1d9d0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bDiscardAttributes_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bReprojectToInputMesh_SetBit @ 14ce1d9e0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bReprojectToInputMesh_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs @ 14ce1d9f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_GetSculptLayerWeightsArray @ 14ce1da30

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_GetSculptLayerWeightsArray
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_GetSculptLayerWeightsArray_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowFlips_SetBit @ 14ce1da70

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowFlips_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  return;
}

// NewProp_bAllowSplits_SetBit @ 14ce1da80

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowSplits_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bAllowCollapses_SetBit @ 14ce1da90

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowCollapses_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bPreventNormalFlips_SetBit @ 14ce1dad0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventNormalFlips_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewProp_bPreventTinyTriangles_SetBit @ 14ce1dae0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventTinyTriangles_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf) = 1;
  return;
}

// NewProp_bIsValidUVChannel_SetBit @ 14ce1daf0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVIslands_Statics::
NewProp_bIsValidUVChannel_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUseFullRemeshPasses_SetBit @ 14ce1db00

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bUseFullRemeshPasses_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup @ 14ce1db10

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoCompact_SetBit @ 14ce1db50

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAutoCompact_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14ce1db60

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptRemeshOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptRemeshOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRemeshOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptRemeshOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptRemeshOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents @ 14ce1dba0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseWeights_SetBit @ 14ce1dbe0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_MergeSculptLayers_Statics::
NewProp_bUseWeights_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVIslands @ 14ce1dc60

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVIslands(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVIslands_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1dca0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics::
NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_MergeSculptLayers @ 14ce1dcf0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_MergeSculptLayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_MergeSculptLayers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers @ 14ce1dd30

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets @ 14ce1dd70

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals @ 14ce1ddb0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bGenerateNewPolygroup_SetBit @ 14ce1ddf0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics
::NewProp_bGenerateNewPolygroup_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1de00

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics
::NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1de10

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormalsForMeshSelection_Statics
::NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_SetActiveSculptLayer @ 14ce1de20

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_SetActiveSculptLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_SetActiveSculptLayer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs @ 14ce1de60

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection @ 14ce1dea0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidTriangle_SetBit @ 14ce1dee0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::
NewProp_bIsValidTriangle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormalsForMeshSelection @ 14ce1def0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormalsForMeshSelection
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormalsForMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions @ 14ce1df30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType @ 14ce1df70

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType(void)

{
  if (Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions @ 14ce1dfb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPNTessellateOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptPNTessellateOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPNTessellateOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptPNTessellateOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions @ 14ce1e030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSelectiveTessellateOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptSelectiveTessellateOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSelectiveTessellateOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptSelectiveTessellateOptions.
           InnerSingleton;
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

// NewProp_bRecomputeNormals_SetBit @ 14ce1e0b0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::
NewProp_bRecomputeNormals_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14ce1e0c0

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptPNTessellateOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptPNTessellateOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPNTessellateOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptPNTessellateOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptPNTessellateOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal @ 14ce1e100

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_SetSculptLayerWeight @ 14ce1e140

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_SetSculptLayerWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_SetSculptLayerWeight_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce1e180

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptUniformRemeshOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptUniformRemeshOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptUniformRemeshOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptUniformRemeshOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptUniformRemeshOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsValidTriangle_SetBit @ 14ce1e1c0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::
NewProp_bIsValidTriangle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals @ 14ce1e1d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices @ 14ce1e230

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasDuplicateVertices_SetBit @ 14ce1e280

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDelaunayTriangulation2D_Statics
::NewProp_bHasDuplicateVertices_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_SetSculptLayerWeightsArray @ 14ce1e290

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_SetSculptLayerWeightsArray
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSculptLayersFunctions_SetSculptLayerWeightsArray_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ESelectiveTessellatePatternType_StaticEnum @ 14ce1e2d0

UEnum * __cdecl ESelectiveTessellatePatternType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType,
                       (UObject *)pUVar1,L"ESelectiveTessellatePatternType");
  }
  return Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.OuterSingleton;
}

// NewProp_bTriHasValidNormals_SetBit @ 14ce1e340

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::
NewProp_bTriHasValidNormals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents @ 14ce1e350

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableMultithreading_SetBit @ 14ce1e390

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::
NewProp_bEnableMultithreading_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDelaunayTriangulation2D @ 14ce1e3a0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDelaunayTriangulation2D
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDelaunayTriangulation2D_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce1e3e0

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptSelectiveTessellateOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptSelectiveTessellateOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSelectiveTessellateOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptSelectiveTessellateOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptSelectiveTessellateOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsValidTriangle_SetBit @ 14ce1e420

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::
NewProp_bIsValidTriangle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1e430

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics::
NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals @ 14ce1e450

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh @ 14ce1e4b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTriHasValidElements_SetBit @ 14ce1e4f0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::
NewProp_bTriHasValidElements_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals @ 14ce1e540

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents @ 14ce1e5c0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals @ 14ce1e670

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc @ 14ce1e6b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidTriangle_SetBit @ 14ce1e730

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::
NewProp_bIsValidTriangle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation @ 14ce1e740

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFloating_SetBit @ 14ce1e840

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics::
NewProp_bFloating_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals @ 14ce1e850

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions @ 14ce1e890

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSplit_SetBit @ 14ce1e8d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetSplitNormalsAlongSelectedEdges_Statics
::NewProp_bSplit_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bRecalculateNormals_SetBit @ 14ce1e8e0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetSplitNormalsAlongSelectedEdges_Statics
::NewProp_bRecalculateNormals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1e8f0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetSplitNormalsAlongSelectedEdges_Statics
::NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs @ 14ce1e900

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHaveValidUVs_SetBit @ 14ce1e940

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::
NewProp_bHaveValidUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation @ 14ce1e950

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs @ 14ce1e990

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetSplitNormalsAlongSelectedEdges @ 14ce1e9d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetSplitNormalsAlongSelectedEdges
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_SetSplitNormalsAlongSelectedEdges_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial @ 14ce1ea10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptRayHitResult @ 14ce1ea50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRayHitResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRayHitResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptRayHitResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRayHitResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptRayHitResult.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions @ 14ce1ead0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSpatialQueryOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptSpatialQueryOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSpatialQueryOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptSpatialQueryOptions.InnerSingleton;
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

// NewProp_bAllowUnsafeModifiedQueries_SetBit @ 14ce1eb50

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::
NewProp_bAllowUnsafeModifiedQueries_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14ce1eb60

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptSpatialQueryOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptSpatialQueryOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSpatialQueryOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptSpatialQueryOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptSpatialQueryOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation @ 14ce1eba0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTriHasValidVertexColors_SetBit @ 14ce1ebe0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::
NewProp_bTriHasValidVertexColors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendOrientedBox @ 14ce1ec00

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendOrientedBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendOrientedBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUpdateNormal_SetBit @ 14ce1ec40

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::
NewProp_bUpdateNormal_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUpdateTangents_SetBit @ 14ce1ec60

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::
NewProp_bUpdateTangents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bIsValidVertex_SetBit @ 14ce1ec80

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::
NewProp_bIsValidVertex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bMergeSplitValues_SetBit @ 14ce1ec90

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::
NewProp_bMergeSplitValues_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// NewProp_bDeferChangeNotifications_SetBit @ 14ce1eca0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics::
NewProp_bDeferChangeNotifications_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x62) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors @ 14ce1ece0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidUVSet_SetBit @ 14ce1ed20

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::
NewProp_bIsValidUVSet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUVSetIsEmpty_SetBit @ 14ce1ed30

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::
NewProp_bUVSetIsEmpty_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendOrientedBoxWithCollision @ 14ce1edd0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendOrientedBoxWithCollision
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendOrientedBoxWithCollision_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal @ 14ce1ee30

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHit_SetBit @ 14ce1ee70

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_bHit_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14ce1ee80

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptRayHitResult,&UE::CoreUObject::Private::Construct<FGeometryScriptRayHitResult>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRayHitResult>,&UE::CoreUObject::Private::Destruct<FGeometryScriptRayHitResult>,&UE::CoreUObject::Private::Copy<FGeometryScriptRayHitResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox @ 14ce1eec0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTriangulationError_SetBit @ 14ce1f020

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendPolygonListTriangulation_Statics
::NewProp_bTriangulationError_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendPolygonListTriangulation @ 14ce1f030

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendPolygonListTriangulation
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendPolygonListTriangulation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedTriangles @ 14ce1f070

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedTriangles_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedVertices @ 14ce1f0b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexConnectedVertices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh @ 14ce1f0f0

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0 @ 14ce1f130

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount @ 14ce1f170

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValidVertex_SetBit @ 14ce1f1b0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::
NewProp_bIsValidVertex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh @ 14ce1f1c0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition @ 14ce1f200

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY @ 14ce1f240

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1f280

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bCapped_SetBit @ 14ce1f290

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics::
NewProp_bCapped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID @ 14ce1f2e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ce1f3a0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh @ 14ce1f3b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath @ 14ce1f4e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID @ 14ce1f560

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsValid_SetBit @ 14ce1f6e0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::
NewProp_bIsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh @ 14ce1f780

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon @ 14ce1f880

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsInside_SetBit @ 14ce1f8c0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::
NewProp_bIsInside_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh @ 14ce1f8d0

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0 @ 14ce1f910

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnlyIfInvalid_SetBit @ 14ce1f950

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::
NewProp_bOnlyIfInvalid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh @ 14ce1f960

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions @ 14ce1f9a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.OuterSingleton
               ,&Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod @ 14ce1f9e0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod @ 14ce1fa20

UEnum * __cdecl
Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode @ 14ce1fa60

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions @ 14ce1faa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptDegenerateTriangleOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptDegenerateTriangleOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptDegenerateTriangleOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptDegenerateTriangleOptions.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions @ 14ce1fb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptFillHolesOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptFillHolesOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptFillHolesOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptFillHolesOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions @ 14ce1fba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions.
           InnerSingleton;
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

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY @ 14ce1fc20

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions @ 14ce1fc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions @ 14ce1fce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptResolveTJunctionOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptResolveTJunctionOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptResolveTJunctionOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptResolveTJunctionOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions @ 14ce1fd60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions
                .InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions.
           InnerSingleton;
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

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH @ 14ce1fde0

UFunction * __cdecl Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FGeometryScriptSnapBoundariesOptions @ 14ce1fe20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptSnapBoundariesOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSnapBoundariesOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptSnapBoundariesOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptSnapBoundariesOptions_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSnapBoundariesOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptSnapBoundariesOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions @ 14ce1fea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptWeldEdgesOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptWeldEdgesOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptWeldEdgesOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptWeldEdgesOptions.InnerSingleton;
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

// NewProp_bOnlyUniquePairs_SetBit @ 14ce1ff20

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_bOnlyUniquePairs_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14ce1ff30

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptWeldEdgesOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptWeldEdgesOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptWeldEdgesOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptWeldEdgesOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptWeldEdgesOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleCollisionShapes @ 14ce20070

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleCollisionShapes
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleCollisionShapes_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_SelectMeshElementsInBoxWithBVH @ 14ce200b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_SelectMeshElementsInBoxWithBVH(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_SelectMeshElementsInBoxWithBVH_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce20170

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptResolveTJunctionOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptResolveTJunctionOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptResolveTJunctionOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptResolveTJunctionOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptResolveTJunctionOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCapped_SetBit @ 14ce20270

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics
::NewProp_bCapped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions @ 14ce202c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.OuterSingleton
      == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.
         OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon @ 14ce20380

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSnapToEdges_SetBit @ 14ce20440

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSnapBoundariesOptions_Statics::NewProp_bSnapToEdges_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14ce20450

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSnapBoundariesOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptSnapBoundariesOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptSnapBoundariesOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSnapBoundariesOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptSnapBoundariesOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptSnapBoundariesOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bLoop_SetBit @ 14ce20590

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics
::NewProp_bLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions @ 14ce205a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.OuterSingleton;
}

// NewProp_bCapped_SetBit @ 14ce205e0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics
::NewProp_bCapped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x91) = 1;
  return;
}

// NewProp_bFixOrientationForNegativeScale_SetBit @ 14ce205f0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_InverseTransformMesh_Statics::
NewProp_bFixOrientationForNegativeScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_InverseTransformMesh @ 14ce20600

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_InverseTransformMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_InverseTransformMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptFillHolesMethod_StaticEnum @ 14ce20640

UEnum * __cdecl EGeometryScriptFillHolesMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod,
                       (UObject *)pUVar1,L"EGeometryScriptFillHolesMethod");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon @ 14ce20680

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDeleteIsolatedTriangles_SetBit @ 14ce206c0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::
NewProp_bDeleteIsolatedTriangles_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14ce206d0

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptFillHolesOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptFillHolesOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptFillHolesOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptFillHolesOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptFillHolesOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_InverseTransformMeshSelection @ 14ce20710

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_InverseTransformMeshSelection
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_InverseTransformMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox @ 14ce20750

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh @ 14ce20790

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce20800

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptRemoveSmallComponentOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptRemoveSmallComponentOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRemoveSmallComponentOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptRemoveSmallComponentOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptRemoveSmallComponentOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection @ 14ce20880

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBoxWithCollision @ 14ce20900

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBoxWithCollision
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBoxWithCollision_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFixOrientationForNegativeScale_SetBit @ 14ce209d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Statics::
NewProp_bFixOrientationForNegativeScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// EGeometryScriptRemoveHiddenTrianglesMethod_StaticEnum @ 14ce20b20

UEnum * __cdecl EGeometryScriptRemoveHiddenTrianglesMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod
                       ,(UObject *)pUVar1,L"EGeometryScriptRemoveHiddenTrianglesMethod");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh @ 14ce20b60

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions @ 14ce20ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTexelDensityMode @ 14ce20be0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTexelDensityMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptTexelDensityMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptTexelDensityMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTexelDensityMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptTexelDensityMode.InnerSingleton;
}

// NewProp_bCompactResult_SetBit @ 14ce20c20

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::
NewProp_bCompactResult_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod @ 14ce20c30

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource @ 14ce20c70

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVLayoutType @ 14ce20cb0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVLayoutType(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptUVLayoutType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptUVLayoutType.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVLayoutType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUVLayoutType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions @ 14ce20cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptExpMapUVOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptExpMapUVOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptExpMapUVOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptExpMapUVOptions.InnerSingleton;
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

// NewStructOps @ 14ce20d70

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptRemoveHiddenTrianglesOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptRemoveHiddenTrianglesOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRemoveHiddenTrianglesOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptRemoveHiddenTrianglesOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptRemoveHiddenTrianglesOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FGeometryScriptLayoutUVsOptions @ 14ce20db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptLayoutUVsOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptLayoutUVsOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptLayoutUVsOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptLayoutUVsOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptLayoutUVsOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptLayoutUVsOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptMeshProjectionSettings @ 14ce20e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshProjectionSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshProjectionSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshProjectionSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshProjectionSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshProjectionSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshProjectionSettings.InnerSingleton;
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

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereCovering @ 14ce20eb0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereCovering(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereCovering_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions @ 14ce20ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPatchBuilderOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptPatchBuilderOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPatchBuilderOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptPatchBuilderOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions @ 14ce20f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRecomputeUVsOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptRecomputeUVsOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRecomputeUVsOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptRecomputeUVsOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions @ 14ce20ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRepackUVsOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptRepackUVsOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRepackUVsOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptRepackUVsOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions @ 14ce21070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSpectralConformalUVOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptSpectralConformalUVOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSpectralConformalUVOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptSpectralConformalUVOptions.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptUVTexelDensityOptions @ 14ce210f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptUVTexelDensityOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptUVTexelDensityOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptUVTexelDensityOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptUVTexelDensityOptions_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptUVTexelDensityOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptUVTexelDensityOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions @ 14ce21170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptXAtlasOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptXAtlasOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptXAtlasOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptXAtlasOptions.InnerSingleton;
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

// NewProp_bOptimizeIslandRotation_SetBit @ 14ce211f0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::
NewProp_bOptimizeIslandRotation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14ce21200

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptRepackUVsOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptRepackUVsOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRepackUVsOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptRepackUVsOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptRepackUVsOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection @ 14ce21240

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFixOrientationForNegativeScale_SetBit @ 14ce21280

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Statics::
NewProp_bFixOrientationForNegativeScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong @ 14ce21290

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh @ 14ce212d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptUVLayoutType_StaticEnum @ 14ce21310

UEnum * __cdecl EGeometryScriptUVLayoutType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptUVLayoutType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptUVLayoutType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVLayoutType,
                       (UObject *)pUVar1,L"EGeometryScriptUVLayoutType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUVLayoutType.OuterSingleton;
}

// NewProp_bDoubleSided_SetBit @ 14ce21350

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions_Statics::
NewProp_bDoubleSided_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bPerPolyGroup_SetBit @ 14ce21360

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions_Statics::
NewProp_bPerPolyGroup_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14ce21370

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSelectHiddenTrianglesFromOutsideOptions_Statics::
NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bPreserveScale_SetBit @ 14ce213b0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptLayoutUVsOptions_Statics::NewProp_bPreserveScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bPreserveRotation_SetBit @ 14ce213c0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptLayoutUVsOptions_Statics::NewProp_bPreserveRotation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_bAllowFlips_SetBit @ 14ce213d0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptLayoutUVsOptions_Statics::NewProp_bAllowFlips_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// NewProp_bEnableUDIMLayout_SetBit @ 14ce213e0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptLayoutUVsOptions_Statics::NewProp_bEnableUDIMLayout_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x23) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection @ 14ce213f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce21430

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptLayoutUVsOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptLayoutUVsOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptLayoutUVsOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptLayoutUVsOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptLayoutUVsOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptLayoutUVsOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLongWithCollision @ 14ce21470

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLongWithCollision
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLongWithCollision_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh @ 14ce214f0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptRepairMeshMode_StaticEnum @ 14ce21540

UEnum * __cdecl EGeometryScriptRepairMeshMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode,
                       (UObject *)pUVar1,L"EGeometryScriptRepairMeshMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.OuterSingleton;
}

// NewProp_bCompactOnCompletion_SetBit @ 14ce215c0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::
NewProp_bCompactOnCompletion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14ce21600

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptDegenerateTriangleOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptDegenerateTriangleOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptDegenerateTriangleOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptDegenerateTriangleOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptDegenerateTriangleOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon @ 14ce21670

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection @ 14ce216b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptUVFlattenMethod_StaticEnum @ 14ce21700

UEnum * __cdecl EGeometryScriptUVFlattenMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod,
                       (UObject *)pUVar1,L"EGeometryScriptUVFlattenMethod");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.OuterSingleton;
}

// EGeometryScriptUVIslandSource_StaticEnum @ 14ce21780

UEnum * __cdecl EGeometryScriptUVIslandSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource,
                       (UObject *)pUVar1,L"EGeometryScriptUVIslandSource");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.OuterSingleton;
}

// NewProp_bLoop_SetBit @ 14ce217c0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::
NewProp_bLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// NewProp_bCapped_SetBit @ 14ce217d0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics::
NewProp_bCapped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x91) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation @ 14ce217e0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce21820

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptExpMapUVOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptExpMapUVOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptExpMapUVOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptExpMapUVOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptExpMapUVOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bFoundErrors_SetBit @ 14ce21860

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics
::NewProp_bFoundErrors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon @ 14ce21870

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops @ 14ce218b0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh @ 14ce21910

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions @ 14ce21980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType @ 14ce219c0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.InnerSingleton;
}

// EGeometryScriptTopologyConnectionType_StaticEnum @ 14ce21a00

UEnum * __cdecl EGeometryScriptTopologyConnectionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType
                       ,(UObject *)pUVar1,L"EGeometryScriptTopologyConnectionType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.OuterSingleton;
}

// NewProp_bPreserveIrregularity_SetBit @ 14ce21a70

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::
NewProp_bPreserveIrregularity_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14ce21a80

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptSpectralConformalUVOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptSpectralConformalUVOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSpectralConformalUVOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptSpectralConformalUVOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptSpectralConformalUVOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsEmpty_SetBit @ 14ce21ac0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics
::NewProp_bIsEmpty_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bLoop_SetBit @ 14ce21ad0

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics::
NewProp_bLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles @ 14ce21ae0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox @ 14ce21b20

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions @ 14ce21b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions(void)

{
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.
                OuterSingleton,
               &Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode @ 14ce21ba0

UEnum * __cdecl
Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.InnerSingleton;
}

// Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode @ 14ce21be0

UEnum * __cdecl Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode(void)

{
  if (Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions @ 14ce21c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshPointSamplingOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptMeshPointSamplingOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshPointSamplingOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshPointSamplingOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions @ 14ce21ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions.
           InnerSingleton;
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

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections @ 14ce21d20

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ce21d60

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptMeshPointSamplingOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptMeshPointSamplingOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshPointSamplingOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptMeshPointSamplingOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptMeshPointSamplingOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles @ 14ce21da0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline @ 14ce21de0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoAlignIslandsWithAxes_SetBit @ 14ce21e20

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::
NewProp_bAutoAlignIslandsWithAxes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14ce21e30

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptRecomputeUVsOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptRecomputeUVsOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRecomputeUVsOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptRecomputeUVsOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptRecomputeUVsOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection @ 14ce21ec0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents @ 14ce21f00

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptSamplingWeightMode_StaticEnum @ 14ce21fa0

UEnum * __cdecl EGeometryScriptSamplingWeightMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode,
                       (UObject *)pUVar1,L"EGeometryScriptSamplingWeightMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveUnusedVertices @ 14ce22010

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveUnusedVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveUnusedVertices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus @ 14ce22050

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptSamplingDistributionMode_StaticEnum @ 14ce22090

UEnum * __cdecl EGeometryScriptSamplingDistributionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode
                       ,(UObject *)pUVar1,L"EGeometryScriptSamplingDistributionMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection @ 14ce220d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRespectInputGroups_SetBit @ 14ce22150

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::
NewProp_bRespectInputGroups_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bAutoPack_SetBit @ 14ce22160

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bAutoPack_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14ce22170

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptPatchBuilderOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptPatchBuilderOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPatchBuilderOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptPatchBuilderOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptPatchBuilderOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInvertWeights_SetBit @ 14ce221b0

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::
NewProp_bInvertWeights_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry @ 14ce221c0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowSelfIntersections_SetBit @ 14ce22200

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics
::NewProp_bAllowSelfIntersections_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewStructOps @ 14ce22210

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptNonUniformPointSamplingOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptNonUniformPointSamplingOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptNonUniformPointSamplingOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptNonUniformPointSamplingOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptNonUniformPointSamplingOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection @ 14ce22250

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon @ 14ce22290

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions @ 14ce222d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowPartialInclusion_SetBit @ 14ce22350

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::
NewProp_bAllowPartialInclusion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 14ce22390

void * __cdecl Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptXAtlasOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptXAtlasOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptXAtlasOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptXAtlasOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptXAtlasOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon3D @ 14ce223d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon3D
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon3D_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection @ 14ce22410

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SelectHiddenTrianglesFromOutside @ 14ce22450

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SelectHiddenTrianglesFromOutside
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SelectHiddenTrianglesFromOutside_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling @ 14ce22490

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray @ 14ce224d0

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SnapMeshOpenBoundaries @ 14ce22510

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SnapMeshOpenBoundaries(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SnapMeshOpenBoundaries_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EGeometryScriptTexelDensityMode_StaticEnum @ 14ce22550

UEnum * __cdecl EGeometryScriptTexelDensityMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptTexelDensityMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptTexelDensityMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTexelDensityMode,
                       (UObject *)pUVar1,L"EGeometryScriptTexelDensityMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptTexelDensityMode.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D @ 14ce22590

UFunction * __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bMeshBowties_SetBit @ 14ce22610

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::
NewProp_bMeshBowties_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bAttributeBowties_SetBit @ 14ce22620

void __cdecl
Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::
NewProp_bAttributeBowties_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bEnableUDIMLayout_SetBit @ 14ce22640

void __cdecl
Z_Construct_UScriptStruct_FGeometryScriptUVTexelDensityOptions_Statics::
NewProp_bEnableUDIMLayout_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14ce22650

void * __cdecl
Z_Construct_UScriptStruct_FGeometryScriptUVTexelDensityOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryScriptUVTexelDensityOptions,&UE::CoreUObject::Private::Construct<FGeometryScriptUVTexelDensityOptions>,&UE::CoreUObject::Private::ConstructForTests<FGeometryScriptUVTexelDensityOptions>,&UE::CoreUObject::Private::Destruct<FGeometryScriptUVTexelDensityOptions>,&UE::CoreUObject::Private::Copy<FGeometryScriptUVTexelDensityOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// DestructItems<FGeometryScriptIndexList,int> @ 14ce22800

void __cdecl
DestructItems<FGeometryScriptIndexList,int>(FGeometryScriptIndexList *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->List).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGeometryScriptPolyPath,int> @ 14ce22840

void __cdecl
DestructItems<FGeometryScriptPolyPath,int>(FGeometryScriptPolyPath *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Path).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEachCaptureType<`UGeometryScriptLibrary_MeshSamplingFunctions::ComputeRenderCapturePointSampling'::__l6::<lambda_2>_> @ 14ce24300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Geometry::
ForEachCaptureType<_UGeometryScriptLibrary_MeshSamplingFunctions::ComputeRenderCapturePointSampling_::__l6::<lambda_2>_>
          (<lambda_2> *param_1)

{
  FRenderCaptureConfig local_res8 [32];
  
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,BaseColor,false);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,BaseColor,local_res8);
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,Roughness,false);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,Roughness,local_res8);
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,Specular,false);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,Specular,local_res8);
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,Metallic,false);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,Metallic,local_res8);
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,CombinedMRS,false);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,CombinedMRS,local_res8);
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,WorldNormal,true);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,WorldNormal,local_res8);
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,Emissive,false);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,Emissive,local_res8);
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,Opacity,false);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,Opacity,local_res8);
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,SubsurfaceColor,false);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,SubsurfaceColor,local_res8);
  FSceneCapturePhotoSet::SetCaptureTypeEnabled(param_1->SceneCapture->Ptr,DeviceDepth,true);
  local_res8[0].bAntiAliasing = false;
  FSceneCapturePhotoSet::SetCaptureConfig(param_1->SceneCapture->Ptr,DeviceDepth,local_res8);
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshModelingFunctions> @ 14ce244e0

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshModelingFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshModelingFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshNormalsFunctions> @ 14ce24510

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshNormalsFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshNormalsFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshPolygroupFunctions> @ 14ce24540

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshPolygroupFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPolygroupFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshPoolFunctions> @ 14ce24570

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshPoolFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPoolFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshPrimitiveFunctions> @ 14ce245a0

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshPrimitiveFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPrimitiveFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshQueryFunctions> @ 14ce245d0

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshQueryFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshQueryFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshRepairFunctions> @ 14ce24600

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshRepairFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshRepairFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshSamplingFunctions> @ 14ce24630

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshSamplingFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSamplingFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshSculptLayersFunctions> @ 14ce24660

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshSculptLayersFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSculptLayersFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshSelectionFunctions> @ 14ce24690

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshSelectionFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshSelectionQueryFunctions> @ 14ce246c0

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshSelectionQueryFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionQueryFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshSimplifyFunctions> @ 14ce246f0

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshSimplifyFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSimplifyFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshSpatial> @ 14ce24720

void __cdecl InternalConstructor<UGeometryScriptLibrary_MeshSpatial>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSpatial__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshSubdivideFunctions> @ 14ce24750

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshSubdivideFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSubdivideFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshTransformFunctions> @ 14ce24780

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshTransformFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshTransformFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_MeshUVFunctions> @ 14ce247b0

void __cdecl
InternalConstructor<UGeometryScriptLibrary_MeshUVFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_MeshUVFunctions__6B_;
  }
  return;
}

// InternalConstructor<UGeometryScriptLibrary_RemeshingFunctions> @ 14ce247e0

void __cdecl
InternalConstructor<UGeometryScriptLibrary_RemeshingFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGeometryScriptLibrary_RemeshingFunctions__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshModelingFunctions> @ 14ce24810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshModelingFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshModelingFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshModelingFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshNormalsFunctions> @ 14ce248c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshNormalsFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshNormalsFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshNormalsFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPolygroupFunctions> @ 14ce24970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPolygroupFunctions>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshPolygroupFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshPolygroupFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPoolFunctions> @ 14ce24a20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPoolFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshPoolFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshPoolFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPrimitiveFunctions> @ 14ce24ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPrimitiveFunctions>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshPrimitiveFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshPrimitiveFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshQueryFunctions> @ 14ce24b80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshQueryFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshQueryFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshQueryFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshRepairFunctions> @ 14ce24c30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshRepairFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshRepairFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshRepairFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSamplingFunctions> @ 14ce24ce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSamplingFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshSamplingFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshSamplingFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSculptLayersFunctions> @ 14ce24d90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSculptLayersFunctions>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshSculptLayersFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshSculptLayersFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionFunctions> @ 14ce24e40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionFunctions>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshSelectionFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshSelectionFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionQueryFunctions> @ 14ce24ef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionQueryFunctions>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshSelectionQueryFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSimplifyFunctions> @ 14ce24fa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSimplifyFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshSimplifyFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshSimplifyFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSpatial> @ 14ce25050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSpatial>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshSpatial::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshSpatial__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSubdivideFunctions> @ 14ce25100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSubdivideFunctions>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshSubdivideFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshSubdivideFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshTransformFunctions> @ 14ce251b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshTransformFunctions>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshTransformFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshTransformFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshUVFunctions> @ 14ce25260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshUVFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_MeshUVFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_MeshUVFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryScriptLibrary_RemeshingFunctions> @ 14ce25310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryScriptLibrary_RemeshingFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryScriptLibrary_RemeshingFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryScriptLibrary_RemeshingFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeShared<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> @ 14ce253c0

TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> * __cdecl
MakeShared<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>
          (TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *pTVar4;
  
  pTVar3 = operator_new(0xd0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pTVar3 + 1));
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pTVar3 + 1);
    if ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pTVar3 + 1) ==
        (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// SimpleMeshPolygroupQuery<int> @ 14ce25470

int __cdecl
SimpleMeshPolygroupQuery<int>
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,bool *param_3,int param_4,
          TFunctionRef<int___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&)>
          *param_5)

{
  FGeometryScriptGroupLayer local_res10 [2];
  int local_res20 [2];
  code *local_38;
  undefined8 **local_30;
  FGeometryScriptGroupLayer *local_28;
  bool *local_20;
  int *local_18;
  TFunctionRef<int___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&)>
  *local_10;
  
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_18 = local_res20;
    local_10 = param_5;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_res20[0] = param_4;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    return local_res20[0];
  }
  return param_4;
}

// SimpleMeshPolygroupQuery<bool> @ 14ce254e0

bool __cdecl
SimpleMeshPolygroupQuery<bool>
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,bool *param_3,bool param_4,
          TFunctionRef<bool___cdecl(UE::Geometry::FDynamicMesh3_const_&,TFunctionRef<int___cdecl(int)>)>
          *param_5)

{
  undefined1 local_res20 [8];
  code *local_48;
  FGeometryScriptGroupLayer *local_40;
  FGeometryScriptGroupLayer local_38;
  bool *local_30;
  undefined1 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res20;
    local_20 = *(undefined8 *)param_5;
    local_18 = *(undefined8 *)&param_5->field_0x8;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res20[0] = param_4;
    local_38 = param_2;
    local_30 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    return (bool)local_res20[0];
  }
  return param_4;
}

// SimpleMeshQuery<int> @ 14ce25560

int __cdecl
SimpleMeshQuery<int>
          (UDynamicMesh *param_1,int param_2,
          TFunctionRef<int___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_3)

{
  int local_res8 [8];
  int *local_28;
  TFunctionRef<int___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *local_20;
  code *local_18;
  undefined4 **local_10;
  
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return local_res8[0];
  }
  return param_2;
}

// SimpleMeshQuery<UE::Math::TBox<double>_> @ 14ce255b0

TBox<double> * __cdecl
SimpleMeshQuery<UE::Math::TBox<double>_>
          (TBox<double> *__return_storage_ptr__,UDynamicMesh *param_1,TBox<double> *param_2,
          TFunctionRef<UE::Math::TBox<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_3
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  TBox<double> *local_28;
  TFunctionRef<UE::Math::TBox<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *local_20;
  code *local_18;
  TBox<double> **local_10;
  
  if (param_1 != (UDynamicMesh *)0x0) {
    __return_storage_ptr__->IsValid = '\0';
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TBox<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = __return_storage_ptr__;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return __return_storage_ptr__;
  }
  dVar1 = (param_2->Min).field0_0x0._s_0.Y;
  dVar2 = (param_2->Min).field0_0x0._s_0.Z;
  dVar3 = (param_2->Max).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->Max).field0_0x0._s_0.Y;
  dVar4 = (param_2->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = param_2->IsValid;
  uVar6 = param_2->Pad[0];
  uVar7 = param_2->Pad[1];
  uVar8 = param_2->Pad[2];
  uVar9 = param_2->Pad[3];
  uVar10 = param_2->Pad[4];
  uVar11 = param_2->Pad[5];
  uVar12 = param_2->Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// SimpleMeshQuery<UE::Math::TIntVector3<int>_> @ 14ce25630

TIntVector3<int> * __cdecl
SimpleMeshQuery<UE::Math::TIntVector3<int>_>
          (TIntVector3<int> *__return_storage_ptr__,UDynamicMesh *param_1,TIntVector3<int> *param_2,
          TFunctionRef<UE::Math::TIntVector3<int>___cdecl(UE::Geometry::FDynamicMesh3_const_&)>
          *param_3)

{
  int iVar1;
  TIntVector3<int> *local_28;
  TFunctionRef<UE::Math::TIntVector3<int>___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *local_20;
  code *local_18;
  TIntVector3<int> **local_10;
  
  if (param_1 != (UDynamicMesh *)0x0) {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TIntVector3<int>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = __return_storage_ptr__;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return __return_storage_ptr__;
  }
  iVar1 = (param_2->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar1;
  return __return_storage_ptr__;
}

// SimpleMeshQuery<UE::Math::TVector<double>_> @ 14ce256a0

TVector<double> * __cdecl
SimpleMeshQuery<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,UDynamicMesh *param_1,TVector<double> *param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&)>
          *param_3)

{
  double dVar1;
  double dVar2;
  TVector<double> *local_28;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *local_20;
  code *local_18;
  TVector<double> **local_10;
  
  if (param_1 != (UDynamicMesh *)0x0) {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TVector<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = __return_storage_ptr__;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return __return_storage_ptr__;
  }
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// SimpleMeshQuery<FLinearColor> @ 14ce25710

FLinearColor * __cdecl
SimpleMeshQuery<FLinearColor>
          (FLinearColor *__return_storage_ptr__,UDynamicMesh *param_1,FLinearColor *param_2,
          TFunctionRef<FLinearColor___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_3)

{
  undefined8 uVar1;
  FLinearColor *local_28;
  TFunctionRef<FLinearColor___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *local_20;
  code *local_18;
  FLinearColor **local_10;
  
  if (param_1 != (UDynamicMesh *)0x0) {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<FLinearColor>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = __return_storage_ptr__;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return __return_storage_ptr__;
  }
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// SimpleMeshQuery<FString> @ 14ce25770

FString * __cdecl
SimpleMeshQuery<FString>
          (FString *__return_storage_ptr__,UDynamicMesh *param_1,FString *param_2,
          TFunctionRef<FString___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_3)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType local_38;
  undefined8 local_30;
  ForAnyElementType *local_28;
  TFunctionRef<FString___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *local_20;
  code *local_18;
  undefined8 **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
  }
  else {
    local_28 = &local_38;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_10 = &local_28;
    local_30 = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<FString>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_30;
    (__return_storage_ptr__->Data).ArrayMax = local_30._4_4_;
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// SimpleMeshQuery<bool> @ 14ce25830

bool __cdecl
SimpleMeshQuery<bool>
          (UDynamicMesh *param_1,bool param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_3)

{
  undefined1 local_res8 [32];
  undefined1 *local_28;
  TFunctionRef<bool___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *local_20;
  code *local_18;
  undefined1 **local_10;
  
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res8[0];
  }
  return param_2;
}

// SimpleMeshUVSetQuery<int> @ 14ce25880

int __cdecl
SimpleMeshUVSetQuery<int>
          (UDynamicMesh *param_1,int param_2,bool *param_3,int param_4,
          TFunctionRef<int___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&)>
          *param_5)

{
  int local_res10 [4];
  int local_res20 [2];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  int *local_18;
  TFunctionRef<int___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&)>
  *local_10;
  
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_18 = local_res20;
    local_10 = param_5;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_res20[0] = param_4;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    return local_res20[0];
  }
  return param_4;
}

// SimpleMeshUVSetQuery<double> @ 14ce258f0

double __cdecl
SimpleMeshUVSetQuery<double>
          (UDynamicMesh *param_1,int param_2,bool *param_3,double param_4,
          TFunctionRef<double___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&)>
          *param_5)

{
  double local_res8;
  int local_res10 [6];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  double *local_18;
  TFunctionRef<double___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&)>
  *local_10;
  
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_18 = &local_res8;
    local_10 = param_5;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<double>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res8 = param_4;
    local_res10[0] = param_2;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    return local_res8;
  }
  return param_4;
}

// SimpleMeshUVSetQuery<UE::Math::TBox2<double>_> @ 14ce25960

TBox2<double> * __cdecl
SimpleMeshUVSetQuery<UE::Math::TBox2<double>_>
          (TBox2<double> *__return_storage_ptr__,UDynamicMesh *param_1,int param_2,bool *param_3,
          TBox2<double> *param_4,
          TFunctionRef<UE::Math::TBox2<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&)>
          *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined7 uVar5;
  int local_res18 [4];
  code *local_38;
  int **local_30;
  int *local_28;
  bool *local_20;
  TBox2<double> *local_18;
  TFunctionRef<UE::Math::TBox2<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&)>
  *local_10;
  
  *param_3 = false;
  dVar1 = (param_4->Min).field0_0x0._s_0.Y;
  dVar2 = (param_4->Max).field0_0x0._s_0.X;
  dVar3 = (param_4->Max).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (param_4->Min).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  bVar4 = param_4->bIsValid;
  uVar5 = *(undefined7 *)&param_4->field_0x21;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3;
  __return_storage_ptr__->bIsValid = bVar4;
  *(undefined7 *)&__return_storage_ptr__->field_0x21 = uVar5;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_10 = param_5;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<UE::Math::TBox2<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_2;
    local_20 = param_3;
    local_18 = __return_storage_ptr__;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return __return_storage_ptr__;
}

// SimpleMeshUVSetQuery<bool> @ 14ce259f0

bool __cdecl
SimpleMeshUVSetQuery<bool>
          (UDynamicMesh *param_1,int param_2,bool *param_3,bool param_4,
          TFunctionRef<bool___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&)>
          *param_5)

{
  int local_res10 [4];
  undefined1 local_res20 [8];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  undefined1 *local_18;
  TFunctionRef<bool___cdecl(UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&)>
  *local_10;
  
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_18 = local_res20;
    local_10 = param_5;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_res20[0] = param_4;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    return (bool)local_res20[0];
  }
  return param_4;
}

// StaticEnum<enum_EGeometryScriptClusterSimplifyConstraintLevel> @ 14ce25a60

UEnum * __cdecl StaticEnum<enum_EGeometryScriptClusterSimplifyConstraintLevel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptClusterSimplifyConstraintLevel.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptClusterSimplifyConstraintLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptClusterSimplifyConstraintLevel
                       ,(UObject *)pUVar1,L"EGeometryScriptClusterSimplifyConstraintLevel");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptClusterSimplifyConstraintLevel.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptFillHolesMethod> @ 14ce25aa0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptFillHolesMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod,
                       (UObject *)pUVar1,L"EGeometryScriptFillHolesMethod");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptLinearExtrudeDirection> @ 14ce25ae0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptLinearExtrudeDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection
                       ,(UObject *)pUVar1,L"EGeometryScriptLinearExtrudeDirection");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptMeshBevelSelectionMode> @ 14ce25b20

UEnum * __cdecl StaticEnum<enum_EGeometryScriptMeshBevelSelectionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode
                       ,(UObject *)pUVar1,L"EGeometryScriptMeshBevelSelectionMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptMeshEditPolygroupMode> @ 14ce25b60

UEnum * __cdecl StaticEnum<enum_EGeometryScriptMeshEditPolygroupMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode,
                       (UObject *)pUVar1,L"EGeometryScriptMeshEditPolygroupMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptOffsetFacesType> @ 14ce25ba0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptOffsetFacesType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType,
                       (UObject *)pUVar1,L"EGeometryScriptOffsetFacesType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptPolyOperationArea> @ 14ce25be0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptPolyOperationArea>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea,
                       (UObject *)pUVar1,L"EGeometryScriptPolyOperationArea");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptPolygonFillMode> @ 14ce25c20

UEnum * __cdecl StaticEnum<enum_EGeometryScriptPolygonFillMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPolygonFillMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPolygonFillMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolygonFillMode,
                       (UObject *)pUVar1,L"EGeometryScriptPolygonFillMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPolygonFillMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptPrimitiveOriginMode> @ 14ce25c60

UEnum * __cdecl StaticEnum<enum_EGeometryScriptPrimitiveOriginMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveOriginMode,
                       (UObject *)pUVar1,L"EGeometryScriptPrimitiveOriginMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveOriginMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptPrimitivePolygroupMode> @ 14ce25ca0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptPrimitivePolygroupMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitivePolygroupMode
                       ,(UObject *)pUVar1,L"EGeometryScriptPrimitivePolygroupMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPrimitivePolygroupMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptPrimitiveUVMode> @ 14ce25ce0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptPrimitiveUVMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPrimitiveUVMode,
                       (UObject *)pUVar1,L"EGeometryScriptPrimitiveUVMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptPrimitiveUVMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptRemeshEdgeConstraintType> @ 14ce25d20

UEnum * __cdecl StaticEnum<enum_EGeometryScriptRemeshEdgeConstraintType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType
                       ,(UObject *)pUVar1,L"EGeometryScriptRemeshEdgeConstraintType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptRemeshSmoothingType> @ 14ce25d60

UEnum * __cdecl StaticEnum<enum_EGeometryScriptRemeshSmoothingType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType,
                       (UObject *)pUVar1,L"EGeometryScriptRemeshSmoothingType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptRemoveHiddenTrianglesMethod> @ 14ce25da0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptRemoveHiddenTrianglesMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod
                       ,(UObject *)pUVar1,L"EGeometryScriptRemoveHiddenTrianglesMethod");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptRemoveMeshSimplificationType> @ 14ce25de0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptRemoveMeshSimplificationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType
                       ,(UObject *)pUVar1,L"EGeometryScriptRemoveMeshSimplificationType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptRepairMeshMode> @ 14ce25e20

UEnum * __cdecl StaticEnum<enum_EGeometryScriptRepairMeshMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode,
                       (UObject *)pUVar1,L"EGeometryScriptRepairMeshMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptSamplingDistributionMode> @ 14ce25e60

UEnum * __cdecl StaticEnum<enum_EGeometryScriptSamplingDistributionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode
                       ,(UObject *)pUVar1,L"EGeometryScriptSamplingDistributionMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptSamplingWeightMode> @ 14ce25ea0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptSamplingWeightMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode,
                       (UObject *)pUVar1,L"EGeometryScriptSamplingWeightMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptTangentTypes> @ 14ce25ee0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptTangentTypes>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTangentTypes,
                       (UObject *)pUVar1,L"EGeometryScriptTangentTypes");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptTangentTypes.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptTexelDensityMode> @ 14ce25f20

UEnum * __cdecl StaticEnum<enum_EGeometryScriptTexelDensityMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptTexelDensityMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptTexelDensityMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTexelDensityMode,
                       (UObject *)pUVar1,L"EGeometryScriptTexelDensityMode");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptTexelDensityMode.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptTopologyConnectionType> @ 14ce25f60

UEnum * __cdecl StaticEnum<enum_EGeometryScriptTopologyConnectionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType
                       ,(UObject *)pUVar1,L"EGeometryScriptTopologyConnectionType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptUVFlattenMethod> @ 14ce25fa0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptUVFlattenMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod,
                       (UObject *)pUVar1,L"EGeometryScriptUVFlattenMethod");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptUVIslandSource> @ 14ce25fe0

UEnum * __cdecl StaticEnum<enum_EGeometryScriptUVIslandSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource,
                       (UObject *)pUVar1,L"EGeometryScriptUVIslandSource");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptUVLayoutType> @ 14ce26020

UEnum * __cdecl StaticEnum<enum_EGeometryScriptUVLayoutType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptUVLayoutType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptUVLayoutType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVLayoutType,
                       (UObject *)pUVar1,L"EGeometryScriptUVLayoutType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUVLayoutType.OuterSingleton;
}

// StaticEnum<enum_EGeometryScriptUniformRemeshTargetType> @ 14ce26060

UEnum * __cdecl StaticEnum<enum_EGeometryScriptUniformRemeshTargetType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType
                       ,(UObject *)pUVar1,L"EGeometryScriptUniformRemeshTargetType");
  }
  return Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.OuterSingleton;
}

// StaticEnum<enum_ESelectiveTessellatePatternType> @ 14ce260a0

UEnum * __cdecl StaticEnum<enum_ESelectiveTessellatePatternType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType,
                       (UObject *)pUVar1,L"ESelectiveTessellatePatternType");
  }
  return Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.OuterSingleton;
}

// ~TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 14ce26e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 14ce26ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1> @ 14ce26ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1> @ 14ce26ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,0> @ 14ce26f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,0> @ 14ce26f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l8::<lambda_1>,0,1> @ 14ce26f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l8::<lambda_1>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>::operator()_::__l8::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`8'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>,0,0> @ 14ce26f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs_::__l2::<lambda_1>::operator()_::__l16::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::`2'::<lambda_1>::operator()'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,1> @ 14ce26f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,1>
::
~TFunction_OwnedObject<__UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel_::__l2::<lambda_1>::operator()_::__l5::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l8::<lambda_2>,0,1> @ 14ce26fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l8::<lambda_2>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>::operator()_::__l8::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`8'::<lambda_2>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l18::<lambda_2>,0,0> @ 14ce26fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l18::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs_::__l2::<lambda_1>::operator()_::__l18::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::`2'::<lambda_1>::operator()'::`18'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::operator()'::__l5::<lambda_3>,0,0> @ 14ce26fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::operator()'::__l5::<lambda_3>,0,0>
::
~TFunction_OwnedObject<__UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection_::__l2::<lambda_2>::operator()_::__l5::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::`2'::<lambda_2>::operator()'::`5'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l20::<lambda_3>,0,0> @ 14ce27000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l20::<lambda_3>,0,0>
::
~TFunction_OwnedObject<__UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs_::__l2::<lambda_1>::operator()_::__l20::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::`2'::<lambda_1>::operator()'::`20'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l12::<lambda_3>,0,1> @ 14ce27020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l12::<lambda_3>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>::operator()_::__l12::<lambda_3>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`12'::<lambda_3>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l12::<lambda_4>,0,1> @ 14ce27040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l12::<lambda_4>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>::operator()_::__l12::<lambda_4>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`12'::<lambda_4>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l16::<lambda_5>,0,1> @ 14ce27060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l16::<lambda_5>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>::operator()_::__l16::<lambda_5>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`16'::<lambda_5>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l16::<lambda_6>,0,1> @ 14ce27080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l16::<lambda_6>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>::operator()_::__l16::<lambda_6>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`16'::<lambda_6>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l20::<lambda_7>,0,1> @ 14ce270a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l20::<lambda_7>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>::operator()_::__l20::<lambda_7>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`20'::<lambda_7>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l20::<lambda_8>,0,1> @ 14ce270c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l20::<lambda_8>,0,1>
::
~TFunction_OwnedObject<___UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>::operator()_::__l20::<lambda_8>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`20'::<lambda_8>,0,1>
        ::_vftable_;
  return;
}

// operator() @ 14ce27c70

void __thiscall
``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  FInsetMeshRegion local_78;
  
  UE::Geometry::FInsetMeshRegion::FInsetMeshRegion(&local_78,*(FDynamicMesh3 **)this);
  if (&local_78.Triangles != param_1) {
    if (local_78.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Triangles.AllocatorInstance.Data);
    }
    local_78.Triangles.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_78.Triangles.ArrayNum = param_1->ArrayNum;
    local_78.Triangles.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  if (0 < local_78.Triangles.ArrayNum) {
    pfVar1 = *(float **)((longlong)this + 8);
    local_78.InsetDistance = (double)*pfVar1;
    if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
      local_78.bReproject = *(bool *)(pfVar1 + 1);
    }
    else {
      local_78.bReproject = false;
    }
    local_78.Softness = pfVar1[2];
    local_78.bSolveRegionInteriors = *(char *)((longlong)pfVar1 + 5) == '\0';
    local_78.AreaCorrection = pfVar1[3];
    UE::Geometry::FInsetMeshRegion::Apply(&local_78);
    iVar2 = local_78.InsetRegions.ArrayNum;
    uVar3 = (ulonglong)local_78.InsetRegions.ArrayNum;
    lVar5 = uVar3 * 0x50;
    FVar4.Data = local_78.InsetRegions.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar3 != iVar2) {
        `TCheckedPointerIterator<UE::Geometry::FInsetMeshRegion::FInsetInfo,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar4.Data ==
          (TArray<int,TSizedDefaultAllocator<32>_> *)
          (local_78.InsetRegions.AllocatorInstance.Data + lVar5)) break;
      UELocal::ApplyPolygroupModeToNewTriangles
                (*(FDynamicMesh3 **)this,(TArray<int,TSizedDefaultAllocator<32>_> *)FVar4.Data,
                 *(FGeometryScriptMeshEditPolygroupOptions *)
                  (*(longlong *)((longlong)this + 8) + 0x14));
      uVar3 = (ulonglong)(uint)local_78.InsetRegions.ArrayNum;
      FVar4.Data = FVar4.Data + 0x50;
    }
  }
  UE::Geometry::FInsetMeshRegion::~FInsetMeshRegion(&local_78);
  return;
}

// operator() @ 14ce27dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  longlong lVar3;
  float *pfVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double *pdVar11;
  int iVar12;
  code *pcVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  double *pdVar20;
  longlong *plVar21;
  ForAnyElementType FVar22;
  FOffsetInfo *pFVar23;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  TVector<double>_u_0 local_1b0;
  double local_198 [2];
  undefined1 local_188 [48];
  undefined **local_158 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  code *local_138;
  double dStack_130;
  longlong local_128 [6];
  longlong local_f8;
  longlong local_e8 [3];
  longlong *local_d0;
  float local_c8;
  bool local_c4;
  bool local_c3;
  ForAnyElementType local_a0;
  int local_98;
  ForAnyElementType local_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  UE::Geometry::FOffsetMeshRegion::FOffsetMeshRegion
            ((FOffsetMeshRegion *)local_158,*(FDynamicMesh3 **)this);
  if (&local_148 != param_1) {
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    local_148.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = param_1->ArrayNum;
    local_148.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  iVar12 = local_148.ArrayNum;
  if (0 < local_148.ArrayNum) {
    lVar3 = *(longlong *)((longlong)this + 8);
    dVar7 = *(double *)(lVar3 + 8);
    dVar9 = *(double *)(lVar3 + 0x10);
    dVar2 = *(double *)(lVar3 + 0x18);
    local_1b0._s_0.X = dVar7;
    local_1b0._s_0.Y = dVar9;
    local_1b0._s_0.Z = dVar2;
    if (*(char *)(lVar3 + 4) == '\x01') {
      local_1b0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1b0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pFVar1 = local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 4;
      local_1b0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FVar22.Data = local_148.AllocatorInstance.Data;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      while( true ) {
        if (local_148.ArrayNum != iVar12) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1b8);
        }
        if (FVar22.Data == pFVar1) break;
        UE::Geometry::FDynamicMesh3::GetTriInfo
                  (*(FDynamicMesh3 **)this,*(int *)FVar22.Data,(TVector<double> *)&local_1b0._s_0,
                   local_198,(TVector<double> *)&((TVector<double>_u_0 *)local_188)->_s_0);
        FVar22.Data = FVar22.Data + 4;
        uVar6 = (double)uVar6 + local_1b0._s_0.X * local_198[0];
        uVar10 = (double)uVar10 + local_1b0._s_0.Z * local_198[0];
        uVar8 = (double)uVar8 + local_1b0._s_0.Y * local_198[0];
      }
      dVar2 = SQRT((double)uVar8 * (double)uVar8 + (double)uVar6 * (double)uVar6 +
                   (double)uVar10 * (double)uVar10);
      if (dVar2 <= 0.0) {
        lVar3 = *(longlong *)((longlong)this + 8);
        dVar7 = *(double *)(lVar3 + 8);
        dVar9 = *(double *)(lVar3 + 0x10);
        dVar2 = *(double *)(lVar3 + 0x18);
      }
      else {
        dVar2 = __real_3ff0000000000000 / dVar2;
        dVar7 = (double)uVar6 * dVar2;
        dVar9 = (double)uVar8 * dVar2;
        dVar2 = (double)uVar10 * dVar2;
      }
    }
    local_188._0_8_ = (code *)0x0;
    dVar5 = (double)**(float **)((longlong)this + 8);
    puVar19 = FMemory::Malloc(0x20,8);
    uVar18 = local_128[1]._4_4_;
    uVar17 = (undefined4)local_128[1];
    uVar16 = local_128[0]._4_4_;
    uVar15 = (undefined4)local_128[0];
    dVar14 = dStack_130;
    pcVar13 = local_138;
    *puVar19 = &UE::Core::Private::Function::
                TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                ::_vftable_;
    puVar19[1] = dVar5 * dVar7;
    puVar19[2] = dVar5 * dVar9;
    puVar19[3] = dVar5 * dVar2;
    if ((double *)(puVar19 + 1) != (double *)0x0) {
      local_188._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
           ::Call;
    }
    pdVar11 = (double *)CONCAT44(local_128[3]._4_4_,(undefined4)local_128[3]);
    local_138 = (code *)local_188._0_8_;
    dStack_130 = (double)local_188._8_8_;
    local_188._40_4_ = SUB84(puVar19,0);
    local_188._44_4_ = (undefined4)((ulonglong)puVar19 >> 0x20);
    local_128[2]._0_4_ = local_188._32_4_;
    local_128[2]._4_4_ = local_188._36_4_;
    local_128[3]._0_4_ = local_188._40_4_;
    local_128[3]._4_4_ = local_188._44_4_;
    local_128[0]._0_4_ = local_188._16_4_;
    local_128[0]._4_4_ = local_188._20_4_;
    local_128[1]._0_4_ = local_188._24_4_;
    local_128[1]._4_4_ = local_188._28_4_;
    local_188._0_8_ = pcVar13;
    local_188._8_8_ = dVar14;
    local_188._16_4_ = uVar15;
    local_188._20_4_ = uVar16;
    local_188._24_4_ = uVar17;
    local_188._28_4_ = uVar18;
    if (pcVar13 != (code *)0x0) {
      pdVar20 = &(((TVector<double>_u_0 *)local_188)->_s_0).Z;
      if (pdVar11 != (double *)0x0) {
        pdVar20 = pdVar11;
      }
      (**(code **)((longlong)*pdVar20 + 0x10))();
    }
    pfVar4 = *(float **)((longlong)this + 8);
    local_c3 = 0.0 < *pfVar4;
    local_c8 = pfVar4[0xb];
    local_c4 = *(bool *)(pfVar4 + 0xc);
    UE::Geometry::FOffsetMeshRegion::Apply((FOffsetMeshRegion *)local_158);
    iVar12 = local_98;
    pFVar23 = (FOffsetInfo *)(local_a0.Data + (longlong)local_98 * 0x68);
    FVar22.Data = local_a0.Data;
    while( true ) {
      if (local_98 != iVar12) {
        `TCheckedPointerIterator<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_1b8);
      }
      if ((FOffsetInfo *)FVar22.Data == pFVar23) break;
      UELocal::ApplyPolygroupModeToNewTriangles
                (*(FDynamicMesh3 **)this,(TArray<int,TSizedDefaultAllocator<32>_> *)FVar22.Data,
                 *(FGeometryScriptMeshEditPolygroupOptions *)
                  (*(longlong *)((longlong)this + 8) + 0x24));
      FVar22.Data = FVar22.Data + 0x68;
    }
  }
  local_158[0] = &___7FOffsetMeshRegion_Geometry_UE__6B_;
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  DestructItems<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int>
            ((FOffsetInfo *)local_a0.Data,local_98);
  if ((FOffsetInfo *)local_a0.Data != (FOffsetInfo *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  if (local_f8 != 0) {
    plVar21 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar21 = local_d0;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (local_138 != (code *)0x0) {
    plVar21 = local_128;
    if ((longlong *)CONCAT44(local_128[3]._4_4_,(undefined4)local_128[3]) != (longlong *)0x0) {
      plVar21 = (longlong *)CONCAT44(local_128[3]._4_4_,(undefined4)local_128[3]);
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce281c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>::operator()'
::__l2::<lambda_1>::operator()(void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ForAnyElementType FVar15;
  FOffsetInfo *pFVar16;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  code *local_158;
  undefined8 uStack_150;
  longlong local_148 [4];
  undefined **local_128 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  code *local_108;
  undefined8 uStack_100;
  longlong local_f8 [4];
  double local_d8;
  EVertexExtrusionVectorType local_d0;
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  float local_98;
  bool local_94;
  bool local_93;
  ForAnyElementType local_70;
  int local_68;
  ForAnyElementType local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  UE::Geometry::FOffsetMeshRegion::FOffsetMeshRegion
            ((FOffsetMeshRegion *)local_128,*(FDynamicMesh3 **)this);
  if (&local_118 != param_1) {
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    local_118.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = param_1->ArrayNum;
    local_118.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  if (0 < local_118.ArrayNum) {
    puVar12 = *(undefined8 **)((longlong)this + 8);
    uVar3 = *puVar12;
    uVar4 = puVar12[1];
    uVar1 = puVar12[2];
    local_158 = (code *)0x0;
    puVar12 = FMemory::Malloc(0x20,8);
    uVar10 = local_f8[1]._4_4_;
    uVar9 = (undefined4)local_f8[1];
    uVar8 = local_f8[0]._4_4_;
    uVar7 = (undefined4)local_f8[0];
    uVar6 = uStack_100;
    pcVar5 = local_108;
    puVar12[1] = uVar3;
    puVar12[2] = uVar4;
    *puVar12 = &UE::Core::Private::Function::
                TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                ::_vftable_;
    puVar12[3] = uVar1;
    if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_158 = UE::Core::Private::Function::
                  TFunctionRefCaller<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
                  ::Call;
    }
    plVar14 = (longlong *)CONCAT44(local_f8[3]._4_4_,(undefined4)local_f8[3]);
    local_108 = local_158;
    uStack_100 = uStack_150;
    local_148[3]._0_4_ = SUB84(puVar12,0);
    local_148[3]._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
    local_f8[2]._0_4_ = (undefined4)local_148[2];
    local_f8[2]._4_4_ = local_148[2]._4_4_;
    local_f8[3]._0_4_ = (undefined4)local_148[3];
    local_f8[3]._4_4_ = local_148[3]._4_4_;
    local_f8[0]._0_4_ = (undefined4)local_148[0];
    local_f8[0]._4_4_ = local_148[0]._4_4_;
    local_f8[1]._0_4_ = (undefined4)local_148[1];
    local_f8[1]._4_4_ = local_148[1]._4_4_;
    local_158 = pcVar5;
    uStack_150 = uVar6;
    local_148[0]._0_4_ = uVar7;
    local_148[0]._4_4_ = uVar8;
    local_148[1]._0_4_ = uVar9;
    local_148[1]._4_4_ = uVar10;
    if (pcVar5 != (code *)0x0) {
      plVar13 = local_148;
      if (plVar14 != (longlong *)0x0) {
        plVar13 = plVar14;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    pfVar2 = *(float **)((longlong)this + 8);
    if (*(char *)(pfVar2 + 1) == '\0') {
      local_d0 = VertexNormal;
    }
    else {
      local_d0 = (*(char *)(pfVar2 + 1) != '\x01') + SelectionTriNormalsAngleWeightedAverage;
    }
    local_d8 = (double)*pfVar2;
    local_93 = 0.0 < *pfVar2;
    local_98 = pfVar2[4];
    local_94 = *(bool *)(pfVar2 + 5);
    UE::Geometry::FOffsetMeshRegion::Apply((FOffsetMeshRegion *)local_128);
    iVar11 = local_68;
    pFVar16 = (FOffsetInfo *)(local_70.Data + (longlong)local_68 * 0x68);
    FVar15.Data = local_70.Data;
    while( true ) {
      if (local_68 != iVar11) {
        `TCheckedPointerIterator<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_168);
      }
      if ((FOffsetInfo *)FVar15.Data == pFVar16) break;
      UELocal::ApplyPolygroupModeToNewTriangles
                (*(FDynamicMesh3 **)this,(TArray<int,TSizedDefaultAllocator<32>_> *)FVar15.Data,
                 *(FGeometryScriptMeshEditPolygroupOptions *)(*(longlong *)((longlong)this + 8) + 8)
                );
      FVar15.Data = FVar15.Data + 0x68;
    }
  }
  local_128[0] = &___7FOffsetMeshRegion_Geometry_UE__6B_;
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  DestructItems<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int>
            ((FOffsetInfo *)local_70.Data,local_68);
  if ((FOffsetInfo *)local_70.Data != (FOffsetInfo *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_c8 != 0) {
    plVar14 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar14 = local_a0;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_108 != (code *)0x0) {
    plVar14 = local_f8;
    if ((longlong *)CONCAT44(local_f8[3]._4_4_,(undefined4)local_f8[3]) != (longlong *)0x0) {
      plVar14 = (longlong *)CONCAT44(local_f8[3]._4_4_,(undefined4)local_f8[3]);
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce28470

bool __thiscall
``UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals'::__l2::<lambda_1>::operator()'::
__l2::<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  FPolygroupSet *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = (longlong)param_3;
  lVar12 = (longlong)param_2;
  if (**(char **)this != '\0') {
    plVar1 = *(longlong **)((longlong)this + 8);
    uVar10 = 0;
    if (param_2 < (int)plVar1[1]) {
      uVar10 = (uint)~param_2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    plVar2 = *(longlong **)((longlong)this + 8);
    lVar3 = *plVar1;
    uVar10 = 0;
    if (param_3 < (int)plVar2[1]) {
      uVar10 = (uint)~param_3 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    lVar4 = *plVar2;
    if (*(double *)(lVar4 + 8 + lVar11 * 0x18) * *(double *)(lVar3 + 8 + lVar12 * 0x18) +
        *(double *)(lVar4 + lVar11 * 0x18) * *(double *)(lVar3 + lVar12 * 0x18) +
        *(double *)(lVar4 + 0x10 + lVar11 * 0x18) * *(double *)(lVar3 + 0x10 + lVar12 * 0x18) <
        (double)**(float **)((longlong)this + 0x10)) {
      return false;
    }
  }
  if (*(char *)(*(longlong *)this + 8) != '\0') {
    this_00 = (FPolygroupSet *)**(undefined8 **)((longlong)this + 0x18);
    iVar8 = UE::Geometry::FPolygroupSet::GetTriangleGroup(this_00,param_2);
    iVar9 = UE::Geometry::FPolygroupSet::GetTriangleGroup(this_00,param_3);
    return iVar8 == iVar9;
  }
  return true;
}

// operator() @ 14ce28600

void __thiscall
``UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer'::__l2::<lambda_1>::operator()'::
__l2::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float local_res8;
  float local_resc;
  FIndex3i_u_0 local_48;
  undefined8 local_38;
  
  if (**(char **)this != '\0') {
    uVar9 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
            (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
    if (*(int *)(**(longlong **)((longlong)this + 8) + 8) * 0x200 +
        *(int *)(**(longlong **)((longlong)this + 8) + 0xc) < (int)uVar9) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      return;
    }
    uVar8 = 0;
    if ((uVar9 != 0) &&
       (pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar8 = 0,
       0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
      uVar7 = 1;
      uVar8 = 1;
      if (1 < (int)uVar9) {
        do {
          sVar2 = *(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar7 >> 9) * 8) +
                            (ulonglong)(uVar7 & 0x1ff) * 2);
          if ((sVar2 != 0) && (uVar8 = uVar7, sVar2 != -1)) break;
          uVar7 = uVar7 + 1;
          uVar8 = uVar7;
        } while ((int)uVar7 < (int)uVar9);
      }
    }
    if (uVar8 == uVar9) {
      return;
    }
LAB_14ce286b0:
    do {
      lVar4 = **(longlong **)((longlong)this + 8);
      if (((int)uVar8 < 0) || (*(int *)(lVar4 + 8) * 0x200 + *(int *)(lVar4 + 0xc) <= (int)uVar8)) {
LAB_14ce2875c:
        **(undefined1 **)((longlong)this + 0x10) = 1;
      }
      else {
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar8 >> 9) * 8
                                          ) + (ulonglong)(uVar8 & 0x1ff) * 2) - 1U))
        goto LAB_14ce2875c;
        pdVar1 = (double *)
                 (*(longlong *)
                   ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8)
                 + (ulonglong)(uVar8 & 0x1ff) * 0x18);
        dVar5 = pdVar1[1];
        *(float *)(*(longlong *)
                    (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                  (ulonglong)(uVar8 * 2 & 0x1ff) * 4) = (float)*pdVar1;
        *(float *)(*(longlong *)
                    (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                  (ulonglong)(uVar8 * 2 + 1 & 0x1ff) * 4) = (float)dVar5;
      }
      uVar8 = uVar8 + 1;
      if ((int)uVar8 < (int)uVar9) {
        pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          if ((*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                         (ulonglong)(uVar8 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                        (ulonglong)(uVar8 & 0x1ff) * 2) != -1)) goto LAB_14ce286b0;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar9);
      }
      if (uVar8 == uVar9) {
        return;
      }
    } while( true );
  }
  if (*(int *)(*(longlong *)((longlong)this + 0x18) + 0x140) * 0x200 +
      *(int *)(*(longlong *)((longlong)this + 0x18) + 0x144) <
      (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    **(undefined1 **)((longlong)this + 0x10) = 1;
    return;
  }
  UE::Geometry::TDynamicMeshOverlay<float,2>::ClearElements
            ((TDynamicMeshOverlay<float,2> *)**(undefined8 **)((longlong)this + 8));
  uVar9 = 0;
  uVar8 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
          (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar8 == 0) ||
     (pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar3 - 1U) < 0xfffe)) {
LAB_14ce28875:
    bVar10 = uVar9 == uVar8;
  }
  else {
    uVar9 = 1;
    bVar10 = uVar8 == 1;
    if (1 < (int)uVar8) {
      do {
        lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar9 >> 9) * 8);
        if ((*(short *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) break;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar8);
      goto LAB_14ce28875;
    }
  }
  if (!bVar10) {
LAB_14ce28880:
    do {
      lVar4 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
      local_38 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
      local_res8 = (float)*pdVar1;
      local_resc = (float)pdVar1[1];
      UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement
                ((TDynamicMeshOverlay<float,2> *)**(undefined8 **)((longlong)this + 8),uVar9,
                 &local_res8,true);
      uVar9 = uVar9 + 1;
      if ((int)uVar9 < (int)uVar8) {
        pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          if ((*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar9 >> 9) * 8) +
                         (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar9 >> 9) * 8) +
                        (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) goto LAB_14ce28880;
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar8);
      }
    } while (uVar9 != uVar8);
  }
  UE::Geometry::FRefCountVector::RebuildFreeList
            ((FRefCountVector *)(**(longlong **)((longlong)this + 8) + 8));
  uVar8 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
          (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar9 = 0;
  if ((uVar8 != 0) &&
     (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar9 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar9 = 1;
    bVar10 = uVar8 == 1;
    if ((int)uVar8 < 2) goto LAB_14ce2899a;
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar9 >> 9) * 8) +
                        (ulonglong)(uVar9 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar8);
  }
  bVar10 = uVar9 == uVar8;
LAB_14ce2899a:
  if (!bVar10) {
LAB_14ce289a0:
    do {
      lVar4 = *(longlong *)((longlong)this + 0x18);
      if (((int)uVar9 < 0) ||
         (*(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144) <= (int)uVar9)) {
LAB_14ce28a20:
        **(undefined1 **)((longlong)this + 0x10) = 1;
      }
      else {
        uVar6 = (ulonglong)(uVar9 & 0x1ff);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(lVar4 + 0x148) +
                                          (ulonglong)(uVar9 >> 9) * 8) + uVar6 * 2) - 1U))
        goto LAB_14ce28a20;
        lVar4 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
        local_48._0_8_ = *(undefined8 *)(lVar4 + uVar6 * 0xc);
        local_48._s_0.C = *(int *)(lVar4 + 8 + uVar6 * 0xc);
        UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                  ((TDynamicMeshOverlay<float,2> *)**(undefined8 **)((longlong)this + 8),uVar9,
                   (FIndex3i *)&local_48._s_0,true);
      }
      uVar9 = uVar9 + 1;
      if ((int)uVar9 < (int)uVar8) {
        do {
          lVar4 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar9 >> 9) * 8);
          if ((*(short *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) goto LAB_14ce289a0;
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar8);
      }
    } while (uVar9 != uVar8);
  }
  return;
}

// operator() @ 14ce28aa0

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ce28b50

void __thiscall
``UGeometryScriptLibrary_MeshNormalsFunctions::FlipTriangleSelectionNormals'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  char local_res8;
  char local_res18;
  uint local_res20 [2];
  int local_78;
  int local_74;
  int local_70;
  undefined8 local_6c;
  float local_64;
  int local_60 [4];
  undefined8 local_50;
  uint local_48;
  
  if (*(char *)((longlong)this + 0x20) != '\0') {
    UE::Geometry::FDynamicMesh3::ReverseTriOrientation(*(FDynamicMesh3 **)this,param_1);
  }
  uVar8 = __xmm_80000000800000008000000080000000;
  if (*(char *)((longlong)this + 0x21) != '\0') {
    if (*(char *)(*(longlong *)this + 0x70) != '\0') {
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
      local_50 = *(undefined8 *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc);
      uVar10 = *(uint *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
      uVar1 = (uint)local_50;
      local_res20[0] = (uint)local_50;
      local_48 = uVar10;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
                 &local_78,(bool *)local_res20);
      if (local_res8 == '\0') {
        if (*(char *)(*(longlong *)this + 0x70) == '\0') {
          local_6c = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
          local_64 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)this + 0x60);
          uVar9 = (ulonglong)((uint)local_50 & 0x1ff);
          lVar14 = *(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8);
          uVar2 = *(undefined8 *)(lVar14 + uVar9 * 0xc);
          local_64 = *(float *)(lVar14 + 8 + uVar9 * 0xc);
          uVar9 = (ulonglong)((uint)local_50 & 0x1ff);
          lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8);
          *(uint *)(lVar4 + uVar9 * 0xc) = (uint)uVar2 ^ uVar8;
          local_6c._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
          *(uint *)(lVar4 + 4 + uVar9 * 0xc) = local_6c._4_4_ ^ uVar8;
          *(uint *)(lVar4 + 8 + uVar9 * 0xc) = (uint)local_64 ^ uVar8;
          uVar10 = local_48;
          local_6c = uVar2;
        }
      }
      uVar1 = local_50._4_4_;
      local_res20[0] = local_50._4_4_;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
                 &local_78,(bool *)local_res20);
      if (local_res8 == '\0') {
        lVar4 = *(longlong *)this;
        if (*(char *)(lVar4 + 0x70) == '\0') {
          local_6c = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
          local_64 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        }
        else {
          lVar14 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (ulonglong)(uVar1 >> 9) * 8);
          uVar2 = *(undefined8 *)(lVar14 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
          local_64 = *(float *)(lVar14 + 8 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
          uVar9 = (ulonglong)(uVar1 & 0x1ff);
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (ulonglong)(uVar1 >> 9) * 8);
          *(uint *)(lVar4 + uVar9 * 0xc) = (uint)uVar2 ^ uVar8;
          local_6c._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
          *(uint *)(lVar4 + 4 + uVar9 * 0xc) = local_6c._4_4_ ^ uVar8;
          *(uint *)(lVar4 + 8 + uVar9 * 0xc) = (uint)local_64 ^ uVar8;
          uVar10 = local_48;
          local_6c = uVar2;
        }
      }
      local_res20[0] = uVar10;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
                 &local_78,(bool *)local_res20);
      if ((local_res8 == '\0') && (*(char *)(*(longlong *)this + 0x70) != '\0')) {
        lVar4 = *(longlong *)(*(longlong *)this + 0x60);
        lVar14 = *(longlong *)(lVar4 + (ulonglong)(uVar10 >> 9) * 8);
        uVar2 = *(undefined8 *)(lVar14 + (ulonglong)(local_48 & 0x1ff) * 0xc);
        local_64 = *(float *)(lVar14 + 8 + (ulonglong)(local_48 & 0x1ff) * 0xc);
        uVar9 = (ulonglong)(local_48 & 0x1ff);
        lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar10 >> 9) * 8);
        *(uint *)(lVar4 + uVar9 * 0xc) = (uint)uVar2 ^ uVar8;
        local_6c._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
        *(uint *)(lVar4 + 4 + uVar9 * 0xc) = local_6c._4_4_ ^ uVar8;
        *(uint *)(lVar4 + 8 + uVar9 * 0xc) = (uint)local_64 ^ uVar8;
        local_6c = uVar2;
      }
    }
    if (*(longlong *)((longlong)this + 0x18) != 0) {
      lVar4 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x78);
      uVar10 = param_1 * 3;
      local_60[0] = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                            (ulonglong)(uVar10 & 0x1ff) * 4);
      if (-1 < local_60[0]) {
        local_60[1] = *(undefined4 *)
                       (*(longlong *)(lVar4 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
        lVar14 = 0;
        local_60[2] = *(undefined4 *)
                       (*(longlong *)(lVar4 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                       (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
        do {
          iVar3 = local_60[lVar14];
          local_74 = iVar3;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                      ((longlong)this + 0x10),&local_70,(bool *)&local_74);
          if (local_res18 == '\0') {
            lVar4 = *(longlong *)((longlong)this + 0x18);
            uVar7 = iVar3 * 3;
            lVar5 = *(longlong *)(lVar4 + 0x48);
            uVar11 = (ulonglong)(uVar7 + 1 & 0x1ff);
            uVar13 = (ulonglong)(uVar7 + 1 >> 9);
            uVar9 = (ulonglong)(uVar7 + 2 >> 9);
            lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8);
            uVar12 = (ulonglong)(uVar7 + 2 & 0x1ff);
            uVar10 = *(uint *)(*(longlong *)(lVar5 + uVar13 * 8) + uVar11 * 4);
            uVar1 = *(uint *)(*(longlong *)(lVar5 + uVar9 * 8) + uVar12 * 4);
            *(uint *)(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 4) =
                 *(uint *)(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 4) ^ uVar8;
            *(uint *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar13 * 8) + uVar11 * 4) =
                 uVar10 ^ uVar8;
            *(uint *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar9 * 8) + uVar12 * 4) =
                 uVar1 ^ uVar8;
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < 3);
      }
    }
  }
  return;
}

// operator() @ 14ce28f30

void __thiscall
``UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops'::__l2::
<lambda_1>::operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ce28fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  double *pdVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auStackY_148 [32];
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector2<float>_u_0 local_c8;
  TVector2<float>_u_0 local_c0;
  TVector2<float>_u_0 local_b8;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_148;
  iVar1 = *(int *)(*(longlong *)
                    (*(longlong *)(**(longlong **)this + 0x78) +
                    (ulonglong)((uint)(param_1 * 3) >> 9) * 8) +
                  (ulonglong)(param_1 * 3 & 0x1ff) * 4);
  if ((-1 < iVar1) ||
     (**(undefined1 **)((longlong)this + 8) = 1, **(char **)((longlong)this + 0x10) == '\0')) {
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (*(FDynamicMesh3 **)((longlong)this + 0x18),param_1,(TVector<double> *)&local_118._s_0
               ,(TVector<double> *)&local_100._s_0,(TVector<double> *)&local_e8._s_0);
    dVar8 = (local_e8._s_0.Y - local_118._s_0.Y) * (local_100._s_0.Z - local_118._s_0.Z) -
            (local_e8._s_0.Z - local_118._s_0.Z) * (local_100._s_0.Y - local_118._s_0.Y);
    auVar6._0_8_ = (local_e8._s_0.X - local_118._s_0.X) * (local_100._s_0.Z - local_118._s_0.Z);
    auVar6._8_8_ = 0;
    dVar4 = (local_e8._s_0.Z - local_118._s_0.Z) * (local_100._s_0.X - local_118._s_0.X) -
            auVar6._0_8_;
    dVar5 = (local_e8._s_0.X - local_118._s_0.X) * (local_100._s_0.Y - local_118._s_0.Y) -
            (local_e8._s_0.Y - local_118._s_0.Y) * (local_100._s_0.X - local_118._s_0.X);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar4 * dVar4 + dVar8 * dVar8 + dVar5 * dVar5;
    auVar7 = sqrtpd(auVar6,auVar7);
    **(double **)((longlong)this + 0x20) =
         auVar7._0_8_ * __real_3fe0000000000000 + **(double **)((longlong)this + 0x20);
    pdVar2 = *(double **)((longlong)this + 0x28);
    if (local_118._s_0.X < *pdVar2) {
      *pdVar2 = local_118._s_0.X;
    }
    if (pdVar2[3] <= local_118._s_0.X && local_118._s_0.X != pdVar2[3]) {
      pdVar2[3] = local_118._s_0.X;
    }
    if (local_118._s_0.Y < pdVar2[1]) {
      pdVar2[1] = local_118._s_0.Y;
    }
    if (pdVar2[4] <= local_118._s_0.Y && local_118._s_0.Y != pdVar2[4]) {
      pdVar2[4] = local_118._s_0.Y;
    }
    if (local_118._s_0.Z < pdVar2[2]) {
      pdVar2[2] = local_118._s_0.Z;
    }
    if (pdVar2[5] <= local_118._s_0.Z && local_118._s_0.Z != pdVar2[5]) {
      pdVar2[5] = local_118._s_0.Z;
    }
    pdVar2 = *(double **)((longlong)this + 0x28);
    if (local_100._s_0.X < *pdVar2) {
      *pdVar2 = local_100._s_0.X;
    }
    if (pdVar2[3] <= local_100._s_0.X && local_100._s_0.X != pdVar2[3]) {
      pdVar2[3] = local_100._s_0.X;
    }
    if (local_100._s_0.Y < pdVar2[1]) {
      pdVar2[1] = local_100._s_0.Y;
    }
    if (pdVar2[4] <= local_100._s_0.Y && local_100._s_0.Y != pdVar2[4]) {
      pdVar2[4] = local_100._s_0.Y;
    }
    if (local_100._s_0.Z < pdVar2[2]) {
      pdVar2[2] = local_100._s_0.Z;
    }
    if (pdVar2[5] <= local_100._s_0.Z && local_100._s_0.Z != pdVar2[5]) {
      pdVar2[5] = local_100._s_0.Z;
    }
    pdVar2 = *(double **)((longlong)this + 0x28);
    if (local_e8._s_0.X < *pdVar2) {
      *pdVar2 = local_e8._s_0.X;
    }
    if (pdVar2[3] <= local_e8._s_0.X && local_e8._s_0.X != pdVar2[3]) {
      pdVar2[3] = local_e8._s_0.X;
    }
    if (local_e8._s_0.Y < pdVar2[1]) {
      pdVar2[1] = local_e8._s_0.Y;
    }
    if (pdVar2[4] <= local_e8._s_0.Y && local_e8._s_0.Y != pdVar2[4]) {
      pdVar2[4] = local_e8._s_0.Y;
    }
    if (local_e8._s_0.Z < pdVar2[2]) {
      pdVar2[2] = local_e8._s_0.Z;
    }
    if (pdVar2[5] <= local_e8._s_0.Z && local_e8._s_0.Z != pdVar2[5]) {
      pdVar2[5] = local_e8._s_0.Z;
    }
    if (-1 < iVar1) {
      UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>::GetTriElements
                ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
                 **(undefined8 **)this,param_1,(TVector2<float> *)&local_c8._s_0,
                 (TVector2<float> *)&local_c0._s_0,(TVector2<float> *)&local_b8._s_0);
      **(double **)((longlong)this + 0x30) =
           (double)((float)((uint)((local_c0._s_0.X - local_c8._s_0.X) *
                                   (local_b8._s_0.Y - local_c8._s_0.Y) -
                                  (local_c0._s_0.Y - local_c8._s_0.Y) *
                                  (local_b8._s_0.X - local_c8._s_0.X)) &
                           __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3f000000) +
           **(double **)((longlong)this + 0x30);
      pfVar3 = *(float **)((longlong)this + 0x38);
      if (local_c8._s_0.X < *pfVar3) {
        *pfVar3 = local_c8._s_0.X;
      }
      if (pfVar3[2] <= local_c8._s_0.X && local_c8._s_0.X != pfVar3[2]) {
        pfVar3[2] = local_c8._s_0.X;
      }
      if (local_c8._s_0.Y < pfVar3[1]) {
        pfVar3[1] = local_c8._s_0.Y;
      }
      if (pfVar3[3] <= local_c8._s_0.Y && local_c8._s_0.Y != pfVar3[3]) {
        pfVar3[3] = local_c8._s_0.Y;
      }
      pfVar3 = *(float **)((longlong)this + 0x38);
      if (local_c0._s_0.X < *pfVar3) {
        *pfVar3 = local_c0._s_0.X;
      }
      if (pfVar3[2] <= local_c0._s_0.X && local_c0._s_0.X != pfVar3[2]) {
        pfVar3[2] = local_c0._s_0.X;
      }
      if (local_c0._s_0.Y < pfVar3[1]) {
        pfVar3[1] = local_c0._s_0.Y;
      }
      if (pfVar3[3] <= local_c0._s_0.Y && local_c0._s_0.Y != pfVar3[3]) {
        pfVar3[3] = local_c0._s_0.Y;
      }
      pfVar3 = *(float **)((longlong)this + 0x38);
      if (local_b8._s_0.X < *pfVar3) {
        *pfVar3 = local_b8._s_0.X;
      }
      if (pfVar3[2] <= local_b8._s_0.X && local_b8._s_0.X != pfVar3[2]) {
        pfVar3[2] = local_b8._s_0.X;
      }
      if (local_b8._s_0.Y < pfVar3[1]) {
        pfVar3[1] = local_b8._s_0.Y;
      }
      if (pfVar3[3] <= local_b8._s_0.Y && local_b8._s_0.Y != pfVar3[3]) {
        pfVar3[3] = local_b8._s_0.Y;
      }
    }
  }
  return;
}

// operator() @ 14ce29450

void __thiscall
``UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedVertices'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ce29500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_118 [32];
  double local_f8 [2];
  TVector<double>_u_0 local_e8;
  undefined1 local_c8 [16];
  double local_b8;
  double local_a8 [2];
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  auVar19 = *(undefined1 (*) [16])((longlong)this + 0x20);
  auVar12 = *(undefined1 (*) [16])((longlong)this + 0x10);
  dVar7 = *(double *)((longlong)this + 0x28);
  auVar14 = blendpd(auVar12,auVar19,2);
  dVar3 = (param_1->field0_0x0)._s_0.X * *(double *)((longlong)this + 0x50);
  dVar4 = (param_1->field0_0x0)._s_0.Y * *(double *)((longlong)this + 0x58);
  uVar20 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar22._8_4_ = SUB84(dVar4,0);
  auVar22._0_8_ = dVar3;
  auVar22._12_4_ = uVar20;
  dVar5 = (param_1->field0_0x0)._s_0.Z * *(double *)((longlong)this + 0x60);
  dVar6 = *(double *)((longlong)this + 0x68) * 0.0;
  dVar11 = auVar19._0_8_;
  auVar23._0_8_ = auVar22._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
  auVar23._8_8_ = dVar5 * auVar12._8_8_ - dVar11 * dVar4;
  auVar24._8_4_ = SUB84(dVar4,0);
  auVar24._0_8_ = dVar3;
  auVar24._12_4_ = uVar20;
  auVar12._8_4_ = SUB84(dVar6,0);
  auVar12._0_8_ = dVar5;
  auVar12._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar12 = blendpd(auVar24,auVar12,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar11 - auVar14._0_8_ * dVar5;
  auVar13._8_8_ = auVar12._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar6;
  auVar12 = *(undefined1 (*) [16])((longlong)this + 0x10);
  auVar24 = blendpd(auVar23,auVar13,2);
  dVar1 = auVar23._8_8_ + auVar23._8_8_;
  dVar2 = auVar13._0_8_ + auVar13._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar25._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar25._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar17._8_4_ = SUB84(dVar2,0);
  auVar17._0_8_ = dVar1;
  auVar17._12_4_ = uVar20;
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = uVar20;
  auVar24 = blendpd(auVar15,auVar25,2);
  auVar18._0_8_ = auVar17._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar1;
  auVar18._8_8_ = auVar25._0_8_ * auVar12._8_8_ - dVar11 * dVar2;
  auVar14._8_4_ = SUB84(auVar18._8_8_,0);
  auVar14._0_8_ = auVar18._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
  auVar12 = blendpd(auVar12,auVar19,2);
  dVar6 = *(double *)((longlong)this + 0x70);
  auVar16._0_8_ = auVar24._0_8_ * dVar11 - auVar12._0_8_ * auVar25._0_8_;
  auVar16._8_8_ = auVar24._8_8_ * auVar19._8_8_ - auVar12._8_8_ * auVar25._8_8_;
  auVar19 = blendpd(auVar18,auVar16,2);
  dVar11 = dVar1 * dVar7 + dVar3 + auVar14._8_8_ + *(double *)((longlong)this + 0x30);
  dVar1 = dVar2 * dVar7 + dVar4 + auVar16._0_8_ + *(double *)((longlong)this + 0x38);
  uVar20 = SUB84(dVar1,0);
  uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_e8._s_0.Z =
       auVar25._0_8_ * dVar7 + dVar5 + auVar19._0_8_ + *(double *)((longlong)this + 0x40);
  local_c8._8_4_ = uVar20;
  local_c8._0_8_ = dVar11;
  local_c8._12_4_ = uVar21;
  local_e8._8_4_ = uVar20;
  local_e8._0_8_ = dVar11;
  local_e8._12_4_ = uVar21;
  local_b8 = local_e8._s_0.Z;
  dVar11 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                     (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 8),
                      (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 8))->
                      Tree->RootIndex,(TVector<double> *)&local_e8._s_0);
  bVar10 = dVar6 < dVar11;
  if (!bVar10) {
    local_a8[0] = *(double *)((longlong)this + 0x78);
    if (0.0 < local_a8[0]) {
      local_98 = 0;
      local_70 = (longlong *)0x0;
      local_68 = 0;
      iVar8 = (**(code **)(**(longlong **)this + 0x20))
                        (*(longlong **)this,local_c8,local_f8,local_a8);
      if (local_98 != 0) {
        plVar9 = local_88;
        if (local_70 != (longlong *)0x0) {
          plVar9 = local_70;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if ((-1 < iVar8) &&
         (local_f8[0] < *(double *)((longlong)this + 0x78) * *(double *)((longlong)this + 0x78))) {
        bVar10 = true;
      }
    }
  }
  return bVar10 != (bool)*(char *)((longlong)this + 0x80);
}

// operator() @ 14ce29760

bool __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSharpEdges'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  double dVar3;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)
             (((*(FDynamicMesh3 **)((longlong)this + 8))->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
  iVar2 = (int)((ulonglong)uVar1 >> 0x20);
  if (iVar2 == -1) {
    return false;
  }
  UE::Geometry::FDynamicMesh3::GetTriNormal
            (*(FDynamicMesh3 **)((longlong)this + 8),(TVector<double> *)&local_20._s_0,(int)uVar1);
  UE::Geometry::FDynamicMesh3::GetTriNormal
            (*(FDynamicMesh3 **)((longlong)this + 8),(TVector<double> *)&local_38._s_0,iVar2);
  dVar3 = local_20._s_0.Y * local_38._s_0.Y + local_20._s_0.X * local_38._s_0.X +
          local_38._s_0.Z * local_20._s_0.Z;
  return dVar3 < *(double *)this || dVar3 == *(double *)this;
}

// operator() @ 14ce29810

void __thiscall
``UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ce298c0

void __thiscall
``UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ce29970

void __thiscall
``UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ce29a20

void __thiscall
``UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal'::__l2::<lambda_1>::operator()'::
__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int local_28;
  int iStack_24;
  int local_20;
  int aiStack_1c [5];
  
  uVar8 = param_1 * 3;
  lVar4 = *(longlong *)(**(longlong **)this + 0x78);
  iVar10 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar8 >> 9) * 8) +
                   (ulonglong)(uVar8 & 0x1ff) * 4);
  if (-1 < iVar10) {
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) +
              (ulonglong)((uint)param_1 >> 9) * 8);
    uVar2 = *(undefined8 *)(lVar11 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    iVar3 = **(int **)((longlong)this + 0x10);
    aiStack_1c[1] = (int)uVar2;
    if (aiStack_1c[1] == iVar3) {
      iStack_24 = 0;
    }
    else if ((int)((ulonglong)uVar2 >> 0x20) == iVar3) {
      iStack_24 = 1;
    }
    else {
      iStack_24 = -1;
      if (*(int *)(lVar11 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc) == iVar3) {
        iStack_24 = 2;
      }
    }
    lVar11 = (longlong)iStack_24;
    pFVar5 = *(ForAnyElementType **)((longlong)this + 0x18);
    aiStack_1c[2] =
         *(undefined4 *)
          (*(longlong *)(lVar4 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
          (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
    aiStack_1c[1] = iVar10;
    aiStack_1c[3] =
         *(undefined4 *)
          (*(longlong *)(lVar4 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
          (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
    local_20 = aiStack_1c[lVar11 + 1];
    local_28 = param_1;
    if ((pFVar5->Data <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0xc)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar10 + 1;
    pFVar6 = pFVar5->Data;
    *(ulonglong *)(pFVar6 + (longlong)iVar10 * 0xc) = CONCAT44(iStack_24,local_28);
    *(int *)(pFVar6 + (longlong)iVar10 * 0xc + 8) = local_20;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x20),
               aiStack_1c + lVar11 + 1);
  }
  return;
}

// operator() @ 14ce29c10

TVector<double> * __thiscall
``FMeshOffset::Offset_Smoothed'::__l24::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  lVar3 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar3 + 0x280)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x278);
  pdVar1 = (double *)(lVar3 + (longlong)param_1 * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14ce29cb0

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l55::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  plVar1 = *(longlong **)this;
  lVar2 = *plVar1;
  if (((param_1 < 0) || (*(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24) <= param_1)) ||
     (uVar5 = (ulonglong)((uint)param_1 >> 9),
     0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + uVar5 * 8) +
                                 (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    uVar5 = (ulonglong)((uint)param_1 >> 9);
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5639741446371147685>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Selections\\MeshVertexSelection.h"
                       ,0x5b,"Mesh->IsVertex(vID)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *plVar1;
    if (param_1 < 0) {
      return;
    }
  }
  else {
    lVar2 = *plVar1;
  }
  if ((param_1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + uVar5 * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_res10[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar1 + 1),local_res8,
               (bool *)local_res10);
  }
  return;
}

// operator() @ 14ce29db0

void __thiscall
``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14ce29e60

TVector<double> * __thiscall
``FMeshOffset::Offset_Smoothed'::__l27::<lambda_2>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  lVar3 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar3 + 0x280)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x278);
  pdVar1 = (double *)(lVar3 + (longlong)param_1 * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14ce29f00

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l59::<lambda_2>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  plVar1 = *(longlong **)this;
  lVar2 = *plVar1;
  if (((param_1 < 0) || (*(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4) <= param_1)) ||
     (uVar5 = (ulonglong)((uint)param_1 >> 9),
     0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + uVar5 * 8) +
                                 (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    uVar5 = (ulonglong)((uint)param_1 >> 9);
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7237690320975036317>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Selections\\MeshEdgeSelection.h"
                       ,99,"Mesh->IsEdge(eid)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *plVar1;
    if (param_1 < 0) {
      return;
    }
  }
  else {
    lVar2 = *plVar1;
  }
  if ((param_1 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4)) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + uVar5 * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_res10[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar1 + 1),local_res8,
               (bool *)local_res10);
  }
  return;
}

// operator() @ 14ce2a010

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l61::<lambda_3>::
operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  plVar1 = *(longlong **)this;
  lVar2 = *plVar1;
  if (((param_1 < 0) || (*(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144) <= param_1)) ||
     (uVar5 = (ulonglong)((uint)param_1 >> 9),
     0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x148) + uVar5 * 8) +
                                 (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    uVar5 = (ulonglong)((uint)param_1 >> 9);
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5735661616712646743>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Selections\\MeshFaceSelection.h"
                       ,0x57,"Mesh->IsTriangle(tid)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *plVar1;
    if (param_1 < 0) {
      return;
    }
  }
  else {
    lVar2 = *plVar1;
  }
  if ((param_1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144)) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x148) + uVar5 * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_res10[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar1 + 1),local_res8,
               (bool *)local_res10);
  }
  return;
}

// operator() @ 14ce2a210

void __thiscall
`AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FDynamicMeshAttributeSet *pFVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  TQuaternion<double>_u_0 local_70;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  
  if (0.0 < *(double *)((longlong)this + 0x18) * *(double *)((longlong)this + 0x18) +
            *(double *)((longlong)this + 0x10) * *(double *)((longlong)this + 0x10) +
            *(double *)((longlong)this + 0x20) * *(double *)((longlong)this + 0x20)) {
    MeshTransforms::Translate(param_1,(TVector<double> *)((longlong)this + 0x10),All);
  }
  pdVar3 = *(double **)this;
  local_70._s_0.X = *pdVar3;
  local_70._s_0.Y = pdVar3[1];
  local_70._s_0.Z = pdVar3[2];
  local_70._s_0.W = pdVar3[3];
  local_40 = pdVar3[6];
  local_50 = pdVar3[4];
  dStack_48 = pdVar3[5];
  local_28 = pdVar3[10];
  local_38 = pdVar3[8];
  dStack_30 = pdVar3[9];
  MeshTransforms::ApplyTransform(param_1,(TTransformSRT3<double> *)&local_70._s_0,true,All);
  uVar12 = 0;
  if (**(char **)((longlong)this + 8) == '\0') {
    uVar17 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    uVar15 = uVar12;
    if ((uVar17 == 0) ||
       (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar15 = 0,
       (ushort)(**(short **)pFVar4 - 1U) < 0xfffe)) {
LAB_14ce2a369:
      uVar14 = (uint)uVar15;
    }
    else {
      uVar15 = 1;
      uVar14 = 1;
      if (1 < (int)uVar17) {
        do {
          uVar10 = (ulonglong)((uint)uVar15 & 0x1ff);
          lVar5 = *(longlong *)(pFVar4 + (uVar15 >> 9) * 8);
          if ((*(short *)(lVar5 + uVar10 * 2) != 0) && (*(short *)(lVar5 + uVar10 * 2) != -1))
          break;
          uVar14 = (uint)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
        } while ((int)uVar14 < (int)uVar17);
        goto LAB_14ce2a369;
      }
    }
joined_r0x00014ce2a36c:
    if (uVar14 != uVar17) {
      while( true ) {
        if ((param_1->TriangleGroups).bIsSet != false) {
          *(undefined4 *)
           (*(longlong *)
             ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + (uVar15 >> 9) * 8
             ) + (ulonglong)((uint)uVar15 & 0x1ff) * 4) = 0;
          iVar9 = 1;
          if (1 < param_1->GroupIDCounter) {
            iVar9 = param_1->GroupIDCounter;
          }
          param_1->GroupIDCounter = iVar9;
        }
        uVar14 = (uint)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        if ((int)uVar17 <= (int)uVar14) break;
        pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          uVar10 = (ulonglong)((uint)uVar15 & 0x1ff);
          if ((*(short *)(*(longlong *)(pFVar4 + (uVar15 >> 9) * 8) + uVar10 * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar4 + (uVar15 >> 9) * 8) + uVar10 * 2) != -1)) break;
          uVar14 = (uint)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          if ((int)uVar17 <= (int)uVar14) goto joined_r0x00014ce2a36c;
        }
      }
      goto joined_r0x00014ce2a36c;
    }
  }
  if (*(char *)(*(longlong *)((longlong)this + 8) + 1) == '\0') {
    return;
  }
  UE::Geometry::FDynamicMesh3::ReverseOrientation(param_1,true);
  uVar17 = __xmm_80000000800000008000000080000000;
  pFVar6 = (param_1->AttributeSet).Ptr;
  if (pFVar6 == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  uVar15 = uVar12;
  if (0 < (pFVar6->NormalLayers).Array.ArrayNum) {
    uVar15 = *(ulonglong *)(pFVar6->NormalLayers).Array.AllocatorInstance.Data;
  }
  uVar14 = *(int *)(uVar15 + 0xc) + *(int *)(uVar15 + 8) * 0x200;
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(uVar15 + 0x10) - 1U))) {
    uVar12 = 1;
    uVar11 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014ce2a4ab;
    do {
      uVar10 = (ulonglong)((uint)uVar12 & 0x1ff);
      lVar5 = (*(undefined8 **)(uVar15 + 0x10))[uVar12 >> 9];
      if ((*(short *)(lVar5 + uVar10 * 2) != 0) && (*(short *)(lVar5 + uVar10 * 2) != -1)) break;
      uVar11 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)uVar14);
  }
  uVar11 = (uint)uVar12;
joined_r0x00014ce2a4ab:
  do {
    if (uVar11 == uVar14) {
      return;
    }
    while( true ) {
      lVar5 = *(longlong *)(uVar15 + 0x48);
      uVar8 = (int)uVar12 * 3;
      uVar18 = (ulonglong)(uVar8 + 1 >> 9);
      uVar13 = (ulonglong)(uVar8 + 1 & 0x1ff);
      lVar7 = *(longlong *)(lVar5 + (ulonglong)(uVar8 >> 9) * 8);
      uVar16 = (ulonglong)(uVar8 + 2 & 0x1ff);
      uVar10 = (ulonglong)(uVar8 + 2 >> 9);
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar1 = *(uint *)(*(longlong *)(lVar5 + uVar18 * 8) + uVar13 * 4);
      uVar2 = *(uint *)(*(longlong *)(lVar5 + uVar10 * 8) + uVar16 * 4);
      *(uint *)(lVar7 + (ulonglong)(uVar8 & 0x1ff) * 4) =
           *(uint *)(lVar7 + (ulonglong)(uVar8 & 0x1ff) * 4) ^ uVar17;
      *(uint *)(*(longlong *)(*(longlong *)(uVar15 + 0x48) + uVar18 * 8) + uVar13 * 4) =
           uVar1 ^ uVar17;
      *(uint *)(*(longlong *)(*(longlong *)(uVar15 + 0x48) + uVar10 * 8) + uVar16 * 4) =
           uVar2 ^ uVar17;
      if ((int)uVar14 <= (int)uVar11) break;
      while( true ) {
        uVar10 = (ulonglong)((uint)uVar12 & 0x1ff);
        lVar5 = *(longlong *)(*(longlong *)(uVar15 + 0x10) + (uVar12 >> 9) * 8);
        if ((*(short *)(lVar5 + uVar10 * 2) != 0) && (*(short *)(lVar5 + uVar10 * 2) != -1)) break;
        uVar11 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        if ((int)uVar14 <= (int)uVar11) goto joined_r0x00014ce2a4ab;
      }
    }
  } while( true );
}

// operator() @ 14ce2ef50

void __thiscall
`ApplyMeshUVEditorOperation'::__l2::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  int iVar3;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar4;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res10;
  FDynamicMeshUVEditor local_28;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    iVar1 = **(int **)this;
    iVar3 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if ((iVar1 < iVar3) &&
       (pTVar4 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                           ((param_1->AttributeSet).Ptr,iVar1),
       pTVar4 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
      **(undefined1 **)((longlong)this + 8) = 1;
      pTVar4 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                         ((param_1->AttributeSet).Ptr,**(int **)this);
      UE::Geometry::FDynamicMeshUVEditor::FDynamicMeshUVEditor(&local_28,param_1,pTVar4);
      local_res10 = pTVar4;
      (*(code *)**(undefined8 **)((longlong)this + 0x10))
                ((*(undefined8 **)((longlong)this + 0x10))[1],param_1,&local_res10,&local_28);
    }
  }
  return;
}

// operator() @ 14ce44200

void __thiscall
`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  FPolygroupLayer FVar1;
  bool bVar2;
  undefined4 uVar3;
  FPolygroupLayer local_res8;
  FPolygroupSet local_28;
  
  local_res8.bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_res8.LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar2 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res8,param_1);
  if (bVar2) {
    FVar1.LayerIndex = local_res8.LayerIndex;
    FVar1.bIsDefaultLayer = local_res8.bIsDefaultLayer;
    FVar1._1_3_ = local_res8._1_3_;
    UE::Geometry::FPolygroupSet::FPolygroupSet(&local_28,param_1,FVar1);
    **(undefined1 **)((longlong)this + 8) = 1;
    uVar3 = (*(code *)**(undefined8 **)((longlong)this + 0x18))
                      ((*(undefined8 **)((longlong)this + 0x18))[1],param_1,&local_28);
    **(undefined4 **)((longlong)this + 0x10) = uVar3;
  }
  return;
}

// operator() @ 14ce44280

void __thiscall
`SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *this_00;
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  FDynamicMesh3 *local_res8;
  code *local_18;
  FDynamicMesh3 **local_10;
  
  if (*(char *)this == '\0') {
    this_00 = (param_1->AttributeSet).Ptr;
    if (this_00 == (FDynamicMeshAttributeSet *)0x0) {
      return;
    }
    local_res8 = (FDynamicMesh3 *)
                 UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                           (this_00,*(int *)((longlong)this + 4));
    if (local_res8 == (FDynamicMesh3 *)0x0) {
      return;
    }
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<``SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>::operator()'::__l16::<lambda_2>,int,int>
               ::Call;
    **(undefined1 **)((longlong)this + 8) = 1;
    pcVar2 = *(code **)((longlong)this + 0x18);
    uVar3 = *(undefined8 *)((longlong)this + 0x20);
  }
  else {
    if ((param_1->TriangleGroups).bIsSet == false) {
      return;
    }
    **(undefined1 **)((longlong)this + 8) = 1;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<``SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>::operator()'::__l8::<lambda_1>,int,int>
               ::Call;
    pcVar2 = *(code **)((longlong)this + 0x18);
    uVar3 = *(undefined8 *)((longlong)this + 0x20);
    local_res8 = param_1;
  }
  local_10 = &local_res8;
  uVar1 = (*pcVar2)(uVar3,param_1,&local_18);
  **(undefined1 **)((longlong)this + 0x10) = uVar1;
  return;
}

// operator() @ 14ce44330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`SimpleMeshQuery<UE::Math::TBox<double>_>'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_48,(*(undefined8 **)((longlong)this + 8))[1],param_1);
  puVar1 = *(undefined8 **)this;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar1[2] = local_38;
  puVar1[3] = uStack_30;
  puVar1[4] = local_28;
  puVar1[5] = uStack_20;
  puVar1[6] = local_18;
  return;
}

// operator() @ 14ce443a0

void __thiscall
`SimpleMeshQuery<FString>'::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  void **ppvVar1;
  void *local_18;
  undefined8 local_10;
  
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_18,(*(undefined8 **)((longlong)this + 8))[1],param_1);
  ppvVar1 = *(void ***)this;
  if (ppvVar1 != &local_18) {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free(*ppvVar1);
    }
    *ppvVar1 = local_18;
    local_18 = (void *)0x0;
    *(undefined4 *)(ppvVar1 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)ppvVar1 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// operator() @ 14ce44420

void __thiscall
`SimpleMeshUVSetQuery<int>'::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    iVar1 = **(int **)this;
    iVar4 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if ((iVar1 < iVar4) &&
       (pTVar6 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                           ((param_1->AttributeSet).Ptr,iVar1),
       pTVar6 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
      **(undefined1 **)((longlong)this + 8) = 1;
      puVar3 = *(undefined8 **)((longlong)this + 0x18);
      pTVar6 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                         ((param_1->AttributeSet).Ptr,**(int **)this);
      uVar5 = (*(code *)*puVar3)(puVar3[1],param_1,pTVar6);
      **(undefined4 **)((longlong)this + 0x10) = uVar5;
    }
  }
  return;
}

// operator() @ 14ce444b0

void __thiscall
`SimpleMeshUVSetQuery<double>'::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar5;
  undefined8 uVar6;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    iVar1 = **(int **)this;
    iVar4 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if ((iVar1 < iVar4) &&
       (pTVar5 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                           ((param_1->AttributeSet).Ptr,iVar1),
       pTVar5 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
      **(undefined1 **)((longlong)this + 8) = 1;
      puVar3 = *(undefined8 **)((longlong)this + 0x18);
      pTVar5 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                         ((param_1->AttributeSet).Ptr,**(int **)this);
      uVar6 = (*(code *)*puVar3)(puVar3[1],param_1,pTVar5);
      **(undefined8 **)((longlong)this + 0x10) = uVar6;
    }
  }
  return;
}

// operator() @ 14ce44540

void __thiscall
`SimpleMeshUVSetQuery<UE::Math::TBox2<double>_>'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    iVar1 = **(int **)this;
    iVar4 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if ((iVar1 < iVar4) &&
       (pTVar5 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                           ((param_1->AttributeSet).Ptr,iVar1),
       pTVar5 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
      **(undefined1 **)((longlong)this + 8) = 1;
      puVar3 = *(undefined8 **)((longlong)this + 0x18);
      pTVar5 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                         ((param_1->AttributeSet).Ptr,**(int **)this);
      (*(code *)*puVar3)(&local_38,puVar3[1],param_1,pTVar5);
      puVar3 = *(undefined8 **)((longlong)this + 0x10);
      *puVar3 = local_38;
      puVar3[1] = uStack_30;
      puVar3[2] = local_28;
      puVar3[3] = uStack_20;
      puVar3[4] = local_18;
    }
  }
  return;
}

// operator() @ 14ce44600

void __thiscall
`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    iVar1 = **(int **)this;
    iVar5 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if ((iVar1 < iVar5) &&
       (pTVar6 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                           ((param_1->AttributeSet).Ptr,iVar1),
       pTVar6 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
      **(undefined1 **)((longlong)this + 8) = 1;
      puVar3 = *(undefined8 **)((longlong)this + 0x18);
      pTVar6 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                         ((param_1->AttributeSet).Ptr,**(int **)this);
      uVar4 = (*(code *)*puVar3)(puVar3[1],param_1,pTVar6);
      **(undefined1 **)((longlong)this + 0x10) = uVar4;
    }
  }
  return;
}

// operator() @ 14ce44690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh'::__l2::<lambda_1>::operator()'::__l5::
<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  double *pdVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  TVector<double>_u_0 local_118;
  double local_f8 [2];
  longlong local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  undefined1 local_b8;
  TDistPoint3Triangle3<double> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  plVar8 = *(longlong **)this;
  if ((*plVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(FDynamicMesh3 **)(*plVar8 + 8) == param_1) {
    plVar8 = *(longlong **)this;
    if ((*plVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar1 = *plVar8;
    if ((-1 < *(int *)(lVar1 + 0xbc)) &&
       ((*(char *)(*(longlong *)((longlong)this + 8) + 4) != '\0' ||
        (uVar7 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar1 + 8)),
        *(ulong64 *)(lVar1 + 0x10) == uVar7)))) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      local_e8 = 0;
      local_c0 = (longlong *)0x0;
      local_b8 = 0;
      fVar9 = **(float **)((longlong)this + 8);
      if (fVar9 == 0.0) {
        fVar9 = __real_7f7fffff;
      }
      plVar8 = *(longlong **)this;
      local_f8[0] = (double)fVar9;
      local_138 = 0;
      if ((*plVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar8 = (longlong *)*plVar8;
      puVar2 = *(undefined4 **)((longlong)this + 0x18);
      local_130 = *puVar2;
      uStack_12c = puVar2[1];
      uStack_128 = puVar2[2];
      uStack_124 = puVar2[3];
      local_120 = *(undefined8 *)(puVar2 + 4);
      iVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,&local_130,&local_138,local_f8);
      if (-1 < iVar6) {
        **(undefined1 **)((longlong)this + 0x20) = 0;
        pdVar3 = *(double **)((longlong)this + 0x18);
        local_118._s_0.X = *pdVar3;
        local_118._s_0.Y = pdVar3[1];
        local_118._s_0.Z = pdVar3[2];
        UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
                  (&local_a8,param_1,iVar6,(TVector<double> *)&local_118._s_0);
        **(undefined1 **)((longlong)this + 0x28) = 1;
        *(int *)(*(longlong *)((longlong)this + 0x28) + 4) = iVar6;
        lVar1 = *(longlong *)((longlong)this + 0x28);
        *(double *)(lVar1 + 8) = local_a8.ClosestTrianglePoint.field0_0x0._s_0.X;
        *(double *)(lVar1 + 0x10) = local_a8.ClosestTrianglePoint.field0_0x0._s_0.Y;
        *(double *)(lVar1 + 0x18) = local_a8.ClosestTrianglePoint.field0_0x0._s_0.Z;
        lVar1 = *(longlong *)((longlong)this + 0x28);
        *(undefined4 *)(lVar1 + 0x20) = local_a8.TriangleBaryCoords.field0_0x0._0_4_;
        *(undefined4 *)(lVar1 + 0x24) = local_a8.TriangleBaryCoords.field0_0x0._4_4_;
        *(undefined4 *)(lVar1 + 0x28) = local_a8.TriangleBaryCoords.field0_0x0._8_4_;
        *(undefined4 *)(lVar1 + 0x2c) = local_a8.TriangleBaryCoords.field0_0x0._12_4_;
        *(double *)(lVar1 + 0x30) = local_a8.TriangleBaryCoords.field0_0x0._s_0.Z;
      }
      if (local_e8 != 0) {
        plVar8 = local_d8;
        if (local_c0 != (longlong *)0x0) {
          plVar8 = local_c0;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  return;
}

// operator() @ 14ce448e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh'::__l2::<lambda_1>::
operator()'::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  double *pdVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  longlong *plVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auStackY_208 [32];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  TVector<double>_u_0 TStack_1c0;
  undefined1 local_1a8 [16];
  double local_198;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 TStack_170;
  TVector<double>_u_0 local_158 [2];
  double local_128;
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  TVector<double>_u_0 local_98;
  EIntersectionType local_80 [2];
  double local_78 [2];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  plVar9 = *(longlong **)this;
  if ((*plVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(FDynamicMesh3 **)(*plVar9 + 8) == param_1) {
    plVar9 = *(longlong **)this;
    if ((*plVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = *plVar9;
    if (-1 < *(int *)(lVar1 + 0xbc)) {
      if ((*(char *)(*(longlong *)((longlong)this + 8) + 4) == '\0') &&
         (uVar8 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar1 + 8)),
         *(ulong64 *)(lVar1 + 0x10) != uVar8)) {
        return;
      }
      **(undefined1 **)((longlong)this + 0x10) = 1;
      local_68 = 0;
      local_40 = (longlong *)0x0;
      local_38 = 0;
      fVar10 = **(float **)((longlong)this + 8);
      if (**(float **)((longlong)this + 8) == 0.0) {
        fVar10 = __real_7f7fffff;
      }
      pdVar2 = *(double **)((longlong)this + 0x20);
      local_78[0] = (double)fVar10;
      dVar5 = *pdVar2;
      dVar4 = pdVar2[1];
      local_128 = pdVar2[2];
      local_198 = SQRT(dVar5 * dVar5 + dVar4 * dVar4 + local_128 * local_128);
      if (local_198 <= 0.0) {
        local_198 = 0.0;
        dVar5 = 0.0;
        dVar4 = 0.0;
      }
      else {
        local_198 = __real_3ff0000000000000 / local_198;
        dVar5 = dVar5 * local_198;
        dVar4 = local_198 * dVar4;
        local_198 = local_198 * local_128;
      }
      uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
      pdVar2 = *(double **)((longlong)this + 0x18);
      local_1a8._8_4_ = SUB84(dVar4,0);
      local_1a8._0_8_ = dVar5;
      local_1a8._12_4_ = uVar11;
      local_1d8 = *pdVar2;
      dStack_1d0 = pdVar2[1];
      local_1c8 = pdVar2[2];
      TStack_1c0._8_4_ = SUB84(dVar4,0);
      TStack_1c0._s_0.X = dVar5;
      TStack_1c0._12_4_ = uVar11;
      TStack_1c0._s_0.Z = local_198;
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&TStack_1c0._s_0,__real_3e45798ee0000000);
      plVar9 = *(longlong **)this;
      if ((*plVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar9 = (longlong *)*plVar9;
      uVar7 = (**(code **)(*plVar9 + 0x40))(plVar9,&local_1d8,local_78);
      if (-1 < (int)uVar7) {
        **(undefined1 **)((longlong)this + 0x28) = 0;
        if ((((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar7) ||
            (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
                                         (ulonglong)(uVar7 & 0x1ff) * 2) - 1U))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mesh.IsTriangle(TriIdx)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                               ,0x2b,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (param_1,uVar7,(TVector<double> *)&local_188._s_0,
                   (TVector<double> *)&TStack_170._s_0,(TVector<double> *)&local_158[0]._s_0);
        local_118._s_0.X = local_1d8;
        local_118._s_0.Y = dStack_1d0;
        local_118._s_0.Z = local_1c8;
        dStack_100 = TStack_1c0._s_0.X;
        local_f8 = TStack_1c0._s_0.Y;
        dStack_f0 = TStack_1c0._s_0.Z;
        local_e8._s_0.X = local_188._s_0.X;
        local_e8._s_0.Y = local_188._s_0.Y;
        local_e8._s_0.Z = local_188._s_0.Z;
        dStack_d0 = TStack_170._s_0.X;
        local_c8 = TStack_170._s_0.Y;
        dStack_c0 = TStack_170._s_0.Z;
        local_b8 = (double)local_158[0]._0_8_;
        dStack_b0 = (double)local_158[0]._8_8_;
        local_a8 = (double)local_158[0]._16_8_;
        UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                  ((TRay<double> *)&local_118._s_0,(TTriangle3<double> *)&local_e8._s_0,&local_a0,
                   (TVector<double> *)&local_98._s_0,local_80);
        *(float *)(*(longlong *)((longlong)this + 0x30) + 4) = (float)local_a0;
        **(undefined1 **)((longlong)this + 0x30) = 1;
        *(uint *)(*(longlong *)((longlong)this + 0x30) + 8) = uVar7;
        lVar1 = *(longlong *)((longlong)this + 0x30);
        *(double *)(lVar1 + 0x10) = TStack_1c0._s_0.X * local_a0 + local_1d8;
        *(double *)(lVar1 + 0x18) = TStack_1c0._s_0.Y * local_a0 + dStack_1d0;
        *(double *)(lVar1 + 0x20) = TStack_1c0._s_0.Z * local_a0 + local_1c8;
        lVar1 = *(longlong *)((longlong)this + 0x30);
        *(undefined4 *)(lVar1 + 0x28) = local_98._0_4_;
        *(undefined4 *)(lVar1 + 0x2c) = local_98._4_4_;
        *(undefined4 *)(lVar1 + 0x30) = local_98._8_4_;
        *(undefined4 *)(lVar1 + 0x34) = local_98._12_4_;
        *(double *)(lVar1 + 0x38) = local_98._s_0.Z;
      }
      if (local_68 != 0) {
        plVar9 = local_58;
        if (local_40 != (longlong *)0x0) {
          plVar9 = local_40;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  return;
}

// operator() @ 14ce44ca0

bool __thiscall
``UGeometryScriptLibrary_MeshQueryFunctions::GetAllSplitUVsAtVertex'::__l2::<lambda_1>::operator()'
::__l5::<lambda_1>::operator()(void *this,int param_1,int param_2,TVector2<float> *param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int local_res18 [4];
  undefined1 local_18 [16];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res18[0] = param_2;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  iVar8 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar8 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar8 * 4) = local_res18[0];
  dVar5 = (double)(param_3->field0_0x0)._s_0.Y;
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  local_18._8_4_ = SUB84(dVar5,0);
  local_18._0_8_ = (double)(param_3->field0_0x0)._s_0.X;
  local_18._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  iVar8 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar8 + 1;
  pFVar3 = pFVar2->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10) = local_18._0_8_;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10 + 8) = local_18._8_8_;
  return true;
}

// operator() @ 14ce44e20

void __thiscall
``UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox'::__l2::<lambda_1>
::operator()'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  
  pdVar3 = *(double **)this;
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) +
           (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar1 = (double *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  if (dVar5 < *pdVar3) {
    *pdVar3 = dVar5;
  }
  if (pdVar3[3] <= dVar5 && dVar5 != pdVar3[3]) {
    pdVar3[3] = dVar5;
  }
  if (dVar6 < pdVar3[1]) {
    pdVar3[1] = dVar6;
  }
  if (pdVar3[4] <= dVar6 && dVar6 != pdVar3[4]) {
    pdVar3[4] = dVar6;
  }
  if (dVar2 < pdVar3[2]) {
    pdVar3[2] = dVar2;
  }
  if (pdVar3[5] <= dVar2 && dVar2 != pdVar3[5]) {
    pdVar3[5] = dVar2;
  }
  return;
}

// operator() @ 14ce44ec0

void __thiscall
``UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh'::__l2::<lambda_1>::operator()'::__l5::
<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this_00;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  ulong64 uVar8;
  TVector<double>_u_0 local_38 [2];
  
  plVar2 = *(longlong **)this;
  if ((*plVar2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(FDynamicMesh3 **)(*plVar2 + 8) == param_1) {
    plVar2 = *(longlong **)this;
    if ((*plVar2 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *plVar2;
    if (-1 < *(int *)(lVar3 + 0xbc)) {
      if ((*(char *)(*(longlong *)((longlong)this + 8) + 4) == '\0') &&
         (uVar8 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar3 + 8)),
         *(ulong64 *)(lVar3 + 0x10) != uVar8)) {
        return;
      }
      **(undefined1 **)((longlong)this + 0x10) = 1;
      lVar3 = *(longlong *)this;
      if ((*(longlong *)(lVar3 + 0x10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)(lVar3 + 0x10);
      fVar1 = *(float *)(*(longlong *)((longlong)this + 8) + 8);
      pdVar4 = *(double **)((longlong)this + 0x20);
      local_38[0]._0_8_ = *pdVar4;
      local_38[0]._8_8_ = pdVar4[1];
      local_38[0]._16_8_ = pdVar4[2];
      dVar6 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                        (this_00,this_00->Tree->RootIndex,(TVector<double> *)&local_38[0]._s_0);
      *(bool *)*(undefined8 *)((longlong)this + 0x18) = (double)fVar1 < dVar6;
      if (**(char **)((longlong)this + 0x18) != '\0') {
        **(undefined1 **)((longlong)this + 0x28) = 0;
      }
    }
  }
  return;
}

// operator() @ 14ce45020

bool __thiscall
```UGeometryScriptLibrary_MeshNormalsFunctions::SetSplitNormalsAlongSelectedEdges'::__l2::<lambda_1>
::operator()'::__l16::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
          (void *this,int param_1,int param_2,TVector<float> *param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int local_res18 [4];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res18[0] = param_2;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar6 * 4) = local_res18[0];
  return true;
}

// operator() @ 14ce450d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'
::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  code **ppcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  ulong64 uVar19;
  undefined8 *puVar20;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar21;
  code **ppcVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined1 auStack_5c8 [32];
  undefined8 *local_5a8;
  ulonglong uStack_5a0;
  undefined1 local_598 [8];
  void *local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  ulong64 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  FDynamicMesh3 *local_548;
  undefined8 uStack_540;
  int local_508;
  undefined4 uStack_504;
  FDynamicMesh3 *local_500;
  undefined8 uStack_4f8;
  code *local_4b8;
  undefined8 uStack_4b0;
  code *local_4a8 [4];
  code *local_488;
  undefined8 uStack_480;
  code *local_478 [4];
  code *local_458;
  undefined8 uStack_450;
  code *local_448 [4];
  code *local_428;
  undefined8 uStack_420;
  code *local_418 [4];
  code *local_3f8;
  undefined8 uStack_3f0;
  code *local_3e8 [4];
  code *local_3c8;
  undefined8 uStack_3c0;
  code *local_3b8 [4];
  code *local_398;
  undefined8 uStack_390;
  code *local_388 [4];
  code *local_368;
  undefined8 uStack_360;
  code *local_358 [4];
  undefined1 local_338 [192];
  undefined1 local_278 [192];
  undefined1 local_1b8 [192];
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5c8;
  plVar2 = *(longlong **)this;
  if ((*plVar2 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (*(FDynamicMesh3 **)(*plVar2 + 8) == param_1) {
    plVar2 = *(longlong **)this;
    if ((*plVar2 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar3 = *plVar2;
    if ((-1 < *(int *)(lVar3 + 0xbc)) &&
       ((*(char *)(*(longlong *)((longlong)this + 8) + 4) != '\0' ||
        (uVar19 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar3 + 8)),
        *(ulong64 *)(lVar3 + 0x10) == uVar19)))) {
      cVar1 = **(char **)((longlong)this + 0x10);
      if (cVar1 == '\0') {
        puVar4 = *(undefined4 **)((longlong)this + 0x18);
        *puVar4 = 1;
        puVar4[1] = 1;
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::FTreeTraversal
                  ((FTreeTraversal *)local_338);
        puVar20 = *(undefined8 **)((longlong)this + 0x20);
        local_590 = (void *)*puVar20;
        uStack_588 = puVar20[1];
        local_5a8 = (undefined8 *)puVar20[2];
        uStack_5a0 = puVar20[3];
        local_580 = puVar20[4];
        uStack_578 = puVar20[5];
        local_4b8 = (code *)0x0;
        puVar20 = FMemory::Malloc(0x38,8);
        uVar14 = local_338._28_4_;
        uVar13 = local_338._24_4_;
        uVar12 = local_338._20_4_;
        uVar11 = local_338._16_4_;
        uVar6 = local_338._8_8_;
        uVar5 = local_338._0_8_;
        *puVar20 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`8'::<lambda_1>,0,1>
                    ::_vftable_;
        puVar20[1] = local_590;
        puVar20[2] = uStack_588;
        puVar20[3] = local_5a8;
        puVar20[4] = uStack_5a0;
        puVar20[5] = local_580;
        puVar20[6] = uStack_578;
        if (puVar20 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_4b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l8::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
                      ::Call;
        }
        ppcVar10 = (code **)CONCAT44(local_338._44_4_,local_338._40_4_);
        local_338._0_8_ = local_4b8;
        local_338._8_8_ = uStack_4b0;
        local_4a8[3]._0_4_ = SUB84(puVar20,0);
        local_4a8[3]._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
        local_338._32_4_ = local_4a8[2]._0_4_;
        local_338._36_4_ = local_4a8[2]._4_4_;
        local_338._40_4_ = local_4a8[3]._0_4_;
        local_338._44_4_ = local_4a8[3]._4_4_;
        local_338._16_4_ = local_4a8[0]._0_4_;
        local_338._20_4_ = local_4a8[0]._4_4_;
        local_338._24_4_ = local_4a8[1]._0_4_;
        local_338._28_4_ = local_4a8[1]._4_4_;
        local_4b8 = (code *)uVar5;
        uStack_4b0 = uVar6;
        local_4a8[0]._0_4_ = uVar11;
        local_4a8[0]._4_4_ = uVar12;
        local_4a8[1]._0_4_ = uVar13;
        local_4a8[1]._4_4_ = uVar14;
        if (uVar5 != 0) {
          ppcVar22 = local_4a8;
          if (ppcVar10 != (code **)0x0) {
            ppcVar22 = ppcVar10;
          }
          (**(code **)(*ppcVar22 + 0x10))();
        }
        uStack_4f8 = *(undefined8 *)((longlong)this + 0x18);
        puVar20 = *(undefined8 **)((longlong)this + 0x20);
        local_590 = (void *)*puVar20;
        uStack_588 = puVar20[1];
        local_5a8 = (undefined8 *)puVar20[2];
        uStack_5a0 = puVar20[3];
        local_580 = puVar20[4];
        uStack_578 = puVar20[5];
        local_488 = (code *)0x0;
        local_500 = param_1;
        puVar20 = FMemory::Malloc(0x48,8);
        uVar14 = local_338._124_4_;
        uVar13 = local_338._120_4_;
        uVar12 = local_338._116_4_;
        uVar11 = local_338._112_4_;
        uVar6 = local_338._104_8_;
        uVar5 = local_338._96_8_;
        *puVar20 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`8'::<lambda_2>,0,1>
                    ::_vftable_;
        puVar20[1] = local_500;
        puVar20[2] = uStack_4f8;
        puVar20[3] = local_590;
        puVar20[4] = uStack_588;
        puVar20[5] = local_5a8;
        puVar20[6] = uStack_5a0;
        puVar20[7] = local_580;
        puVar20[8] = uStack_578;
        if (puVar20 + 1 != (undefined8 *)0x0) {
          local_488 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l8::<lambda_2>,void,int>
                      ::Call;
        }
        ppcVar10 = (code **)CONCAT44(local_338._140_4_,local_338._136_4_);
        local_338._96_8_ = local_488;
        local_338._104_8_ = uStack_480;
        local_478[3]._0_4_ = SUB84(puVar20,0);
        local_478[3]._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
        local_338._128_4_ = local_478[2]._0_4_;
        local_338._132_4_ = local_478[2]._4_4_;
        local_338._136_4_ = local_478[3]._0_4_;
        local_338._140_4_ = local_478[3]._4_4_;
        local_338._112_4_ = local_478[0]._0_4_;
        local_338._116_4_ = local_478[0]._4_4_;
        local_338._120_4_ = local_478[1]._0_4_;
        local_338._124_4_ = local_478[1]._4_4_;
        local_488 = (code *)uVar5;
        uStack_480 = uVar6;
        local_478[0]._0_4_ = uVar11;
        local_478[0]._4_4_ = uVar12;
        local_478[1]._0_4_ = uVar13;
        local_478[1]._4_4_ = uVar14;
        if (uVar5 != 0) {
          ppcVar22 = local_478;
          if (ppcVar10 != (code **)0x0) {
            ppcVar22 = ppcVar10;
          }
          (**(code **)(*ppcVar22 + 0x10))();
        }
        pTVar21 = TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>::
                  operator->(*(TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>
                               **)this);
        (**(code **)(pTVar21->_padding_ + 0x78))
                  (pTVar21,local_338,*(undefined8 *)((longlong)this + 0x28));
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::~FTreeTraversal
                  ((FTreeTraversal *)local_338);
      }
      else if (cVar1 == '\x01') {
        puVar4 = *(undefined4 **)((longlong)this + 0x18);
        *puVar4 = 4;
        puVar4[1] = 1;
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::FTreeTraversal
                  ((FTreeTraversal *)local_278);
        puVar20 = *(undefined8 **)((longlong)this + 0x20);
        local_590 = (void *)*puVar20;
        uStack_588 = puVar20[1];
        local_5a8 = (undefined8 *)puVar20[2];
        uStack_5a0 = puVar20[3];
        local_580 = puVar20[4];
        uStack_578 = puVar20[5];
        local_458 = (code *)0x0;
        puVar20 = FMemory::Malloc(0x38,8);
        uVar14 = local_278._28_4_;
        uVar13 = local_278._24_4_;
        uVar12 = local_278._20_4_;
        uVar11 = local_278._16_4_;
        uVar6 = local_278._8_8_;
        uVar5 = local_278._0_8_;
        *puVar20 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`12'::<lambda_3>,0,1>
                    ::_vftable_;
        puVar20[1] = local_590;
        puVar20[2] = uStack_588;
        puVar20[3] = local_5a8;
        puVar20[4] = uStack_5a0;
        puVar20[5] = local_580;
        puVar20[6] = uStack_578;
        if (puVar20 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_458 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l12::<lambda_3>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
                      ::Call;
        }
        ppcVar10 = (code **)CONCAT44(local_278._44_4_,local_278._40_4_);
        local_278._0_8_ = local_458;
        local_278._8_8_ = uStack_450;
        local_448[3]._0_4_ = SUB84(puVar20,0);
        local_448[3]._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
        local_278._32_4_ = local_448[2]._0_4_;
        local_278._36_4_ = local_448[2]._4_4_;
        local_278._40_4_ = local_448[3]._0_4_;
        local_278._44_4_ = local_448[3]._4_4_;
        local_278._16_4_ = local_448[0]._0_4_;
        local_278._20_4_ = local_448[0]._4_4_;
        local_278._24_4_ = local_448[1]._0_4_;
        local_278._28_4_ = local_448[1]._4_4_;
        local_458 = (code *)uVar5;
        uStack_450 = uVar6;
        local_448[0]._0_4_ = uVar11;
        local_448[0]._4_4_ = uVar12;
        local_448[1]._0_4_ = uVar13;
        local_448[1]._4_4_ = uVar14;
        if (uVar5 != 0) {
          ppcVar22 = local_448;
          if (ppcVar10 != (code **)0x0) {
            ppcVar22 = ppcVar10;
          }
          (**(code **)(*ppcVar22 + 0x10))();
        }
        uVar5 = *(undefined8 *)((longlong)this + 0x30);
        uVar6 = *(undefined8 *)((longlong)this + 0x20);
        uVar7 = *(undefined8 *)((longlong)this + 0x38);
        uVar8 = *(undefined8 *)((longlong)this + 0x18);
        local_428 = (code *)0x0;
        puVar20 = FMemory::Malloc(0x30,8);
        uVar14 = local_278._124_4_;
        uVar13 = local_278._120_4_;
        uVar12 = local_278._116_4_;
        uVar11 = local_278._112_4_;
        uVar16 = local_278._104_8_;
        uVar15 = local_278._96_8_;
        *puVar20 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`12'::<lambda_4>,0,1>
                    ::_vftable_;
        puVar20[1] = uVar5;
        puVar20[2] = param_1;
        puVar20[3] = uVar6;
        puVar20[4] = uVar7;
        puVar20[5] = uVar8;
        if (puVar20 + 1 != (undefined8 *)0x0) {
          local_428 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l12::<lambda_4>,void,int>
                      ::Call;
        }
        ppcVar10 = (code **)CONCAT44(local_278._140_4_,local_278._136_4_);
        local_278._96_8_ = local_428;
        local_278._104_8_ = uStack_420;
        local_418[3]._0_4_ = SUB84(puVar20,0);
        local_418[3]._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
        local_278._128_4_ = local_418[2]._0_4_;
        local_278._132_4_ = local_418[2]._4_4_;
        local_278._136_4_ = local_418[3]._0_4_;
        local_278._140_4_ = local_418[3]._4_4_;
        local_278._112_4_ = local_418[0]._0_4_;
        local_278._116_4_ = local_418[0]._4_4_;
        local_278._120_4_ = local_418[1]._0_4_;
        local_278._124_4_ = local_418[1]._4_4_;
        local_428 = (code *)uVar15;
        uStack_420 = uVar16;
        local_418[0]._0_4_ = uVar11;
        local_418[0]._4_4_ = uVar12;
        local_418[1]._0_4_ = uVar13;
        local_418[1]._4_4_ = uVar14;
        if (uVar15 != 0) {
          ppcVar22 = local_418;
          if (ppcVar10 != (code **)0x0) {
            ppcVar22 = ppcVar10;
          }
          (**(code **)(*ppcVar22 + 0x10))();
        }
        pTVar21 = TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>::
                  operator->(*(TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>
                               **)this);
        (**(code **)(pTVar21->_padding_ + 0x78))
                  (pTVar21,local_278,*(undefined8 *)((longlong)this + 0x28));
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::~FTreeTraversal
                  ((FTreeTraversal *)local_278);
      }
      else if (cVar1 == '\x03') {
        iVar18 = 2;
        if (**(int **)((longlong)this + 0x38) < 2) {
          iVar18 = **(int **)((longlong)this + 0x38);
        }
        iVar24 = 1;
        if (1 < iVar18) {
          iVar24 = iVar18;
        }
        puVar4 = *(undefined4 **)((longlong)this + 0x18);
        *puVar4 = 2;
        puVar4[1] = 1;
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::FTreeTraversal
                  ((FTreeTraversal *)local_1b8);
        puVar20 = *(undefined8 **)((longlong)this + 0x20);
        local_590 = (void *)*puVar20;
        uStack_588 = puVar20[1];
        local_5a8 = (undefined8 *)puVar20[2];
        uStack_5a0 = puVar20[3];
        local_580 = puVar20[4];
        uStack_578 = puVar20[5];
        local_3f8 = (code *)0x0;
        puVar20 = FMemory::Malloc(0x38,8);
        uVar14 = local_1b8._28_4_;
        uVar13 = local_1b8._24_4_;
        uVar12 = local_1b8._20_4_;
        uVar11 = local_1b8._16_4_;
        uVar6 = local_1b8._8_8_;
        uVar5 = local_1b8._0_8_;
        *puVar20 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`16'::<lambda_5>,0,1>
                    ::_vftable_;
        puVar20[1] = local_590;
        puVar20[2] = uStack_588;
        puVar20[3] = local_5a8;
        puVar20[4] = uStack_5a0;
        puVar20[5] = local_580;
        puVar20[6] = uStack_578;
        if (puVar20 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_3f8 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l16::<lambda_5>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
                      ::Call;
        }
        ppcVar10 = (code **)CONCAT44(local_1b8._44_4_,local_1b8._40_4_);
        local_1b8._0_8_ = local_3f8;
        local_1b8._8_8_ = uStack_3f0;
        local_3e8[3]._0_4_ = SUB84(puVar20,0);
        local_3e8[3]._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
        local_1b8._32_4_ = local_3e8[2]._0_4_;
        local_1b8._36_4_ = local_3e8[2]._4_4_;
        local_1b8._40_4_ = local_3e8[3]._0_4_;
        local_1b8._44_4_ = local_3e8[3]._4_4_;
        local_1b8._16_4_ = local_3e8[0]._0_4_;
        local_1b8._20_4_ = local_3e8[0]._4_4_;
        local_1b8._24_4_ = local_3e8[1]._0_4_;
        local_1b8._28_4_ = local_3e8[1]._4_4_;
        local_3f8 = (code *)uVar5;
        uStack_3f0 = uVar6;
        local_3e8[0]._0_4_ = uVar11;
        local_3e8[0]._4_4_ = uVar12;
        local_3e8[1]._0_4_ = uVar13;
        local_3e8[1]._4_4_ = uVar14;
        if (uVar5 != 0) {
          ppcVar22 = local_3e8;
          if (ppcVar10 != (code **)0x0) {
            ppcVar22 = ppcVar10;
          }
          (**(code **)(*ppcVar22 + 0x10))();
        }
        uStack_540 = *(undefined8 *)((longlong)this + 0x18);
        puVar20 = *(undefined8 **)((longlong)this + 0x20);
        local_590 = (void *)*puVar20;
        uStack_588 = puVar20[1];
        local_5a8 = (undefined8 *)puVar20[2];
        uStack_5a0 = puVar20[3];
        local_580 = puVar20[4];
        uStack_578 = puVar20[5];
        local_3c8 = (code *)0x0;
        local_548 = param_1;
        local_508 = iVar24;
        puVar20 = FMemory::Malloc(0x50,8);
        uVar14 = local_1b8._124_4_;
        uVar13 = local_1b8._120_4_;
        uVar12 = local_1b8._116_4_;
        uVar11 = local_1b8._112_4_;
        uVar6 = local_1b8._104_8_;
        uVar5 = local_1b8._96_8_;
        *puVar20 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`16'::<lambda_6>,0,1>
                    ::_vftable_;
        puVar20[1] = local_548;
        puVar20[2] = uStack_540;
        puVar20[3] = local_590;
        puVar20[4] = uStack_588;
        puVar20[5] = local_5a8;
        puVar20[6] = uStack_5a0;
        puVar20[7] = local_580;
        puVar20[8] = uStack_578;
        puVar20[9] = CONCAT44(uStack_504,local_508);
        if (puVar20 + 1 != (undefined8 *)0x0) {
          local_3c8 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l16::<lambda_6>,void,int>
                      ::Call;
        }
        ppcVar10 = (code **)CONCAT44(local_1b8._140_4_,local_1b8._136_4_);
        local_1b8._96_8_ = local_3c8;
        local_1b8._104_8_ = uStack_3c0;
        local_3b8[3]._0_4_ = SUB84(puVar20,0);
        local_3b8[3]._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
        local_1b8._128_4_ = local_3b8[2]._0_4_;
        local_1b8._132_4_ = local_3b8[2]._4_4_;
        local_1b8._136_4_ = local_3b8[3]._0_4_;
        local_1b8._140_4_ = local_3b8[3]._4_4_;
        local_1b8._112_4_ = local_3b8[0]._0_4_;
        local_1b8._116_4_ = local_3b8[0]._4_4_;
        local_1b8._120_4_ = local_3b8[1]._0_4_;
        local_1b8._124_4_ = local_3b8[1]._4_4_;
        local_3c8 = (code *)uVar5;
        uStack_3c0 = uVar6;
        local_3b8[0]._0_4_ = uVar11;
        local_3b8[0]._4_4_ = uVar12;
        local_3b8[1]._0_4_ = uVar13;
        local_3b8[1]._4_4_ = uVar14;
        if (uVar5 != 0) {
          ppcVar22 = local_3b8;
          if (ppcVar10 != (code **)0x0) {
            ppcVar22 = ppcVar10;
          }
          (**(code **)(*ppcVar22 + 0x10))();
        }
        pTVar21 = TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>::
                  operator->(*(TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>
                               **)this);
        (**(code **)(pTVar21->_padding_ + 0x78))
                  (pTVar21,local_1b8,*(undefined8 *)((longlong)this + 0x28));
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::~FTreeTraversal
                  ((FTreeTraversal *)local_1b8);
      }
      else if (cVar1 == '\x02') {
        local_590 = (void *)0x0;
        uStack_588 = 0;
        local_5a8 = (undefined8 *)0x0;
        uStack_5a0 = 0;
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::FTreeTraversal
                  ((FTreeTraversal *)local_f8);
        puVar20 = *(undefined8 **)((longlong)this + 0x20);
        local_580 = *puVar20;
        uStack_578 = puVar20[1];
        local_568 = puVar20[2];
        uStack_560 = puVar20[3];
        local_558 = puVar20[4];
        uStack_550 = puVar20[5];
        local_398 = (code *)0x0;
        puVar20 = FMemory::Malloc(0x38,8);
        uVar14 = local_f8._28_4_;
        uVar13 = local_f8._24_4_;
        uVar12 = local_f8._20_4_;
        uVar11 = local_f8._16_4_;
        uVar6 = local_f8._8_8_;
        uVar5 = local_f8._0_8_;
        *puVar20 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`20'::<lambda_7>,0,1>
                    ::_vftable_;
        puVar20[1] = local_580;
        puVar20[2] = uStack_578;
        puVar20[3] = local_568;
        puVar20[4] = uStack_560;
        puVar20[5] = local_558;
        puVar20[6] = uStack_550;
        if (puVar20 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_398 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l20::<lambda_7>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
                      ::Call;
        }
        ppcVar10 = (code **)CONCAT44(local_f8._44_4_,local_f8._40_4_);
        local_f8._0_8_ = local_398;
        local_f8._8_8_ = uStack_390;
        local_388[3]._0_4_ = SUB84(puVar20,0);
        local_388[3]._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
        local_f8._32_4_ = local_388[2]._0_4_;
        local_f8._36_4_ = local_388[2]._4_4_;
        local_f8._40_4_ = local_388[3]._0_4_;
        local_f8._44_4_ = local_388[3]._4_4_;
        local_f8._16_4_ = local_388[0]._0_4_;
        local_f8._20_4_ = local_388[0]._4_4_;
        local_f8._24_4_ = local_388[1]._0_4_;
        local_f8._28_4_ = local_388[1]._4_4_;
        local_398 = (code *)uVar5;
        uStack_390 = uVar6;
        local_388[0]._0_4_ = uVar11;
        local_388[0]._4_4_ = uVar12;
        local_388[1]._0_4_ = uVar13;
        local_388[1]._4_4_ = uVar14;
        if (uVar5 != 0) {
          ppcVar22 = local_388;
          if (ppcVar10 != (code **)0x0) {
            ppcVar22 = ppcVar10;
          }
          (**(code **)(*ppcVar22 + 0x10))();
        }
        uVar5 = *(undefined8 *)((longlong)this + 0x30);
        uVar6 = *(undefined8 *)((longlong)this + 0x20);
        uVar7 = *(undefined8 *)((longlong)this + 0x38);
        local_368 = (code *)0x0;
        puVar20 = FMemory::Malloc(0x38,8);
        uVar14 = local_f8._124_4_;
        uVar13 = local_f8._120_4_;
        uVar12 = local_f8._116_4_;
        uVar11 = local_f8._112_4_;
        uVar15 = local_f8._104_8_;
        uVar8 = local_f8._96_8_;
        *puVar20 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`20'::<lambda_8>,0,1>
                    ::_vftable_;
        puVar20[1] = uVar5;
        puVar20[2] = param_1;
        puVar20[3] = uVar6;
        puVar20[4] = uVar7;
        puVar20[5] = &local_590;
        puVar20[6] = &local_5a8;
        if (puVar20 + 1 != (undefined8 *)0x0) {
          local_368 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l20::<lambda_8>,void,int>
                      ::Call;
        }
        ppcVar10 = (code **)CONCAT44(local_f8._140_4_,local_f8._136_4_);
        local_f8._96_8_ = local_368;
        local_f8._104_8_ = uStack_360;
        local_358[3]._0_4_ = SUB84(puVar20,0);
        local_358[3]._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
        local_f8._128_4_ = local_358[2]._0_4_;
        local_f8._132_4_ = local_358[2]._4_4_;
        local_f8._136_4_ = local_358[3]._0_4_;
        local_f8._140_4_ = local_358[3]._4_4_;
        local_f8._112_4_ = local_358[0]._0_4_;
        local_f8._116_4_ = local_358[0]._4_4_;
        local_f8._120_4_ = local_358[1]._0_4_;
        local_f8._124_4_ = local_358[1]._4_4_;
        local_368 = (code *)uVar8;
        uStack_360 = uVar15;
        local_358[0]._0_4_ = uVar11;
        local_358[0]._4_4_ = uVar12;
        local_358[1]._0_4_ = uVar13;
        local_358[1]._4_4_ = uVar14;
        if (uVar8 != 0) {
          ppcVar22 = local_358;
          if (ppcVar10 != (code **)0x0) {
            ppcVar22 = ppcVar10;
          }
          (**(code **)(*ppcVar22 + 0x10))();
        }
        pTVar21 = TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>::
                  operator->(*(TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>
                               **)this);
        (**(code **)(pTVar21->_padding_ + 0x78))
                  (pTVar21,local_f8,*(undefined8 *)((longlong)this + 0x28));
        puVar4 = *(undefined4 **)((longlong)this + 0x18);
        *puVar4 = 4;
        puVar4[1] = 2;
        iVar18 = (int)uStack_5a0;
        uVar23 = (ulonglong)(int)uStack_5a0;
        puVar20 = local_5a8 + uVar23;
        puVar25 = local_5a8;
        while( true ) {
          if ((int)uVar23 != iVar18) {
            `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_598);
          }
          if (puVar25 == puVar20) break;
          local_580 = *puVar25;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)(*(longlong *)((longlong)this + 0x18) + 8),&local_570,(bool *)&local_580);
          uVar23 = uStack_5a0 & 0xffffffff;
          puVar25 = puVar25 + 1;
        }
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::~FTreeTraversal
                  ((FTreeTraversal *)local_f8);
        if (local_5a8 != (undefined8 *)0x0) {
          FMemory::Free(local_5a8);
        }
        if (local_590 != (void *)0x0) {
          FMemory::Free(local_590);
        }
      }
    }
  }
  return;
}

// operator() @ 14ce45c60

void __thiscall `AppendPrimitive'::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  TVector<double>_u_0 local_58;
  TQuaternion<double>_u_0 local_38;
  char local_18;
  
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)**(undefined8 **)this);
  pdVar1 = *(double **)((longlong)this + 0x20);
  local_18 = *(char *)(pdVar1 + 4);
  if (local_18 != '\0') {
    local_38._s_0.X = *pdVar1;
    local_38._s_0.Y = pdVar1[1];
    local_38._s_0.Z = pdVar1[2];
    local_38._s_0.W = pdVar1[3];
  }
  pdVar1 = *(double **)((longlong)this + 0x18);
  local_58._s_0.X = *pdVar1;
  local_58._s_0.Y = pdVar1[1];
  local_58._s_0.Z = pdVar1[2];
  ApplyPrimitiveOptionsToMesh
            (param_1,*(TTransform<double> **)((longlong)this + 8),
             **(FGeometryScriptPrimitiveOptions **)((longlong)this + 0x10),
             (TVector<double> *)&local_58._s_0,
             (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_38._s_0);
  return;
}

// operator() @ 14ce45d00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`AppendPrimitiveWithVertexIndexMap'::__l5::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  TVector<double>_u_0 local_58;
  TOptional<UE::Geometry::TQuaternion<double>_> local_38;
  
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)**(undefined8 **)this);
  pdVar1 = *(double **)((longlong)this + 0x18);
  local_38.bIsSet = false;
  local_58._s_0.X = *pdVar1;
  local_58._s_0.Y = pdVar1[1];
  local_58._s_0.Z = pdVar1[2];
  ApplyPrimitiveOptionsToMesh
            (param_1,*(TTransform<double> **)((longlong)this + 8),
             **(FGeometryScriptPrimitiveOptions **)((longlong)this + 0x10),
             (TVector<double> *)&local_58._s_0,&local_38);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x20),
             (param_1->VertexRefCounts).UsedCount,Default);
  plVar7 = *(longlong **)((longlong)this + 0x20);
  uVar5 = 0;
  if (0 < (int)plVar7[1]) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (int)plVar7[1]) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(lVar6 + *plVar7) = uVar5;
      uVar5 = uVar5 + 1;
      plVar7 = *(longlong **)((longlong)this + 0x20);
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < (int)plVar7[1]);
  }
  return;
}

// operator() @ 14ce4a2a0

bool __thiscall
``FMeshOffset::Offset_Smoothed'::__l27::<lambda_2>::operator()'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x298)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)((longlong)param_1 + *(longlong *)(lVar1 + 0x290));
}

// operator() @ 14ce4a320

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l58::<lambda_3>::
operator()'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 local_res8;
  code *local_18;
  undefined8 *local_10;
  
  plVar1 = *(longlong **)this;
  uVar2 = *(ulonglong *)
           (*(longlong *)
             (((*(FDynamicMesh3 **)((longlong)this + 8))->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar5 = (int)plVar1[9] - 1;
    plVar6 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar6 = plVar1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar6 + ((ulonglong)uVar5 & uVar2 & 0xffffffff) * 4);
    if (iVar4 != -1) {
      lVar3 = *plVar1;
      while (*(int *)(lVar3 + (longlong)iVar4 * 0xc) != (int)uVar2) {
        iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
        if (iVar4 == -1) {
          return;
        }
      }
      local_res8._4_4_ = (uint)(uVar2 >> 0x20);
      iVar4 = *(int *)((longlong)plVar6 + (ulonglong)(local_res8._4_4_ & uVar5) * 4);
      if (iVar4 != -1) {
        while (*(uint *)(lVar3 + (longlong)iVar4 * 0xc) != local_res8._4_4_) {
          iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
          if (iVar4 == -1) {
            return;
          }
        }
        local_res8 = *(undefined8 *)((longlong)this + 0x10);
        local_10 = &local_res8;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<```UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l58::<lambda_3>::operator()'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void,UE::Geometry::FMeshTriEdgeID>
                   ::Call;
        UE::Geometry::FDynamicMesh3::EnumerateTriEdgeIDsFromEdgeID
                  (*(FDynamicMesh3 **)((longlong)this + 8),param_1,
                   (TFunctionRef<void___cdecl(UE::Geometry::FMeshTriEdgeID)> *)&local_18);
      }
    }
  }
  return;
}

// operator() @ 14ce4a450

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l62::<lambda_4>::
operator()'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 local_res8;
  code *local_18;
  undefined8 *local_10;
  
  uVar1 = *(ulonglong *)
           (*(longlong *)
             (((*(FDynamicMesh3 **)((longlong)this + 8))->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
  plVar2 = *(longlong **)this;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    uVar5 = (int)plVar2[9] - 1;
    plVar6 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar6 = plVar2 + 7;
    }
    iVar4 = *(int *)((longlong)plVar6 + ((ulonglong)uVar5 & uVar1 & 0xffffffff) * 4);
    if (iVar4 != -1) {
      lVar3 = *plVar2;
      while (*(int *)(lVar3 + (longlong)iVar4 * 0xc) != (int)uVar1) {
        iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
        if (iVar4 == -1) {
          return;
        }
      }
      local_res8._4_4_ = (uint)(uVar1 >> 0x20);
      if (local_res8._4_4_ != 0xffffffff) {
        iVar4 = *(int *)((longlong)plVar6 + (ulonglong)(local_res8._4_4_ & uVar5) * 4);
        if (iVar4 == -1) {
          return;
        }
        while (*(uint *)(lVar3 + (longlong)iVar4 * 0xc) != local_res8._4_4_) {
          iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
          if (iVar4 == -1) {
            return;
          }
        }
      }
      local_res8 = *(undefined8 *)((longlong)this + 0x10);
      local_10 = &local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<```UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l62::<lambda_4>::operator()'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void,UE::Geometry::FMeshTriEdgeID>
                 ::Call;
      UE::Geometry::FDynamicMesh3::EnumerateTriEdgeIDsFromEdgeID
                (*(FDynamicMesh3 **)((longlong)this + 8),param_1,
                 (TFunctionRef<void___cdecl(UE::Geometry::FMeshTriEdgeID)> *)&local_18);
    }
  }
  return;
}

// operator() @ 14ce4a580

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l75::<lambda_7>::
operator()'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong local_res8;
  ulong64 local_res10;
  uint local_18;
  uint uStack_14;
  
  local_res8 = (ulonglong)(uint)param_1;
  plVar3 = *(longlong **)this;
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
           (ulonglong)((uint)param_1 >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar2 = *(uint *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    uVar7 = (int)plVar3[9] - 1;
    local_18 = (uint)uVar1;
    plVar6 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar6 = plVar3 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(local_18 & uVar7) * 4);
    if (iVar5 != -1) {
      lVar4 = *plVar3;
      while (*(uint *)(lVar4 + (longlong)iVar5 * 0xc) != local_18) {
        iVar5 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0xc);
        if (iVar5 == -1) {
          return;
        }
      }
      uStack_14 = (uint)((ulonglong)uVar1 >> 0x20);
      iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uStack_14 & uVar7) * 4);
      if (iVar5 != -1) {
        while (*(uint *)(lVar4 + (longlong)iVar5 * 0xc) != uStack_14) {
          iVar5 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0xc);
          if (iVar5 == -1) {
            return;
          }
        }
        iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uVar2 & uVar7) * 4);
        if (iVar5 != -1) {
          while (*(uint *)(lVar4 + (longlong)iVar5 * 0xc) != uVar2) {
            iVar5 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0xc);
            if (iVar5 == -1) {
              return;
            }
          }
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)(*(longlong *)((longlong)this + 8) + 8),&local_res10,(bool *)&local_res8);
        }
      }
    }
  }
  return;
}

// operator() @ 14ce4a6d0

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l79::<lambda_8>::
operator()'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong local_res8;
  ulong64 local_res10;
  uint local_18;
  uint uStack_14;
  
  local_res8 = (ulonglong)(uint)param_1;
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x180) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar2 = *(uint *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    uVar7 = (int)plVar3[9] - 1;
    local_18 = (uint)uVar1;
    plVar6 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar6 = plVar3 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(local_18 & uVar7) * 4);
    if (iVar5 != -1) {
      lVar4 = *plVar3;
      while (*(uint *)(lVar4 + (longlong)iVar5 * 0xc) != local_18) {
        iVar5 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0xc);
        if (iVar5 == -1) {
          return;
        }
      }
      uStack_14 = (uint)((ulonglong)uVar1 >> 0x20);
      iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uStack_14 & uVar7) * 4);
      if (iVar5 != -1) {
        while (*(uint *)(lVar4 + (longlong)iVar5 * 0xc) != uStack_14) {
          iVar5 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0xc);
          if (iVar5 == -1) {
            return;
          }
        }
        iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uVar2 & uVar7) * 4);
        if (iVar5 != -1) {
          while (*(uint *)(lVar4 + (longlong)iVar5 * 0xc) != uVar2) {
            iVar5 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0xc);
            if (iVar5 == -1) {
              return;
            }
          }
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)(*(longlong *)((longlong)this + 0x10) + 8),&local_res10,(bool *)&local_res8)
          ;
        }
      }
    }
  }
  return;
}

// operator() @ 14ce4b160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::
operator()'::__l5::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  bool *pbVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  double dVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  undefined4 uVar66;
  undefined4 uVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined4 uVar72;
  double dVar73;
  undefined1 auVar74 [16];
  double dVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar83;
  double dVar84;
  undefined1 auVar85 [16];
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  int local_128 [2];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_c8;
  
  pbVar18 = (bool *)&local_120;
  lVar17 = 3;
  lVar20 = *(longlong *)
            (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x180) +
            (ulonglong)((uint)param_1 >> 9) * 8);
  local_120 = *(undefined8 *)(lVar20 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_118 = *(undefined4 *)(lVar20 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  do {
    plVar3 = *(longlong **)((longlong)this + 8);
    uVar2 = *(uint *)pbVar18;
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar16 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar16 = (longlong *)plVar3[8];
      }
      iVar13 = *(int *)((longlong)plVar16 + (ulonglong)((int)plVar3[9] - 1U & uVar2) * 4);
      if (iVar13 != -1) {
        do {
          if (*(uint *)(*plVar3 + (longlong)iVar13 * 0xc) == uVar2) goto LAB_14ce4b735;
          iVar13 = *(int *)(*plVar3 + 4 + (longlong)iVar13 * 0xc);
        } while (iVar13 != -1);
      }
    }
    bVar12 = UE::Geometry::FDynamicMesh3::IsGroupBoundaryEdge
                       (*(FDynamicMesh3 **)((longlong)this + 0x10),uVar2);
    if (bVar12) {
      lVar20 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x10);
      uVar4 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
                 (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 0x10);
      uVar14 = (ulonglong)((uint)uVar4 & 0x1ff);
      uVar15 = (ulonglong)((uint)(uVar4 >> 0x20) & 0x1ff);
      lVar19 = *(longlong *)(lVar20 + ((uVar4 & 0xffffffff) >> 9) * 8);
      lVar20 = *(longlong *)(lVar20 + (uVar4 >> 0x29) * 8);
      lVar5 = *(longlong *)((longlong)this + 0x18);
      pdVar1 = (double *)(lVar19 + uVar14 * 0x18);
      dVar22 = *(double *)(lVar19 + 0x10 + uVar14 * 0x18) - *(double *)(lVar5 + 0x80);
      dVar83 = *pdVar1 - *(double *)(lVar5 + 0x70);
      dVar84 = pdVar1[1] - *(double *)(lVar5 + 0x78);
      dVar49 = *(double *)(lVar5 + 0x50) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar55 = *(double *)(lVar5 + 0x58) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar79._8_4_ = SUB84(dVar84,0);
      auVar79._0_8_ = dVar83;
      uVar66 = (undefined4)((ulonglong)dVar84 >> 0x20);
      auVar79._12_4_ = uVar66;
      auVar67._0_8_ =
           *(double *)(lVar5 + 0x60) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar67._8_8_ =
           *(double *)(lVar5 + 0x68) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar40._8_4_ = SUB84(dVar55,0);
      auVar40._0_8_ = dVar49;
      uVar48 = (undefined4)((ulonglong)dVar55 >> 0x20);
      auVar40._12_4_ = uVar48;
      dVar43 = auVar40._8_8_;
      auVar44._8_4_ = SUB84(dVar55,0);
      auVar44._0_8_ = dVar49;
      auVar44._12_4_ = uVar48;
      auVar45 = blendpd(auVar44,auVar67,2);
      auVar85._8_4_ = SUB84(auVar67._0_8_,0);
      auVar85._0_8_ = dVar43;
      auVar85._12_4_ = (int)((ulonglong)auVar67._0_8_ >> 0x20);
      auVar33._8_4_ = SUB84(dVar84,0);
      auVar33._0_8_ = dVar83;
      auVar33._12_4_ = uVar66;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = dVar22;
      auVar34 = blendpd(auVar33,auVar34,2);
      auVar80._0_8_ = auVar79._8_8_ * dVar49 - dVar43 * dVar83;
      auVar80._8_8_ = dVar22 * dVar55 - auVar85._8_8_ * dVar84;
      auVar74._8_4_ = SUB84(auVar80._8_8_,0);
      auVar74._0_8_ = auVar80._0_8_;
      auVar74._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
      auVar35._0_8_ = auVar34._0_8_ * auVar67._0_8_ - auVar45._0_8_ * dVar22;
      auVar35._8_8_ = auVar34._8_8_ * auVar67._8_8_ - auVar45._8_8_ * 0.0;
      dVar73 = auVar74._8_8_ + auVar74._8_8_;
      dVar78 = auVar35._0_8_ + auVar35._0_8_;
      auVar34 = blendpd(auVar80,auVar35,2);
      uVar48 = SUB84(dVar78,0);
      auVar62._8_4_ = uVar48;
      auVar62._0_8_ = dVar73;
      uVar66 = (undefined4)((ulonglong)dVar78 >> 0x20);
      auVar62._12_4_ = uVar66;
      auVar81._0_8_ = auVar34._0_8_ + auVar34._0_8_;
      auVar81._8_8_ = auVar34._8_8_ + auVar34._8_8_;
      auVar23._8_4_ = uVar48;
      auVar23._0_8_ = dVar73;
      auVar23._12_4_ = uVar66;
      auVar56._8_4_ = uVar48;
      auVar56._0_8_ = dVar73;
      auVar56._12_4_ = uVar66;
      auVar34 = *(undefined1 (*) [16])(lVar5 + 0x90);
      auVar6._4_8_ = dVar55;
      auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar50._0_8_ = auVar6._0_8_ << 0x20;
      auVar50._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar50._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar63._0_8_ = auVar62._8_8_ * dVar49 - dVar73 * dVar43;
      auVar63._8_8_ = auVar81._0_8_ * dVar55 - auVar23._8_8_ * auVar67._0_8_;
      auVar57 = blendpd(auVar56,auVar81,2);
      local_e8 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
      dStack_e0 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
      auVar24._8_4_ = SUB84(auVar81._8_8_,0);
      auVar24._0_8_ = auVar81._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
      auVar58._0_8_ = auVar57._0_8_ * auVar67._0_8_ - auVar81._0_8_ * auVar45._0_8_;
      auVar58._8_8_ = auVar57._8_8_ * auVar67._8_8_ - auVar24._8_8_ * auVar45._8_8_;
      auVar45 = *(undefined1 (*) [16])(lVar5 + 0xa0);
      auVar51._8_8_ = auVar50._8_8_;
      auVar51._0_8_ = auVar45._0_8_;
      lVar19 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar45._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar45._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar25._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar34._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar34._0_4_);
      auVar25._8_4_ = _UNK_15061cc88 & auVar34._8_4_;
      auVar25._12_4_ = _UNK_15061cc8c & auVar34._12_4_;
      local_108 = 0;
      uStack_100 = 0;
      lVar21 = -(ulonglong)(auVar25._8_8_ <= dStack_e0);
      auVar68._0_8_ =
           *(double *)(lVar5 + 0x60) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar68._8_8_ =
           *(double *)(lVar5 + 0x68) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      local_138 = (uint)-(ulonglong)(auVar25._0_8_ <= local_e8);
      uStack_134 = (uint)(-(ulonglong)(auVar25._0_8_ <= local_e8) >> 0x20);
      uStack_130 = (uint)lVar21;
      uStack_12c = (uint)((ulonglong)lVar21 >> 0x20);
      auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
      auVar41._0_8_ = (double)CONCAT44(~uStack_134 & auVar34._4_4_,~local_138 & auVar34._0_4_);
      auVar41._8_4_ = ~uStack_130 & auVar34._8_4_;
      auVar41._12_4_ = ~uStack_12c & auVar34._12_4_;
      auVar26._8_4_ = SUB84(auVar63._8_8_,0);
      auVar26._0_8_ = auVar63._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
      auVar45 = blendpd(auVar63,auVar58,2);
      dVar73 = auVar41._0_8_ * (dVar73 * auVar67._8_8_ + dVar83 + auVar26._8_8_);
      dVar43 = auVar41._8_8_ * (dVar78 * auVar67._8_8_ + dVar84 + auVar58._0_8_);
      pdVar1 = (double *)(lVar20 + uVar15 * 0x18);
      uStack_130 = SUB84(dVar43,0);
      uStack_12c = (uint)((ulonglong)dVar43 >> 0x20);
      dVar43 = *pdVar1 - *(double *)(lVar5 + 0x70);
      dVar49 = pdVar1[1] - *(double *)(lVar5 + 0x78);
      uVar66 = (undefined4)((ulonglong)dVar49 >> 0x20);
      auVar75._8_4_ = SUB84(dVar49,0);
      auVar75._0_8_ = dVar43;
      auVar75._12_4_ = uVar66;
      dVar83 = *(double *)(lVar5 + 0x50) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar84 = *(double *)(lVar5 + 0x58) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar51);
      auVar52._8_4_ = SUB84(dVar84,0);
      auVar52._0_8_ = dVar83;
      uVar48 = (undefined4)((ulonglong)dVar84 >> 0x20);
      auVar52._12_4_ = uVar48;
      dVar55 = *(double *)(lVar20 + 0x10 + uVar15 * 0x18) - *(double *)(lVar5 + 0x80);
      auVar57 = blendpd(auVar52,auVar68,2);
      local_c8 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar34._4_4_,
                                  ~(uint)lVar19 & auVar34._0_4_) *
                 (auVar81._0_8_ * auVar67._8_8_ + dVar22 + auVar45._0_8_);
      auVar36._8_4_ = SUB84(dVar49,0);
      auVar36._0_8_ = dVar43;
      auVar36._12_4_ = uVar66;
      auVar42._8_4_ = SUB84(dVar84,0);
      auVar42._0_8_ = dVar83;
      auVar42._12_4_ = uVar48;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = dVar55;
      auVar34 = blendpd(auVar36,auVar45,2);
      dVar78 = auVar42._8_8_;
      auVar82._8_4_ = SUB84(auVar68._8_8_,0);
      auVar82._0_8_ = auVar68._0_8_;
      auVar82._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
      auVar27._8_4_ = SUB84(auVar68._0_8_,0);
      auVar27._0_8_ = dVar78;
      auVar27._12_4_ = (int)((ulonglong)auVar68._0_8_ >> 0x20);
      auVar76._0_8_ = auVar75._8_8_ * dVar83 - dVar78 * dVar43;
      auVar76._8_8_ = dVar55 * dVar84 - auVar27._8_8_ * dVar49;
      dVar22 = auVar57._8_8_;
      auVar64._8_4_ = SUB84(auVar76._8_8_,0);
      auVar64._0_8_ = auVar76._0_8_;
      auVar64._12_4_ = (int)((ulonglong)auVar76._8_8_ >> 0x20);
      auVar37._0_8_ = auVar34._0_8_ * auVar68._0_8_ - auVar57._0_8_ * dVar55;
      auVar37._8_8_ = auVar34._8_8_ * auVar68._8_8_ - dVar22 * 0.0;
      dVar61 = auVar64._8_8_ + auVar64._8_8_;
      dVar65 = auVar37._0_8_ + auVar37._0_8_;
      auVar45 = blendpd(auVar76,auVar37,2);
      auVar34 = *(undefined1 (*) [16])(lVar5 + 0x90);
      uVar48 = SUB84(dVar65,0);
      auVar59._8_4_ = uVar48;
      auVar59._0_8_ = dVar61;
      uVar66 = (undefined4)((ulonglong)dVar65 >> 0x20);
      auVar59._12_4_ = uVar66;
      auVar77._0_8_ = auVar45._0_8_ + auVar45._0_8_;
      auVar77._8_8_ = auVar45._8_8_ + auVar45._8_8_;
      auVar28._8_4_ = uVar48;
      auVar28._0_8_ = dVar61;
      auVar28._12_4_ = uVar66;
      auVar46._8_4_ = uVar48;
      auVar46._0_8_ = dVar61;
      auVar46._12_4_ = uVar66;
      auVar60._0_8_ = auVar59._8_8_ * dVar83 - dVar61 * dVar78;
      auVar60._8_8_ = auVar77._0_8_ * dVar84 - auVar28._8_8_ * auVar68._0_8_;
      auVar45 = blendpd(auVar46,auVar77,2);
      auVar29._8_4_ = SUB84(auVar77._8_8_,0);
      auVar29._0_8_ = auVar77._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
      auVar7._4_8_ = dVar22;
      auVar7._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar53._0_8_ = auVar7._0_8_ << 0x20;
      auVar53._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar53._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar47._0_8_ = auVar45._0_8_ * auVar68._0_8_ - auVar77._0_8_ * auVar57._0_8_;
      auVar47._8_8_ = auVar45._8_8_ * auVar68._8_8_ - auVar29._8_8_ * dVar22;
      auVar45 = *(undefined1 (*) [16])(lVar5 + 0xa0);
      auVar54._8_8_ = auVar53._8_8_;
      auVar54._0_8_ = auVar45._0_8_;
      auVar30._8_4_ = SUB84(auVar60._8_8_,0);
      auVar30._0_8_ = auVar60._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar69._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar34._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar34._0_4_);
      auVar69._8_4_ = _UNK_15061cc88 & auVar34._8_4_;
      auVar69._12_4_ = _UNK_15061cc8c & auVar34._12_4_;
      lVar19 = -(ulonglong)(auVar69._8_8_ <= dStack_e0);
      pdVar1 = *(double **)this;
      auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar54);
      auVar85 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
      lVar20 = -(ulonglong)
                ((double)CONCAT44(auVar45._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  auVar45._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar70._0_8_ =
           (double)CONCAT44(~(uint)(-(ulonglong)(auVar69._0_8_ <= local_e8) >> 0x20) & auVar85._4_4_
                            ,~(uint)-(ulonglong)(auVar69._0_8_ <= local_e8) & auVar85._0_4_);
      auVar70._8_4_ = ~(uint)lVar19 & auVar85._8_4_;
      auVar70._12_4_ = ~(uint)((ulonglong)lVar19 >> 0x20) & auVar85._12_4_;
      dVar22 = *pdVar1;
      auVar45 = blendpd(auVar60,auVar47,2);
      dVar43 = auVar70._0_8_ * (dVar61 * auVar82._8_8_ + dVar43 + auVar30._8_8_);
      dVar49 = auVar70._8_8_ * (dVar65 * auVar68._8_8_ + dVar49 + auVar47._0_8_);
      local_f8 = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar57._4_4_,
                                  ~(uint)lVar20 & auVar57._0_4_) *
                 (auVar77._0_8_ * auVar82._8_8_ + dVar55 + auVar45._0_8_);
      auVar57._8_4_ = uStack_130;
      auVar57._0_8_ = dVar73;
      auVar57._12_4_ = uStack_12c;
      uVar48 = (undefined4)((ulonglong)dVar73 >> 0x20);
      uVar66 = (undefined4)((ulonglong)dVar43 >> 0x20);
      uVar71 = SUB84(dVar49,0);
      uVar72 = (undefined4)((ulonglong)dVar49 >> 0x20);
      if (*(char *)(lVar5 + 0xb0) == '\0') {
        if (((((dVar22 <= dVar73) &&
              (auVar10._4_8_ = auVar34._8_8_, auVar10._0_4_ = uVar48,
              auVar39._0_8_ = auVar10._0_8_ << 0x20, auVar39._8_4_ = uStack_130,
              auVar39._12_4_ = uStack_12c, dVar49 = auVar39._8_8_, pdVar1[1] <= dVar49)) &&
             (pdVar1[2] <= local_c8)) &&
            (((dVar73 < pdVar1[3] || dVar73 == pdVar1[3] &&
              (dVar49 < pdVar1[4] || dVar49 == pdVar1[4])) &&
             (local_c8 < pdVar1[5] || local_c8 == pdVar1[5])))) ||
           (((dVar22 <= dVar43 &&
             (auVar11._4_8_ = auVar57._8_8_, auVar11._0_4_ = uVar66,
             auVar32._0_8_ = auVar11._0_8_ << 0x20, auVar32._8_4_ = uVar71, auVar32._12_4_ = uVar72,
             dVar22 = auVar32._8_8_, pdVar1[1] <= dVar22)) &&
            ((pdVar1[2] <= local_f8 &&
             (((dVar43 < pdVar1[3] || dVar43 == pdVar1[3] &&
               (dVar22 < pdVar1[4] || dVar22 == pdVar1[4])) &&
              (local_f8 < pdVar1[5] || local_f8 == pdVar1[5])))))))) {
LAB_14ce4b721:
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8)
                     ,local_128,pbVar18);
        }
      }
      else if (dVar22 <= dVar73) {
        auVar8._4_8_ = auVar34._8_8_;
        auVar8._0_4_ = uVar48;
        auVar38._0_8_ = auVar8._0_8_ << 0x20;
        auVar38._8_4_ = uStack_130;
        auVar38._12_4_ = uStack_12c;
        if ((((pdVar1[1] <= auVar38._8_8_) && (pdVar1[2] <= local_c8)) &&
            (((dVar73 <= pdVar1[3] && ((auVar38._8_8_ <= pdVar1[4] && (local_c8 <= pdVar1[5])))) &&
             (dVar22 <= dVar43)))) &&
           ((((auVar9._4_8_ = auVar57._8_8_, auVar9._0_4_ = uVar66,
              auVar31._0_8_ = auVar9._0_8_ << 0x20, auVar31._8_4_ = uVar71, auVar31._12_4_ = uVar72,
              pdVar1[1] <= auVar31._8_8_ && (pdVar1[2] <= local_f8)) && (dVar43 <= pdVar1[3])) &&
            ((auVar31._8_8_ <= pdVar1[4] && (local_f8 <= pdVar1[5])))))) goto LAB_14ce4b721;
      }
    }
LAB_14ce4b735:
    pbVar18 = pbVar18 + 4;
    lVar17 = lVar17 + -1;
    if (lVar17 == 0) {
      return;
    }
  } while( true );
}

// operator() @ 14ce4b7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `AppendPrimitive'::__l7::<lambda_2>::operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined1 auStackY_378 [32];
  FDynamicMeshEditor local_348 [2];
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_338;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_308;
  FMeshIndexMappings local_2d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_2d8);
  local_338._0_8_ = 0;
  local_338._40_8_ = 0;
  local_308._0_8_ = 0;
  local_308._40_8_ = 0;
  local_348[0].Mesh = param_1;
  UE::Geometry::FDynamicMeshEditor::AppendMesh
            (local_348,*(FDynamicMesh3 **)this,&local_2d8,&local_308,&local_338,false);
  UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_2d8);
  return;
}

// operator() @ 14ce4b870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`AppendPrimitiveWithVertexIndexMap'::__l7::<lambda_2>::operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined1 auStackY_408 [32];
  undefined1 local_3d8 [4];
  int local_3d4;
  longlong *local_3d0;
  uint uStack_3c8;
  uint uStack_3c4;
  TBitArray<FDefaultBitArrayAllocator> *local_3c0;
  undefined4 uStack_3b8;
  uint uStack_3b4;
  uint local_3b0;
  uint uStack_3ac;
  int iStack_3a8;
  undefined4 uStack_3a4;
  int local_3a0;
  int local_39c;
  FDynamicMeshEditor local_398;
  undefined8 local_390;
  longlong *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_380;
  undefined8 uStack_360;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_358;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_328;
  undefined1 local_2f8 [32];
  uint *local_2d8;
  ulonglong local_2d0;
  int local_2c4;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_408;
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings((FMeshIndexMappings *)local_2f8);
  local_358._0_8_ = 0;
  local_358._40_8_ = 0;
  local_328._0_8_ = 0;
  local_328._40_8_ = 0;
  local_398.Mesh = param_1;
  UE::Geometry::FDynamicMeshEditor::AppendMesh
            (&local_398,*(FDynamicMesh3 **)this,(FMeshIndexMappings *)local_2f8,&local_328,
             &local_358,false);
  local_3d4 = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 8),&local_3d4,
             *(int *)(**(longlong **)((longlong)this + 0x10) + 0x10));
  uStack_3c8 = 0;
  uStack_3c4 = 1;
  uVar9 = (uint)local_2d0;
  uStack_3b4 = uStack_3c8;
  local_3b0 = uStack_3c8;
  if (uVar9 != 0) {
    puVar10 = (uint *)(local_2f8 + 0x10);
    if (local_2d8 != (uint *)0x0) {
      puVar10 = local_2d8;
    }
    uVar8 = *puVar10;
    local_3b0 = 0;
    uStack_3c8 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)(int)uStack_3c8;
      local_3b0 = local_3b0 + 0x20;
      uStack_3c8 = uStack_3c8 + 1;
      uStack_3b4 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_3c8)
      goto LAB_14ce4b991;
      uVar8 = puVar10[lVar6 + 1];
    }
    uStack_3c4 = -uVar8 & uVar8;
    uVar11 = (ulonglong)uStack_3c4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_3a0 = (int)lVar6;
    uStack_3b4 = (local_3b0 - 1) + local_3a0;
    if ((int)uVar9 < (int)uStack_3b4) {
      uStack_3b4 = uVar9;
    }
  }
LAB_14ce4b991:
  local_3d0 = (longlong *)local_2f8;
  local_3c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10);
  iStack_3a8 = local_2f8._8_4_ - local_2c4;
  uVar8 = uVar9 & 0xffffffe0;
  uVar11 = local_2d0 & 0xffffffff;
  uStack_3b8 = 0xffffffff;
  bVar3 = (byte)local_2d0;
  TStack_380.CurrentBitIndex = uStack_3b4;
  TStack_380.UnvisitedBitMask = 0xffffffff;
  TStack_380._padding_ = CONCAT44(uStack_3c4,uStack_3c8);
  iVar7 = (int)uVar9 >> 5;
  TStack_380._28_4_ = uStack_3b4;
  TStack_380.BaseBitIndex = local_3b0;
  uStack_360 = CONCAT44(uStack_3a4,iStack_3a8);
  local_2d0._0_4_ = uVar9;
  uStack_3ac = uStack_3b4;
  local_388 = local_3d0;
  TStack_380.Array = local_3c0;
  if (((int)uVar9 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar9 != (uint)local_2d0) {
    puVar10 = (uint *)(local_2f8 + 0x10);
    if (local_2d8 != (uint *)0x0) {
      puVar10 = local_2d8;
    }
    uVar9 = -1 << (bVar3 & 0x1f) & puVar10[iVar7];
    while (uVar9 == 0) {
      lVar6 = (longlong)iVar7;
      uVar8 = uVar8 + 0x20;
      iVar7 = iVar7 + 1;
      if ((int)(((uint)local_2d0 - 1) + ((int)((uint)local_2d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
      {
        uVar11 = (ulonglong)(uint)local_2d0;
        goto LAB_14ce4baa1;
      }
      uVar9 = puVar10[lVar6 + 1];
    }
    uVar11 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_39c = (int)lVar6;
    uVar8 = local_39c + -1 + uVar8;
    uVar11 = (ulonglong)uVar8;
    if ((int)(uint)local_2d0 < (int)uVar8) {
      uVar11 = (ulonglong)(uint)local_2d0;
    }
  }
LAB_14ce4baa1:
  while( true ) {
    plVar4 = local_388;
    if ((int)local_388[1] - *(int *)((longlong)local_388 + 0x34) != (int)uStack_360) {
      local_3d8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3d8);
    }
    if (((TStack_380.CurrentBitIndex == (int)uVar11) &&
        (TStack_380.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10))) &&
       (plVar4 == (longlong *)local_2f8)) {
      UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings((FMeshIndexMappings *)local_2f8);
      return;
    }
    plVar1 = *(longlong **)((longlong)this + 8);
    local_390 = *(undefined8 *)(*plVar4 + (longlong)TStack_380.CurrentBitIndex * 0x10);
    uVar8 = (uint)local_390;
    uVar9 = 0;
    if ((int)uVar8 < (int)plVar1[1]) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    *(undefined4 *)(*plVar1 + (longlong)(int)uVar8 * 4) = local_390._4_4_;
    TStack_380.UnvisitedBitMask = TStack_380.UnvisitedBitMask & ~TStack_380._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_380);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// operator() @ 14ce4bbb0

void __thiscall
```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::
operator()'::__l5::<lambda_1>::operator()'::__l8::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double *pdVar9;
  ulonglong local_res8;
  ulong64 local_res10;
  uint local_58;
  uint uStack_54;
  
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar2 = *(ulonglong *)(lVar5 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar4 = *(uint *)(lVar5 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_58 = (uint)uVar2;
  local_res8 = uVar2 & 0xffffffff;
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)(local_58 >> 9) * 8);
  pdVar1 = (double *)(lVar5 + (ulonglong)(local_58 & 0x1ff) * 0x18);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  dVar3 = *(double *)(lVar5 + 0x10 + (ulonglong)(local_58 & 0x1ff) * 0x18);
  if (((((*(double *)((longlong)this + 0x10) <= dVar6) &&
        (*(double *)((longlong)this + 0x18) <= dVar7)) &&
       (*(double *)((longlong)this + 0x20) <= dVar3)) &&
      ((dVar6 < *(double *)((longlong)this + 0x28) || dVar6 == *(double *)((longlong)this + 0x28) &&
       (dVar7 < *(double *)((longlong)this + 0x30) || dVar7 == *(double *)((longlong)this + 0x30))))
      ) && (dVar3 < *(double *)((longlong)this + 0x38) ||
            dVar3 == *(double *)((longlong)this + 0x38))) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 8),&local_res10,(bool *)&local_res8);
  }
  pdVar9 = (double *)((longlong)this + 0x30);
  pdVar8 = (double *)((longlong)this + 0x28);
  uStack_54 = (uint)(uVar2 >> 0x20);
  local_res8 = (ulonglong)uStack_54;
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)(uStack_54 >> 9) * 8);
  pdVar1 = (double *)(lVar5 + (ulonglong)(uStack_54 & 0x1ff) * 0x18);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  dVar3 = *(double *)(lVar5 + 0x10 + (ulonglong)(uStack_54 & 0x1ff) * 0x18);
  if (((*(double *)((longlong)this + 0x10) <= dVar6) &&
      (*(double *)((longlong)this + 0x18) <= dVar7)) &&
     ((*(double *)((longlong)this + 0x20) <= dVar3 &&
      (((dVar6 < *pdVar8 || dVar6 == *pdVar8 && (dVar7 < *pdVar9 || dVar7 == *pdVar9)) &&
       (dVar3 < *(double *)((longlong)this + 0x38) || dVar3 == *(double *)((longlong)this + 0x38))))
      ))) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 8),&local_res10,(bool *)&local_res8);
  }
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  pdVar1 = (double *)(lVar5 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  dVar3 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
  if ((((*(double *)((longlong)this + 0x10) <= dVar6) &&
       (*(double *)((longlong)this + 0x18) <= dVar7)) &&
      ((*(double *)((longlong)this + 0x20) <= dVar3 &&
       ((dVar6 < *pdVar8 || dVar6 == *pdVar8 && (dVar7 < *pdVar9 || dVar7 == *pdVar9)))))) &&
     (dVar3 < *(double *)((longlong)this + 0x38) || dVar3 == *(double *)((longlong)this + 0x38))) {
    local_res8 = (ulonglong)uVar4;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 8),&local_res10,(bool *)&local_res8);
  }
  return;
}

// operator() @ 14ce4bde0

void __thiscall
``UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox'::__l2::<lambda_1>
::operator()'::__l9::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  ulonglong uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  
  pdVar3 = *(double **)this;
  uVar4 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar8 = (ulonglong)((uint)uVar4 & 0x1ff);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) +
           ((uVar4 & 0xffffffff) >> 9) * 8);
  pdVar1 = (double *)(lVar5 + uVar8 * 0x18);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  dVar2 = *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
  if (dVar6 < *pdVar3) {
    *pdVar3 = dVar6;
  }
  if (pdVar3[3] <= dVar6 && dVar6 != pdVar3[3]) {
    pdVar3[3] = dVar6;
  }
  if (dVar7 < pdVar3[1]) {
    pdVar3[1] = dVar7;
  }
  if (pdVar3[4] <= dVar7 && dVar7 != pdVar3[4]) {
    pdVar3[4] = dVar7;
  }
  if (dVar2 < pdVar3[2]) {
    pdVar3[2] = dVar2;
  }
  if (pdVar3[5] <= dVar2 && dVar2 != pdVar3[5]) {
    pdVar3[5] = dVar2;
  }
  pdVar3 = *(double **)this;
  uVar8 = (ulonglong)((uint)(uVar4 >> 0x20) & 0x1ff);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) + (uVar4 >> 0x29) * 8);
  pdVar1 = (double *)(lVar5 + uVar8 * 0x18);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  dVar2 = *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
  if (dVar6 < *pdVar3) {
    *pdVar3 = dVar6;
  }
  if (pdVar3[3] <= dVar6 && dVar6 != pdVar3[3]) {
    pdVar3[3] = dVar6;
  }
  if (dVar7 < pdVar3[1]) {
    pdVar3[1] = dVar7;
  }
  if (pdVar3[4] <= dVar7 && dVar7 != pdVar3[4]) {
    pdVar3[4] = dVar7;
  }
  if (dVar2 < pdVar3[2]) {
    pdVar3[2] = dVar2;
  }
  if (pdVar3[5] <= dVar2 && dVar2 != pdVar3[5]) {
    pdVar3[5] = dVar2;
  }
  return;
}

// operator() @ 14ce4bf40

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::
operator()'::__l9::<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_18;
  undefined4 local_10 [2];
  
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this,local_res8,
             (bool *)local_res10);
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
           (ulonglong)((uint)param_1 >> 9) * 8);
  local_18 = *(undefined8 *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_10[0] = *(undefined4 *)(lVar1 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res10,(bool *)&local_18);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res10,(bool *)((longlong)&local_18 + 4));
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res10,(bool *)local_10);
  return;
}

// operator() @ 14ce4c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l61::<lambda_3>::
operator()'::__l21::<lambda_2>::operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FMeshFaceSelection *this_00;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [4];
  undefined1 local_f4 [12];
  undefined1 local_e8 [12];
  uint local_dc;
  longlong local_d8;
  uint local_d0;
  int local_cc;
  int local_c0;
  TBaseIterator<0,1> local_b8;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  this_00 = *(FMeshFaceSelection **)this;
  uVar7 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  UE::Geometry::FMeshFaceSelection::begin(this_00,(TBaseIterator<0,1> *)local_e8);
  UE::Geometry::FMeshFaceSelection::end(this_00,&local_b8);
  do {
    uVar4 = local_e8._0_8_;
    if ((int)*(longlong *)(local_e8._0_8_ + 8) - *(int *)(local_e8._0_8_ + 0x34) != local_c0) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (((local_cc == local_b8.ElementIt._padding_._4_4_) &&
        (local_d8 == local_b8.ElementIt._padding_)) && (uVar4 == local_b8.ElementIt._padding_)) {
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free(local_48);
      }
      uVar7 = local_80 >> 0x20;
      local_80 = local_80 & 0xffffffff00000000;
      if ((int)uVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_78.NumBits = 0;
      if (0x80 < (uint)local_78.MaxBits) {
        local_78.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
      }
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      return;
    }
    uVar2 = *(uint *)(*(longlong *)uVar4 + (longlong)local_cc * 0xc);
    if ((param_1->TriangleGroups).bIsSet == false) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = uVar7;
      if ((-1 < (int)uVar2) &&
         ((int)uVar2 <
          (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        lVar1 = (ulonglong)(uVar2 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + lVar1) + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar6 = (ulonglong)
                  *(uint *)(*(longlong *)
                             ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(uVar2 & 0x1ff) * 4);
        }
      }
    }
    if ((int)local_80 != local_54) {
      puVar5 = local_50;
      if (local_48 != (undefined1 *)0x0) {
        puVar5 = local_48;
      }
      for (iVar3 = *(int *)(puVar5 + (local_40 - 1 & uVar6) * 4); iVar3 != -1;
          iVar3 = *(int *)(local_88.Data + (longlong)iVar3 * 0xc + 4)) {
        if (*(int *)(local_88.Data + (longlong)iVar3 * 0xc) == (int)uVar6) goto LAB_14ce4c5c2;
      }
    }
    local_f4._4_8_ = uVar6 << 0x20 | (ulonglong)uVar2;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 8),(ulong64 *)local_f4,(bool *)(local_f4 + 4));
LAB_14ce4c5c2:
    local_d0 = local_d0 & ~local_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_e8 + 8));
  } while( true );
}

// operator() @ 14ce4d070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`AppendPrimitiveMesh'::__l7::<lambda_3>::operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined1 auStackY_378 [32];
  FDynamicMeshEditor local_348 [2];
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_338;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_308;
  FMeshIndexMappings local_2d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_2d8);
  local_338._0_8_ = 0;
  local_338._40_8_ = 0;
  local_308._0_8_ = 0;
  local_308._40_8_ = 0;
  local_348[0].Mesh = param_1;
  UE::Geometry::FDynamicMeshEditor::AppendMesh
            (local_348,*(FDynamicMesh3 **)this,&local_2d8,&local_308,&local_338,false);
  UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_2d8);
  return;
}

// operator() @ 14ce4da50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::
operator()'::__l2::<lambda_4>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  
  auVar31 = *(undefined1 (*) [16])((longlong)this + 0x10);
  dVar14 = auVar31._0_8_;
  dVar2 = *(double *)((longlong)this + 0x18);
  dVar38 = *(double *)((longlong)this + 0x40) * (param_1->field0_0x0)._s_0.X;
  dVar41 = *(double *)((longlong)this + 0x48) * (param_1->field0_0x0)._s_0.Y;
  auVar9 = *(undefined1 (*) [16])this;
  auVar34._8_4_ = SUB84(dVar41,0);
  auVar34._0_8_ = dVar38;
  uVar33 = (undefined4)((ulonglong)dVar41 >> 0x20);
  auVar34._12_4_ = uVar33;
  auVar42._0_8_ = (param_1->field0_0x0)._s_0.Z * *(double *)((longlong)this + 0x50);
  auVar42._8_8_ = *(double *)((longlong)this + 0x58) * 0.0;
  auVar18 = blendpd(auVar9,auVar31,2);
  auVar35._0_8_ = auVar34._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar38;
  auVar35._8_8_ = auVar42._0_8_ * auVar9._8_8_ - dVar14 * dVar41;
  auVar36._8_4_ = SUB84(dVar41,0);
  auVar36._0_8_ = dVar38;
  auVar36._12_4_ = uVar33;
  auVar9 = blendpd(auVar36,auVar42,2);
  auVar22._0_8_ = auVar9._0_8_ * dVar14 - auVar18._0_8_ * auVar42._0_8_;
  auVar22._8_8_ = auVar9._8_8_ * auVar31._8_8_ - auVar18._8_8_ * auVar42._8_8_;
  auVar9 = *(undefined1 (*) [16])this;
  auVar36 = blendpd(auVar35,auVar22,2);
  dVar3 = auVar35._8_8_ + auVar35._8_8_;
  dVar4 = auVar22._0_8_ + auVar22._0_8_;
  uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar37._0_8_ = auVar36._0_8_ + auVar36._0_8_;
  auVar37._8_8_ = auVar36._8_8_ + auVar36._8_8_;
  auVar29._8_4_ = SUB84(dVar4,0);
  auVar29._0_8_ = dVar3;
  auVar29._12_4_ = uVar33;
  auVar21._8_4_ = SUB84(dVar4,0);
  auVar21._0_8_ = dVar3;
  auVar21._12_4_ = uVar33;
  auVar22 = blendpd(auVar21,auVar37,2);
  auVar36 = blendpd(auVar9,auVar31,2);
  auVar30._0_8_ = auVar29._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar3;
  auVar30._8_8_ = auVar37._0_8_ * auVar9._8_8_ - dVar14 * dVar4;
  auVar23._0_8_ = auVar22._0_8_ * dVar14 - auVar36._0_8_ * auVar37._0_8_;
  auVar23._8_8_ = auVar22._8_8_ * auVar31._8_8_ - auVar36._8_8_ * auVar37._8_8_;
  auVar18._8_4_ = SUB84(auVar30._8_8_,0);
  auVar18._0_8_ = auVar30._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
  dVar14 = *(double *)((longlong)this + 0x70) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar1 = *(double *)((longlong)this + 0x78) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar31 = blendpd(auVar30,auVar23,2);
  dVar28 = *(double *)((longlong)this + 0x60) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar32 = *(double *)((longlong)this + 0x68) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar38 = (dVar3 * dVar2 + dVar38 + auVar18._8_8_ + *(double *)((longlong)this + 0x20)) -
           *(double *)((longlong)this + 0x80);
  dVar41 = (dVar4 * dVar2 + dVar41 + auVar23._0_8_ + *(double *)((longlong)this + 0x28)) -
           *(double *)((longlong)this + 0x88);
  uVar48 = (undefined4)((ulonglong)dVar41 >> 0x20);
  dVar15 = (auVar37._0_8_ * dVar2 + auVar42._0_8_ + auVar31._0_8_ +
           *(double *)((longlong)this + 0x30)) - *(double *)((longlong)this + 0x90);
  auVar19._8_4_ = SUB84(dVar32,0);
  auVar19._0_8_ = dVar28;
  uVar33 = (undefined4)((ulonglong)dVar32 >> 0x20);
  auVar19._12_4_ = uVar33;
  auVar45._8_4_ = SUB84(dVar41,0);
  auVar45._0_8_ = dVar38;
  auVar45._12_4_ = uVar48;
  dVar20 = auVar19._8_8_;
  auVar24._8_4_ = SUB84(dVar32,0);
  auVar24._0_8_ = dVar28;
  auVar24._12_4_ = uVar33;
  auVar31._8_4_ = SUB84(dVar1,0);
  auVar31._0_8_ = dVar14;
  auVar31._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar36 = blendpd(auVar24,auVar31,2);
  auVar10._8_4_ = SUB84(dVar14,0);
  auVar10._0_8_ = dVar20;
  auVar10._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  auVar31 = *(undefined1 (*) [16])((longlong)this + 0xa0);
  auVar16._8_4_ = SUB84(dVar41,0);
  auVar16._0_8_ = dVar38;
  auVar16._12_4_ = uVar48;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar15;
  auVar9 = blendpd(auVar16,auVar9,2);
  auVar46._0_8_ = auVar45._8_8_ * dVar28 - dVar20 * dVar38;
  auVar46._8_8_ = dVar15 * dVar32 - auVar10._8_8_ * dVar41;
  dVar27 = auVar36._8_8_;
  auVar17._0_8_ = auVar9._0_8_ * dVar14 - dVar15 * auVar36._0_8_;
  auVar17._8_8_ = auVar9._8_8_ * dVar1 - dVar27 * 0.0;
  auVar9 = blendpd(auVar46,auVar17,2);
  dVar4 = auVar46._8_8_ + auVar46._8_8_;
  dVar2 = auVar17._0_8_ + auVar17._0_8_;
  uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar47._0_8_ = auVar9._0_8_ + auVar9._0_8_;
  auVar47._8_8_ = auVar9._8_8_ + auVar9._8_8_;
  auVar11._8_4_ = SUB84(dVar2,0);
  auVar11._0_8_ = dVar4;
  auVar11._12_4_ = uVar33;
  auVar43._8_4_ = SUB84(dVar2,0);
  auVar43._0_8_ = dVar4;
  auVar43._12_4_ = uVar33;
  auVar9 = blendpd(auVar43,auVar47,2);
  dVar3 = auVar47._0_8_ * dVar32 - auVar11._8_8_ * dVar14;
  auVar12._8_4_ = SUB84(auVar47._8_8_,0);
  auVar12._0_8_ = auVar47._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
  auVar5._4_8_ = dVar27;
  auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar25._0_8_ = auVar5._0_8_ << 0x20;
  auVar25._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar25._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar39._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar31._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar31._0_4_);
  auVar39._8_4_ = _UNK_15061cc88 & auVar31._8_4_;
  auVar39._12_4_ = _UNK_15061cc8c & auVar31._12_4_;
  auVar44._0_8_ = auVar9._0_8_ * dVar14 - auVar47._0_8_ * auVar36._0_8_;
  auVar44._8_8_ = auVar9._8_8_ * dVar1 - auVar12._8_8_ * dVar27;
  auVar9 = *(undefined1 (*) [16])((longlong)this + 0xb0);
  auVar26._8_8_ = auVar25._8_8_;
  auVar26._0_8_ = auVar9._0_8_;
  auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
  lVar6 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar9._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar9._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar9 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar31);
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar2 * dVar28 - dVar4 * dVar20;
  auVar13._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar31 = blendpd(auVar13,auVar44,2);
  lVar7 = -(ulonglong)(auVar39._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar8 = -(ulonglong)(auVar39._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar40._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar9._4_4_,~(uint)lVar7 & auVar9._0_4_
                       );
  auVar40._8_4_ = ~(uint)lVar8 & auVar9._8_4_;
  auVar40._12_4_ = ~(uint)((ulonglong)lVar8 >> 0x20) & auVar9._12_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar40._0_8_ * (dVar4 * dVar1 + dVar38 + dVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       auVar40._8_8_ * (dVar2 * dVar1 + dVar41 + auVar44._0_8_);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar36._4_4_,
                        ~(uint)lVar6 & auVar36._0_4_) *
       (auVar47._0_8_ * dVar1 + dVar15 + auVar31._0_8_);
  return __return_storage_ptr__;
}

// operator() @ 14ce4dd50

void __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::
operator()'::__l20::<lambda_4>::operator()(void *this,int param_1)

{
  undefined8 local_res8;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this,(int *)&local_res8,
             (bool *)local_res10);
  local_res8 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
                  (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res10,(bool *)&local_res8);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res10,(bool *)((longlong)&local_res8 + 4));
  return;
}

// operator() @ 14ce4dde0

void __thiscall
``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l37::
<lambda_4>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)param_1 + *plVar1) != '\0') {
    pTVar5 = &UE::Geometry::FMeshConnectedComponents::operator[]
                        (*(FMeshConnectedComponents **)((longlong)this + 8),param_1)->Indices;
    UE::Geometry::FDynamicMeshUVEditor::AutoOrientUVArea
              (*(FDynamicMeshUVEditor **)((longlong)this + 0x10),pTVar5);
  }
  return;
}

// operator() @ 14ce4e2a0

void __thiscall
```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::
operator()'::__l5::<lambda_1>::operator()'::__l16::<lambda_6>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  int iVar14;
  int iVar15;
  ulonglong local_res8;
  ulong64 local_res10;
  uint local_68;
  
  dVar2 = *(double *)((longlong)this + 0x10);
  iVar11 = 1;
  lVar5 = *(longlong *)(*(longlong *)this + 0x10);
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar9 = *(ulonglong *)(lVar6 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar4 = *(uint *)(lVar6 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_68 = (uint)uVar9;
  lVar6 = *(longlong *)(lVar5 + (ulonglong)(local_68 >> 9) * 8);
  pdVar1 = (double *)(lVar6 + (ulonglong)(local_68 & 0x1ff) * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  dVar3 = *(double *)(lVar6 + 0x10 + (ulonglong)(local_68 & 0x1ff) * 0x18);
  if (((((dVar7 < dVar2) || (dVar8 < *(double *)((longlong)this + 0x18))) ||
       (dVar3 < *(double *)((longlong)this + 0x20))) ||
      ((*(double *)((longlong)this + 0x28) <= dVar7 && dVar7 != *(double *)((longlong)this + 0x28)
       || (*(double *)((longlong)this + 0x30) <= dVar8 &&
           dVar8 != *(double *)((longlong)this + 0x30))))) ||
     (*(double *)((longlong)this + 0x38) <= dVar3 && dVar3 != *(double *)((longlong)this + 0x38))) {
    iVar15 = 0;
  }
  else {
    iVar15 = 1;
  }
  pdVar13 = (double *)((longlong)this + 0x28);
  pdVar12 = (double *)((longlong)this + 0x30);
  uVar10 = (ulonglong)((uint)(uVar9 >> 0x20) & 0x1ff);
  lVar6 = *(longlong *)(lVar5 + (uVar9 >> 0x29) * 8);
  pdVar1 = (double *)(lVar6 + uVar10 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  dVar3 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
  if (((dVar7 < dVar2) || (dVar8 < *(double *)((longlong)this + 0x18))) ||
     ((dVar3 < *(double *)((longlong)this + 0x20) ||
      (((*pdVar13 <= dVar7 && dVar7 != *pdVar13 || (*pdVar12 <= dVar8 && dVar8 != *pdVar12)) ||
       (*(double *)((longlong)this + 0x38) <= dVar3 && dVar3 != *(double *)((longlong)this + 0x38)))
      )))) {
    iVar14 = 0;
  }
  else {
    iVar14 = 1;
  }
  uVar9 = (ulonglong)(uVar4 & 0x1ff);
  lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8);
  pdVar1 = (double *)(lVar5 + uVar9 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  dVar3 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  if ((((dVar7 < dVar2) || (dVar8 < *(double *)((longlong)this + 0x18))) ||
      ((dVar3 < *(double *)((longlong)this + 0x20) ||
       ((*pdVar13 <= dVar7 && dVar7 != *pdVar13 || (*pdVar12 <= dVar8 && dVar8 != *pdVar12)))))) ||
     (*(double *)((longlong)this + 0x38) <= dVar3 && dVar3 != *(double *)((longlong)this + 0x38))) {
    iVar11 = 0;
  }
  if (*(int *)((longlong)this + 0x40) <= iVar15 + iVar11) {
    local_res8 = (ulonglong)(param_1 & 0x3fffffffU | 0x80000000);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 8),&local_res10,(bool *)&local_res8);
  }
  if (*(int *)((longlong)this + 0x40) <= iVar14 + iVar15) {
    local_res8 = (ulonglong)(param_1 & 0x3fffffff);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 8),&local_res10,(bool *)&local_res8);
  }
  if (*(int *)((longlong)this + 0x40) <= iVar14 + iVar11) {
    local_res8 = (ulonglong)(param_1 & 0x3fffffffU | 0x40000000);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 8),&local_res10,(bool *)&local_res8);
  }
  return;
}

// operator() @ 14ce4e6a0

void __thiscall
```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::
operator()'::__l5::<lambda_1>::operator()'::__l20::<lambda_8>::operator()(void *this,int param_1)

{
  int *piVar1;
  FDynamicMesh3 *this_00;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int local_18;
  int local_14;
  int iStack_10;
  
  this_00 = *(FDynamicMesh3 **)((longlong)this + 8);
  bVar5 = `UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_1>::
          operator()(*(void **)this,this_00,param_1,
                     *(TAxisAlignedBox3<double> **)((longlong)this + 0x10),
                     **(int **)((longlong)this + 0x18));
  if (bVar5) {
    local_18 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(this_00,param_1);
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x20);
    pFVar3 = pFVar2->Data;
    for (pFVar7 = pFVar3; pFVar7 != pFVar3 + (longlong)*(int *)&pFVar2[1].Data * 4;
        pFVar7 = pFVar7 + 4) {
      if (*(int *)pFVar7 == local_18) {
        return;
      }
    }
    if (((pFVar3 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 <
         pFVar3 + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    *(int *)(pFVar2->Data + (longlong)iVar6 * 4) = local_18;
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x28);
    iStack_10 = local_18;
    local_14 = param_1;
    if (((pFVar2->Data <= (FScriptContainerElement *)&local_14) &&
        ((FScriptContainerElement *)&local_14 <
         pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    *(ulonglong *)(pFVar2->Data + (longlong)iVar6 * 8) = CONCAT44(iStack_10,local_14);
  }
  return;
}

// `scalar_deleting_destructor' @ 14ce4e9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ea10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ea50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ea90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ead0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4eb10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4eb50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l8::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`8'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4eb90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::`2'::<lambda_1>::operator()'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ebd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ec10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l8::<lambda_2>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`8'::<lambda_2>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ec50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l18::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::`2'::<lambda_1>::operator()'::`18'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ec90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::operator()'::__l5::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::`2'::<lambda_2>::operator()'::`5'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ecd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l20::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::`2'::<lambda_1>::operator()'::`20'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ed10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l12::<lambda_3>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`12'::<lambda_3>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ed50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l12::<lambda_4>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`12'::<lambda_4>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ed90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l16::<lambda_5>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`16'::<lambda_5>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4edd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l16::<lambda_6>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`16'::<lambda_6>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ee10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l20::<lambda_7>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`20'::<lambda_7>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ee50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l20::<lambda_8>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>::operator()'::`20'::<lambda_8>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ee90

void * __thiscall FMeshOffset::_scalar_deleting_destructor_(FMeshOffset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMeshOffset__6B_;
  pFVar1 = (this->BoundaryVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->bIsBoundary).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PositionBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->ResultMesh);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ef10

void * __thiscall
UGeometryScriptLibrary_MeshModelingFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshModelingFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshModelingFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4ef70

void * __thiscall
UGeometryScriptLibrary_MeshNormalsFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshNormalsFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshNormalsFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4efd0

void * __thiscall
UGeometryScriptLibrary_MeshPolygroupFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshPolygroupFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPolygroupFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f030

void * __thiscall
UGeometryScriptLibrary_MeshPoolFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshPoolFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPoolFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f090

void * __thiscall
UGeometryScriptLibrary_MeshPrimitiveFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshPrimitiveFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPrimitiveFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f0f0

void * __thiscall
UGeometryScriptLibrary_MeshQueryFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshQueryFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshQueryFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f150

void * __thiscall
UGeometryScriptLibrary_MeshRepairFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshRepairFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshRepairFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f1b0

void * __thiscall
UGeometryScriptLibrary_MeshSamplingFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshSamplingFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSamplingFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f210

void * __thiscall
UGeometryScriptLibrary_MeshSculptLayersFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshSculptLayersFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSculptLayersFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f270

void * __thiscall
UGeometryScriptLibrary_MeshSelectionFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshSelectionFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f2d0

void * __thiscall
UGeometryScriptLibrary_MeshSelectionQueryFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshSelectionQueryFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionQueryFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f330

void * __thiscall
UGeometryScriptLibrary_MeshSimplifyFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshSimplifyFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSimplifyFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f390

void * __thiscall
UGeometryScriptLibrary_MeshSpatial::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshSpatial *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSpatial__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f3f0

void * __thiscall
UGeometryScriptLibrary_MeshSubdivideFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshSubdivideFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSubdivideFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f450

void * __thiscall
UGeometryScriptLibrary_MeshTransformFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshTransformFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshTransformFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f4b0

void * __thiscall
UGeometryScriptLibrary_MeshUVFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_MeshUVFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshUVFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ce4f510

void * __thiscall
UGeometryScriptLibrary_RemeshingFunctions::_scalar_deleting_destructor_
          (UGeometryScriptLibrary_RemeshingFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_RemeshingFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// AppendPrimitive @ 14ce53420

void __cdecl
AppendPrimitive(UDynamicMesh *param_1,FMeshShapeGenerator *param_2,TTransform<double> *param_3,
               FGeometryScriptPrimitiveOptions param_4,TVector<double> *param_5,
               TOptional<UE::Geometry::TQuaternion<double>_> *param_6)

{
  bool bVar1;
  FGeometryScriptPrimitiveOptions local_res20;
  FMeshShapeGenerator *local_2d8;
  undefined1 local_2d0 [24];
  code *local_2b8 [3];
  TVector<double> *local_2a0;
  TOptional<UE::Geometry::TQuaternion<double>_> *local_298;
  TQuaternion<double>_u_0 local_288;
  char local_268;
  FDynamicMesh3 local_258;
  
  local_res20 = param_4;
  local_2d8 = param_2;
  bVar1 = UDynamicMesh::IsEmpty(param_1);
  if (bVar1) {
    local_2b8[0] = (code *)&local_2d8;
    local_2b8[2] = (code *)&local_res20;
    local_2a0 = param_5;
    local_298 = param_6;
    local_2d0._8_8_ = local_2b8;
    local_2d0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_2b8[1] = (code *)param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_2d0,
               GeneralEdit,Unknown,false);
    return;
  }
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_258,local_2d8);
  local_268 = param_6->bIsSet;
  if ((bool)local_268 != false) {
    local_288._s_0.X = (param_6->TypedValue).field0_0x0._s_0.X;
    local_288._s_0.Y = (param_6->TypedValue).field0_0x0._s_0.Y;
    local_288._s_0.Z = (param_6->TypedValue).field0_0x0._s_0.Z;
    local_288._s_0.W = (param_6->TypedValue).field0_0x0._s_0.W;
  }
  local_2b8[0] = (code *)(param_5->field0_0x0)._s_0.X;
  local_2b8[1] = (code *)(param_5->field0_0x0)._s_0.Y;
  local_2b8[2] = (code *)(param_5->field0_0x0)._s_0.Z;
  ApplyPrimitiveOptionsToMesh
            (&local_258,param_3,local_res20,(TVector<double> *)local_2b8,
             (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_288._s_0);
  local_2d0._0_8_ = &local_258;
  local_2b8[1] = (code *)local_2d0;
  local_2b8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_2b8,
             GeneralEdit,Unknown,false);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_258);
  return;
}

// ApplyMeshUVEditorOperation @ 14ce5b600

void __cdecl
ApplyMeshUVEditorOperation
          (UDynamicMesh *param_1,int param_2,bool *param_3,UGeometryScriptDebug *param_4,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&)>
          *param_5,bool param_6)

{
  int local_res10 [6];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&)>
  *local_18;
  
  local_28 = local_res10;
  *param_3 = false;
  local_18 = param_5;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  local_res10[0] = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
             GeneralEdit,Unknown,param_6);
  return;
}

// ApplyPrimitiveOptionsToMesh @ 14ce5ba00

void __cdecl
ApplyPrimitiveOptionsToMesh
          (FDynamicMesh3 *param_1,TTransform<double> *param_2,
          FGeometryScriptPrimitiveOptions param_3,TVector<double> *param_4,
          TOptional<UE::Geometry::TQuaternion<double>_> *param_5)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar8;
  uint uVar9;
  int iVar10;
  FDynamicMeshAttributeSet *pFVar11;
  ulonglong uVar12;
  FDynamicMeshAttributeSet *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  FDynamicMeshAttributeSet *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bStackX_19;
  int iStackX_1c;
  undefined1 local_80 [32];
  TVector<double>_u_0 TStack_60;
  TVector<double>_u_0 local_48;
  
  dVar3 = (param_4->field0_0x0)._s_0.X;
  dVar4 = (param_4->field0_0x0)._s_0.Y;
  dVar5 = (param_4->field0_0x0)._s_0.Z;
  if (param_5->bIsSet == false) {
    if (0.0 < dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5) {
      MeshTransforms::Translate(param_1,param_4,All);
    }
  }
  else {
    local_80._0_8_ = (param_4->field0_0x0)._s_0.X;
    local_80._8_8_ = (param_4->field0_0x0)._s_0.Y;
    local_80._16_8_ = (param_4->field0_0x0)._s_0.Z;
    local_80._24_8_ = (param_5->TypedValue).field0_0x0._s_0.X;
    TStack_60._s_0.X = (param_5->TypedValue).field0_0x0._s_0.Y;
    TStack_60._s_0.Y = (param_5->TypedValue).field0_0x0._s_0.Z;
    TStack_60._s_0.Z = (param_5->TypedValue).field0_0x0._s_0.W;
    MeshTransforms::FrameCoordsToWorld(param_1,(TFrame3<double> *)local_80,All);
  }
  local_80._0_8_ = (param_2->Rotation).XY.m128d_f64[0];
  local_80._8_8_ = (param_2->Rotation).XY.m128d_f64[1];
  local_80._16_8_ = (param_2->Rotation).ZW.m128d_f64[0];
  local_80._24_8_ = (param_2->Rotation).ZW.m128d_f64[1];
  TStack_60._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  local_48._s_0.Z = (param_2->Scale3D).ZW.m128d_f64[0];
  TStack_60._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  TStack_60._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_48._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
  local_48._s_0.Y = (param_2->Scale3D).XY.m128d_f64[1];
  MeshTransforms::ApplyTransform(param_1,(TTransformSRT3<double> *)local_80,true,All);
  pFVar13 = (FDynamicMeshAttributeSet *)0x0;
  if (param_3.PolygroupMode == SingleGroup) {
    uVar18 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    pFVar16 = pFVar13;
    if ((uVar18 == 0) ||
       (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       pFVar16 = (FDynamicMeshAttributeSet *)0x0, (ushort)(**(short **)pFVar6 - 1U) < 0xfffe)) {
LAB_14ce5bb99:
      uVar15 = (uint)pFVar16;
    }
    else {
      pFVar16 = (FDynamicMeshAttributeSet *)&DAT_00000001;
      uVar15 = 1;
      if (1 < (int)uVar18) {
        do {
          uVar12 = (ulonglong)((uint)pFVar16 & 0x1ff);
          lVar7 = *(longlong *)(pFVar6 + ((ulonglong)pFVar16 >> 9) * 8);
          if ((*(short *)(lVar7 + uVar12 * 2) != 0) && (*(short *)(lVar7 + uVar12 * 2) != -1))
          break;
          uVar15 = (uint)pFVar16 + 1;
          pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
        } while ((int)uVar15 < (int)uVar18);
        goto LAB_14ce5bb99;
      }
    }
joined_r0x00014ce5bb9c:
    if (uVar15 != uVar18) {
      while( true ) {
        if ((param_1->TriangleGroups).bIsSet != false) {
          *(undefined4 *)
           (*(longlong *)
             ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
             ((ulonglong)pFVar16 >> 9) * 8) + (ulonglong)((uint)pFVar16 & 0x1ff) * 4) = 0;
          iVar10 = 1;
          if (1 < param_1->GroupIDCounter) {
            iVar10 = param_1->GroupIDCounter;
          }
          param_1->GroupIDCounter = iVar10;
        }
        uVar15 = (uint)pFVar16 + 1;
        pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
        if ((int)uVar18 <= (int)uVar15) break;
        pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          uVar12 = (ulonglong)((uint)pFVar16 & 0x1ff);
          if ((*(short *)(*(longlong *)(pFVar6 + ((ulonglong)pFVar16 >> 9) * 8) + uVar12 * 2) != 0)
             && (*(short *)(*(longlong *)(pFVar6 + ((ulonglong)pFVar16 >> 9) * 8) + uVar12 * 2) !=
                 -1)) break;
          uVar15 = (uint)pFVar16 + 1;
          pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
          if ((int)uVar18 <= (int)uVar15) goto joined_r0x00014ce5bb9c;
        }
      }
      goto joined_r0x00014ce5bb9c;
    }
  }
  bStackX_19 = param_3.bFlipOrientation;
  if (bStackX_19 != false) {
    UE::Geometry::FDynamicMesh3::ReverseOrientation(param_1,true);
    uVar18 = __xmm_80000000800000008000000080000000;
    pFVar16 = (param_1->AttributeSet).Ptr;
    if (pFVar16 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar11 = pFVar13;
      if (0 < (pFVar16->NormalLayers).Array.ArrayNum) {
        pFVar11 = *(FDynamicMeshAttributeSet **)(pFVar16->NormalLayers).Array.AllocatorInstance.Data
        ;
      }
      uVar15 = (int)pFVar11->_padding_ * 0x200 + *(int *)((longlong)&pFVar11->_padding_ + 4);
      pFVar16 = pFVar13;
      if ((uVar15 == 0) ||
         (pFVar16 = (FDynamicMeshAttributeSet *)0x0,
         (ushort)(**(short **)pFVar11->_padding_ - 1U) < 0xfffe)) {
LAB_14ce5bce9:
        uVar20 = (uint)pFVar16;
      }
      else {
        pFVar16 = (FDynamicMeshAttributeSet *)&DAT_00000001;
        uVar20 = 1;
        if (1 < (int)uVar15) {
          do {
            uVar12 = (ulonglong)((uint)pFVar16 & 0x1ff);
            lVar7 = ((undefined8 *)pFVar11->_padding_)[(ulonglong)pFVar16 >> 9];
            if ((*(short *)(lVar7 + uVar12 * 2) != 0) && (*(short *)(lVar7 + uVar12 * 2) != -1))
            break;
            uVar20 = (uint)pFVar16 + 1;
            pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar20;
          } while ((int)uVar20 < (int)uVar15);
          goto LAB_14ce5bce9;
        }
      }
joined_r0x00014ce5bcec:
      if (uVar20 != uVar15) {
        while( true ) {
          pTVar8 = (pFVar11->MaterialIDAttrib).Ptr;
          uVar9 = (int)pFVar16 * 3;
          uVar19 = (ulonglong)(uVar9 + 1 >> 9);
          uVar14 = (ulonglong)(uVar9 + 1 & 0x1ff);
          uVar17 = (ulonglong)(uVar9 + 2 & 0x1ff);
          uVar12 = (ulonglong)(uVar9 + 2 >> 9);
          uVar20 = (int)pFVar16 + 1;
          pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar20;
          uVar1 = *(uint *)(*(longlong *)(&pTVar8->field_0x0 + uVar19 * 8) + uVar14 * 4);
          uVar2 = *(uint *)(*(longlong *)(&pTVar8->field_0x0 + uVar12 * 8) + uVar17 * 4);
          *(uint *)(*(longlong *)(&pTVar8->field_0x0 + (ulonglong)(uVar9 >> 9) * 8) +
                   (ulonglong)(uVar9 & 0x1ff) * 4) =
               *(uint *)(*(longlong *)(&pTVar8->field_0x0 + (ulonglong)(uVar9 >> 9) * 8) +
                        (ulonglong)(uVar9 & 0x1ff) * 4) ^ uVar18;
          *(uint *)(*(longlong *)(&((pFVar11->MaterialIDAttrib).Ptr)->field_0x0 + uVar19 * 8) +
                   uVar14 * 4) = uVar1 ^ uVar18;
          *(uint *)(*(longlong *)(&((pFVar11->MaterialIDAttrib).Ptr)->field_0x0 + uVar12 * 8) +
                   uVar17 * 4) = uVar2 ^ uVar18;
          if ((int)uVar15 <= (int)uVar20) break;
          while( true ) {
            uVar12 = (ulonglong)((uint)pFVar16 & 0x1ff);
            lVar7 = *(longlong *)(pFVar11->_padding_ + ((ulonglong)pFVar16 >> 9) * 8);
            if ((*(short *)(lVar7 + uVar12 * 2) != 0) && (*(short *)(lVar7 + uVar12 * 2) != -1))
            break;
            uVar20 = (uint)pFVar16 + 1;
            pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar20;
            if ((int)uVar15 <= (int)uVar20) goto joined_r0x00014ce5bcec;
          }
        }
        goto joined_r0x00014ce5bcec;
      }
    }
  }
  iStackX_1c = param_3.MaterialID;
  if (iStackX_1c < 1) {
    return;
  }
  UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  pFVar16 = (param_1->AttributeSet).Ptr;
  pFVar11 = pFVar13;
  if (pFVar16 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar16;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar11);
  pFVar16 = (param_1->AttributeSet).Ptr;
  pFVar11 = pFVar13;
  if (pFVar16 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar16;
  }
  pTVar8 = (pFVar11->MaterialIDAttrib).Ptr;
  uVar18 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar18 != 0) &&
     (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    pFVar13 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar15 = 1;
    if ((int)uVar18 < 2) goto joined_r0x00014ce5be8a;
    do {
      uVar12 = (ulonglong)((uint)pFVar13 & 0x1ff);
      lVar7 = *(longlong *)(pFVar6 + ((ulonglong)pFVar13 >> 9) * 8);
      if ((*(short *)(lVar7 + uVar12 * 2) != 0) && (*(short *)(lVar7 + uVar12 * 2) != -1)) break;
      uVar15 = (uint)pFVar13 + 1;
      pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar18);
  }
  uVar15 = (uint)pFVar13;
joined_r0x00014ce5be8a:
  do {
    if (uVar15 == uVar18) {
      return;
    }
    while( true ) {
      uVar20 = (uint)pFVar13;
      uVar12 = (ulonglong)pFVar13 >> 9;
      uVar15 = uVar20 + 1;
      pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
      *(int *)(*(longlong *)(*(longlong *)&pTVar8->field_0x20 + uVar12 * 8) +
              (ulonglong)(uVar20 & 0x1ff) * 4) = iStackX_1c;
      if ((int)uVar18 <= (int)uVar15) break;
      pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        uVar12 = (ulonglong)((uint)pFVar13 & 0x1ff);
        if ((*(short *)(*(longlong *)(pFVar6 + ((ulonglong)pFVar13 >> 9) * 8) + uVar12 * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar6 + ((ulonglong)pFVar13 >> 9) * 8) + uVar12 * 2) != -1))
        break;
        uVar15 = (uint)pFVar13 + 1;
        pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
        if ((int)uVar18 <= (int)uVar15) goto joined_r0x00014ce5be8a;
      }
    }
  } while( true );
}

// EmptyLinkFunctionForGeneratedCodeMeshModelingFunctions @ 14ce687a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshModelingFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshNormalsFunctions @ 14ce687b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshNormalsFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshPolygroupFunctions @ 14ce687c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshPolygroupFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshPoolFunctions @ 14ce687d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshPoolFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshPrimitiveFunctions @ 14ce687e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshPrimitiveFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshQueryFunctions @ 14ce687f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshQueryFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshRemeshFunctions @ 14ce68800

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshRemeshFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshRepairFunctions @ 14ce68810

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshRepairFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSamplingFunctions @ 14ce68820

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSamplingFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSculptLayersFunctions @ 14ce68830

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSculptLayersFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSelectionFunctions @ 14ce68840

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSelectionFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSelectionQueryFunctions @ 14ce68850

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSelectionQueryFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSimplifyFunctions @ 14ce68860

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSimplifyFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSpatialFunctions @ 14ce68870

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSpatialFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSubdivideFunctions @ 14ce68880

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSubdivideFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshTransformFunctions @ 14ce68890

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshTransformFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshUVFunctions @ 14ce688a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshUVFunctions(void)

{
  return;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_NoRegister @ 14ce75fa0

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshModelingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshModelingFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshModelingFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshModelingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshModelingFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_NoRegister @ 14ce76060

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshNormalsFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshNormalsFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshNormalsFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshNormalsFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshNormalsFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_NoRegister @ 14ce76120

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshPolygroupFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshPolygroupFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshPolygroupFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshPolygroupFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPolygroupFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshPoolFunctions_NoRegister @ 14ce761e0

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshPoolFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshPoolFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.InnerSingleton,
               UGeometryScriptLibrary_MeshPoolFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshPoolFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshPoolFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPoolFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_NoRegister @ 14ce762a0

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshPrimitiveFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshPrimitiveFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshPrimitiveFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshPrimitiveFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPrimitiveFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_NoRegister @ 14ce76360

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshQueryFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.InnerSingleton,
               UGeometryScriptLibrary_MeshQueryFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshQueryFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshQueryFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshQueryFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_NoRegister @ 14ce76420

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshRepairFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.InnerSingleton
               ,UGeometryScriptLibrary_MeshRepairFunctions::
                StaticRegisterNativesUGeometryScriptLibrary_MeshRepairFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshRepairFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshRepairFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_NoRegister @ 14ce764e0

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSamplingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshSamplingFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshSamplingFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSamplingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSamplingFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions_NoRegister @ 14ce765a0

UClass * __cdecl
Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSculptLayersFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshSculptLayersFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshSculptLayersFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSculptLayersFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSculptLayersFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_NoRegister @ 14ce76660

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSelectionFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshSelectionFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSelectionFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_NoRegister @ 14ce76720

UClass * __cdecl
Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSelectionQueryFunctions"
               ,&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.
                 InnerSingleton,
               UGeometryScriptLibrary_MeshSelectionQueryFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionQueryFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSelectionQueryFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionQueryFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.
         InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_NoRegister @ 14ce767e0

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSimplifyFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshSimplifyFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshSimplifyFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSimplifyFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSimplifyFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_NoRegister @ 14ce768a0

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSpatial",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.InnerSingleton,
               UGeometryScriptLibrary_MeshSpatial::
               StaticRegisterNativesUGeometryScriptLibrary_MeshSpatial,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_MeshSpatial>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSpatial>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_NoRegister @ 14ce76960

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSubdivideFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshSubdivideFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshSubdivideFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSubdivideFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSubdivideFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_NoRegister @ 14ce76a20

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshTransformFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.
                InnerSingleton,
               UGeometryScriptLibrary_MeshTransformFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshTransformFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshTransformFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshTransformFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshTransformFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_NoRegister @ 14ce76ae0

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshUVFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.InnerSingleton,
               UGeometryScriptLibrary_MeshUVFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_MeshUVFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_MeshUVFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshUVFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.InnerSingleton;
}

// Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_NoRegister @ 14ce76ba0

UClass * __cdecl Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_RemeshingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.InnerSingleton,
               UGeometryScriptLibrary_RemeshingFunctions::
               StaticRegisterNativesUGeometryScriptLibrary_RemeshingFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_RemeshingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_RemeshingFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.InnerSingleton;
}

// operator() @ 150577d80

bool __thiscall
``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::
operator()'::__l29::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2631331788571541981>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2631331788571541981>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

