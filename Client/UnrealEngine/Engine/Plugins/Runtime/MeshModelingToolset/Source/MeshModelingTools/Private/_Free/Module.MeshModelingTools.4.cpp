// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 595

// DefaultFaceColor'' @ 1413b8950

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

// DefaultLineColor'' @ 1413b8980

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

// DefaultPointColor'' @ 1413b89b0

void __cdecl
`dynamic_initializer_for_'UGeometrySelectionVisualizationProperties::DefaultPointColor__(void)

{
  UGeometrySelectionVisualizationProperties::DefaultPointColor =
       UGeometrySelectionVisualizationProperties::DefaultLineColor;
  return;
}

// `dynamic_initializer_for_'ExtrudeFrameLineColor'' @ 1413b89d0

void __cdecl
PolyEditExtrudeEdgeActivityLocals::_dynamic_initializer_for__ExtrudeFrameLineColor__(void)

{
  ExtrudeFrameLineColor = FColor::Orange;
  return;
}

// `dynamic_initializer_for_'GroupEdgeStartTransactionName'' @ 1413b89f0

void __cdecl
PolyEditInsertEdgeActivityLocals::_dynamic_initializer_for__GroupEdgeStartTransactionName__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&GroupEdgeStartTransactionName,L"UPolyEditInsertEdgeActivity",
             L"GroupEdgeStartTransactionName",L"Group Edge Start");
  atexit(_dynamic_atexit_destructor_for__GroupEdgeStartTransactionName__);
  return;
}

// `dynamic_initializer_for_'GroupLineColor'' @ 1413b8a30

void __cdecl PolyEditExtrudeEdgeActivityLocals::_dynamic_initializer_for__GroupLineColor__(void)

{
  GroupLineColor = FColor::Red;
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413b8a50

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413b8ae0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413b8b70

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413b8c00

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413b8c90

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413b8d20

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413b8db0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413b8e40

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413b8ed0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413b8f60

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

// `dynamic_initializer_for_'TransactionLabel'' @ 1413b8ff0

void __cdecl PolyEditExtrudeEdgeActivityLocals::_dynamic_initializer_for__TransactionLabel__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&TransactionLabel,L"PolyEditExtrudeEdgeActivity",L"ExtrudeEdgeTransactionLabel",
             L"Extrude Edges");
  atexit(_dynamic_atexit_destructor_for__TransactionLabel__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h__Script_MeshModelingTools_2778407209'' @ 1413b9030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h__Script_MeshModelingTools_2778407209__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h__Script_MeshModelingTools_2849098236'' @ 1413b9070

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h__Script_MeshModelingTools_2849098236__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h__Script_MeshModelingTools_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_SmoothMeshTool_h__Script_MeshModelingTools_3249136236'' @ 1413b90c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_SmoothMeshTool_h__Script_MeshModelingTools_3249136236__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_SmoothMeshTool_h__Script_MeshModelingTools_Statics
             ::ClassInfo,7,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_SmoothMeshTool_h__Script_MeshModelingTools_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h__Script_MeshModelingTools_321718475'' @ 1413b9110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h__Script_MeshModelingTools_321718475__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h__Script_MeshModelingTools_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h__Script_MeshModelingTools_682489783'' @ 1413b9160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h__Script_MeshModelingTools_682489783__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h__Script_MeshModelingTools_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditExtrudeActivity_h__Script_MeshModelingTools_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h__Script_MeshModelingTools_2489093656'' @ 1413b91b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h__Script_MeshModelingTools_2489093656__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h__Script_MeshModelingTools_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h__Script_MeshModelingTools_3026861571'' @ 1413b9200

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h__Script_MeshModelingTools_3026861571__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h__Script_MeshModelingTools_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h__Script_MeshModelingTools_4095109779'' @ 1413b9250

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h__Script_MeshModelingTools_4095109779__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditPlanarProjectionUVActivity_h__Script_MeshModelingTools_51452235'' @ 1413b9290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditPlanarProjectionUVActivity_h__Script_MeshModelingTools_51452235__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditPlanarProjectionUVActivity_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h__Script_MeshModelingTools_2467745185'' @ 1413b92d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h__Script_MeshModelingTools_2467745185__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h__Script_MeshModelingTools_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h__Script_MeshModelingTools_319462589'' @ 1413b9310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h__Script_MeshModelingTools_319462589__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h__Script_MeshModelingTools_Statics
             ::ClassInfo,5,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h__Script_MeshModelingTools_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h__Script_MeshModelingTools_1410147251'' @ 1413b9360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h__Script_MeshModelingTools_1410147251__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshModelingTools",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h__Script_MeshModelingTools_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_WeldMeshEdgesTool_h__Script_MeshModelingTools_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UClass_UUVProjectionOperatorFactory @ 14cd40a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUVProjectionOperatorFactory(void)

{
  if (Z_Registration_Info_UClass_UUVProjectionOperatorFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUVProjectionOperatorFactory.OuterSingleton,
               &Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUVProjectionOperatorFactory.OuterSingleton;
}

// Z_Construct_UClass_UUVProjectionTool @ 14cd40a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUVProjectionTool(void)

{
  if (Z_Registration_Info_UClass_UUVProjectionTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUVProjectionTool.OuterSingleton,
               &Z_Construct_UClass_UUVProjectionTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUVProjectionTool.OuterSingleton;
}

// Z_Construct_UClass_UUVProjectionToolBuilder @ 14cd40ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUVProjectionToolBuilder(void)

{
  if (Z_Registration_Info_UClass_UUVProjectionToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUVProjectionToolBuilder.OuterSingleton,
               &Z_Construct_UClass_UUVProjectionToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolBuilder.OuterSingleton;
}

// Z_Construct_UClass_UUVProjectionToolEditActions @ 14cd40af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUVProjectionToolEditActions(void)

{
  if (Z_Registration_Info_UClass_UUVProjectionToolEditActions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUVProjectionToolEditActions.OuterSingleton,
               &Z_Construct_UClass_UUVProjectionToolEditActions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolEditActions.OuterSingleton;
}

// Z_Construct_UClass_UUVProjectionToolProperties @ 14cd40b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUVProjectionToolProperties(void)

{
  if (Z_Registration_Info_UClass_UUVProjectionToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUVProjectionToolProperties.OuterSingleton,
               &Z_Construct_UClass_UUVProjectionToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolProperties.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode @ 14cd40b70

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode(void)

{
  if (Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.InnerSingleton;
}

// EUVProjectionToolActions_StaticEnum @ 14cd40c70

UEnum * __cdecl EUVProjectionToolActions_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUVProjectionToolActions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EUVProjectionToolActions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions,
                       (UObject *)pUVar1,L"EUVProjectionToolActions");
  }
  return Z_Registration_Info_UEnum_EUVProjectionToolActions.OuterSingleton;
}

// Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit @ 14cd40cb0

UFunction * __cdecl Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign @ 14cd40cf0

UFunction * __cdecl Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUVProjectionToolEditActions_Reset @ 14cd40d30

UFunction * __cdecl Z_Construct_UFunction_UUVProjectionToolEditActions_Reset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUVProjectionToolEditActions_Reset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPolyEditInsetOutsetProperties_NoRegister @ 14cd40d70

UClass * __cdecl Z_Construct_UClass_UPolyEditInsetOutsetProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsetOutsetProperties",
               &Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.InnerSingleton,
               UPolyEditInsetOutsetProperties::StaticRegisterNativesUPolyEditInsetOutsetProperties,
               0xc0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsetOutsetProperties>,
               InternalVTableHelperCtorCaller<UPolyEditInsetOutsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.InnerSingleton;
}

// EUVProjectionToolInitializationMode_StaticEnum @ 14cd40fb0

UEnum * __cdecl EUVProjectionToolInitializationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode,
                       (UObject *)pUVar1,L"EUVProjectionToolInitializationMode");
  }
  return Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.OuterSingleton;
}

// NewProp_bProportionalDimensions_SetBit @ 14cd40ff0

void __cdecl
Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bProportionalDimensions_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bSavedProportionalDimensions_SetBit @ 14cd41000

void __cdecl
Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bSavedProportionalDimensions_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x128) = 1;
  return;
}

// Z_Construct_UClass_UUVLayoutTool @ 14cd41010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUVLayoutTool(void)

