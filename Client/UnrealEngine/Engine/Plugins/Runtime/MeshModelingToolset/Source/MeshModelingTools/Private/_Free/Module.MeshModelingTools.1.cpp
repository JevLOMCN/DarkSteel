// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 661

// DefaultFaceColor'' @ 1413b59b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UGeometrySelectionVisualizationProperties::DefaultFaceColor__(void)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = ___xmm_3f8000003d4ccccd3d4ccccd3f733333;
  local_18._8_8_ = _UNK_1528fb368;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  return;
}

// DefaultLineColor'' @ 1413b59e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UGeometrySelectionVisualizationProperties::DefaultLineColor__(void)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = ___xmm_3f8000003f7333333e99999a00000000;
  local_18._8_8_ = _UNK_1528fb378;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  return;
}

// DefaultPointColor'' @ 1413b5a10

void __cdecl
`dynamic_initializer_for_'UGeometrySelectionVisualizationProperties::DefaultPointColor__(void)

{
  UGeometrySelectionVisualizationProperties::DefaultPointColor =
       UGeometrySelectionVisualizationProperties::DefaultLineColor;
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413b5a30

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413b5ac0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413b5b50

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413b5be0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413b5c70

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413b5d00

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413b5d90

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413b5e20

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413b5eb0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413b5f40

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_AddPrimitiveTool_h__Script_MeshModelingTools_1111826589'' @ 1413b5fd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_AddPrimitiveTool_h__Script_MeshModelingTools_1111826589__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_AddPrimitiveTool_h__Script_MeshModelingTools_Statics
             ::ClassInfo,0x17,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_AddPrimitiveTool_h__Script_MeshModelingTools_Statics
             ::EnumInfo,7);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h__Script_MeshModelingTools_2172638792'' @ 1413b6020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h__Script_MeshModelingTools_2172638792__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h__Script_MeshModelingTools_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DeleteGeometrySelectionCommand_h__Script_MeshModelingTools_3679642440'' @ 1413b6060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DeleteGeometrySelectionCommand_h__Script_MeshModelingTools_3679642440__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DeleteGeometrySelectionCommand_h__Script_MeshModelingTools_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h__Script_MeshModelingTools_4139699326'' @ 1413b60a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h__Script_MeshModelingTools_4139699326__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h__Script_MeshModelingTools_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_ModifyGeometrySelectionCommand_h__Script_MeshModelingTools_834486044'' @ 1413b60e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_ModifyGeometrySelectionCommand_h__Script_MeshModelingTools_834486044__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_ModifyGeometrySelectionCommand_h__Script_MeshModelingTools_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h__Script_MeshModelingTools_938309382'' @ 1413b6120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h__Script_MeshModelingTools_938309382__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h__Script_MeshModelingTools_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ConvertToPolygonsTool_h__Script_MeshModelingTools_117787199'' @ 1413b6160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ConvertToPolygonsTool_h__Script_MeshModelingTools_117787199__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ConvertToPolygonsTool_h__Script_MeshModelingTools_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ConvertToPolygonsTool_h__Script_MeshModelingTools_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h__Script_MeshModelingTools_596927068'' @ 1413b61b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h__Script_MeshModelingTools_596927068__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RemeshProperties_h__Script_MeshModelingTools_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_KelvinletBrushOp_h__Script_MeshModelingTools_2301276013'' @ 1413b6200

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_KelvinletBrushOp_h__Script_MeshModelingTools_2301276013__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_KelvinletBrushOp_h__Script_MeshModelingTools_Statics
             ::ClassInfo,5,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h__Script_MeshModelingTools_448598717'' @ 1413b6240

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h__Script_MeshModelingTools_448598717__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h__Script_MeshModelingTools_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshBrushOpBase_h__Script_MeshModelingTools_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshEraseSculptLayerBrushOps_h__Script_MeshModelingTools_229561424'' @ 1413b6290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshEraseSculptLayerBrushOps_h__Script_MeshModelingTools_229561424__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshEraseSculptLayerBrushOps_h__Script_MeshModelingTools_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshGroupPaintBrushOps_h__Script_MeshModelingTools_2507562310'' @ 1413b62d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshGroupPaintBrushOps_h__Script_MeshModelingTools_2507562310__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshGroupPaintBrushOps_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h__Script_MeshModelingTools_579292753'' @ 1413b6310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h__Script_MeshModelingTools_579292753__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshInflateBrushOps_h__Script_MeshModelingTools_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h__Script_MeshModelingTools_1527250247'' @ 1413b6350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h__Script_MeshModelingTools_1527250247__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshMoveBrushOps_h__Script_MeshModelingTools_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h__Script_MeshModelingTools_4047644142'' @ 1413b6390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h__Script_MeshModelingTools_4047644142__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPinchBrushOps_h__Script_MeshModelingTools_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPlaneBrushOps_h__Script_MeshModelingTools_1757120138'' @ 1413b63d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPlaneBrushOps_h__Script_MeshModelingTools_1757120138__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshPlaneBrushOps_h__Script_MeshModelingTools_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshSculptBrushOps_h__Script_MeshModelingTools_3628420794'' @ 1413b6410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshSculptBrushOps_h__Script_MeshModelingTools_3628420794__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshSculptBrushOps_h__Script_MeshModelingTools_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshSmoothingBrushOps_h__Script_MeshModelingTools_119833664'' @ 1413b6450

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshSmoothingBrushOps_h__Script_MeshModelingTools_119833664__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshSmoothingBrushOps_h__Script_MeshModelingTools_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshVertexPaintBrushOps_h__Script_MeshModelingTools_1772098113'' @ 1413b6490

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshVertexPaintBrushOps_h__Script_MeshModelingTools_1772098113__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshVertexPaintBrushOps_h__Script_MeshModelingTools_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Sculpting_MeshVertexPaintBrushOps_h__Script_MeshModelingTools_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h__Script_MeshModelingTools_1460400720'' @ 1413b64e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h__Script_MeshModelingTools_1460400720__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h__Script_MeshModelingTools_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MeshModelingTools'' @ 1413b6520

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MeshModelingTools__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x8d79043f;
  local_res8[0].DeclarationsHash = 0x13910a08;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MeshModelingTools,L"/Script/MeshModelingTools",
             &Z_Registration_Info_UPackage__Script_MeshModelingTools,local_res8);
  return;
}

// Z_Construct_UClass_UMeshConstraintProperties @ 14cbce550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshConstraintProperties(void)

{
  if (Z_Registration_Info_UClass_UMeshConstraintProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshConstraintProperties.OuterSingleton,
               &Z_Construct_UClass_UMeshConstraintProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshConstraintProperties.OuterSingleton;
}

// Z_Construct_UClass_URemeshProperties @ 14cbce650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URemeshProperties(void)

{
  if (Z_Registration_Info_UClass_URemeshProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URemeshProperties.OuterSingleton,
               &Z_Construct_UClass_URemeshProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URemeshProperties.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EGroupBoundaryConstraint @ 14cbce690

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EGroupBoundaryConstraint(void)

{
  if (Z_Registration_Info_UEnum_EGroupBoundaryConstraint.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGroupBoundaryConstraint.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EGroupBoundaryConstraint_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGroupBoundaryConstraint.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EMaterialBoundaryConstraint @ 14cbce6d0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EMaterialBoundaryConstraint(void)

{
  if (Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EMaterialBoundaryConstraint_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EMeshBoundaryConstraint @ 14cbce710

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EMeshBoundaryConstraint(void)

{
  if (Z_Registration_Info_UEnum_EMeshBoundaryConstraint.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshBoundaryConstraint.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EMeshBoundaryConstraint_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshBoundaryConstraint.InnerSingleton;
}

// EMeshBoundaryConstraint_StaticEnum @ 14cbce750

UEnum * __cdecl EMeshBoundaryConstraint_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMeshBoundaryConstraint,(UObject *)pUVar1
                       ,L"EMeshBoundaryConstraint");
  }
  return Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton;
}

// EGroupBoundaryConstraint_StaticEnum @ 14cbce790

UEnum * __cdecl EGroupBoundaryConstraint_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EGroupBoundaryConstraint,
                       (UObject *)pUVar1,L"EGroupBoundaryConstraint");
  }
  return Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton;
}

// Z_Construct_UClass_UAddArrowPrimitiveTool @ 14cbce890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddArrowPrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddArrowPrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddArrowPrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddArrowPrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddArrowPrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddBoxPrimitiveTool @ 14cbce8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddBoxPrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddBoxPrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddBoxPrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddBoxPrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddBoxPrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddCapsulePrimitiveTool @ 14cbce910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddCapsulePrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddCapsulePrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddConePrimitiveTool @ 14cbce950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddConePrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddConePrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddConePrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddConePrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddConePrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddCylinderPrimitiveTool @ 14cbce990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddCylinderPrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddCylinderPrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddCylinderPrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddCylinderPrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddCylinderPrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddDiscPrimitiveTool @ 14cbce9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddDiscPrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddDiscPrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddDiscPrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddDiscPrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddDiscPrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddPrimitiveTool @ 14cbcea10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddPrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddPrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddPrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddPrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddPrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddPrimitiveToolBuilder @ 14cbcea50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddPrimitiveToolBuilder(void)

{
  if (Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.OuterSingleton,
               &Z_Construct_UClass_UAddPrimitiveToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.OuterSingleton;
}

// Z_Construct_UClass_UAddRectanglePrimitiveTool @ 14cbcea90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddRectanglePrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddRectanglePrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddSpherePrimitiveTool @ 14cbcead0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddSpherePrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddSpherePrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddSpherePrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddSpherePrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddSpherePrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddStairsPrimitiveTool @ 14cbceb10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddStairsPrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddStairsPrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddStairsPrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddStairsPrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddStairsPrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UAddTorusPrimitiveTool @ 14cbceb50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAddTorusPrimitiveTool(void)

{
  if (Z_Registration_Info_UClass_UAddTorusPrimitiveTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAddTorusPrimitiveTool.OuterSingleton,
               &Z_Construct_UClass_UAddTorusPrimitiveTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAddTorusPrimitiveTool.OuterSingleton;
}

// Z_Construct_UClass_UProceduralArrowToolProperties @ 14cbceb90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralArrowToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralArrowToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralArrowToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralArrowToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralArrowToolProperties.OuterSingleton;
}

// Z_Construct_UClass_UProceduralBoxToolProperties @ 14cbcebd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralBoxToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralBoxToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralBoxToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralBoxToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralBoxToolProperties.OuterSingleton;
}

// Z_Construct_UClass_UProceduralCapsuleToolProperties @ 14cbcec10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralCapsuleToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralCapsuleToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.OuterSingleton;
}

// Z_Construct_UClass_UProceduralConeToolProperties @ 14cbcec50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralConeToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralConeToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralConeToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralConeToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralConeToolProperties.OuterSingleton;
}

// Z_Construct_UClass_UProceduralCylinderToolProperties @ 14cbcec90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralCylinderToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralCylinderToolProperties.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralCylinderToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralCylinderToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralCylinderToolProperties.OuterSingleton;
}

// EMaterialBoundaryConstraint_StaticEnum @ 14cbcecd0

UEnum * __cdecl EMaterialBoundaryConstraint_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMaterialBoundaryConstraint,
                       (UObject *)pUVar1,L"EMaterialBoundaryConstraint");
  }
  return Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton;
}

// Z_Construct_UClass_UProceduralDiscToolProperties @ 14cbced10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralDiscToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralDiscToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralDiscToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralDiscToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralDiscToolProperties.OuterSingleton;
}

// Z_Construct_UClass_UProceduralRectangleToolProperties @ 14cbced50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralRectangleToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralRectangleToolProperties.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralRectangleToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralRectangleToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralRectangleToolProperties.OuterSingleton;
}

// Z_Construct_UClass_UProceduralShapeToolProperties @ 14cbced90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralShapeToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralShapeToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralShapeToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralShapeToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralShapeToolProperties.OuterSingleton;
}

// Z_Construct_UClass_UProceduralSphereToolProperties @ 14cbcedd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralSphereToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralSphereToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralSphereToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralSphereToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralSphereToolProperties.OuterSingleton;
}

// Z_Construct_UClass_UProceduralStairsToolProperties @ 14cbcee10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralStairsToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralStairsToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralStairsToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralStairsToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralStairsToolProperties.OuterSingleton;
}

// Z_Construct_UClass_UProceduralTorusToolProperties @ 14cbcee50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralTorusToolProperties(void)

{
  if (Z_Registration_Info_UClass_UProceduralTorusToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralTorusToolProperties.OuterSingleton,
               &Z_Construct_UClass_UProceduralTorusToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralTorusToolProperties.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EMakeMeshPivotLocation @ 14cbcee90

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EMakeMeshPivotLocation(void)

{
  if (Z_Registration_Info_UEnum_EMakeMeshPivotLocation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMakeMeshPivotLocation.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EMakeMeshPivotLocation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMakeMeshPivotLocation.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EMakeMeshPlacementType @ 14cbceed0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EMakeMeshPlacementType(void)

{
  if (Z_Registration_Info_UEnum_EMakeMeshPlacementType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMakeMeshPlacementType.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EMakeMeshPlacementType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMakeMeshPlacementType.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EMakeMeshPolygroupMode @ 14cbcef10

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EMakeMeshPolygroupMode(void)

{
  if (Z_Registration_Info_UEnum_EMakeMeshPolygroupMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMakeMeshPolygroupMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EMakeMeshPolygroupMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMakeMeshPolygroupMode.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EProceduralDiscType @ 14cbcef50

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EProceduralDiscType(void)

{
  if (Z_Registration_Info_UEnum_EProceduralDiscType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EProceduralDiscType.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EProceduralDiscType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EProceduralDiscType.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EProceduralRectType @ 14cbcef90

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EProceduralRectType(void)

{
  if (Z_Registration_Info_UEnum_EProceduralRectType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EProceduralRectType.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EProceduralRectType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EProceduralRectType.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EProceduralSphereType @ 14cbcefd0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EProceduralSphereType(void)

{
  if (Z_Registration_Info_UEnum_EProceduralSphereType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EProceduralSphereType.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EProceduralSphereType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EProceduralSphereType.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EProceduralStairsType @ 14cbcf010

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EProceduralStairsType(void)

{
  if (Z_Registration_Info_UEnum_EProceduralStairsType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EProceduralStairsType.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EProceduralStairsType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EProceduralStairsType.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14cbcf050

void __cdecl
Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled @ 14cbcf120

UFunction * __cdecl
Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EMakeMeshPlacementType_StaticEnum @ 14cbcf160

UEnum * __cdecl EMakeMeshPlacementType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMakeMeshPlacementType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMakeMeshPlacementType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMakeMeshPlacementType,(UObject *)pUVar1,
                       L"EMakeMeshPlacementType");
  }
  return Z_Registration_Info_UEnum_EMakeMeshPlacementType.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14cbcf1a0

void __cdecl
Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UBaseKelvinletBrushOpProps @ 14cbcf1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBaseKelvinletBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.OuterSingleton;
}

// Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled @ 14cbcf1f0

UFunction * __cdecl
Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMeshSculptBrushOpProps @ 14cbcf230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshSculptBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UMeshSculptBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshSculptBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UMeshSculptBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshSculptBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UPullKelvinletBrushOpProps @ 14cbcf270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPullKelvinletBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UScaleKelvinletBrushOpProps @ 14cbcf2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UScaleKelvinletBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_USharpPullKelvinletBrushOpProps @ 14cbcf2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USharpPullKelvinletBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UTwistKelvinletBrushOpProps @ 14cbcf330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTwistKelvinletBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.OuterSingleton;
}

// EMakeMeshPivotLocation_StaticEnum @ 14cbcf370

UEnum * __cdecl EMakeMeshPivotLocation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMakeMeshPivotLocation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMakeMeshPivotLocation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMakeMeshPivotLocation,(UObject *)pUVar1,
                       L"EMakeMeshPivotLocation");
  }
  return Z_Registration_Info_UEnum_EMakeMeshPivotLocation.OuterSingleton;
}

// Z_Construct_UPackage__Script_MeshModelingTools @ 14cbcf3b0

UPackage * __cdecl Z_Construct_UPackage__Script_MeshModelingTools(void)

{
  if (Z_Registration_Info_UPackage__Script_MeshModelingTools.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MeshModelingTools.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_MeshModelingTools.OuterSingleton;
}

// NewProp_bPreserveSharpEdges_SetBit @ 14cbcf3f0

void __cdecl
Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// EMakeMeshPolygroupMode_StaticEnum @ 14cbcf580

UEnum * __cdecl EMakeMeshPolygroupMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMakeMeshPolygroupMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMakeMeshPolygroupMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMakeMeshPolygroupMode,(UObject *)pUVar1,
                       L"EMakeMeshPolygroupMode");
  }
  return Z_Registration_Info_UEnum_EMakeMeshPolygroupMode.OuterSingleton;
}

// NewProp_bPreventNormalFlips_SetBit @ 14cbcf5c0

void __cdecl
Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// NewProp_bPreventTinyTriangles_SetBit @ 14cbcf5d0

void __cdecl
Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
  return;
}

// NewProp_bAlignToNormal_SetBit @ 14cbcf5e0

void __cdecl
Z_Construct_UClass_UProceduralShapeToolProperties_Statics::NewProp_bAlignToNormal_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// NewProp_bShowGizmo_SetBit @ 14cbcf5f0

void __cdecl
Z_Construct_UClass_UProceduralShapeToolProperties_Statics::NewProp_bShowGizmo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb9) = 1;
  return;
}

// NewProp_bShowGizmoOptions_SetBit @ 14cbcf600

void __cdecl
Z_Construct_UClass_UProceduralShapeToolProperties_Statics::NewProp_bShowGizmoOptions_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xba) = 1;
  return;
}

// EProceduralRectType_StaticEnum @ 14cbcf910

UEnum * __cdecl EProceduralRectType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProceduralRectType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EProceduralRectType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EProceduralRectType,(UObject *)pUVar1,
                       L"EProceduralRectType");
  }
  return Z_Registration_Info_UEnum_EProceduralRectType.OuterSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand @ 14cbcf950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand(void)

{
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.OuterSingleton,
               &Z_Construct_UClass_UModifyGeometrySelectionCommand_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.OuterSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract @ 14cbcf990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract(void)

{
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.OuterSingleton,
               &Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.OuterSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand @ 14cbcf9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand(void)

{
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.OuterSingleton,
               &Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.OuterSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected @ 14cbcfa10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected(void)

{
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.
                OuterSingleton,
               &Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.OuterSingleton
  ;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert @ 14cbcfa50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert(void)

{
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.OuterSingleton,
               &Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.OuterSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected @ 14cbcfa90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected(void)

{
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.
                OuterSingleton,
               &Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.OuterSingleton;
}

// NewProp_bMaintainDimension_SetBit @ 14cbcfad0

void __cdecl
Z_Construct_UClass_UProceduralRectangleToolProperties_Statics::NewProp_bMaintainDimension_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  return;
}

// EProceduralDiscType_StaticEnum @ 14cbcfae0

UEnum * __cdecl EProceduralDiscType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProceduralDiscType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EProceduralDiscType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EProceduralDiscType,(UObject *)pUVar1,
                       L"EProceduralDiscType");
  }
  return Z_Registration_Info_UEnum_EProceduralDiscType.OuterSingleton;
}

// Z_Construct_UClass_UBaseSmoothBrushOpProps @ 14cbcfb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBaseSmoothBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UBaseSmoothBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UEraseBrushOpProps @ 14cbcfb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEraseBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UEraseBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEraseBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UEraseBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEraseBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UFlattenBrushOpProps @ 14cbcfba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFlattenBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UFlattenBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFlattenBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UFlattenBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFlattenBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_USecondarySmoothBrushOpProps @ 14cbcfbe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USecondarySmoothBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_USmoothBrushOpProps @ 14cbcfc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USmoothBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_USmoothBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USmoothBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_USmoothBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USmoothBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_USmoothFillBrushOpProps @ 14cbcfc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USmoothFillBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_USmoothFillBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USmoothFillBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_USmoothFillBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USmoothFillBrushOpProps.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EPlaneBrushSideMode @ 14cbcfca0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EPlaneBrushSideMode(void)

{
  if (Z_Registration_Info_UEnum_EPlaneBrushSideMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPlaneBrushSideMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EPlaneBrushSideMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPlaneBrushSideMode.InnerSingleton;
}

// EPlaneBrushSideMode_StaticEnum @ 14cbcfce0

UEnum * __cdecl EPlaneBrushSideMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPlaneBrushSideMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPlaneBrushSideMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPlaneBrushSideMode,(UObject *)pUVar1,
                       L"EPlaneBrushSideMode");
  }
  return Z_Registration_Info_UEnum_EPlaneBrushSideMode.OuterSingleton;
}

// NewProp_bFlips_SetBit @ 14cbcfd20

void __cdecl Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return;
}

// NewProp_bSplits_SetBit @ 14cbcfd30

void __cdecl Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbd) = 1;
  return;
}

// NewProp_bCollapses_SetBit @ 14cbcfd40

void __cdecl Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbe) = 1;
  return;
}

// NewProp_bIsStrengthPressureEnabled_SetBit @ 14cbcfd50

void __cdecl
Z_Construct_UClass_UMeshSculptBrushOpProps_Statics::NewProp_bIsStrengthPressureEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewProp_bPreserveUVFlow_SetBit @ 14cbcfd60

void __cdecl
Z_Construct_UClass_USmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// EMeshSculptStrokeType_StaticEnum @ 14cbcfd70

UEnum * __cdecl EMeshSculptStrokeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshSculptStrokeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMeshSculptStrokeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMeshSculptStrokeType,(UObject *)pUVar1,
                       L"EMeshSculptStrokeType");
  }
  return Z_Registration_Info_UEnum_EMeshSculptStrokeType.OuterSingleton;
}

// NewProp_bPreserveUVFlow_SetBit @ 14cbcfdb0

void __cdecl
Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bPreserveUVFlow_SetBit @ 14cbcfe80

void __cdecl
Z_Construct_UClass_USmoothFillBrushOpProps_Statics::NewProp_bPreserveUVFlow_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// Z_Construct_UClass_UConvertToPolygonsOperatorFactory @ 14cbcfe90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConvertToPolygonsOperatorFactory(void)

{
  if (Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.OuterSingleton,
               &Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.OuterSingleton;
}

// Z_Construct_UClass_UConvertToPolygonsTool @ 14cbcfed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConvertToPolygonsTool(void)

{
  if (Z_Registration_Info_UClass_UConvertToPolygonsTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConvertToPolygonsTool.OuterSingleton,
               &Z_Construct_UClass_UConvertToPolygonsTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsTool.OuterSingleton;
}

// Z_Construct_UClass_URetriangulateGeometrySelectionCommand @ 14cbcff10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URetriangulateGeometrySelectionCommand(void)

{
  if (Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.OuterSingleton,
               &Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.OuterSingleton;
}

// Z_Construct_UClass_UConvertToPolygonsToolBuilder @ 14cbcff50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConvertToPolygonsToolBuilder(void)

{
  if (Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.OuterSingleton,
               &Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.OuterSingleton;
}

// Z_Construct_UClass_UConvertToPolygonsToolProperties @ 14cbcff90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConvertToPolygonsToolProperties(void)

{
  if (Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.OuterSingleton,
               &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EConvertToPolygonsMode @ 14cbcffd0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EConvertToPolygonsMode(void)

{
  if (Z_Registration_Info_UEnum_EConvertToPolygonsMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EConvertToPolygonsMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EConvertToPolygonsMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EConvertToPolygonsMode.InnerSingleton;
}

// EProceduralSphereType_StaticEnum @ 14cbd0010

UEnum * __cdecl EProceduralSphereType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProceduralSphereType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EProceduralSphereType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EProceduralSphereType,(UObject *)pUVar1,
                       L"EProceduralSphereType");
  }
  return Z_Registration_Info_UEnum_EProceduralSphereType.OuterSingleton;
}

// Z_Construct_UClass_UEraseSculptLayerBrushOpProps @ 14cbd0100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEraseSculptLayerBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UEraseSculptLayerBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.OuterSingleton;
}

// EConvertToPolygonsMode_StaticEnum @ 14cbd0140

UEnum * __cdecl EConvertToPolygonsMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EConvertToPolygonsMode,(UObject *)pUVar1,
                       L"EConvertToPolygonsMode");
  }
  return Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton;
}

// Z_Construct_UFunction_UConvertToPolygonsToolProperties_GetGroupOptionsList @ 14cbd0180

UFunction * __cdecl Z_Construct_UFunction_UConvertToPolygonsToolProperties_GetGroupOptionsList(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConvertToPolygonsToolProperties_GetGroupOptionsList_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseAverageGroupNormal_SetBit @ 14cbd01c0

void __cdecl
Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bUseAverageGroupNormal_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// NewProp_bSplitExisting_SetBit @ 14cbd01d0

void __cdecl
Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bNormalWeighted_SetBit @ 14cbd02a0

void __cdecl
Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
  return;
}

// NewProp_bRespectUVSeams_SetBit @ 14cbd02b0

void __cdecl
Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  return;
}

// NewProp_bRespectHardNormals_SetBit @ 14cbd02c0

void __cdecl
Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd5) = 1;
  return;
}

// NewProp_bShowGroupColors_SetBit @ 14cbd02d0

void __cdecl
Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdc) = 1;
  return;
}

// NewProp_bCalculateNormals_SetBit @ 14cbd02e0

void __cdecl
Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdd) = 1;
  return;
}

// NewProp_bShowNewLayerName_SetBit @ 14cbd02f0

void __cdecl
Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowNewLayerName_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf8) = 1;
  return;
}

// EProceduralStairsType_StaticEnum @ 14cbd0300

UEnum * __cdecl EProceduralStairsType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProceduralStairsType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EProceduralStairsType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EProceduralStairsType,(UObject *)pUVar1,
                       L"EProceduralStairsType");
  }
  return Z_Registration_Info_UEnum_EProceduralStairsType.OuterSingleton;
}

// Z_Construct_UClass_UGroupEraseBrushOpProps @ 14cbd07c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGroupEraseBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UGroupEraseBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGroupEraseBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGroupEraseBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UGroupPaintBrushOpProps @ 14cbd0800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGroupPaintBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UGroupPaintBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGroupPaintBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGroupPaintBrushOpProps.OuterSingleton;
}

// NewProp_bOnlyEraseCurrent_SetBit @ 14cbd0840

void __cdecl
Z_Construct_UClass_UGroupEraseBrushOpProps_Statics::NewProp_bOnlyEraseCurrent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return;
}

// Z_Construct_UClass_UPolyEditActivityContext @ 14cbd0850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditActivityContext(void)

{
  if (Z_Registration_Info_UClass_UPolyEditActivityContext.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditActivityContext.OuterSingleton,
               &Z_Construct_UClass_UPolyEditActivityContext_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditActivityContext.OuterSingleton;
}

// NewProp_bOnlyPaintUngrouped_SetBit @ 14cbd0890

void __cdecl
Z_Construct_UClass_UGroupPaintBrushOpProps_Statics::NewProp_bOnlyPaintUngrouped_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return;
}

// Z_Construct_UClass_UVertexColorBaseBrushOpProps @ 14cbd0960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVertexColorBaseBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UVertexColorPaintBrushOpProps @ 14cbd09a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVertexColorPaintBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UVertexColorSmoothBrushOpProps @ 14cbd09e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVertexColorSmoothBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UVertexColorSmoothBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UVertexColorSoftenBrushOpProps @ 14cbd0a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVertexColorSoftenBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UVertexColorSoftenBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EVertexColorPaintBrushOpBlendMode @ 14cbd0a60

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EVertexColorPaintBrushOpBlendMode(void)

{
  if (Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EVertexColorPaintBrushOpBlendMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.InnerSingleton;
}

// EVertexColorPaintBrushOpBlendMode_StaticEnum @ 14cbd0aa0

UEnum * __cdecl EVertexColorPaintBrushOpBlendMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EVertexColorPaintBrushOpBlendMode,
                       (UObject *)pUVar1,L"EVertexColorPaintBrushOpBlendMode");
  }
  return Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.OuterSingleton;
}

// Z_Construct_UClass_UInflateBrushOpProps @ 14cbd0ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInflateBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UInflateBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInflateBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UInflateBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInflateBrushOpProps.OuterSingleton;
}

// NewProp_bApplyFalloff_SetBit @ 14cbd0b20

void __cdecl
Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_bApplyFalloff_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc4) = 1;
  return;
}

// Z_Construct_UClass_UConvertToPolygonsToolProperties_NoRegister @ 14cbd0bf0

UClass * __cdecl Z_Construct_UClass_UConvertToPolygonsToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsToolProperties",
               &Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.InnerSingleton,
               UConvertToPolygonsToolProperties::
               StaticRegisterNativesUConvertToPolygonsToolProperties,0x110,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UConvertToPolygonsToolProperties>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UConvertToPolygonsTool_NoRegister @ 14cbd0cb0

UClass * __cdecl Z_Construct_UClass_UConvertToPolygonsTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsTool",
               &Z_Registration_Info_UClass_UConvertToPolygonsTool.InnerSingleton,
               UConvertToPolygonsTool::StaticRegisterNativesUConvertToPolygonsTool,0x1d8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UConvertToPolygonsTool>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsTool.InnerSingleton;
}

// Z_Construct_UClass_UMoveBrushOpProps @ 14cbd0e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoveBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UMoveBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoveBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UMoveBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoveBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UPinchBrushOpProps @ 14cbd1160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPinchBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UPinchBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPinchBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UPinchBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPinchBrushOpProps.OuterSingleton;
}

// NewProp_bPerpDamping_SetBit @ 14cbd11a0

void __cdecl
Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_bPerpDamping_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc4) = 1;
  return;
}

// Z_Construct_UClass_UCombineMeshesToolProperties_NoRegister @ 14cbd1330

UClass * __cdecl Z_Construct_UClass_UCombineMeshesToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombineMeshesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CombineMeshesToolProperties",
               &Z_Registration_Info_UClass_UCombineMeshesToolProperties.InnerSingleton,
               UCombineMeshesToolProperties::StaticRegisterNativesUCombineMeshesToolProperties,0xd8,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombineMeshesToolProperties>,
               InternalVTableHelperCtorCaller<UCombineMeshesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombineMeshesToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UBasePlaneBrushOpProps @ 14cbd1930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBasePlaneBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UBasePlaneBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBasePlaneBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UBasePlaneBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBasePlaneBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UFixedPlaneBrushOpProps @ 14cbd1970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFixedPlaneBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UProceduralShapeToolProperties_NoRegister @ 14cbd19b0

UClass * __cdecl Z_Construct_UClass_UProceduralShapeToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralShapeToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralShapeToolProperties",
               &Z_Registration_Info_UClass_UProceduralShapeToolProperties.InnerSingleton,
               UProceduralShapeToolProperties::StaticRegisterNativesUProceduralShapeToolProperties,
               0xc0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralShapeToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralShapeToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralShapeToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UPlaneBrushOpProps @ 14cbd1a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPlaneBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UPlaneBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPlaneBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UPlaneBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPlaneBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UViewAlignedPlaneBrushOpProps @ 14cbd1ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UViewAlignedPlaneBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UDeleteGeometrySelectionCommand @ 14cbd2630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDeleteGeometrySelectionCommand(void)

{
  if (Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.OuterSingleton,
               &Z_Construct_UClass_UDeleteGeometrySelectionCommand_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.OuterSingleton;
}

// Z_Construct_UClass_USculptMaxBrushOpProps @ 14cbd27f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USculptMaxBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_USculptMaxBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USculptMaxBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_USculptMaxBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USculptMaxBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UStandardSculptBrushOpProps @ 14cbd2830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStandardSculptBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UStandardSculptBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStandardSculptBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStandardSculptBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UViewAlignedSculptBrushOpProps @ 14cbd2870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UViewAlignedSculptBrushOpProps(void)

{
  if (Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.OuterSingleton,
               &Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.OuterSingleton;
}

// Z_Construct_UClass_UCombineMeshesTool @ 14cbd28b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCombineMeshesTool(void)

{
  if (Z_Registration_Info_UClass_UCombineMeshesTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCombineMeshesTool.OuterSingleton,
               &Z_Construct_UClass_UCombineMeshesTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCombineMeshesTool.OuterSingleton;
}

// Z_Construct_UClass_UCombineMeshesToolBuilder @ 14cbd28f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCombineMeshesToolBuilder(void)

{
  if (Z_Registration_Info_UClass_UCombineMeshesToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCombineMeshesToolBuilder.OuterSingleton,
               &Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCombineMeshesToolBuilder.OuterSingleton;
}

// Z_Construct_UClass_UCombineMeshesToolProperties @ 14cbd2930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCombineMeshesToolProperties(void)

{
  if (Z_Registration_Info_UClass_UCombineMeshesToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCombineMeshesToolProperties.OuterSingleton,
               &Z_Construct_UClass_UCombineMeshesToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCombineMeshesToolProperties.OuterSingleton;
}

// NewProp_bIsDuplicateMode_SetBit @ 14cbd2af0

void __cdecl
Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewProp_bUseFixedHeight_SetBit @ 14cbd2bc0

void __cdecl
Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_bUseFixedHeight_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc4) = 1;
  return;
}

// Z_Construct_UClass_UDisconnectGeometrySelectionCommand @ 14cbd3050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDisconnectGeometrySelectionCommand(void)

{
  if (Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.OuterSingleton,
               &Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.OuterSingleton;
}

// AddLambda<`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_> @ 14cbd3760

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
::AddLambda<_UConvertToPolygonsTool::Setup_::__l11::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UConvertToPolygonsTool *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UConvertToPolygonsTool *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UConvertToPolygonsTool *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pUVar5 = (UConvertToPolygonsTool *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddWeakLambda<UAddPrimitiveTool,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_> @ 14cbd39b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
::AddWeakLambda<UAddPrimitiveTool,_UAddPrimitiveTool::Setup_::__l2::<lambda_3>_>
          (TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
           *this,UAddPrimitiveTool *param_1,<lambda_3> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  <lambda_3> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  lVar6 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_3> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_3> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = *in_R9;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  if (((local_70.DelegateSize == 0) ||
      (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      lVar6 = *plVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar6;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_70.DelegateSize;
    local_70.DelegateSize = 0;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// InternalConstructor<UAddArrowPrimitiveTool> @ 14cbd3c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddArrowPrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralArrowToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddArrowPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddArrowPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddArrowPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddArrowPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddArrowPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Arrow");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"ArrowToolName",L"Create Arrow");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UAddBoxPrimitiveTool> @ 14cbd3dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddBoxPrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralBoxToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddBoxPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddBoxPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddBoxPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddBoxPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddBoxPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Box");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"BoxToolName",L"Create Box");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UAddCapsulePrimitiveTool> @ 14cbd3f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddCapsulePrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralCapsuleToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddCapsulePrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddCapsulePrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddCapsulePrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddCapsulePrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddCapsulePrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Capsule");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"CapsuleToolName",L"Create Capsule");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UAddConePrimitiveTool> @ 14cbd4060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddConePrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralConeToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddConePrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddConePrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddConePrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddConePrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddConePrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Cone");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"ConeToolName",L"Create Cone");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UAddCylinderPrimitiveTool> @ 14cbd41b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddCylinderPrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralCylinderToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddCylinderPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddCylinderPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddCylinderPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddCylinderPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddCylinderPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Cylinder");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"CylinderToolName",L"Create Cylinder");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UAddDiscPrimitiveTool> @ 14cbd4300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddDiscPrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralDiscToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddDiscPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddDiscPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddDiscPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddDiscPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddDiscPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Disc");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"DiscToolName",L"Create Disc");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UAddPrimitiveTool> @ 14cbd4450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddPrimitiveTool>(FObjectInitializer *param_1)

{
  if ((UAddPrimitiveTool *)param_1->Obj != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAddPrimitiveToolBuilder> @ 14cbd4470

void __cdecl InternalConstructor<UAddPrimitiveToolBuilder>(FObjectInitializer *param_1)

{
  UInteractiveToolBuilder *this;
  
  this = (UInteractiveToolBuilder *)param_1->Obj;
  if (this != (UInteractiveToolBuilder *)0x0) {
    UInteractiveToolBuilder::UInteractiveToolBuilder(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UAddPrimitiveToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<UAddRectanglePrimitiveTool> @ 14cbd44b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddRectanglePrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralRectangleToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddRectanglePrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddRectanglePrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddRectanglePrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddRectanglePrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddRectanglePrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Rectangle");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"RectToolName",L"Create Rectangle");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UAddSpherePrimitiveTool> @ 14cbd4600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddSpherePrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralSphereToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddSpherePrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddSpherePrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddSpherePrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddSpherePrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddSpherePrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Sphere");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"SphereToolName",L"Create Sphere");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UAddStairsPrimitiveTool> @ 14cbd4750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddStairsPrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralStairsToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddStairsPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddStairsPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddStairsPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddStairsPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddStairsPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Stairs");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"StairsToolName",L"Create Stairs");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UAddTorusPrimitiveTool> @ 14cbd48a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAddTorusPrimitiveTool>(FObjectInitializer *param_1)

{
  UAddPrimitiveTool *this;
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  this = (UAddPrimitiveTool *)param_1->Obj;
  if (this != (UAddPrimitiveTool *)0x0) {
    pFVar4 = FName::FName(&local_res8,L"ShapeSettings");
    FVar1 = *pFVar4;
    pUVar5 = UProceduralTorusToolProperties::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddTorusPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddTorusPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddTorusPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddTorusPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddTorusPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    FString::operator=(&this->AssetName,L"Torus");
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UAddPrimitiveTool",L"TorusToolName",L"Create Torus");
    pIVar2 = (ITextData *)this->_padding_;
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar2 != pIVar3) {
      this->_padding_ = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)&this->_padding_ = pFVar6->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UBaseKelvinletBrushOpProps> @ 14cbd49f0

void __cdecl InternalConstructor<UBaseKelvinletBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UBaseKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
  }
  return;
}

// InternalConstructor<UBasePlaneBrushOpProps> @ 14cbd4a50

void __cdecl InternalConstructor<UBasePlaneBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UBasePlaneBrushOpProps__6B_;
  }
  return;
}

// InternalConstructor<UBaseSmoothBrushOpProps> @ 14cbd4a90

void __cdecl InternalConstructor<UBaseSmoothBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UBaseSmoothBrushOpProps__6B_;
  }
  return;
}

// InternalConstructor<UCombineMeshesTool> @ 14cbd4ad0

void __cdecl InternalConstructor<UCombineMeshesTool>(FObjectInitializer *param_1)

{
  UMultiSelectionMeshEditingTool *this;
  
  this = (UMultiSelectionMeshEditingTool *)param_1->Obj;
  if (this != (UMultiSelectionMeshEditingTool *)0x0) {
    UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool(this);
    this->_padding_ = (longlong)&UCombineMeshesTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCombineMeshesTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UCombineMeshesTool::_vftable__for__UMultiSelectionMeshEditingTool__
    ;
    this[1]._padding_ =
         (longlong)&UCombineMeshesTool::_vftable__for__IInteractiveToolExclusiveToolAPI__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UCombineMeshesToolBuilder> @ 14cbd4b40

void __cdecl InternalConstructor<UCombineMeshesToolBuilder>(FObjectInitializer *param_1)

{
  UMultiSelectionMeshEditingToolBuilder *this;
  
  this = (UMultiSelectionMeshEditingToolBuilder *)param_1->Obj;
  if (this != (UMultiSelectionMeshEditingToolBuilder *)0x0) {
    UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UCombineMeshesToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<UCombineMeshesToolProperties> @ 14cbd4b80

void __cdecl InternalConstructor<UCombineMeshesToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UCombineMeshesToolProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UConvertToPolygonsOperatorFactory> @ 14cbd4be0

void __cdecl InternalConstructor<UConvertToPolygonsOperatorFactory>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UConvertToPolygonsOperatorFactory::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UConvertToPolygonsOperatorFactory::
          _vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  }
  return;
}

// InternalConstructor<UConvertToPolygonsTool> @ 14cbd4c30

void __cdecl InternalConstructor<UConvertToPolygonsTool>(FObjectInitializer *param_1)

{
  USingleTargetWithSelectionTool *this;
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  this = (USingleTargetWithSelectionTool *)param_1->Obj;
  if (this != (USingleTargetWithSelectionTool *)0x0) {
    USingleTargetWithSelectionTool::USingleTargetWithSelectionTool(this);
    this->_padding_ = (longlong)&UConvertToPolygonsTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UConvertToPolygonsTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&___7UConvertToPolygonsTool__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UConvertToPolygonsTool",L"ConvertToPolygonsToolName",
                        L"Generate PolyGroups");
    pIVar1 = (ITextData *)this->_padding_;
    pIVar2 = (pFVar3->TextData).Reference;
    if (pIVar1 != pIVar2) {
      this->_padding_ = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    *(uint *)&this->_padding_ = pFVar3->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UConvertToPolygonsToolBuilder> @ 14cbd4d80

void __cdecl InternalConstructor<UConvertToPolygonsToolBuilder>(FObjectInitializer *param_1)

{
  USingleTargetWithSelectionToolBuilder *this;
  
  this = (USingleTargetWithSelectionToolBuilder *)param_1->Obj;
  if (this != (USingleTargetWithSelectionToolBuilder *)0x0) {
    USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder(this,param_1);
    *(undefined ***)this = &___7UConvertToPolygonsToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<UConvertToPolygonsToolProperties> @ 14cbd4db0

void __cdecl InternalConstructor<UConvertToPolygonsToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3dcccccd;
    this->_padding_ = (longlong)&___7UConvertToPolygonsToolProperties__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 100;
    *(undefined2 *)&this[1]._padding_ = 0x100;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 2;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
    FName::FName((FName *)&this[1]._padding_,"Default");
    *(undefined8 *)&this[1].CachedPropertiesMap = 0;
    *(undefined8 *)&this[1].CachedPropertiesMap.field_0x8 = 0;
    this[1].CachedPropertiesMap.field_0x10 = 0;
    FString::FString((FString *)&this[1].CachedPropertiesMap.field_0x18,L"polygroups");
  }
  return;
}

// InternalConstructor<UDeleteGeometrySelectionCommand> @ 14cbd4ea0

void __cdecl InternalConstructor<UDeleteGeometrySelectionCommand>(FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand *this;
  
  this = (UGeometrySelectionEditCommand *)param_1->Obj;
  if (this != (UGeometrySelectionEditCommand *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(this,param_1);
    *(undefined ***)this = &___7UDeleteGeometrySelectionCommand__6B_;
  }
  return;
}

// InternalConstructor<UDisconnectGeometrySelectionCommand> @ 14cbd4ed0

void __cdecl InternalConstructor<UDisconnectGeometrySelectionCommand>(FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand *this;
  
  this = (UGeometrySelectionEditCommand *)param_1->Obj;
  if (this != (UGeometrySelectionEditCommand *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(this,param_1);
    *(undefined ***)this = &___7UDisconnectGeometrySelectionCommand__6B_;
  }
  return;
}

// InternalConstructor<UEraseBrushOpProps> @ 14cbd4f00

void __cdecl InternalConstructor<UEraseBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UEraseBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
  }
  return;
}

// InternalConstructor<UEraseSculptLayerBrushOpProps> @ 14cbd4f50

void __cdecl InternalConstructor<UEraseSculptLayerBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UEraseSculptLayerBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
  }
  return;
}

// InternalConstructor<UFixedPlaneBrushOpProps> @ 14cbd4fa0

void __cdecl InternalConstructor<UFixedPlaneBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UFixedPlaneBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UFlattenBrushOpProps> @ 14cbd5000

void __cdecl InternalConstructor<UFlattenBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UFlattenBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UGroupEraseBrushOpProps> @ 14cbd5060

void __cdecl InternalConstructor<UGroupEraseBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UGroupEraseBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].CachedPropertiesMap = 0;
    this[1]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
    this[1]._padding_ = (longlong)UGroupEraseBrushOpProps::<lambda_25_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call
      ;
    }
  }
  return;
}

// InternalConstructor<UGroupPaintBrushOpProps> @ 14cbd50f0

void __cdecl InternalConstructor<UGroupPaintBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UGroupPaintBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UInflateBrushOpProps> @ 14cbd5140

void __cdecl InternalConstructor<UInflateBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UInflateBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
  }
  return;
}