{
  if (Z_Registration_Info_UClass_UUVLayoutTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUVLayoutTool.OuterSingleton,
               &Z_Construct_UClass_UUVLayoutTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUVLayoutTool.OuterSingleton;
}

// Z_Construct_UClass_UUVLayoutToolBuilder @ 14cd41050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUVLayoutToolBuilder(void)

{
  if (Z_Registration_Info_UClass_UUVLayoutToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUVLayoutToolBuilder.OuterSingleton,
               &Z_Construct_UClass_UUVLayoutToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUVLayoutToolBuilder.OuterSingleton;
}

// Z_Construct_UClass_UDiffusionSmoothProperties @ 14cd41090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDiffusionSmoothProperties(void)

{
  if (Z_Registration_Info_UClass_UDiffusionSmoothProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDiffusionSmoothProperties.OuterSingleton,
               &Z_Construct_UClass_UDiffusionSmoothProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDiffusionSmoothProperties.OuterSingleton;
}

// Z_Construct_UClass_UImplicitSmoothProperties @ 14cd410d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImplicitSmoothProperties(void)

{
  if (Z_Registration_Info_UClass_UImplicitSmoothProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImplicitSmoothProperties.OuterSingleton,
               &Z_Construct_UClass_UImplicitSmoothProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImplicitSmoothProperties.OuterSingleton;
}

// Z_Construct_UClass_UIterativeSmoothProperties @ 14cd41110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIterativeSmoothProperties(void)

{
  if (Z_Registration_Info_UClass_UIterativeSmoothProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIterativeSmoothProperties.OuterSingleton,
               &Z_Construct_UClass_UIterativeSmoothProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIterativeSmoothProperties.OuterSingleton;
}

// Z_Construct_UClass_USmoothMeshTool @ 14cd41150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USmoothMeshTool(void)

{
  if (Z_Registration_Info_UClass_USmoothMeshTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USmoothMeshTool.OuterSingleton,
               &Z_Construct_UClass_USmoothMeshTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USmoothMeshTool.OuterSingleton;
}

// Z_Construct_UClass_USmoothMeshToolBuilder @ 14cd41190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USmoothMeshToolBuilder(void)

{
  if (Z_Registration_Info_UClass_USmoothMeshToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USmoothMeshToolBuilder.OuterSingleton,
               &Z_Construct_UClass_USmoothMeshToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USmoothMeshToolBuilder.OuterSingleton;
}

// Z_Construct_UClass_USmoothMeshToolProperties @ 14cd411d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USmoothMeshToolProperties(void)

{
  if (Z_Registration_Info_UClass_USmoothMeshToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USmoothMeshToolProperties.OuterSingleton,
               &Z_Construct_UClass_USmoothMeshToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USmoothMeshToolProperties.OuterSingleton;
}

// Z_Construct_UClass_USmoothWeightMapSetProperties @ 14cd41210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USmoothWeightMapSetProperties(void)

{
  if (Z_Registration_Info_UClass_USmoothWeightMapSetProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USmoothWeightMapSetProperties.OuterSingleton,
               &Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USmoothWeightMapSetProperties.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_ESmoothMeshToolSmoothType @ 14cd41250

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_ESmoothMeshToolSmoothType(void)

{
  if (Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_ESmoothMeshToolSmoothType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.InnerSingleton;
}

// ESmoothMeshToolSmoothType_StaticEnum @ 14cd41290

UEnum * __cdecl ESmoothMeshToolSmoothType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_ESmoothMeshToolSmoothType,
                       (UObject *)pUVar1,L"ESmoothMeshToolSmoothType");
  }
  return Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.OuterSingleton;
}

// NewProp_bSmoothBoundary_SetBit @ 14cd412d0

void __cdecl
Z_Construct_UClass_UIterativeSmoothProperties_Statics::NewProp_bSmoothBoundary_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// Z_Construct_UClass_UPolyEditBevelEdgeProperties_NoRegister @ 14cd412e0

UClass * __cdecl Z_Construct_UClass_UPolyEditBevelEdgeProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditBevelEdgeProperties",
               &Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.InnerSingleton,
               UPolyEditBevelEdgeProperties::StaticRegisterNativesUPolyEditBevelEdgeProperties,200,8
               ,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditBevelEdgeProperties>,
               InternalVTableHelperCtorCaller<UPolyEditBevelEdgeProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditInsetOutsetActivity @ 14cd41460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditInsetOutsetActivity(void)

{
  if (Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.OuterSingleton,
               &Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditInsetOutsetProperties @ 14cd414a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditInsetOutsetProperties(void)

{
  if (Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.OuterSingleton,
               &Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.OuterSingleton;
}

// NewProp_bPreserveUVs_SetBit @ 14cd414e0

void __cdecl
Z_Construct_UClass_UDiffusionSmoothProperties_Statics::NewProp_bPreserveUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// NewProp_bBoundaryOnly_SetBit @ 14cd414f0

void __cdecl
Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// NewProp_bReproject_SetBit @ 14cd41500

void __cdecl
Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return;
}

// NewProp_bOutset_SetBit @ 14cd41510

void __cdecl
Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbd) = 1;
  return;
}

// NewProp_bPreserveUVs_SetBit @ 14cd415e0

void __cdecl
Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_bPreserveUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// Z_Construct_UClass_UPolyEditCutFacesActivity @ 14cd415f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditCutFacesActivity(void)

{
  if (Z_Registration_Info_UClass_UPolyEditCutFacesActivity.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditCutFacesActivity.OuterSingleton,
               &Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditCutFacesActivity.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditCutProperties @ 14cd41630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditCutProperties(void)

{
  if (Z_Registration_Info_UClass_UPolyEditCutProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditCutProperties.OuterSingleton,
               &Z_Construct_UClass_UPolyEditCutProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditCutProperties.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation @ 14cd41670

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation(void)

{
  if (Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.InnerSingleton;
}

// EPolyEditCutPlaneOrientation_StaticEnum @ 14cd416b0

UEnum * __cdecl EPolyEditCutPlaneOrientation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation,
                       (UObject *)pUVar1,L"EPolyEditCutPlaneOrientation");
  }
  return Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton;
}

// NewProp_bSnapToVertices_SetBit @ 14cd416f0

void __cdecl
Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// Z_Construct_UClass_UPolyEditSetUVProperties_NoRegister @ 14cd41700

UClass * __cdecl Z_Construct_UClass_UPolyEditSetUVProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditSetUVProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditSetUVProperties",
               &Z_Registration_Info_UClass_UPolyEditSetUVProperties.InnerSingleton,
               UPolyEditSetUVProperties::StaticRegisterNativesUPolyEditSetUVProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditSetUVProperties>,
               InternalVTableHelperCtorCaller<UPolyEditSetUVProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditSetUVProperties.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity @ 14cd41940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity(void)

{
  if (Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.OuterSingleton,
               &Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditSetUVProperties @ 14cd41980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditSetUVProperties(void)

{
  if (Z_Registration_Info_UClass_UPolyEditSetUVProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditSetUVProperties.OuterSingleton,
               &Z_Construct_UClass_UPolyEditSetUVProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditSetUVProperties.OuterSingleton;
}

// NewProp_bShowMaterial_SetBit @ 14cd419c0

void __cdecl
Z_Construct_UClass_UPolyEditSetUVProperties_Statics::NewProp_bShowMaterial_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// Z_Construct_UClass_UPolyEditExtrudeEdgeActivity @ 14cd419d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditExtrudeEdgeActivity(void)

{
  if (Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.OuterSingleton,
               &Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties @ 14cd41a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties(void)

{
  if (Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.OuterSingleton,
               &Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode @ 14cd41a50

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode(void)

{
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode @ 14cd41a90

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode(void)

{
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.InnerSingleton;
}

// EPolyEditExtrudeEdgeDirectionMode_StaticEnum @ 14cd41ad0

UEnum * __cdecl EPolyEditExtrudeEdgeDirectionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode,
                       (UObject *)pUVar1,L"EPolyEditExtrudeEdgeDirectionMode");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.OuterSingleton;
}

// EPolyEditExtrudeEdgeDistanceMode_StaticEnum @ 14cd41b10

UEnum * __cdecl EPolyEditExtrudeEdgeDistanceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode,
                       (UObject *)pUVar1,L"EPolyEditExtrudeEdgeDistanceMode");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.OuterSingleton;
}

// NewProp_bUseUnselectedForFrames_SetBit @ 14cd41b50

void __cdecl
Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::
NewProp_bUseUnselectedForFrames_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bAdjustToExtrudeEvenly_SetBit @ 14cd41b60

void __cdecl
Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::
NewProp_bAdjustToExtrudeEvenly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
  return;
}

// Z_Construct_UClass_UGroupEdgeInsertionProperties_NoRegister @ 14cd41b70

UClass * __cdecl Z_Construct_UClass_UGroupEdgeInsertionProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupEdgeInsertionProperties",
               &Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.InnerSingleton,
               UGroupEdgeInsertionProperties::StaticRegisterNativesUGroupEdgeInsertionProperties,
               0xc0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroupEdgeInsertionProperties>,
               InternalVTableHelperCtorCaller<UGroupEdgeInsertionProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditExtrudeProperties_NoRegister @ 14cd41db0

UClass * __cdecl Z_Construct_UClass_UPolyEditExtrudeProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeProperties",
               &Z_Registration_Info_UClass_UPolyEditExtrudeProperties.InnerSingleton,
               UPolyEditExtrudeProperties::StaticRegisterNativesUPolyEditExtrudeProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeProperties>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeProperties.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditOffsetProperties_NoRegister @ 14cd41e70

UClass * __cdecl Z_Construct_UClass_UPolyEditOffsetProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditOffsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditOffsetProperties",
               &Z_Registration_Info_UClass_UPolyEditOffsetProperties.InnerSingleton,
               UPolyEditOffsetProperties::StaticRegisterNativesUPolyEditOffsetProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditOffsetProperties>,
               InternalVTableHelperCtorCaller<UPolyEditOffsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditOffsetProperties.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditPushPullProperties_NoRegister @ 14cd41f30

UClass * __cdecl Z_Construct_UClass_UPolyEditPushPullProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditPushPullProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditPushPullProperties",
               &Z_Registration_Info_UClass_UPolyEditPushPullProperties.InnerSingleton,
               UPolyEditPushPullProperties::StaticRegisterNativesUPolyEditPushPullProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditPushPullProperties>,
               InternalVTableHelperCtorCaller<UPolyEditPushPullProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditPushPullProperties.InnerSingleton;
}

// Z_Construct_UClass_UGroupEdgeInsertionProperties @ 14cd42470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGroupEdgeInsertionProperties(void)

{
  if (Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.OuterSingleton,
               &Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditInsertEdgeActivity @ 14cd424b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditInsertEdgeActivity(void)

{
  if (Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.OuterSingleton,
               &Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode @ 14cd424f0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode(void)

{
  if (Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.InnerSingleton;
}

// EGroupEdgeInsertionMode_StaticEnum @ 14cd42530

UEnum * __cdecl EGroupEdgeInsertionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode,(UObject *)pUVar1
                       ,L"EGroupEdgeInsertionMode");
  }
  return Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.OuterSingleton;
}

// NewProp_bContinuousInsertion_SetBit @ 14cd42570

void __cdecl
Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_bContinuousInsertion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister @ 14cd42580

UClass * __cdecl Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesToolProperties",
               &Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.InnerSingleton,
               UWeldMeshEdgesToolProperties::StaticRegisterNativesUWeldMeshEdgesToolProperties,0xd8,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWeldMeshEdgesToolProperties>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister @ 14cd42640

UClass * __cdecl Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesOperatorFactory",
               &Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.InnerSingleton,
               UWeldMeshEdgesOperatorFactory::StaticRegisterNativesUWeldMeshEdgesOperatorFactory,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWeldMeshEdgesOperatorFactory>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.InnerSingleton;
}

// Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister @ 14cd426f0

UClass * __cdecl Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesTool",
               &Z_Registration_Info_UClass_UWeldMeshEdgesTool.InnerSingleton,
               UWeldMeshEdgesTool::StaticRegisterNativesUWeldMeshEdgesTool,0x1c8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWeldMeshEdgesTool>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesTool.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_NoRegister @ 14cd42870

UClass * __cdecl Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeEdgeActivityProperties",
               &Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.InnerSingleton,
               UPolyEditExtrudeEdgeActivityProperties::
               StaticRegisterNativesUPolyEditExtrudeEdgeActivityProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeEdgeActivityProperties>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivityProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.InnerSingleton;
}

// Z_Construct_UClass_UUVProjectionToolEditActions_NoRegister @ 14cd42ab0

UClass * __cdecl Z_Construct_UClass_UUVProjectionToolEditActions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionToolEditActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionToolEditActions",
               &Z_Registration_Info_UClass_UUVProjectionToolEditActions.InnerSingleton,
               UUVProjectionToolEditActions::StaticRegisterNativesUUVProjectionToolEditActions,0xb8,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVProjectionToolEditActions>,
               InternalVTableHelperCtorCaller<UUVProjectionToolEditActions>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolEditActions.InnerSingleton;
}

// Z_Construct_UClass_UUVProjectionToolProperties_NoRegister @ 14cd42b70

UClass * __cdecl Z_Construct_UClass_UUVProjectionToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionToolProperties",
               &Z_Registration_Info_UClass_UUVProjectionToolProperties.InnerSingleton,
               UUVProjectionToolProperties::StaticRegisterNativesUUVProjectionToolProperties,400,
               0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVProjectionToolProperties>,
               InternalVTableHelperCtorCaller<UUVProjectionToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UUVProjectionOperatorFactory_NoRegister @ 14cd42c30

UClass * __cdecl Z_Construct_UClass_UUVProjectionOperatorFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionOperatorFactory",
               &Z_Registration_Info_UClass_UUVProjectionOperatorFactory.InnerSingleton,
               UUVProjectionOperatorFactory::StaticRegisterNativesUUVProjectionOperatorFactory,0x38,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVProjectionOperatorFactory>,
               InternalVTableHelperCtorCaller<UUVProjectionOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionOperatorFactory.InnerSingleton;
}

// Z_Construct_UClass_UUVProjectionTool_NoRegister @ 14cd42ce0

UClass * __cdecl Z_Construct_UClass_UUVProjectionTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionTool",
               &Z_Registration_Info_UClass_UUVProjectionTool.InnerSingleton,
               UUVProjectionTool::StaticRegisterNativesUUVProjectionTool,0x520,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVProjectionTool>,
               InternalVTableHelperCtorCaller<UUVProjectionTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionTool.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditBevelEdgeActivity @ 14cd43150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditBevelEdgeActivity(void)

{
  if (Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.OuterSingleton,
               &Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditBevelEdgeProperties @ 14cd43190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditBevelEdgeProperties(void)

{
  if (Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.OuterSingleton,
               &Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.OuterSingleton;
}

// NewProp_bInferMaterialID_SetBit @ 14cd43290

void __cdecl
Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_bInferMaterialID_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// Z_Construct_UClass_USmoothMeshToolProperties_NoRegister @ 14cd43410

UClass * __cdecl Z_Construct_UClass_USmoothMeshToolProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothMeshToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothMeshToolProperties",
               &Z_Registration_Info_UClass_USmoothMeshToolProperties.InnerSingleton,
               USmoothMeshToolProperties::StaticRegisterNativesUSmoothMeshToolProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USmoothMeshToolProperties>,
               InternalVTableHelperCtorCaller<USmoothMeshToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothMeshToolProperties.InnerSingleton;
}

// Z_Construct_UClass_UIterativeSmoothProperties_NoRegister @ 14cd434d0

UClass * __cdecl Z_Construct_UClass_UIterativeSmoothProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIterativeSmoothProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"IterativeSmoothProperties",
               &Z_Registration_Info_UClass_UIterativeSmoothProperties.InnerSingleton,
               UIterativeSmoothProperties::StaticRegisterNativesUIterativeSmoothProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UIterativeSmoothProperties>,
               InternalVTableHelperCtorCaller<UIterativeSmoothProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIterativeSmoothProperties.InnerSingleton;
}

// Z_Construct_UClass_UDiffusionSmoothProperties_NoRegister @ 14cd43590

UClass * __cdecl Z_Construct_UClass_UDiffusionSmoothProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDiffusionSmoothProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DiffusionSmoothProperties",
               &Z_Registration_Info_UClass_UDiffusionSmoothProperties.InnerSingleton,
               UDiffusionSmoothProperties::StaticRegisterNativesUDiffusionSmoothProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDiffusionSmoothProperties>,
               InternalVTableHelperCtorCaller<UDiffusionSmoothProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDiffusionSmoothProperties.InnerSingleton;
}

// Z_Construct_UClass_UImplicitSmoothProperties_NoRegister @ 14cd43650

UClass * __cdecl Z_Construct_UClass_UImplicitSmoothProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImplicitSmoothProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ImplicitSmoothProperties",
               &Z_Registration_Info_UClass_UImplicitSmoothProperties.InnerSingleton,
               UImplicitSmoothProperties::StaticRegisterNativesUImplicitSmoothProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UImplicitSmoothProperties>,
               InternalVTableHelperCtorCaller<UImplicitSmoothProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImplicitSmoothProperties.InnerSingleton;
}

// Z_Construct_UClass_USmoothWeightMapSetProperties_NoRegister @ 14cd43710

UClass * __cdecl Z_Construct_UClass_USmoothWeightMapSetProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothWeightMapSetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothWeightMapSetProperties",
               &Z_Registration_Info_UClass_USmoothWeightMapSetProperties.InnerSingleton,
               USmoothWeightMapSetProperties::StaticRegisterNativesUSmoothWeightMapSetProperties,
               0xd8,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USmoothWeightMapSetProperties>,
               InternalVTableHelperCtorCaller<USmoothWeightMapSetProperties>,local_res8,
               UWeightMapSetProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothWeightMapSetProperties.InnerSingleton;
}

// Z_Construct_UClass_UWeldMeshEdgesOperatorFactory @ 14cd43a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWeldMeshEdgesOperatorFactory(void)

{
  if (Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.OuterSingleton,
               &Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.OuterSingleton;
}

// Z_Construct_UClass_UWeldMeshEdgesTool @ 14cd43a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWeldMeshEdgesTool(void)

{
  if (Z_Registration_Info_UClass_UWeldMeshEdgesTool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWeldMeshEdgesTool.OuterSingleton,
               &Z_Construct_UClass_UWeldMeshEdgesTool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesTool.OuterSingleton;
}

// Z_Construct_UClass_UWeldMeshEdgesToolBuilder @ 14cd43a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWeldMeshEdgesToolBuilder(void)

{
  if (Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.OuterSingleton,
               &Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.OuterSingleton;
}

// Z_Construct_UClass_UWeldMeshEdgesToolProperties @ 14cd43ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWeldMeshEdgesToolProperties(void)

{
  if (Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.OuterSingleton,
               &Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EWeldMeshEdgesAttributeUIMode @ 14cd43b10

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EWeldMeshEdgesAttributeUIMode(void)

{
  if (Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EWeldMeshEdgesAttributeUIMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.InnerSingleton;
}

// EWeldMeshEdgesAttributeUIMode_StaticEnum @ 14cd43c10

UEnum * __cdecl EWeldMeshEdgesAttributeUIMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EWeldMeshEdgesAttributeUIMode,
                       (UObject *)pUVar1,L"EWeldMeshEdgesAttributeUIMode");
  }
  return Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.OuterSingleton;
}

// Z_Construct_UClass_UEdgeLoopInsertionProperties_NoRegister @ 14cd43d10

UClass * __cdecl Z_Construct_UClass_UEdgeLoopInsertionProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EdgeLoopInsertionProperties",
               &Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.InnerSingleton,
               UEdgeLoopInsertionProperties::StaticRegisterNativesUEdgeLoopInsertionProperties,0xe0,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEdgeLoopInsertionProperties>,
               InternalVTableHelperCtorCaller<UEdgeLoopInsertionProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.InnerSingleton;
}

// NewProp_bOnlyUnique_SetBit @ 14cd43dd0

void __cdecl
Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// NewProp_bResolveTJunctions_SetBit @ 14cd43de0

void __cdecl
Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
  return;
}

// NewProp_bSplitBowties_SetBit @ 14cd43df0

void __cdecl
Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bSplitBowties_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
  return;
}

// Z_Construct_UClass_UPolyEditExtrudeActivity @ 14cd43f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditExtrudeActivity(void)

{
  if (Z_Registration_Info_UClass_UPolyEditExtrudeActivity.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditExtrudeActivity.OuterSingleton,
               &Z_Construct_UClass_UPolyEditExtrudeActivity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeActivity.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditExtrudeProperties @ 14cd43fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditExtrudeProperties(void)

{
  if (Z_Registration_Info_UClass_UPolyEditExtrudeProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditExtrudeProperties.OuterSingleton,
               &Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeProperties.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditOffsetProperties @ 14cd44000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditOffsetProperties(void)

{
  if (Z_Registration_Info_UClass_UPolyEditOffsetProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditOffsetProperties.OuterSingleton,
               &Z_Construct_UClass_UPolyEditOffsetProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditOffsetProperties.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditPushPullProperties @ 14cd44040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditPushPullProperties(void)

{
  if (Z_Registration_Info_UClass_UPolyEditPushPullProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditPushPullProperties.OuterSingleton,
               &Z_Construct_UClass_UPolyEditPushPullProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditPushPullProperties.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection @ 14cd44080

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection(void)

{
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode @ 14cd440c0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode(void)

{
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions @ 14cd44100

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions(void)

{
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions @ 14cd44140

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions(void)

{
  if (Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions @ 14cd44180

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions(void)

{
  if (Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.InnerSingleton;
}

// EPolyEditExtrudeDirection_StaticEnum @ 14cd441c0

UEnum * __cdecl EPolyEditExtrudeDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection,
                       (UObject *)pUVar1,L"EPolyEditExtrudeDirection");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.OuterSingleton;
}

// EPolyEditExtrudeDistanceMode_StaticEnum @ 14cd442c0

UEnum * __cdecl EPolyEditExtrudeDistanceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode,
                       (UObject *)pUVar1,L"EPolyEditExtrudeDistanceMode");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.OuterSingleton;
}

// EPolyEditExtrudeModeOptions_StaticEnum @ 14cd44300

UEnum * __cdecl EPolyEditExtrudeModeOptions_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions,
                       (UObject *)pUVar1,L"EPolyEditExtrudeModeOptions");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.OuterSingleton;
}

// EPolyEditOffsetModeOptions_StaticEnum @ 14cd44340

UEnum * __cdecl EPolyEditOffsetModeOptions_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions,
                       (UObject *)pUVar1,L"EPolyEditOffsetModeOptions");
  }
  return Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.OuterSingleton;
}

// EPolyEditPushPullModeOptions_StaticEnum @ 14cd44380

UEnum * __cdecl EPolyEditPushPullModeOptions_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions,
                       (UObject *)pUVar1,L"EPolyEditPushPullModeOptions");
  }
  return Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.OuterSingleton;
}

// NewProp_bShellsToSolids_SetBit @ 14cd443c0

void __cdecl
Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::NewProp_bShellsToSolids_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bUseColinearityForSettingBorderGroups_SetBit @ 14cd443d0

void __cdecl
Z_Construct_UClass_UPolyEditExtrudeProperties_Statics::
NewProp_bUseColinearityForSettingBorderGroups_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// NewProp_bShellsToSolids_SetBit @ 14cd443e0

void __cdecl
Z_Construct_UClass_UPolyEditOffsetProperties_Statics::NewProp_bShellsToSolids_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bUseColinearityForSettingBorderGroups_SetBit @ 14cd443f0

void __cdecl
Z_Construct_UClass_UPolyEditOffsetProperties_Statics::
NewProp_bUseColinearityForSettingBorderGroups_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// Z_Construct_UClass_UEdgeLoopInsertionProperties @ 14cd44400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEdgeLoopInsertionProperties(void)

{
  if (Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.OuterSingleton,
               &Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.OuterSingleton;
}

// Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity @ 14cd44440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity(void)

{
  if (Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.OuterSingleton,
               &Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.OuterSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode @ 14cd44480

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode(void)

{
  if (Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode @ 14cd444c0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode(void)

{
  if (Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.InnerSingleton;
}

// EEdgeLoopPositioningMode_StaticEnum @ 14cd44500

UEnum * __cdecl EEdgeLoopPositioningMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode,
                       (UObject *)pUVar1,L"EEdgeLoopPositioningMode");
  }
  return Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton;
}

// EEdgeLoopInsertionMode_StaticEnum @ 14cd44540

UEnum * __cdecl EEdgeLoopInsertionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode,(UObject *)pUVar1,
                       L"EEdgeLoopInsertionMode");
  }
  return Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton;
}

// NewProp_bShellsToSolids_SetBit @ 14cd44580

void __cdecl
Z_Construct_UClass_UPolyEditPushPullProperties_Statics::NewProp_bShellsToSolids_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bUseColinearityForSettingBorderGroups_SetBit @ 14cd44590

void __cdecl
Z_Construct_UClass_UPolyEditPushPullProperties_Statics::
NewProp_bUseColinearityForSettingBorderGroups_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// NewProp_bInteractive_SetBit @ 14cd445a0

void __cdecl
Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bFlipOffsetDirection_SetBit @ 14cd445b0

void __cdecl
Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  return;
}

// NewProp_bHighlightProblemGroups_SetBit @ 14cd445c0

void __cdecl
Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd2) = 1;
  return;
}

// Z_Construct_UClass_UPolyEditCutProperties_NoRegister @ 14cd44690

UClass * __cdecl Z_Construct_UClass_UPolyEditCutProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditCutProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditCutProperties",
               &Z_Registration_Info_UClass_UPolyEditCutProperties.InnerSingleton,
               UPolyEditCutProperties::StaticRegisterNativesUPolyEditCutProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditCutProperties>,
               InternalVTableHelperCtorCaller<UPolyEditCutProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditCutProperties.InnerSingleton;
}

// AddLambda<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_> @ 14cd45340

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
::AddLambda<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_12>_>
          (TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
           *this,<lambda_12> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UWeldMeshEdgesTool *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UWeldMeshEdgesTool *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UWeldMeshEdgesTool *)0x0;
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
      pUVar5 = (UWeldMeshEdgesTool *)*puVar3;
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

// AddLambda<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_> @ 14cd45590

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
::AddLambda<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_13>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
           *this,<lambda_13> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UWeldMeshEdgesTool *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UWeldMeshEdgesTool *)0x0;
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UWeldMeshEdgesTool *)0x0;
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
      pUVar5 = (UWeldMeshEdgesTool *)*puVar3;
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

// AddLambda<`UUVProjectionTool::Setup'::__l2::<lambda_1>_> @ 14cd457e0

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
TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>::
AddLambda<_UUVProjectionTool::Setup_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UUVProjectionTool *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UUVProjectionTool *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UUVProjectionTool *)0x0;
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
      pUVar5 = (UUVProjectionTool *)*puVar3;
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

// AddLambda<`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_> @ 14cd45a30

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
::AddLambda<_UUVLayoutTool::UpdateNumPreviews_::__l11::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UUVLayoutTool *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UUVLayoutTool *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UUVLayoutTool *)0x0;
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
      pUVar5 = (UUVLayoutTool *)*puVar3;
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

// AddLambda<`UUVProjectionTool::Setup'::__l2::<lambda_3>_> @ 14cd45c80

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
TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>::
AddLambda<_UUVProjectionTool::Setup_::__l2::<lambda_3>_>
          (TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
           *this,<lambda_3> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UUVProjectionTool *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UUVProjectionTool *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__PEAVFProperty___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UUVProjectionTool *)0x0;
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
      pUVar5 = (UUVProjectionTool *)*puVar3;
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

// AddWeakLambda<UPolyEditBevelEdgeActivity,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_> @ 14cd469d0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
::AddWeakLambda<UPolyEditBevelEdgeActivity,_UPolyEditBevelEdgeActivity::Start_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
           *this,UPolyEditBevelEdgeActivity *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
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

// AddWeakLambda<UPolyEditExtrudeActivity,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_> @ 14cd46c90

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
::AddWeakLambda<UPolyEditExtrudeActivity,_UPolyEditExtrudeActivity::Start_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
           *this,UPolyEditExtrudeActivity *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
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

// AddWeakLambda<UPolyEditExtrudeEdgeActivity,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_> @ 14cd46f50

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
::
AddWeakLambda<UPolyEditExtrudeEdgeActivity,_UPolyEditExtrudeEdgeActivity::Setup_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
           *this,UPolyEditExtrudeEdgeActivity *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar5 = 0;
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
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
  *(undefined8 *)param_1 = 0;
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
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
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
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_70.DelegateSize;
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

// AddWeakLambda<UPolyEditExtrudeEdgeActivity,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_> @ 14cd47210

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
TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
::
AddWeakLambda<UPolyEditExtrudeEdgeActivity,_UPolyEditExtrudeEdgeActivity::Start_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
           *this,UPolyEditExtrudeEdgeActivity *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar5 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
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
  *(undefined8 *)param_1 = 0;
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
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
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
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_70.DelegateSize;
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

// AddWeakLambda<UPolyEditExtrudeEdgeActivity,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_> @ 14cd474d0

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
::
AddWeakLambda<UPolyEditExtrudeEdgeActivity,_UPolyEditExtrudeEdgeActivity::Setup_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
           *this,UPolyEditExtrudeEdgeActivity *param_1,<lambda_2> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R9;
  <lambda_2> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar5 = 0;
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
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_2>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
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
  *(undefined8 *)param_1 = 0;
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
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
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
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_70.DelegateSize;
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

// AddWeakLambda<UPolyEditExtrudeEdgeActivity,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_> @ 14cd47790

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
TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
::
AddWeakLambda<UPolyEditExtrudeEdgeActivity,_UPolyEditExtrudeEdgeActivity::Start_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
           *this,UPolyEditExtrudeEdgeActivity *param_1,<lambda_2> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R9;
  <lambda_2> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar5 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::`2'::<lambda_2>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
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
  *(undefined8 *)param_1 = 0;
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
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
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
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_70.DelegateSize;
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

// AddWeakLambda<UPolyEditInsertEdgeActivity,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_> @ 14cd47a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
AddWeakLambda<UPolyEditInsertEdgeActivity,_UPolyEditInsertEdgeActivity::Setup_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *this,
          UPolyEditInsertEdgeActivity *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
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

// AddWeakLambda<UPolyEditInsertEdgeActivity,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_> @ 14cd47d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
::
AddWeakLambda<UPolyEditInsertEdgeActivity,_UPolyEditInsertEdgeActivity::SetupPreview_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
           *this,UPolyEditInsertEdgeActivity *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
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

// AddWeakLambda<UPolyEditInsertEdgeActivity,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_> @ 14cd47fd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
::
AddWeakLambda<UPolyEditInsertEdgeActivity,_UPolyEditInsertEdgeActivity::SetupPreview_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
           *this,UPolyEditInsertEdgeActivity *param_1,<lambda_2> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  <lambda_2> *local_res10;
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::`2'::<lambda_2>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
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

// AddWeakLambda<UPolyEditInsertEdgeLoopActivity,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_> @ 14cd48290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
AddWeakLambda<UPolyEditInsertEdgeLoopActivity,_UPolyEditInsertEdgeLoopActivity::Setup_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *this,
          UPolyEditInsertEdgeLoopActivity *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar5 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
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
  *(undefined8 *)param_1 = 0;
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
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
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
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_70.DelegateSize;
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

// AddWeakLambda<UPolyEditInsertEdgeLoopActivity,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_> @ 14cd48550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
::
AddWeakLambda<UPolyEditInsertEdgeLoopActivity,_UPolyEditInsertEdgeLoopActivity::SetupPreview_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
           *this,UPolyEditInsertEdgeLoopActivity *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R9;
  <lambda_1> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar5 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFDynamicMeshOperator_Geometry_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_1> *)0x0)) {
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
  *(undefined8 *)param_1 = 0;
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
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
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
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_70.DelegateSize;
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

// AddWeakLambda<UPolyEditInsertEdgeLoopActivity,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_> @ 14cd48810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
::
AddWeakLambda<UPolyEditInsertEdgeLoopActivity,_UPolyEditInsertEdgeLoopActivity::SetupPreview_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
           *this,UPolyEditInsertEdgeLoopActivity *param_1,<lambda_2> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R9;
  <lambda_2> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar5 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeshOpPreviewWithBackgroundCompute___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::`2'::<lambda_2>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
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
  *(undefined8 *)param_1 = 0;
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
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
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
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_70.DelegateSize;
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

// DestructItems<UE::Geometry::FMeshBevel::FBevelEdge,int> @ 14cd48f00

void __cdecl
DestructItems<UE::Geometry::FMeshBevel::FBevelEdge,int>(FBevelEdge *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->NormalsA;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
                 (((TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)(pTVar2 + -1))->AllocatorInstance).Data,
                 ((TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(pTVar2 + -1))->ArrayNum);
      pFVar1 = (((TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 (((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                  (pTVar2 + -2))->AllocatorInstance).Data,
                 ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (pTVar2 + -2))->ArrayNum);
      pFVar1 = (((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -2))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
                ((longlong)(pTVar2 + -4) + 8))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-5].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-6].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + -7))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + -8))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -10) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -10) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -0xc) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -0xc) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -0xd) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -0xd) + 8));
      }
      pFVar1 = (((FBevelEdge *)(pTVar2 + -0xe))->MeshVertices).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FMeshBevel::FBevelLoop,int> @ 14cd49020

void __cdecl
DestructItems<UE::Geometry::FMeshBevel::FBevelLoop,int>(FBevelLoop *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->NormalsA;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
                 (((TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)(pTVar2 + -1))->AllocatorInstance).Data,
                 ((TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(pTVar2 + -1))->ArrayNum);
      pFVar1 = (((TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 (((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                  (pTVar2 + -2))->AllocatorInstance).Data,
                 ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (pTVar2 + -2))->ArrayNum);
      pFVar1 = (((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -2))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -4) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -5) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -5) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -6) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -6) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -7) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -7) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -8) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -8) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -9) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -9) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -10) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -10) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -0xb) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -0xb) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -0xc) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -0xc) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -0xd) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -0xd) + 8));
      }
      pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 0xe) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FMeshBevel::FBevelVertex,int> @ 14cd49150

void __cdecl
DestructItems<UE::Geometry::FMeshBevel::FBevelVertex,int>(FBevelVertex *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->InteriorVertices;
    do {
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,int>
                ((FBevelVertex_InteriorVertex *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<UE::Geometry::FMeshBevel::FOneRingWedge,int>
                (*(FOneRingWedge **)((longlong)(pTVar2 + -4) + 8),*(int *)(pTVar2 + -3));
      if (*(void **)((longlong)(pTVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -4) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -5) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -5) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -6) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -6) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -7) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -7) + 8));
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + -8) + 8))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,TSizedDefaultAllocator<32>_>
                *)((longlong)(pTVar2 + 10) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UDiffusionSmoothProperties> @ 14cd49790

void __cdecl InternalConstructor<UDiffusionSmoothProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f4ccccd;
    this->_padding_ = (longlong)&___7UDiffusionSmoothProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UEdgeLoopInsertionProperties> @ 14cd497e0

void __cdecl InternalConstructor<UEdgeLoopInsertionProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UEdgeLoopInsertionProperties__6B_;
    this[1]._padding_ = 0x3fe0000000000000;
    this[1]._padding_ = 0x4024000000000000;
    this[1]._padding_ = 0x3f50624dd2f1a9fc;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined2 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
  }
  return;
}

// InternalConstructor<UGroupEdgeInsertionProperties> @ 14cd49870

void __cdecl InternalConstructor<UGroupEdgeInsertionProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UGroupEdgeInsertionProperties__6B_;
    this[1]._padding_ = 0x3f50624dd2f1a9fc;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UImplicitSmoothProperties> @ 14cd498d0

void __cdecl InternalConstructor<UImplicitSmoothProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3dcccccd;
    this->_padding_ = (longlong)&___7UImplicitSmoothProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3e4ccccd;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UIterativeSmoothProperties> @ 14cd49930

void __cdecl InternalConstructor<UIterativeSmoothProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f4ccccd;
    this->_padding_ = (longlong)&___7UIterativeSmoothProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 10;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UPolyEditBevelEdgeActivity> @ 14cd49980

void __cdecl InternalConstructor<UPolyEditBevelEdgeActivity>(FObjectInitializer *param_1)

{
  UInteractiveToolActivity *this;
  
  this = (UInteractiveToolActivity *)param_1->Obj;
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this);
    *(undefined ***)this = &UPolyEditBevelEdgeActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined ***)(this + 1) =
         &UPolyEditBevelEdgeActivity::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)&this[1].field_0x20);
    return;
  }
  return;
}

// InternalConstructor<UPolyEditBevelEdgeProperties> @ 14cd499e0

void __cdecl InternalConstructor<UPolyEditBevelEdgeProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    this->_padding_ = (longlong)&___7UPolyEditBevelEdgeProperties__6B_;
    this[1]._padding_ = 0x4010000000000000;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UPolyEditCutFacesActivity> @ 14cd49a40

void __cdecl InternalConstructor<UPolyEditCutFacesActivity>(FObjectInitializer *param_1)

{
  UInteractiveToolActivity *this;
  
  this = (UInteractiveToolActivity *)param_1->Obj;
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this);
    *(undefined4 *)&this[2].field_0x4 = 1;
    *(undefined ***)this = &UPolyEditCutFacesActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined ***)(this + 1) = &UPolyEditCutFacesActivity::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this[1].field_0x8 =
         &UPolyEditCutFacesActivity::_vftable__for__IHoverBehaviorTarget__;
    *(undefined1 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0x3ff0000000000000;
    *(undefined4 *)&this[3].field_0x20 = 0x42b40000;
    *(undefined4 *)&this[3].field_0x24 = 0x42c80000;
    *(undefined4 *)&this[3].field_0x28 = 0x3f800000;
    *(undefined2 *)&this[3].field_0x2c = 0;
    *(undefined8 *)(this + 4) = 0x3ff0000000000000;
  }
  return;
}

// InternalConstructor<UPolyEditCutProperties> @ 14cd49b10

void __cdecl InternalConstructor<UPolyEditCutProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditCutProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UPolyEditExtrudeActivity> @ 14cd49b50

void __cdecl InternalConstructor<UPolyEditExtrudeActivity>(FObjectInitializer *param_1)

{
  UInteractiveToolActivity *this;
  undefined8 uVar1;
  
  this = (UInteractiveToolActivity *)param_1->Obj;
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this);
    *(undefined ***)this = &UPolyEditExtrudeActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)(this + 1) =
         &UPolyEditExtrudeActivity::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    *(undefined ***)&this[1].field_0x8 =
         &UPolyEditExtrudeActivity::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this[1].field_0x10 =
         &UPolyEditExtrudeActivity::_vftable__for__IHoverBehaviorTarget__;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    this[3].field_0x8 = 0;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)&this[3].field_0x10);
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[8].field_0x28 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0x3ff0000000000000;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[8].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[8].field_0x18 = uVar1;
    *(double *)&this[8].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&this[8].field_0x28 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0x3ff0000000000000;
    this[9].field_0x1c = 0;
    *(undefined4 *)&this[9].field_0x18 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UPolyEditExtrudeEdgeActivity> @ 14cd49c70

void __cdecl InternalConstructor<UPolyEditExtrudeEdgeActivity>(FObjectInitializer *param_1)

{
  UInteractiveToolActivity *this;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  this = (UInteractiveToolActivity *)param_1->Obj;
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this);
    *(undefined ***)this = &UPolyEditExtrudeEdgeActivity::_vftable__for__UInteractiveToolActivity__;
    this[2].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined ***)(this + 1) =
         &UPolyEditExtrudeEdgeActivity::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    *(undefined8 *)&this[3].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[2].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[2].field_0x20 = uVar9;
    *(double *)&this[2].field_0x28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0x3ff0000000000000;
    this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0x3ff0000000000000;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x18 = 0x3ff0000000000000;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[4].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[4].field_0x20 = uVar9;
    *(double *)&this[4].field_0x28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0x3ff0000000000000;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)&this[6].field_0x20);
    *(undefined8 *)&this[0xb].field_0x28 = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)&this[0xc].field_0x8 = 0;
    *(undefined8 *)&this[0xc].field_0x10 = 0;
    *(undefined8 *)&this[0xc].field_0x18 = 0;
    *(undefined8 *)&this[0xc].field_0x20 = 0;
    *(undefined8 *)&this[0xc].field_0x28 = 0;
    *(undefined8 *)(this + 0xd) = 0;
    this[0xb].field_0x20 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[0xd].field_0x10 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[0xd].field_0x20 = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this + 0xe) = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[0xe].field_0x10 = auVar6;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[0xe].field_0x20 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this + 0xf) = auVar8;
    this[0xf].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UPolyEditExtrudeEdgeActivityProperties> @ 14cd49e50

void __cdecl
InternalConstructor<UPolyEditExtrudeEdgeActivityProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditExtrudeEdgeActivityProperties__6B_;
    this[1]._padding_ = 0x4034000000000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined2 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPolyEditExtrudeProperties> @ 14cd49eb0

void __cdecl InternalConstructor<UPolyEditExtrudeProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    this[1]._padding_ = 3;
    this->_padding_ = (longlong)&___7UPolyEditExtrudeProperties__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4010000000000000;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UPolyEditInsertEdgeActivity> @ 14cd49f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPolyEditInsertEdgeActivity>(FObjectInitializer *param_1)

{
  UInteractiveToolActivity *this;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  this = (UInteractiveToolActivity *)param_1->Obj;
  if (this == (UInteractiveToolActivity *)0x0) {
    return;
  }
  UInteractiveToolActivity::UInteractiveToolActivity(this);
  *(undefined ***)this = &UPolyEditInsertEdgeActivity::_vftable__for__UInteractiveToolActivity__;
  this[1].field_0x28 = 0;
  *(undefined ***)(this + 1) =
       &UPolyEditInsertEdgeActivity::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined ***)&this[1].field_0x8 =
       &UPolyEditInsertEdgeActivity::_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this[1].field_0x10 =
       &UPolyEditInsertEdgeActivity::_vftable__for__IClickBehaviorTarget__;
  *(undefined8 *)&this[1].field_0x20 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this + 2) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])&this[2].field_0x10 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this[2].field_0x20 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this + 3) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this[3].field_0x10 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])&this[3].field_0x20 = auVar8;
  *(undefined8 *)&this[4].field_0x18 = 0;
  *(undefined8 *)&this[4].field_0x28 = 0;
  *(undefined8 *)(this + 5) = 0;
  *(undefined8 *)&this[5].field_0x8 = 0;
  *(undefined8 *)&this[5].field_0x10 = 0;
  *(undefined8 *)&this[6].field_0x8 = 0x3ff0000000000000;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  *(undefined8 *)&this[4].field_0x10 = 0;
  *(undefined8 *)&this[4].field_0x20 = 0;
  *(undefined8 *)&this[5].field_0x20 = 0;
  *(undefined8 *)&this[5].field_0x28 = 0;
  *(undefined8 *)(this + 6) = 0;
  *(undefined4 *)&this[6].field_0x10 = 0x42b40000;
  *(undefined4 *)&this[6].field_0x14 = 0x42c80000;
  *(undefined4 *)&this[6].field_0x18 = 0x3f800000;
  *(undefined2 *)&this[6].field_0x1c = 0;
  *(undefined8 *)&this[6].field_0x20 = 0x3ff0000000000000;
  FToolDataVisualizer::FToolDataVisualizer((FToolDataVisualizer *)(this + 7));
  FToolDataVisualizer::FToolDataVisualizer((FToolDataVisualizer *)&this[0xd].field_0x10);
  *(undefined4 *)&this[0x13].field_0x20 = 0x1010101;
  *(undefined2 *)&this[0x13].field_0x24 = 0;
  this[0x13].field_0x26 = 0;
  *(undefined4 *)&this[0x14].field_0x20 = 0xffffffff;
  this[0x14].field_0x24 = 0;
  *(undefined4 *)&this[0x15].field_0x20 = 0xffffffff;
  this[0x15].field_0x24 = 0;
  *(undefined8 *)&this[0x15].field_0x28 = 0xffffffffffffffff;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(this + 0x16) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this[0x16].field_0x8 = uVar9;
  *(double *)&this[0x16].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this[0x16].field_0x18 = 0;
  *(undefined8 *)&this[0x16].field_0x20 = 0;
  *(undefined8 *)&this[0x16].field_0x28 = 0x3ff0000000000000;
  *(undefined4 *)(this + 0x17) = 0;
  *(undefined2 *)&this[0x17].field_0x4 = 0;
  *(undefined8 *)&this[0x17].field_0x8 = 0;
  *(undefined8 *)&this[0x17].field_0x10 = 0;
  *(undefined8 *)&this[0x17].field_0x18 = 0;
  *(undefined8 *)&this[0x17].field_0x20 = 0;
  *(undefined4 *)&this[0x17].field_0x28 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)&this[0x18].field_0x8 = 0;
  *(undefined8 *)&this[0x18].field_0x10 = 0;
  *(undefined8 *)&this[0x18].field_0x18 = 0;
  return;
}

// InternalConstructor<UPolyEditInsertEdgeLoopActivity> @ 14cd49f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPolyEditInsertEdgeLoopActivity>(FObjectInitializer *param_1)

{
  UInteractiveToolActivity *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = (UInteractiveToolActivity *)param_1->Obj;
  if (this == (UInteractiveToolActivity *)0x0) {
    return;
  }
  UInteractiveToolActivity::UInteractiveToolActivity(this);
  *(undefined ***)this = &UPolyEditInsertEdgeLoopActivity::_vftable__for__UInteractiveToolActivity__
  ;
  this[1].field_0x28 = 0;
  *(undefined ***)(this + 1) =
       &UPolyEditInsertEdgeLoopActivity::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  *(undefined ***)&this[1].field_0x8 =
       &UPolyEditInsertEdgeLoopActivity::_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this[1].field_0x10 =
       &UPolyEditInsertEdgeLoopActivity::_vftable__for__IClickBehaviorTarget__;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)(this + 2) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&this[2].field_0x8 = (double)fVar1;
  *(double *)&this[2].field_0x10 = (double)fVar2;
  *(double *)&this[2].field_0x18 = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&this[2].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&this[2].field_0x28 = (double)fVar1;
  *(double *)(this + 3) = (double)fVar2;
  *(double *)&this[3].field_0x8 = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&this[3].field_0x10 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&this[3].field_0x18 = (double)fVar1;
  *(double *)&this[3].field_0x20 = (double)fVar2;
  *(double *)&this[3].field_0x28 = (double)fVar3;
  *(undefined8 *)&this[4].field_0x18 = 0;
  *(undefined8 *)&this[4].field_0x28 = 0;
  *(undefined8 *)&this[5].field_0x8 = 0;
  *(undefined8 *)&this[5].field_0x10 = 0;
  *(undefined8 *)&this[5].field_0x18 = 0;
  *(undefined8 *)&this[5].field_0x20 = 0;
  *(undefined8 *)&this[6].field_0x18 = 0x3ff0000000000000;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  *(undefined8 *)&this[4].field_0x10 = 0;
  *(undefined8 *)&this[4].field_0x20 = 0;
  *(undefined8 *)(this + 5) = 0;
  *(undefined8 *)(this + 6) = 0;
  *(undefined8 *)&this[6].field_0x8 = 0;
  *(undefined8 *)&this[6].field_0x10 = 0;
  *(undefined4 *)&this[6].field_0x20 = 0x42b40000;
  *(undefined4 *)&this[6].field_0x24 = 0x42c80000;
  *(undefined4 *)&this[6].field_0x28 = 0x3f800000;
  *(undefined2 *)&this[6].field_0x2c = 0;
  *(undefined8 *)(this + 7) = 0x3ff0000000000000;
  FToolDataVisualizer::FToolDataVisualizer((FToolDataVisualizer *)&this[7].field_0x10);
  FToolDataVisualizer::FToolDataVisualizer((FToolDataVisualizer *)&this[0xd].field_0x20);
  *(undefined4 *)(this + 0x14) = 0x1010101;
  *(undefined2 *)&this[0x14].field_0x4 = 0;
  this[0x14].field_0x6 = 0;
  *(undefined4 *)&this[0x14].field_0x8 = 0x41000000;
  *(undefined8 *)&this[0x14].field_0x10 = 0;
  *(undefined8 *)&this[0x14].field_0x18 = 0;
  *(undefined8 *)&this[0x14].field_0x20 = 0;
  *(undefined8 *)&this[0x14].field_0x28 = 0;
  *(undefined4 *)(this + 0x15) = 0xffffffff;
  *(undefined8 *)&this[0x15].field_0x8 = 0;
  *(undefined2 *)&this[0x15].field_0x10 = 0;
  *(undefined8 *)&this[0x15].field_0x18 = 0;
  *(undefined8 *)&this[0x15].field_0x20 = 0;
  *(undefined8 *)&this[0x15].field_0x28 = 0;
  *(undefined8 *)(this + 0x16) = 0;
  return;
}

// InternalConstructor<UPolyEditInsetOutsetActivity> @ 14cd49f70

void __cdecl InternalConstructor<UPolyEditInsetOutsetActivity>(FObjectInitializer *param_1)

{
  UInteractiveToolActivity *this;
  
  this = (UInteractiveToolActivity *)param_1->Obj;
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this);
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
    *(undefined ***)this = &UPolyEditInsetOutsetActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined ***)(this + 1) =
         &UPolyEditInsetOutsetActivity::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this[1].field_0x8 =
         &UPolyEditInsetOutsetActivity::_vftable__for__IHoverBehaviorTarget__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined2 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UPolyEditInsetOutsetProperties> @ 14cd49fd0

void __cdecl InternalConstructor<UPolyEditInsetOutsetProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    this->_padding_ = (longlong)&___7UPolyEditInsetOutsetProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UPolyEditOffsetProperties> @ 14cd4a030

void __cdecl InternalConstructor<UPolyEditOffsetProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 2;
    this->_padding_ = (longlong)&___7UPolyEditOffsetProperties__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4010000000000000;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UPolyEditPlanarProjectionUVActivity> @ 14cd4a0b0

void __cdecl InternalConstructor<UPolyEditPlanarProjectionUVActivity>(FObjectInitializer *param_1)

{
  UInteractiveToolActivity *this;
  
  this = (UInteractiveToolActivity *)param_1->Obj;
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this);
    *(undefined ***)this =
         &UPolyEditPlanarProjectionUVActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined2 *)(this + 2) = 0;
    *(undefined ***)(this + 1) =
         &UPolyEditPlanarProjectionUVActivity::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this[1].field_0x8 =
         &UPolyEditPlanarProjectionUVActivity::_vftable__for__IHoverBehaviorTarget__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0x7fefffffffffffff;
    *(undefined8 *)&this[2].field_0x10 = 0x7fefffffffffffff;
    *(undefined8 *)&this[2].field_0x18 = 0x7fefffffffffffff;
    *(undefined8 *)&this[2].field_0x20 = 0xffefffffffffffff;
    *(undefined8 *)&this[2].field_0x28 = 0xffefffffffffffff;
    *(undefined8 *)(this + 3) = 0xffefffffffffffff;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0x42b40000;
    *(undefined4 *)&this[4].field_0x24 = 0x42c80000;
    *(undefined4 *)&this[4].field_0x28 = 0x3f800000;
    *(undefined2 *)&this[4].field_0x2c = 0;
    *(undefined8 *)(this + 5) = 0x3ff0000000000000;
  }
  return;
}

// InternalConstructor<UPolyEditPushPullProperties> @ 14cd4a1b0

void __cdecl InternalConstructor<UPolyEditPushPullProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditPushPullProperties__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4010000000000000;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UPolyEditSetUVProperties> @ 14cd4a230

void __cdecl InternalConstructor<UPolyEditSetUVProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditSetUVProperties__6B_;
  }
  return;
}

// InternalConstructor<USmoothMeshTool> @ 14cd4a270

void __cdecl InternalConstructor<USmoothMeshTool>(FObjectInitializer *param_1)

{
  USingleTargetWithSelectionTool *this;
  ITextData *pIVar1;
  ITextData *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  USingleTargetWithSelectionTool *pUVar6;
  FText *pFVar7;
  undefined1 auStackX_8 [8];
  FText FStack_18;
  
  this = (USingleTargetWithSelectionTool *)param_1->Obj;
  if (this == (USingleTargetWithSelectionTool *)0x0) {
    return;
  }
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool(this);
  this->_padding_ = (longlong)&UBaseMeshProcessingTool::_vftable__for__UObject__;
  *(undefined1 *)&this[1]._padding_ = 0;
  this->_padding_ = (longlong)&UBaseMeshProcessingTool::_vftable__for__IInputBehaviorSource__;
  this->_padding_ =
       (longlong)&UBaseMeshProcessingTool::_vftable__for__USingleTargetWithSelectionTool__;
  this[1]._padding_ =
       (longlong)
       &UBaseMeshProcessingTool::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)&this[1]._padding_);
  *(undefined8 *)&this[2].GeometrySelection.Selection.Elements.field_0x30 = 0;
  pUVar6 = this + 2;
  (pUVar6->GeometrySelection).Selection.Hash.InlineData[0] = '\0';
  (pUVar6->GeometrySelection).Selection.Hash.InlineData[1] = '\0';
  (pUVar6->GeometrySelection).Selection.Hash.InlineData[2] = '\0';
  (pUVar6->GeometrySelection).Selection.Hash.InlineData[3] = '\0';
  (pUVar6->GeometrySelection).Selection.Hash._padding_ = 0;
  this[2].GeometrySelection.Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined8 *)&this[2].GeometrySelection.Selection.HashSize = 0;
  *(undefined8 *)&this[2].bGeometrySelectionInitialized = 0;
  this[2].GeometrySelectionViz.field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  *(undefined1 *)&this[3]._padding_ = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  this[3]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  this[3]._padding_ = (longlong)(double)fVar3;
  this[3]._padding_ = (longlong)(double)fVar4;
  this[3]._padding_ = (longlong)(double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  this[3]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
  this[3]._padding_ = (longlong)(double)fVar3;
  this[3]._padding_ = (longlong)(double)fVar4;
  this[3]._padding_ = (longlong)(double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  this[3]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
  this[3]._padding_ = (longlong)(double)fVar3;
  this[3]._padding_ = (longlong)(double)fVar4;
  this[3]._padding_ = (longlong)(double)fVar5;
  this->_padding_ = (longlong)&USmoothMeshTool::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USmoothMeshTool::_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&USmoothMeshTool::_vftable__for__USingleTargetWithSelectionTool__;
  this[1]._padding_ =
       (longlong)&USmoothMeshTool::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this[3]._padding_ = (longlong)&___7USmoothMeshTool__6B_;
  this[3].TargetWorld.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].GeometrySelection.ElementType = 0;
  this[3].GeometrySelection.TopologyType = 0;
  *(undefined8 *)&this[3].GeometrySelection.Selection.Elements = 0;
  *(undefined8 *)&this[3].GeometrySelection.Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&this[3].GeometrySelection.Selection.Elements.field_0x10 = 0;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_18,L"USmoothMeshTool",L"ToolName",L"Smooth");
  pIVar1 = (ITextData *)this->_padding_;
  pIVar2 = (pFVar7->TextData).Reference;
  if (pIVar1 != pIVar2) {
    this->_padding_ = (longlong)pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(uint *)&this->_padding_ = pFVar7->Flags;
  if (FStack_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
  }
  return;
}

// InternalConstructor<USmoothMeshToolBuilder> @ 14cd4a290

void __cdecl InternalConstructor<USmoothMeshToolBuilder>(FObjectInitializer *param_1)

{
  UBaseMeshProcessingToolBuilder *this;
  
  this = (UBaseMeshProcessingToolBuilder *)param_1->Obj;
  if (this != (UBaseMeshProcessingToolBuilder *)0x0) {
    UBaseMeshProcessingToolBuilder::UBaseMeshProcessingToolBuilder(this,param_1);
    *(undefined ***)this = &___7USmoothMeshToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<USmoothMeshToolProperties> @ 14cd4a2c0

void __cdecl InternalConstructor<USmoothMeshToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USmoothMeshToolProperties__6B_;
  }
  return;
}

// InternalConstructor<USmoothWeightMapSetProperties> @ 14cd4a300

void __cdecl InternalConstructor<USmoothWeightMapSetProperties>(FObjectInitializer *param_1)

{
  UWeightMapSetProperties *this;
  
  this = (UWeightMapSetProperties *)param_1->Obj;
  if (this != (UWeightMapSetProperties *)0x0) {
    UWeightMapSetProperties::UWeightMapSetProperties(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USmoothWeightMapSetProperties__6B_;
  }
  return;
}

// InternalConstructor<UUVLayoutTool> @ 14cd4a340

void __cdecl InternalConstructor<UUVLayoutTool>(FObjectInitializer *param_1)

{
  UMultiSelectionMeshEditingTool *this;
  
  this = (UMultiSelectionMeshEditingTool *)param_1->Obj;
  if (this != (UMultiSelectionMeshEditingTool *)0x0) {
    UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool(this);
    this->_padding_ = (longlong)&UUVLayoutTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UUVLayoutTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UUVLayoutTool::_vftable__for__UMultiSelectionMeshEditingTool__;
    this[1]._padding_ =
         (longlong)&UUVLayoutTool::_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
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
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42b40000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UUVLayoutToolBuilder> @ 14cd4a450

void __cdecl InternalConstructor<UUVLayoutToolBuilder>(FObjectInitializer *param_1)

{
  UMultiSelectionMeshEditingToolBuilder *this;
  
  this = (UMultiSelectionMeshEditingToolBuilder *)param_1->Obj;
  if (this != (UMultiSelectionMeshEditingToolBuilder *)0x0) {
    UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder(this,param_1);
    *(undefined ***)this = &___7UUVLayoutToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<UUVProjectionOperatorFactory> @ 14cd4a480

void __cdecl InternalConstructor<UUVProjectionOperatorFactory>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UUVProjectionOperatorFactory::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UUVProjectionOperatorFactory::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  }
  return;
}

// InternalConstructor<UUVProjectionTool> @ 14cd4a4d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UUVProjectionTool>(FObjectInitializer *param_1)

{
  USingleTargetWithSelectionTool *this;
  float fVar1;
  float fVar2;
  float fVar3;
  USingleTargetWithSelectionTool *pUVar4;
  
  this = (USingleTargetWithSelectionTool *)param_1->Obj;
  if (this == (USingleTargetWithSelectionTool *)0x0) {
    return;
  }
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool(this);
  this->_padding_ = (longlong)&UUVProjectionTool::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UUVProjectionTool::_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UUVProjectionTool__6B_;
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
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined4 *)&this[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
  this[1].TargetWorld.WeakPtr = (FWeakObjectPtr)0x0;
  this[1].GeometrySelection.ElementType = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this[1].GeometrySelection.Selection.Elements.field_0x8 =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&this[1].GeometrySelection.Selection.Elements.field_0x10 = (double)fVar1;
  *(double *)&this[1].GeometrySelection.Selection.Elements.field_0x18 = (double)fVar2;
  *(double *)&this[1].GeometrySelection.Selection.Elements.field_0x20 = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&this[1].GeometrySelection.Selection.Elements.field_0x28 =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&this[1].GeometrySelection.Selection.Elements.field_0x30 = (double)fVar1;
  *(double *)&this[1].GeometrySelection.Selection.Hash = (double)fVar2;
  this[1].GeometrySelection.Selection.Hash.SecondaryData =
       (ForElementType<FSetElementId>)(double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&this[1].GeometrySelection.Selection.HashSize =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&this[1].bGeometrySelectionInitialized = (double)fVar1;
  this[1].GeometrySelectionVizProperties.field0_0x0 =
       (TObjectPtr<UGeometrySelectionVisualizationProperties>_u_0)(double)fVar2;
  this[1].GeometrySelectionViz.field0_0x0 = (TObjectPtr<UPreviewGeometry>_u_0)(double)fVar3;
  this[2]._padding_ = 0x7fefffffffffffff;
  this[2]._padding_ = 0x7fefffffffffffff;
  this[2]._padding_ = 0x7fefffffffffffff;
  this[2]._padding_ = -0x10000000000001;
  this[2]._padding_ = -0x10000000000001;
  this[2]._padding_ = -0x10000000000001;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  this[2]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  this[2]._padding_ = (longlong)(double)fVar1;
  this[2]._padding_ = (longlong)(double)fVar2;
  this[2]._padding_ = (longlong)(double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  this[2]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
  this[2]._padding_ = (longlong)(double)fVar1;
  this[2]._padding_ = (longlong)(double)fVar2;
  this[2]._padding_ = (longlong)(double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  this[2]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
  this[2]._padding_ = (longlong)(double)fVar1;
  this[2]._padding_ = (longlong)(double)fVar2;
  this[2]._padding_ = (longlong)(double)fVar3;
  this[2].TargetWorld.WeakPtr = (FWeakObjectPtr)0xffffffffffffffff;
  *(undefined1 *)&this[2].GeometrySelection.ElementType = 0;
  *(undefined8 *)&this[2].GeometrySelection.Selection.Elements = 0;
  *(undefined8 *)&this[2].GeometrySelection.Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&this[2].GeometrySelection.Selection.Elements.field_0x10 = 0;
  pUVar4 = this + 2;
  (pUVar4->GeometrySelection).Selection.Hash.InlineData[0] = '\0';
  (pUVar4->GeometrySelection).Selection.Hash.InlineData[1] = '\0';
  (pUVar4->GeometrySelection).Selection.Hash.InlineData[2] = '\0';
  (pUVar4->GeometrySelection).Selection.Hash.InlineData[3] = '\0';
  (pUVar4->GeometrySelection).Selection.Hash._padding_ = 0x3ff00000;
  *(undefined8 *)&this[2].GeometrySelection.Selection.Elements.field_0x20 = 0;
  *(undefined8 *)&this[2].GeometrySelection.Selection.Elements.field_0x28 = 0;
  *(undefined8 *)&this[2].GeometrySelection.Selection.Elements.field_0x30 = 0;
  *(undefined4 *)&this[2].GeometrySelection.Selection.Hash.SecondaryData = 0x42b40000;
  *(undefined4 *)&this[2].GeometrySelection.Selection.Hash.SecondaryData.field_0x4 = 0x42c80000;
  this[2].GeometrySelection.Selection.HashSize = 0x3f800000;
  *(undefined2 *)&this[2].GeometrySelection.Selection.field_0x4c = 0;
  *(undefined8 *)&this[2].bGeometrySelectionInitialized = 0x3ff0000000000000;
  FToolDataVisualizer::FToolDataVisualizer((FToolDataVisualizer *)&this[2].GeometrySelectionViz);
  *(undefined8 *)&this[3].GeometrySelection.Selection.HashSize = 0;
  *(undefined8 *)&this[3].bGeometrySelectionInitialized = 0;
  *(undefined1 *)&this[3].GeometrySelectionVizProperties.field0_0x0 = 0;
  return;
}

// InternalConstructor<UUVProjectionToolBuilder> @ 14cd4a4f0

void __cdecl InternalConstructor<UUVProjectionToolBuilder>(FObjectInitializer *param_1)

{
  USingleTargetWithSelectionToolBuilder *this;
  
  this = (USingleTargetWithSelectionToolBuilder *)param_1->Obj;
  if (this != (USingleTargetWithSelectionToolBuilder *)0x0) {
    USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder(this,param_1);
    *(undefined ***)this = &___7UUVProjectionToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<UUVProjectionToolEditActions> @ 14cd4a520

void __cdecl InternalConstructor<UUVProjectionToolEditActions>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    this->_padding_ = (longlong)&___7UUVProjectionToolEditActions__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UUVProjectionToolProperties> @ 14cd4a560

void __cdecl InternalConstructor<UUVProjectionToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 2;
    this->_padding_ = (longlong)&___7UUVProjectionToolProperties__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0x42340000;
    *(undefined1 **)((longlong)&this[1]._padding_ + 4) = &DAT_3e800000;
    *(TVector2<double>_u_0 *)&this[1].CachedPropertiesMap.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1].CachedPropertiesMap.field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].CachedPropertiesMap.field_0x28 =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].CachedPropertiesMap.field_0x30 = uVar9;
    *(double *)&this[1].CachedPropertiesMap.field_0x38 =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1].CachedPropertiesMap.field_0x40 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[1].CachedPropertiesMap.field_0x48 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[1].OnModified = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[1].OnModified.field_0x10 = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    this[2]._padding_ = (longlong)(double)fVar1;
    this[2]._padding_ = auVar6._8_8_;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    this[2]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[2]._padding_ = auVar7._8_8_;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    this[2]._padding_ = (longlong)(double)fVar1;
    this[2]._padding_ = auVar8._8_8_;
  }
  return;
}

// InternalConstructor<UWeldMeshEdgesOperatorFactory> @ 14cd4a680

void __cdecl InternalConstructor<UWeldMeshEdgesOperatorFactory>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UWeldMeshEdgesOperatorFactory::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UWeldMeshEdgesOperatorFactory::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  }
  return;
}

// InternalConstructor<UWeldMeshEdgesTool> @ 14cd4a6d0

void __cdecl InternalConstructor<UWeldMeshEdgesTool>(FObjectInitializer *param_1)

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
    this->_padding_ = (longlong)&UWeldMeshEdgesTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWeldMeshEdgesTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&___7UWeldMeshEdgesTool__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UWeldMeshEdgesTool",L"WeldMeshEdgesToolName",L"Weld Edges");
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

// InternalConstructor<UWeldMeshEdgesToolBuilder> @ 14cd4a810

void __cdecl InternalConstructor<UWeldMeshEdgesToolBuilder>(FObjectInitializer *param_1)

{
  USingleTargetWithSelectionToolBuilder *this;
  
  this = (USingleTargetWithSelectionToolBuilder *)param_1->Obj;
  if (this != (USingleTargetWithSelectionToolBuilder *)0x0) {
    USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder(this,param_1);
    *(undefined ***)this = &___7UWeldMeshEdgesToolBuilder__6B_;
  }
  return;
}

// InternalConstructor<UWeldMeshEdgesToolProperties> @ 14cd4a840

void __cdecl InternalConstructor<UWeldMeshEdgesToolProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x358637bd;
    this->_padding_ = (longlong)&___7UWeldMeshEdgesToolProperties__6B_;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3dcccccd;
    *(undefined4 *)&this[1]._padding_ = 0x3dcccccd;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3c23d70a;
    *(undefined4 *)&this[1]._padding_ = 0x3c23d70a;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDiffusionSmoothProperties> @ 14cd4a8c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDiffusionSmoothProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDiffusionSmoothProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f4ccccd;
    this->_padding_ = (longlong)&___7UDiffusionSmoothProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEdgeLoopInsertionProperties> @ 14cd4a990

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEdgeLoopInsertionProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEdgeLoopInsertionProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UEdgeLoopInsertionProperties__6B_;
    this[1]._padding_ = 0x3fe0000000000000;
    this[1]._padding_ = 0x4024000000000000;
    this[1]._padding_ = 0x3f50624dd2f1a9fc;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined2 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGroupEdgeInsertionProperties> @ 14cd4aaa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGroupEdgeInsertionProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGroupEdgeInsertionProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UGroupEdgeInsertionProperties__6B_;
    this[1]._padding_ = 0x3f50624dd2f1a9fc;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UImplicitSmoothProperties> @ 14cd4ab70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UImplicitSmoothProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UImplicitSmoothProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3dcccccd;
    this->_padding_ = (longlong)&___7UImplicitSmoothProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3e4ccccd;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIterativeSmoothProperties> @ 14cd4ac40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIterativeSmoothProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIterativeSmoothProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f4ccccd;
    this->_padding_ = (longlong)&___7UIterativeSmoothProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 10;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditBevelEdgeActivity> @ 14cd4ad10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPolyEditBevelEdgeActivity>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolActivity *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditBevelEdgeActivity::GetPrivateStaticClass();
  this = (UInteractiveToolActivity *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UPolyEditBevelEdgeActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)(this + 1) =
         &UPolyEditBevelEdgeActivity::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    this[1].field_0x18 = 0;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)&this[1].field_0x20);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditBevelEdgeProperties> @ 14cd4ade0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPolyEditBevelEdgeProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditBevelEdgeProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditBevelEdgeProperties__6B_;
    this[1]._padding_ = 0x4010000000000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditCutFacesActivity> @ 14cd4aec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPolyEditCutFacesActivity>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolActivity *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditCutFacesActivity::GetPrivateStaticClass();
  this = (UInteractiveToolActivity *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this,param_1);
    *(undefined1 *)(this + 2) = 0;
    *(undefined ***)this = &UPolyEditCutFacesActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined ***)(this + 1) = &UPolyEditCutFacesActivity::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this[1].field_0x8 =
         &UPolyEditCutFacesActivity::_vftable__for__IHoverBehaviorTarget__;
    *(undefined4 *)&this[2].field_0x4 = 1;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)(this + 4) = 0x3ff0000000000000;
    *(undefined4 *)&this[3].field_0x20 = 0x42b40000;
    *(undefined4 *)&this[3].field_0x24 = 0x42c80000;
    *(undefined4 *)&this[3].field_0x28 = 0x3f800000;
    *(undefined2 *)&this[3].field_0x2c = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditCutProperties> @ 14cd4b000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPolyEditCutProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditCutProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditCutProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditExtrudeActivity> @ 14cd4b0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPolyEditExtrudeActivity>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UInteractiveToolActivity *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPolyEditExtrudeActivity::GetPrivateStaticClass();
  this = (UInteractiveToolActivity *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this,param_1);
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &UPolyEditExtrudeActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)(this + 1) =
         &UPolyEditExtrudeActivity::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    *(undefined ***)&this[1].field_0x8 =
         &UPolyEditExtrudeActivity::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this[1].field_0x10 =
         &UPolyEditExtrudeActivity::_vftable__for__IHoverBehaviorTarget__;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    this[3].field_0x8 = 0;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)&this[3].field_0x10);
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0x3ff0000000000000;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[8].field_0x28 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[8].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[8].field_0x18 = uVar1;
    *(double *)&this[8].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&this[8].field_0x28 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0x3ff0000000000000;
    *(undefined4 *)&this[9].field_0x18 = 0x3f800000;
    this[9].field_0x1c = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivity> @ 14cd4b250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivity>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UInteractiveToolActivity *this;
  
  pUVar10 = GetTransientPackageAsObject();
  pUVar11 = UPolyEditExtrudeEdgeActivity::GetPrivateStaticClass();
  this = (UInteractiveToolActivity *)
         StaticAllocateObject
                   (pUVar11,pUVar10,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this,param_1);
    this[2].field_0x10 = 0;
    *(undefined ***)this = &UPolyEditExtrudeEdgeActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined ***)(this + 1) =
         &UPolyEditExtrudeEdgeActivity::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    *(undefined8 *)&this[3].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[2].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[2].field_0x20 = uVar9;
    *(double *)&this[2].field_0x28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0x3ff0000000000000;
    this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0x3ff0000000000000;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x18 = 0x3ff0000000000000;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[4].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[4].field_0x20 = uVar9;
    *(double *)&this[4].field_0x28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0x3ff0000000000000;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)&this[6].field_0x20);
    *(undefined8 *)&this[0xb].field_0x28 = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)&this[0xc].field_0x8 = 0;
    *(undefined8 *)&this[0xc].field_0x10 = 0;
    *(undefined8 *)&this[0xc].field_0x18 = 0;
    *(undefined8 *)&this[0xc].field_0x20 = 0;
    *(undefined8 *)&this[0xc].field_0x28 = 0;
    *(undefined8 *)(this + 0xd) = 0;
    this[0xb].field_0x20 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[0xd].field_0x10 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[0xd].field_0x20 = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this + 0xe) = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[0xe].field_0x10 = auVar6;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[0xe].field_0x20 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this + 0xf) = auVar8;
    this[0xf].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivityProperties> @ 14cd4b260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivityProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditExtrudeEdgeActivityProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditExtrudeEdgeActivityProperties__6B_;
    this[1]._padding_ = 0x4034000000000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined2 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditExtrudeProperties> @ 14cd4b340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPolyEditExtrudeProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditExtrudeProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditExtrudeProperties__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4010000000000000;
    this[1]._padding_ = 3;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditInsertEdgeActivity> @ 14cd4b440

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UPolyEditInsertEdgeActivity>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPolyEditInsertEdgeActivity *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditInsertEdgeActivity::GetPrivateStaticClass();
  pUVar3 = (UPolyEditInsertEdgeActivity *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPolyEditInsertEdgeActivity *)0x0) {
    pUVar3 = UPolyEditInsertEdgeActivity::UPolyEditInsertEdgeActivity(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditInsertEdgeLoopActivity> @ 14cd4b4e0

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UPolyEditInsertEdgeLoopActivity>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPolyEditInsertEdgeLoopActivity *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditInsertEdgeLoopActivity::GetPrivateStaticClass();
  pUVar3 = (UPolyEditInsertEdgeLoopActivity *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPolyEditInsertEdgeLoopActivity *)0x0) {
    pUVar3 = UPolyEditInsertEdgeLoopActivity::UPolyEditInsertEdgeLoopActivity(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditInsetOutsetActivity> @ 14cd4b580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPolyEditInsetOutsetActivity>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolActivity *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditInsetOutsetActivity::GetPrivateStaticClass();
  this = (UInteractiveToolActivity *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)this = &UPolyEditInsetOutsetActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined ***)(this + 1) =
         &UPolyEditInsetOutsetActivity::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this[1].field_0x8 =
         &UPolyEditInsetOutsetActivity::_vftable__for__IHoverBehaviorTarget__;
    *(undefined2 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditInsetOutsetProperties> @ 14cd4b660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPolyEditInsetOutsetProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditInsetOutsetProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    this->_padding_ = (longlong)&___7UPolyEditInsetOutsetProperties__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditOffsetProperties> @ 14cd4b730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPolyEditOffsetProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditOffsetProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditOffsetProperties__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4010000000000000;
    *(undefined4 *)&this[1]._padding_ = 2;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditPlanarProjectionUVActivity> @ 14cd4b820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPolyEditPlanarProjectionUVActivity>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolActivity *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditPlanarProjectionUVActivity::GetPrivateStaticClass();
  this = (UInteractiveToolActivity *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this,param_1);
    *(undefined2 *)(this + 2) = 0;
    *(undefined ***)this =
         &UPolyEditPlanarProjectionUVActivity::_vftable__for__UInteractiveToolActivity__;
    *(undefined ***)(this + 1) =
         &UPolyEditPlanarProjectionUVActivity::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this[1].field_0x8 =
         &UPolyEditPlanarProjectionUVActivity::_vftable__for__IHoverBehaviorTarget__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0x7fefffffffffffff;
    *(undefined8 *)&this[2].field_0x10 = 0x7fefffffffffffff;
    *(undefined8 *)&this[2].field_0x18 = 0x7fefffffffffffff;
    *(undefined8 *)&this[2].field_0x20 = 0xffefffffffffffff;
    *(undefined8 *)&this[2].field_0x28 = 0xffefffffffffffff;
    *(undefined8 *)(this + 3) = 0xffefffffffffffff;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)(this + 5) = 0x3ff0000000000000;
    *(undefined4 *)&this[4].field_0x20 = 0x42b40000;
    *(undefined4 *)&this[4].field_0x24 = 0x42c80000;
    *(undefined4 *)&this[4].field_0x28 = 0x3f800000;
    *(undefined2 *)&this[4].field_0x2c = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditPushPullProperties> @ 14cd4b9a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPolyEditPushPullProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditPushPullProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditPushPullProperties__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4010000000000000;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolyEditSetUVProperties> @ 14cd4ba90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPolyEditSetUVProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolyEditSetUVProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPolyEditSetUVProperties__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USmoothMeshTool> @ 14cd4bb50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USmoothMeshTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBaseMeshProcessingTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USmoothMeshTool::GetPrivateStaticClass();
  this = (UBaseMeshProcessingTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBaseMeshProcessingTool *)0x0) {
    UBaseMeshProcessingTool::UBaseMeshProcessingTool(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USmoothMeshTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USmoothMeshTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&USmoothMeshTool::_vftable__for__USingleTargetWithSelectionTool__;
    this->_padding_ =
         (longlong)&USmoothMeshTool::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    this[1]._padding_ = (longlong)&___7USmoothMeshTool__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USmoothMeshToolBuilder> @ 14cd4bc60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USmoothMeshToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USmoothMeshToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBaseMeshProcessingToolBuilder::UBaseMeshProcessingToolBuilder
              ((UBaseMeshProcessingToolBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USmoothMeshToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USmoothMeshToolProperties> @ 14cd4bd10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USmoothMeshToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USmoothMeshToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USmoothMeshToolProperties__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USmoothWeightMapSetProperties> @ 14cd4bdd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USmoothWeightMapSetProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWeightMapSetProperties *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USmoothWeightMapSetProperties::GetPrivateStaticClass();
  this = (UWeightMapSetProperties *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWeightMapSetProperties *)0x0) {
    UWeightMapSetProperties::UWeightMapSetProperties(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USmoothWeightMapSetProperties__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUVLayoutTool> @ 14cd4be80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUVLayoutTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMultiSelectionMeshEditingTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUVLayoutTool::GetPrivateStaticClass();
  this = (UMultiSelectionMeshEditingTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMultiSelectionMeshEditingTool *)0x0) {
    UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UUVLayoutTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UUVLayoutTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&UUVLayoutTool::_vftable__for__UMultiSelectionMeshEditingTool__;
    this[1]._padding_ =
         (longlong)&UUVLayoutTool::_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    *(undefined4 *)&this[1]._padding_ = 0x42b40000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42c80000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUVLayoutToolBuilder> @ 14cd4c010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUVLayoutToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUVLayoutToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
              ((UMultiSelectionMeshEditingToolBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUVLayoutToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUVProjectionOperatorFactory> @ 14cd4c0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UUVProjectionOperatorFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUVProjectionOperatorFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UUVProjectionOperatorFactory::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UUVProjectionOperatorFactory::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUVProjectionTool> @ 14cd4c180

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

UObject * __cdecl InternalVTableHelperCtorCaller<UUVProjectionTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUVProjectionTool *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUVProjectionTool::GetPrivateStaticClass();
  pUVar3 = (UUVProjectionTool *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UUVProjectionTool *)0x0) {
    pUVar3 = UUVProjectionTool::UUVProjectionTool(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUVProjectionToolBuilder> @ 14cd4c220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUVProjectionToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUVProjectionToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
              ((USingleTargetWithSelectionToolBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUVProjectionToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUVProjectionToolEditActions> @ 14cd4c2d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UUVProjectionToolEditActions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUVProjectionToolEditActions::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    this->_padding_ = (longlong)&___7UUVProjectionToolEditActions__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUVProjectionToolProperties> @ 14cd4c390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UUVProjectionToolProperties>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UInteractiveToolPropertySet *this;
  
  pUVar10 = GetTransientPackageAsObject();
  pUVar11 = UUVProjectionToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar11,pUVar10,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 2;
    this->_padding_ = (longlong)&___7UUVProjectionToolProperties__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0x42340000;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 **)((longlong)&this[1]._padding_ + 4) = &DAT_3e800000;
    *(TVector2<double>_u_0 *)&this[1].CachedPropertiesMap.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1].CachedPropertiesMap.field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].CachedPropertiesMap.field_0x28 =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].CachedPropertiesMap.field_0x30 = uVar9;
    *(double *)&this[1].CachedPropertiesMap.field_0x38 =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1].CachedPropertiesMap.field_0x40 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[1].CachedPropertiesMap.field_0x48 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[1].OnModified = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[1].OnModified.field_0x10 = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    this[2]._padding_ = (longlong)(double)fVar1;
    this[2]._padding_ = auVar6._8_8_;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    this[2]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[2]._padding_ = auVar7._8_8_;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    this[2]._padding_ = (longlong)(double)fVar1;
    this[2]._padding_ = auVar8._8_8_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWeldMeshEdgesOperatorFactory> @ 14cd4c530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWeldMeshEdgesOperatorFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWeldMeshEdgesOperatorFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UWeldMeshEdgesOperatorFactory::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UWeldMeshEdgesOperatorFactory::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWeldMeshEdgesTool> @ 14cd4c5f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWeldMeshEdgesTool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USingleTargetWithSelectionTool *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWeldMeshEdgesTool::GetPrivateStaticClass();
  this = (USingleTargetWithSelectionTool *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USingleTargetWithSelectionTool *)0x0) {
    USingleTargetWithSelectionTool::USingleTargetWithSelectionTool(this,param_1);
    this->_padding_ = (longlong)&UWeldMeshEdgesTool::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWeldMeshEdgesTool::_vftable__for__IInputBehaviorSource__;
    this->_padding_ = (longlong)&___7UWeldMeshEdgesTool__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWeldMeshEdgesToolBuilder> @ 14cd4c730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWeldMeshEdgesToolBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWeldMeshEdgesToolBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
              ((USingleTargetWithSelectionToolBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWeldMeshEdgesToolBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWeldMeshEdgesToolProperties> @ 14cd4c7e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWeldMeshEdgesToolProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWeldMeshEdgesToolProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x358637bd;
    this->_padding_ = (longlong)&___7UWeldMeshEdgesToolProperties__6B_;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3dcccccd;
    *(undefined4 *)&this[1]._padding_ = 0x3dcccccd;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3c23d70a;
    *(undefined4 *)&this[1]._padding_ = 0x3c23d70a;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UUVLayoutProperties,UObject_*,0> @ 14cd4c8e0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UUVLayoutProperties,UObject_*,0>
          (TObjectPtr<UUVLayoutProperties> *param_1,UObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UUVLayoutProperties *)0x0) {
    return (UUVLayoutProperties *)*param_2 == (UUVLayoutProperties *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UUVLayoutProperties *)*param_2;
}

// IsObjectPtrEqual<UUVProjectionToolProperties,UObject_*,0> @ 14cd4c900

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UUVProjectionToolProperties,UObject_*,0>
          (TObjectPtr<UUVProjectionToolProperties> *param_1,UObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UUVProjectionToolProperties *)0x0) {
    return (UUVProjectionToolProperties *)*param_2 == (UUVProjectionToolProperties *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UUVProjectionToolProperties *)*param_2;
}

// MakeBoundsFromIndices<`UUVProjectionTool::ApplyAction_AutoFit'::__l2::<lambda_2>_> @ 14cd4c920

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::TAxisAlignedBox3<double>::
MakeBoundsFromIndices<_UUVProjectionTool::ApplyAction_AutoFit_::__l2::<lambda_2>_>
          (TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1,<lambda_2> *param_2)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  TFrame3<double> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  UUVProjectionTool *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TAxisAlignedBox3<double> *pTVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  undefined1 local_88 [16];
  double local_78;
  
  uVar17 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  if (0 < param_1) {
    lVar16 = 0;
    do {
      pTVar3 = param_2->AlignFrame;
      pTVar4 = param_2->Points;
      pUVar5 = param_2->__this;
      uVar14 = 0;
      if ((int)uVar17 < pTVar4->ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pTVar15 = (TAxisAlignedBox3<double> *)(*pcVar7)();
        return pTVar15;
      }
      auVar26 = *(undefined1 (*) [16])(pUVar5->WorldTransform).Rotation.ZW.m128d_f64;
      pFVar6 = (pTVar4->AllocatorInstance).Data;
      auVar20 = *(undefined1 (*) [16])(pUVar5->WorldTransform).Rotation.XY.m128d_f64;
      dVar12 = (pUVar5->WorldTransform).Rotation.ZW.m128d_f64[1];
      pFVar2 = pFVar6 + lVar16;
      dVar11 = *(double *)(pFVar6 + lVar16 + 0x10) *
               (pUVar5->WorldTransform).Scale3D.ZW.m128d_f64[0];
      dVar27 = (pUVar5->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar9 = (pUVar5->WorldTransform).Scale3D.XY.m128d_f64[0] * *(double *)pFVar2;
      dVar10 = (pUVar5->WorldTransform).Scale3D.XY.m128d_f64[1] * *(double *)(pFVar2 + 8);
      uVar29 = (undefined4)((ulonglong)dVar10 >> 0x20);
      local_88 = *(undefined1 (*) [16])(pUVar5->WorldTransform).Rotation.XY.m128d_f64;
      auVar21 = blendpd(local_88,auVar26,2);
      auVar30._8_4_ = SUB84(dVar10,0);
      auVar30._0_8_ = dVar9;
      auVar30._12_4_ = uVar29;
      dVar8 = auVar26._0_8_;
      auVar31._0_8_ = auVar30._8_8_ * local_88._0_8_ - local_88._8_8_ * dVar9;
      auVar31._8_8_ = dVar11 * local_88._8_8_ - dVar8 * dVar10;
      auVar23._8_4_ = SUB84(dVar10,0);
      auVar23._0_8_ = dVar9;
      auVar23._12_4_ = uVar29;
      auVar18._8_4_ = SUB84(dVar27,0);
      auVar18._0_8_ = dVar11;
      auVar18._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar18 = blendpd(auVar23,auVar18,2);
      auVar19._0_8_ = auVar18._0_8_ * dVar8 - auVar21._0_8_ * dVar11;
      auVar19._8_8_ = auVar18._8_8_ * auVar26._8_8_ - auVar21._8_8_ * dVar27;
      auVar18 = blendpd(auVar31,auVar19,2);
      dVar27 = auVar31._8_8_ + auVar31._8_8_;
      dVar28 = auVar19._0_8_ + auVar19._0_8_;
      auVar32._0_8_ = auVar18._0_8_ + auVar18._0_8_;
      auVar32._8_8_ = auVar18._8_8_ + auVar18._8_8_;
      auVar24._8_4_ = SUB84(dVar28,0);
      auVar24._0_8_ = dVar27;
      uVar29 = (undefined4)((ulonglong)dVar28 >> 0x20);
      auVar24._12_4_ = uVar29;
      auVar21._8_4_ = SUB84(dVar28,0);
      auVar21._0_8_ = dVar27;
      auVar21._12_4_ = uVar29;
      auVar18 = blendpd(auVar21,auVar32,2);
      auVar25._0_8_ = auVar24._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar27;
      auVar25._8_8_ = auVar32._0_8_ * auVar20._8_8_ - dVar8 * dVar28;
      auVar23 = blendpd(auVar20,auVar26,2);
      auVar20._8_4_ = SUB84(auVar25._8_8_,0);
      auVar20._0_8_ = auVar25._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar22._0_8_ = auVar18._0_8_ * dVar8 - auVar23._0_8_ * auVar32._0_8_;
      auVar22._8_8_ = auVar18._8_8_ * auVar26._8_8_ - auVar23._8_8_ * auVar32._8_8_;
      auVar26 = blendpd(auVar25,auVar22,2);
      local_78 = auVar32._0_8_ * dVar12 + dVar11 + auVar26._0_8_ +
                 (pUVar5->WorldTransform).Translation.ZW.m128d_f64[0];
      local_b8._s_0.Y =
           (dVar28 * dVar12 + dVar10 + auVar22._0_8_ +
           (pUVar5->WorldTransform).Translation.XY.m128d_f64[1]) -
           (pTVar3->Origin).field0_0x0._s_0.Y;
      local_b8._s_0.X =
           (dVar27 * dVar12 + dVar9 + auVar20._8_8_ +
           (pUVar5->WorldTransform).Translation.XY.m128d_f64[0]) -
           (pTVar3->Origin).field0_0x0._s_0.X;
      local_b8._s_0.Z = local_78 - (pTVar3->Origin).field0_0x0._s_0.Z;
      TQuaternion<double>::InverseMultiply
                (&pTVar3->Rotation,(TVector<double> *)&local_a0._s_0,
                 (TVector<double> *)&local_b8._s_0);
      if (local_a0._s_0.X < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_a0._s_0.X;
      }
      if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= local_a0._s_0.X &&
          local_a0._s_0.X != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = local_a0._s_0.X;
      }
      if (local_a0._s_0.Y < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_a0._s_0.Y;
      }
      pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      if (*pdVar1 <= local_a0._s_0.Y && local_a0._s_0.Y != *pdVar1) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_a0._s_0.Y;
      }
      if (local_a0._s_0.Z < (__return_storage_ptr__->Min).field0_0x0._s_0.Z) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_a0._s_0.Z;
      }
      pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      if (*pdVar1 <= local_a0._s_0.Z && local_a0._s_0.Z != *pdVar1) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_a0._s_0.Z;
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x18;
    } while ((int)uVar17 < param_1);
  }
  return __return_storage_ptr__;
}

// MakeBoundsFromIndices<TArray<int,TSizedDefaultAllocator<32>_>,`UUVProjectionTool::InitializeMesh'::__l2::<lambda_2>_> @ 14cd4cc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::TAxisAlignedBox3<double>::
MakeBoundsFromIndices<TArray<int,TSizedDefaultAllocator<32>_>,_UUVProjectionTool::InitializeMesh_::__l2::<lambda_2>_>
          (TAxisAlignedBox3<double> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,<lambda_2> param_2)

{
  double *pdVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  TAxisAlignedBox3<double> *pTVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  pFVar16 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar5 = pFVar16 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar16 == pFVar5) break;
    uVar3 = *(uint *)pFVar16;
    if (((param_2.__this)->InputMesh).Object == (FDynamicMesh3 *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TAxisAlignedBox3<double> *)(*pcVar6)();
        return pTVar14;
      }
    }
    auVar25 = *(undefined1 (*) [16])((param_2.__this)->WorldTransform).Rotation.ZW.m128d_f64;
    auVar17 = *(undefined1 (*) [16])((param_2.__this)->WorldTransform).Rotation.XY.m128d_f64;
    auVar21 = *(undefined1 (*) [16])((param_2.__this)->WorldTransform).Rotation.XY.m128d_f64;
    dVar12 = ((param_2.__this)->WorldTransform).Rotation.ZW.m128d_f64[1];
    uVar15 = (ulonglong)(uVar3 & 0x1ff);
    auVar19 = blendpd(auVar17,auVar25,2);
    lVar4 = *(longlong *)
             (((((param_2.__this)->InputMesh).Object)->Vertices).Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar3 >> 9) * 8);
    pdVar1 = (double *)(lVar4 + uVar15 * 0x18);
    dVar8 = *pdVar1 * ((param_2.__this)->WorldTransform).Scale3D.XY.m128d_f64[0];
    dVar9 = pdVar1[1] * ((param_2.__this)->WorldTransform).Scale3D.XY.m128d_f64[1];
    uVar30 = (undefined4)((ulonglong)dVar9 >> 0x20);
    dVar26 = *(double *)(lVar4 + 0x10 + uVar15 * 0x18) *
             ((param_2.__this)->WorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = ((param_2.__this)->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar27._8_4_ = SUB84(dVar9,0);
    auVar27._0_8_ = dVar8;
    auVar27._12_4_ = uVar30;
    dVar10 = auVar25._0_8_;
    auVar28._0_8_ = auVar27._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar8;
    auVar28._8_8_ = dVar26 * auVar17._8_8_ - dVar10 * dVar9;
    auVar22._8_4_ = SUB84(dVar9,0);
    auVar22._0_8_ = dVar8;
    auVar22._12_4_ = uVar30;
    auVar17._8_4_ = SUB84(dVar7,0);
    auVar17._0_8_ = dVar26;
    auVar17._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar17 = blendpd(auVar22,auVar17,2);
    auVar18._0_8_ = auVar17._0_8_ * dVar10 - auVar19._0_8_ * dVar26;
    auVar18._8_8_ = auVar17._8_8_ * auVar25._8_8_ - auVar19._8_8_ * dVar7;
    auVar17 = blendpd(auVar28,auVar18,2);
    dVar7 = auVar28._8_8_ + auVar28._8_8_;
    dVar11 = auVar18._0_8_ + auVar18._0_8_;
    uVar30 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar29._0_8_ = auVar17._0_8_ + auVar17._0_8_;
    auVar29._8_8_ = auVar17._8_8_ + auVar17._8_8_;
    auVar23._8_4_ = SUB84(dVar11,0);
    auVar23._0_8_ = dVar7;
    auVar23._12_4_ = uVar30;
    auVar20._8_4_ = SUB84(dVar11,0);
    auVar20._0_8_ = dVar7;
    auVar20._12_4_ = uVar30;
    auVar17 = blendpd(auVar20,auVar29,2);
    auVar24._0_8_ = auVar23._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar7;
    auVar24._8_8_ = auVar29._0_8_ * auVar21._8_8_ - dVar10 * dVar11;
    auVar19._8_4_ = SUB84(auVar24._8_8_,0);
    auVar19._0_8_ = auVar24._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
    auVar22 = blendpd(auVar21,auVar25,2);
    auVar21._0_8_ = auVar17._0_8_ * dVar10 - auVar22._0_8_ * auVar29._0_8_;
    auVar21._8_8_ = auVar17._8_8_ * auVar25._8_8_ - auVar22._8_8_ * auVar29._8_8_;
    auVar25 = blendpd(auVar24,auVar21,2);
    dVar10 = dVar7 * dVar12 + dVar8 + auVar19._8_8_ +
             ((param_2.__this)->WorldTransform).Translation.XY.m128d_f64[0];
    dVar7 = dVar11 * dVar12 + dVar9 + auVar21._0_8_ +
            ((param_2.__this)->WorldTransform).Translation.XY.m128d_f64[1];
    dVar26 = auVar29._0_8_ * dVar12 + dVar26 + auVar25._0_8_ +
             ((param_2.__this)->WorldTransform).Translation.ZW.m128d_f64[0];
    if (dVar10 < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar10;
    }
    if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= dVar10 &&
        dVar10 != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar10;
    }
    if (dVar7 < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar7;
    }
    pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
    if (*pdVar1 <= dVar7 && dVar7 != *pdVar1) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar7;
    }
    if (dVar26 < (__return_storage_ptr__->Min).field0_0x0._s_0.Z) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar26;
    }
    pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
    if (*pdVar1 <= dVar26 && dVar26 != *pdVar1) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar26;
    }
    pFVar16 = pFVar16 + 4;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// MakeBoundsFromIndices<UE::Geometry::FRefCountVector::IndexEnumerable,`UUVProjectionTool::InitializeMesh'::__l2::<lambda_3>_> @ 14cd4cef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::TAxisAlignedBox3<double>::