// InternalConstructor<UMeshConstraintProperties> @ 14cbd5190

void __cdecl InternalConstructor<UMeshConstraintProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0x10101;
    this->_padding_ = (longlong)&___7UMeshConstraintProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 5) = 0;
  }
  return;
}

// InternalConstructor<UMeshSculptBrushOpProps> @ 14cbd51d0

void __cdecl InternalConstructor<UMeshSculptBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  }
  return;
}

// InternalConstructor<UModifyGeometrySelectionCommand> @ 14cbd5210

void __cdecl InternalConstructor<UModifyGeometrySelectionCommand>(FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand *this;
  
  this = (UGeometrySelectionEditCommand *)param_1->Obj;
  if (this != (UGeometrySelectionEditCommand *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(this,param_1);
    *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  }
  return;
}

// InternalConstructor<UModifyGeometrySelectionCommand_Contract> @ 14cbd5240

void __cdecl
InternalConstructor<UModifyGeometrySelectionCommand_Contract>(FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand *this;
  
  this = (UGeometrySelectionEditCommand *)param_1->Obj;
  if (this != (UGeometrySelectionEditCommand *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(this,param_1);
    *(undefined ***)this = &___7UModifyGeometrySelectionCommand_Contract__6B_;
  }
  return;
}

// InternalConstructor<UModifyGeometrySelectionCommand_Expand> @ 14cbd5270

void __cdecl
InternalConstructor<UModifyGeometrySelectionCommand_Expand>(FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand *this;
  
  this = (UGeometrySelectionEditCommand *)param_1->Obj;
  if (this != (UGeometrySelectionEditCommand *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(this,param_1);
    *(undefined ***)this = &___7UModifyGeometrySelectionCommand_Expand__6B_;
  }
  return;
}

// InternalConstructor<UModifyGeometrySelectionCommand_ExpandToConnected> @ 14cbd52a0

void __cdecl
InternalConstructor<UModifyGeometrySelectionCommand_ExpandToConnected>(FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand *this;
  
  this = (UGeometrySelectionEditCommand *)param_1->Obj;
  if (this != (UGeometrySelectionEditCommand *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(this,param_1);
    *(undefined ***)this = &___7UModifyGeometrySelectionCommand_ExpandToConnected__6B_;
  }
  return;
}

// InternalConstructor<UModifyGeometrySelectionCommand_Invert> @ 14cbd52d0

void __cdecl
InternalConstructor<UModifyGeometrySelectionCommand_Invert>(FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand *this;
  
  this = (UGeometrySelectionEditCommand *)param_1->Obj;
  if (this != (UGeometrySelectionEditCommand *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(this,param_1);
    *(undefined ***)this = &___7UModifyGeometrySelectionCommand_Invert__6B_;
  }
  return;
}

// InternalConstructor<UModifyGeometrySelectionCommand_InvertConnected> @ 14cbd5300

void __cdecl
InternalConstructor<UModifyGeometrySelectionCommand_InvertConnected>(FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand *this;
  
  this = (UGeometrySelectionEditCommand *)param_1->Obj;
  if (this != (UGeometrySelectionEditCommand *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(this,param_1);
    *(undefined ***)this = &___7UModifyGeometrySelectionCommand_InvertConnected__6B_;
  }
  return;
}

// InternalConstructor<UMoveBrushOpProps> @ 14cbd5330

void __cdecl InternalConstructor<UMoveBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UMoveBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
  }
  return;
}

// InternalConstructor<UPinchBrushOpProps> @ 14cbd5390

void __cdecl InternalConstructor<UPinchBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPinchBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f400000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UPlaneBrushOpProps> @ 14cbd53f0

void __cdecl InternalConstructor<UPlaneBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPlaneBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UPolyEditActivityContext> @ 14cbd5450

void __cdecl InternalConstructor<UPolyEditActivityContext>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPolyEditActivityContext__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 2;
  }
  return;
}

// InternalConstructor<UProceduralArrowToolProperties> @ 14cbd54f0

void __cdecl InternalConstructor<UProceduralArrowToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralArrowToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x41a00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43480000;
    *(undefined4 *)&this[1]._padding_ = 0x42700000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42f00000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UProceduralBoxToolProperties> @ 14cbd5590

void __cdecl InternalConstructor<UProceduralBoxToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralBoxToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UProceduralCapsuleToolProperties> @ 14cbd5630

void __cdecl InternalConstructor<UProceduralCapsuleToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralCapsuleToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x41c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42480000;
    *(undefined4 *)&this[1]._padding_ = 8;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10;
    *(undefined4 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UProceduralConeToolProperties> @ 14cbd56c0

void __cdecl InternalConstructor<UProceduralConeToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralConeToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43480000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UProceduralCylinderToolProperties> @ 14cbd5750

void __cdecl InternalConstructor<UProceduralCylinderToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralCylinderToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43480000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UProceduralDiscToolProperties> @ 14cbd57e0

void __cdecl InternalConstructor<UProceduralDiscToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ = (longlong)&___7UProceduralDiscToolProperties__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42480000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 0x41c80000;
  }
  return;
}

// InternalConstructor<UProceduralRectangleToolProperties> @ 14cbd5870

void __cdecl InternalConstructor<UProceduralRectangleToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ = (longlong)&___7UProceduralRectangleToolProperties__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 0x41c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10;
  }
  return;
}