MakeBoundsFromIndices<UE::Geometry::FRefCountVector::IndexEnumerable,_UUVProjectionTool::InitializeMesh_::__l2::<lambda_3>_>
          (TAxisAlignedBox3<double> *__return_storage_ptr__,IndexEnumerable param_1,
          <lambda_3> param_2)

{
  double *pdVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  TAxisAlignedBox3<double> *pTVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  uVar13 = ((param_1.Vector)->RefCounts).CurBlock * 0x200 +
           ((param_1.Vector)->RefCounts).CurBlockUsed;
  uVar15 = 0;
  if ((uVar13 != 0) &&
     (pFVar3 = ((param_1.Vector)->RefCounts).Blocks.AllocatorInstance.Data, uVar15 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar14 = 1;
    uVar15 = 1;
    if (1 < (int)uVar13) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                          (ulonglong)(uVar14 & 0x1ff) * 2);
        if ((sVar2 != 0) && (uVar15 = uVar14, sVar2 != -1)) break;
        uVar14 = uVar14 + 1;
        uVar15 = uVar14;
      } while ((int)uVar14 < (int)uVar13);
    }
  }
joined_r0x00014cd4cf9a:
  do {
    if (uVar15 == uVar13) {
      return __return_storage_ptr__;
    }
    while( true ) {
      if ((((param_2.__this)->InputMesh).Object == (FDynamicMesh3 *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar5)();
        return pTVar12;
      }
      auVar24 = *(undefined1 (*) [16])((param_2.__this)->WorldTransform).Rotation.ZW.m128d_f64;
      auVar16 = *(undefined1 (*) [16])((param_2.__this)->WorldTransform).Rotation.XY.m128d_f64;
      auVar18 = *(undefined1 (*) [16])((param_2.__this)->WorldTransform).Rotation.XY.m128d_f64;
      dVar10 = ((param_2.__this)->WorldTransform).Rotation.ZW.m128d_f64[1];
      auVar19 = blendpd(auVar16,auVar24,2);
      lVar4 = *(longlong *)
               (((((param_2.__this)->InputMesh).Object)->Vertices).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar15 >> 9) * 8);
      pdVar1 = (double *)(lVar4 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
      dVar8 = *pdVar1 * ((param_2.__this)->WorldTransform).Scale3D.XY.m128d_f64[0];
      dVar9 = pdVar1[1] * ((param_2.__this)->WorldTransform).Scale3D.XY.m128d_f64[1];
      uVar27 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar7 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18) *
              ((param_2.__this)->WorldTransform).Scale3D.ZW.m128d_f64[0];
      dVar25 = ((param_2.__this)->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar28._8_4_ = SUB84(dVar9,0);
      auVar28._0_8_ = dVar8;
      auVar28._12_4_ = uVar27;
      dVar6 = auVar24._0_8_;
      auVar29._0_8_ = auVar28._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar8;
      auVar29._8_8_ = dVar7 * auVar16._8_8_ - dVar6 * dVar9;
      auVar21._8_4_ = SUB84(dVar9,0);
      auVar21._0_8_ = dVar8;
      auVar21._12_4_ = uVar27;
      auVar16._8_4_ = SUB84(dVar25,0);
      auVar16._0_8_ = dVar7;
      auVar16._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      auVar16 = blendpd(auVar21,auVar16,2);
      auVar17._0_8_ = auVar16._0_8_ * dVar6 - auVar19._0_8_ * dVar7;
      auVar17._8_8_ = auVar16._8_8_ * auVar24._8_8_ - auVar19._8_8_ * dVar25;
      auVar16 = blendpd(auVar29,auVar17,2);
      dVar25 = auVar29._8_8_ + auVar29._8_8_;
      dVar26 = auVar17._0_8_ + auVar17._0_8_;
      auVar30._0_8_ = auVar16._0_8_ + auVar16._0_8_;
      auVar30._8_8_ = auVar16._8_8_ + auVar16._8_8_;
      auVar22._8_4_ = SUB84(dVar26,0);
      auVar22._0_8_ = dVar25;
      uVar27 = (undefined4)((ulonglong)dVar26 >> 0x20);
      auVar22._12_4_ = uVar27;
      auVar19._8_4_ = SUB84(dVar26,0);
      auVar19._0_8_ = dVar25;
      auVar19._12_4_ = uVar27;
      auVar21 = blendpd(auVar18,auVar24,2);
      auVar16 = blendpd(auVar19,auVar30,2);
      auVar23._0_8_ = auVar22._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar25;
      auVar23._8_8_ = auVar30._0_8_ * auVar18._8_8_ - dVar6 * dVar26;
      auVar18._8_4_ = SUB84(auVar23._8_8_,0);
      auVar18._0_8_ = auVar23._0_8_;
      auVar18._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
      auVar20._0_8_ = auVar16._0_8_ * dVar6 - auVar21._0_8_ * auVar30._0_8_;
      auVar20._8_8_ = auVar16._8_8_ * auVar24._8_8_ - auVar21._8_8_ * auVar30._8_8_;
      auVar24 = blendpd(auVar23,auVar20,2);
      dVar6 = dVar10 * dVar25 + dVar8 + auVar18._8_8_ +
              ((param_2.__this)->WorldTransform).Translation.XY.m128d_f64[0];
      dVar25 = dVar10 * dVar26 + dVar9 + auVar20._0_8_ +
               ((param_2.__this)->WorldTransform).Translation.XY.m128d_f64[1];
      dVar7 = dVar10 * auVar30._0_8_ + dVar7 + auVar24._0_8_ +
              ((param_2.__this)->WorldTransform).Translation.ZW.m128d_f64[0];
      if (dVar6 < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar6;
      }
      if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= dVar6 &&
          dVar6 != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar6;
      }
      if (dVar25 < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar25;
      }
      pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      if (*pdVar1 <= dVar25 && dVar25 != *pdVar1) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar25;
      }
      if (dVar7 < (__return_storage_ptr__->Min).field0_0x0._s_0.Z) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar7;
      }
      pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      if (*pdVar1 <= dVar7 && dVar7 != *pdVar1) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar7;
      }
      uVar15 = uVar15 + 1;
      if ((int)uVar13 <= (int)uVar15) break;
      while( true ) {
        lVar4 = *(longlong *)
                 (((param_1.Vector)->RefCounts).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar15 >> 9) * 8);
        if ((*(short *)(lVar4 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar4 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) break;
        uVar15 = uVar15 + 1;
        if ((int)uVar13 <= (int)uVar15) goto joined_r0x00014cd4cf9a;
      }
    }
  } while( true );
}

// MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3> @ 14cd4d210

TSharedRef<UE::Geometry::FDynamicMesh3,1> * __cdecl
MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3>
          (TSharedRef<UE::Geometry::FDynamicMesh3,1> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar4;
  
  pTVar3 = operator_new(0x240);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FDynamicMesh3 *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(pTVar3 + 1),param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FDynamicMesh3 *)(pTVar3 + 1);
    if ((FDynamicMesh3 *)(pTVar3 + 1) == (FDynamicMesh3 *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Geometry::FDynamicMesh3,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Geometry::FGroupTopology,1,UE::Geometry::FGroupTopology_&> @ 14cd4d2d0

TSharedRef<UE::Geometry::FGroupTopology,1> * __cdecl
MakeShared<UE::Geometry::FGroupTopology,1,UE::Geometry::FGroupTopology_&>
          (TSharedRef<UE::Geometry::FGroupTopology,1> *__return_storage_ptr__,
          FGroupTopology *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Geometry::FGroupTopology,1> *pTVar4;
  
  pTVar3 = operator_new(0x170);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FGroupTopology *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGroupTopology_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::FGroupTopology::FGroupTopology((FGroupTopology *)(pTVar3 + 1),param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FGroupTopology *)(pTVar3 + 1);
    if ((FGroupTopology *)(pTVar3 + 1) == (FGroupTopology *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Geometry::FGroupTopology,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UCollectSurfacePathMechanic> @ 14cd4d390

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCollectSurfacePathMechanic * __cdecl NewObject<UCollectSurfacePathMechanic>(UObject *param_1)

{
  UClass *pUVar1;
  UCollectSurfacePathMechanic *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCollectSurfacePathMechanic *)
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

// NewObject<UDiffusionSmoothProperties> @ 14cd4d430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDiffusionSmoothProperties * __cdecl NewObject<UDiffusionSmoothProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UDiffusionSmoothProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UDiffusionSmoothProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDiffusionSmoothProperties *)
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

// NewObject<UEdgeLoopInsertionProperties> @ 14cd4d4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEdgeLoopInsertionProperties * __cdecl NewObject<UEdgeLoopInsertionProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UEdgeLoopInsertionProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UEdgeLoopInsertionProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UEdgeLoopInsertionProperties *)
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

// NewObject<UGroupEdgeInsertionProperties> @ 14cd4d570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGroupEdgeInsertionProperties * __cdecl NewObject<UGroupEdgeInsertionProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UGroupEdgeInsertionProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGroupEdgeInsertionProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGroupEdgeInsertionProperties *)
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

// NewObject<UImplicitSmoothProperties> @ 14cd4d610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UImplicitSmoothProperties * __cdecl NewObject<UImplicitSmoothProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UImplicitSmoothProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UImplicitSmoothProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UImplicitSmoothProperties *)
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

// NewObject<UIterativeSmoothProperties> @ 14cd4d6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UIterativeSmoothProperties * __cdecl NewObject<UIterativeSmoothProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UIterativeSmoothProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UIterativeSmoothProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UIterativeSmoothProperties *)
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

// NewObject<UPolyEditBevelEdgeProperties> @ 14cd4d750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolyEditBevelEdgeProperties * __cdecl NewObject<UPolyEditBevelEdgeProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UPolyEditBevelEdgeProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPolyEditBevelEdgeProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolyEditBevelEdgeProperties *)
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

// NewObject<UPolyEditCutProperties> @ 14cd4d7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolyEditCutProperties * __cdecl NewObject<UPolyEditCutProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UPolyEditCutProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPolyEditCutProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolyEditCutProperties *)
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

// NewObject<UPolyEditExtrudeEdgeActivityProperties> @ 14cd4d890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolyEditExtrudeEdgeActivityProperties * __cdecl
NewObject<UPolyEditExtrudeEdgeActivityProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UPolyEditExtrudeEdgeActivityProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPolyEditExtrudeEdgeActivityProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolyEditExtrudeEdgeActivityProperties *)
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

// NewObject<UPolyEditExtrudeProperties> @ 14cd4d930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolyEditExtrudeProperties * __cdecl NewObject<UPolyEditExtrudeProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UPolyEditExtrudeProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPolyEditExtrudeProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolyEditExtrudeProperties *)
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

// NewObject<UPolyEditInsetOutsetProperties> @ 14cd4d9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolyEditInsetOutsetProperties * __cdecl NewObject<UPolyEditInsetOutsetProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UPolyEditInsetOutsetProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPolyEditInsetOutsetProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolyEditInsetOutsetProperties *)
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

// NewObject<UPolyEditOffsetProperties> @ 14cd4da70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolyEditOffsetProperties * __cdecl NewObject<UPolyEditOffsetProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UPolyEditOffsetProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPolyEditOffsetProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolyEditOffsetProperties *)
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

// NewObject<UPolyEditPreviewMesh> @ 14cd4db10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolyEditPreviewMesh * __cdecl NewObject<UPolyEditPreviewMesh>(UObject *param_1)

{
  UClass *pUVar1;
  UPolyEditPreviewMesh *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolyEditPreviewMesh *)
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

// NewObject<UPolyEditPushPullProperties> @ 14cd4dbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolyEditPushPullProperties * __cdecl NewObject<UPolyEditPushPullProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UPolyEditPushPullProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPolyEditPushPullProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolyEditPushPullProperties *)
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

// NewObject<UPolyEditSetUVProperties> @ 14cd4dc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPolyEditSetUVProperties * __cdecl NewObject<UPolyEditSetUVProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UPolyEditSetUVProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPolyEditSetUVProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPolyEditSetUVProperties *)
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

// NewObject<USmoothMeshTool> @ 14cd4dcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USmoothMeshTool * __cdecl NewObject<USmoothMeshTool>(UObject *param_1)

{
  UClass *pUVar1;
  USmoothMeshTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = USmoothMeshTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USmoothMeshTool *)
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

// NewObject<USmoothMeshToolProperties> @ 14cd4dd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USmoothMeshToolProperties * __cdecl NewObject<USmoothMeshToolProperties>(UObject *param_1)

{
  UClass *pUVar1;
  USmoothMeshToolProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = USmoothMeshToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USmoothMeshToolProperties *)
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

// NewObject<USmoothWeightMapSetProperties> @ 14cd4de30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USmoothWeightMapSetProperties * __cdecl NewObject<USmoothWeightMapSetProperties>(UObject *param_1)

{
  UClass *pUVar1;
  USmoothWeightMapSetProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = USmoothWeightMapSetProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USmoothWeightMapSetProperties *)
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

// NewObject<USpatialCurveDistanceMechanic> @ 14cd4ded0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USpatialCurveDistanceMechanic * __cdecl NewObject<USpatialCurveDistanceMechanic>(UObject *param_1)

{
  UClass *pUVar1;
  USpatialCurveDistanceMechanic *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USpatialCurveDistanceMechanic *)
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

// NewObject<UUVLayoutOperatorFactory> @ 14cd4df70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUVLayoutOperatorFactory * __cdecl NewObject<UUVLayoutOperatorFactory>(UObject *param_1)

{
  UClass *pUVar1;
  UUVLayoutOperatorFactory *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUVLayoutOperatorFactory *)
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

// NewObject<UUVLayoutProperties> @ 14cd4e010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUVLayoutProperties * __cdecl NewObject<UUVLayoutProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UUVLayoutProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UUVLayoutProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUVLayoutProperties *)
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

// NewObject<UUVLayoutTool> @ 14cd4e0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUVLayoutTool * __cdecl NewObject<UUVLayoutTool>(UObject *param_1)

{
  UClass *pUVar1;
  UUVLayoutTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UUVLayoutTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUVLayoutTool *)
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

// NewObject<UUVProjectionOperatorFactory> @ 14cd4e150

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUVProjectionOperatorFactory * __cdecl NewObject<UUVProjectionOperatorFactory>(UObject *param_1)

{
  UClass *pUVar1;
  UUVProjectionOperatorFactory *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UUVProjectionOperatorFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUVProjectionOperatorFactory *)
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

// NewObject<UUVProjectionTool> @ 14cd4e1f0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUVProjectionTool * __cdecl NewObject<UUVProjectionTool>(UObject *param_1)

{
  UClass *pUVar1;
  UUVProjectionTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UUVProjectionTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUVProjectionTool *)
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

// NewObject<UUVProjectionToolEditActions> @ 14cd4e290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUVProjectionToolEditActions * __cdecl NewObject<UUVProjectionToolEditActions>(UObject *param_1)

{
  UClass *pUVar1;
  UUVProjectionToolEditActions *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UUVProjectionToolEditActions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUVProjectionToolEditActions *)
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

// NewObject<UUVProjectionToolProperties> @ 14cd4e330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUVProjectionToolProperties * __cdecl NewObject<UUVProjectionToolProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UUVProjectionToolProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UUVProjectionToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUVProjectionToolProperties *)
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

// NewObject<UWeldMeshEdgesOperatorFactory> @ 14cd4e3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWeldMeshEdgesOperatorFactory * __cdecl NewObject<UWeldMeshEdgesOperatorFactory>(UObject *param_1)

{
  UClass *pUVar1;
  UWeldMeshEdgesOperatorFactory *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UWeldMeshEdgesOperatorFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWeldMeshEdgesOperatorFactory *)
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

// NewObject<UWeldMeshEdgesTool> @ 14cd4e470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWeldMeshEdgesTool * __cdecl NewObject<UWeldMeshEdgesTool>(UObject *param_1)

{
  UClass *pUVar1;
  UWeldMeshEdgesTool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UWeldMeshEdgesTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWeldMeshEdgesTool *)
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

// NewObject<UWeldMeshEdgesToolProperties> @ 14cd4e510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWeldMeshEdgesToolProperties * __cdecl NewObject<UWeldMeshEdgesToolProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UWeldMeshEdgesToolProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UWeldMeshEdgesToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWeldMeshEdgesToolProperties *)
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

// StaticEnum<enum_EEdgeLoopInsertionMode> @ 14cd4e630

UEnum * __cdecl StaticEnum<enum_EEdgeLoopInsertionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode,(UObject *)pUVar1,
                       L"EEdgeLoopInsertionMode");
  }
  return Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton;
}

// StaticEnum<enum_EEdgeLoopPositioningMode> @ 14cd4e670

UEnum * __cdecl StaticEnum<enum_EEdgeLoopPositioningMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode,
                       (UObject *)pUVar1,L"EEdgeLoopPositioningMode");
  }
  return Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton;
}

// StaticEnum<enum_EGroupEdgeInsertionMode> @ 14cd4e6b0

UEnum * __cdecl StaticEnum<enum_EGroupEdgeInsertionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode,(UObject *)pUVar1
                       ,L"EGroupEdgeInsertionMode");
  }
  return Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.OuterSingleton;
}