// InternalConstructor<UProceduralShapeToolProperties> @ 14cbd5920

void __cdecl InternalConstructor<UProceduralShapeToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
  }
  return;
}

// InternalConstructor<UProceduralSphereToolProperties> @ 14cbd5980

void __cdecl InternalConstructor<UProceduralSphereToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralSphereToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10;
    *(undefined4 *)&this[1]._padding_ = 0x10;
  }
  return;
}

// InternalConstructor<UProceduralStairsToolProperties> @ 14cbd5a10

void __cdecl InternalConstructor<UProceduralStairsToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ = (longlong)&___7UProceduralStairsToolProperties__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 8;
    *(undefined4 *)&this[1]._padding_ = 0x43160000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41a00000;
    *(undefined4 *)&this[1]._padding_ = 0x41f00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42b40000;
    *(undefined4 *)&this[1]._padding_ = 0x42b40000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43160000;
  }
  return;
}

// InternalConstructor<UProceduralTorusToolProperties> @ 14cbd5ac0

void __cdecl InternalConstructor<UProceduralTorusToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralTorusToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41c80000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10;
  }
  return;
}

// InternalConstructor<UPullKelvinletBrushOpProps> @ 14cbd5b50

void __cdecl InternalConstructor<UPullKelvinletBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPullKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
    this[1]._padding_ = 0x3dcccccd;
  }
  return;
}

// InternalConstructor<URemeshProperties> @ 14cbd5bb0

void __cdecl InternalConstructor<URemeshProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0x10101;
    this->_padding_ = (longlong)&___7URemeshProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3dcccccd;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
  }
  return;
}

// InternalConstructor<URetriangulateGeometrySelectionCommand> @ 14cbd5c10

void __cdecl
InternalConstructor<URetriangulateGeometrySelectionCommand>(FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand *this;
  
  this = (UGeometrySelectionEditCommand *)param_1->Obj;
  if (this != (UGeometrySelectionEditCommand *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand(this,param_1);
    *(undefined ***)this = &___7URetriangulateGeometrySelectionCommand__6B_;
  }
  return;
}

// InternalConstructor<UScaleKelvinletBrushOpProps> @ 14cbd5c40

void __cdecl InternalConstructor<UScaleKelvinletBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UScaleKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
  }
  return;
}

// InternalConstructor<USculptMaxBrushOpProps> @ 14cbd5cb0

void __cdecl InternalConstructor<USculptMaxBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USculptMaxBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USecondarySmoothBrushOpProps> @ 14cbd5d20

void __cdecl InternalConstructor<USecondarySmoothBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USecondarySmoothBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USharpPullKelvinletBrushOpProps> @ 14cbd5d80

void __cdecl InternalConstructor<USharpPullKelvinletBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USharpPullKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
    this[1]._padding_ = 0x3f000000;
  }
  return;
}

// InternalConstructor<USmoothBrushOpProps> @ 14cbd5de0

void __cdecl InternalConstructor<USmoothBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USmoothBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USmoothFillBrushOpProps> @ 14cbd5e40

void __cdecl InternalConstructor<USmoothFillBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USmoothFillBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UStandardSculptBrushOpProps> @ 14cbd5ea0

void __cdecl InternalConstructor<UStandardSculptBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UStandardSculptBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
  }
  return;
}

// InternalConstructor<UTwistKelvinletBrushOpProps> @ 14cbd5ef0

void __cdecl InternalConstructor<UTwistKelvinletBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UTwistKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
  }
  return;
}

// InternalConstructor<UVertexColorBaseBrushOpProps> @ 14cbd5f60

void __cdecl InternalConstructor<UVertexColorBaseBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UVertexColorBaseBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UVertexColorPaintBrushOpProps> @ 14cbd5fc0

void __cdecl InternalConstructor<UVertexColorPaintBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UVertexColorPaintBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UVertexColorSmoothBrushOpProps> @ 14cbd6020

void __cdecl InternalConstructor<UVertexColorSmoothBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UVertexColorSmoothBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UVertexColorSoftenBrushOpProps> @ 14cbd6080

void __cdecl InternalConstructor<UVertexColorSoftenBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UVertexColorSoftenBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UViewAlignedPlaneBrushOpProps> @ 14cbd60e0

void __cdecl InternalConstructor<UViewAlignedPlaneBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UViewAlignedPlaneBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UViewAlignedSculptBrushOpProps> @ 14cbd6140