// StaticEnum<enum_EPolyEditCutPlaneOrientation> @ 14cd4e6f0

UEnum * __cdecl StaticEnum<enum_EPolyEditCutPlaneOrientation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation,
                       (UObject *)pUVar1,L"EPolyEditCutPlaneOrientation");
  }
  return Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton;
}

// StaticEnum<enum_EPolyEditExtrudeDirection> @ 14cd4e730

UEnum * __cdecl StaticEnum<enum_EPolyEditExtrudeDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDirection,
                       (UObject *)pUVar1,L"EPolyEditExtrudeDirection");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeDirection.OuterSingleton;
}

// StaticEnum<enum_EPolyEditExtrudeDistanceMode> @ 14cd4e770

UEnum * __cdecl StaticEnum<enum_EPolyEditExtrudeDistanceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeDistanceMode,
                       (UObject *)pUVar1,L"EPolyEditExtrudeDistanceMode");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeDistanceMode.OuterSingleton;
}

// StaticEnum<enum_EPolyEditExtrudeEdgeDirectionMode> @ 14cd4e7b0

UEnum * __cdecl StaticEnum<enum_EPolyEditExtrudeEdgeDirectionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode,
                       (UObject *)pUVar1,L"EPolyEditExtrudeEdgeDirectionMode");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.OuterSingleton;
}

// StaticEnum<enum_EPolyEditExtrudeEdgeDistanceMode> @ 14cd4e7f0

UEnum * __cdecl StaticEnum<enum_EPolyEditExtrudeEdgeDistanceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode,
                       (UObject *)pUVar1,L"EPolyEditExtrudeEdgeDistanceMode");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.OuterSingleton;
}

// StaticEnum<enum_EPolyEditExtrudeModeOptions> @ 14cd4e830

UEnum * __cdecl StaticEnum<enum_EPolyEditExtrudeModeOptions>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeModeOptions,
                       (UObject *)pUVar1,L"EPolyEditExtrudeModeOptions");
  }
  return Z_Registration_Info_UEnum_EPolyEditExtrudeModeOptions.OuterSingleton;
}

// StaticEnum<enum_EPolyEditOffsetModeOptions> @ 14cd4e870

UEnum * __cdecl StaticEnum<enum_EPolyEditOffsetModeOptions>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditOffsetModeOptions,
                       (UObject *)pUVar1,L"EPolyEditOffsetModeOptions");
  }
  return Z_Registration_Info_UEnum_EPolyEditOffsetModeOptions.OuterSingleton;
}

// StaticEnum<enum_EPolyEditPushPullModeOptions> @ 14cd4e8b0

UEnum * __cdecl StaticEnum<enum_EPolyEditPushPullModeOptions>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditPushPullModeOptions,
                       (UObject *)pUVar1,L"EPolyEditPushPullModeOptions");
  }
  return Z_Registration_Info_UEnum_EPolyEditPushPullModeOptions.OuterSingleton;
}

// StaticEnum<enum_ESmoothMeshToolSmoothType> @ 14cd4e8f0

UEnum * __cdecl StaticEnum<enum_ESmoothMeshToolSmoothType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_ESmoothMeshToolSmoothType,
                       (UObject *)pUVar1,L"ESmoothMeshToolSmoothType");
  }
  return Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.OuterSingleton;
}

// StaticEnum<enum_EUVProjectionToolActions> @ 14cd4e930

UEnum * __cdecl StaticEnum<enum_EUVProjectionToolActions>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUVProjectionToolActions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EUVProjectionToolActions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions,
                       (UObject *)pUVar1,L"EUVProjectionToolActions");
  }
  return Z_Registration_Info_UEnum_EUVProjectionToolActions.OuterSingleton;
}

// StaticEnum<enum_EUVProjectionToolInitializationMode> @ 14cd4e970

UEnum * __cdecl StaticEnum<enum_EUVProjectionToolInitializationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode,
                       (UObject *)pUVar1,L"EUVProjectionToolInitializationMode");
  }
  return Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.OuterSingleton;
}

// StaticEnum<enum_EWeldMeshEdgesAttributeUIMode> @ 14cd4e9b0

UEnum * __cdecl StaticEnum<enum_EWeldMeshEdgesAttributeUIMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshModelingTools();
    Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EWeldMeshEdgesAttributeUIMode,
                       (UObject *)pUVar1,L"EWeldMeshEdgesAttributeUIMode");
  }
  return Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.OuterSingleton;
}

// ToOpDirectionMode<enum_EPolyEditExtrudeModeOptions> @ 14cd4e9f0

EDirectionMode __cdecl
PolyEditExtrudeActivityLocals::ToOpDirectionMode<enum_EPolyEditExtrudeModeOptions>
          (EPolyEditExtrudeModeOptions param_1)

{
  return param_1;
}

// ToOpDirectionMode<enum_EPolyEditOffsetModeOptions> @ 14cd4ea00

EDirectionMode __cdecl
PolyEditExtrudeActivityLocals::ToOpDirectionMode<enum_EPolyEditOffsetModeOptions>
          (EPolyEditOffsetModeOptions param_1)

{
  return param_1;
}

// ToOpDirectionMode<enum_EPolyEditPushPullModeOptions> @ 14cd4ea10

EDirectionMode __cdecl
PolyEditExtrudeActivityLocals::ToOpDirectionMode<enum_EPolyEditPushPullModeOptions>
          (EPolyEditPushPullModeOptions param_1)

{
  return param_1;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_10>,0,0> @ 14cd52680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_10>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_10>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_10>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_10>,0,0> @ 14cd526a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_10>,0,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_10>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_10>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_11>,0,0> @ 14cd526c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_11>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_11>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_11>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_11>,1,0> @ 14cd526e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_11>,1,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_11>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_11>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_12>,0,0> @ 14cd52700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_12>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_12>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_12>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_13>,0,0> @ 14cd52720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_13>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_13>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_13>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_14>,0,0> @ 14cd52740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_14>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_14>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_14>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_15>,0,0> @ 14cd52760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_15>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_15>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_15>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditCutFacesActivity::ApplyCutFaces'::__l2::<lambda_1>,1,0> @ 14cd52780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditCutFacesActivity::ApplyCutFaces'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UPolyEditCutFacesActivity::ApplyCutFaces_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditCutFacesActivity::ApplyCutFaces'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditCutFacesActivity::BeginCutFaces'::__l2::<lambda_1>,1,0> @ 14cd527a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditCutFacesActivity::BeginCutFaces'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UPolyEditCutFacesActivity::BeginCutFaces_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditCutFacesActivity::BeginCutFaces'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditInsetOutsetActivity::BeginInset'::__l2::<lambda_1>,1,0> @ 14cd527c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditInsetOutsetActivity::BeginInset'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UPolyEditInsetOutsetActivity::BeginInset_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditInsetOutsetActivity::BeginInset'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditPlanarProjectionUVActivity::BeginSetUVs'::__l2::<lambda_1>,1,0> @ 14cd527e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditPlanarProjectionUVActivity::BeginSetUVs'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UPolyEditPlanarProjectionUVActivity::BeginSetUVs_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditPlanarProjectionUVActivity::BeginSetUVs'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_1>,0,0> @ 14cd52800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USmoothMeshTool::InitializeProperties_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::ReinitializeExtrudeHeightMechanic'::__l2::<lambda_1>,0,1> @ 14cd52820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::ReinitializeExtrudeHeightMechanic'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::ReinitializeExtrudeHeightMechanic_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::ReinitializeExtrudeHeightMechanic'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_1>,0,0> @ 14cd52840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UPolyEditBevelEdgeActivity::Setup_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_1>,0,0> @ 14cd52860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UUVLayoutTool::Setup'::__l7::<lambda_1>,0,0> @ 14cd52880

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVLayoutTool::Setup'::__l7::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UUVLayoutTool::Setup_::__l7::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVLayoutTool::Setup'::`7'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_1>,1,0> @ 14cd528a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UUVLayoutTool::UpdateNumPreviews_::__l11::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVLayoutTool::UpdateNumPreviews'::`11'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult'::__l13::<lambda_1>,0,0> @ 14cd528c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult'::__l13::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult_::__l13::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__N___CalculateResult_FExtrudeEdgeOp_PolyEditExtrudeEdgeActivityLocals__UEAAXPEAVFProgressCancel___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_2>,1,0> @ 14cd528e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_USmoothMeshTool::InitializeProperties_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_2>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_2>,0,0> @ 14cd52900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UPolyEditBevelEdgeActivity::Setup_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_2>,0,0> @ 14cd52920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_2>,0,0> @ 14cd52940

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_2>,0,0>
::~TFunction_OwnedObject<_UUVProjectionTool::Setup_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_2>,0,0> @ 14cd52960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::__l2::<lambda_2>,1,0> @ 14cd52980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Start_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::`2'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult'::__l13::<lambda_2>,0,0> @ 14cd529a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult'::__l13::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult_::__l13::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__N___CalculateResult_FExtrudeEdgeOp_PolyEditExtrudeEdgeActivityLocals__UEAAXPEAVFProgressCancel___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_3>,1,0> @ 14cd529c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_3>,1,0>::
~TFunction_OwnedObject<_USmoothMeshTool::InitializeProperties_::__l2::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_3>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_3>,0,0> @ 14cd529e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UPolyEditBevelEdgeActivity::Setup_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_3>,0,0> @ 14cd52a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_3>,0,0> @ 14cd52a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeEdgeActivity::Setup_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_3>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_3>,0,0> @ 14cd52a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::__l2::<lambda_3>,1,0> @ 14cd52a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::__l2::<lambda_3>,1,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Start_::__l2::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::`2'::<lambda_3>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void>'::__l1::<lambda_45_>,0,0> @ 14cd52a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void>'::__l1::<lambda_45_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void>_::__l1::<lambda_45_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_45_>__0_____0W4ESmoothMeshToolSmoothType__X___TPropertyWatcher_W4ESmoothMeshToolSmoothType___FWatchablePropertySet__QEAA_AEBW4ESmoothMeshToolSmoothType__V__TFunction___A6AXAEBW4ESmoothMeshToolSmoothType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::<lambda_47_>,0,0> @ 14cd52aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::<lambda_47_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>_::__l1::<lambda_47_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_47_>__0_____0MX___TPropertyWatcher_M_FWatchablePropertySet__QEAA_AEBMV__TFunction___A6AXAEBM_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>'::__l1::<lambda_49_>,0,0> @ 14cd52ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>'::__l1::<lambda_49_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>_::__l1::<lambda_49_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_49_>__0_____0NX___TPropertyWatcher_N_FWatchablePropertySet__QEAA_AEBNV__TFunction___A6AXAEBN_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_4>,1,0> @ 14cd52ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_4>,1,0>::
~TFunction_OwnedObject<_USmoothMeshTool::InitializeProperties_::__l2::<lambda_4>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_4>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_4>,0,0> @ 14cd52b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UPolyEditBevelEdgeActivity::Setup_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_4>,0,0> @ 14cd52b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_4>,0,0> @ 14cd52b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeEdgeActivity::Setup_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_4>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_4>,0,0> @ 14cd52b60

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_4>,0,0>
::~TFunction_OwnedObject<_UUVProjectionTool::Setup_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_4>,0,0> @ 14cd52b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_51_>,0,0> @ 14cd52ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_51_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>_::__l1::<lambda_51_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_51_>__0_____0HX___TPropertyWatcher_H_FWatchablePropertySet__QEAA_AEBHV__TFunction___A6AXAEBH_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_53_>,0,0> @ 14cd52bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_53_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>_::__l1::<lambda_53_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_53_>__0_____0_NX___TPropertyWatcher__N_FWatchablePropertySet__QEAA_AEB_NV__TFunction___A6AXAEB_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void>'::__l1::<lambda_55_>,0,0> @ 14cd52be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void>'::__l1::<lambda_55_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void>_::__l1::<lambda_55_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_55_>__0_____0W4EPolyEditExtrudeDirection__X___TPropertyWatcher_W4EPolyEditExtrudeDirection___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeDirection__V__TFunction___A6AXAEBW4EPolyEditExtrudeDirection___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void>'::__l1::<lambda_57_>,0,0> @ 14cd52c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void>'::__l1::<lambda_57_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void>_::__l1::<lambda_57_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_57_>__0_____0W4EPolyEditExtrudeModeOptions__X___TPropertyWatcher_W4EPolyEditExtrudeModeOptions___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeModeOptions__V__TFunction___A6AXAEBW4EPolyEditExtrudeModeOptions___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void>'::__l1::<lambda_59_>,0,0> @ 14cd52c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void>'::__l1::<lambda_59_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void>_::__l1::<lambda_59_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_59_>__0_____0W4EPolyEditExtrudeDistanceMode__X___TPropertyWatcher_W4EPolyEditExtrudeDistanceMode___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeDistanceMode__V__TFunction___A6AXAEBW4EPolyEditExtrudeDistanceMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_5>,1,0> @ 14cd52c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_5>,1,0>::
~TFunction_OwnedObject<_USmoothMeshTool::InitializeProperties_::__l2::<lambda_5>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_5>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_5>,0,0> @ 14cd52c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UPolyEditBevelEdgeActivity::Setup_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_5>,0,0> @ 14cd52c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_5>,0,0> @ 14cd52ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeEdgeActivity::Setup_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_5>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_5>,0,0> @ 14cd52cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void>'::__l1::<lambda_61_>,0,0> @ 14cd52ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void>'::__l1::<lambda_61_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void>_::__l1::<lambda_61_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_61_>__0_____0W4EPolyEditOffsetModeOptions__X___TPropertyWatcher_W4EPolyEditOffsetModeOptions___FWatchablePropertySet__QEAA_AEBW4EPolyEditOffsetModeOptions__V__TFunction___A6AXAEBW4EPolyEditOffsetModeOptions___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void>'::__l1::<lambda_63_>,0,0> @ 14cd52d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void>'::__l1::<lambda_63_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void>_::__l1::<lambda_63_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_63_>__0_____0W4EPolyEditPushPullModeOptions__X___TPropertyWatcher_W4EPolyEditPushPullModeOptions___FWatchablePropertySet__QEAA_AEBW4EPolyEditPushPullModeOptions__V__TFunction___A6AXAEBW4EPolyEditPushPullModeOptions___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void>'::__l1::<lambda_65_>,0,0> @ 14cd52d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void>'::__l1::<lambda_65_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void>_::__l1::<lambda_65_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_65_>__0_____0W4EPolyEditExtrudeEdgeDirectionMode__X___TPropertyWatcher_W4EPolyEditExtrudeEdgeDirectionMode___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeEdgeDirectionMode__V__TFunction___A6AXAEBW4EPolyEditExtrudeEdgeDirectionMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void>'::__l1::<lambda_67_>,0,0> @ 14cd52d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void>'::__l1::<lambda_67_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void>_::__l1::<lambda_67_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_67_>__0_____0W4EPolyEditExtrudeEdgeDistanceMode__X___TPropertyWatcher_W4EPolyEditExtrudeEdgeDistanceMode___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeEdgeDistanceMode__V__TFunction___A6AXAEBW4EPolyEditExtrudeEdgeDistanceMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::<lambda_69_>,0,0> @ 14cd52d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::<lambda_69_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>_::__l1::<lambda_69_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_69_>__0_____0VFString__X___TPropertyWatcher_VFString___FWatchablePropertySet__QEAA_AEBVFString__V__TFunction___A6AXAEBVFString___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_6>,0,0> @ 14cd52d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_USmoothMeshTool::InitializeProperties_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_6>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_6>,0,0> @ 14cd52da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_6>,0,0> @ 14cd52dc0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_6>,0,0>
::~TFunction_OwnedObject<_UUVProjectionTool::Setup_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_6>,0,0> @ 14cd52de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void>'::__l1::<lambda_71_>,0,0> @ 14cd52e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void>'::__l1::<lambda_71_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void>_::__l1::<lambda_71_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_71_>__0_____0U__TVector_N_Math_UE__X___TPropertyWatcher_U__TVector_N_Math_UE___FWatchablePropertySet__QEAA_AEBU__TVector_N_Math_UE__V__TFunction___A6AXAEBU__TVector_N_Math_UE___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void>'::__l1::<lambda_73_>,0,0> @ 14cd52e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void>'::__l1::<lambda_73_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void>_::__l1::<lambda_73_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_73_>__0_____0W4EUVProjectionToolInitializationMode__X___TPropertyWatcher_W4EUVProjectionToolInitializationMode___FWatchablePropertySet__QEAA_AEBW4EUVProjectionToolInitializationMode__V__TFunction___A6AXAEBW4EUVProjectionToolInitializationMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void>'::__l1::<lambda_75_>,0,0> @ 14cd52e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void>'::__l1::<lambda_75_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void>_::__l1::<lambda_75_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_75_>__0_____0W4EWeldMeshEdgesAttributeUIMode__X___TPropertyWatcher_W4EWeldMeshEdgesAttributeUIMode___FWatchablePropertySet__QEAA_AEBW4EWeldMeshEdgesAttributeUIMode__V__TFunction___A6AXAEBW4EWeldMeshEdgesAttributeUIMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_7>,0,0> @ 14cd52e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_7>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_7>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_7>,0,0> @ 14cd52e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_7>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeEdgeActivity::Setup_::__l2::<lambda_7>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_7>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_7>,0,0> @ 14cd52ea0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_7>,0,0>
::~TFunction_OwnedObject<_UUVProjectionTool::Setup_::__l2::<lambda_7>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_7>,0,0> @ 14cd52ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_7>,0,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_7>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_8>,0,0> @ 14cd52ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_8>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_8>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_8>,0,0> @ 14cd52f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_8>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeEdgeActivity::Setup_::__l2::<lambda_8>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_8>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_8>,0,0> @ 14cd52f20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_8>,0,0>
::~TFunction_OwnedObject<_UUVProjectionTool::Setup_::__l2::<lambda_8>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_8>,0,0> @ 14cd52f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_8>,0,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_8>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_9>,0,0> @ 14cd52f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_9>,0,0>::
~TFunction_OwnedObject<_UPolyEditExtrudeActivity::Setup_::__l2::<lambda_9>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_9>,0,0> @ 14cd52f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_9>,0,0>::
~TFunction_OwnedObject<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_9>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  return;
}

// operator() @ 14cd53e80

void __thiscall
``UPolyEditExtrudeEdgeActivity::UpdateDrawnPreviewEdges'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  FColor_u_0 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar10 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar10 + 0x260)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar7 = *(uint *)(*(longlong *)(lVar10 + 600) + (longlong)param_1 * 4);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4)))
  {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar2 + 0x1d8) + (ulonglong)(uVar7 >> 9) * 8) +
                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar3 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(uVar7 >> 9) * 8) +
               (ulonglong)(uVar7 & 0x1ff) * 0x10);
      uVar9 = (ulonglong)((uint)(uVar3 >> 0x20) & 0x1ff);
      lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (uVar3 >> 0x29) * 8);
      puVar1 = (undefined8 *)(lVar10 + uVar9 * 0x18);
      uStack_30 = *puVar1;
      uStack_28 = puVar1[1];
      uStack_20 = *(undefined8 *)(lVar10 + 0x10 + uVar9 * 0x18);
      uVar9 = (ulonglong)((uint)uVar3 & 0x1ff);
      lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + ((uVar3 & 0xffffffff) >> 9) * 8);
      pFVar4 = (param_2->AllocatorInstance).Data;
      puVar1 = (undefined8 *)(lVar10 + uVar9 * 0x18);
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      local_38 = *(undefined8 *)(lVar10 + 0x10 + uVar9 * 0x18);
      local_18 = PolyEditExtrudeEdgeActivityLocals::GroupLineColor.field0_0x0;
      uStack_14 = 0x3f800000;
      uStack_10 = 0x3f000000;
      if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)param_2->ArrayMax * 0x40)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar8 + 1;
      pFVar4 = (param_2->AllocatorInstance).Data;
      lVar10 = (longlong)iVar8 * 0x40;
      *(undefined8 *)(pFVar4 + lVar10) = local_48;
      *(undefined8 *)(pFVar4 + lVar10 + 8) = uStack_40;
      *(undefined8 *)(pFVar4 + lVar10 + 0x10) = local_38;
      *(undefined8 *)(pFVar4 + lVar10 + 0x10 + 8) = uStack_30;
      *(undefined8 *)(pFVar4 + lVar10 + 0x20) = uStack_28;
      *(undefined8 *)(pFVar4 + lVar10 + 0x20 + 8) = uStack_20;
      *(ulonglong *)(pFVar4 + lVar10 + 0x30) = CONCAT44(uStack_14,local_18.Bits);
      *(ulonglong *)(pFVar4 + lVar10 + 0x30 + 8) = CONCAT44(uStack_c,uStack_10);
      return;
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8341837429644197293>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeEdgeActivity.cpp"
                     ,0x253,"Mesh.IsEdge(Eid)");
  if (!bVar6) {
    return;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// operator() @ 14cd54130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(char *)(*(longlong *)this + 0x2e0) != '\0') {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar6 = *(uint *)((longlong)&param_1->field0_0x0 + 4) ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar7 = *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78;
    uVar8 = *(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    uVar9 = (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)uVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)&param_1->field0_0x0 =
         *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&param_1->field0_0x0 + 4) = uVar6;
    *(uint *)((longlong)&param_1->field0_0x0 + 8) = uVar7;
    *(uint *)((longlong)&param_1->field0_0x0 + 0xc) = uVar8;
    (param_1->field0_0x0)._s_0.Z = (double)CONCAT44(uVar10,uVar9);
  }
  UE::Math::TVector<double>::Normalize(param_1,__real_3e45798ee0000000);
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  if ((((param_1->field0_0x0)._s_0.X == 0.0) && ((param_1->field0_0x0)._s_0.Y == 0.0)) &&
     ((param_1->field0_0x0)._s_0.Z == 0.0)) {
    (param_1->field0_0x0)._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    (param_1->field0_0x0)._s_0.Y = (double)uVar1;
    (param_1->field0_0x0)._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  }
  dVar2 = *(double *)(*(longlong *)(*(longlong *)this + 0x38) + 0xb8);
  dVar5 = (param_1->field0_0x0)._s_0.Y * dVar2;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (param_1->field0_0x0)._s_0.X * dVar2;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar4;
  (param_1->field0_0x0)._s_0.Z = dVar2 * dVar3;
  return;
}

// `vcall'{792,{flat}}'_}' @ 14cd56fd4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UPolyEditInsertEdgeActivity::`vcall'{792,{flat}}' }' */

void __thiscall
UPolyEditInsertEdgeActivity::_vcall__792__flat______(UPolyEditInsertEdgeActivity *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cd56fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x318))();
  return;
}

// `vcall'{792,{flat}}'_}' @ 14cd56fe4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UPolyEditInsertEdgeLoopActivity::`vcall'{792,{flat}}' }' */

void __thiscall
UPolyEditInsertEdgeLoopActivity::_vcall__792__flat______(UPolyEditInsertEdgeLoopActivity *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cd56fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x318))();
  return;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cd56ff4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditBevelEdgeActivity::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditBevelEdgeActivity::_vector_deleting_destructor__adjustor_48__
          (UPolyEditBevelEdgeActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditBevelEdgeActivity *)
                      &this[-1].ActiveSelection.SelectedEdgeIDs.Elements.field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cd57004

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditCutFacesActivity::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditCutFacesActivity::_vector_deleting_destructor__adjustor_48__
          (UPolyEditCutFacesActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditCutFacesActivity *)&this[-1].CameraState.Orientation.Z,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14cd57014

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditCutFacesActivity::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditCutFacesActivity::_vector_deleting_destructor__adjustor_56__
          (UPolyEditCutFacesActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditCutFacesActivity *)&this[-1].CameraState.Orientation.Y,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cd57024

/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditExtrudeActivity::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditExtrudeActivity::_vector_deleting_destructor__adjustor_48__
          (UPolyEditExtrudeActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditExtrudeActivity *)
                      ((longlong)&this[-1].ActiveSelectionFrameWorld.Origin.field0_0x0 + 0x10),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14cd57034