void __cdecl InternalConstructor<UViewAlignedSculptBrushOpProps>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UViewAlignedSculptBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAddArrowPrimitiveTool> @ 14cbd6190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddArrowPrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddArrowPrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddArrowPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddArrowPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddArrowPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddArrowPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddArrowPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddBoxPrimitiveTool> @ 14cbd6270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddBoxPrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddBoxPrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddBoxPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddBoxPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddBoxPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddBoxPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddBoxPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddCapsulePrimitiveTool> @ 14cbd6350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddCapsulePrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddCapsulePrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddCapsulePrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddCapsulePrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddCapsulePrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddCapsulePrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddCapsulePrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddConePrimitiveTool> @ 14cbd6430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddConePrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddConePrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddConePrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddConePrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddConePrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddConePrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddConePrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddCylinderPrimitiveTool> @ 14cbd6510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddCylinderPrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddCylinderPrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddCylinderPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddCylinderPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddCylinderPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddCylinderPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddCylinderPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddDiscPrimitiveTool> @ 14cbd65f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddDiscPrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddDiscPrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddDiscPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddDiscPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddDiscPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddDiscPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddDiscPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddPrimitiveTool> @ 14cbd66d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddPrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddPrimitiveTool::GetPrivateStaticClass();
  pUVar3 = (UAddPrimitiveTool *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UAddPrimitiveTool *)0x0) {
    pUVar3 = UAddPrimitiveTool::UAddPrimitiveTool(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddPrimitiveToolBuilder> @ 14cbd6770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddPrimitiveToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddPrimitiveToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UAddPrimitiveToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddRectanglePrimitiveTool> @ 14cbd6820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddRectanglePrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddRectanglePrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddRectanglePrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddRectanglePrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddRectanglePrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddRectanglePrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddRectanglePrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddSpherePrimitiveTool> @ 14cbd6900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddSpherePrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddSpherePrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddSpherePrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddSpherePrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddSpherePrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddSpherePrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddSpherePrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddStairsPrimitiveTool> @ 14cbd69e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddStairsPrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddStairsPrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddStairsPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddStairsPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddStairsPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddStairsPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddStairsPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAddTorusPrimitiveTool> @ 14cbd6ac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAddTorusPrimitiveTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAddPrimitiveTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAddTorusPrimitiveTool::GetPrivateStaticClass();
  this = (UAddPrimitiveTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAddPrimitiveTool *)0x0) {
    UAddPrimitiveTool::UAddPrimitiveTool(this,param_1);
    this->_padding_ = (longlong)&UAddTorusPrimitiveTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAddTorusPrimitiveTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UAddTorusPrimitiveTool::_vftable__for__USingleClickTool__;
    this->_padding_ = (longlong)&UAddTorusPrimitiveTool::_vftable__for__IHoverBehaviorTarget__;
    this->_padding_ =
         (longlong)&UAddTorusPrimitiveTool::_vftable__for__IInteractiveToolCameraFocusAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBaseKelvinletBrushOpProps> @ 14cbd6ba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBaseKelvinletBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBaseKelvinletBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UBaseKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBasePlaneBrushOpProps> @ 14cbd6c70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBasePlaneBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBasePlaneBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UBasePlaneBrushOpProps__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBaseSmoothBrushOpProps> @ 14cbd6d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBaseSmoothBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBaseSmoothBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UBaseSmoothBrushOpProps__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCombineMeshesTool> @ 14cbd6df0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCombineMeshesTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMultiSelectionMeshEditingTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCombineMeshesTool::GetPrivateStaticClass();
  this = (UMultiSelectionMeshEditingTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMultiSelectionMeshEditingTool *)0x0) {
    UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UCombineMeshesTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCombineMeshesTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UCombineMeshesTool::_vftable__for__UMultiSelectionMeshEditingTool__
    ;
    this[1]._padding_ =
         (longlong)&UCombineMeshesTool::_vftable__for__IInteractiveToolExclusiveToolAPI__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCombineMeshesToolBuilder> @ 14cbd6ee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCombineMeshesToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCombineMeshesToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
              ((UMultiSelectionMeshEditingToolBuilder *)pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UCombineMeshesToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCombineMeshesToolProperties> @ 14cbd6f90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCombineMeshesToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCombineMeshesToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UCombineMeshesToolProperties__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConvertToPolygonsOperatorFactory> @ 14cbd7070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UConvertToPolygonsOperatorFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConvertToPolygonsOperatorFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UConvertToPolygonsOperatorFactory::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UConvertToPolygonsOperatorFactory::
          _vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConvertToPolygonsTool> @ 14cbd7130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UConvertToPolygonsTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USingleTargetWithSelectionTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConvertToPolygonsTool::GetPrivateStaticClass();
  this = (USingleTargetWithSelectionTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USingleTargetWithSelectionTool *)0x0) {
    USingleTargetWithSelectionTool::USingleTargetWithSelectionTool(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UConvertToPolygonsTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UConvertToPolygonsTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&___7UConvertToPolygonsTool__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConvertToPolygonsToolBuilder> @ 14cbd7280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UConvertToPolygonsToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConvertToPolygonsToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
              ((USingleTargetWithSelectionToolBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UConvertToPolygonsToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConvertToPolygonsToolProperties> @ 14cbd7330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UConvertToPolygonsToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConvertToPolygonsToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UConvertToPolygonsToolProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3dcccccd;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 100;
    *(undefined2 *)&this[1]._padding_ = 0x100;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 2;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
    FName::FName((FName *)&this[1]._padding_,"Default");
    *(undefined8 *)&this[1].CachedPropertiesMap = 0;
    *(undefined8 *)&this[1].CachedPropertiesMap.field_0x8 = 0;
    this[1].CachedPropertiesMap.field_0x10 = 0;
    FString::FString((FString *)&this[1].CachedPropertiesMap.field_0x18,L"polygroups");
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDeleteGeometrySelectionCommand> @ 14cbd7490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDeleteGeometrySelectionCommand>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDeleteGeometrySelectionCommand::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
              ((UGeometrySelectionEditCommand *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDeleteGeometrySelectionCommand__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDisconnectGeometrySelectionCommand> @ 14cbd7540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDisconnectGeometrySelectionCommand>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDisconnectGeometrySelectionCommand::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
              ((UGeometrySelectionEditCommand *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDisconnectGeometrySelectionCommand__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEraseBrushOpProps> @ 14cbd75f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEraseBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEraseBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UEraseBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEraseSculptLayerBrushOpProps> @ 14cbd76c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEraseSculptLayerBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEraseSculptLayerBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UEraseSculptLayerBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFixedPlaneBrushOpProps> @ 14cbd7790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFixedPlaneBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFixedPlaneBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UFixedPlaneBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFlattenBrushOpProps> @ 14cbd7860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFlattenBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFlattenBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UFlattenBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGroupEraseBrushOpProps> @ 14cbd7930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGroupEraseBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGroupEraseBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UGroupEraseBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].CachedPropertiesMap = 0;
    this[1]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
    this[1]._padding_ = (longlong)UGroupEraseBrushOpProps::<lambda_25_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call
      ;
    }
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGroupPaintBrushOpProps> @ 14cbd7a30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGroupPaintBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGroupPaintBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UGroupPaintBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInflateBrushOpProps> @ 14cbd7b00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInflateBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInflateBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UInflateBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshConstraintProperties> @ 14cbd7bd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeshConstraintProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshConstraintProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0x10101;
    this->_padding_ = (longlong)&___7UMeshConstraintProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 5) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshSculptBrushOpProps> @ 14cbd7c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeshSculptBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshSculptBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand> @ 14cbd7d50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModifyGeometrySelectionCommand::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
              ((UGeometrySelectionEditCommand *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModifyGeometrySelectionCommand__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Contract> @ 14cbd7e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Contract>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModifyGeometrySelectionCommand_Contract::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
              ((UGeometrySelectionEditCommand *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModifyGeometrySelectionCommand_Contract__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Expand> @ 14cbd7eb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Expand>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModifyGeometrySelectionCommand_Expand::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
              ((UGeometrySelectionEditCommand *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModifyGeometrySelectionCommand_Expand__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_ExpandToConnected> @ 14cbd7f60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_ExpandToConnected>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModifyGeometrySelectionCommand_ExpandToConnected::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
              ((UGeometrySelectionEditCommand *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModifyGeometrySelectionCommand_ExpandToConnected__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Invert> @ 14cbd8010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Invert>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModifyGeometrySelectionCommand_Invert::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
              ((UGeometrySelectionEditCommand *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModifyGeometrySelectionCommand_Invert__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_InvertConnected> @ 14cbd80c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_InvertConnected>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModifyGeometrySelectionCommand_InvertConnected::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
              ((UGeometrySelectionEditCommand *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModifyGeometrySelectionCommand_InvertConnected__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoveBrushOpProps> @ 14cbd8170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoveBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoveBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UMoveBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPinchBrushOpProps> @ 14cbd8250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPinchBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPinchBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPinchBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f400000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPlaneBrushOpProps> @ 14cbd8320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPlaneBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPlaneBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPlaneBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditActivityContext> @ 14cbd83f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPolyEditActivityContext>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditActivityContext::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[2].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UPolyEditActivityContext__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralArrowToolProperties> @ 14cbd8510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralArrowToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralArrowToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralArrowToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x41a00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43480000;
    *(undefined4 *)&this[1]._padding_ = 0x42700000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42f00000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralBoxToolProperties> @ 14cbd8620

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralBoxToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralBoxToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralBoxToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralCapsuleToolProperties> @ 14cbd8730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralCapsuleToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralCapsuleToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralCapsuleToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x41c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42480000;
    *(undefined4 *)&this[1]._padding_ = 8;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10;
    *(undefined4 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralConeToolProperties> @ 14cbd8840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralConeToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralConeToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralConeToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43480000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralCylinderToolProperties> @ 14cbd8940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralCylinderToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralCylinderToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralCylinderToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43480000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralDiscToolProperties> @ 14cbd8a40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralDiscToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralDiscToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralDiscToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42480000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 0x41c80000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralRectangleToolProperties> @ 14cbd8b40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralRectangleToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralRectangleToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralRectangleToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 0x41c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralShapeToolProperties> @ 14cbd8c60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralShapeToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralShapeToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralSphereToolProperties> @ 14cbd8d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralSphereToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralSphereToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralSphereToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralStairsToolProperties> @ 14cbd8e40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralStairsToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralStairsToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralStairsToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 8;
    *(undefined4 *)&this[1]._padding_ = 0x43160000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41a00000;
    *(undefined4 *)&this[1]._padding_ = 0x41f00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42b40000;
    *(undefined4 *)&this[1]._padding_ = 0x42b40000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43160000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralTorusToolProperties> @ 14cbd8f60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UProceduralTorusToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralTorusToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UProceduralTorusToolProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41c80000;
    *(undefined4 *)&this[1]._padding_ = 0x10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x10;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPullKelvinletBrushOpProps> @ 14cbd9060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPullKelvinletBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPullKelvinletBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPullKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
    this[1]._padding_ = 0x3dcccccd;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URemeshProperties> @ 14cbd9140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URemeshProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URemeshProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0x10101;
    this->_padding_ = (longlong)&___7URemeshProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 5) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3dcccccd;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URetriangulateGeometrySelectionCommand> @ 14cbd9220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URetriangulateGeometrySelectionCommand>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URetriangulateGeometrySelectionCommand::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
              ((UGeometrySelectionEditCommand *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URetriangulateGeometrySelectionCommand__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UScaleKelvinletBrushOpProps> @ 14cbd92d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UScaleKelvinletBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UScaleKelvinletBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UScaleKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USculptMaxBrushOpProps> @ 14cbd93c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USculptMaxBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USculptMaxBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USculptMaxBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USecondarySmoothBrushOpProps> @ 14cbd94a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USecondarySmoothBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USecondarySmoothBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USecondarySmoothBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USharpPullKelvinletBrushOpProps> @ 14cbd9570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USharpPullKelvinletBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USharpPullKelvinletBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USharpPullKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
    this[1]._padding_ = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USmoothBrushOpProps> @ 14cbd9650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USmoothBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USmoothBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USmoothBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USmoothFillBrushOpProps> @ 14cbd9720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USmoothFillBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USmoothFillBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7USmoothFillBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStandardSculptBrushOpProps> @ 14cbd97f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UStandardSculptBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStandardSculptBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UStandardSculptBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTwistKelvinletBrushOpProps> @ 14cbd98c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTwistKelvinletBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTwistKelvinletBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UTwistKelvinletBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 3;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVertexColorBaseBrushOpProps> @ 14cbd99b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UVertexColorBaseBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVertexColorBaseBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UVertexColorBaseBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVertexColorPaintBrushOpProps> @ 14cbd9a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UVertexColorPaintBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVertexColorPaintBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UVertexColorPaintBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVertexColorSmoothBrushOpProps> @ 14cbd9b70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UVertexColorSmoothBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVertexColorSmoothBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UVertexColorSmoothBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVertexColorSoftenBrushOpProps> @ 14cbd9c50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UVertexColorSoftenBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVertexColorSoftenBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UVertexColorSoftenBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UViewAlignedPlaneBrushOpProps> @ 14cbd9d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UViewAlignedPlaneBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UViewAlignedPlaneBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UViewAlignedPlaneBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UViewAlignedSculptBrushOpProps> @ 14cbd9e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UViewAlignedSculptBrushOpProps>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UViewAlignedSculptBrushOpProps::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UViewAlignedSculptBrushOpProps__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UAddArrowPrimitiveTool> @ 14cbd9ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddArrowPrimitiveTool * __cdecl NewObject<UAddArrowPrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddArrowPrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddArrowPrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddArrowPrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAddBoxPrimitiveTool> @ 14cbd9f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddBoxPrimitiveTool * __cdecl NewObject<UAddBoxPrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddBoxPrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddBoxPrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddBoxPrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAddCapsulePrimitiveTool> @ 14cbda010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddCapsulePrimitiveTool * __cdecl NewObject<UAddCapsulePrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddCapsulePrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddCapsulePrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddCapsulePrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAddConePrimitiveTool> @ 14cbda0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddConePrimitiveTool * __cdecl NewObject<UAddConePrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddConePrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddConePrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddConePrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAddCylinderPrimitiveTool> @ 14cbda150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddCylinderPrimitiveTool * __cdecl NewObject<UAddCylinderPrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddCylinderPrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddCylinderPrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddCylinderPrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAddDiscPrimitiveTool> @ 14cbda1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddDiscPrimitiveTool * __cdecl NewObject<UAddDiscPrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddDiscPrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddDiscPrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddDiscPrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAddRectanglePrimitiveTool> @ 14cbda290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddRectanglePrimitiveTool * __cdecl NewObject<UAddRectanglePrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddRectanglePrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddRectanglePrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddRectanglePrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAddSpherePrimitiveTool> @ 14cbda330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddSpherePrimitiveTool * __cdecl NewObject<UAddSpherePrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddSpherePrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddSpherePrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddSpherePrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAddStairsPrimitiveTool> @ 14cbda3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddStairsPrimitiveTool * __cdecl NewObject<UAddStairsPrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddStairsPrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddStairsPrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddStairsPrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAddTorusPrimitiveTool> @ 14cbda470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAddTorusPrimitiveTool * __cdecl NewObject<UAddTorusPrimitiveTool>(UObject *param_1)

{
  UClass *pUVar1;
  UAddTorusPrimitiveTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAddTorusPrimitiveTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAddTorusPrimitiveTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCombineMeshesTool> @ 14cbda510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCombineMeshesTool * __cdecl NewObject<UCombineMeshesTool>(UObject *param_1)

{
  UClass *pUVar1;
  UCombineMeshesTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCombineMeshesTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCombineMeshesTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCombineMeshesToolProperties> @ 14cbda5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCombineMeshesToolProperties * __cdecl NewObject<UCombineMeshesToolProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UCombineMeshesToolProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCombineMeshesToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCombineMeshesToolProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UConvertToPolygonsOperatorFactory> @ 14cbda650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UConvertToPolygonsOperatorFactory * __cdecl
NewObject<UConvertToPolygonsOperatorFactory>(UObject *param_1)

{
  UClass *pUVar1;
  UConvertToPolygonsOperatorFactory *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UConvertToPolygonsOperatorFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UConvertToPolygonsOperatorFactory *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UConvertToPolygonsTool> @ 14cbda6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UConvertToPolygonsTool * __cdecl NewObject<UConvertToPolygonsTool>(UObject *param_1)

{
  UClass *pUVar1;
  UConvertToPolygonsTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UConvertToPolygonsTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UConvertToPolygonsTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UConvertToPolygonsToolProperties> @ 14cbda790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UConvertToPolygonsToolProperties * __cdecl
NewObject<UConvertToPolygonsToolProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UConvertToPolygonsToolProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UConvertToPolygonsToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UConvertToPolygonsToolProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDragAlignmentMechanic> @ 14cbda830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDragAlignmentMechanic * __cdecl NewObject<UDragAlignmentMechanic>(UObject *param_1)

{
  UClass *pUVar1;
  UDragAlignmentMechanic *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDragAlignmentMechanic *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGeometrySelectionEditCommandResult> @ 14cbda8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGeometrySelectionEditCommandResult * __cdecl
NewObject<UGeometrySelectionEditCommandResult>(UObject *param_1)

{
  UClass *pUVar1;
  UGeometrySelectionEditCommandResult *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UGeometrySelectionEditCommandResult_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGeometrySelectionEditCommandResult *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGeometrySelectionVisualizationProperties> @ 14cbda970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGeometrySelectionVisualizationProperties * __cdecl
NewObject<UGeometrySelectionVisualizationProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UGeometrySelectionVisualizationProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGeometrySelectionVisualizationProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNewMeshMaterialProperties> @ 14cbdaa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNewMeshMaterialProperties * __cdecl NewObject<UNewMeshMaterialProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UNewMeshMaterialProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNewMeshMaterialProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UOnAcceptHandleSourcesProperties> @ 14cbdaab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOnAcceptHandleSourcesProperties * __cdecl
NewObject<UOnAcceptHandleSourcesProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UOnAcceptHandleSourcesProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UOnAcceptHandleSourcesProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UOnAcceptHandleSourcesPropertiesSingle> @ 14cbdab50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOnAcceptHandleSourcesPropertiesSingle * __cdecl
NewObject<UOnAcceptHandleSourcesPropertiesSingle>(UObject *param_1)

{
  UClass *pUVar1;
  UOnAcceptHandleSourcesPropertiesSingle *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UOnAcceptHandleSourcesPropertiesSingle *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPolygroupLayersProperties> @ 14cbdabf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolygroupLayersProperties * __cdecl NewObject<UPolygroupLayersProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UPolygroupLayersProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolygroupLayersProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EConvertToPolygonsMode> @ 14cbdaee0

UEnum * __cdecl StaticEnum<enum_EConvertToPolygonsMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EConvertToPolygonsMode,(UObject *)pUVar1,
                       L"EConvertToPolygonsMode");
  }
  return Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton;
}

// StaticEnum<enum_EGroupBoundaryConstraint> @ 14cbdaf20

UEnum * __cdecl StaticEnum<enum_EGroupBoundaryConstraint>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EGroupBoundaryConstraint,
                       (UObject *)pUVar1,L"EGroupBoundaryConstraint");
  }
  return Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton;
}

// StaticEnum<enum_EMakeMeshPivotLocation> @ 14cbdaf60

UEnum * __cdecl StaticEnum<enum_EMakeMeshPivotLocation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMakeMeshPivotLocation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMakeMeshPivotLocation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMakeMeshPivotLocation,(UObject *)pUVar1,
                       L"EMakeMeshPivotLocation");
  }
  return Z_Registration_Info_UEnum_EMakeMeshPivotLocation.OuterSingleton;
}

// StaticEnum<enum_EMakeMeshPlacementType> @ 14cbdafa0

UEnum * __cdecl StaticEnum<enum_EMakeMeshPlacementType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMakeMeshPlacementType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMakeMeshPlacementType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMakeMeshPlacementType,(UObject *)pUVar1,
                       L"EMakeMeshPlacementType");
  }
  return Z_Registration_Info_UEnum_EMakeMeshPlacementType.OuterSingleton;
}

// StaticEnum<enum_EMakeMeshPolygroupMode> @ 14cbdafe0

UEnum * __cdecl StaticEnum<enum_EMakeMeshPolygroupMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMakeMeshPolygroupMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMakeMeshPolygroupMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMakeMeshPolygroupMode,(UObject *)pUVar1,
                       L"EMakeMeshPolygroupMode");
  }
  return Z_Registration_Info_UEnum_EMakeMeshPolygroupMode.OuterSingleton;
}

// StaticEnum<enum_EMaterialBoundaryConstraint> @ 14cbdb020

UEnum * __cdecl StaticEnum<enum_EMaterialBoundaryConstraint>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMaterialBoundaryConstraint,
                       (UObject *)pUVar1,L"EMaterialBoundaryConstraint");
  }
  return Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton;
}

// StaticEnum<enum_EMeshBoundaryConstraint> @ 14cbdb060

UEnum * __cdecl StaticEnum<enum_EMeshBoundaryConstraint>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMeshBoundaryConstraint,(UObject *)pUVar1
                       ,L"EMeshBoundaryConstraint");
  }
  return Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton;
}

// StaticEnum<enum_EMeshSculptStrokeType> @ 14cbdb0a0

UEnum * __cdecl StaticEnum<enum_EMeshSculptStrokeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshSculptStrokeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EMeshSculptStrokeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMeshSculptStrokeType,(UObject *)pUVar1,
                       L"EMeshSculptStrokeType");
  }
  return Z_Registration_Info_UEnum_EMeshSculptStrokeType.OuterSingleton;
}

// StaticEnum<enum_EPlaneBrushSideMode> @ 14cbdb0e0

UEnum * __cdecl StaticEnum<enum_EPlaneBrushSideMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPlaneBrushSideMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPlaneBrushSideMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPlaneBrushSideMode,(UObject *)pUVar1,
                       L"EPlaneBrushSideMode");
  }
  return Z_Registration_Info_UEnum_EPlaneBrushSideMode.OuterSingleton;
}

// StaticEnum<enum_EProceduralDiscType> @ 14cbdb120

UEnum * __cdecl StaticEnum<enum_EProceduralDiscType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProceduralDiscType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EProceduralDiscType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EProceduralDiscType,(UObject *)pUVar1,
                       L"EProceduralDiscType");
  }
  return Z_Registration_Info_UEnum_EProceduralDiscType.OuterSingleton;
}

// StaticEnum<enum_EProceduralRectType> @ 14cbdb160

UEnum * __cdecl StaticEnum<enum_EProceduralRectType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProceduralRectType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EProceduralRectType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EProceduralRectType,(UObject *)pUVar1,
                       L"EProceduralRectType");
  }
  return Z_Registration_Info_UEnum_EProceduralRectType.OuterSingleton;
}

// StaticEnum<enum_EProceduralSphereType> @ 14cbdb1a0

UEnum * __cdecl StaticEnum<enum_EProceduralSphereType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProceduralSphereType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EProceduralSphereType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EProceduralSphereType,(UObject *)pUVar1,
                       L"EProceduralSphereType");
  }
  return Z_Registration_Info_UEnum_EProceduralSphereType.OuterSingleton;
}

// StaticEnum<enum_EProceduralStairsType> @ 14cbdb1e0

UEnum * __cdecl StaticEnum<enum_EProceduralStairsType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProceduralStairsType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EProceduralStairsType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EProceduralStairsType,(UObject *)pUVar1,
                       L"EProceduralStairsType");
  }
  return Z_Registration_Info_UEnum_EProceduralStairsType.OuterSingleton;
}

// StaticEnum<enum_EVertexColorPaintBrushOpBlendMode> @ 14cbdb220

UEnum * __cdecl StaticEnum<enum_EVertexColorPaintBrushOpBlendMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EVertexColorPaintBrushOpBlendMode,
                       (UObject *)pUVar1,L"EVertexColorPaintBrushOpBlendMode");
  }
  return Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.OuterSingleton;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_10>,0,0> @ 14cbdf780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_10>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_10>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_10>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_11>,0,0> @ 14cbdf7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_11>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_11>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_11>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_12>,0,0> @ 14cbdf7c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_12>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_12>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_12>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_13>,0,0> @ 14cbdf7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_13>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_13>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_13>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_14>,0,0> @ 14cbdf800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_14>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_14>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_14>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_15>,0,0> @ 14cbdf820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_15>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_15>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_15>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_16>,0,0> @ 14cbdf840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_16>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_16>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_16>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_17>,0,0> @ 14cbdf860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_17>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_17>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_17>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_18>,0,0> @ 14cbdf880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_18>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_18>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_18>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_19>,0,0> @ 14cbdf8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_19>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_19>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_19>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::__l2::<lambda_1>,0,0> @ 14cbdf8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UAddDiscPrimitiveTool::Setup_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::__l2::<lambda_1>,0,0> @ 14cbdf8e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::__l2::<lambda_1>,0,0>
::~TFunction_OwnedObject<_UAddPrimitiveTool::Setup_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UCombineMeshesTool::Setup'::__l2::<lambda_1>,0,0> @ 14cbdf900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCombineMeshesTool::Setup'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UCombineMeshesTool::Setup_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCombineMeshesTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::UpdateVisualization'::__l8::<lambda_1>,0,0> @ 14cbdf920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::UpdateVisualization'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::UpdateVisualization_::__l8::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::UpdateVisualization'::`8'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::__l36::<lambda_1>,0,0> @ 14cbdf940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::__l36::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UCombineMeshesTool::CreateNewAsset_::__l36::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::`36'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::__l2::<lambda_2>,0,0> @ 14cbdf960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UAddDiscPrimitiveTool::Setup_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::__l2::<lambda_2>,0,0> @ 14cbdf980

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::__l2::<lambda_2>,0,0>
::~TFunction_OwnedObject<_UAddPrimitiveTool::Setup_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UCombineMeshesTool::Setup'::__l2::<lambda_2>,0,0> @ 14cbdf9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCombineMeshesTool::Setup'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UCombineMeshesTool::Setup_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCombineMeshesTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,0> @ 14cbdf9c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__UDeleteGeometrySelectionCommand::ExecuteCommandForSelection_::__l2::<lambda_1>::operator()_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::__l36::<lambda_2>,0,0> @ 14cbdf9e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::__l36::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UCombineMeshesTool::CreateNewAsset_::__l36::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::`36'::<lambda_2>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l14::<lambda_3>,1,0> @ 14cbdfa00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l14::<lambda_3>,1,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l14::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`14'::<lambda_3>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::<lambda_45_>,0,0> @ 14cbdfa20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::<lambda_45_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>_::__l1::<lambda_45_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_45_>__0_____0VFString__X___TPropertyWatcher_VFString___FWatchablePropertySet__QEAA_AEBVFString__V__TFunction___A6AXAEBVFString___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void>'::__l1::<lambda_47_>,0,0> @ 14cbdfa40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void>'::__l1::<lambda_47_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void>_::__l1::<lambda_47_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_47_>__0_____0W4EMakeMeshPlacementType__X___TPropertyWatcher_W4EMakeMeshPlacementType___FWatchablePropertySet__QEAA_AEBW4EMakeMeshPlacementType__V__TFunction___A6AXAEBW4EMakeMeshPlacementType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::<lambda_49_>,0,0> @ 14cbdfa60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::<lambda_49_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>_::__l1::<lambda_49_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_49_>__0_____0MX___TPropertyWatcher_M_FWatchablePropertySet__QEAA_AEBMV__TFunction___A6AXAEBM_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_4>,0,0> @ 14cbdfa80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>'::__l1::<lambda_51_>,0,0> @ 14cbdfaa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>'::__l1::<lambda_51_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>_::__l1::<lambda_51_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_51_>__0_____0W4EBaseCreateFromSelectedTargetType__X___TPropertyWatcher_W4EBaseCreateFromSelectedTargetType___FWatchablePropertySet__QEAA_AEBW4EBaseCreateFromSelectedTargetType__V__TFunction___A6AXAEBW4EBaseCreateFromSelectedTargetType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void>'::__l1::<lambda_53_>,0,0> @ 14cbdfac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void>'::__l1::<lambda_53_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void>_::__l1::<lambda_53_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_53_>__0_____0W4EConvertToPolygonsMode__X___TPropertyWatcher_W4EConvertToPolygonsMode___FWatchablePropertySet__QEAA_AEBW4EConvertToPolygonsMode__V__TFunction___A6AXAEBW4EConvertToPolygonsMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_55_>,0,0> @ 14cbdfae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_55_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>_::__l1::<lambda_55_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_55_>__0_____0_NX___TPropertyWatcher__N_FWatchablePropertySet__QEAA_AEB_NV__TFunction___A6AXAEB_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_57_>,0,0> @ 14cbdfb00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_57_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>_::__l1::<lambda_57_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_57_>__0_____0HX___TPropertyWatcher_H_FWatchablePropertySet__QEAA_AEBHV__TFunction___A6AXAEBH_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>'::__l1::<lambda_59_>,0,0> @ 14cbdfb20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>'::__l1::<lambda_59_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>_::__l1::<lambda_59_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_59_>__0_____0VFName__X___TPropertyWatcher_VFName___FWatchablePropertySet__QEAA_AEBVFName__V__TFunction___A6AXAEBVFName___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_5>,0,0> @ 14cbdfb40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_6>,0,0> @ 14cbdfb60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_7>,0,0> @ 14cbdfb80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_7>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_7>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_8>,0,0> @ 14cbdfba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_8>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_8>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_9>,0,0> @ 14cbdfbc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_9>,0,0>::
~TFunction_OwnedObject<_UConvertToPolygonsTool::Setup_::__l2::<lambda_9>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  return;
}

// operator() @ 14cbe0ac0