/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditExtrudeActivity::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditExtrudeActivity::_vector_deleting_destructor__adjustor_56__
          (UPolyEditExtrudeActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditExtrudeActivity *)
                      ((longlong)&this[-1].ActiveSelectionFrameWorld.Origin.field0_0x0 + 8),param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14cd57044

/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditExtrudeActivity::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditExtrudeActivity::_vector_deleting_destructor__adjustor_64__
          (UPolyEditExtrudeActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditExtrudeActivity *)&this[-1].ActiveSelectionFrameWorld,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cd57054

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditExtrudeEdgeActivity::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditExtrudeEdgeActivity::_vector_deleting_destructor__adjustor_48__
          (UPolyEditExtrudeEdgeActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditExtrudeEdgeActivity *)&this[-1].CurrentMeshTransform.Scale3D,param_1
                     );
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cd57064

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditInsertEdgeActivity::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditInsertEdgeActivity::_vector_deleting_destructor__adjustor_48__
          (UPolyEditInsertEdgeActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditInsertEdgeActivity *)
                      &this[-1].LatestOpChangedTids.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14cd57074

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditInsertEdgeActivity::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditInsertEdgeActivity::_vector_deleting_destructor__adjustor_56__
          (UPolyEditInsertEdgeActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditInsertEdgeActivity *)&this[-1].LatestOpChangedTids,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14cd57084

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditInsertEdgeActivity::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditInsertEdgeActivity::_vector_deleting_destructor__adjustor_64__
          (UPolyEditInsertEdgeActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditInsertEdgeActivity *)
                      &this[-1].LatestOpTopologyResult.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cd57094

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditInsertEdgeLoopActivity::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditInsertEdgeLoopActivity::_vector_deleting_destructor__adjustor_48__
          (UPolyEditInsertEdgeLoopActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditInsertEdgeLoopActivity *)&this[-1].bWaitingForInsertionCompletion,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14cd570a4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditInsertEdgeLoopActivity::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditInsertEdgeLoopActivity::_vector_deleting_destructor__adjustor_56__
          (UPolyEditInsertEdgeLoopActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditInsertEdgeLoopActivity *)&this[-1].InteractiveInputLength,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14cd570b4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditInsertEdgeLoopActivity::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditInsertEdgeLoopActivity::_vector_deleting_destructor__adjustor_64__
          (UPolyEditInsertEdgeLoopActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditInsertEdgeLoopActivity *)&this[-1].InputGroupEdgeID,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cd570c4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditInsetOutsetActivity::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditInsetOutsetActivity::_vector_deleting_destructor__adjustor_48__
          (UPolyEditInsetOutsetActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPolyEditInsetOutsetActivity *)&this[-1].Settings,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14cd570d4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditInsetOutsetActivity::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditInsetOutsetActivity::_vector_deleting_destructor__adjustor_56__
          (UPolyEditInsetOutsetActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPolyEditInsetOutsetActivity *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cd570e4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditPlanarProjectionUVActivity::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditPlanarProjectionUVActivity::_vector_deleting_destructor__adjustor_48__
          (UPolyEditPlanarProjectionUVActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditPlanarProjectionUVActivity *)&this[-1].CameraState.Orientation.Z,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14cd570f4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPolyEditPlanarProjectionUVActivity::`vector
   deleting destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPolyEditPlanarProjectionUVActivity::_vector_deleting_destructor__adjustor_56__
          (UPolyEditPlanarProjectionUVActivity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPolyEditPlanarProjectionUVActivity *)&this[-1].CameraState.Orientation.Y,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{328}' @ 14cd57104

/* [thunk]:public: virtual void * __ptr64 __cdecl USmoothMeshTool::`vector deleting
   destructor'`adjustor{328}' (unsigned int) __ptr64 */

void * __thiscall
USmoothMeshTool::_vector_deleting_destructor__adjustor_328__(USmoothMeshTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USmoothMeshTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cd57118

/* [thunk]:public: virtual void * __ptr64 __cdecl USmoothMeshTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USmoothMeshTool::_vector_deleting_destructor__adjustor_40__(USmoothMeshTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USmoothMeshTool *)&this[-1].SmoothProperties,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1184}' @ 14cd57128

/* [thunk]:public: virtual void * __ptr64 __cdecl USmoothMeshTool::`vector deleting
   destructor'`adjustor{1184}' (unsigned int) __ptr64 */

void * __thiscall
USmoothMeshTool::_vector_deleting_destructor__adjustor_1184__(USmoothMeshTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USmoothMeshTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cd5713c

/* [thunk]:public: virtual void * __ptr64 __cdecl USmoothMeshTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
USmoothMeshTool::_vector_deleting_destructor__adjustor_192__(USmoothMeshTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USmoothMeshTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cd57150

/* [thunk]:public: virtual void * __ptr64 __cdecl UUVLayoutTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UUVLayoutTool::_vector_deleting_destructor__adjustor_40__(UUVLayoutTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UUVLayoutTool *)&this[-1].CameraState.AspectRatio,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cd57160

/* [thunk]:public: virtual void * __ptr64 __cdecl UUVLayoutTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UUVLayoutTool::_vector_deleting_destructor__adjustor_192__(UUVLayoutTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UUVLayoutTool *)&this[-1].field_0xe0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cd57174

/* [thunk]:public: virtual void * __ptr64 __cdecl UUVLayoutTool::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UUVLayoutTool::_vector_deleting_destructor__adjustor_224__(UUVLayoutTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UUVLayoutTool *)&this[-1].field_0xc0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cd57188

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UUVProjectionOperatorFactory::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UUVProjectionOperatorFactory::_vector_deleting_destructor__adjustor_40__
          (UUVProjectionOperatorFactory *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UUVProjectionOperatorFactory *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cd57198

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UUVProjectionTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UUVProjectionTool::_vector_deleting_destructor__adjustor_40__(UUVProjectionTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UUVProjectionTool *)
                      (this[-1].ProjectionShapeVisualizer.TotalTransform.Scale3D.ZW.m128d_f64 + 1),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cd571a8

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UUVProjectionTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UUVProjectionTool::_vector_deleting_destructor__adjustor_192__(UUVProjectionTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UUVProjectionTool *)
                      &this[-1].ProjectionShapeVisualizer.CameraState.HorizontalFOVDegrees,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cd571bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UWeldMeshEdgesOperatorFactory::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWeldMeshEdgesOperatorFactory::_vector_deleting_destructor__adjustor_40__
          (UWeldMeshEdgesOperatorFactory *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWeldMeshEdgesOperatorFactory *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cd571cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UWeldMeshEdgesTool::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWeldMeshEdgesTool::_vector_deleting_destructor__adjustor_40__
          (UWeldMeshEdgesTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWeldMeshEdgesTool *)&this[-1].SelectedEdges.Elements.field_0x28,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14cd571dc

/* [thunk]:public: virtual void * __ptr64 __cdecl UWeldMeshEdgesTool::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UWeldMeshEdgesTool::_vector_deleting_destructor__adjustor_192__
          (UWeldMeshEdgesTool *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWeldMeshEdgesTool *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cd571f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_12>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57220

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57250

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57280

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy,`UUVProjectionTool::Setup'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd572b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UWeldMeshEdgesTool::Setup'::__l2::<lambda_13>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd572e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPolyEditInsertEdgeActivity,void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPolyEditInsertEdgeActivity,void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57310

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPolyEditInsertEdgeLoopActivity,void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPolyEditInsertEdgeLoopActivity,void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57340

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UUVProjectionTool,void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UUVProjectionTool,void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57370

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UUVProjectionTool,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UUVProjectionTool,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd573a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EPolyEditExtrudeDirection_const_&,enum_EPolyEditExtrudeDirection_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeDirection__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd573e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EPolyEditExtrudeDistanceMode_const_&,enum_EPolyEditExtrudeDistanceMode_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeDistanceMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EPolyEditExtrudeEdgeDirectionMode_const_&,enum_EPolyEditExtrudeEdgeDirectionMode_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeEdgeDirectionMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EPolyEditExtrudeEdgeDistanceMode_const_&,enum_EPolyEditExtrudeEdgeDistanceMode_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeEdgeDistanceMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd574a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EPolyEditExtrudeModeOptions_const_&,enum_EPolyEditExtrudeModeOptions_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditExtrudeModeOptions__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd574e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EPolyEditOffsetModeOptions_const_&,enum_EPolyEditOffsetModeOptions_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditOffsetModeOptions__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EPolyEditPushPullModeOptions_const_&,enum_EPolyEditPushPullModeOptions_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EPolyEditPushPullModeOptions__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_ESmoothMeshToolSmoothType_const_&,enum_ESmoothMeshToolSmoothType_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4ESmoothMeshToolSmoothType__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd575a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EUVProjectionToolInitializationMode_const_&,enum_EUVProjectionToolInitializationMode_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EUVProjectionToolInitializationMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd575e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(enum_EWeldMeshEdgesAttributeUIMode_const_&,enum_EWeldMeshEdgesAttributeUIMode_const_&),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBW4EWeldMeshEdgesAttributeUIMode__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_10>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_10>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_10>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_10>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd576a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_11>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_11>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd576e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_11>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_11>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_12>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_12>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_13>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_13>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd577a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_14>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_14>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd577e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_15>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_15>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditCutFacesActivity::ApplyCutFaces'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditCutFacesActivity::ApplyCutFaces'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditCutFacesActivity::BeginCutFaces'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditCutFacesActivity::BeginCutFaces'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd578a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditInsetOutsetActivity::BeginInset'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditInsetOutsetActivity::BeginInset'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd578e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditPlanarProjectionUVActivity::BeginSetUVs'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditPlanarProjectionUVActivity::BeginSetUVs'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::ReinitializeExtrudeHeightMechanic'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::ReinitializeExtrudeHeightMechanic'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd579a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd579e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57a20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVLayoutTool::Setup'::__l7::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVLayoutTool::Setup'::`7'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVLayoutTool::UpdateNumPreviews'::`11'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult'::__l13::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__N___CalculateResult_FExtrudeEdgeOp_PolyEditExtrudeEdgeActivityLocals__UEAAXPEAVFProgressCancel___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_2>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57ba0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::`2'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult'::__l13::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__N___CalculateResult_FExtrudeEdgeOp_PolyEditExtrudeEdgeActivityLocals__UEAAXPEAVFProgressCancel___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_3>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_3>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::__l2::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Start'::`2'::<lambda_3>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void>'::__l1::<lambda_45_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_45_>__0_____0W4ESmoothMeshToolSmoothType__X___TPropertyWatcher_W4ESmoothMeshToolSmoothType___FWatchablePropertySet__QEAA_AEBW4ESmoothMeshToolSmoothType__V__TFunction___A6AXAEBW4ESmoothMeshToolSmoothType___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<float>::TPropertyWatcher<float><float,void>'::__l1::<lambda_47_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_47_>__0_____0MX___TPropertyWatcher_M_FWatchablePropertySet__QEAA_AEBMV__TFunction___A6AXAEBM_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<double>::TPropertyWatcher<double><double,void>'::__l1::<lambda_49_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_49_>__0_____0NX___TPropertyWatcher_N_FWatchablePropertySet__QEAA_AEBNV__TFunction___A6AXAEBN_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_4>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_4>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_4>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd57fe0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<int>::TPropertyWatcher<int><int,void>'::__l1::<lambda_51_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_51_>__0_____0HX___TPropertyWatcher_H_FWatchablePropertySet__QEAA_AEBHV__TFunction___A6AXAEBH_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd580a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_53_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_53_>__0_____0_NX___TPropertyWatcher__N_FWatchablePropertySet__QEAA_AEB_NV__TFunction___A6AXAEB_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd580e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void>'::__l1::<lambda_55_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_55_>__0_____0W4EPolyEditExtrudeDirection__X___TPropertyWatcher_W4EPolyEditExtrudeDirection___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeDirection__V__TFunction___A6AXAEBW4EPolyEditExtrudeDirection___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions><enum_EPolyEditExtrudeModeOptions,void>'::__l1::<lambda_57_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_57_>__0_____0W4EPolyEditExtrudeModeOptions__X___TPropertyWatcher_W4EPolyEditExtrudeModeOptions___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeModeOptions__V__TFunction___A6AXAEBW4EPolyEditExtrudeModeOptions___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void>'::__l1::<lambda_59_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_59_>__0_____0W4EPolyEditExtrudeDistanceMode__X___TPropertyWatcher_W4EPolyEditExtrudeDistanceMode___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeDistanceMode__V__TFunction___A6AXAEBW4EPolyEditExtrudeDistanceMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd581a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_5>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_5>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd581e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditBevelEdgeActivity::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_5>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd582a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd582e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::TPropertyWatcher<enum_EPolyEditOffsetModeOptions><enum_EPolyEditOffsetModeOptions,void>'::__l1::<lambda_61_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_61_>__0_____0W4EPolyEditOffsetModeOptions__X___TPropertyWatcher_W4EPolyEditOffsetModeOptions___FWatchablePropertySet__QEAA_AEBW4EPolyEditOffsetModeOptions__V__TFunction___A6AXAEBW4EPolyEditOffsetModeOptions___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::TPropertyWatcher<enum_EPolyEditPushPullModeOptions><enum_EPolyEditPushPullModeOptions,void>'::__l1::<lambda_63_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_63_>__0_____0W4EPolyEditPushPullModeOptions__X___TPropertyWatcher_W4EPolyEditPushPullModeOptions___FWatchablePropertySet__QEAA_AEBW4EPolyEditPushPullModeOptions__V__TFunction___A6AXAEBW4EPolyEditPushPullModeOptions___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void>'::__l1::<lambda_65_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_65_>__0_____0W4EPolyEditExtrudeEdgeDirectionMode__X___TPropertyWatcher_W4EPolyEditExtrudeEdgeDirectionMode___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeEdgeDirectionMode__V__TFunction___A6AXAEBW4EPolyEditExtrudeEdgeDirectionMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd583a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void>'::__l1::<lambda_67_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_67_>__0_____0W4EPolyEditExtrudeEdgeDistanceMode__X___TPropertyWatcher_W4EPolyEditExtrudeEdgeDistanceMode___FWatchablePropertySet__QEAA_AEBW4EPolyEditExtrudeEdgeDistanceMode__V__TFunction___A6AXAEBW4EPolyEditExtrudeEdgeDistanceMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd583e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>'::__l1::<lambda_69_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_69_>__0_____0VFString__X___TPropertyWatcher_VFString___FWatchablePropertySet__QEAA_AEBVFString__V__TFunction___A6AXAEBVFString___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_6>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd584a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_6>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd584e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void>'::__l1::<lambda_71_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_71_>__0_____0U__TVector_N_Math_UE__X___TPropertyWatcher_U__TVector_N_Math_UE___FWatchablePropertySet__QEAA_AEBU__TVector_N_Math_UE__V__TFunction___A6AXAEBU__TVector_N_Math_UE___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void>'::__l1::<lambda_73_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_73_>__0_____0W4EUVProjectionToolInitializationMode__X___TPropertyWatcher_W4EUVProjectionToolInitializationMode___FWatchablePropertySet__QEAA_AEBW4EUVProjectionToolInitializationMode__V__TFunction___A6AXAEBW4EUVProjectionToolInitializationMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd585a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void>'::__l1::<lambda_75_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_75_>__0_____0W4EWeldMeshEdgesAttributeUIMode__X___TPropertyWatcher_W4EWeldMeshEdgesAttributeUIMode___FWatchablePropertySet__QEAA_AEBW4EWeldMeshEdgesAttributeUIMode__V__TFunction___A6AXAEBW4EWeldMeshEdgesAttributeUIMode___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd585e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_7>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_7>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_7>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58660

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_7>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd586a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_7>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd586e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_8>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_8>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_8>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58760

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UUVProjectionTool::Setup'::__l2::<lambda_8>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd587a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_8>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd587e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::__l2::<lambda_9>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPolyEditExtrudeActivity::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_9>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58860

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::_scalar_deleting_destructor_
          (TPropertyWatcher<UE::Math::TVector<double>_> *this,uint param_1)

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
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd588f0

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDirection>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58980

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58a10

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58aa0

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58b30

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeModeOptions>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58bc0

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditOffsetModeOptions>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58c50

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditPushPullModeOptions>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58ce0

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58d70

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58e00

void * __thiscall
FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd58e90

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58ec0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58ef0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58f20

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58f50

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58f80

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58fb0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd58fe0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditBevelEdgeActivity::Start'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59010

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeActivity::Start'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59040

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy,`UPolyEditExtrudeEdgeActivity::Start'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59070

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd590a0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UPolyEditInsertEdgeLoopActivity::Setup'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd590d0

void * __thiscall FBevelOp::_scalar_deleting_destructor_(FBevelOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBevelOp__6B_;
  pFVar1 = (this->BevelGroupFaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BevelGroupEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59160

void * __thiscall
UE::Geometry::FEdgeLoopInsertionOp::_scalar_deleting_destructor_
          (FEdgeLoopInsertionOp *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FEdgeLoopInsertionOp_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResultTopology).SharedReferenceCount.ReferenceController);
  (this->ProblemGroupEdgeIDs).HashSize = 0;
  FVar1 = (this->ProblemGroupEdgeIDs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ProblemGroupEdgeIDs).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChangedTids).SharedReferenceCount.ReferenceController);
  (this->LoopEids).HashSize = 0;
  FVar1 = (this->LoopEids).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoopEids).Elements);
  pFVar2 = (this->InputLengths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59250

void * __thiscall
PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::_scalar_deleting_destructor_
          (FExtrudeEdgeOp *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7FExtrudeEdgeOp_PolyEditExtrudeEdgeActivityLocals__6B_;
  *(undefined4 *)&(this->DesiredExtrudeDirections).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DesiredExtrudeDirections).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DesiredExtrudeDirections);
  pFVar2 = (this->EdgesToRender).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NewSelectionEids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GroupsToSetPerEid).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SelectedEids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59320

void * __thiscall
UE::Geometry::FExtrudeOp::_scalar_deleting_destructor_(FExtrudeOp *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FExtrudeOp_Geometry_UE__6B_;
  pFVar1 = (this->ExtrudedFaceNewGids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleSelection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd593a0

void * __thiscall
FGroupEdgeInsertionFirstPointChange::_scalar_deleting_destructor_
          (FGroupEdgeInsertionFirstPointChange *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd593e0

void * __thiscall
UE::Geometry::FGroupEdgeInsertionOp::_scalar_deleting_destructor_
          (FGroupEdgeInsertionOp *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7FGroupEdgeInsertionOp_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResultTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChangedTids).SharedReferenceCount.ReferenceController);
  (this->Eids).HashSize = 0;
  FVar1 = (this->Eids).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Eids).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59490

void * __thiscall
FPolyEditCutFacesActivityFirstPointChange::_scalar_deleting_destructor_
          (FPolyEditCutFacesActivityFirstPointChange *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd594d0

void * __thiscall
UE::Geometry::FUVProjectionOp::_scalar_deleting_destructor_(FUVProjectionOp *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FUVProjectionOp_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TriangleROI).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59530

void * __thiscall
FWeldMeshEdgesOp::_scalar_deleting_destructor_(FWeldMeshEdgesOp *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->SelectedEdges).HashSize = 0;
  FVar1 = (this->SelectedEdges).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedEdges).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceMesh).SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd595b0

void * __thiscall
UDiffusionSmoothProperties::_scalar_deleting_destructor_
          (UDiffusionSmoothProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDiffusionSmoothProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59610

void * __thiscall
UEdgeLoopInsertionProperties::_scalar_deleting_destructor_
          (UEdgeLoopInsertionProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEdgeLoopInsertionProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59670

void * __thiscall
UGroupEdgeInsertionProperties::_scalar_deleting_destructor_
          (UGroupEdgeInsertionProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGroupEdgeInsertionProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd596d0

void * __thiscall
UImplicitSmoothProperties::_scalar_deleting_destructor_
          (UImplicitSmoothProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UImplicitSmoothProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59730

void * __thiscall
UIterativeSmoothProperties::_scalar_deleting_destructor_
          (UIterativeSmoothProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIterativeSmoothProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59790

void * __thiscall
UPolyEditBevelEdgeActivity::_scalar_deleting_destructor_
          (UPolyEditBevelEdgeActivity *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->ActiveSelection);
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59820

void * __thiscall
UPolyEditBevelEdgeProperties::_scalar_deleting_destructor_
          (UPolyEditBevelEdgeProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPolyEditBevelEdgeProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59880

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
UPolyEditCutFacesActivity::_scalar_deleting_destructor_
          (UPolyEditCutFacesActivity *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd598f0

void * __thiscall
UPolyEditCutProperties::_scalar_deleting_destructor_(UPolyEditCutProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPolyEditCutProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59950

void * __thiscall
UPolyEditExtrudeActivity::_scalar_deleting_destructor_(UPolyEditExtrudeActivity *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->ActiveSelection);
  pFVar1 = (this->NewSelectionGids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PatchMesh).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59a20

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
UPolyEditExtrudeEdgeActivity::_scalar_deleting_destructor_
          (UPolyEditExtrudeEdgeActivity *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UInteractiveToolActivity__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  pFVar1 = (this->NewSelectionEids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EidsToRender).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GroupsToSetPerEid).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SelectedEids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->ActiveSelection);
  *(undefined ***)&this->field_0x30 = &___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  *(undefined ***)this = &___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59b00

void * __thiscall
UPolyEditExtrudeEdgeActivityProperties::_scalar_deleting_destructor_
          (UPolyEditExtrudeEdgeActivityProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPolyEditExtrudeEdgeActivityProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59b60

void * __thiscall
UPolyEditExtrudeProperties::_scalar_deleting_destructor_
          (UPolyEditExtrudeProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPolyEditExtrudeProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59bc0

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
UPolyEditInsertEdgeActivity::_scalar_deleting_destructor_
          (UPolyEditInsertEdgeActivity *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeStartTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeStartMesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LatestOpChangedTids).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LatestOpTopologyResult).SharedReferenceCount.ReferenceController);
  FToolDataVisualizer::~FToolDataVisualizer(&this->PreviewEdgeRenderer);
  FToolDataVisualizer::~FToolDataVisualizer(&this->ExistingEdgesRenderer);
  pFVar1 = (this->PreviewPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviewEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TopologySelector).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59ce0

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
UPolyEditInsertEdgeLoopActivity::_scalar_deleting_destructor_
          (UPolyEditInsertEdgeLoopActivity *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UInteractiveToolActivity__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IClickBehaviorTarget__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LatestOpChangedTids).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LatestOpTopologyResult).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeStartTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeStartMesh).SharedReferenceCount.ReferenceController);
  FToolDataVisualizer::~FToolDataVisualizer(&this->ProblemTopologyRenderer);
  FToolDataVisualizer::~FToolDataVisualizer(&this->PreviewEdgeRenderer);
  pFVar1 = (this->ProblemTopologyVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProblemTopologyEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviewEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TopologySelector).SharedReferenceCount.ReferenceController);
  *(undefined ***)&this->field_0x40 = &___7IModifierToggleBehaviorTarget__6B_;
  *(undefined ***)&this->field_0x38 = &___7IModifierToggleBehaviorTarget__6B_;
  *(undefined ***)&this->field_0x30 = &___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  *(undefined ***)this = &___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x430);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59e10

void * __thiscall
UPolyEditInsetOutsetActivity::_scalar_deleting_destructor_
          (UPolyEditInsetOutsetActivity *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59e80

void * __thiscall
UPolyEditInsetOutsetProperties::_scalar_deleting_destructor_
          (UPolyEditInsetOutsetProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPolyEditInsetOutsetProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59ee0

void * __thiscall
UPolyEditOffsetProperties::_scalar_deleting_destructor_
          (UPolyEditOffsetProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPolyEditOffsetProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd59f40

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
UPolyEditPlanarProjectionUVActivity::_scalar_deleting_destructor_
          (UPolyEditPlanarProjectionUVActivity *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd59fb0

void * __thiscall
UPolyEditPushPullProperties::_scalar_deleting_destructor_
          (UPolyEditPushPullProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPolyEditPushPullProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd5a010

void * __thiscall
UPolyEditSetUVProperties::_scalar_deleting_destructor_(UPolyEditSetUVProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPolyEditSetUVProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd5a070

void * __thiscall USmoothMeshTool::_scalar_deleting_destructor_(USmoothMeshTool *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = (longlong)&___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  UBaseMeshProcessingTool::~UBaseMeshProcessingTool((UBaseMeshProcessingTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd5a110

void * __thiscall
USmoothMeshToolBuilder::_scalar_deleting_destructor_(USmoothMeshToolBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7USmoothMeshToolBuilder__6B_;
  UBaseMeshProcessingToolBuilder::~UBaseMeshProcessingToolBuilder
            ((UBaseMeshProcessingToolBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd5a170

void * __thiscall
USmoothMeshToolProperties::_scalar_deleting_destructor_
          (USmoothMeshToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USmoothMeshToolProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cd5a1d0

void * __thiscall
USmoothWeightMapSetProperties::_scalar_deleting_destructor_
          (USmoothWeightMapSetProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USmoothWeightMapSetProperties__6B_;
  UWeightMapSetProperties::~UWeightMapSetProperties((UWeightMapSetProperties *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd5a230

void * __thiscall UUVLayoutTool::_scalar_deleting_destructor_(UUVLayoutTool *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__UMultiSelectionMeshEditingTool__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  DestructItems<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,int>
            ((TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)
             (this->OriginalDynamicMeshes).AllocatorInstance.Data,
             (this->OriginalDynamicMeshes).ArrayNum);
  pFVar1 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Factories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Previews).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0xe0 = &___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  UMultiSelectionMeshEditingTool::~UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd5a310

void * __thiscall
UUVLayoutToolBuilder::_scalar_deleting_destructor_(UUVLayoutToolBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7UUVLayoutToolBuilder__6B_;
  UMultiSelectionMeshEditingToolBuilder::~UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd5a370

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
UUVProjectionOperatorFactory::_scalar_deleting_destructor_
          (UUVProjectionOperatorFactory *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd5a3e0

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
UUVProjectionTool::_scalar_deleting_destructor_(UUVProjectionTool *this,uint param_1)

{
  FSelectClickedAction *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7UUVProjectionTool__6B_;
  pFVar1 = (this->SetPlaneCtrlClickBehaviorTarget).Ptr;
  if (pFVar1 != (FSelectClickedAction *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  FToolDataVisualizer::~FToolDataVisualizer(&this->ProjectionShapeVisualizer);
  (this->TriangleROISet).HashSize = 0;
  FVar2 = (this->TriangleROISet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TriangleROISet).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputMeshROISpatial).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VertexROI).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TriangleROI).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputMesh).SharedReferenceCount.ReferenceController);
  USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x520);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd5a4f0

void * __thiscall
UUVProjectionToolBuilder::_scalar_deleting_destructor_(UUVProjectionToolBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7UUVProjectionToolBuilder__6B_;
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

// `scalar_deleting_destructor' @ 14cd5a550

void * __thiscall
UUVProjectionToolEditActions::_scalar_deleting_destructor_
          (UUVProjectionToolEditActions *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UUVProjectionToolEditActions__6B_;
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

// `scalar_deleting_destructor' @ 14cd5a5b0

void * __thiscall
UUVProjectionToolProperties::_scalar_deleting_destructor_
          (UUVProjectionToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UUVProjectionToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd5a610

void * __thiscall
UWeldMeshEdgesOperatorFactory::_scalar_deleting_destructor_
          (UWeldMeshEdgesOperatorFactory *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14cd5a680

void * __thiscall
UWeldMeshEdgesTool::_scalar_deleting_destructor_(UWeldMeshEdgesTool *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SelectedEdges).HashSize = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UWeldMeshEdgesTool__6B_;
  FVar1 = (this->SelectedEdges).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedEdges).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceMesh).SharedReferenceCount.ReferenceController);
  USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd5a740

void * __thiscall
UWeldMeshEdgesToolBuilder::_scalar_deleting_destructor_
          (UWeldMeshEdgesToolBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7UWeldMeshEdgesToolBuilder__6B_;
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

// `scalar_deleting_destructor' @ 14cd5a7a0

void * __thiscall
UWeldMeshEdgesToolProperties::_scalar_deleting_destructor_
          (UWeldMeshEdgesToolProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWeldMeshEdgesToolProperties__6B_;
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

// CreatePatchMesh @ 14cd67f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<UE::Geometry::FDynamicMesh3,1> * __cdecl
PolyEditExtrudeActivityLocals::CreatePatchMesh
          (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *__return_storage_ptr__,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar3;
  undefined1 auStack_648 [32];
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_618;
  FDynamicSubmesh3 local_608;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_648;
  UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3(&local_608,param_1,param_2,9,true);
  pTVar3 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3>
                     (&local_618,&local_608.Submesh);
  __return_storage_ptr__->Object = pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_618.SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicSubmesh3::~FDynamicSubmesh3(&local_608);
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// DoesBoundaryContainPoint @ 14cd68650

bool __cdecl
PolyEditInsertEdgeActivityLocals::DoesBoundaryContainPoint
          (FGroupTopology *param_1,FGroupBoundary *param_2,int param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  pFVar9 = (param_2->GroupEdges).AllocatorInstance.Data;
  iVar2 = (param_2->GroupEdges).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 4;
  while( true ) {
    if ((param_2->GroupEdges).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar1) {
      return false;
    }
    uVar3 = *(uint *)pFVar9;
    if ((!param_4) && (uVar3 == param_3)) {
      return true;
    }
    uVar8 = 0;
    if ((int)uVar3 < (param_1->Edges).ArrayNum) {
      uVar8 = ~uVar3 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (param_4) {
      pFVar4 = (param_1->Edges).AllocatorInstance.Data;
      if (*(int *)(pFVar4 + (longlong)(int)uVar3 * 0x50 + 0x48) == param_3) {
        return true;
      }
      if (*(int *)(pFVar4 + (longlong)(int)uVar3 * 0x50 + 0x4c) == param_3) {
        return true;
      }
    }
    pFVar9 = pFVar9 + 4;
  }
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return (bool)uVar7;
}

// EmptyLinkFunctionForGeneratedCodePolyEditBevelEdgeActivity @ 14cd68740

void __cdecl EmptyLinkFunctionForGeneratedCodePolyEditBevelEdgeActivity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePolyEditCutFacesActivity @ 14cd68750

void __cdecl EmptyLinkFunctionForGeneratedCodePolyEditCutFacesActivity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePolyEditExtrudeActivity @ 14cd68760

void __cdecl EmptyLinkFunctionForGeneratedCodePolyEditExtrudeActivity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePolyEditExtrudeEdgeActivity @ 14cd68770

void __cdecl EmptyLinkFunctionForGeneratedCodePolyEditExtrudeEdgeActivity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePolyEditInsertEdgeActivity @ 14cd68780

void __cdecl EmptyLinkFunctionForGeneratedCodePolyEditInsertEdgeActivity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePolyEditInsertEdgeLoopActivity @ 14cd68790

void __cdecl EmptyLinkFunctionForGeneratedCodePolyEditInsertEdgeLoopActivity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePolyEditInsetOutsetActivity @ 14cd687a0

void __cdecl EmptyLinkFunctionForGeneratedCodePolyEditInsetOutsetActivity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePolyEditPlanarProjectionUVActivity @ 14cd687b0

void __cdecl EmptyLinkFunctionForGeneratedCodePolyEditPlanarProjectionUVActivity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSmoothMeshTool @ 14cd687c0

void __cdecl EmptyLinkFunctionForGeneratedCodeSmoothMeshTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUVLayoutTool @ 14cd687d0

void __cdecl EmptyLinkFunctionForGeneratedCodeUVLayoutTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUVProjectionTool @ 14cd687e0

void __cdecl EmptyLinkFunctionForGeneratedCodeUVProjectionTool(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWeldMeshEdgesTool @ 14cd687f0

void __cdecl EmptyLinkFunctionForGeneratedCodeWeldMeshEdgesTool(void)

{
  return;
}

// GetDistanceMode @ 14cd6c230

EPolyEditExtrudeDistanceMode __cdecl
PolyEditExtrudeActivityLocals::GetDistanceMode
          (UPolyEditExtrudeActivity *param_1,EPropertySetToUse param_2)

{
  code *pcVar1;
  bool bVar2;
  EPolyEditExtrudeDistanceMode EVar3;
  
  if (param_2 != Extrude) {
    if (param_2 == Offset) {
      return ((param_1->OffsetProperties).field0_0x0.DebugPtr)->DistanceMode;
    }
    if (param_2 == PushPull) {
      return ((param_1->PushPullProperties).field0_0x0.DebugPtr)->DistanceMode;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5567589165484212279>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeActivity.cpp"
                       ,0x37,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return ((param_1->ExtrudeProperties).field0_0x0.DebugPtr)->DistanceMode;
}

// GetFixedDistance @ 14cd6c5f0

double __cdecl
PolyEditExtrudeActivityLocals::GetFixedDistance
          (UPolyEditExtrudeActivity *param_1,EPropertySetToUse param_2)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (param_2 != Extrude) {
    if (param_2 == Offset) {
      return ((param_1->OffsetProperties).field0_0x0.DebugPtr)->Distance;
    }
    if (param_2 == PushPull) {
      return ((param_1->PushPullProperties).field0_0x0.DebugPtr)->Distance;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5567589165484212295>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeActivity.cpp"
                       ,0x47,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar3 = (double)(*pcVar1)();
      return dVar3;
    }
  }
  return ((param_1->ExtrudeProperties).field0_0x0.DebugPtr)->Distance;
}

// GetSharedBoundary @ 14cd6f160

bool __cdecl
PolyEditInsertEdgeActivityLocals::GetSharedBoundary
          (FGroupTopology *param_1,FGroupEdgeSplitPoint *param_2,int param_3,bool param_4,
          FGroupEdgeSplitPoint *param_5,int param_6,bool param_7,int *param_8,int *param_9)

{
  FGroupBoundary *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FGroup *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  int local_64;
  uint local_60;
  FScriptContainerElement *local_58;
  int *local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  *param_8 = -1;
  *param_9 = -1;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (param_4) {
    uVar11 = 0;
    if (param_3 < (param_1->Corners).ArrayNum) {
      uVar11 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_58 = (param_1->Corners).AllocatorInstance.Data;
    lVar2 = (longlong)param_3 * 3 + 1;
    local_60 = *(uint *)(local_58 + lVar2 * 8 + 8);
    uVar10 = (ulonglong)(int)local_60;
    local_58 = local_58 + lVar2 * 8;
    piVar14 = *(int **)local_58;
    local_50 = piVar14 + uVar10;
    while( true ) {
      piVar4 = local_50;
      if (*(int *)(local_58 + 8) != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (piVar14 == piVar4) break;
      local_64 = *piVar14;
      pFVar9 = UE::Geometry::FGroupTopology::FindGroupByID(param_1,local_64);
      uVar11 = 0;
      if ((pFVar9->Boundaries).ArrayNum < 1) {
LAB_14cd6f346:
        piVar14 = piVar14 + 1;
        uVar10 = (ulonglong)local_60;
      }
      else {
        do {
          uVar7 = 0;
          if ((int)uVar11 < (pFVar9->Boundaries).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar1 = (FGroupBoundary *)
                   ((pFVar9->Boundaries).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x28);
          bVar5 = DoesBoundaryContainPoint(param_1,pFVar1,param_6,param_7);
          if ((bVar5) && (bVar5 = DoesBoundaryContainPoint(param_1,pFVar1,param_3,param_4), bVar5))
          {
            iVar8 = (int)local_40;
            if ((int)local_40 == local_40._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_48,(int *)((longlong)&local_40 + 4));
            }
            local_40 = CONCAT44(local_40._4_4_,iVar8 + 1);
            *(int *)(local_48.Data + (longlong)iVar8 * 8) = local_64;
            *(uint *)(local_48.Data + (longlong)iVar8 * 8 + 4) = uVar11;
            goto LAB_14cd6f346;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (pFVar9->Boundaries).ArrayNum);
        piVar14 = piVar14 + 1;
        uVar10 = (ulonglong)local_60;
      }
    }
  }
  else {
    uVar11 = 0;
    if (param_3 < (param_1->Edges).ArrayNum) {
      uVar11 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar13 = (param_1->Edges).AllocatorInstance.Data + (longlong)param_3 * 0x50;
    pFVar9 = UE::Geometry::FGroupTopology::FindGroupByID(param_1,*(int *)pFVar13);
    uVar11 = 0;
    if (0 < (pFVar9->Boundaries).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar11 < (pFVar9->Boundaries).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar1 = (FGroupBoundary *)
                 ((pFVar9->Boundaries).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x28);
        bVar5 = DoesBoundaryContainPoint(param_1,pFVar1,param_6,param_7);
        if ((bVar5) && (bVar5 = DoesBoundaryContainPoint(param_1,pFVar1,param_3,false), bVar5)) {
          iVar8 = (int)local_40;
          if ((int)local_40 == local_40._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_48,(int *)((longlong)&local_40 + 4));
          }
          local_40 = CONCAT44(local_40._4_4_,iVar8 + 1);
          *(int *)(local_48.Data + (longlong)iVar8 * 8) = *(int *)pFVar13;
          *(uint *)(local_48.Data + (longlong)iVar8 * 8 + 4) = uVar11;
          break;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (pFVar9->Boundaries).ArrayNum);
    }
    if (*(int *)(pFVar13 + 4) != -1) {
      pFVar9 = UE::Geometry::FGroupTopology::FindGroupByID(param_1,*(int *)(pFVar13 + 4));
      uVar11 = 0;
      if (0 < (pFVar9->Boundaries).ArrayNum) {
        do {
          uVar7 = 0;
          if ((int)uVar11 < (pFVar9->Boundaries).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar1 = (FGroupBoundary *)
                   ((pFVar9->Boundaries).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x28);
          bVar5 = DoesBoundaryContainPoint(param_1,pFVar1,param_6,param_7);
          if ((bVar5) && (bVar5 = DoesBoundaryContainPoint(param_1,pFVar1,param_3,false), bVar5)) {
            iVar8 = (int)local_40;
            if ((int)local_40 == local_40._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_48,(int *)((longlong)&local_40 + 4));
            }
            local_40 = CONCAT44(local_40._4_4_,iVar8 + 1);
            *(int *)(local_48.Data + (longlong)iVar8 * 8) = *(int *)(pFVar13 + 4);
            *(uint *)(local_48.Data + (longlong)iVar8 * 8 + 4) = uVar11;
            break;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (pFVar9->Boundaries).ArrayNum);
      }
    }
  }
  iVar8 = (int)local_40;
  if ((int)local_40 == 0) {
    bVar5 = false;
  }
  else {
    if ((int)local_40 < 2) {
LAB_14cd6f5f6:
      if (((int)local_40 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      *param_8 = *(int *)local_48.Data;
      if (((int)local_40 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      *param_9 = *(int *)(local_48.Data + 4);
    }
    else {
      pFVar13 = local_48.Data + (longlong)(int)local_40 * 8;
      FVar12.Data = local_48.Data;
      while( true ) {
        if ((int)local_40 != iVar8) {
          local_68[0] = 0;
          `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_68);
        }
        if (FVar12.Data == pFVar13) goto LAB_14cd6f5f6;
        pFVar9 = UE::Geometry::FGroupTopology::FindGroupByID(param_1,*(int *)FVar12.Data);
        if ((pFVar9->Boundaries).ArrayNum == 1) break;
        FVar12.Data = FVar12.Data + 8;
      }
      *param_8 = *(int *)FVar12.Data;
      *param_9 = 0;
    }
    bVar5 = true;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return bVar5;
}

// Z_Construct_UClass_UPolyEditBevelEdgeActivity_NoRegister @ 14cd85b50

UClass * __cdecl Z_Construct_UClass_UPolyEditBevelEdgeActivity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditBevelEdgeActivity",
               &Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.InnerSingleton,
               UPolyEditBevelEdgeActivity::StaticRegisterNativesUPolyEditBevelEdgeActivity,0x140,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditBevelEdgeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditBevelEdgeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditCutFacesActivity_NoRegister @ 14cd85c10

UClass * __cdecl Z_Construct_UClass_UPolyEditCutFacesActivity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditCutFacesActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditCutFacesActivity",
               &Z_Registration_Info_UClass_UPolyEditCutFacesActivity.InnerSingleton,
               UPolyEditCutFacesActivity::StaticRegisterNativesUPolyEditCutFacesActivity,0xd0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditCutFacesActivity>,
               InternalVTableHelperCtorCaller<UPolyEditCutFacesActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditCutFacesActivity.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditExtrudeActivity_NoRegister @ 14cd85cd0

UClass * __cdecl Z_Construct_UClass_UPolyEditExtrudeActivity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeActivity",
               &Z_Registration_Info_UClass_UPolyEditExtrudeActivity.InnerSingleton,
               UPolyEditExtrudeActivity::StaticRegisterNativesUPolyEditExtrudeActivity,0x1d0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeActivity.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_NoRegister @ 14cd85d90

UClass * __cdecl Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeEdgeActivity",
               &Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.InnerSingleton,
               UPolyEditExtrudeEdgeActivity::StaticRegisterNativesUPolyEditExtrudeEdgeActivity,0x2f0
               ,0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeEdgeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditInsertEdgeActivity_NoRegister @ 14cd85e50

UClass * __cdecl Z_Construct_UClass_UPolyEditInsertEdgeActivity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsertEdgeActivity",
               &Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.InnerSingleton,
               UPolyEditInsertEdgeActivity::StaticRegisterNativesUPolyEditInsertEdgeActivity,0x4a0,
               0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsertEdgeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditInsertEdgeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_NoRegister @ 14cd85f10

UClass * __cdecl Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsertEdgeLoopActivity",
               &Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.InnerSingleton,
               UPolyEditInsertEdgeLoopActivity::StaticRegisterNativesUPolyEditInsertEdgeLoopActivity
               ,0x430,0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsertEdgeLoopActivity>,
               InternalVTableHelperCtorCaller<UPolyEditInsertEdgeLoopActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditInsetOutsetActivity_NoRegister @ 14cd85fd0

UClass * __cdecl Z_Construct_UClass_UPolyEditInsetOutsetActivity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsetOutsetActivity",
               &Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.InnerSingleton,
               UPolyEditInsetOutsetActivity::StaticRegisterNativesUPolyEditInsetOutsetActivity,0x70,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsetOutsetActivity>,
               InternalVTableHelperCtorCaller<UPolyEditInsetOutsetActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.InnerSingleton;
}

// Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_NoRegister @ 14cd86090

UClass * __cdecl Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditPlanarProjectionUVActivity",
               &Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.InnerSingleton,
               UPolyEditPlanarProjectionUVActivity::
               StaticRegisterNativesUPolyEditPlanarProjectionUVActivity,0x100,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditPlanarProjectionUVActivity>,
               InternalVTableHelperCtorCaller<UPolyEditPlanarProjectionUVActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.InnerSingleton;
}

// Z_Construct_UClass_USmoothMeshToolBuilder_NoRegister @ 14cd86150

UClass * __cdecl Z_Construct_UClass_USmoothMeshToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothMeshToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothMeshToolBuilder",
               &Z_Registration_Info_UClass_USmoothMeshToolBuilder.InnerSingleton,
               USmoothMeshToolBuilder::StaticRegisterNativesUSmoothMeshToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USmoothMeshToolBuilder>,
               InternalVTableHelperCtorCaller<USmoothMeshToolBuilder>,local_res8,
               UBaseMeshProcessingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothMeshToolBuilder.InnerSingleton;
}

// Z_Construct_UClass_USmoothMeshTool_NoRegister @ 14cd86210

UClass * __cdecl Z_Construct_UClass_USmoothMeshTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothMeshTool",
               &Z_Registration_Info_UClass_USmoothMeshTool.InnerSingleton,
               USmoothMeshTool::StaticRegisterNativesUSmoothMeshTool,0x4d0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USmoothMeshTool>,InternalVTableHelperCtorCaller<USmoothMeshTool>,
               local_res8,UBaseMeshProcessingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothMeshTool.InnerSingleton;
}

// Z_Construct_UClass_UUVLayoutToolBuilder_NoRegister @ 14cd862d0

UClass * __cdecl Z_Construct_UClass_UUVLayoutToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVLayoutToolBuilder",
               &Z_Registration_Info_UClass_UUVLayoutToolBuilder.InnerSingleton,
               UUVLayoutToolBuilder::StaticRegisterNativesUUVLayoutToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVLayoutToolBuilder>,
               InternalVTableHelperCtorCaller<UUVLayoutToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutToolBuilder.InnerSingleton;
}

// Z_Construct_UClass_UUVLayoutTool_NoRegister @ 14cd86390

UClass * __cdecl Z_Construct_UClass_UUVLayoutTool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVLayoutTool",
               &Z_Registration_Info_UClass_UUVLayoutTool.InnerSingleton,
               UUVLayoutTool::StaticRegisterNativesUUVLayoutTool,0x1a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVLayoutTool>,InternalVTableHelperCtorCaller<UUVLayoutTool>,
               local_res8,UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutTool.InnerSingleton;
}

// Z_Construct_UClass_UUVProjectionToolBuilder_NoRegister @ 14cd86450

UClass * __cdecl Z_Construct_UClass_UUVProjectionToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionToolBuilder",
               &Z_Registration_Info_UClass_UUVProjectionToolBuilder.InnerSingleton,
               UUVProjectionToolBuilder::StaticRegisterNativesUUVProjectionToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVProjectionToolBuilder>,
               InternalVTableHelperCtorCaller<UUVProjectionToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolBuilder.InnerSingleton;
}

// Z_Construct_UClass_UWeldMeshEdgesToolBuilder_NoRegister @ 14cd86510

UClass * __cdecl Z_Construct_UClass_UWeldMeshEdgesToolBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesToolBuilder",
               &Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.InnerSingleton,
               UWeldMeshEdgesToolBuilder::StaticRegisterNativesUWeldMeshEdgesToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWeldMeshEdgesToolBuilder>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.InnerSingleton;
}

// Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions @ 14cd865d0

UEnum * __cdecl Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions(void)

{
  if (Z_Registration_Info_UEnum_EUVProjectionToolActions.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUVProjectionToolActions.InnerSingleton,
               &Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUVProjectionToolActions.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'Flags'' @ 150453bf0

void __cdecl
`UE::SculptUtil::PrecalculateNormalsROI'::__l5::_dynamic_atexit_destructor_for__Flags__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Flags.AllocatorInstance.Data;
  if (Flags.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Flags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GroupEdgeStartTransactionName'' @ 150453c10

void __cdecl
PolyEditInsertEdgeActivityLocals::_dynamic_atexit_destructor_for__GroupEdgeStartTransactionName__
          (void)

{
  if (GroupEdgeStartTransactionName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150453c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*GroupEdgeStartTransactionName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'List'' @ 150453c30

void __cdecl
`UE::SculptUtil::PrecalculateNormalsROI'::__l5::_dynamic_atexit_destructor_for__List__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = List.AllocatorInstance.Data;
  if (List.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (List.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransactionLabel'' @ 150453c50

void __cdecl
PolyEditExtrudeEdgeActivityLocals::_dynamic_atexit_destructor_for__TransactionLabel__(void)

{
  if (TransactionLabel.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150453c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*TransactionLabel.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TypeRequirements'' @ 150453c70

void __cdecl
`UUVLayoutToolBuilder::GetTargetRequirements'::__l2::
_dynamic_atexit_destructor_for__TypeRequirements__(void)

{
  ForElementType<UClass_const_*> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = TypeRequirements.Interfaces.AllocatorInstance.SecondaryData;
  if (TypeRequirements.Interfaces.AllocatorInstance.SecondaryData ==
      (ForElementType<UClass_const_*>)0x0) {
    return;
  }
  if (TypeRequirements.Interfaces.AllocatorInstance.SecondaryData !=
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