void __thiscall
``UConvertToPolygonsTool::UpdateVisualization'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
operator()(void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar11 = *(longlong *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar11 + 0x1c0)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar2 + 0x10);
  uVar8 = *(uint *)(*(longlong *)(lVar11 + 0x1b8) + (longlong)param_1 * 4);
  uVar4 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(uVar8 >> 9) * 8) +
           (ulonglong)(uVar8 & 0x1ff) * 0x10);
  uStack_14 = **(undefined4 **)((longlong)this + 0x18);
  uVar10 = (ulonglong)((uint)uVar4 & 0x1ff);
  lVar11 = *(longlong *)(lVar3 + ((uVar4 & 0xffffffff) >> 9) * 8);
  puVar1 = (undefined8 *)(lVar11 + uVar10 * 0x18);
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  local_38 = *(undefined8 *)(lVar11 + 0x10 + uVar10 * 0x18);
  pFVar5 = (param_2->AllocatorInstance).Data;
  uVar10 = (ulonglong)((uint)(uVar4 >> 0x20) & 0x1ff);
  lVar11 = *(longlong *)(lVar3 + (uVar4 >> 0x29) * 8);
  puVar1 = (undefined8 *)(lVar11 + uVar10 * 0x18);
  uStack_30 = *puVar1;
  uStack_28 = puVar1[1];
  uStack_20 = *(undefined8 *)(lVar11 + 0x10 + uVar10 * 0x18);
  local_18 = **(undefined4 **)((longlong)this + 0x10);
  uStack_10 = 0;
  if ((pFVar5 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)param_2->ArrayMax * 0x40)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = param_2->ArrayNum;
  if (iVar9 == param_2->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar9 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data;
  lVar11 = (longlong)iVar9 * 0x40;
  *(undefined8 *)(pFVar5 + lVar11) = local_48;
  *(undefined8 *)(pFVar5 + lVar11 + 8) = uStack_40;
  *(undefined8 *)(pFVar5 + lVar11 + 0x10) = local_38;
  *(undefined8 *)(pFVar5 + lVar11 + 0x10 + 8) = uStack_30;
  *(undefined8 *)(pFVar5 + lVar11 + 0x20) = uStack_28;
  *(undefined8 *)(pFVar5 + lVar11 + 0x20 + 8) = uStack_20;
  *(ulonglong *)(pFVar5 + lVar11 + 0x30) = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar5 + lVar11 + 0x30 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// operator() @ 14cbe3060

bool __thiscall
``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()'::__l5
::<lambda_2>::operator()(void *this,int param_1,int param_2)

{
  FDynamicMesh3 *this_00;
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  
  this_00 = *(FDynamicMesh3 **)this;
  iVar3 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(this_00,param_1);
  iVar4 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(this_00,param_2);
  if (iVar3 == iVar4) {
LAB_14cbe30fa:
    bVar2 = true;
  }
  else {
    plVar1 = *(longlong **)((longlong)this + 8);
    uVar5 = UE::Geometry::FDynamicMesh3::FindEdgeFromTriPair
                      (*(FDynamicMesh3 **)this,param_1,param_2);
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar6 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar6 = plVar1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar1[9] - 1U & uVar5) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*plVar1 + (longlong)iVar3 * 0xc) == uVar5) goto LAB_14cbe30fa;
          iVar3 = *(int *)(*plVar1 + 4 + (longlong)iVar3 * 0xc);
        } while (iVar3 != -1);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe3384

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddArrowPrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddArrowPrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddArrowPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddArrowPrimitiveTool *)&this[-1].field_0x138,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe3394

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddArrowPrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddArrowPrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddArrowPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddArrowPrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe33a8

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddArrowPrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddArrowPrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddArrowPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddArrowPrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe33bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddArrowPrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddArrowPrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddArrowPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddArrowPrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe33d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddBoxPrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddBoxPrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddBoxPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddBoxPrimitiveTool *)&this[-1].field_0x138,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe33e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddBoxPrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddBoxPrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddBoxPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddBoxPrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe33f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddBoxPrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddBoxPrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddBoxPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddBoxPrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe3408

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddBoxPrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddBoxPrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddBoxPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddBoxPrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe341c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddCapsulePrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddCapsulePrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddCapsulePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddCapsulePrimitiveTool *)&this[-1].field_0x138,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe342c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddCapsulePrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddCapsulePrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddCapsulePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddCapsulePrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe3440

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddCapsulePrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddCapsulePrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddCapsulePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddCapsulePrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe3454

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddCapsulePrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddCapsulePrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddCapsulePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddCapsulePrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe3468

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddConePrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddConePrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddConePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddConePrimitiveTool *)&this[-1].field_0x138,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe3478

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddConePrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddConePrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddConePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddConePrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe348c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddConePrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddConePrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddConePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddConePrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe34a0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddConePrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddConePrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddConePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddConePrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe34b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddCylinderPrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddCylinderPrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddCylinderPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddCylinderPrimitiveTool *)&this[-1].field_0x138,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe34c4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddCylinderPrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddCylinderPrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddCylinderPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddCylinderPrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe34d8

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddCylinderPrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddCylinderPrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddCylinderPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddCylinderPrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe34ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddCylinderPrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddCylinderPrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddCylinderPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddCylinderPrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe3500

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddDiscPrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddDiscPrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddDiscPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddDiscPrimitiveTool *)&this[-1].field_0x138,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe3510

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddDiscPrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddDiscPrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddDiscPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddDiscPrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe3524

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddDiscPrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddDiscPrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddDiscPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddDiscPrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe3538

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddDiscPrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddDiscPrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddDiscPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddDiscPrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe354c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAddPrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddPrimitiveTool::_vector_deleting_destructor__adjustor_40__(UAddPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAddPrimitiveTool *)((longlong)&this[-1].ShapeFrame.Origin.field0_0x0 + 0x10)
                      ,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe355c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAddPrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddPrimitiveTool::_vector_deleting_destructor__adjustor_192__(UAddPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddPrimitiveTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe3570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAddPrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddPrimitiveTool::_vector_deleting_destructor__adjustor_200__(UAddPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddPrimitiveTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe3584

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAddPrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddPrimitiveTool::_vector_deleting_destructor__adjustor_208__(UAddPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddPrimitiveTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe3598

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddRectanglePrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddRectanglePrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddRectanglePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddRectanglePrimitiveTool *)&this[-1].field_0x138,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe35a8

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddRectanglePrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddRectanglePrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddRectanglePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddRectanglePrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe35bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddRectanglePrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddRectanglePrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddRectanglePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddRectanglePrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe35d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddRectanglePrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddRectanglePrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddRectanglePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddRectanglePrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe35e4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddSpherePrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddSpherePrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddSpherePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddSpherePrimitiveTool *)&this[-1].field_0x138,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe35f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddSpherePrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddSpherePrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddSpherePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddSpherePrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe3608

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddSpherePrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddSpherePrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddSpherePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddSpherePrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe361c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddSpherePrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddSpherePrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddSpherePrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddSpherePrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe3630

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddStairsPrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddStairsPrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddStairsPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddStairsPrimitiveTool *)&this[-1].field_0x138,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe3640

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddStairsPrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddStairsPrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddStairsPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddStairsPrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe3654

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddStairsPrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddStairsPrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddStairsPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddStairsPrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe3668

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddStairsPrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddStairsPrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddStairsPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddStairsPrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe367c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddTorusPrimitiveTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAddTorusPrimitiveTool::_vector_deleting_destructor__adjustor_40__
          (UAddTorusPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddTorusPrimitiveTool *)&this[-1].field_0x138,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe368c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddTorusPrimitiveTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UAddTorusPrimitiveTool::_vector_deleting_destructor__adjustor_192__
          (UAddTorusPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddTorusPrimitiveTool *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14cbe36a0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddTorusPrimitiveTool::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAddTorusPrimitiveTool::_vector_deleting_destructor__adjustor_200__
          (UAddTorusPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddTorusPrimitiveTool *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14cbe36b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAddTorusPrimitiveTool::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAddTorusPrimitiveTool::_vector_deleting_destructor__adjustor_208__
          (UAddTorusPrimitiveTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAddTorusPrimitiveTool *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe36c8

/* [thunk]:public: virtual void * __ptr64 __cdecl UCombineMeshesTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCombineMeshesTool::_vector_deleting_destructor__adjustor_40__
          (UCombineMeshesTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCombineMeshesTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe36d8

/* [thunk]:public: virtual void * __ptr64 __cdecl UCombineMeshesTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UCombineMeshesTool::_vector_deleting_destructor__adjustor_192__
          (UCombineMeshesTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCombineMeshesTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cbe36ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UCombineMeshesTool::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UCombineMeshesTool::_vector_deleting_destructor__adjustor_224__
          (UCombineMeshesTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCombineMeshesTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe3700

/* [thunk]:public: virtual void * __ptr64 __cdecl UConvertToPolygonsOperatorFactory::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UConvertToPolygonsOperatorFactory::_vector_deleting_destructor__adjustor_40__
          (UConvertToPolygonsOperatorFactory *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UConvertToPolygonsOperatorFactory *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cbe3710

/* [thunk]:public: virtual void * __ptr64 __cdecl UConvertToPolygonsTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UConvertToPolygonsTool::_vector_deleting_destructor__adjustor_40__
          (UConvertToPolygonsTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UConvertToPolygonsTool *)
                      &this[-1].ComputeOperatorSharedMesh.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cbe3720

/* [thunk]:public: virtual void * __ptr64 __cdecl UConvertToPolygonsTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UConvertToPolygonsTool::_vector_deleting_destructor__adjustor_192__
          (UConvertToPolygonsTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UConvertToPolygonsTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cbe3740

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3770

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe37a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe37d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(int_const_&,int_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(int_const_&,int_const_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NAEBH0_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EConvertToPolygonsMode_const_&,enum_EConvertToPolygonsMode_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EConvertToPolygonsMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EMakeMeshPlacementType_const_&,enum_EMakeMeshPlacementType_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EMakeMeshPlacementType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_10>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_10>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe38d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_11>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_11>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_12>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_12>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_13>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_13>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_14>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_14>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe39d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_15>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_15>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_16>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_16>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_17>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_17>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_18>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_18>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_19>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_19>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3b50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCombineMeshesTool::Setup'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCombineMeshesTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::UpdateVisualization'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::UpdateVisualization'::`8'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::__l36::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::`36'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3c90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCombineMeshesTool::Setup'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCombineMeshesTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::__l36::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::`36'::<lambda_2>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l14::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`14'::<lambda_3>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::<lambda_45_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_45_>__0_____0VFString__X___TPropertyWatcher_VFString___FWatchablePropertySet__QEAA_AEBVFString__V__TFunction___A6AXAEBVFString___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void>'::__l1::<lambda_47_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_47_>__0_____0W4EMakeMeshPlacementType__X___TPropertyWatcher_W4EMakeMeshPlacementType___FWatchablePropertySet__QEAA_AEBW4EMakeMeshPlacementType__V__TFunction___A6AXAEBW4EMakeMeshPlacementType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::<lambda_49_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_49_>__0_____0MX___TPropertyWatcher_M_FWatchablePropertySet__QEAA_AEBMV__TFunction___A6AXAEBM_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>'::__l1::<lambda_51_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_51_>__0_____0W4EBaseCreateFromSelectedTargetType__X___TPropertyWatcher_W4EBaseCreateFromSelectedTargetType___FWatchablePropertySet__QEAA_AEBW4EBaseCreateFromSelectedTargetType__V__TFunction___A6AXAEBW4EBaseCreateFromSelectedTargetType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void>'::__l1::<lambda_53_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_53_>__0_____0W4EConvertToPolygonsMode__X___TPropertyWatcher_W4EConvertToPolygonsMode___FWatchablePropertySet__QEAA_AEBW4EConvertToPolygonsMode__V__TFunction___A6AXAEBW4EConvertToPolygonsMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_55_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_55_>__0_____0_NX___TPropertyWatcher__N_FWatchablePropertySet__QEAA_AEB_NV__TFunction___A6AXAEB_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_57_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_57_>__0_____0HX___TPropertyWatcher_H_FWatchablePropertySet__QEAA_AEBHV__TFunction___A6AXAEBH_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe3fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>'::__l1::<lambda_59_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_59_>__0_____0VFName__X___TPropertyWatcher_VFName___FWatchablePropertySet__QEAA_AEBVFName__V__TFunction___A6AXAEBVFName___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_7>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe40d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_8>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::__l2::<lambda_9>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4150

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FDynamicSubmesh3,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Geometry::FDynamicSubmesh3,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4190

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FPolygroupSet,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Geometry::FPolygroupSet,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe41d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4210

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<int>::_scalar_deleting_destructor_
          (TPropertyWatcher<int> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->NotEqual != 0) {
    plVar1 = *(longlong **)&(this->NotEqual).field_0x28;
    plVar2 = (longlong *)&(this->NotEqual).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnChanged != 0) {
    plVar1 = *(longlong **)&(this->OnChanged).field_0x28;
    plVar2 = (longlong *)&(this->OnChanged).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->GetValue != 0) {
    plVar1 = *(longlong **)&(this->GetValue).field_0x28;
    plVar2 = (longlong *)&(this->GetValue).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe42a0

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x70) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x98);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4330

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x70) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x98);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe43c0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UAddPrimitiveTool::Setup'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe43f0

void * __thiscall
UE::Geometry::FArrowGenerator::_scalar_deleting_destructor_(FArrowGenerator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSweepGeneratorBase_Geometry_UE__6B_;
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4440

void * __thiscall
FConvertToPolygonsOp::_scalar_deleting_destructor_(FConvertToPolygonsOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Generator).PolygroupEdges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->Generator).FoundPolygroups.AllocatorInstance.Data,
             (this->Generator).FoundPolygroups.ArrayNum);
  pFVar1 = (this->Generator).FoundPolygroups.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourcePolyGroups).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe44d0

void * __thiscall
UE::Geometry::FCurvedStairGenerator::_scalar_deleting_destructor_
          (FCurvedStairGenerator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCurvedStairGenerator_Geometry_UE__6B_;
  FStairGenerator::~FStairGenerator((FStairGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4520

void * __thiscall
UE::Geometry::FCylinderGenerator::_scalar_deleting_destructor_
          (FCylinderGenerator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSweepGeneratorBase_Geometry_UE__6B_;
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4570

void * __thiscall
UE::Geometry::FFloatingStairGenerator::_scalar_deleting_destructor_
          (FFloatingStairGenerator *this,uint param_1)

{
  *(undefined ***)this = &___7FLinearStairGenerator_Geometry_UE__6B_;
  FStairGenerator::~FStairGenerator((FStairGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe45c0

void * __thiscall
UE::Geometry::FLinearStairGenerator::_scalar_deleting_destructor_
          (FLinearStairGenerator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FLinearStairGenerator_Geometry_UE__6B_;
  FStairGenerator::~FStairGenerator((FStairGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4610

void * __thiscall
UE::Geometry::FPolygroupRemesh::_scalar_deleting_destructor_(FPolygroupRemesh *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FPolygroupRemesh_Geometry_UE__6B_;
  if (*(longlong *)&this->PlanarTriangulationFunc != 0) {
    plVar1 = *(longlong **)&(this->PlanarTriangulationFunc).field_0x28;
    plVar2 = (longlong *)&(this->PlanarTriangulationFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4670

void * __thiscall
UE::Geometry::FPolygroupRemeshFixLayout::_scalar_deleting_destructor_
          (FPolygroupRemeshFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe46a0

void * __thiscall
UE::Geometry::FSpiralStairGenerator::_scalar_deleting_destructor_
          (FSpiralStairGenerator *this,uint param_1)

{
  *(undefined ***)this = &___7FCurvedStairGenerator_Geometry_UE__6B_;
  FStairGenerator::~FStairGenerator((FStairGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe46f0

void * __thiscall
UAddPrimitiveTool::FStateChange::_scalar_deleting_destructor_(FStateChange *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4730

void * __thiscall
UE::Geometry::FVerticalCylinderGeneratorBase::_scalar_deleting_destructor_
          (FVerticalCylinderGeneratorBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSweepGeneratorBase_Geometry_UE__6B_;
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4780

void * __thiscall
IInteractiveToolExclusiveToolAPI::_scalar_deleting_destructor_
          (IInteractiveToolExclusiveToolAPI *this,uint param_1)

{
  *this = (IInteractiveToolExclusiveToolAPI)&___7IInteractiveToolExclusiveToolAPI__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe47c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddArrowPrimitiveTool::_scalar_deleting_destructor_(UAddArrowPrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddBoxPrimitiveTool::_scalar_deleting_destructor_(UAddBoxPrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddCapsulePrimitiveTool::_scalar_deleting_destructor_(UAddCapsulePrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe49a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddConePrimitiveTool::_scalar_deleting_destructor_(UAddConePrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddCylinderPrimitiveTool::_scalar_deleting_destructor_
          (UAddCylinderPrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddDiscPrimitiveTool::_scalar_deleting_destructor_(UAddDiscPrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddPrimitiveTool::_scalar_deleting_destructor_(UAddPrimitiveTool *this,uint param_1)

{
  ~UAddPrimitiveTool(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4be0

void * __thiscall
UAddPrimitiveToolBuilder::_scalar_deleting_destructor_(UAddPrimitiveToolBuilder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAddPrimitiveToolBuilder__6B_;
  UInteractiveToolBuilder::~UInteractiveToolBuilder((UInteractiveToolBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddRectanglePrimitiveTool::_scalar_deleting_destructor_
          (UAddRectanglePrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddSpherePrimitiveTool::_scalar_deleting_destructor_(UAddSpherePrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddStairsPrimitiveTool::_scalar_deleting_destructor_(UAddStairsPrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAddTorusPrimitiveTool::_scalar_deleting_destructor_(UAddTorusPrimitiveTool *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4ec0

void * __thiscall
UBaseKelvinletBrushOpProps::_scalar_deleting_destructor_
          (UBaseKelvinletBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4f20

void * __thiscall
UBasePlaneBrushOpProps::_scalar_deleting_destructor_(UBasePlaneBrushOpProps *this,uint param_1)

{
  *(undefined ***)this = &___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4f80

void * __thiscall
UBaseSmoothBrushOpProps::_scalar_deleting_destructor_(UBaseSmoothBrushOpProps *this,uint param_1)

{
  *(undefined ***)this = &___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe4fe0

void * __thiscall
UCombineMeshesTool::_scalar_deleting_destructor_(UCombineMeshesTool *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&___7IInteractiveToolExclusiveToolAPI__6B_;
  UMultiSelectionMeshEditingTool::~UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5070

void * __thiscall
UCombineMeshesToolBuilder::_scalar_deleting_destructor_
          (UCombineMeshesToolBuilder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCombineMeshesToolBuilder__6B_;
  UMultiSelectionMeshEditingToolBuilder::~UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe50d0

void * __thiscall
UCombineMeshesToolProperties::_scalar_deleting_destructor_
          (UCombineMeshesToolProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCombineMeshesToolProperties__6B_;
  pFVar1 = (this->OutputExistingName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputNewName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5160

void * __thiscall
UConvertToPolygonsOperatorFactory::_scalar_deleting_destructor_
          (UConvertToPolygonsOperatorFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe51d0

void * __thiscall
UConvertToPolygonsTool::_scalar_deleting_destructor_(UConvertToPolygonsTool *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UConvertToPolygonsTool__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveFromGroupSet).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PolygonEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeOperatorSharedMesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalSubmesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectionTriangleROI).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalDynamicMesh).SharedReferenceCount.ReferenceController);
  USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe52a0

void * __thiscall
UConvertToPolygonsToolBuilder::_scalar_deleting_destructor_
          (UConvertToPolygonsToolBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7UConvertToPolygonsToolBuilder__6B_;
  USingleTargetWithSelectionToolBuilder::~USingleTargetWithSelectionToolBuilder
            ((USingleTargetWithSelectionToolBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5300

void * __thiscall
UConvertToPolygonsToolProperties::_scalar_deleting_destructor_
          (UConvertToPolygonsToolProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UConvertToPolygonsToolProperties__6B_;
  pFVar1 = (this->NewLayerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->OptionsList).AllocatorInstance.Data,(this->OptionsList).ArrayNum);
  pFVar1 = (this->OptionsList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe53a0

void * __thiscall
UDeleteGeometrySelectionCommand::_scalar_deleting_destructor_
          (UDeleteGeometrySelectionCommand *this,uint param_1)

{
  *(undefined ***)this = &___7UDeleteGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5400

void * __thiscall
UDisconnectGeometrySelectionCommand::_scalar_deleting_destructor_
          (UDisconnectGeometrySelectionCommand *this,uint param_1)

{
  *(undefined ***)this = &___7UDisconnectGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5460

void * __thiscall
UEraseBrushOpProps::_scalar_deleting_destructor_(UEraseBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe54c0

void * __thiscall
UEraseSculptLayerBrushOpProps::_scalar_deleting_destructor_
          (UEraseSculptLayerBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5520

void * __thiscall
UFixedPlaneBrushOpProps::_scalar_deleting_destructor_(UFixedPlaneBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5580

void * __thiscall
UFlattenBrushOpProps::_scalar_deleting_destructor_(UFlattenBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe55e0

void * __thiscall
UGroupEraseBrushOpProps::_scalar_deleting_destructor_(UGroupEraseBrushOpProps *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7UGroupEraseBrushOpProps__6B_;
  if (*(longlong *)&this->GetCurrentGroupLambda != 0) {
    plVar1 = *(longlong **)&(this->GetCurrentGroupLambda).field_0x28;
    plVar2 = (longlong *)&(this->GetCurrentGroupLambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5670

void * __thiscall
UGroupPaintBrushOpProps::_scalar_deleting_destructor_(UGroupPaintBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe56d0

void * __thiscall
UInflateBrushOpProps::_scalar_deleting_destructor_(UInflateBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5730

void * __thiscall
UMeshConstraintProperties::_scalar_deleting_destructor_
          (UMeshConstraintProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshConstraintProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5790

void * __thiscall
UMeshSculptBrushOpProps::_scalar_deleting_destructor_(UMeshSculptBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe57f0

void * __thiscall
UModifyGeometrySelectionCommand::_scalar_deleting_destructor_
          (UModifyGeometrySelectionCommand *this,uint param_1)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5850

void * __thiscall
UModifyGeometrySelectionCommand_Contract::_scalar_deleting_destructor_
          (UModifyGeometrySelectionCommand_Contract *this,uint param_1)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe58b0

void * __thiscall
UModifyGeometrySelectionCommand_Expand::_scalar_deleting_destructor_
          (UModifyGeometrySelectionCommand_Expand *this,uint param_1)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5910

void * __thiscall
UModifyGeometrySelectionCommand_ExpandToConnected::_scalar_deleting_destructor_
          (UModifyGeometrySelectionCommand_ExpandToConnected *this,uint param_1)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5970

void * __thiscall
UModifyGeometrySelectionCommand_Invert::_scalar_deleting_destructor_
          (UModifyGeometrySelectionCommand_Invert *this,uint param_1)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe59d0

void * __thiscall
UModifyGeometrySelectionCommand_InvertConnected::_scalar_deleting_destructor_
          (UModifyGeometrySelectionCommand_InvertConnected *this,uint param_1)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5a30

void * __thiscall
UMoveBrushOpProps::_scalar_deleting_destructor_(UMoveBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5a90

void * __thiscall
UPinchBrushOpProps::_scalar_deleting_destructor_(UPinchBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5af0

void * __thiscall
UPlaneBrushOpProps::_scalar_deleting_destructor_(UPlaneBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5b50

void * __thiscall
UPolyEditActivityContext::_scalar_deleting_destructor_(UPolyEditActivityContext *this,uint param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UPolyEditActivityContext__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnUndoRedo).field_0x8,
             *(int *)&(this->OnUndoRedo).field_0x10);
  pvVar1 = *(void **)&(this->OnUndoRedo).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUndoRedo);
  if (*(longlong *)&this->EmitActivityStart != 0) {
    plVar2 = *(longlong **)&(this->EmitActivityStart).field_0x28;
    plVar3 = (longlong *)&(this->EmitActivityStart).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->EmitCurrentMeshChangeAndUpdate != 0) {
    plVar2 = *(longlong **)&(this->EmitCurrentMeshChangeAndUpdate).field_0x28;
    plVar3 = (longlong *)&(this->EmitCurrentMeshChangeAndUpdate).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshSpatial).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentMesh).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5c50

void * __thiscall
UProceduralArrowToolProperties::_scalar_deleting_destructor_
          (UProceduralArrowToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5cb0

void * __thiscall
UProceduralBoxToolProperties::_scalar_deleting_destructor_
          (UProceduralBoxToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5d10

void * __thiscall
UProceduralCapsuleToolProperties::_scalar_deleting_destructor_
          (UProceduralCapsuleToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5d70

void * __thiscall
UProceduralConeToolProperties::_scalar_deleting_destructor_
          (UProceduralConeToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5dd0

void * __thiscall
UProceduralCylinderToolProperties::_scalar_deleting_destructor_
          (UProceduralCylinderToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5e30

void * __thiscall
UProceduralDiscToolProperties::_scalar_deleting_destructor_
          (UProceduralDiscToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5e90

void * __thiscall
UProceduralRectangleToolProperties::_scalar_deleting_destructor_
          (UProceduralRectangleToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5ef0

void * __thiscall
UProceduralShapeToolProperties::_scalar_deleting_destructor_
          (UProceduralShapeToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5f50

void * __thiscall
UProceduralSphereToolProperties::_scalar_deleting_destructor_
          (UProceduralSphereToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe5fb0

void * __thiscall
UProceduralStairsToolProperties::_scalar_deleting_destructor_
          (UProceduralStairsToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6010

void * __thiscall
UProceduralTorusToolProperties::_scalar_deleting_destructor_
          (UProceduralTorusToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6070

void * __thiscall
UPullKelvinletBrushOpProps::_scalar_deleting_destructor_
          (UPullKelvinletBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe60d0

void * __thiscall
URemeshProperties::_scalar_deleting_destructor_(URemeshProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshConstraintProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6130

void * __thiscall
URetriangulateGeometrySelectionCommand::_scalar_deleting_destructor_
          (URetriangulateGeometrySelectionCommand *this,uint param_1)

{
  *(undefined ***)this = &___7URetriangulateGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6190

void * __thiscall
UScaleKelvinletBrushOpProps::_scalar_deleting_destructor_
          (UScaleKelvinletBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe61f0

void * __thiscall
USculptMaxBrushOpProps::_scalar_deleting_destructor_(USculptMaxBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6250

void * __thiscall
USecondarySmoothBrushOpProps::_scalar_deleting_destructor_
          (USecondarySmoothBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe62b0

void * __thiscall
USharpPullKelvinletBrushOpProps::_scalar_deleting_destructor_
          (USharpPullKelvinletBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6310

void * __thiscall
USmoothBrushOpProps::_scalar_deleting_destructor_(USmoothBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6370

void * __thiscall
USmoothFillBrushOpProps::_scalar_deleting_destructor_(USmoothFillBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe63d0

void * __thiscall
UStandardSculptBrushOpProps::_scalar_deleting_destructor_
          (UStandardSculptBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6430

void * __thiscall
UTwistKelvinletBrushOpProps::_scalar_deleting_destructor_
          (UTwistKelvinletBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6490

void * __thiscall
UVertexColorBaseBrushOpProps::_scalar_deleting_destructor_
          (UVertexColorBaseBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe64f0

void * __thiscall
UVertexColorPaintBrushOpProps::_scalar_deleting_destructor_
          (UVertexColorPaintBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6550

void * __thiscall
UVertexColorSmoothBrushOpProps::_scalar_deleting_destructor_
          (UVertexColorSmoothBrushOpProps *this,uint param_1)

{
  *(undefined ***)this = &___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe65b0

void * __thiscall
UVertexColorSoftenBrushOpProps::_scalar_deleting_destructor_
          (UVertexColorSoftenBrushOpProps *this,uint param_1)

{
  *(undefined ***)this = &___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6610

void * __thiscall
UViewAlignedPlaneBrushOpProps::_scalar_deleting_destructor_
          (UViewAlignedPlaneBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cbe6670

void * __thiscall
UViewAlignedSculptBrushOpProps::_scalar_deleting_destructor_
          (UViewAlignedSculptBrushOpProps *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAddPrimitiveTool @ 14cbeb1b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAddPrimitiveTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCombineMeshesTool @ 14cbeb1c0

void __cdecl EmptyLinkFunctionForGeneratedCodeCombineMeshesTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConvertToPolygonsTool @ 14cbeb1d0

void __cdecl EmptyLinkFunctionForGeneratedCodeConvertToPolygonsTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDeleteGeometrySelectionCommand @ 14cbeb1e0

void __cdecl EmptyLinkFunctionForGeneratedCodeDeleteGeometrySelectionCommand(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDisconnectGeometrySelectionCommand @ 14cbeb1f0

void __cdecl EmptyLinkFunctionForGeneratedCodeDisconnectGeometrySelectionCommand(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeKelvinletBrushOp @ 14cbeb200

void __cdecl EmptyLinkFunctionForGeneratedCodeKelvinletBrushOp(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshBrushOpBase @ 14cbeb210

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshBrushOpBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshEraseSculptLayerBrushOps @ 14cbeb220

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshEraseSculptLayerBrushOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshGroupPaintBrushOps @ 14cbeb230

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshGroupPaintBrushOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshInflateBrushOps @ 14cbeb240

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshInflateBrushOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshModelingTools_init @ 14cbeb250

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshModelingTools_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshMoveBrushOps @ 14cbeb260

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshMoveBrushOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshPinchBrushOps @ 14cbeb270

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshPinchBrushOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshPlaneBrushOps @ 14cbeb280

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshPlaneBrushOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSculptBrushOps @ 14cbeb290

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSculptBrushOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSmoothingBrushOps @ 14cbeb2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSmoothingBrushOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshVertexPaintBrushOps @ 14cbeb2b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshVertexPaintBrushOps(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeModifyGeometrySelectionCommand @ 14cbeb2c0

void __cdecl EmptyLinkFunctionForGeneratedCodeModifyGeometrySelectionCommand(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePolyEditActivityContext @ 14cbeb2d0

void __cdecl EmptyLinkFunctionForGeneratedCodePolyEditActivityContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRemeshProperties @ 14cbeb2e0

void __cdecl EmptyLinkFunctionForGeneratedCodeRemeshProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRetriangulateGeometrySelectionCommand @ 14cbeb2f0

void __cdecl EmptyLinkFunctionForGeneratedCodeRetriangulateGeometrySelectionCommand(void)

{
  return;
}

// SetNewMaterialID @ 14cbf3940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
CombineMeshesToolLocals::SetNewMaterialID
          (int param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2,int param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_5)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int local_68 [2];
  undefined8 local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_40;
  
  lVar1 = (ulonglong)((uint)param_3 >> 9) * 8;
  local_40 = (ulonglong)(param_3 & 0x1ff) * 4;
  uVar2 = *(uint *)(local_40 + *(longlong *)(lVar1 + *(longlong *)&param_2->field_0x20));
  if ((int)uVar2 < 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6175912068248502233>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\CombineMeshesTool.cpp"
                       ,0x27,"MatID >= 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar10 = (uint)~param_1 >> 0x1f;
    uVar5 = 0;
    if (param_1 < param_4->ArrayNum) {
      uVar5 = uVar10;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar8 = (longlong)param_1 * 0x10;
    uVar5 = 0;
    local_50 = lVar8;
    if (*(int *)((param_4->AllocatorInstance).Data + lVar8 + 8) <= (int)uVar2) {
      if (2 < (byte)LogGeometry._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      uVar7 = 0;
      if (param_1 < param_4->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = (uVar2 - *(int *)((param_4->AllocatorInstance).Data + lVar8 + 8)) + 1;
      if (0 < (int)uVar7) {
        local_58 = (ulonglong)uVar7;
        do {
          uVar7 = uVar5;
          if (param_1 < param_4->ArrayNum) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_68[0] = param_5->ArrayNum;
          pFVar9 = (param_4->AllocatorInstance).Data + lVar8;
          if (((*(FScriptContainerElement **)&pFVar9->field_0x0 <=
                (FScriptContainerElement *)local_68) &&
              ((FScriptContainerElement *)local_68 <
               *(FScriptContainerElement **)&pFVar9->field_0x0 +
               (longlong)*(int *)(pFVar9 + 0xc) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = *(int *)&pFVar9[8].field_0x0;
          if (iVar6 == *(int *)(pFVar9 + 0xc)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
          }
          *(int *)&pFVar9[8].field_0x0 = iVar6 + 1;
          local_60 = 0;
          *(int *)(*(FScriptContainerElement **)&pFVar9->field_0x0 + (longlong)iVar6 * 4) =
               local_68[0];
          pFVar9 = (param_5->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_60) &&
              ((FScriptContainerElement *)&local_60 < pFVar9 + (longlong)param_5->ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = param_5->ArrayNum;
          if (iVar6 == param_5->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          local_58 = local_58 - 1;
          param_5->ArrayNum = iVar6 + 1;
          *(undefined8 *)((param_5->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_60;
        } while (local_58 != 0);
        local_58 = 0;
        lVar8 = local_50;
      }
    }
    uVar7 = uVar5;
    if (param_1 < param_4->ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = (param_4->AllocatorInstance).Data + lVar8;
    if ((int)uVar2 < *(int *)(pFVar9 + 8)) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)(local_40 + *(longlong *)(*(longlong *)&param_2->field_0x20 + lVar1)) =
         *(undefined4 *)(*(longlong *)pFVar9 + (longlong)(int)uVar2 * 4);
  }
  return;
}

// Z_Construct_UClass_UAddArrowPrimitiveTool_NoRegister @ 14cbf9bc0

UClass * __cdecl Z_Construct_UClass_UAddArrowPrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddArrowPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddArrowPrimitiveTool",
               &Z_Registration_Info_UClass_UAddArrowPrimitiveTool.InnerSingleton,
               UAddArrowPrimitiveTool::StaticRegisterNativesUAddArrowPrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddArrowPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddArrowPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddArrowPrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddBoxPrimitiveTool_NoRegister @ 14cbf9c80

UClass * __cdecl Z_Construct_UClass_UAddBoxPrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddBoxPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddBoxPrimitiveTool",
               &Z_Registration_Info_UClass_UAddBoxPrimitiveTool.InnerSingleton,
               UAddBoxPrimitiveTool::StaticRegisterNativesUAddBoxPrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddBoxPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddBoxPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddBoxPrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddCapsulePrimitiveTool_NoRegister @ 14cbf9d40

UClass * __cdecl Z_Construct_UClass_UAddCapsulePrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddCapsulePrimitiveTool",
               &Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.InnerSingleton,
               UAddCapsulePrimitiveTool::StaticRegisterNativesUAddCapsulePrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddCapsulePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddCapsulePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddCapsulePrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddConePrimitiveTool_NoRegister @ 14cbf9e00

UClass * __cdecl Z_Construct_UClass_UAddConePrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddConePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddConePrimitiveTool",
               &Z_Registration_Info_UClass_UAddConePrimitiveTool.InnerSingleton,
               UAddConePrimitiveTool::StaticRegisterNativesUAddConePrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddConePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddConePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddConePrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddCylinderPrimitiveTool_NoRegister @ 14cbf9ec0

UClass * __cdecl Z_Construct_UClass_UAddCylinderPrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddCylinderPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddCylinderPrimitiveTool",
               &Z_Registration_Info_UClass_UAddCylinderPrimitiveTool.InnerSingleton,
               UAddCylinderPrimitiveTool::StaticRegisterNativesUAddCylinderPrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddCylinderPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddCylinderPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddCylinderPrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddDiscPrimitiveTool_NoRegister @ 14cbf9f80

UClass * __cdecl Z_Construct_UClass_UAddDiscPrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddDiscPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddDiscPrimitiveTool",
               &Z_Registration_Info_UClass_UAddDiscPrimitiveTool.InnerSingleton,
               UAddDiscPrimitiveTool::StaticRegisterNativesUAddDiscPrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddDiscPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddDiscPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddDiscPrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddPrimitiveToolBuilder_NoRegister @ 14cbfa040

UClass * __cdecl Z_Construct_UClass_UAddPrimitiveToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddPrimitiveToolBuilder",
               &Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.InnerSingleton,
               UAddPrimitiveToolBuilder::StaticRegisterNativesUAddPrimitiveToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddPrimitiveToolBuilder>,
               InternalVTableHelperCtorCaller<UAddPrimitiveToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddPrimitiveToolBuilder.InnerSingleton;
}

// Z_Construct_UClass_UAddPrimitiveTool_NoRegister @ 14cbfa100

UClass * __cdecl Z_Construct_UClass_UAddPrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddPrimitiveTool",
               &Z_Registration_Info_UClass_UAddPrimitiveTool.InnerSingleton,
               UAddPrimitiveTool::StaticRegisterNativesUAddPrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddPrimitiveTool>,local_res8,
               USingleClickTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddPrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddRectanglePrimitiveTool_NoRegister @ 14cbfa1c0

UClass * __cdecl Z_Construct_UClass_UAddRectanglePrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddRectanglePrimitiveTool",
               &Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.InnerSingleton,
               UAddRectanglePrimitiveTool::StaticRegisterNativesUAddRectanglePrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddRectanglePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddRectanglePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddRectanglePrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddSpherePrimitiveTool_NoRegister @ 14cbfa280

UClass * __cdecl Z_Construct_UClass_UAddSpherePrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddSpherePrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddSpherePrimitiveTool",
               &Z_Registration_Info_UClass_UAddSpherePrimitiveTool.InnerSingleton,
               UAddSpherePrimitiveTool::StaticRegisterNativesUAddSpherePrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddSpherePrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddSpherePrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddSpherePrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddStairsPrimitiveTool_NoRegister @ 14cbfa340

UClass * __cdecl Z_Construct_UClass_UAddStairsPrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddStairsPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddStairsPrimitiveTool",
               &Z_Registration_Info_UClass_UAddStairsPrimitiveTool.InnerSingleton,
               UAddStairsPrimitiveTool::StaticRegisterNativesUAddStairsPrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddStairsPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddStairsPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddStairsPrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UAddTorusPrimitiveTool_NoRegister @ 14cbfa400

UClass * __cdecl Z_Construct_UClass_UAddTorusPrimitiveTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddTorusPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddTorusPrimitiveTool",
               &Z_Registration_Info_UClass_UAddTorusPrimitiveTool.InnerSingleton,
               UAddTorusPrimitiveTool::StaticRegisterNativesUAddTorusPrimitiveTool,0x160,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAddTorusPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddTorusPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddTorusPrimitiveTool.InnerSingleton;
}

// Z_Construct_UClass_UBaseKelvinletBrushOpProps_NoRegister @ 14cbfa4c0

UClass * __cdecl Z_Construct_UClass_UBaseKelvinletBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BaseKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.InnerSingleton,
               UBaseKelvinletBrushOpProps::StaticRegisterNativesUBaseKelvinletBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UBaseKelvinletBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UBasePlaneBrushOpProps_NoRegister @ 14cbfa580

UClass * __cdecl Z_Construct_UClass_UBasePlaneBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBasePlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BasePlaneBrushOpProps",
               &Z_Registration_Info_UClass_UBasePlaneBrushOpProps.InnerSingleton,
               UBasePlaneBrushOpProps::StaticRegisterNativesUBasePlaneBrushOpProps,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBasePlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UBasePlaneBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBasePlaneBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UBaseSmoothBrushOpProps_NoRegister @ 14cbfa640

UClass * __cdecl Z_Construct_UClass_UBaseSmoothBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BaseSmoothBrushOpProps",
               &Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.InnerSingleton,
               UBaseSmoothBrushOpProps::StaticRegisterNativesUBaseSmoothBrushOpProps,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseSmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<UBaseSmoothBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UCombineMeshesToolBuilder_NoRegister @ 14cbfa700

UClass * __cdecl Z_Construct_UClass_UCombineMeshesToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombineMeshesToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CombineMeshesToolBuilder",
               &Z_Registration_Info_UClass_UCombineMeshesToolBuilder.InnerSingleton,
               UCombineMeshesToolBuilder::StaticRegisterNativesUCombineMeshesToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombineMeshesToolBuilder>,
               InternalVTableHelperCtorCaller<UCombineMeshesToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombineMeshesToolBuilder.InnerSingleton;
}

// Z_Construct_UClass_UCombineMeshesTool_NoRegister @ 14cbfa7c0

UClass * __cdecl Z_Construct_UClass_UCombineMeshesTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombineMeshesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CombineMeshesTool",
               &Z_Registration_Info_UClass_UCombineMeshesTool.InnerSingleton,
               UCombineMeshesTool::StaticRegisterNativesUCombineMeshesTool,0x108,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombineMeshesTool>,
               InternalVTableHelperCtorCaller<UCombineMeshesTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombineMeshesTool.InnerSingleton;
}

// Z_Construct_UClass_UConvertToPolygonsOperatorFactory_NoRegister @ 14cbfa880

UClass * __cdecl Z_Construct_UClass_UConvertToPolygonsOperatorFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsOperatorFactory",
               &Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.InnerSingleton,
               UConvertToPolygonsOperatorFactory::
               StaticRegisterNativesUConvertToPolygonsOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConvertToPolygonsOperatorFactory>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.InnerSingleton;
}

// Z_Construct_UClass_UConvertToPolygonsToolBuilder_NoRegister @ 14cbfa930

UClass * __cdecl Z_Construct_UClass_UConvertToPolygonsToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsToolBuilder",
               &Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.InnerSingleton,
               UConvertToPolygonsToolBuilder::StaticRegisterNativesUConvertToPolygonsToolBuilder,
               0x28,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UConvertToPolygonsToolBuilder>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.InnerSingleton;
}

// Z_Construct_UClass_UDeleteGeometrySelectionCommand_NoRegister @ 14cbfa9f0

UClass * __cdecl Z_Construct_UClass_UDeleteGeometrySelectionCommand_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DeleteGeometrySelectionCommand",
               &Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.InnerSingleton,
               UDeleteGeometrySelectionCommand::StaticRegisterNativesUDeleteGeometrySelectionCommand
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeleteGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<UDeleteGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.InnerSingleton;
}

// Z_Construct_UClass_UDisconnectGeometrySelectionCommand_NoRegister @ 14cbfaab0

UClass * __cdecl Z_Construct_UClass_UDisconnectGeometrySelectionCommand_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisconnectGeometrySelectionCommand",
               &Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.InnerSingleton,
               UDisconnectGeometrySelectionCommand::
               StaticRegisterNativesUDisconnectGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDisconnectGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<UDisconnectGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.InnerSingleton;
}

// Z_Construct_UClass_UEraseBrushOpProps_NoRegister @ 14cbfab70

UClass * __cdecl Z_Construct_UClass_UEraseBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEraseBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EraseBrushOpProps",
               &Z_Registration_Info_UClass_UEraseBrushOpProps.InnerSingleton,
               UEraseBrushOpProps::StaticRegisterNativesUEraseBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEraseBrushOpProps>,
               InternalVTableHelperCtorCaller<UEraseBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEraseBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UEraseSculptLayerBrushOpProps_NoRegister @ 14cbfac30

UClass * __cdecl Z_Construct_UClass_UEraseSculptLayerBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EraseSculptLayerBrushOpProps",
               &Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.InnerSingleton,
               UEraseSculptLayerBrushOpProps::StaticRegisterNativesUEraseSculptLayerBrushOpProps,
               0xc0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEraseSculptLayerBrushOpProps>,
               InternalVTableHelperCtorCaller<UEraseSculptLayerBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEraseSculptLayerBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UFixedPlaneBrushOpProps_NoRegister @ 14cbfacf0

UClass * __cdecl Z_Construct_UClass_UFixedPlaneBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"FixedPlaneBrushOpProps",
               &Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.InnerSingleton,
               UFixedPlaneBrushOpProps::StaticRegisterNativesUFixedPlaneBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFixedPlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UFixedPlaneBrushOpProps>,local_res8,
               UBasePlaneBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UFlattenBrushOpProps_NoRegister @ 14cbfadb0

UClass * __cdecl Z_Construct_UClass_UFlattenBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFlattenBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"FlattenBrushOpProps",
               &Z_Registration_Info_UClass_UFlattenBrushOpProps.InnerSingleton,
               UFlattenBrushOpProps::StaticRegisterNativesUFlattenBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFlattenBrushOpProps>,
               InternalVTableHelperCtorCaller<UFlattenBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFlattenBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UGroupEraseBrushOpProps_NoRegister @ 14cbfae70

UClass * __cdecl Z_Construct_UClass_UGroupEraseBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupEraseBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupEraseBrushOpProps",
               &Z_Registration_Info_UClass_UGroupEraseBrushOpProps.InnerSingleton,
               UGroupEraseBrushOpProps::StaticRegisterNativesUGroupEraseBrushOpProps,0xf0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroupEraseBrushOpProps>,
               InternalVTableHelperCtorCaller<UGroupEraseBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupEraseBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UGroupPaintBrushOpProps_NoRegister @ 14cbfaf30

UClass * __cdecl Z_Construct_UClass_UGroupPaintBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupPaintBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupPaintBrushOpProps",
               &Z_Registration_Info_UClass_UGroupPaintBrushOpProps.InnerSingleton,
               UGroupPaintBrushOpProps::StaticRegisterNativesUGroupPaintBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroupPaintBrushOpProps>,
               InternalVTableHelperCtorCaller<UGroupPaintBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupPaintBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UInflateBrushOpProps_NoRegister @ 14cbfaff0

UClass * __cdecl Z_Construct_UClass_UInflateBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInflateBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"InflateBrushOpProps",
               &Z_Registration_Info_UClass_UInflateBrushOpProps.InnerSingleton,
               UInflateBrushOpProps::StaticRegisterNativesUInflateBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInflateBrushOpProps>,
               InternalVTableHelperCtorCaller<UInflateBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInflateBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UMeshConstraintProperties_NoRegister @ 14cbfb0b0

UClass * __cdecl Z_Construct_UClass_UMeshConstraintProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshConstraintProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshConstraintProperties",
               &Z_Registration_Info_UClass_UMeshConstraintProperties.InnerSingleton,
               UMeshConstraintProperties::StaticRegisterNativesUMeshConstraintProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshConstraintProperties>,
               InternalVTableHelperCtorCaller<UMeshConstraintProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshConstraintProperties.InnerSingleton;
}

// Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister @ 14cbfb170

UClass * __cdecl Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSculptBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSculptBrushOpProps",
               &Z_Registration_Info_UClass_UMeshSculptBrushOpProps.InnerSingleton,
               UMeshSculptBrushOpProps::StaticRegisterNativesUMeshSculptBrushOpProps,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSculptBrushOpProps>,
               InternalVTableHelperCtorCaller<UMeshSculptBrushOpProps>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSculptBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_NoRegister @ 14cbfb230

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_Contract_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_Contract",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.InnerSingleton,
               UModifyGeometrySelectionCommand_Contract::
               StaticRegisterNativesUModifyGeometrySelectionCommand_Contract,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand_Contract>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Contract>,local_res8,
               UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.InnerSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_NoRegister @ 14cbfb2f0

UClass * __cdecl
Z_Construct_UClass_UModifyGeometrySelectionCommand_ExpandToConnected_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_ExpandToConnected",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.
                InnerSingleton,
               UModifyGeometrySelectionCommand_ExpandToConnected::
               StaticRegisterNativesUModifyGeometrySelectionCommand_ExpandToConnected,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand_ExpandToConnected>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_ExpandToConnected>,
               local_res8,UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.InnerSingleton
  ;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_NoRegister @ 14cbfb3b0

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_Expand_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_Expand",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.InnerSingleton,
               UModifyGeometrySelectionCommand_Expand::
               StaticRegisterNativesUModifyGeometrySelectionCommand_Expand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModifyGeometrySelectionCommand_Expand>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Expand>,local_res8,
               UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.InnerSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_NoRegister @ 14cbfb470

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_InvertConnected_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_InvertConnected",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.
                InnerSingleton,
               UModifyGeometrySelectionCommand_InvertConnected::
               StaticRegisterNativesUModifyGeometrySelectionCommand_InvertConnected,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand_InvertConnected>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_InvertConnected>,
               local_res8,UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.InnerSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_NoRegister @ 14cbfb530

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_Invert_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_Invert",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.InnerSingleton,
               UModifyGeometrySelectionCommand_Invert::
               StaticRegisterNativesUModifyGeometrySelectionCommand_Invert,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModifyGeometrySelectionCommand_Invert>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Invert>,local_res8,
               UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.InnerSingleton;
}

// Z_Construct_UClass_UModifyGeometrySelectionCommand_NoRegister @ 14cbfb5f0

UClass * __cdecl Z_Construct_UClass_UModifyGeometrySelectionCommand_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.InnerSingleton,
               UModifyGeometrySelectionCommand::StaticRegisterNativesUModifyGeometrySelectionCommand
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.InnerSingleton;
}

// Z_Construct_UClass_UMoveBrushOpProps_NoRegister @ 14cbfb6b0

UClass * __cdecl Z_Construct_UClass_UMoveBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoveBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MoveBrushOpProps",
               &Z_Registration_Info_UClass_UMoveBrushOpProps.InnerSingleton,
               UMoveBrushOpProps::StaticRegisterNativesUMoveBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoveBrushOpProps>,
               InternalVTableHelperCtorCaller<UMoveBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoveBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UPinchBrushOpProps_NoRegister @ 14cbfb770

UClass * __cdecl Z_Construct_UClass_UPinchBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPinchBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PinchBrushOpProps",
               &Z_Registration_Info_UClass_UPinchBrushOpProps.InnerSingleton,
               UPinchBrushOpProps::StaticRegisterNativesUPinchBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPinchBrushOpProps>,
               InternalVTableHelperCtorCaller<UPinchBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPinchBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UPlaneBrushOpProps_NoRegister @ 14cbfb830

UClass * __cdecl Z_Construct_UClass_UPlaneBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PlaneBrushOpProps",
               &Z_Registration_Info_UClass_UPlaneBrushOpProps.InnerSingleton,
               UPlaneBrushOpProps::StaticRegisterNativesUPlaneBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UPlaneBrushOpProps>,local_res8,
               UBasePlaneBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlaneBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditActivityContext_NoRegister @ 14cbfb8f0

UClass * __cdecl Z_Construct_UClass_UPolyEditActivityContext_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditActivityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditActivityContext",
               &Z_Registration_Info_UClass_UPolyEditActivityContext.InnerSingleton,
               UPolyEditActivityContext::StaticRegisterNativesUPolyEditActivityContext,0x100,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditActivityContext>,
               InternalVTableHelperCtorCaller<UPolyEditActivityContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditActivityContext.InnerSingleton;
}

// Z_Construct_UClass_UProceduralArrowToolProperties_NoRegister @ 14cbfb9a0

UClass * __cdecl Z_Construct_UClass_UProceduralArrowToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralArrowToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralArrowToolProperties",
               &Z_Registration_Info_UClass_UProceduralArrowToolProperties.InnerSingleton,
               UProceduralArrowToolProperties::StaticRegisterNativesUProceduralArrowToolProperties,
               0xd8,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralArrowToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralArrowToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralArrowToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UProceduralBoxToolProperties_NoRegister @ 14cbfba60

UClass * __cdecl Z_Construct_UClass_UProceduralBoxToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralBoxToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralBoxToolProperties",
               &Z_Registration_Info_UClass_UProceduralBoxToolProperties.InnerSingleton,
               UProceduralBoxToolProperties::StaticRegisterNativesUProceduralBoxToolProperties,0xd8,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralBoxToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralBoxToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralBoxToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UProceduralCapsuleToolProperties_NoRegister @ 14cbfbb20

UClass * __cdecl Z_Construct_UClass_UProceduralCapsuleToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralCapsuleToolProperties",
               &Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.InnerSingleton,
               UProceduralCapsuleToolProperties::
               StaticRegisterNativesUProceduralCapsuleToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralCapsuleToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralCapsuleToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UProceduralConeToolProperties_NoRegister @ 14cbfbbe0

UClass * __cdecl Z_Construct_UClass_UProceduralConeToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralConeToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralConeToolProperties",
               &Z_Registration_Info_UClass_UProceduralConeToolProperties.InnerSingleton,
               UProceduralConeToolProperties::StaticRegisterNativesUProceduralConeToolProperties,
               0xd0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralConeToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralConeToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralConeToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UProceduralCylinderToolProperties_NoRegister @ 14cbfbca0

UClass * __cdecl Z_Construct_UClass_UProceduralCylinderToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralCylinderToolProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralCylinderToolProperties",
               &Z_Registration_Info_UClass_UProceduralCylinderToolProperties.InnerSingleton,
               UProceduralCylinderToolProperties::
               StaticRegisterNativesUProceduralCylinderToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralCylinderToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralCylinderToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralCylinderToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UProceduralDiscToolProperties_NoRegister @ 14cbfbd60

UClass * __cdecl Z_Construct_UClass_UProceduralDiscToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralDiscToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralDiscToolProperties",
               &Z_Registration_Info_UClass_UProceduralDiscToolProperties.InnerSingleton,
               UProceduralDiscToolProperties::StaticRegisterNativesUProceduralDiscToolProperties,
               0xd8,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralDiscToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralDiscToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralDiscToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UProceduralRectangleToolProperties_NoRegister @ 14cbfbe20

UClass * __cdecl Z_Construct_UClass_UProceduralRectangleToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralRectangleToolProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralRectangleToolProperties",
               &Z_Registration_Info_UClass_UProceduralRectangleToolProperties.InnerSingleton,
               UProceduralRectangleToolProperties::
               StaticRegisterNativesUProceduralRectangleToolProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralRectangleToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralRectangleToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralRectangleToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UProceduralSphereToolProperties_NoRegister @ 14cbfbee0

UClass * __cdecl Z_Construct_UClass_UProceduralSphereToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralSphereToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralSphereToolProperties",
               &Z_Registration_Info_UClass_UProceduralSphereToolProperties.InnerSingleton,
               UProceduralSphereToolProperties::StaticRegisterNativesUProceduralSphereToolProperties
               ,0xd8,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralSphereToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralSphereToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralSphereToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UProceduralStairsToolProperties_NoRegister @ 14cbfbfa0

UClass * __cdecl Z_Construct_UClass_UProceduralStairsToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralStairsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralStairsToolProperties",
               &Z_Registration_Info_UClass_UProceduralStairsToolProperties.InnerSingleton,
               UProceduralStairsToolProperties::StaticRegisterNativesUProceduralStairsToolProperties
               ,0xe0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralStairsToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralStairsToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralStairsToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UProceduralTorusToolProperties_NoRegister @ 14cbfc060

UClass * __cdecl Z_Construct_UClass_UProceduralTorusToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralTorusToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralTorusToolProperties",
               &Z_Registration_Info_UClass_UProceduralTorusToolProperties.InnerSingleton,
               UProceduralTorusToolProperties::StaticRegisterNativesUProceduralTorusToolProperties,
               0xd0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralTorusToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralTorusToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralTorusToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UPullKelvinletBrushOpProps_NoRegister @ 14cbfc120

UClass * __cdecl Z_Construct_UClass_UPullKelvinletBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PullKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.InnerSingleton,
               UPullKelvinletBrushOpProps::StaticRegisterNativesUPullKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPullKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UPullKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_URemeshProperties_NoRegister @ 14cbfc1e0

UClass * __cdecl Z_Construct_UClass_URemeshProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemeshProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemeshProperties",
               &Z_Registration_Info_UClass_URemeshProperties.InnerSingleton,
               URemeshProperties::StaticRegisterNativesURemeshProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URemeshProperties>,
               InternalVTableHelperCtorCaller<URemeshProperties>,local_res8,
               UMeshConstraintProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemeshProperties.InnerSingleton;
}

// Z_Construct_UClass_URetriangulateGeometrySelectionCommand_NoRegister @ 14cbfc2a0

UClass * __cdecl Z_Construct_UClass_URetriangulateGeometrySelectionCommand_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RetriangulateGeometrySelectionCommand",
               &Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.InnerSingleton,
               URetriangulateGeometrySelectionCommand::
               StaticRegisterNativesURetriangulateGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URetriangulateGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<URetriangulateGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.InnerSingleton;
}

// Z_Construct_UClass_UScaleKelvinletBrushOpProps_NoRegister @ 14cbfc360

UClass * __cdecl Z_Construct_UClass_UScaleKelvinletBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ScaleKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.InnerSingleton,
               UScaleKelvinletBrushOpProps::StaticRegisterNativesUScaleKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UScaleKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UScaleKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_USculptMaxBrushOpProps_NoRegister @ 14cbfc420

UClass * __cdecl Z_Construct_UClass_USculptMaxBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USculptMaxBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SculptMaxBrushOpProps",
               &Z_Registration_Info_UClass_USculptMaxBrushOpProps.InnerSingleton,
               USculptMaxBrushOpProps::StaticRegisterNativesUSculptMaxBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USculptMaxBrushOpProps>,
               InternalVTableHelperCtorCaller<USculptMaxBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USculptMaxBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_USecondarySmoothBrushOpProps_NoRegister @ 14cbfc4e0

UClass * __cdecl Z_Construct_UClass_USecondarySmoothBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SecondarySmoothBrushOpProps",
               &Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.InnerSingleton,
               USecondarySmoothBrushOpProps::StaticRegisterNativesUSecondarySmoothBrushOpProps,200,8
               ,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USecondarySmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<USecondarySmoothBrushOpProps>,local_res8,
               UBaseSmoothBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_USharpPullKelvinletBrushOpProps_NoRegister @ 14cbfc5a0

UClass * __cdecl Z_Construct_UClass_USharpPullKelvinletBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SharpPullKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.InnerSingleton,
               USharpPullKelvinletBrushOpProps::StaticRegisterNativesUSharpPullKelvinletBrushOpProps
               ,0xd0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USharpPullKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<USharpPullKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_USmoothBrushOpProps_NoRegister @ 14cbfc660

UClass * __cdecl Z_Construct_UClass_USmoothBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothBrushOpProps",
               &Z_Registration_Info_UClass_USmoothBrushOpProps.InnerSingleton,
               USmoothBrushOpProps::StaticRegisterNativesUSmoothBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<USmoothBrushOpProps>,local_res8,
               UBaseSmoothBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_USmoothFillBrushOpProps_NoRegister @ 14cbfc720

UClass * __cdecl Z_Construct_UClass_USmoothFillBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothFillBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothFillBrushOpProps",
               &Z_Registration_Info_UClass_USmoothFillBrushOpProps.InnerSingleton,
               USmoothFillBrushOpProps::StaticRegisterNativesUSmoothFillBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USmoothFillBrushOpProps>,
               InternalVTableHelperCtorCaller<USmoothFillBrushOpProps>,local_res8,
               UBaseSmoothBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothFillBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UStandardSculptBrushOpProps_NoRegister @ 14cbfc7e0

UClass * __cdecl Z_Construct_UClass_UStandardSculptBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStandardSculptBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"StandardSculptBrushOpProps",
               &Z_Registration_Info_UClass_UStandardSculptBrushOpProps.InnerSingleton,
               UStandardSculptBrushOpProps::StaticRegisterNativesUStandardSculptBrushOpProps,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UStandardSculptBrushOpProps>,
               InternalVTableHelperCtorCaller<UStandardSculptBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStandardSculptBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UTwistKelvinletBrushOpProps_NoRegister @ 14cbfc8a0

UClass * __cdecl Z_Construct_UClass_UTwistKelvinletBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"TwistKelvinletBrushOpProps",
               &Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.InnerSingleton,
               UTwistKelvinletBrushOpProps::StaticRegisterNativesUTwistKelvinletBrushOpProps,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTwistKelvinletBrushOpProps>,
               InternalVTableHelperCtorCaller<UTwistKelvinletBrushOpProps>,local_res8,
               UBaseKelvinletBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UVertexColorBaseBrushOpProps_NoRegister @ 14cbfc960

UClass * __cdecl Z_Construct_UClass_UVertexColorBaseBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorBaseBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.InnerSingleton,
               UVertexColorBaseBrushOpProps::StaticRegisterNativesUVertexColorBaseBrushOpProps,200,8
               ,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorBaseBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorBaseBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UVertexColorPaintBrushOpProps_NoRegister @ 14cbfca20

UClass * __cdecl Z_Construct_UClass_UVertexColorPaintBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorPaintBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.InnerSingleton,
               UVertexColorPaintBrushOpProps::StaticRegisterNativesUVertexColorPaintBrushOpProps,
               0xd8,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorPaintBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorPaintBrushOpProps>,local_res8,
               UVertexColorBaseBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UVertexColorSmoothBrushOpProps_NoRegister @ 14cbfcae0

UClass * __cdecl Z_Construct_UClass_UVertexColorSmoothBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorSmoothBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.InnerSingleton,
               UVertexColorSmoothBrushOpProps::StaticRegisterNativesUVertexColorSmoothBrushOpProps,
               200,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorSmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorSmoothBrushOpProps>,local_res8,
               UVertexColorBaseBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UVertexColorSoftenBrushOpProps_NoRegister @ 14cbfcba0

UClass * __cdecl Z_Construct_UClass_UVertexColorSoftenBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorSoftenBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.InnerSingleton,
               UVertexColorSoftenBrushOpProps::StaticRegisterNativesUVertexColorSoftenBrushOpProps,
               200,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorSoftenBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorSoftenBrushOpProps>,local_res8,
               UVertexColorBaseBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_NoRegister @ 14cbfcc60

UClass * __cdecl Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ViewAlignedPlaneBrushOpProps",
               &Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.InnerSingleton,
               UViewAlignedPlaneBrushOpProps::StaticRegisterNativesUViewAlignedPlaneBrushOpProps,200
               ,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewAlignedPlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UViewAlignedPlaneBrushOpProps>,local_res8,
               UBasePlaneBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.InnerSingleton;
}

// Z_Construct_UClass_UViewAlignedSculptBrushOpProps_NoRegister @ 14cbfcd20

UClass * __cdecl Z_Construct_UClass_UViewAlignedSculptBrushOpProps_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ViewAlignedSculptBrushOpProps",
               &Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.InnerSingleton,
               UViewAlignedSculptBrushOpProps::StaticRegisterNativesUViewAlignedSculptBrushOpProps,
               0xc0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewAlignedSculptBrushOpProps>,
               InternalVTableHelperCtorCaller<UViewAlignedSculptBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EMeshSculptStrokeType @ 14cbfcde0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EMeshSculptStrokeType(void)

{
  if (Z_Registration_Info_UEnum_EMeshSculptStrokeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshSculptStrokeType.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EMeshSculptStrokeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshSculptStrokeType.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'CombineTypeRequirements'' @ 1504535b0

void __cdecl
`UCombineMeshesToolBuilder::GetTargetRequirements'::__l2::
_dynamic_atexit_destructor_for__CombineTypeRequirements__(void)

{
  ForElementType<UClass_const_*> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = CombineTypeRequirements.Interfaces.AllocatorInstance.SecondaryData;
  if (CombineTypeRequirements.Interfaces.AllocatorInstance.SecondaryData ==
      (ForElementType<UClass_const_*>)0x0) {
    return;
  }
  if (CombineTypeRequirements.Interfaces.AllocatorInstance.SecondaryData !=
      (ForElementType<UClass_const_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DuplicateTypeRequirements'' @ 1504535d0

void __cdecl
`UCombineMeshesToolBuilder::GetTargetRequirements'::__l2::
_dynamic_atexit_destructor_for__DuplicateTypeRequirements__(void)

{
  ForElementType<UClass_const_*> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = DuplicateTypeRequirements.Interfaces.AllocatorInstance.SecondaryData;
  if (DuplicateTypeRequirements.Interfaces.AllocatorInstance.SecondaryData ==
      (ForElementType<UClass_const_*>)0x0) {
    return;
  }
  if (DuplicateTypeRequirements.Interfaces.AllocatorInstance.SecondaryData !=
      (ForElementType<UClass_const_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// operator() @ 150577010

bool __thiscall
``UConvertToPolygonsTool::UpdateFromGroupLayer'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7157263858606801491>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7157263858606801491>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

