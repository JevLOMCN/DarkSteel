// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 299

// DefaultFaceColor'' @ 1413b4860

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

// DefaultLineColor'' @ 1413b4890

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

// DefaultPointColor'' @ 1413b48c0

void __cdecl
`dynamic_initializer_for_'UGeometrySelectionVisualizationProperties::DefaultPointColor__(void)

{
  UGeometrySelectionVisualizationProperties::DefaultPointColor =
       UGeometrySelectionVisualizationProperties::DefaultLineColor;
  return;
}

// HoverOverSelectedSetIds'' @ 1413b48e0

void __cdecl `dynamic_initializer_for_'UGeometrySelectionManager::HoverOverSelectedSetIds__(void)

{
  ::FString::FString(UGeometrySelectionManager::HoverOverSelectedSetIds.Elements,
                     "HoverSelected_Vertices");
  ::FString::FString(UGeometrySelectionManager::HoverOverSelectedSetIds.Elements + 1,
                     "HoverSelected_Lines");
  ::FString::FString(UGeometrySelectionManager::HoverOverSelectedSetIds.Elements + 2,
                     "HoverSelected_Triangles");
  atexit(`dynamic_atexit_destructor_for_'UGeometrySelectionManager::HoverOverSelectedSetIds__);
  return;
}

// HoverOverUnselectedSetIds'' @ 1413b4940

void __cdecl `dynamic_initializer_for_'UGeometrySelectionManager::HoverOverUnselectedSetIds__(void)

{
  ::FString::FString(UGeometrySelectionManager::HoverOverUnselectedSetIds.Elements,
                     "HoverUnselected_Vertices");
  ::FString::FString(UGeometrySelectionManager::HoverOverUnselectedSetIds.Elements + 1,
                     "HoverUnselected_Lines");
  ::FString::FString(UGeometrySelectionManager::HoverOverUnselectedSetIds.Elements + 2,
                     "HoverUnselected_Triangles");
  atexit(`dynamic_atexit_destructor_for_'UGeometrySelectionManager::HoverOverUnselectedSetIds__);
  return;
}

// PositionCurve'' @ 1413b49a0

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 1413b49c0

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 1413b49e0

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// SelectedSetIds'' @ 1413b4a00

void __cdecl `dynamic_initializer_for_'UGeometrySelectionManager::SelectedSetIds__(void)

{
  ::FString::FString(UGeometrySelectionManager::SelectedSetIds.Elements,"Selected_Vertices");
  ::FString::FString(UGeometrySelectionManager::SelectedSetIds.Elements + 1,"Selected_Lines");
  ::FString::FString(UGeometrySelectionManager::SelectedSetIds.Elements + 2,"Selected_Triangles");
  atexit(`dynamic_atexit_destructor_for_'UGeometrySelectionManager::SelectedSetIds__);
  return;
}

// UnselectedSetIds'' @ 1413b4a60

void __cdecl `dynamic_initializer_for_'UGeometrySelectionManager::UnselectedSetIds__(void)

{
  ::FString::FString(UGeometrySelectionManager::UnselectedSetIds.Elements,"Unselected_Vertices");
  ::FString::FString(UGeometrySelectionManager::UnselectedSetIds.Elements + 1,"Unselected_Lines");
  ::FString::FString(UGeometrySelectionManager::UnselectedSetIds.Elements + 2,"Unselected_Triangles"
                    );
  atexit(`dynamic_atexit_destructor_for_'UGeometrySelectionManager::UnselectedSetIds__);
  return;
}

// `dynamic_initializer_for_'CVarEnableModelingVolumeSnapping'' @ 1413b4ac0

void __cdecl _dynamic_initializer_for__CVarEnableModelingVolumeSnapping__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableModelingVolumeSnapping,L"modeling.EnableVolumeSnapping",local_res8,
             L"Enable snapping to volumes",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableModelingVolumeSnapping__);
  return;
}

// `dynamic_initializer_for_'CVarGeometrySelectionManager_FullSelectionHoverHighlights'' @ 1413b4b10

void __cdecl
_dynamic_initializer_for__CVarGeometrySelectionManager_FullSelectionHoverHighlights__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGeometrySelectionManager_FullSelectionHoverHighlights,
             L"modeling.Selection.FullHoverHighlights",local_res8,
             L"Use full selection hover highlights instead of simplified highlights",0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometrySelectionManager_FullSelectionHoverHighlights__
        );
  return;
}

// `dynamic_initializer_for_'CVarModelingWorldRenderCaptureWarmupFrames'' @ 1413b4b60

void __cdecl _dynamic_initializer_for__CVarModelingWorldRenderCaptureWarmupFrames__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarModelingWorldRenderCaptureWarmupFrames,
             L"modeling.WorldRenderCapture.VTWarmupFrames",local_res8,
             L"Number of frames to render before each capture in order to warmup the renderer.",0);
  atexit(_dynamic_atexit_destructor_for__CVarModelingWorldRenderCaptureWarmupFrames__);
  return;
}

// `dynamic_initializer_for_'CVarRenderCaptureDraws'' @ 1413b4bb0

void __cdecl _dynamic_initializer_for__CVarRenderCaptureDraws__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRenderCaptureDraws,L"r.RenderCaptureDraws",&RenderCaptureDraws,
             L"Enable capturing of render capture texture for the next N draws",0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderCaptureDraws__);
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 1413b4c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413b4c40

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413b4cd0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413b4d60

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413b4df0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413b4e80

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413b4f10

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413b4fa0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413b5030

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413b50c0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413b5150

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h__Script_ModelingComponents_1824143067'' @ 1413b51e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h__Script_ModelingComponents_1824143067__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelingComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h__Script_ModelingComponents_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h__Script_ModelingComponents_1531547656'' @ 1413b5220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h__Script_ModelingComponents_1531547656__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelingComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h__Script_ModelingComponents_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h__Script_ModelingComponents_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h__Script_ModelingComponents_1813718809'' @ 1413b5270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h__Script_ModelingComponents_1813718809__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelingComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h__Script_ModelingComponents_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h__Script_ModelingComponents_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PolygonSelectionMechanic_h__Script_ModelingComponents_4018420402'' @ 1413b52c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PolygonSelectionMechanic_h__Script_ModelingComponents_4018420402__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelingComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PolygonSelectionMechanic_h__Script_ModelingComponents_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h__Script_ModelingComponents_225570171'' @ 1413b5300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h__Script_ModelingComponents_225570171__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelingComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h__Script_ModelingComponents_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h__Script_ModelingComponents_2629136350'' @ 1413b5340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h__Script_ModelingComponents_2629136350__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelingComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h__Script_ModelingComponents_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h__Script_ModelingComponents_1576026238'' @ 1413b5380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h__Script_ModelingComponents_1576026238__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ModelingComponents",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h__Script_ModelingComponents_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UToolHostCustomizationAPI @ 14cb587e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UToolHostCustomizationAPI(void)

{
  if (Z_Registration_Info_UClass_UToolHostCustomizationAPI.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UToolHostCustomizationAPI.OuterSingleton,
               &Z_Construct_UClass_UToolHostCustomizationAPI_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UToolHostCustomizationAPI.OuterSingleton;
}

// Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties @ 14cb588e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.
                OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.OuterSingleton;
}

// Z_Construct_UClass_UPolygonSelectionMechanic @ 14cb58920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPolygonSelectionMechanic(void)

{
  if (Z_Registration_Info_UClass_UPolygonSelectionMechanic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPolygonSelectionMechanic.OuterSingleton,
               &Z_Construct_UClass_UPolygonSelectionMechanic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPolygonSelectionMechanic.OuterSingleton;
}

// Z_Construct_UClass_UMeshTopologySelectionMechanicProperties @ 14cb58960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshTopologySelectionMechanicProperties(void)

{
  if (Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.OuterSingleton,
               &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.OuterSingleton;
}

// Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType @ 14cb589a0

UEnum * __cdecl Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType(void)

{
  if (Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.InnerSingleton,
               &Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.InnerSingleton;
}

// Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection @ 14cb589e0

UFunction * __cdecl
Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll @ 14cb58a20

UFunction * __cdecl Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometrySelectionManager @ 14cb58a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometrySelectionManager(void)

{
  if (Z_Registration_Info_UClass_UGeometrySelectionManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometrySelectionManager.OuterSingleton,
               &Z_Construct_UClass_UGeometrySelectionManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionManager.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMeshElementSelectionParams @ 14cb58aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshElementSelectionParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshElementSelectionParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshElementSelectionParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshElementSelectionParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeshElementSelectionParams.InnerSingleton;
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

// NewStructOps @ 14cb58b20

void * __cdecl Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshElementSelectionParams,&UE::CoreUObject::Private::Construct<FMeshElementSelectionParams>,&UE::CoreUObject::Private::ConstructForTests<FMeshElementSelectionParams>,&UE::CoreUObject::Private::Destruct<FMeshElementSelectionParams>,&UE::CoreUObject::Private::Copy<FMeshElementSelectionParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSelectVertices_SetBit @ 14cb58b60

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewProp_bSelectEdges_SetBit @ 14cb58b70

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  return;
}

// NewProp_bSelectFaces_SetBit @ 14cb58b80

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb2) = 1;
  return;
}

// NewProp_bSelectEdgeLoops_SetBit @ 14cb58b90

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb3) = 1;
  return;
}

// NewProp_bSelectEdgeRings_SetBit @ 14cb58ba0

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// NewProp_bHitBackFaces_SetBit @ 14cb58bb0

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
  return;
}

// NewProp_bEnableMarquee_SetBit @ 14cb58bc0

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
  return;
}

// NewProp_bMarqueeIgnoreOcclusion_SetBit @ 14cb58bd0

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::
NewProp_bMarqueeIgnoreOcclusion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb7) = 1;
  return;
}

// NewProp_bPreferProjectedElement_SetBit @ 14cb58be0

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::
NewProp_bPreferProjectedElement_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// NewProp_bSelectDownRay_SetBit @ 14cb58bf0

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb9) = 1;
  return;
}

// NewProp_bIgnoreOcclusion_SetBit @ 14cb58c00

void __cdecl
Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xba) = 1;
  return;
}

// EMarqueeSelectionUpdateType_StaticEnum @ 14cb58c50

UEnum * __cdecl EMarqueeSelectionUpdateType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelingComponents();
    Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType,
                       (UObject *)pUVar1,L"EMarqueeSelectionUpdateType");
  }
  return Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.OuterSingleton;
}

// Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister @ 14cb58d40

UClass * __cdecl Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshTopologySelectionMechanicProperties",
               &Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.InnerSingleton,
               UMeshTopologySelectionMechanicProperties::
               StaticRegisterNativesUMeshTopologySelectionMechanicProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshTopologySelectionMechanicProperties>,
               InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanicProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.InnerSingleton;
}

// Z_Construct_UClass_UBoundarySelectionMechanic @ 14cb59100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBoundarySelectionMechanic(void)

{
  if (Z_Registration_Info_UClass_UBoundarySelectionMechanic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBoundarySelectionMechanic.OuterSingleton,
               &Z_Construct_UClass_UBoundarySelectionMechanic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBoundarySelectionMechanic.OuterSingleton;
}

// Z_Construct_UClass_UMeshTopologySelectionMechanic @ 14cb59140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshTopologySelectionMechanic(void)

{
  if (Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.OuterSingleton,
               &Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.OuterSingleton;
}

// Z_Construct_UClass_UModelingSceneSnappingManager @ 14cb59180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModelingSceneSnappingManager(void)

{
  if (Z_Registration_Info_UClass_UModelingSceneSnappingManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModelingSceneSnappingManager.OuterSingleton,
               &Z_Construct_UClass_UModelingSceneSnappingManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModelingSceneSnappingManager.OuterSingleton;
}

// Z_Construct_UClass_UDynamicMeshProvider @ 14cb594c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDynamicMeshProvider(void)

{
  if (Z_Registration_Info_UClass_UDynamicMeshProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDynamicMeshProvider.OuterSingleton,
               &Z_Construct_UClass_UDynamicMeshProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDynamicMeshProvider.OuterSingleton;
}

// operator()<``UE::Geometry::FWorldRenderCapture::SetVisibleActorsAndComponents'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14cb59650

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
``UE::Geometry::FWorldRenderCapture::SetVisibleActorsAndComponents'::__l2::<lambda_1>::operator()'::
__l2::<lambda_1>::
operator()<__UE::Geometry::FWorldRenderCapture::SetVisibleActorsAndComponents_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (void *this,UActorComponent *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  uint uVar12;
  uint uVar13;
  ForAnyElementType *pFVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  UActorComponent *local_a8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  FPrimitiveComponentId local_70;
  int local_6c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 != (UActorComponent *)0x0) {
    pUVar10 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar9 = (int)pUVar10->_padding_;
    if ((iVar9 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar9 * 8)
        == &pUVar10->_padding_)) {
      local_res20[0] = *(undefined4 *)((longlong)&param_1[4].PrimaryComponentTick._padding_ + 4);
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      Emplace<FPrimitiveComponentId>
                ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                  *)(*(longlong *)this + 0x18),&local_70,(bool *)local_res20);
      if ((param_1[3].PrimaryComponentTick._padding_ & 0x80000) == 0) {
        lVar4 = *(longlong *)this;
        pFVar14 = (ForAnyElementType *)(lVar4 + 0x978);
        local_a8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        if (((pFVar14->Data <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 <
             pFVar14->Data + (longlong)*(int *)(lVar4 + 0x984) * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *(int *)(lVar4 + 0x980);
        if (iVar9 == *(int *)(lVar4 + 0x984)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar14,(int *)(lVar4 + 0x984));
        }
        *(int *)(lVar4 + 0x980) = iVar9 + 1;
        *(UActorComponent **)(pFVar14->Data + (longlong)iVar9 * 8) = local_a8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_a8 != (UActorComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_a8);
        }
        UPrimitiveComponent::SetCachedMaxDrawDistance((UPrimitiveComponent *)param_1,0.0);
      }
      UE::Math::TBoxSphereBounds<double,double>::Builder::Append
                (*(Builder **)((longlong)this + 8),
                 (TBoxSphereBounds<double,double> *)&param_1[1].PrimaryComponentTick._padding_);
      return;
    }
  }
  if (param_1 != (UActorComponent *)0x0) {
    pUVar10 = Z_Construct_UClass_UChildActorComponent_NoRegister();
    iVar9 = (int)pUVar10->_padding_;
    if (((iVar9 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
         &pUVar10->_padding_)) && (param_1[3]._padding_ != 0)) {
      pTVar11 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                          ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                            *)(param_1[3]._padding_ + 0x248));
      iStack_98 = 0;
      uStack_94 = 1;
      local_80 = 0;
      local_90 = &(pTVar11->Elements).field_0x10;
      iVar9 = *(int *)&(pTVar11->Elements).field_0x28;
      iStack_84 = 0;
      if (iVar9 != 0) {
        puVar16 = *(uint **)&(pTVar11->Elements).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)local_90;
        }
        uVar13 = *puVar16;
        while (uVar13 == 0) {
          iStack_98 = iStack_98 + 1;
          local_80 = local_80 + 0x20;
          iStack_84 = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14cb598a2;
          uVar13 = puVar16[iStack_98];
        }
        uStack_94 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_94 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_6c = (int)lVar4;
        iStack_84 = local_6c + -1 + local_80;
        if (iVar9 < iStack_84) {
          iStack_84 = iVar9;
        }
      }
LAB_14cb598a2:
      uVar13 = *(uint *)&(pTVar11->Elements).field_0x28;
      puVar1 = &(pTVar11->Elements).field_0x10;
      uVar12 = uVar13 & 0xffffffe0;
      iStack_78 = *(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34;
      uStack_88 = 0xffffffff;
      TStack_60.CurrentBitIndex = iStack_84;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
      iVar9 = (int)uVar13 >> 5;
      TStack_60._28_4_ = iStack_84;
      TStack_60.BaseBitIndex = local_80;
      uStack_40 = CONCAT44(uStack_74,iStack_78);
      local_a0 = pTVar11;
      iStack_7c = iStack_84;
      local_68 = pTVar11;
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_90;
      if ((((int)uVar13 < 0) || (*(int *)&(pTVar11->Elements).field_0x28 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(uint *)&(pTVar11->Elements).field_0x28;
      if (uVar13 != uVar3) {
        puVar5 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
        puVar15 = puVar1;
        if (puVar5 != (undefined1 *)0x0) {
          puVar15 = puVar5;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar9 * 4);
        while (uVar13 == 0) {
          iVar9 = iVar9 + 1;
          uVar12 = uVar12 + 0x20;
          uVar13 = uVar3;
          if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar9)
          goto LAB_14cb599a0;
          uVar13 = *(uint *)(puVar15 + (longlong)iVar9 * 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar13 = (int)lVar4 + -1 + uVar12;
        if ((int)uVar3 < (int)uVar13) {
          uVar13 = uVar3;
        }
      }
LAB_14cb599a0:
      while( true ) {
        pTVar7 = local_68;
        if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
            (int)uStack_40) {
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_60.CurrentBitIndex == uVar13) &&
            (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar11)) break;
        operator()<__UE::Geometry::FWorldRenderCapture::SetVisibleActorsAndComponents_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                  (param_2,*(UActorComponent **)
                            (*(longlong *)&pTVar7->Elements +
                            (longlong)TStack_60.CurrentBitIndex * 0x10),param_2);
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
  }
  return;
}

// AddLambda<`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_> @ 14cb59a20

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::AddLambda<_FBaseDynamicMeshSelector::RegisterMeshChangedHandler_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FBaseDynamicMeshSelector *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FBaseDynamicMeshSelector *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FBaseDynamicMeshSelector *)0x0;
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
      pFVar5 = (FBaseDynamicMeshSelector *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
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

// AddWeakLambda<UGeometrySelectionManager,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_> @ 14cb5aa30

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddWeakLambda<UGeometrySelectionManager,_UGeometrySelectionManager::GetCachedTarget_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          UGeometrySelectionManager *param_1,<lambda_1> *param_2)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::`2'::<lambda_1>_>
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

// Build<TArray<int,TSizedDefaultAllocator<32>_>,``FBaseDynamicMeshSelector::UpdateGroupEdgeSegmentTree'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14cb5b410

void __thiscall
UE::Geometry::FSegmentTree3::
Build<TArray<int,TSizedDefaultAllocator<32>_>,__FBaseDynamicMeshSelector::UpdateGroupEdgeSegmentTree_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FSegmentTree3 *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2,
          int param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  TVector<double> *pTVar14;
  int iVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res20 [8];
  uint local_168 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_160;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_150;
  FScriptContainerElement *local_140;
  double local_138;
  double dStack_130;
  double local_128;
  TVector<double>_u_0 TStack_120;
  double local_108;
  int local_100;
  undefined4 uStack_fc;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  TVector<double> local_c0;
  TVector<double> local_a8 [4];
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
  }
  piVar1 = &(this->SegmentList).ArrayMax;
  if (*piVar1 < param_3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,param_3,&(this->SegmentList).AllocatorInstance,(this->SegmentList).ArrayNum,
               piVar1);
  }
  dVar9 = __real_3fe0000000000000;
  dVar8 = __real_3ff0000000000000;
  pFVar17 = (param_1->AllocatorInstance).Data;
  iVar15 = param_1->ArrayNum;
  local_140 = pFVar17 + (longlong)iVar15 * 4;
  while( true ) {
    pFVar5 = local_140;
    if (param_1->ArrayNum != iVar15) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar17 == pFVar5) break;
    iVar11 = *(int *)pFVar17;
    pTVar13 = FDynamicMesh3::GetEdgePoint(param_2.SourceMesh,&local_c0,iVar11,dVar8);
    pTVar14 = FDynamicMesh3::GetEdgePoint(param_2.SourceMesh,local_a8,iVar11,0.0);
    dVar2 = (pTVar13->field0_0x0)._s_0.X;
    dVar3 = (pTVar13->field0_0x0)._s_0.Y;
    dVar4 = (pTVar13->field0_0x0)._s_0.Z;
    TStack_120._s_0.X = dVar2 - (pTVar14->field0_0x0)._s_0.X;
    TStack_120._s_0.Y = dVar3 - (pTVar14->field0_0x0)._s_0.Y;
    local_108 = 0.0;
    local_138 = (dVar2 + (pTVar14->field0_0x0)._s_0.X) * dVar9;
    dStack_130 = (dVar3 + (pTVar14->field0_0x0)._s_0.Y) * dVar9;
    TStack_120._s_0.Z = dVar4 - (pTVar14->field0_0x0)._s_0.Z;
    local_128 = (dVar4 + (pTVar14->field0_0x0)._s_0.Z) * dVar9;
    local_108 = Normalize<double>((TVector<double> *)&TStack_120._s_0,0.0);
    pFVar5 = (this->SegmentList).AllocatorInstance.Data;
    local_108 = local_108 * dVar9;
    dStack_f8 = local_138;
    dStack_f0 = dStack_130;
    dStack_e8 = local_128;
    dStack_e0 = TStack_120._s_0.X;
    local_d8 = TStack_120._s_0.Y;
    dStack_d0 = TStack_120._s_0.Z;
    local_100 = iVar11;
    local_c8 = local_108;
    if (((pFVar5 <= (FScriptContainerElement *)&local_100) &&
        ((FScriptContainerElement *)&local_100 < pFVar5 + (longlong)*piVar1 * 0x40)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (this->SegmentList).ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&(this->SegmentList).AllocatorInstance,piVar1);
      (this->SegmentList).ArrayNum = iVar11;
    }
    (this->SegmentList).ArrayNum = iVar11 + 1;
    pFVar5 = (this->SegmentList).AllocatorInstance.Data;
    lVar16 = (longlong)iVar11 * 0x40;
    pFVar17 = pFVar17 + 4;
    *(ulonglong *)(pFVar5 + lVar16) = CONCAT44(uStack_fc,local_100);
    *(double *)(pFVar5 + lVar16 + 8) = dStack_f8;
    *(double *)(pFVar5 + lVar16 + 0x10) = dStack_f0;
    *(double *)(pFVar5 + lVar16 + 0x10 + 8) = dStack_e8;
    *(double *)(pFVar5 + lVar16 + 0x20) = dStack_e0;
    *(double *)(pFVar5 + lVar16 + 0x20 + 8) = local_d8;
    *(double *)(pFVar5 + lVar16 + 0x30) = dStack_d0;
    *(double *)(pFVar5 + lVar16 + 0x30 + 8) = local_c8;
  }
  uVar12 = (this->SegmentList).ArrayNum;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&local_160.AllocatorInstance,0,&local_160.ArrayMax);
  }
  uVar12 = (this->SegmentList).ArrayNum;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar12,&local_150.AllocatorInstance,0,&local_150.ArrayMax);
  }
  iVar15 = (this->SegmentList).ArrayNum;
  local_168[0] = 0;
  if (0 < iVar15) {
    do {
      if (((local_160.AllocatorInstance.Data <= (FScriptContainerElement *)local_168) &&
          ((FScriptContainerElement *)local_168 <
           local_160.AllocatorInstance.Data + (longlong)local_160.ArrayMax * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_160.ArrayNum == local_160.ArrayMax) {
        local_160.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_160.AllocatorInstance,&local_160.ArrayMax);
      }
      iVar15 = local_160.ArrayNum + 1;
      *(uint *)(local_160.AllocatorInstance.Data + (longlong)local_160.ArrayNum * 4) = local_168[0];
      lVar16 = (longlong)(int)local_168[0];
      uVar12 = 0;
      if ((int)local_168[0] < (this->SegmentList).ArrayNum) {
        uVar12 = ~local_168[0] >> 0x1f;
      }
      local_160.ArrayNum = iVar15;
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = (this->SegmentList).AllocatorInstance.Data + lVar16 * 0x40 + 8;
      if (((local_150.AllocatorInstance.Data <= pFVar17) &&
          (pFVar17 < local_150.AllocatorInstance.Data + (longlong)local_150.ArrayMax * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = local_150.ArrayNum;
      if (local_150.ArrayNum == local_150.ArrayMax) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_150.AllocatorInstance,&local_150.ArrayMax);
      }
      local_150.ArrayNum = iVar15 + 1;
      uVar7 = *(undefined8 *)(pFVar17 + 8);
      *(undefined8 *)(local_150.AllocatorInstance.Data + (longlong)iVar15 * 0x18) =
           *(undefined8 *)pFVar17;
      *(undefined8 *)(local_150.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 8) = uVar7;
      *(undefined8 *)(local_150.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 0x10) =
           *(undefined8 *)(pFVar17 + 0x10);
      iVar15 = (this->SegmentList).ArrayNum;
      local_168[0] = local_168[0] + 1;
    } while ((int)local_168[0] < iVar15);
  }
  BuildTopDown(this,&local_160,&local_150,iVar15);
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  pFVar17 = (param_1->AllocatorInstance).Data;
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar17);
  }
  return;
}

// CastChecked<UGeometrySelectionManager,UObject> @ 14cb5b9a0

UGeometrySelectionManager * __cdecl CastChecked<UGeometrySelectionManager,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UGeometrySelectionManager>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UGeometrySelectionManager::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UGeometrySelectionManager *)param_1;
  }
  pFVar3 = GetTypeName<UGeometrySelectionManager>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareItems<FGeometryIdentifier,int> @ 14cb5ba60

bool __cdecl
CompareItems<FGeometryIdentifier,int>
          (FGeometryIdentifier *param_1,FGeometryIdentifier *param_2,int param_3)

{
  bool bVar1;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar2;
  
  if (param_3 != 0) {
    pTVar2 = &param_2->TargetObject;
    this = &param_1->TargetObject;
    do {
      if (((((FGeometryIdentifier *)(this + -1))->TargetType !=
            *(ETargetType *)((longlong)this + (longlong)param_2 + (-8 - (longlong)param_1))) ||
          (((FGeometryIdentifier *)(this + -1))->ObjectType !=
           ((FGeometryIdentifier *)(pTVar2 + -1))->ObjectType)) ||
         (bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>(this,pTVar2),
         !bVar1)) {
        return false;
      }
      pTVar2 = pTVar2 + 2;
      this = this + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Geometry::FSpatialPhotoParams,int> @ 14cb5bae0

bool __cdecl
CompareItems<UE::Geometry::FSpatialPhotoParams,int>
          (FSpatialPhotoParams *param_1,FSpatialPhotoParams *param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  
  if (param_3 != 0) {
    pdVar2 = &(param_2->Frame).Origin.field0_0x0._s_0.Z;
    pdVar1 = &(param_1->Frame).Origin.field0_0x0._s_0.Z;
    do {
      if ((((((*(double *)((longlong)pdVar1 + (longlong)param_2 + (-0x10 - (longlong)param_1)) !=
               ((TVector<double>_u_0_s_0 *)(pdVar1 + -2))->X) || (pdVar2[-1] != pdVar1[-1])) ||
            (*pdVar2 != *pdVar1)) || ((pdVar2[1] != pdVar1[1] || (pdVar2[2] != pdVar1[2])))) ||
          ((pdVar2[3] != pdVar1[3] || ((pdVar2[4] != pdVar1[4] || (pdVar2[5] != pdVar1[5])))))) ||
         ((pdVar2[6] != pdVar1[6] ||
          ((*(int *)(pdVar1 + 7) != *(int *)(pdVar2 + 7) ||
           (*(int *)((longlong)pdVar1 + 0x3c) != *(int *)((longlong)pdVar2 + 0x3c))))))) {
        return false;
      }
      pdVar2 = pdVar2 + 10;
      pdVar1 = pdVar1 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DefaultConstructItems<UE::Geometry::FGeometrySelectionElements,int> @ 14cb5bbc0

void __cdecl
DefaultConstructItems<UE::Geometry::FGeometrySelectionElements,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FSegmentTree3::FTreeBox,int> @ 14cb5bc00

void __cdecl
DefaultConstructItems<UE::Geometry::FSegmentTree3::FTreeBox,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<UE::Geometry::FGeometrySelectionElements,int> @ 14cb5bda0

void __cdecl
DestructItems<UE::Geometry::FGeometrySelectionElements,int>
          (FGeometrySelectionElements *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Geometry::TSegment3<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Segments;
    do {
      pFVar1 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FGeometrySelectionElements *)(pTVar2 + -1))->Triangles).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1>,int> @ 14cb5be00

void __cdecl
DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1>,int>
          (TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int> @ 14cb5be40

void __cdecl
DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
          (TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *param_1,int param_2
          )

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int> @ 14cb5be80

void __cdecl
DestructItems<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int>
          (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FImageStreamEndpoint,TDefaultDelete<FImageStreamEndpoint>_>,int> @ 14cb5bec0

void __cdecl
DestructItems<TUniquePtr<FImageStreamEndpoint,TDefaultDelete<FImageStreamEndpoint>_>,int>
          (TUniquePtr<FImageStreamEndpoint,TDefaultDelete<FImageStreamEndpoint>_> *param_1,
          int param_2)

{
  FImageStreamEndpoint *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FImageStreamEndpoint *)0x0) {
      (**(code **)*pFVar1)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_>,int> @ 14cb5bf00

void __cdecl
DestructItems<TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_>,int>
          (TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_> *param_1,
          int param_2)

{
  IGeometrySelectorFactory *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IGeometrySelectorFactory *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference'::__l2::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14cb5d4d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference_::__l2::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  TStatIdData *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  bool bVar8;
  Type TVar9;
  uint uVar10;
  FRenderCommandTag *pFVar11;
  TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
  *this;
  FRHICommandListImmediate *pFVar12;
  undefined8 uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar14;
  FName FVar15;
  FNameEntryId FVar16;
  FNameEntryId FVar17;
  uint local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FConstructor local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar11 = (FRenderCommandTag *)
            TRenderCommandTag<`UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference'::__l2::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference155>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar11->SpecId,pFVar11->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar11->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14cb5d68a;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_68.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      this = TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
             ::FConstructor::
             ConstructAndHoldImpl<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                       (&local_68,param_1,pFVar11);
      if (this != (TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
                   *)0x0) {
        LOCK();
        *(int *)&this->_padding_ = (int)this->_padding_ + 1;
        UNLOCK();
      }
      if (-1 < TaskTrace::TaskChannel->Enabled) {
        TVar9 = UE::Tasks::Private::TranslatePriority
                          ((ETaskPriority)((ulonglong)this->_padding_ >> 0x3b) & (Inherit|Default),
                           *(EExtendedTaskPriority *)((longlong)&this->_padding_ + 4));
        TaskTrace::Launched(this->_padding_,
                            (wchar_t *)((ulonglong)this->_padding_ >> 6 & 0x1fffffffffffff),true,
                            TVar9,0x120);
      }
      local_res10 = CONCAT31(local_res10._1_3_,1);
      UE::Tasks::Private::FTaskBase::TryUnlock((FTaskBase *)this,(bool *)&local_res10);
      if (this != (TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
                   *)0x0) {
        LOCK();
        plVar14 = &this->_padding_;
        lVar7 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)this->_padding_)(this,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar11);
    }
    goto LAB_14cb5d87e;
  }
LAB_14cb5d68a:
  pTVar2 = (pFVar11->StatId).StatIdPtr;
  FVar17.Value = 0;
  bVar8 = false;
  bVar6 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar15 = *(FName *)&pTVar2->Name;
  FVar16 = FVar15.ComparisonIndex.Value;
  uVar10 = FVar15.Number;
  if ((FVar16.Value == 0) && (uVar10 == 0)) {
LAB_14cb5d768:
    bVar4 = false;
    FVar15 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(pTVar2->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(pTVar2->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cb5d768;
    local_res10 = FVar16.Value;
    uStackX_14 = uVar10;
    local_58 = FVar15;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar4 = true;
    FVar17.Value = local_58.ComparisonIndex.Value;
  }
  pFVar12 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar3 = *(code **)param_1;
  plVar14 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar14 = *(longlong **)&param_1->field_0x28;
  }
  uVar13 = (**(code **)(*plVar14 + 8))();
  (*pcVar3)(uVar13,pFVar12);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_14cb5d87e:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForGroupSetEdges<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,`FGroupTopologyProvider::ForGroupSetEdges'::__l2::<lambda_1>_> @ 14cb5db10

void __thiscall
UE::Geometry::FGroupTopology::
ForGroupSetEdges<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,_FGroupTopologyProvider::ForGroupSetEdges_::__l2::<lambda_1>_>
          (FGroupTopology *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          <lambda_1> *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  uint *puVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  ForAnyElementType FVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 local_res20 [8];
  undefined1 local_158;
  undefined1 local_157 [3];
  uint local_154;
  ForAnyElementType local_150;
  undefined8 local_148;
  uint local_140;
  uint local_138 [2];
  uint local_130;
  undefined8 local_128;
  undefined8 local_120;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  FScriptContainerElement local_e8;
  undefined8 local_e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  uint *local_a0;
  FGroup *local_98;
  FScriptContainerElement *local_90;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  iVar1 = *(int *)&(param_1->Elements).field_0x28;
  iStack_d0 = 0;
  uStack_cc = 1;
  local_b8 = 0;
  iStack_bc = iStack_d0;
  if (iVar1 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar20;
    }
    uVar14 = *puVar18;
    local_b8 = 0;
    iStack_d0 = 0;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar1;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_14cb5dbcd;
      uVar14 = puVar18[lVar10 + 1];
    }
    uStack_cc = -uVar14 & uVar14;
    uVar17 = (ulonglong)uStack_cc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_a8 = (int)lVar10;
    iStack_bc = local_b8 + -1 + local_a8;
    if (iVar1 < iStack_bc) {
      iStack_bc = iVar1;
    }
  }
LAB_14cb5dbcd:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_b0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_c0 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_cc,iStack_d0);
  TStack_78.CurrentBitIndex = iStack_bc;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_78._28_4_ = iStack_bc;
  TStack_78.BaseBitIndex = local_b8;
  uStack_58 = CONCAT44(uStack_ac,iStack_b0);
  local_140 = uVar14;
  local_d8 = param_1;
  local_c8 = (undefined1 *)pTVar20;
  iStack_b4 = iStack_bc;
  local_88 = pTVar20;
  local_80 = param_1;
  TStack_78.Array = pTVar20;
  if ((((int)uVar14 < 0) || (iVar1 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar2) {
    puVar16 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar20;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar2;
      local_140 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cb5dce0;
      uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_a4 = (int)lVar10;
    uVar14 = local_a4 + -1 + uVar13;
    local_140 = uVar14;
    if ((int)uVar2 < (int)uVar14) {
      uVar14 = uVar2;
      local_140 = uVar2;
    }
  }
LAB_14cb5dce0:
  do {
    pTVar6 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_78.CurrentBitIndex == uVar14) && (TStack_78.Array == pTVar20)) &&
       (pTVar6 == param_1)) {
      if (local_150.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data);
      }
      return;
    }
    local_98 = FindGroupByID(this,*(int *)(*(longlong *)&pTVar6->Elements +
                                          (longlong)TStack_78.CurrentBitIndex * 0xc));
    if (local_98 == (FGroup *)0x0) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7172532518883688045>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                         ,0x193,"Group != nullptr");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      local_130 = (local_98->Boundaries).ArrayNum;
      uVar17 = (ulonglong)(int)local_130;
      pFVar19 = (local_98->Boundaries).AllocatorInstance.Data;
      local_90 = pFVar19 + uVar17 * 0x28;
      while( true ) {
        pFVar15 = local_90;
        if ((local_98->Boundaries).ArrayNum != (int)uVar17) {
          local_158 = 0;
          `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_158);
        }
        pTVar20 = local_88;
        uVar14 = local_140;
        if (pFVar19 == pFVar15) break;
        puVar18 = *(uint **)pFVar19;
        iVar1 = *(int *)(pFVar19 + 8);
        local_a0 = puVar18 + iVar1;
        while( true ) {
          puVar5 = local_a0;
          if (*(int *)(pFVar19 + 8) != iVar1) {
            local_157[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_157);
          }
          if (puVar18 == puVar5) break;
          uVar14 = *puVar18;
          for (FVar8.Data = local_150.Data; local_154 = uVar14,
              FVar8.Data != local_150.Data + (longlong)(int)local_148 * 4;
              FVar8.Data = FVar8.Data + 4) {
            if (*(uint *)FVar8.Data == uVar14) goto LAB_14cb5e07e;
          }
          uVar13 = 0;
          if ((int)uVar14 < (this->Edges).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          pFVar15 = (this->Edges).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x50;
          local_128 = *(undefined8 *)pFVar15;
          local_120 = *(undefined8 *)(pFVar15 + 8);
          local_118.Data = (FScriptContainerElement *)0x0;
          local_110 = *(int *)(pFVar15 + 0x18);
          lVar10 = (longlong)local_110;
          pvVar3 = *(void **)(pFVar15 + 0x10);
          if (local_110 == 0) {
            local_10c = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_110,0,&local_118,local_110,&local_10c);
            memcpy(local_118.Data,pvVar3,lVar10 << 2);
          }
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = *(int *)(pFVar15 + 0x28);
          lVar10 = (longlong)local_100;
          pvVar3 = *(void **)(pFVar15 + 0x20);
          if (local_100 == 0) {
            local_fc = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_100,0,&local_108,local_100,&local_fc);
            memcpy(local_108.Data,pvVar3,lVar10 << 2);
          }
          local_f8.Data = (FScriptContainerElement *)0x0;
          local_f0 = *(int *)(pFVar15 + 0x38);
          lVar10 = (longlong)local_f0;
          pvVar3 = *(void **)(pFVar15 + 0x30);
          if (local_f0 == 0) {
            local_ec = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_f0,0,&local_f8,local_f0,&local_ec);
            memcpy(local_f8.Data,pvVar3,lVar10 << 2);
          }
          local_e8 = pFVar15[0x40];
          local_e0 = *(undefined8 *)(pFVar15 + 0x48);
          local_138[0] = uVar14;
          Core::Private::Function::CheckCallable(*(void **)&param_2->EdgeFunc);
          plVar11 = *(longlong **)&(param_2->EdgeFunc).field_0x28;
          pcVar4 = *(code **)&param_2->EdgeFunc;
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)&(param_2->EdgeFunc).field_0x10;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar4)(uVar9,local_138);
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data);
          }
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          if (local_118.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data);
          }
          if (((local_150.Data <= (FScriptContainerElement *)&local_154) &&
              ((FScriptContainerElement *)&local_154 <
               local_150.Data + (longlong)local_148._4_4_ * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar12 = (int)local_148;
          if ((int)local_148 == local_148._4_4_) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_150,(int *)((longlong)&local_148 + 4));
          }
          local_148 = CONCAT44(local_148._4_4_,iVar12 + 1);
          *(uint *)(local_150.Data + (longlong)iVar12 * 4) = local_154;
LAB_14cb5e07e:
          puVar18 = puVar18 + 1;
        }
        pFVar19 = pFVar19 + 0x28;
        uVar17 = (ulonglong)local_130;
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// GetComponentHitTriangle_Internal<UE::Math::TVector<double>_> @ 14cb5e400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
GetComponentHitTriangle_Internal<UE::Math::TVector<double>_>
          (FHitResult *param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  UStaticMesh *this;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [12];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  bool bVar29;
  uint uVar30;
  int iVar31;
  UObject *pUVar32;
  UClass *pUVar33;
  FStaticMeshRenderData *this_00;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
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
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  double dVar76;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auStack_198 [32];
  FIndexArrayView local_178 [7];
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_198;
  bVar29 = FWeakObjectPtr::IsValid(&(param_1->Component).WeakPtr);
  if (((bVar29) && (-1 < param_1->FaceIndex)) &&
     (pUVar32 = FWeakObjectPtr::Get(&(param_1->Component).WeakPtr), pUVar32 != (UObject *)0x0)) {
    pUVar33 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar31 = (int)pUVar33->_padding_;
    if ((iVar31 <= *(int *)(*(longlong *)&pUVar32->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar32->field_0x10 + 0x30) + (longlong)iVar31 * 8) ==
        &pUVar33->_padding_)) {
      this = *(UStaticMesh **)(pUVar32 + 0x24);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      uVar30 = UStaticMesh::GetMinLODIdx(this,false);
      this_00 = UStaticMesh::GetRenderData(this);
      if ((int)uVar30 < (int)(uint)this_00->CurrentFirstLODIdx) {
        uVar30 = (uint)this_00->CurrentFirstLODIdx;
      }
      iVar31 = FStaticMeshRenderData::GetFirstValidLODIdx(this_00,uVar30);
      if (((-1 < iVar31) && (iVar31 < (this_00->LODResources).Array.ArrayNum)) &&
         (lVar7 = *(longlong *)
                   ((this_00->LODResources).Array.AllocatorInstance.Data + (longlong)iVar31 * 8),
         lVar7 != 0)) {
        FRawStaticIndexBuffer::GetArrayView((FRawStaticIndexBuffer *)(lVar7 + 0x228),local_178);
        iVar31 = param_1->FaceIndex * 3;
        if (iVar31 + 2 < local_178[0].NumIndices) {
          if (local_178[0].b32Bit == false) {
            uVar30 = (uint)*(ushort *)
                            ((longlong)local_178[0].UntypedIndexData + (longlong)iVar31 * 2);
          }
          else {
            uVar30 = *(uint *)((longlong)local_178[0].UntypedIndexData + (longlong)iVar31 * 4);
          }
          if (local_178[0].b32Bit == false) {
            uVar36 = (uint)*(ushort *)
                            ((longlong)local_178[0].UntypedIndexData + (longlong)iVar31 * 2 + 2);
          }
          else {
            uVar36 = *(uint *)((longlong)local_178[0].UntypedIndexData + (longlong)iVar31 * 4 + 4);
          }
          if (local_178[0].b32Bit == false) {
            uVar35 = (uint)*(ushort *)
                            ((longlong)local_178[0].UntypedIndexData + (longlong)iVar31 * 2 + 4);
          }
          else {
            uVar35 = *(uint *)((longlong)local_178[0].UntypedIndexData + (longlong)iVar31 * 4 + 8);
          }
          uVar6 = *(uint *)(lVar7 + 0x1cc);
          if (((uVar30 < uVar6) && (uVar36 < uVar6)) && (uVar35 < uVar6)) {
            lVar8 = *(longlong *)(lVar7 + 0x1c0);
            iVar31 = *(int *)(lVar7 + 0x1c8);
            auVar77 = *(undefined1 (*) [16])&pUVar32[0xc].field_0x20;
            dVar68 = auVar77._0_8_;
            auVar62 = *(undefined1 (*) [16])&pUVar32[0xc].field_0x10;
            dVar27 = *(double *)&pUVar32[0xd].field_0x8;
            dVar13 = *(double *)&pUVar32[0xd].field_0x10;
            uVar34 = (ulonglong)(iVar31 * uVar30);
            dVar28 = *(double *)&pUVar32[0xd].field_0x18;
            dVar25 = *(double *)&pUVar32[0xe].field_0x10;
            dVar26 = *(double *)&pUVar32[0xe].field_0x18;
            dVar76 = auVar77._8_8_;
            dVar19 = *(double *)(pUVar32 + 0xe);
            dVar21 = *(double *)&pUVar32[0xe].field_0x8;
            dVar18 = (double)*(float *)(uVar34 + 8 + lVar8) * dVar25;
            dVar20 = dVar26 * 0.0;
            dVar14 = dVar19 * (double)*(float *)(uVar34 + lVar8);
            dVar15 = dVar21 * (double)*(float *)(uVar34 + 4 + lVar8);
            uVar47 = (undefined4)((ulonglong)dVar15 >> 0x20);
            dVar23 = auVar62._8_8_;
            auVar49._8_4_ = SUB84(dVar15,0);
            auVar49._0_8_ = dVar14;
            auVar49._12_4_ = uVar47;
            auVar16._8_4_ = SUB84(dVar20,0);
            auVar16._0_8_ = dVar18;
            auVar16._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
            auVar50 = blendpd(auVar49,auVar16,2);
            auVar37._8_4_ = auVar77._0_4_;
            auVar37._0_8_ = dVar23;
            auVar37._12_4_ = auVar77._4_4_;
            uVar5 = *(undefined8 *)((ulonglong)(iVar31 * uVar36) + 4 + lVar8);
            dVar22 = (double)(float)uVar5;
            fVar1 = *(float *)((ulonglong)(iVar31 * uVar36) + lVar8);
            uVar34 = (ulonglong)(iVar31 * uVar35);
            auVar77 = blendpd(auVar62,auVar77,2);
            auVar69._8_4_ = SUB84(dVar15,0);
            auVar69._0_8_ = dVar14;
            auVar69._12_4_ = uVar47;
            dVar9 = auVar62._0_8_;
            fVar2 = *(float *)(uVar34 + lVar8);
            fVar3 = *(float *)(uVar34 + 4 + lVar8);
            fVar4 = *(float *)(uVar34 + 8 + lVar8);
            auVar70._0_8_ = auVar69._8_8_ * dVar9 - dVar23 * dVar14;
            auVar70._8_8_ = dVar18 * dVar23 - auVar37._8_8_ * dVar15;
            dVar10 = auVar77._0_8_;
            dVar11 = auVar77._8_8_;
            auVar51._0_8_ = auVar50._0_8_ * dVar68 - dVar10 * dVar18;
            auVar51._8_8_ = auVar50._8_8_ * dVar76 - dVar11 * dVar20;
            auVar77 = blendpd(auVar70,auVar51,2);
            dVar20 = auVar70._8_8_ + auVar70._8_8_;
            dVar12 = auVar51._0_8_ + auVar51._0_8_;
            uVar47 = SUB84(dVar12,0);
            uVar48 = (undefined4)((ulonglong)dVar12 >> 0x20);
            auVar71._0_8_ = auVar77._0_8_ + auVar77._0_8_;
            auVar71._8_8_ = auVar77._8_8_ + auVar77._8_8_;
            auVar52._8_4_ = uVar47;
            auVar52._0_8_ = dVar20;
            auVar52._12_4_ = uVar48;
            auVar38._8_4_ = uVar47;
            auVar38._0_8_ = dVar20;
            auVar38._12_4_ = uVar48;
            auVar60._8_4_ = uVar47;
            auVar60._0_8_ = dVar20;
            auVar60._12_4_ = uVar48;
            auVar77 = blendpd(auVar38,auVar71,2);
            auVar61._0_8_ = auVar60._8_8_ * dVar9 - dVar20 * dVar23;
            auVar61._8_8_ = auVar71._0_8_ * dVar23 - dVar12 * dVar68;
            auVar39._0_8_ = auVar77._0_8_ * dVar68 - auVar71._0_8_ * dVar10;
            auVar39._8_8_ = auVar77._8_8_ * dVar76 - auVar71._8_8_ * dVar11;
            auVar62 = blendpd(auVar61,auVar39,2);
            local_f8 = SUB84(dVar22,0);
            uStack_f4 = (undefined4)((ulonglong)dVar22 >> 0x20);
            auVar24._4_8_ = auVar39._8_8_;
            auVar24._0_4_ = uStack_fc;
            auVar40._0_8_ = auVar24._0_8_ << 0x20;
            auVar40._8_4_ = local_f8;
            auVar40._12_4_ = uStack_f4;
            dVar12 = auVar39._0_8_ + auVar52._8_8_ * dVar76 + dVar15 + dVar13;
            auVar77._8_4_ = SUB84(dVar12,0);
            auVar77._0_8_ = auVar61._8_8_ + dVar20 * dVar76 + dVar14 + dVar27;
            auVar77._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            *(undefined1 (*) [16])&param_2->field0_0x0 = auVar77;
            (param_2->field0_0x0)._s_0.Z = auVar62._0_8_ + auVar71._0_8_ * dVar76 + dVar18 + dVar28;
            dVar14 = dVar19 * (double)fVar1;
            dVar15 = dVar21 * auVar40._8_8_;
            uVar47 = SUB84(dVar15,0);
            uVar48 = (undefined4)((ulonglong)dVar15 >> 0x20);
            dVar18 = (double)(float)((ulonglong)uVar5 >> 0x20) * dVar25;
            dVar20 = dVar26 * 0.0;
            auVar72._8_4_ = uVar47;
            auVar72._0_8_ = dVar14;
            auVar72._12_4_ = uVar48;
            auVar53._8_4_ = uVar47;
            auVar53._0_8_ = dVar14;
            auVar53._12_4_ = uVar48;
            auVar41._8_4_ = uVar47;
            auVar41._0_8_ = dVar14;
            auVar41._12_4_ = uVar48;
            auVar17._8_4_ = SUB84(dVar20,0);
            auVar17._0_8_ = dVar18;
            auVar17._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
            auVar77 = blendpd(auVar53,auVar17,2);
            auVar73._0_8_ = auVar72._8_8_ * dVar9 - dVar14 * dVar23;
            auVar73._8_8_ = dVar18 * dVar23 - auVar41._8_8_ * dVar68;
            auVar54._0_8_ = auVar77._0_8_ * dVar68 - dVar18 * dVar10;
            auVar54._8_8_ = auVar77._8_8_ * dVar76 - dVar20 * dVar11;
            auVar77 = blendpd(auVar73,auVar54,2);
            dVar20 = auVar73._8_8_ + auVar73._8_8_;
            dVar12 = auVar54._0_8_ + auVar54._0_8_;
            uVar47 = SUB84(dVar12,0);
            uVar48 = (undefined4)((ulonglong)dVar12 >> 0x20);
            auVar74._0_8_ = auVar77._0_8_ + auVar77._0_8_;
            auVar74._8_8_ = auVar77._8_8_ + auVar77._8_8_;
            auVar63._8_4_ = uVar47;
            auVar63._0_8_ = dVar20;
            auVar63._12_4_ = uVar48;
            auVar42._8_4_ = uVar47;
            auVar42._0_8_ = dVar20;
            auVar42._12_4_ = uVar48;
            auVar55._8_4_ = uVar47;
            auVar55._0_8_ = dVar20;
            auVar55._12_4_ = uVar48;
            auVar77 = blendpd(auVar42,auVar74,2);
            auVar64._0_8_ = auVar63._8_8_ * dVar9 - dVar20 * dVar23;
            auVar64._8_8_ = auVar74._0_8_ * dVar23 - dVar12 * dVar68;
            auVar43._0_8_ = auVar77._0_8_ * dVar68 - auVar74._0_8_ * dVar10;
            auVar43._8_8_ = auVar77._8_8_ * dVar76 - auVar74._8_8_ * dVar11;
            dVar19 = dVar19 * (double)fVar2;
            dVar21 = dVar21 * (double)fVar3;
            uVar47 = SUB84(dVar21,0);
            uVar48 = (undefined4)((ulonglong)dVar21 >> 0x20);
            auVar77 = blendpd(auVar64,auVar43,2);
            dVar12 = auVar43._0_8_ + auVar55._8_8_ * dVar76 + dVar15 + dVar13;
            auVar75._0_8_ = (double)fVar4 * dVar25;
            auVar75._8_8_ = dVar26 * 0.0;
            auVar62._8_4_ = SUB84(dVar12,0);
            auVar62._0_8_ = auVar64._8_8_ + dVar20 * dVar76 + dVar14 + dVar27;
            auVar62._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            *(undefined1 (*) [16])&param_2[1].field0_0x0 = auVar62;
            param_2[1].field0_0x0._s_0.Z = auVar77._0_8_ + auVar74._0_8_ * dVar76 + dVar18 + dVar28;
            auVar56._8_4_ = uVar47;
            auVar56._0_8_ = dVar19;
            auVar56._12_4_ = uVar48;
            auVar65._8_4_ = uVar47;
            auVar65._0_8_ = dVar19;
            auVar65._12_4_ = uVar48;
            auVar44._8_4_ = uVar47;
            auVar44._0_8_ = dVar19;
            auVar44._12_4_ = uVar48;
            auVar77 = blendpd(auVar56,auVar75,2);
            auVar66._0_8_ = auVar65._8_8_ * dVar9 - dVar19 * dVar23;
            auVar66._8_8_ = auVar75._0_8_ * dVar23 - auVar44._8_8_ * dVar68;
            auVar57._0_8_ = auVar77._0_8_ * dVar68 - auVar75._0_8_ * dVar10;
            auVar57._8_8_ = auVar77._8_8_ * dVar76 - auVar75._8_8_ * dVar11;
            dVar20 = auVar66._8_8_ + auVar66._8_8_;
            dVar12 = auVar57._0_8_ + auVar57._0_8_;
            uVar47 = (undefined4)((ulonglong)dVar12 >> 0x20);
            auVar77 = blendpd(auVar66,auVar57,2);
            auVar58._8_4_ = SUB84(dVar12,0);
            auVar58._0_8_ = dVar20;
            auVar58._12_4_ = uVar47;
            auVar45._8_4_ = SUB84(dVar12,0);
            auVar45._0_8_ = dVar20;
            auVar45._12_4_ = uVar47;
            auVar67._0_8_ = auVar77._0_8_ + auVar77._0_8_;
            auVar67._8_8_ = auVar77._8_8_ + auVar77._8_8_;
            auVar59._0_8_ = auVar58._8_8_ * dVar9 - dVar23 * dVar20;
            auVar59._8_8_ = auVar67._0_8_ * dVar23 - dVar68 * dVar12;
            auVar77 = blendpd(auVar45,auVar67,2);
            auVar46._0_8_ = auVar77._0_8_ * dVar68 - dVar10 * auVar67._0_8_;
            auVar46._8_8_ = auVar77._8_8_ * dVar76 - dVar11 * auVar67._8_8_;
            auVar77 = blendpd(auVar59,auVar46,2);
            dVar13 = auVar46._0_8_ + dVar21 + dVar76 * dVar12 + dVar13;
            auVar50._8_4_ = SUB84(dVar13,0);
            auVar50._0_8_ = auVar59._8_8_ + dVar19 + dVar76 * dVar20 + dVar27;
            auVar50._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            *(undefined1 (*) [16])&param_2[2].field0_0x0 = auVar50;
            param_2[2].field0_0x0._s_0.Z =
                 auVar77._0_8_ + auVar75._0_8_ + dVar76 * auVar67._0_8_ + dVar28;
            return true;
          }
        }
      }
    }
  }
  return false;
}

// GetTypeName<UGeometrySelectionManager> @ 14cb5e9e0

FString * __cdecl GetTypeName<UGeometrySelectionManager>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UGeometrySelectionManager::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UBoundarySelectionMechanic> @ 14cb5ea20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UBoundarySelectionMechanic>(FObjectInitializer *param_1)

{
  UMeshTopologySelectionMechanic *this;
  
  this = (UMeshTopologySelectionMechanic *)param_1->Obj;
  if (this != (UMeshTopologySelectionMechanic *)0x0) {
    UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic(this);
    *(undefined ***)this = &UBoundarySelectionMechanic::_vftable__for__UInteractionMechanic__;
    *(undefined ***)&this->field_0x30 =
         &UBoundarySelectionMechanic::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this->field_0x38 =
         &UBoundarySelectionMechanic::_vftable__for__IHoverBehaviorTarget__;
  }
  return;
}

// InternalConstructor<UDEPRECATED_PolygonSelectionMechanicProperties> @ 14cb5ea70

void __cdecl
InternalConstructor<UDEPRECATED_PolygonSelectionMechanicProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x10101;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDEPRECATED_PolygonSelectionMechanicProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x1010100;
    *(undefined4 *)&this[1]._padding_ = 0x1000101;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
  }
  return;
}

// InternalConstructor<UDynamicMeshProvider> @ 14cb5eae0

void __cdecl InternalConstructor<UDynamicMeshProvider>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UDynamicMeshProvider__6B_;
  }
  return;
}

// InternalConstructor<UGeometrySelectionManager> @ 14cb5eb10

void __cdecl InternalConstructor<UGeometrySelectionManager>(FObjectInitializer *param_1)

{
  if ((UGeometrySelectionManager *)param_1->Obj != (UGeometrySelectionManager *)0x0) {
    UGeometrySelectionManager::UGeometrySelectionManager
              ((UGeometrySelectionManager *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMeshTopologySelectionMechanic> @ 14cb5eb30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UMeshTopologySelectionMechanic>(FObjectInitializer *param_1)

{
  FWeakObjectPtr this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = (FWeakObjectPtr)param_1->Obj;
  if (this == (FWeakObjectPtr)0x0) {
    return;
  }
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined1 *)((longlong)this + 0x40) = 1;
  *(longlong *)((longlong)this + 0x48) = 0;
  *(undefined ***)this = &UMeshTopologySelectionMechanic::_vftable__for__UInteractionMechanic__;
  *(longlong *)((longlong)this + 0x50) = 0;
  ((UInteractionMechanic *)((longlong)this + 0x30))->_padding_ =
       (longlong)&UMeshTopologySelectionMechanic::_vftable__for__IClickBehaviorTarget__;
  ((FWeakObjectPtr *)((longlong)this + 0x58))->ObjectIndex = 0;
  ((FWeakObjectPtr *)((longlong)this + 0x58))->ObjectSerialNumber = 0;
  *(undefined ***)((longlong)this + 0x38) =
       &UMeshTopologySelectionMechanic::_vftable__for__IHoverBehaviorTarget__;
  ((UInteractionMechanic *)((longlong)this + 0x60))->_padding_ = 2;
  *(longlong *)((longlong)this + 0x68) = 0;
  *(longlong *)((longlong)this + 0x70) = 0;
  *(longlong *)((longlong)this + 0x78) = 0;
  *(longlong *)((longlong)this + 0x80) = 2;
  ((FWeakObjectPtr *)((longlong)this + 0x88))->ObjectIndex = 0;
  ((FWeakObjectPtr *)((longlong)this + 0x88))->ObjectSerialNumber = 0;
  ((UInteractionMechanic *)((longlong)this + 0x90))->_padding_ = 0;
  *(longlong *)((longlong)this + 0x98) = 0;
  *(undefined1 *)((longlong)this + 0xa0) = 1;
  *(longlong *)((longlong)this + 0xb0) = 0;
  *(longlong *)((longlong)this + 0xd8) = 0;
  *(longlong *)((longlong)this + 0xe0) = 0;
  ((FWeakObjectPtr *)((longlong)this + 0xe8))->ObjectIndex = 0;
  ((FWeakObjectPtr *)((longlong)this + 0xe8))->ObjectSerialNumber = 0;
  ((UInteractionMechanic *)((longlong)this + 0xf0))->_padding_ = 0;
  *(undefined4 *)((longlong)this + 0xf8) = 0;
  *(undefined4 *)((longlong)this + 0xfc) = 100;
  *(longlong *)((longlong)this + 0x100) = 0;
  *(longlong *)((longlong)this + 0x128) = 0;
  *(undefined ***)((longlong)this + 0x110) =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  ((TWeakObjectPtr<UInteractiveTool,FWeakObjectPtr> *)((longlong)this + 0x118))->WeakPtr =
       (FWeakObjectPtr)UMeshTopologySelectionMechanic::<lambda_27_>::<lambda_invoker_cdecl>;
  if ((TWeakObjectPtr<UInteractiveTool,FWeakObjectPtr> *)((longlong)this + 0x118) !=
      (TWeakObjectPtr<UInteractiveTool,FWeakObjectPtr> *)0x0) {
    *(code **)((longlong)this + 0x100) =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(longlong *)((longlong)this + 0x130) = 0;
  *(longlong *)((longlong)this + 0x158) = 0;
  *(undefined ***)((longlong)this + 0x140) =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  ((TWeakObjectPtr<UInteractiveTool,FWeakObjectPtr> *)((longlong)this + 0x148))->WeakPtr =
       (FWeakObjectPtr)UMeshTopologySelectionMechanic::<lambda_28_>::<lambda_invoker_cdecl>;
  if ((TWeakObjectPtr<UInteractiveTool,FWeakObjectPtr> *)((longlong)this + 0x148) !=
      (TWeakObjectPtr<UInteractiveTool,FWeakObjectPtr> *)0x0) {
    *(code **)((longlong)this + 0x130) =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(longlong *)((longlong)this + 0x160) = 0;
  *(longlong *)((longlong)this + 0x188) = 0;
  *(undefined ***)((longlong)this + 0x170) =
       &
       ___7__TFunction_OwnedObject_V<lambda_29_>_UMeshTopologySelectionMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  *(FWeakObjectPtr *)((longlong)this + 0x178) = this;
  if ((FWeakObjectPtr *)((longlong)this + 0x178) != (FWeakObjectPtr *)0x0) {
    *(code **)((longlong)this + 0x160) =
         UE::Core::Private::Function::
         TFunctionRefCaller<UMeshTopologySelectionMechanic::<lambda_29_>,bool>::Call;
  }
  *(undefined8 *)((longlong)this + 400) = 0;
  *(undefined8 *)((longlong)this + 0x1b8) = 0;
  *(undefined ***)((longlong)this + 0x1a0) =
       &
       ___7__TFunction_OwnedObject_V<lambda_30_>_UMeshTopologySelectionMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  *(FWeakObjectPtr *)((longlong)this + 0x1a8) = this;
  if ((FWeakObjectPtr *)((longlong)this + 0x1a8) != (FWeakObjectPtr *)0x0) {
    *(code **)((longlong)this + 400) =
         UE::Core::Private::Function::
         TFunctionRefCaller<UMeshTopologySelectionMechanic::<lambda_30_>,bool>::Call;
  }
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)this + 0x1c0) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)this + 0x1c8) = (double)fVar1;
  *(double *)((longlong)this + 0x1d0) = (double)fVar2;
  *(double *)((longlong)this + 0x1d8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)this + 0x1e0) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)this + 0x1e8) = (double)fVar1;
  *(double *)((longlong)this + 0x1f0) = (double)fVar2;
  *(double *)((longlong)this + 0x1f8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)this + 0x200) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)this + 0x208) = (double)fVar1;
  *(double *)((longlong)this + 0x210) = (double)fVar2;
  *(double *)((longlong)this + 0x218) = (double)fVar3;
  *(undefined8 *)((longlong)this + 0x220) = 0;
  *(undefined8 *)((longlong)this + 0x248) = 0;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)((longlong)this + 0x250));
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)((longlong)this + 0x340));
  *(undefined4 *)((longlong)this + 0x430) = 0;
  *(undefined8 *)((longlong)this + 0x438) = 0;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)((longlong)this + 0x440));
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)((longlong)this + 0x530));
  *(undefined4 *)((longlong)this + 0x620) = 0x1010101;
  *(undefined2 *)((longlong)this + 0x624) = 0;
  *(undefined1 *)((longlong)this + 0x626) = 0;
  *(undefined8 *)((longlong)this + 0x630) = 0;
  *(undefined8 *)((longlong)this + 0x628) = 0;
  *(undefined8 *)((longlong)this + 0x648) = 0;
  *(undefined4 *)((longlong)this + 0x650) = 0;
  *(undefined4 *)((longlong)this + 0x654) = 0x80;
  *(undefined4 *)((longlong)this + 0x658) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x65c) = 0;
  *(undefined8 *)((longlong)this + 0x668) = 0;
  *(undefined4 *)((longlong)this + 0x670) = 0;
  *(undefined8 *)((longlong)this + 0x6c8) = 0;
  *(undefined1 *)((longlong)this + 0x678) = 0;
  *(undefined8 *)((longlong)this + 0x6b0) = 0;
  *(undefined8 *)((longlong)this + 0x6b8) = 0;
  *(undefined8 *)((longlong)this + 0x6c0) = 0;
  *(undefined8 *)((longlong)this + 0x6e0) = 0;
  *(undefined4 *)((longlong)this + 0x6e8) = 0;
  *(undefined4 *)((longlong)this + 0x6ec) = 0x80;
  *(undefined4 *)((longlong)this + 0x6f0) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x6f4) = 0;
  *(undefined8 *)((longlong)this + 0x700) = 0;
  *(undefined4 *)((longlong)this + 0x708) = 0;
  *(undefined8 *)((longlong)this + 0x720) = 0;
  *(undefined8 *)((longlong)this + 0x728) = 0;
  *(undefined8 *)((longlong)this + 0x730) = 0;
  *(undefined8 *)((longlong)this + 0x758) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)this + 0x710) = 0;
  *(undefined8 *)((longlong)this + 0x740) = 0;
  *(undefined8 *)((longlong)this + 0x748) = 0;
  *(undefined8 *)((longlong)this + 0x750) = 0;
  *(undefined4 *)((longlong)this + 0x760) = 0x42b40000;
  *(undefined4 *)((longlong)this + 0x764) = 0x42c80000;
  *(undefined4 *)((longlong)this + 0x768) = 0x3f800000;
  *(undefined2 *)((longlong)this + 0x76c) = 0;
  *(undefined8 *)((longlong)this + 0x770) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)this + 0x780) = 0x1010000;
  FToolDataVisualizer::FToolDataVisualizer((FToolDataVisualizer *)((longlong)this + 0x790));
  FToolDataVisualizer::FToolDataVisualizer((FToolDataVisualizer *)((longlong)this + 0x8c0));
  FToolDataVisualizer::FToolDataVisualizer((FToolDataVisualizer *)((longlong)this + 0x9f0));
  *(undefined1 *)((longlong)this + 0xb20) = 1;
  return;
}

// InternalConstructor<UMeshTopologySelectionMechanicProperties> @ 14cb5eb50

void __cdecl
InternalConstructor<UMeshTopologySelectionMechanicProperties>(FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet *this;
  
  this = (UInteractiveToolPropertySet *)param_1->Obj;
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x10101;
    this->_padding_ = (longlong)&___7UMeshTopologySelectionMechanicProperties__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x1010100;
    *(undefined4 *)&this[1]._padding_ = 0x1000101;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
  }
  return;
}

// InternalConstructor<UModelingSceneSnappingManager> @ 14cb5ebc0

void __cdecl InternalConstructor<UModelingSceneSnappingManager>(FObjectInitializer *param_1)

{
  USceneSnappingManager *this;
  
  this = (USceneSnappingManager *)param_1->Obj;
  if (this != (USceneSnappingManager *)0x0) {
    USceneSnappingManager::USceneSnappingManager(this,param_1);
    *(undefined ***)this = &___7UModelingSceneSnappingManager__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0xc = 0x80;
    *(undefined4 *)&this[5].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[5].field_0x14 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined4 *)(this + 6) = 0;
    this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined4 *)&this[7].field_0x10 = 0;
    *(undefined4 *)&this[7].field_0x14 = 0x80;
    *(undefined4 *)&this[7].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[7].field_0x1c = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)&this[8].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UPolygonSelectionMechanic> @ 14cb5ecd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPolygonSelectionMechanic>(FObjectInitializer *param_1)

{
  UMeshTopologySelectionMechanic *this;
  
  this = (UMeshTopologySelectionMechanic *)param_1->Obj;
  if (this != (UMeshTopologySelectionMechanic *)0x0) {
    UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic(this);
    *(undefined ***)this = &UPolygonSelectionMechanic::_vftable__for__UInteractionMechanic__;
    *(undefined ***)&this->field_0x30 =
         &UPolygonSelectionMechanic::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this->field_0x38 =
         &UPolygonSelectionMechanic::_vftable__for__IHoverBehaviorTarget__;
  }
  return;
}

// InternalConstructor<UToolHostCustomizationAPI> @ 14cb5ed20

void __cdecl InternalConstructor<UToolHostCustomizationAPI>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UToolHostCustomizationAPI__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UBoundarySelectionMechanic> @ 14cb5ed50

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

UObject * __cdecl InternalVTableHelperCtorCaller<UBoundarySelectionMechanic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshTopologySelectionMechanic *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBoundarySelectionMechanic::GetPrivateStaticClass();
  this = (UMeshTopologySelectionMechanic *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshTopologySelectionMechanic *)0x0) {
    UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic(this,param_1);
    *(undefined ***)this = &UBoundarySelectionMechanic::_vftable__for__UInteractionMechanic__;
    *(undefined ***)&this->field_0x30 =
         &UBoundarySelectionMechanic::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this->field_0x38 =
         &UBoundarySelectionMechanic::_vftable__for__IHoverBehaviorTarget__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_PolygonSelectionMechanicProperties> @ 14cb5ee10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_PolygonSelectionMechanicProperties>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_PolygonSelectionMechanicProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x10101;
    this->_padding_ = (longlong)&___7UDEPRECATED_PolygonSelectionMechanicProperties__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x1010100;
    *(undefined4 *)&this[1]._padding_ = 0x1000101;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDynamicMeshProvider> @ 14cb5eef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDynamicMeshProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDynamicMeshProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDynamicMeshProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometrySelectionManager> @ 14cb5efa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGeometrySelectionManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGeometrySelectionManager *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometrySelectionManager::GetPrivateStaticClass();
  pUVar3 = (UGeometrySelectionManager *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UGeometrySelectionManager *)0x0) {
    pUVar3 = UGeometrySelectionManager::UGeometrySelectionManager(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanic> @ 14cb5f040

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
InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshTopologySelectionMechanic *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshTopologySelectionMechanic::GetPrivateStaticClass();
  pUVar3 = (UMeshTopologySelectionMechanic *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMeshTopologySelectionMechanic *)0x0) {
    pUVar3 = UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanicProperties> @ 14cb5f0e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanicProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveToolPropertySet *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshTopologySelectionMechanicProperties::GetPrivateStaticClass();
  this = (UInteractiveToolPropertySet *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolPropertySet *)0x0) {
    UInteractiveToolPropertySet::UInteractiveToolPropertySet(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x10101;
    this->_padding_ = (longlong)&___7UMeshTopologySelectionMechanicProperties__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x1010100;
    *(undefined4 *)&this[1]._padding_ = 0x1000101;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModelingSceneSnappingManager> @ 14cb5f1c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UModelingSceneSnappingManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModelingSceneSnappingManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    USceneSnappingManager::USceneSnappingManager((USceneSnappingManager *)pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UModelingSceneSnappingManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x14 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0x10 = 0;
    *(undefined4 *)&pUVar1[7].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[7].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined4 *)&pUVar1[8].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPolygonSelectionMechanic> @ 14cb5f350

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

UObject * __cdecl InternalVTableHelperCtorCaller<UPolygonSelectionMechanic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshTopologySelectionMechanic *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPolygonSelectionMechanic::GetPrivateStaticClass();
  this = (UMeshTopologySelectionMechanic *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshTopologySelectionMechanic *)0x0) {
    UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic(this,param_1);
    *(undefined ***)this = &UPolygonSelectionMechanic::_vftable__for__UInteractionMechanic__;
    *(undefined ***)&this->field_0x30 =
         &UPolygonSelectionMechanic::_vftable__for__IClickBehaviorTarget__;
    *(undefined ***)&this->field_0x38 =
         &UPolygonSelectionMechanic::_vftable__for__IHoverBehaviorTarget__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UToolHostCustomizationAPI> @ 14cb5f410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UToolHostCustomizationAPI>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UToolHostCustomizationAPI::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UToolHostCustomizationAPI__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeBoundsFromIndices<TArray<int,TSizedDefaultAllocator<32>_>,`UE::Geometry::ComputeBoundsFromVertexROI'::__l5::<lambda_1>_> @ 14cb5f4c0

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::TAxisAlignedBox3<double>::
MakeBoundsFromIndices<TArray<int,TSizedDefaultAllocator<32>_>,_UE::Geometry::ComputeBoundsFromVertexROI_::__l5::<lambda_1>_>
          (TAxisAlignedBox3<double> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> *param_2)

{
  double *pdVar1;
  int iVar2;
  TTransform<double> *pTVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar5 = pFVar13 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar5) break;
    pTVar3 = param_2->Transform;
    uVar12 = (ulonglong)(*(uint *)pFVar13 & 0x1ff);
    auVar22 = *(undefined1 (*) [16])(pTVar3->Rotation).ZW.m128d_f64;
    auVar14 = *(undefined1 (*) [16])(pTVar3->Rotation).XY.m128d_f64;
    auVar18 = *(undefined1 (*) [16])(pTVar3->Rotation).XY.m128d_f64;
    dVar11 = (pTVar3->Rotation).ZW.m128d_f64[1];
    auVar16 = blendpd(auVar14,auVar22,2);
    lVar4 = *(longlong *)
             ((param_2->Mesh->Vertices).Blocks.AllocatorInstance.Data +
             (ulonglong)(*(uint *)pFVar13 >> 9) * 8);
    pdVar1 = (double *)(lVar4 + uVar12 * 0x18);
    dVar7 = *pdVar1 * (pTVar3->Scale3D).XY.m128d_f64[0];
    dVar8 = pdVar1[1] * (pTVar3->Scale3D).XY.m128d_f64[1];
    uVar27 = (undefined4)((ulonglong)dVar8 >> 0x20);
    dVar23 = *(double *)(lVar4 + 0x10 + uVar12 * 0x18) * (pTVar3->Scale3D).ZW.m128d_f64[0];
    dVar6 = (pTVar3->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar24._8_4_ = SUB84(dVar8,0);
    auVar24._0_8_ = dVar7;
    auVar24._12_4_ = uVar27;
    dVar9 = auVar22._0_8_;
    auVar25._0_8_ = auVar24._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar7;
    auVar25._8_8_ = dVar23 * auVar14._8_8_ - dVar9 * dVar8;
    auVar19._8_4_ = SUB84(dVar8,0);
    auVar19._0_8_ = dVar7;
    auVar19._12_4_ = uVar27;
    auVar14._8_4_ = SUB84(dVar6,0);
    auVar14._0_8_ = dVar23;
    auVar14._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar14 = blendpd(auVar19,auVar14,2);
    auVar15._0_8_ = auVar14._0_8_ * dVar9 - auVar16._0_8_ * dVar23;
    auVar15._8_8_ = auVar14._8_8_ * auVar22._8_8_ - auVar16._8_8_ * dVar6;
    auVar14 = blendpd(auVar25,auVar15,2);
    dVar6 = auVar25._8_8_ + auVar25._8_8_;
    dVar10 = auVar15._0_8_ + auVar15._0_8_;
    uVar27 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar26._0_8_ = auVar14._0_8_ + auVar14._0_8_;
    auVar26._8_8_ = auVar14._8_8_ + auVar14._8_8_;
    auVar20._8_4_ = SUB84(dVar10,0);
    auVar20._0_8_ = dVar6;
    auVar20._12_4_ = uVar27;
    auVar17._8_4_ = SUB84(dVar10,0);
    auVar17._0_8_ = dVar6;
    auVar17._12_4_ = uVar27;
    auVar14 = blendpd(auVar17,auVar26,2);
    auVar21._0_8_ = auVar20._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar6;
    auVar21._8_8_ = auVar26._0_8_ * auVar18._8_8_ - dVar9 * dVar10;
    auVar16._8_4_ = SUB84(auVar21._8_8_,0);
    auVar16._0_8_ = auVar21._0_8_;
    auVar16._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
    auVar19 = blendpd(auVar18,auVar22,2);
    auVar18._0_8_ = auVar14._0_8_ * dVar9 - auVar19._0_8_ * auVar26._0_8_;
    auVar18._8_8_ = auVar14._8_8_ * auVar22._8_8_ - auVar19._8_8_ * auVar26._8_8_;
    auVar22 = blendpd(auVar21,auVar18,2);
    dVar9 = dVar6 * dVar11 + dVar7 + auVar16._8_8_ + (pTVar3->Translation).XY.m128d_f64[0];
    dVar6 = dVar10 * dVar11 + dVar8 + auVar18._0_8_ + (pTVar3->Translation).XY.m128d_f64[1];
    dVar23 = auVar26._0_8_ * dVar11 + dVar23 + auVar22._0_8_ + (pTVar3->Translation).ZW.m128d_f64[0]
    ;
    if (dVar9 < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar9;
    }
    if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= dVar9 &&
        dVar9 != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar9;
    }
    if (dVar6 < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar6;
    }
    pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
    if (*pdVar1 <= dVar6 && dVar6 != *pdVar1) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar6;
    }
    if (dVar23 < (__return_storage_ptr__->Min).field0_0x0._s_0.Z) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar23;
    }
    pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
    if (*pdVar1 <= dVar23 && dVar23 != *pdVar1) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar23;
    }
    pFVar13 = pFVar13 + 4;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,FSceneDynamicMeshSpatial> @ 14cb5f730

TIntrusiveReferenceController<FSceneDynamicMeshSpatial,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,FSceneDynamicMeshSpatial>(void)

{
  uchar *puVar1;
  TDynamicVector<int,512> *pTVar2;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  TIntrusiveReferenceController<FSceneDynamicMeshSpatial,1> *pTVar6;
  
  pTVar6 = ::operator_new(0x180);
  if (pTVar6 != (TIntrusiveReferenceController<FSceneDynamicMeshSpatial,1> *)0x0) {
    *(undefined4 *)&pTVar6->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSceneDynamicMeshSpatial___00_SharedPointerInternals__6B_
    ;
    memset((pTVar6->ObjectStorage).Pad + 0xc,0,0x164);
    *(undefined ***)(pTVar6->ObjectStorage).Pad = &___7ISceneGeometrySpatial_Geometry_UE__6B_;
    (pTVar6->ObjectStorage).Pad[8] = '\0';
    (pTVar6->ObjectStorage).Pad[9] = '\0';
    (pTVar6->ObjectStorage).Pad[10] = '\0';
    (pTVar6->ObjectStorage).Pad[0xb] = '\0';
    LOCK();
    UNLOCK();
    aVar5 = (atomic<int>)((int)UE::Geometry::ISceneGeometrySpatial::UniqueIDGenerator + 1);
    *(atomic<int> *)((pTVar6->ObjectStorage).Pad + 8) =
         UE::Geometry::ISceneGeometrySpatial::UniqueIDGenerator;
    UE::Geometry::ISceneGeometrySpatial::UniqueIDGenerator = aVar5;
    *(undefined ***)(pTVar6->ObjectStorage).Pad = &___7FSceneDynamicMeshSpatial__6B_;
    (pTVar6->ObjectStorage).Pad[0x10] = '\0';
    (pTVar6->ObjectStorage).Pad[0x11] = '\0';
    (pTVar6->ObjectStorage).Pad[0x12] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14] = '\0';
    (pTVar6->ObjectStorage).Pad[0x15] = '\0';
    (pTVar6->ObjectStorage).Pad[0x16] = '\0';
    (pTVar6->ObjectStorage).Pad[0x17] = '\0';
    (pTVar6->ObjectStorage).Pad[0x18] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x19] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x1a] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x1b] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x1c] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x1d] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x1e] = 0xef;
    (pTVar6->ObjectStorage).Pad[0x1f] = '\x7f';
    (pTVar6->ObjectStorage).Pad[0x20] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x21] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x22] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x23] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x24] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x25] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x26] = 0xef;
    (pTVar6->ObjectStorage).Pad[0x27] = '\x7f';
    (pTVar6->ObjectStorage).Pad[0x28] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x29] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x2a] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x2b] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x2c] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x2d] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x2e] = 0xef;
    (pTVar6->ObjectStorage).Pad[0x2f] = '\x7f';
    (pTVar6->ObjectStorage).Pad[0x30] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x31] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x32] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x33] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x34] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x35] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x36] = 0xef;
    (pTVar6->ObjectStorage).Pad[0x37] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x38] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x39] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x3a] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x3b] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x3c] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x3d] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x3e] = 0xef;
    (pTVar6->ObjectStorage).Pad[0x3f] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x40] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x41] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x42] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x43] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x44] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x45] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x46] = 0xef;
    (pTVar6->ObjectStorage).Pad[0x47] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x60] = '\0';
    (pTVar6->ObjectStorage).Pad[0x61] = '\0';
    (pTVar6->ObjectStorage).Pad[0x62] = '\0';
    (pTVar6->ObjectStorage).Pad[99] = '\0';
    (pTVar6->ObjectStorage).Pad[100] = '\0';
    (pTVar6->ObjectStorage).Pad[0x65] = '\0';
    (pTVar6->ObjectStorage).Pad[0x66] = 0xf0;
    (pTVar6->ObjectStorage).Pad[0x67] = '?';
    (pTVar6->ObjectStorage).Pad[0x48] = '\0';
    (pTVar6->ObjectStorage).Pad[0x49] = '\0';
    (pTVar6->ObjectStorage).Pad[0x4a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x4b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x4c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x4d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x4e] = '\0';
    (pTVar6->ObjectStorage).Pad[0x4f] = '\0';
    (pTVar6->ObjectStorage).Pad[0x50] = '\0';
    (pTVar6->ObjectStorage).Pad[0x51] = '\0';
    (pTVar6->ObjectStorage).Pad[0x52] = '\0';
    (pTVar6->ObjectStorage).Pad[0x53] = '\0';
    (pTVar6->ObjectStorage).Pad[0x54] = '\0';
    (pTVar6->ObjectStorage).Pad[0x55] = '\0';
    (pTVar6->ObjectStorage).Pad[0x56] = '\0';
    (pTVar6->ObjectStorage).Pad[0x57] = '\0';
    (pTVar6->ObjectStorage).Pad[0x58] = '\0';
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (pTVar6->ObjectStorage).Pad[0x59] = '\0';
    (pTVar6->ObjectStorage).Pad[0x5a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x5b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x5c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x5d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x5e] = '\0';
    (pTVar6->ObjectStorage).Pad[0x5f] = '\0';
    *(double *)((pTVar6->ObjectStorage).Pad + 0x68) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((pTVar6->ObjectStorage).Pad + 0x70) = uVar4;
    *(double *)((pTVar6->ObjectStorage).Pad + 0x78) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)((pTVar6->ObjectStorage).Pad + 0x80) =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    *(undefined8 *)((pTVar6->ObjectStorage).Pad + 0x88) = uVar4;
    *(double *)((pTVar6->ObjectStorage).Pad + 0x90) =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined ***)((pTVar6->ObjectStorage).Pad + 0xa0) =
         &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    (pTVar6->ObjectStorage).Pad[0xb0] = '\0';
    (pTVar6->ObjectStorage).Pad[0xb1] = '\0';
    (pTVar6->ObjectStorage).Pad[0xb2] = '\0';
    (pTVar6->ObjectStorage).Pad[0xb3] = '\0';
    (pTVar6->ObjectStorage).Pad[0xb4] = '\0';
    (pTVar6->ObjectStorage).Pad[0xb5] = '\0';
    (pTVar6->ObjectStorage).Pad[0xb6] = '\0';
    (pTVar6->ObjectStorage).Pad[0xb7] = '\0';
    (pTVar6->ObjectStorage).Pad[0xb8] = '\x03';
    (pTVar6->ObjectStorage).Pad[0xb9] = '\0';
    (pTVar6->ObjectStorage).Pad[0xba] = '\0';
    (pTVar6->ObjectStorage).Pad[0xbb] = '\0';
    (pTVar6->ObjectStorage).Pad[0xc0] = '\0';
    (pTVar6->ObjectStorage).Pad[0xc1] = '\0';
    (pTVar6->ObjectStorage).Pad[0xc2] = '\0';
    (pTVar6->ObjectStorage).Pad[0xc3] = '\0';
    (pTVar6->ObjectStorage).Pad[0xc4] = '\0';
    (pTVar6->ObjectStorage).Pad[0xc5] = '\0';
    (pTVar6->ObjectStorage).Pad[0xc6] = '\0';
    (pTVar6->ObjectStorage).Pad[199] = '\0';
    (pTVar6->ObjectStorage).Pad[0xe8] = '\0';
    (pTVar6->ObjectStorage).Pad[0xe9] = '\0';
    (pTVar6->ObjectStorage).Pad[0xea] = '\0';
    (pTVar6->ObjectStorage).Pad[0xeb] = '\0';
    (pTVar6->ObjectStorage).Pad[0xec] = '\0';
    (pTVar6->ObjectStorage).Pad[0xed] = '\0';
    (pTVar6->ObjectStorage).Pad[0xee] = '\0';
    (pTVar6->ObjectStorage).Pad[0xef] = '\0';
    *(undefined ***)((pTVar6->ObjectStorage).Pad + 0xd0) =
         &
         ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    puVar1 = (pTVar6->ObjectStorage).Pad + 0xd8;
    *(code **)puVar1 =
         `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::MakeDefaultSplitAxisFunc'::__l2
         ::<lambda_1>::<lambda_invoker_cdecl>;
    if (puVar1 != (uchar *)0x0) {
      *(code **)((pTVar6->ObjectStorage).Pad + 0xc0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
           ::Call;
    }
    pTVar2 = (TDynamicVector<int,512> *)((pTVar6->ObjectStorage).Pad + 0xf8);
    (pTVar6->ObjectStorage).Pad[0xf0] = ':';
    (pTVar6->ObjectStorage).Pad[0xf1] = 0x8c;
    (pTVar6->ObjectStorage).Pad[0xf2] = '0';
    (pTVar6->ObjectStorage).Pad[0xf3] = 0xe2;
    (pTVar6->ObjectStorage).Pad[0xf4] = 0x8e;
    (pTVar6->ObjectStorage).Pad[0xf5] = 'y';
    (pTVar6->ObjectStorage).Pad[0xf6] = 'E';
    (pTVar6->ObjectStorage).Pad[0xf7] = '>';
    pTVar2->CurBlock = 0;
    pTVar2->CurBlockUsed = 0;
    (pTVar6->ObjectStorage).Pad[0x100] = '\0';
    (pTVar6->ObjectStorage).Pad[0x101] = '\0';
    (pTVar6->ObjectStorage).Pad[0x102] = '\0';
    (pTVar6->ObjectStorage).Pad[0x103] = '\0';
    (pTVar6->ObjectStorage).Pad[0x104] = '\0';
    (pTVar6->ObjectStorage).Pad[0x105] = '\0';
    (pTVar6->ObjectStorage).Pad[0x106] = '\0';
    (pTVar6->ObjectStorage).Pad[0x107] = '\0';
    (pTVar6->ObjectStorage).Pad[0x108] = '\0';
    (pTVar6->ObjectStorage).Pad[0x109] = '\0';
    (pTVar6->ObjectStorage).Pad[0x10a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x10b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x10c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x10d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x10e] = '\0';
    (pTVar6->ObjectStorage).Pad[0x10f] = '\0';
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
    pTVar3 = (TDynamicVector<UE::Math::TVector<double>,512> *)((pTVar6->ObjectStorage).Pad + 0x110);
    pTVar3->CurBlock = 0;
    pTVar3->CurBlockUsed = 0;
    (pTVar6->ObjectStorage).Pad[0x118] = '\0';
    (pTVar6->ObjectStorage).Pad[0x119] = '\0';
    (pTVar6->ObjectStorage).Pad[0x11a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x11b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x11c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x11d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x11e] = '\0';
    (pTVar6->ObjectStorage).Pad[0x11f] = '\0';
    (pTVar6->ObjectStorage).Pad[0x120] = '\0';
    (pTVar6->ObjectStorage).Pad[0x121] = '\0';
    (pTVar6->ObjectStorage).Pad[0x122] = '\0';
    (pTVar6->ObjectStorage).Pad[0x123] = '\0';
    (pTVar6->ObjectStorage).Pad[0x124] = '\0';
    (pTVar6->ObjectStorage).Pad[0x125] = '\0';
    (pTVar6->ObjectStorage).Pad[0x126] = '\0';
    (pTVar6->ObjectStorage).Pad[0x127] = '\0';
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar3);
    pTVar3 = (TDynamicVector<UE::Math::TVector<double>,512> *)((pTVar6->ObjectStorage).Pad + 0x128);
    pTVar3->CurBlock = 0;
    pTVar3->CurBlockUsed = 0;
    (pTVar6->ObjectStorage).Pad[0x130] = '\0';
    (pTVar6->ObjectStorage).Pad[0x131] = '\0';
    (pTVar6->ObjectStorage).Pad[0x132] = '\0';
    (pTVar6->ObjectStorage).Pad[0x133] = '\0';
    (pTVar6->ObjectStorage).Pad[0x134] = '\0';
    (pTVar6->ObjectStorage).Pad[0x135] = '\0';
    (pTVar6->ObjectStorage).Pad[0x136] = '\0';
    (pTVar6->ObjectStorage).Pad[0x137] = '\0';
    (pTVar6->ObjectStorage).Pad[0x138] = '\0';
    (pTVar6->ObjectStorage).Pad[0x139] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13e] = '\0';
    (pTVar6->ObjectStorage).Pad[0x13f] = '\0';
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar3);
    pTVar2 = (TDynamicVector<int,512> *)((pTVar6->ObjectStorage).Pad + 0x140);
    pTVar2->CurBlock = 0;
    pTVar2->CurBlockUsed = 0;
    (pTVar6->ObjectStorage).Pad[0x148] = '\0';
    (pTVar6->ObjectStorage).Pad[0x149] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14a] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14b] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14c] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14d] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14e] = '\0';
    (pTVar6->ObjectStorage).Pad[0x14f] = '\0';
    (pTVar6->ObjectStorage).Pad[0x150] = '\0';
    (pTVar6->ObjectStorage).Pad[0x151] = '\0';
    (pTVar6->ObjectStorage).Pad[0x152] = '\0';
    (pTVar6->ObjectStorage).Pad[0x153] = '\0';
    (pTVar6->ObjectStorage).Pad[0x154] = '\0';
    (pTVar6->ObjectStorage).Pad[0x155] = '\0';
    (pTVar6->ObjectStorage).Pad[0x156] = '\0';
    (pTVar6->ObjectStorage).Pad[0x157] = '\0';
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
    (pTVar6->ObjectStorage).Pad[0x158] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x159] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x15a] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x15b] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x15c] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x15d] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x15e] = 0xff;
    (pTVar6->ObjectStorage).Pad[0x15f] = 0xff;
    (pTVar6->ObjectStorage).Pad[0xa8] = '\0';
    (pTVar6->ObjectStorage).Pad[0xa9] = '\0';
    (pTVar6->ObjectStorage).Pad[0xaa] = '\0';
    (pTVar6->ObjectStorage).Pad[0xab] = '\0';
    (pTVar6->ObjectStorage).Pad[0xac] = '\0';
    (pTVar6->ObjectStorage).Pad[0xad] = '\0';
    (pTVar6->ObjectStorage).Pad[0xae] = '\0';
    (pTVar6->ObjectStorage).Pad[0xaf] = '\0';
    return pTVar6;
  }
  return (TIntrusiveReferenceController<FSceneDynamicMeshSpatial,1> *)0x0;
}

// NewObject<UGeometrySelectionEditCommandArguments> @ 14cb5f930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGeometrySelectionEditCommandArguments * __cdecl
NewObject<UGeometrySelectionEditCommandArguments>(UObject *param_1)

{
  UClass *pUVar1;
  UGeometrySelectionEditCommandArguments *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UGeometrySelectionEditCommandArguments_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGeometrySelectionEditCommandArguments *)
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

// NewObject<UMeshTopologySelectionMechanicProperties> @ 14cb5f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMeshTopologySelectionMechanicProperties * __cdecl
NewObject<UMeshTopologySelectionMechanicProperties>(UObject *param_1)

{
  UClass *pUVar1;
  UMeshTopologySelectionMechanicProperties *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMeshTopologySelectionMechanicProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMeshTopologySelectionMechanicProperties *)
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

// NewObject<UModelingSceneSnappingManager> @ 14cb5fa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UModelingSceneSnappingManager * __cdecl NewObject<UModelingSceneSnappingManager>(UObject *param_1)

{
  UClass *pUVar1;
  UModelingSceneSnappingManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UModelingSceneSnappingManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UModelingSceneSnappingManager *)
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

// StaticEnum<enum_EMarqueeSelectionUpdateType> @ 14cb60810

UEnum * __cdecl StaticEnum<enum_EMarqueeSelectionUpdateType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelingComponents();
    Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EMarqueeSelectionUpdateType,
                       (UObject *)pUVar1,L"EMarqueeSelectionUpdateType");
  }
  return Z_Registration_Info_UEnum_EMarqueeSelectionUpdateType.OuterSingleton;
}

// ~TFunction_OwnedObject<``FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1> @ 14cb63be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__FDynamicMeshPolygroupTransformer::UpdateTransform_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FDynamicMeshPolygroupTransformer::UpdateTransform'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshComponentSelectorFactory::BuildForTarget'::__l2::<lambda_1>,1,0> @ 14cb63c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentSelectorFactory::BuildForTarget'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FDynamicMeshComponentSelectorFactory::BuildForTarget_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshComponentSelectorFactory::BuildForTarget'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition'::__l2::<lambda_1>,0,0> @ 14cb63c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMeshTopologySelector::DoCornerBasedSelection'::__l2::<lambda_1>,0,0> @ 14cb63c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::DoCornerBasedSelection'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FMeshTopologySelector::DoCornerBasedSelection_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::DoCornerBasedSelection'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMeshTopologySelector::DoEdgeBasedSelection'::__l2::<lambda_1>,0,0> @ 14cb63c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::DoEdgeBasedSelection'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FMeshTopologySelector::DoEdgeBasedSelection_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::DoEdgeBasedSelection'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Initialize'::__l2::<lambda_1>,0,0> @ 14cb63c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Initialize'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UMeshTopologySelectionMechanic::Initialize_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Initialize'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_1>,0,0> @ 14cb63ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UMeshTopologySelectionMechanic::Setup_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,0,0> @ 14cb63cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,0,0> @ 14cb63ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>,0,0> @ 14cb63d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FMeshTopologySelector::FindSelectedElement_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`IsOccluded'::__l5::<lambda_1>,0,0> @ 14cb63d20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`IsOccluded'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_IsOccluded_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`IsOccluded'::`5'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMeshTopologySelectionMechanic::OnDragRectangleChanged'::__l7::<lambda_1>,0,1> @ 14cb63d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::OnDragRectangleChanged'::__l7::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UMeshTopologySelectionMechanic::OnDragRectangleChanged_::__l7::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::OnDragRectangleChanged'::`7'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBaseDynamicMeshSelector::RayHitTest'::__l7::<lambda_1>,0,0> @ 14cb63d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseDynamicMeshSelector::RayHitTest'::__l7::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FBaseDynamicMeshSelector::RayHitTest_::__l7::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBaseDynamicMeshSelector::RayHitTest'::`7'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGroupTopologySelector::DrawSelection'::__l30::<lambda_1>,0,1> @ 14cb63d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGroupTopologySelector::DrawSelection'::__l30::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FGroupTopologySelector::DrawSelection_::__l30::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGroupTopologySelector::DrawSelection'::`30'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_2>,0,0> @ 14cb63dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UMeshTopologySelectionMechanic::Setup_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l5::<lambda_2>,0,0> @ 14cb63de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_3>,0,0> @ 14cb63e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UMeshTopologySelectionMechanic::Setup_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_3>,0,1> @ 14cb63e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_3>,0,1>::
~TFunction_OwnedObject<_FMeshTopologySelector::FindSelectedElement_::__l11::<lambda_3>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`11'::<lambda_3>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_4>,0,0> @ 14cb63e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UMeshTopologySelectionMechanic::Setup_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_4>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_4>,0,1> @ 14cb63e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_4>,0,1>::
~TFunction_OwnedObject<_FMeshTopologySelector::FindSelectedElement_::__l11::<lambda_4>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`11'::<lambda_4>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_54_>,0,0> @ 14cb63ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_54_>,0,0>
::
~TFunction_OwnedObject<_FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>_::__l1::<lambda_54_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_54_>__0_____0_NX___TPropertyWatcher__N_FWatchablePropertySet__QEAA_AEB_NV__TFunction___A6AXAEB_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_5>,0,0> @ 14cb63ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UMeshTopologySelectionMechanic::Setup_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_5>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l18::<lambda_5>,0,0> @ 14cb63ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l18::<lambda_5>,0,0>::
~TFunction_OwnedObject<_FMeshTopologySelector::FindSelectedElement_::__l18::<lambda_5>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`18'::<lambda_5>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_6>,0,0> @ 14cb63f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_UMeshTopologySelectionMechanic::Setup_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_6>,0,0>::
        _vftable_;
  return;
}

// operator() @ 14cb66450

TVector<double> * __thiscall
``FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  TVector<double> *pTVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  int local_res20 [2];
  
  lVar3 = *(longlong *)this;
  if (*(int *)(lVar3 + 0x170) != *(int *)(lVar3 + 0x19c)) {
    lVar14 = *(longlong *)(lVar3 + 0x1a8);
    if (*(longlong *)(lVar3 + 0x1a8) == 0) {
      lVar14 = lVar3 + 0x1a0;
    }
    iVar9 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar3 + 0x1b0) - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar12 = (int *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar3 + 0x168));
        if (*piVar12 == param_2) {
          puVar10 = (uint *)(piVar12 + 1);
          if (piVar12 == (int *)0x0) {
            puVar10 = (uint *)0x0;
          }
          if (puVar10 != (uint *)0x0) {
            uVar2 = *puVar10;
            puVar4 = *(undefined8 **)((longlong)this + 8);
            uVar5 = *(undefined8 *)((longlong)this + 0x10);
            uVar13 = 0;
            if ((int)uVar2 < *(int *)(lVar3 + 0x60)) {
              uVar13 = ~uVar2 >> 0x1f;
            }
            if (uVar13 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                pTVar11 = (TVector<double> *)(*pcVar6)();
                return pTVar11;
              }
            }
            local_res20[0] = param_2;
            (*(code *)*puVar4)(__return_storage_ptr__,puVar4[1],local_res20,
                               *(longlong *)(lVar3 + 0x58) + (longlong)(int)uVar2 * 0x18,uVar5);
            return __return_storage_ptr__;
          }
          break;
        }
        iVar9 = piVar12[2];
      } while (iVar9 != -1);
    }
  }
  lVar3 = *(longlong *)
           ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8)
  ;
  pdVar1 = (double *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  dVar7 = pdVar1[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       *(double *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  return __return_storage_ptr__;
}

// operator() @ 14cb665c0

void __thiscall
``UE::Geometry::InitializeGeometrySelectionVisualization'::__l48::<lambda_10>::operator()'::__l2::
<lambda_1>::operator()(void *this,int param_1,TVector<double> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  double local_38;
  double dStack_30;
  double local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_38 = (param_2->field0_0x0)._s_0.X;
  dStack_30 = (param_2->field0_0x0)._s_0.Y;
  local_28 = (param_2->field0_0x0)._s_0.Z;
  pFVar2 = *(ForAnyElementType **)this;
  lVar7 = **(longlong **)((longlong)this + 8);
  local_18 = *(undefined4 *)(lVar7 + 0xc0);
  uStack_1c = *(undefined4 *)(lVar7 + 0xbc);
  uStack_20 = *(undefined4 *)(lVar7 + 200);
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x28)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,pFVar2,piVar1);
  }
  lVar7 = (longlong)iVar6;
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(double *)(pFVar3 + lVar7 * 0x28) = local_38;
  *(double *)(pFVar3 + lVar7 * 0x28 + 8) = dStack_30;
  *(double *)(pFVar3 + lVar7 * 0x28 + 0x10) = local_28;
  *(ulonglong *)(pFVar3 + lVar7 * 0x28 + 0x10 + 8) = CONCAT44(uStack_1c,uStack_20);
  *(ulonglong *)(pFVar3 + lVar7 * 0x28 + 0x20) = CONCAT44(uStack_14,local_18);
  return;
}

// operator() @ 14cb666d0

void __thiscall
``UE::Geometry::InitializeGeometrySelectionVisualization'::__l22::<lambda_4>::operator()'::__l2::
<lambda_1>::operator()(void *this,int param_1,TVector<double> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  double local_38;
  double dStack_30;
  double local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_38 = (param_2->field0_0x0)._s_0.X;
  dStack_30 = (param_2->field0_0x0)._s_0.Y;
  local_28 = (param_2->field0_0x0)._s_0.Z;
  pFVar2 = *(ForAnyElementType **)this;
  lVar7 = **(longlong **)((longlong)this + 8);
  local_18 = *(undefined4 *)(lVar7 + 0xc0);
  uStack_1c = *(undefined4 *)(lVar7 + 0xbc);
  uStack_20 = *(undefined4 *)(lVar7 + 0xcc);
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x28)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,pFVar2,piVar1);
  }
  lVar7 = (longlong)iVar6;
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(double *)(pFVar3 + lVar7 * 0x28) = local_38;
  *(double *)(pFVar3 + lVar7 * 0x28 + 8) = dStack_30;
  *(double *)(pFVar3 + lVar7 * 0x28 + 0x10) = local_28;
  *(ulonglong *)(pFVar3 + lVar7 * 0x28 + 0x10 + 8) = CONCAT44(uStack_1c,uStack_20);
  *(ulonglong *)(pFVar3 + lVar7 * 0x28 + 0x20) = CONCAT44(uStack_14,local_18);
  return;
}

// operator() @ 14cb667e0

void __thiscall
``UE::Geometry::InitializeGeometrySelectionVisualization'::__l26::<lambda_5>::operator()'::__l2::
<lambda_1>::operator()(void *this,int param_1,TSegment3<double> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pFVar2 = *(ForAnyElementType **)this;
  lVar7 = **(longlong **)((longlong)this + 8);
  dStack_60 = param_2->Extent;
  uStack_54 = *(undefined4 *)(lVar7 + 0xb8);
  dStack_70 = dStack_60 * (param_2->Direction).field0_0x0._s_0.X;
  local_68 = dStack_60 * (param_2->Direction).field0_0x0._s_0.Y;
  dStack_60 = dStack_60 * (param_2->Direction).field0_0x0._s_0.Z;
  local_88 = (param_2->Center).field0_0x0._s_0.X - dStack_70;
  uStack_50 = *(undefined4 *)(lVar7 + 0xc0);
  dStack_80 = (param_2->Center).field0_0x0._s_0.Y - local_68;
  dStack_70 = dStack_70 + (param_2->Center).field0_0x0._s_0.X;
  local_68 = local_68 + (param_2->Center).field0_0x0._s_0.Y;
  local_78 = (param_2->Center).field0_0x0._s_0.Z - dStack_60;
  dStack_60 = dStack_60 + (param_2->Center).field0_0x0._s_0.Z;
  local_58 = *(undefined4 *)(lVar7 + 200);
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x40)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  lVar7 = (longlong)iVar6 * 0x40;
  *(double *)(pFVar3 + lVar7) = local_88;
  *(double *)(pFVar3 + lVar7 + 8) = dStack_80;
  *(double *)(pFVar3 + lVar7 + 0x10) = local_78;
  *(double *)(pFVar3 + lVar7 + 0x10 + 8) = dStack_70;
  *(double *)(pFVar3 + lVar7 + 0x20) = local_68;
  *(double *)(pFVar3 + lVar7 + 0x20 + 8) = dStack_60;
  *(ulonglong *)(pFVar3 + lVar7 + 0x30) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(pFVar3 + lVar7 + 0x30 + 8) = CONCAT44(uStack_4c,uStack_50);
  return;
}

// operator() @ 14cb66990

void __thiscall
``UE::Geometry::InitializeGeometrySelectionVisualization'::__l30::<lambda_6>::operator()'::__l2::
<lambda_1>::operator()(void *this,int param_1,TTriangle3<double> *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  TVector<double>_u_0 local_278 [2];
  undefined8 local_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  uint local_218;
  undefined4 uStack_214;
  undefined8 local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined8 local_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  uint local_178;
  undefined4 uStack_174;
  TObjectPtr<UMaterialInterface>_u_0 local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  
  UE::Geometry::VectorUtil::Normal<double>
            ((TVector<double> *)&local_278[0]._s_0,param_2->V,param_2->V + 1,param_2->V + 2);
  uVar15 = __real_3ff0000000000000;
  dVar9 = param_2->V[0].field0_0x0._s_0.X;
  dVar10 = param_2->V[0].field0_0x0._s_0.Y;
  dVar2 = param_2->V[0].field0_0x0._s_0.Z;
  dVar11 = param_2->V[1].field0_0x0._s_0.X;
  dVar12 = param_2->V[1].field0_0x0._s_0.Y;
  local_218 = (((UGeometrySelectionVisualizationProperties *)**(undefined8 **)this)->FaceColor).
              field0_0x0.Bits;
  uVar5 = *(undefined4 *)((longlong)&param_2->V[1].field0_0x0 + 0x10);
  uVar6 = *(undefined4 *)((longlong)&param_2->V[1].field0_0x0 + 0x14);
  dVar13 = param_2->V[2].field0_0x0._s_0.X;
  dVar14 = param_2->V[2].field0_0x0._s_0.Y;
  uVar7 = *(undefined4 *)((longlong)&param_2->V[2].field0_0x0 + 0x10);
  uVar8 = *(undefined4 *)((longlong)&param_2->V[2].field0_0x0 + 0x14);
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  local_238 = 0;
  local_1e8 = 0;
  local_198 = __real_3ff0000000000000;
  dStack_230 = (double)local_278[0]._0_8_;
  dStack_228 = (double)local_278[0]._8_8_;
  dStack_220 = (double)local_278[0]._16_8_;
  dStack_1e0 = (double)local_278[0]._0_8_;
  dStack_1d8 = (double)local_278[0]._8_8_;
  dStack_1d0 = (double)local_278[0]._16_8_;
  dStack_190 = (double)local_278[0]._0_8_;
  dStack_188 = (double)local_278[0]._8_8_;
  dStack_180 = (double)local_278[0]._16_8_;
  local_1c8 = local_218;
  local_178 = local_218;
  local_168.DebugPtr =
       UGeometrySelectionVisualizationProperties::GetFaceMaterial
                 ((UGeometrySelectionVisualizationProperties *)**(undefined8 **)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_168.DebugPtr != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168.DebugPtr);
  }
  local_140 = local_238;
  dStack_138 = dStack_230;
  local_120 = CONCAT44(uStack_214,local_218);
  local_f8 = local_1e8;
  dStack_f0 = dStack_1e0;
  local_d8 = CONCAT44(uStack_1c4,local_1c8);
  local_130 = dStack_228;
  dStack_128 = dStack_220;
  local_b0 = local_198;
  dStack_a8 = dStack_190;
  local_90 = CONCAT44(uStack_174,local_178);
  local_e8 = dStack_1d8;
  dStack_e0 = dStack_1d0;
  uStack_100 = (undefined4)uVar15;
  uStack_fc = (undefined4)((ulonglong)uVar15 >> 0x20);
  uStack_148 = 0;
  local_a0 = dStack_188;
  dStack_98 = dStack_180;
  local_160 = dVar9;
  dStack_158 = dVar10;
  local_150 = dVar2;
  local_118 = dVar11;
  dStack_110 = dVar12;
  local_108 = uVar5;
  uStack_104 = uVar6;
  local_d0 = dVar13;
  dStack_c8 = dVar14;
  local_c0 = uVar7;
  uStack_bc = uVar8;
  uStack_b8 = uStack_100;
  uStack_b4 = uStack_fc;
  if (((TObjectPtr<UMaterialInterface>_u_0 *)pFVar3->Data <= &local_168) &&
     (&local_168 <
      (TObjectPtr<UMaterialInterface>_u_0 *)pFVar3->Data +
      (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x1c)) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar17 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e0,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar17 + 1;
  FRenderableTriangle::FRenderableTriangle
            ((FRenderableTriangle *)(pFVar3->Data + (longlong)iVar17 * 0xe0),
             (FRenderableTriangle *)&local_168.ObjectPtr);
  return;
}

// operator() @ 14cb66c20

void __thiscall
``UE::Geometry::InitializeGeometrySelectionVisualization'::__l37::<lambda_7>::operator()'::__l2::
<lambda_1>::operator()(void *this,int param_1,TVector<double> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  double local_38;
  double dStack_30;
  double local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_38 = (param_2->field0_0x0)._s_0.X;
  dStack_30 = (param_2->field0_0x0)._s_0.Y;
  local_28 = (param_2->field0_0x0)._s_0.Z;
  pFVar2 = *(ForAnyElementType **)this;
  lVar7 = **(longlong **)((longlong)this + 8);
  local_18 = *(undefined4 *)(lVar7 + 0xc0);
  uStack_1c = *(undefined4 *)(lVar7 + 0xbc);
  uStack_20 = *(undefined4 *)(lVar7 + 0xcc);
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x28)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,pFVar2,piVar1);
  }
  lVar7 = (longlong)iVar6;
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(double *)(pFVar3 + lVar7 * 0x28) = local_38;
  *(double *)(pFVar3 + lVar7 * 0x28 + 8) = dStack_30;
  *(double *)(pFVar3 + lVar7 * 0x28 + 0x10) = local_28;
  *(ulonglong *)(pFVar3 + lVar7 * 0x28 + 0x10 + 8) = CONCAT44(uStack_1c,uStack_20);
  *(ulonglong *)(pFVar3 + lVar7 * 0x28 + 0x20) = CONCAT44(uStack_14,local_18);
  return;
}

// operator() @ 14cb66d30

void __thiscall
``UE::Geometry::InitializeGeometrySelectionVisualization'::__l41::<lambda_8>::operator()'::__l2::
<lambda_1>::operator()(void *this,int param_1,TSegment3<double> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pFVar2 = *(ForAnyElementType **)this;
  lVar7 = **(longlong **)((longlong)this + 8);
  dStack_60 = param_2->Extent;
  uStack_54 = *(undefined4 *)(lVar7 + 0xb8);
  dStack_70 = dStack_60 * (param_2->Direction).field0_0x0._s_0.X;
  local_68 = dStack_60 * (param_2->Direction).field0_0x0._s_0.Y;
  dStack_60 = dStack_60 * (param_2->Direction).field0_0x0._s_0.Z;
  local_88 = (param_2->Center).field0_0x0._s_0.X - dStack_70;
  uStack_50 = *(undefined4 *)(lVar7 + 0xc0);
  dStack_80 = (param_2->Center).field0_0x0._s_0.Y - local_68;
  dStack_70 = dStack_70 + (param_2->Center).field0_0x0._s_0.X;
  local_68 = local_68 + (param_2->Center).field0_0x0._s_0.Y;
  local_78 = (param_2->Center).field0_0x0._s_0.Z - dStack_60;
  dStack_60 = dStack_60 + (param_2->Center).field0_0x0._s_0.Z;
  local_58 = *(undefined4 *)(lVar7 + 200);
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x40)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  lVar7 = (longlong)iVar6 * 0x40;
  *(double *)(pFVar3 + lVar7) = local_88;
  *(double *)(pFVar3 + lVar7 + 8) = dStack_80;
  *(double *)(pFVar3 + lVar7 + 0x10) = local_78;
  *(double *)(pFVar3 + lVar7 + 0x10 + 8) = dStack_70;
  *(double *)(pFVar3 + lVar7 + 0x20) = local_68;
  *(double *)(pFVar3 + lVar7 + 0x20 + 8) = dStack_60;
  *(ulonglong *)(pFVar3 + lVar7 + 0x30) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(pFVar3 + lVar7 + 0x30 + 8) = CONCAT44(uStack_4c,uStack_50);
  return;
}

// operator() @ 14cb66ee0

void __thiscall
``UE::Geometry::InitializeGeometrySelectionVisualization'::__l45::<lambda_9>::operator()'::__l2::
<lambda_1>::operator()(void *this,int param_1,TTriangle3<double> *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  TVector<double>_u_0 local_278 [2];
  undefined8 local_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  uint local_218;
  undefined4 uStack_214;
  undefined8 local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined8 local_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  uint local_178;
  undefined4 uStack_174;
  TObjectPtr<UMaterialInterface>_u_0 local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  
  UE::Geometry::VectorUtil::Normal<double>
            ((TVector<double> *)&local_278[0]._s_0,param_2->V,param_2->V + 1,param_2->V + 2);
  uVar15 = __real_3ff0000000000000;
  dVar9 = param_2->V[0].field0_0x0._s_0.X;
  dVar10 = param_2->V[0].field0_0x0._s_0.Y;
  dVar2 = param_2->V[0].field0_0x0._s_0.Z;
  dVar11 = param_2->V[1].field0_0x0._s_0.X;
  dVar12 = param_2->V[1].field0_0x0._s_0.Y;
  local_218 = (((UGeometrySelectionVisualizationProperties *)**(undefined8 **)this)->FaceColor).
              field0_0x0.Bits;
  uVar5 = *(undefined4 *)((longlong)&param_2->V[1].field0_0x0 + 0x10);
  uVar6 = *(undefined4 *)((longlong)&param_2->V[1].field0_0x0 + 0x14);
  dVar13 = param_2->V[2].field0_0x0._s_0.X;
  dVar14 = param_2->V[2].field0_0x0._s_0.Y;
  uVar7 = *(undefined4 *)((longlong)&param_2->V[2].field0_0x0 + 0x10);
  uVar8 = *(undefined4 *)((longlong)&param_2->V[2].field0_0x0 + 0x14);
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  local_238 = 0;
  local_1e8 = 0;
  local_198 = __real_3ff0000000000000;
  dStack_230 = (double)local_278[0]._0_8_;
  dStack_228 = (double)local_278[0]._8_8_;
  dStack_220 = (double)local_278[0]._16_8_;
  dStack_1e0 = (double)local_278[0]._0_8_;
  dStack_1d8 = (double)local_278[0]._8_8_;
  dStack_1d0 = (double)local_278[0]._16_8_;
  dStack_190 = (double)local_278[0]._0_8_;
  dStack_188 = (double)local_278[0]._8_8_;
  dStack_180 = (double)local_278[0]._16_8_;
  local_1c8 = local_218;
  local_178 = local_218;
  local_168.DebugPtr =
       UGeometrySelectionVisualizationProperties::GetFaceMaterial
                 ((UGeometrySelectionVisualizationProperties *)**(undefined8 **)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_168.DebugPtr != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168.DebugPtr);
  }
  local_140 = local_238;
  dStack_138 = dStack_230;
  local_120 = CONCAT44(uStack_214,local_218);
  local_f8 = local_1e8;
  dStack_f0 = dStack_1e0;
  local_d8 = CONCAT44(uStack_1c4,local_1c8);
  local_130 = dStack_228;
  dStack_128 = dStack_220;
  local_b0 = local_198;
  dStack_a8 = dStack_190;
  local_90 = CONCAT44(uStack_174,local_178);
  local_e8 = dStack_1d8;
  dStack_e0 = dStack_1d0;
  uStack_100 = (undefined4)uVar15;
  uStack_fc = (undefined4)((ulonglong)uVar15 >> 0x20);
  uStack_148 = 0;
  local_a0 = dStack_188;
  dStack_98 = dStack_180;
  local_160 = dVar9;
  dStack_158 = dVar10;
  local_150 = dVar2;
  local_118 = dVar11;
  dStack_110 = dVar12;
  local_108 = uVar5;
  uStack_104 = uVar6;
  local_d0 = dVar13;
  dStack_c8 = dVar14;
  local_c0 = uVar7;
  uStack_bc = uVar8;
  uStack_b8 = uStack_100;
  uStack_b4 = uStack_fc;
  if (((TObjectPtr<UMaterialInterface>_u_0 *)pFVar3->Data <= &local_168) &&
     (&local_168 <
      (TObjectPtr<UMaterialInterface>_u_0 *)pFVar3->Data +
      (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x1c)) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar17 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e0,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar17 + 1;
  FRenderableTriangle::FRenderableTriangle
            ((FRenderableTriangle *)(pFVar3->Data + (longlong)iVar17 * 0xe0),
             (FRenderableTriangle *)&local_168.ObjectPtr);
  return;
}

// operator() @ 14cb672d0

void __thiscall
`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_1>::operator()
          (void *this,uint param_1,TVector<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  
  lVar2 = *(longlong *)this;
  if ((*(TVector<double> **)(lVar2 + 0x20) <= param_2) &&
     (param_2 < *(TVector<double> **)(lVar2 + 0x20) + *(int *)(lVar2 + 0x2c))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x28);
  if (iVar6 == *(int *)(lVar2 + 0x2c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)(lVar2 + 0x20),(int *)(lVar2 + 0x2c));
  }
  *(int *)(lVar2 + 0x28) = iVar6 + 1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  lVar2 = *(longlong *)(lVar2 + 0x20);
  pdVar1 = (double *)(lVar2 + (longlong)iVar6 * 0x18);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar4;
  *(double *)(lVar2 + 0x10 + (longlong)iVar6 * 0x18) = (param_2->field0_0x0)._s_0.Z;
  return;
}

// operator() @ 14cb6b9c0

void __thiscall
```FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::operator()'
::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()(void *this,FMeshTriEdgeID param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong local_18 [2];
  
  if ((((uint)param_1 ^ *(uint *)this) & 0xfffffffc) != 0) {
    local_18[0] = (ulonglong)(param_1.TriangleID | (int)param_1 << 0x1e);
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(ulonglong *)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14cb6bda0

void __thiscall
``FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::operator()'::
__l6::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  FMeshTriEdgeID FVar5;
  ulonglong uVar6;
  uint local_28;
  uint local_18 [2];
  undefined8 local_10;
  
  local_18[0] = *(uint *)this;
  if ((int)(local_18[0] >> 2) <
      (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    uVar6 = (ulonglong)(local_18[0] >> 2 & 0x1ff);
    lVar1 = (ulonglong)(local_18[0] >> 0xb) * 8;
    if ((((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + lVar1) + uVar6 * 2) - 1U) < 0xfffe) &&
        (uVar3 = *(uint *)(*(longlong *)
                            ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + lVar1) +
                          ((ulonglong)(local_18[0] & 3) + uVar6 * 3) * 4), -1 < (int)uVar3)) &&
       ((int)uVar3 <
        (int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      uVar6 = (ulonglong)(uVar3 & 0x1ff);
      lVar1 = (ulonglong)(uVar3 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               lVar1) + uVar6 * 2) - 1U) < 0xfffe) {
        local_10 = *(undefined8 *)((longlong)this + 8);
        uVar4 = *(uint *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8
                         + uVar6 * 0x10);
        FVar5 = (FMeshTriEdgeID)(uVar4 * 4);
        uVar2 = *(undefined8 *)
                 (*(longlong *)
                   ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 0xc);
        local_28 = (uint)uVar2;
        if (local_28 != uVar3) {
          FVar5 = (FMeshTriEdgeID)((uint)FVar5 | ((uint)((ulonglong)uVar2 >> 0x20) != uVar3) + 1);
        }
        ```FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::
        operator()'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()(local_18,FVar5);
        uVar6 = *(ulonglong *)
                 (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
                 uVar6 * 0x10);
        uVar4 = (uint)(uVar6 >> 0x20);
        if (uVar4 != 0xffffffff) {
          FVar5 = (FMeshTriEdgeID)(uVar4 * 4);
          uVar2 = *(undefined8 *)
                   (*(longlong *)
                     ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar6 >> 0x29) * 8)
                   + (ulonglong)(uVar4 & 0x1ff) * 0xc);
          local_28 = (uint)uVar2;
          if (local_28 != uVar3) {
            FVar5 = (FMeshTriEdgeID)((uint)FVar5 | ((uint)((ulonglong)uVar2 >> 0x20) != uVar3) + 1);
          }
          ```FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_MeshTopology'::__l5::<lambda_1>::
          operator()'::__l6::<lambda_1>::operator()'::__l5::<lambda_1>::operator()(local_18,FVar5);
        }
      }
    }
  }
  return;
}

// operator() @ 14cb6c890

void __thiscall
`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_2>::operator()
          (void *this,uint param_1,TSegment3<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)this;
  if ((*(TSegment3<double> **)(lVar2 + 0x10) <= param_2) &&
     (param_2 < *(TSegment3<double> **)(lVar2 + 0x10) + *(int *)(lVar2 + 0x1c))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x18);
  if (iVar6 == *(int *)(lVar2 + 0x1c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,(ForAnyElementType *)(lVar2 + 0x10),(int *)(lVar2 + 0x1c));
  }
  *(int *)(lVar2 + 0x18) = iVar6 + 1;
  dVar4 = (param_2->Center).field0_0x0._s_0.Y;
  lVar7 = (longlong)iVar6 * 0x38;
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *(double *)(lVar7 + lVar2) = (param_2->Center).field0_0x0._s_0.X;
  ((double *)(lVar7 + lVar2))[1] = dVar4;
  dVar4 = (param_2->Direction).field0_0x0._s_0.X;
  pdVar1 = (double *)(lVar7 + 0x10 + lVar2);
  *pdVar1 = (param_2->Center).field0_0x0._s_0.Z;
  pdVar1[1] = dVar4;
  dVar4 = (param_2->Direction).field0_0x0._s_0.Z;
  pdVar1 = (double *)(lVar7 + 0x20 + lVar2);
  *pdVar1 = (param_2->Direction).field0_0x0._s_0.Y;
  pdVar1[1] = dVar4;
  *(double *)(lVar7 + 0x30 + lVar2) = param_2->Extent;
  return;
}

// operator() @ 14cb6dd60

void __thiscall
``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>
::operator()(void *this,int param_1,TSegment3<double> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  undefined8 local_18 [2];
  
  lVar1 = *(longlong *)this;
  pFVar5 = (ForAnyElementType *)(lVar1 + 0x130);
  local_18[0] = *(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
                   (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  if ((pFVar5->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar5->Data + (longlong)*(int *)(lVar1 + 0x13c) * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar1 + 0x138);
  if (iVar4 == *(int *)(lVar1 + 0x13c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar5,(int *)(lVar1 + 0x13c));
  }
  *(int *)(lVar1 + 0x138) = iVar4 + 1;
  *(undefined8 *)(pFVar5->Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// operator() @ 14cb6de40

void __thiscall
`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_3>::operator()
          (void *this,uint param_1,TTriangle3<double> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= param_2) &&
     (param_2 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x48)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,pFVar2,piVar1);
  }
  lVar8 = (longlong)iVar7;
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  dVar5 = param_2->V[0].field0_0x0._s_0.Y;
  pFVar3 = pFVar2->Data;
  *(double *)(pFVar3 + lVar8 * 0x48) = param_2->V[0].field0_0x0._s_0.X;
  *(double *)(pFVar3 + lVar8 * 0x48 + 8) = dVar5;
  dVar5 = param_2->V[1].field0_0x0._s_0.X;
  *(double *)(pFVar3 + lVar8 * 0x48 + 0x10) = param_2->V[0].field0_0x0._s_0.Z;
  *(double *)(pFVar3 + lVar8 * 0x48 + 0x10 + 8) = dVar5;
  dVar5 = param_2->V[1].field0_0x0._s_0.Z;
  *(double *)(pFVar3 + lVar8 * 0x48 + 0x20) = param_2->V[1].field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar8 * 0x48 + 0x20 + 8) = dVar5;
  dVar5 = param_2->V[2].field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar8 * 0x48 + 0x30) = param_2->V[2].field0_0x0._s_0.X;
  *(double *)(pFVar3 + lVar8 * 0x48 + 0x30 + 8) = dVar5;
  *(double *)(pFVar3 + lVar8 * 0x48 + 0x40) = param_2->V[2].field0_0x0._s_0.Z;
  return;
}

// operator() @ 14cb6eb50

void __thiscall
``FBasicDynamicMeshSelectionTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::
<lambda_4>::operator()(void *this,int param_1,TSegment3<double> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_18 [2];
  
  lVar1 = *(longlong *)this;
  pFVar5 = (ForAnyElementType *)(lVar1 + 0x130);
  local_18[0] = *(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
                   (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  local_res10[0] = param_1;
  if ((pFVar5->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar5->Data + (longlong)*(int *)(lVar1 + 0x13c) * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar1 + 0x138);
  if (iVar4 == *(int *)(lVar1 + 0x13c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar5,(int *)(lVar1 + 0x13c));
  }
  *(int *)(lVar1 + 0x138) = iVar4 + 1;
  *(undefined8 *)(pFVar5->Data + (longlong)iVar4 * 8) = local_18[0];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x10),
             local_res8,(bool *)local_res10);
  return;
}

// operator() @ 14cb6f890

void __thiscall
``FDynamicMeshPolygroupTransformer::BeginTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_5>
::operator()(void *this,FEdgeSpan *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined8 local_28 [2];
  
  pFVar8 = (param_1->Edges).AllocatorInstance.Data;
  iVar2 = (param_1->Edges).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if ((param_1->Edges).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)this;
    pFVar7 = (ForAnyElementType *)(lVar3 + 0x150);
    local_28[0] = *(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
                     (ulonglong)(*(uint *)pFVar8 >> 9) * 8) +
                   (ulonglong)(*(uint *)pFVar8 & 0x1ff) * 0x10);
    if ((pFVar7->Data <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar7->Data + (longlong)*(int *)(lVar3 + 0x15c) * 8))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)(lVar3 + 0x158);
    if (iVar6 == *(int *)(lVar3 + 0x15c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,pFVar7,(int *)(lVar3 + 0x15c));
    }
    *(int *)(lVar3 + 0x158) = iVar6 + 1;
    pFVar8 = pFVar8 + 4;
    *(undefined8 *)(pFVar7->Data + (longlong)iVar6 * 8) = local_28[0];
  }
  return;
}

// `vcall'{760,{flat}}'_}' @ 14cb70898

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UMeshTopologySelectionMechanic::`vcall'{760,{flat}}' }' */

void __thiscall
UMeshTopologySelectionMechanic::_vcall__760__flat______(UMeshTopologySelectionMechanic *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb7089b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2f8))();
  return;
}

// `vcall'{768,{flat}}'_}' @ 14cb708a8

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UMeshTopologySelectionMechanic::`vcall'{768,{flat}}' }' */

void __thiscall
UMeshTopologySelectionMechanic::_vcall__768__flat______(UMeshTopologySelectionMechanic *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb708ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x300))();
  return;
}

// `vcall'{776,{flat}}'_}' @ 14cb708b8

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UMeshTopologySelectionMechanic::`vcall'{776,{flat}}' }' */

void __thiscall
UMeshTopologySelectionMechanic::_vcall__776__flat______(UMeshTopologySelectionMechanic *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb708bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x308))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14cb708c8

/* [thunk]:public: virtual void * __ptr64 __cdecl FGeometrySelectionDeltaChange::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FGeometrySelectionDeltaChange::_vector_deleting_destructor__adjustor_8__
          (FGeometrySelectionDeltaChange *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FGeometrySelectionDeltaChange *)&this[-1].Delta.Added.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14cb708d8

/* [thunk]:public: virtual void * __ptr64 __cdecl FGeometrySelectionReplaceChange::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FGeometrySelectionReplaceChange::_vector_deleting_destructor__adjustor_8__
          (FGeometrySelectionReplaceChange *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FGeometrySelectionReplaceChange *)&this[-1].After.Selection.HashSize,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cb708e8

/* [thunk]:public: virtual void * __ptr64 __cdecl UBoundarySelectionMechanic::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UBoundarySelectionMechanic::_vector_deleting_destructor__adjustor_48__
          (UBoundarySelectionMechanic *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBoundarySelectionMechanic *)&this[-1].field_0xb00,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14cb708f8

/* [thunk]:public: virtual void * __ptr64 __cdecl UBoundarySelectionMechanic::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UBoundarySelectionMechanic::_vector_deleting_destructor__adjustor_56__
          (UBoundarySelectionMechanic *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBoundarySelectionMechanic *)&this[-1].field_0xaf8,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cb70908

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMeshTopologySelectionMechanic::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UMeshTopologySelectionMechanic::_vector_deleting_destructor__adjustor_48__
          (UMeshTopologySelectionMechanic *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMeshTopologySelectionMechanic *)
                      &this[-1].SelectionRenderer.TotalTransform.Scale3D,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14cb70918

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMeshTopologySelectionMechanic::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UMeshTopologySelectionMechanic::_vector_deleting_destructor__adjustor_56__
          (UMeshTopologySelectionMechanic *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMeshTopologySelectionMechanic *)
                      (this[-1].SelectionRenderer.TotalTransform.Translation.ZW.m128d_f64 + 1),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cb70928

/* [thunk]:public: virtual void * __ptr64 __cdecl UPolygonSelectionMechanic::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPolygonSelectionMechanic::_vector_deleting_destructor__adjustor_48__
          (UPolygonSelectionMechanic *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPolygonSelectionMechanic *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14cb70938

/* [thunk]:public: virtual void * __ptr64 __cdecl UPolygonSelectionMechanic::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPolygonSelectionMechanic::_vector_deleting_destructor__adjustor_56__
          (UPolygonSelectionMechanic *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPolygonSelectionMechanic *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cb70950

void * __thiscall
IBaseDelegateInstance<void___cdecl(IGeometrySelector_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(IGeometrySelector_*),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70980

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy,`FBaseDynamicMeshSelector::RegisterMeshChangedHandler'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb709b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGeometrySelectionManager,void___cdecl(IGeometrySelector_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGeometrySelectionManager,void___cdecl(IGeometrySelector_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb709e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMeshTopologySelectionMechanic,void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMeshTopologySelectionMechanic,void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70a10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMeshTopologySelectionMechanic,void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMeshTopologySelectionMechanic,void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70a40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMeshTopologySelectionMechanic,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMeshTopologySelectionMechanic,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70a70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UModelingSceneSnappingManager,void___cdecl(void),FDefaultDelegateUserPolicy,UDynamicMeshComponent_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UModelingSceneSnappingManager,void___cdecl(void),FDefaultDelegateUserPolicy,UDynamicMeshComponent_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70aa0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IGeometrySelector_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(IGeometrySelector_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70ad0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UDynamicMeshComponent_*>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UDynamicMeshComponent_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70b00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<std::nullptr_t_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<std::nullptr_t_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A__TXZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,double),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,double),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__0N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshPolygroupTransformer::UpdateTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FDynamicMeshPolygroupTransformer::UpdateTransform'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentSelectorFactory::BuildForTarget'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshComponentSelectorFactory::BuildForTarget'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::DoCornerBasedSelection'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::DoCornerBasedSelection'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::DoEdgeBasedSelection'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::DoEdgeBasedSelection'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Initialize'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Initialize'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70e00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`IsOccluded'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`IsOccluded'::`5'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::OnDragRectangleChanged'::__l7::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::OnDragRectangleChanged'::`7'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseDynamicMeshSelector::RayHitTest'::__l7::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBaseDynamicMeshSelector::RayHitTest'::`7'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGroupTopologySelector::DrawSelection'::__l30::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGroupTopologySelector::DrawSelection'::`30'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70f00

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
UE::Core::Private::Function::TFunction_OwnedObject<UMeshTopologySelectionMechanic::<lambda_29_>,0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<UMeshTopologySelectionMechanic::<lambda_29_>,0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_V<lambda_29_>_UMeshTopologySelectionMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBaseDynamicMeshSelector::UpdateSelectionViaRaycast_GroupEdges'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb70fc0

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
UE::Core::Private::Function::TFunction_OwnedObject<UMeshTopologySelectionMechanic::<lambda_30_>,0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<UMeshTopologySelectionMechanic::<lambda_30_>,0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_V<lambda_30_>_UMeshTopologySelectionMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_3>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`11'::<lambda_3>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_4>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb710c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_4>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`11'::<lambda_4>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWatchablePropertySet::TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>'::__l1::<lambda_54_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_54_>__0_____0_NX___TPropertyWatcher__N_FWatchablePropertySet__QEAA_AEB_NV__TFunction___A6AXAEB_N_Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_5>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::__l18::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`18'::<lambda_5>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb711c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_6>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71200

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::TSpatialPhoto<float>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Geometry::TSpatialPhoto<float>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71240

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71280

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UGeometrySelectionManager::FGeometrySelectionTarget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UGeometrySelectionManager::FGeometrySelectionTarget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb712c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImagePixelPipe,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FImagePixelPipe,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71300

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBasicDynamicMeshSelectionTransformer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FBasicDynamicMeshSelectionTransformer,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71340

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBoundaryEdgeSpanSelector,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FBoundaryEdgeSpanSelector,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71380

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBoundarySelector,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FBoundarySelector,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb713c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDynamicMeshPolygroupTransformer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDynamicMeshPolygroupTransformer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71400

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGroupTopologySelector,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FGroupTopologySelector,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71440

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSceneDynamicMeshSpatial,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSceneDynamicMeshSpatial,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71480

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FSceneGeometrySpatialCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Geometry::FSceneGeometrySpatialCache,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb714c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSceneVolumeSpatial,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSceneVolumeSpatial,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71500

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UGeometrySelectionManager::GetCachedTarget'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71530

void * __thiscall
FBaseDynamicMeshSelector::_scalar_deleting_destructor_(FBaseDynamicMeshSelector *this,uint param_1)

{
  ~FBaseDynamicMeshSelector(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71570

void * __thiscall
FBasicDynamicMeshSelectionTransformer::_scalar_deleting_destructor_
          (FBasicDynamicMeshSelectionTransformer *this,uint param_1)

{
  ~FBasicDynamicMeshSelectionTransformer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb715b0

void * __thiscall
FBoundaryEdgeSpanSelector::_scalar_deleting_destructor_
          (FBoundaryEdgeSpanSelector *this,uint param_1)

{
  FMeshTopologySelector::~FMeshTopologySelector((FMeshTopologySelector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb715f0

void * __thiscall
FBoundarySelector::_scalar_deleting_destructor_(FBoundarySelector *this,uint param_1)

{
  FMeshTopologySelector::~FMeshTopologySelector((FMeshTopologySelector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71630

void * __thiscall
FBoundaryTopologyProvider::_scalar_deleting_destructor_
          (FBoundaryTopologyProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71660

void * __thiscall
FDynamicMeshPolygroupTransformer::_scalar_deleting_destructor_
          (FDynamicMeshPolygroupTransformer *this,uint param_1)

{
  FGroupTopologyDeformer *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->LinearDeformer).Ptr;
  if (pFVar1 != (FGroupTopologyDeformer *)0x0) {
    (*(code *)pFVar1[-1].FaceEncodings.AllocatorInstance.Data)(&pFVar1[-1].FaceEncodings);
  }
  *(undefined4 *)&(this->ROIMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ROIMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ROIMap);
  FBasicDynamicMeshSelectionTransformer::~FBasicDynamicMeshSelectionTransformer
            ((FBasicDynamicMeshSelectionTransformer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb716f0

void * __thiscall
FDynamicMeshSelector::_scalar_deleting_destructor_(FDynamicMeshSelector *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveTransformer).SharedReferenceCount.ReferenceController);
  FBaseDynamicMeshSelector::~FBaseDynamicMeshSelector((FBaseDynamicMeshSelector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71740

void * __thiscall
EdgeSpanSelectorHelpers::FEdgeSpanTopologyProvider::_scalar_deleting_destructor_
          (FEdgeSpanTopologyProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CornerVertexIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71790

void * __thiscall
FGeometrySelectionDeltaChange::_scalar_deleting_destructor_
          (FGeometrySelectionDeltaChange *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Delta).Added.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Delta).Removed.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IGeometrySelectionChange__6B_;
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71800

void * __thiscall
FGeometrySelectionManager_ActiveTargetsChange::_scalar_deleting_destructor_
          (FGeometrySelectionManager_ActiveTargetsChange *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TargetsAfter).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetsBefore).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71860

void * __thiscall
FGeometrySelectionManager_SelectionTypeChange::_scalar_deleting_destructor_
          (FGeometrySelectionManager_SelectionTypeChange *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb718a0

void * __thiscall
FGeometrySelectionManager_TargetLockStateChange::_scalar_deleting_destructor_
          (FGeometrySelectionManager_TargetLockStateChange *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb718e0

void * __thiscall
FGeometrySelectionReplaceChange::_scalar_deleting_destructor_
          (FGeometrySelectionReplaceChange *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->After).Selection.HashSize = 0;
  FVar1 = (this->After).Selection.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->After).Selection.Elements);
  (this->Before).Selection.HashSize = 0;
  FVar1 = (this->Before).Selection.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Before).Selection.Elements);
  this->_padding_ = (longlong)&___7IGeometrySelectionChange__6B_;
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71980

void * __thiscall
UE::Geometry::FGroupTopologyDeformer::_scalar_deleting_destructor_
          (FGroupTopologyDeformer *this,uint param_1)

{
  ~FGroupTopologyDeformer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb719c0

void * __thiscall
FGroupTopologyProvider::_scalar_deleting_destructor_(FGroupTopologyProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb719f0

void * __thiscall
FGroupTopologySelector::_scalar_deleting_destructor_(FGroupTopologySelector *this,uint param_1)

{
  FMeshTopologySelector::~FMeshTopologySelector((FMeshTopologySelector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71a30

void * __thiscall
FMeshTopologySelectionMechanicSelectionChange::_scalar_deleting_destructor_
          (FMeshTopologySelectionMechanicSelectionChange *this,uint param_1)

{
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->After);
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->Before);
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71a90

void * __thiscall
FMeshTopologySelector::_scalar_deleting_destructor_(FMeshTopologySelector *this,uint param_1)

{
  ~FMeshTopologySelector(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71ad0

void * __thiscall
UE::Geometry::FPointPlanarSnapSolver::_scalar_deleting_destructor_
          (FPointPlanarSnapSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->GeneratedTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->IgnoreTargets).HashSize = 0;
  FVar2 = (this->IgnoreTargets).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->IgnoreTargets).Elements);
  pFVar1 = (this->IntersectionSecondLinePointers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IntersectionPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GeneratedLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBasePositionSnapSolver3::~FBasePositionSnapSolver3((FBasePositionSnapSolver3 *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71ba0

void * __thiscall
UE::Geometry::FRaySpatialSnapSolver::_scalar_deleting_destructor_
          (FRaySpatialSnapSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->GeneratedTargetPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->PointConstraintFunc != 0) {
    plVar2 = *(longlong **)&(this->PointConstraintFunc).field_0x28;
    plVar3 = (longlong *)&(this->PointConstraintFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FBasePositionSnapSolver3::~FBasePositionSnapSolver3((FBasePositionSnapSolver3 *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71c20

void * __thiscall
FSceneDynamicMeshSpatial::_scalar_deleting_destructor_(FSceneDynamicMeshSpatial *this,uint param_1)

{
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->AABBTree);
  *(undefined ***)this = &___7ISceneGeometrySpatial_Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71c70

void * __thiscall
UE::Geometry::FSceneGeometrySpatialCache::_scalar_deleting_destructor_
          (FSceneGeometrySpatialCache *this,uint param_1)

{
  ~FSceneGeometrySpatialCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71cb0

void * __thiscall
FSceneVolumeSpatial::_scalar_deleting_destructor_(FSceneVolumeSpatial *this,uint param_1)

{
  UE::Geometry::FColliderMesh::~FColliderMesh(&this->ColliderMesh);
  *(undefined ***)this = &___7ISceneGeometrySpatial_Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71d00

void * __thiscall
FTopologyProvider::_scalar_deleting_destructor_(FTopologyProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71d30

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
UE::Geometry::FWorldRenderCapture::_scalar_deleting_destructor_
          (FWorldRenderCapture *this,uint param_1)

{
  ~FWorldRenderCapture(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x990);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71d70

void * __thiscall
IGeometrySelectionChange::_scalar_deleting_destructor_(IGeometrySelectionChange *this,uint param_1)

{
  *this = (IGeometrySelectionChange)&___7IGeometrySelectionChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71db0

void * __thiscall
IGeometrySelectionTransformer::_scalar_deleting_destructor_
          (IGeometrySelectionTransformer *this,uint param_1)

{
  *this = (IGeometrySelectionTransformer)&___7IGeometrySelectionTransformer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71df0

void * __thiscall
IGeometrySelector::_scalar_deleting_destructor_(IGeometrySelector *this,uint param_1)

{
  ~IGeometrySelector(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71e30

void * __thiscall
UE::Geometry::ISceneGeometrySpatial::_scalar_deleting_destructor_
          (ISceneGeometrySpatial *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISceneGeometrySpatial_Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71e70

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
UBoundarySelectionMechanic::_scalar_deleting_destructor_
          (UBoundarySelectionMechanic *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  UMeshTopologySelectionMechanic::~UMeshTopologySelectionMechanic
            ((UMeshTopologySelectionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb71ef0

void * __thiscall
UDEPRECATED_PolygonSelectionMechanicProperties::_scalar_deleting_destructor_
          (UDEPRECATED_PolygonSelectionMechanicProperties *this,uint param_1)

{
  *(undefined ***)this = &___7UMeshTopologySelectionMechanicProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cb71f50

void * __thiscall
UDynamicMeshProvider::_scalar_deleting_destructor_(UDynamicMeshProvider *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 14cb71fb0

void * __thiscall
UGeometrySelectionManager::_scalar_deleting_destructor_
          (UGeometrySelectionManager *this,uint param_1)

{
  ~UGeometrySelectionManager(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb72010

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
UMeshTopologySelectionMechanic::_scalar_deleting_destructor_
          (UMeshTopologySelectionMechanic *this,uint param_1)

{
  ~UMeshTopologySelectionMechanic(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb72070

void * __thiscall
UMeshTopologySelectionMechanicProperties::_scalar_deleting_destructor_
          (UMeshTopologySelectionMechanicProperties *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshTopologySelectionMechanicProperties__6B_;
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

// `scalar_deleting_destructor' @ 14cb720d0

void * __thiscall
UModelingSceneSnappingManager::_scalar_deleting_destructor_
          (UModelingSceneSnappingManager *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UModelingSceneSnappingManager__6B_;
  (this->PendingModifiedDynamicMeshes).HashSize = 0;
  FVar1 = (this->PendingModifiedDynamicMeshes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UDynamicMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UDynamicMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingModifiedDynamicMeshes).Elements);
  *(undefined4 *)&(this->DynamicMeshComponents).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DynamicMeshComponents).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TWeakObjectPtr<UDynamicMeshComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicMeshComponents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpatialCache).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ComponentToActorMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ComponentToActorMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,AActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,AActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,AActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentToActorMap);
  USceneSnappingManager::~USceneSnappingManager((USceneSnappingManager *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb721c0

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
UPolygonSelectionMechanic::_scalar_deleting_destructor_
          (UPolygonSelectionMechanic *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  UMeshTopologySelectionMechanic::~UMeshTopologySelectionMechanic
            ((UMeshTopologySelectionMechanic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cb72240

void * __thiscall
UToolHostCustomizationAPI::_scalar_deleting_destructor_
          (UToolHostCustomizationAPI *this,uint param_1)

{
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

// AccumulateSelectionElements @ 14cb72640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EEnumerateSelectionMapping": Some values do not have unique names */

bool __cdecl
ToolSelectionUtil::AccumulateSelectionElements
          (FGeometrySelectionElements *param_1,FGeometrySelection *param_2,FDynamicMesh3 *param_3,
          FGroupTopology *param_4,TTransform<double> *param_5,EEnumerateSelectionMapping param_6)

{
  bool bVar1;
  undefined1 auStackY_218 [32];
  code *local_1d8;
  FGeometrySelectionElements **local_1d0;
  code *local_1c8;
  FGeometrySelectionElements **local_1c0;
  code *local_1b8;
  FGeometrySelectionElements **local_1b0;
  FGeometrySelectionElements *local_1a8;
  FGeometrySelectionElements *local_1a0;
  FGeometrySelectionElements *local_198 [2];
  FGroupTopology local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1a8 = param_1;
  local_1a0 = param_1;
  local_198[0] = param_1;
  if (param_2->TopologyType == Polygroup) {
    if (param_4 == (FGroupTopology *)0x0) {
      UE::Geometry::FGroupTopology::FGroupTopology(&local_188,param_3,true);
      local_1b0 = &local_1a8;
      local_1b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_3>,void,int,UE::Geometry::TTriangle3<double>_const_&>
                  ::Call;
      local_1c0 = &local_1a0;
      local_1c8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_2>,void,int,UE::Geometry::TSegment3<double>_const_&>
                  ::Call;
      local_1d0 = local_198;
      local_1d8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_1>,void,int,UE::Math::TVector<double>_const_&>
                  ::Call;
      bVar1 = UE::Geometry::EnumeratePolygroupSelectionElements
                        (param_2,param_3,&local_188,
                         (TFunctionRef<void___cdecl(int,UE::Math::TVector<double>_const_&)> *)
                         &local_1d8,
                         (TFunctionRef<void___cdecl(int,UE::Geometry::TSegment3<double>_const_&)> *)
                         &local_1c8,
                         (TFunctionRef<void___cdecl(int,UE::Geometry::TTriangle3<double>_const_&)> *
                         )&local_1b8,param_5,param_6);
      UE::Geometry::FGroupTopology::~FGroupTopology(&local_188);
    }
    else {
      local_1d0 = &local_1a8;
      local_1d8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_3>,void,int,UE::Geometry::TTriangle3<double>_const_&>
                  ::Call;
      local_1c0 = &local_1a0;
      local_1c8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_2>,void,int,UE::Geometry::TSegment3<double>_const_&>
                  ::Call;
      local_1b0 = local_198;
      local_1b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_1>,void,int,UE::Math::TVector<double>_const_&>
                  ::Call;
      bVar1 = UE::Geometry::EnumeratePolygroupSelectionElements
                        (param_2,param_3,param_4,
                         (TFunctionRef<void___cdecl(int,UE::Math::TVector<double>_const_&)> *)
                         &local_1b8,
                         (TFunctionRef<void___cdecl(int,UE::Geometry::TSegment3<double>_const_&)> *)
                         &local_1c8,
                         (TFunctionRef<void___cdecl(int,UE::Geometry::TTriangle3<double>_const_&)> *
                         )&local_1d8,param_5,param_6);
    }
  }
  else {
    local_1b0 = &local_1a8;
    local_1b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_3>,void,int,UE::Geometry::TTriangle3<double>_const_&>
                ::Call;
    local_1c0 = &local_1a0;
    local_1c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_2>,void,int,UE::Geometry::TSegment3<double>_const_&>
                ::Call;
    local_1d0 = local_198;
    local_1d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`ToolSelectionUtil::AccumulateSelectionElements'::__l2::<lambda_1>,void,int,UE::Math::TVector<double>_const_&>
                ::Call;
    bVar1 = UE::Geometry::EnumerateTriangleSelectionElements
                      (param_2,param_3,
                       (TFunctionRef<void___cdecl(int,UE::Math::TVector<double>_const_&)> *)
                       &local_1d8,
                       (TFunctionRef<void___cdecl(int,UE::Geometry::TSegment3<double>_const_&)> *)
                       &local_1c8,
                       (TFunctionRef<void___cdecl(int,UE::Geometry::TTriangle3<double>_const_&)> *)
                       &local_1b8,param_5,param_6);
  }
  return bVar1;
}

// AccumulateSelectionElements @ 14cb72840

/* WARNING: Enum "EEnumerateSelectionMapping": Some values do not have unique names */

bool __cdecl
ToolSelectionUtil::AccumulateSelectionElements
          (FGeometrySelectionElements *param_1,FGeometrySelection *param_2,FDynamicMesh3 *param_3,
          FGroupTopology *param_4,TTransform<double> *param_5,bool param_6)

{
  bool bVar1;
  
  bVar1 = AccumulateSelectionElements
                    (param_1,param_2,param_3,param_4,param_5,param_6 * '\x02' | Default);
  return bVar1;
}

// CalculateDimensionFromVisualAngleD @ 14cb75f30

double __cdecl
ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
          (FViewCameraState *param_1,TVector<double> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  float fVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  TVector<double>_u_0 local_b8;
  TQuaternion<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [3];
  
  dVar2 = (param_1->Position).field0_0x0._s_0.X;
  dVar3 = (param_1->Position).field0_0x0._s_0.Y;
  dVar1 = (param_1->Position).field0_0x0._s_0.Z;
  local_b8._s_0.X = (param_2->field0_0x0)._s_0.X - dVar2;
  local_b8._s_0.Y = (param_2->field0_0x0)._s_0.Y - dVar3;
  local_b8._s_0.Z = (param_2->field0_0x0)._s_0.Z - dVar1;
  local_98._s_0.Z = __real_3ff0000000000000;
  fVar6 = param_1->HorizontalFOVDegrees * __real_3c360b61;
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&param_1->Orientation,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_98._s_0);
  __libm_sse2_sincos_();
  local_98._s_0.X = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_78._s_0.X;
  local_98._s_0.Y = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_78._s_0.Y;
  local_98._s_0.Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_78._s_0.Z;
  pTVar5 = UE::Geometry::operator*<double>
                     (local_60,(TQuaternion<double> *)&local_98._s_0,
                      (TVector<double> *)&local_b8._s_0);
  local_b8._s_0.X = dVar2 + (pTVar5->field0_0x0)._s_0.X;
  local_b8._s_0.Y = dVar3 + (pTVar5->field0_0x0)._s_0.Y;
  local_b8._s_0.Z = dVar1 + (pTVar5->field0_0x0)._s_0.Z;
  dVar3 = local_b8._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar2 = local_b8._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar4 = local_b8._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar1 = CalculateViewVisualAngleD(param_1,param_2,(TVector<double> *)&local_b8._s_0);
  return (((double)fVar6 * param_3) / dVar1) * SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4);
}

// CalculateDimensionFromVisualAngleD @ 14cb760f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl
ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
          (UInteractiveTool *param_1,TVector<double> *param_2,double param_3)

{
  double dVar1;
  longlong *plVar2;
  TVector<double>_u_0 local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  
  plVar2 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d8))();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x398))(plVar2);
  local_38 = 0x42b40000;
  local_78._s_0.X = 0.0;
  local_78._s_0.Y = 0.0;
  local_78._s_0.Z = 0.0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = __real_3ff0000000000000;
  local_48 = ___xmm_3ff00000000000000000000000000000;
  uStack_40 = _UNK_15061cbc8;
  local_34 = 0x42c80000;
  local_30 = 0x3f800000;
  local_2c = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_78);
  dVar1 = CalculateDimensionFromVisualAngleD((FViewCameraState *)&local_78._s_0,param_2,param_3);
  return dVar1;
}

// CalculateNormalizedViewVisualAngleD @ 14cb761b0

double __cdecl
ToolSceneQueriesUtil::CalculateNormalizedViewVisualAngleD
          (FViewCameraState *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = 0.0;
  dVar2 = (param_1->Position).field0_0x0._s_0.X;
  dVar8 = (param_1->Position).field0_0x0._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.X - dVar2;
  dVar6 = (param_1->Position).field0_0x0._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Z - dVar6;
  dVar1 = (param_2->field0_0x0)._s_0.Y - dVar8;
  dVar3 = SQRT(dVar1 * dVar1 + dVar5 * dVar5 + dVar4 * dVar4);
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
    dVar1 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar3 = __real_3ff0000000000000 / dVar3;
    dVar5 = dVar3 * dVar5;
    dVar1 = dVar3 * dVar1;
    dVar3 = dVar3 * dVar4;
  }
  dVar2 = (param_3->field0_0x0)._s_0.X - dVar2;
  dVar8 = (param_3->field0_0x0)._s_0.Y - dVar8;
  dVar6 = (param_3->field0_0x0)._s_0.Z - dVar6;
  dVar4 = SQRT(dVar8 * dVar8 + dVar2 * dVar2 + dVar6 * dVar6);
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
    dVar8 = 0.0;
  }
  else {
    dVar4 = __real_3ff0000000000000 / dVar4;
    dVar7 = dVar4 * dVar2;
    dVar8 = dVar4 * dVar8;
    dVar4 = dVar4 * dVar6;
  }
  dVar5 = dVar8 * dVar1 + dVar7 * dVar5 + dVar4 * dVar3;
  dVar6 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar5) && (dVar6 = dVar5, __real_3ff0000000000000 <= dVar5)) {
    dVar6 = __real_3ff0000000000000;
  }
  dVar6 = acos(dVar6);
  return (double)CONCAT44((uint)((ulonglong)(dVar6 * __real_404ca5dc1a63c1f8) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar6 * __real_404ca5dc1a63c1f8,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) /
         (double)(param_1->HorizontalFOVDegrees * __real_3c360b61);
}

// CalculateViewVisualAngleD @ 14cb76390

double __cdecl
ToolSceneQueriesUtil::CalculateViewVisualAngleD
          (FViewCameraState *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = 0.0;
  dVar2 = (param_1->Position).field0_0x0._s_0.X;
  dVar8 = (param_1->Position).field0_0x0._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.X - dVar2;
  dVar6 = (param_1->Position).field0_0x0._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Z - dVar6;
  dVar1 = (param_2->field0_0x0)._s_0.Y - dVar8;
  dVar3 = SQRT(dVar1 * dVar1 + dVar5 * dVar5 + dVar4 * dVar4);
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
    dVar1 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar3 = __real_3ff0000000000000 / dVar3;
    dVar5 = dVar3 * dVar5;
    dVar1 = dVar3 * dVar1;
    dVar3 = dVar3 * dVar4;
  }
  dVar2 = (param_3->field0_0x0)._s_0.X - dVar2;
  dVar8 = (param_3->field0_0x0)._s_0.Y - dVar8;
  dVar6 = (param_3->field0_0x0)._s_0.Z - dVar6;
  dVar4 = SQRT(dVar8 * dVar8 + dVar2 * dVar2 + dVar6 * dVar6);
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
    dVar8 = 0.0;
  }
  else {
    dVar4 = __real_3ff0000000000000 / dVar4;
    dVar7 = dVar4 * dVar2;
    dVar8 = dVar4 * dVar8;
    dVar4 = dVar4 * dVar6;
  }
  dVar5 = dVar8 * dVar1 + dVar7 * dVar5 + dVar4 * dVar3;
  dVar6 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar5) && (dVar6 = dVar5, __real_3ff0000000000000 <= dVar5)) {
    dVar6 = __real_3ff0000000000000;
  }
  dVar6 = acos(dVar6);
  return (double)CONCAT44((uint)((ulonglong)(dVar6 * __real_404ca5dc1a63c1f8) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar6 * __real_404ca5dc1a63c1f8,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// CalculateViewVisualAngleD @ 14cb76550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl
ToolSceneQueriesUtil::CalculateViewVisualAngleD
          (UInteractiveTool *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  longlong *plVar2;
  TVector<double>_u_0 local_68;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined8 local_18;
  
  plVar2 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d8))();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x398))(plVar2);
  local_28 = 0x42b40000;
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  local_68._s_0.Z = 0.0;
  local_48 = 0;
  uStack_40 = 0;
  local_18 = __real_3ff0000000000000;
  local_38 = ___xmm_3ff00000000000000000000000000000;
  uStack_30 = _UNK_15061cbc8;
  local_24 = 0x42c80000;
  local_20 = 0x3f800000;
  local_1c = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_68);
  dVar1 = CalculateViewVisualAngleD((FViewCameraState *)&local_68._s_0,param_2,param_3);
  return dVar1;
}

// DebugRender @ 14cb80ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
ToolSelectionUtil::DebugRender
          (IToolsContextRenderAPI *param_1,FGeometrySelectionElements *param_2,float param_3,
          FLinearColor *param_4,float param_5,FLinearColor *param_6,float param_7,
          FLinearColor *param_8)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  TVector2<float>_u_0 TVar4;
  FName FVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UMaterialInstanceDynamic *this;
  FName *pFVar9;
  FMaterialRenderProxy *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FName FVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar29;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar30;
  undefined4 uVar31;
  undefined1 auVar28 [16];
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  double dVar56;
  undefined4 uVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar67;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar72;
  undefined4 uVar73;
  undefined1 auStackY_398 [32];
  undefined1 local_358 [8];
  ulonglong local_350;
  undefined1 local_348 [16];
  FLinearColor_u_0 local_338 [2];
  FName local_318;
  FName local_310;
  TVector2<float>_u_0 local_308;
  double dStack_300;
  double local_2f8;
  FPrimitiveDrawInterface *local_2f0;
  IToolsContextRenderAPI *local_2e8;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  FDynamicMeshBuilder local_2b0;
  TVector<float>_u_0 local_268;
  TVector2<float>_u_0 local_25c;
  TVector2<float>_u_0 local_254;
  TVector2<float>_u_0 local_24c;
  TVector2<float>_u_0 local_244;
  TVector2<float>_u_0 local_23c;
  TVector2<float>_u_0 local_234;
  TVector2<float>_u_0 local_22c;
  TVector2<float>_u_0 local_224;
  FPackedNormal local_21c;
  FPackedNormal local_218;
  FColor_u_0 local_214;
  FToolDataVisualizer local_208;
  ulonglong local_d8;
  
  if (param_1 != (IToolsContextRenderAPI *)0x0) {
    local_d8 = __security_cookie.value ^ (ulonglong)auStackY_398;
    local_310 = (FName)param_8;
    local_2d8._0_8_ = param_4;
    local_2e8 = param_1;
    local_2f0 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))();
    FDynamicMeshBuilder::FDynamicMeshBuilder
              (&local_2b0,local_2f0->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0
              );
    dVar51 = _UNK_150689648;
    TVar4 = ___xmm_3f800000000000000000000000000000;
    iVar6 = (param_2->Triangles).ArrayNum;
    uVar11 = (ulonglong)iVar6;
    FVar14 = (FName)(param_2->Triangles).AllocatorInstance.Data;
    local_308 = ___xmm_3f800000000000000000000000000000;
    dStack_300 = _UNK_150689648;
    local_318 = (FName)((longlong)FVar14 + uVar11 * 0x48);
    local_2f8 = 0.007812501848093234;
    local_338[0]._0_8_ = 0;
    local_338[0]._8_4_ = 0x3f800000;
    local_348._0_12_ = ZEXT812(0x3f800000);
    local_350 = CONCAT44(local_350._4_4_,iVar6);
    while( true ) {
      FVar5 = local_318;
      if ((param_2->Triangles).ArrayNum != (int)uVar11) {
        `TCheckedPointerIterator<UE::Geometry::TTriangle3<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_358);
      }
      if (FVar14 == FVar5) break;
      local_268._s_0.X = (float)*(double *)FVar14;
      local_268._s_0.Y = (float)*(double *)((longlong)FVar14 + 8);
      local_268._s_0.Z = (float)*(double *)((longlong)FVar14 + 0x10);
      FPackedNormal::FPackedNormal(&local_21c,(TVector<float> *)local_348);
      FPackedNormal::FPackedNormal(&local_218,(TVector<float> *)&local_338[0]._s_0);
      local_214 = FColor::White.field0_0x0;
      local_218.Vector._s_0.W = '\x7f';
      local_25c = TVar4;
      local_254 = TVar4;
      local_24c = TVar4;
      local_244 = TVar4;
      local_23c = TVar4;
      local_234 = TVar4;
      local_22c = TVar4;
      local_224 = TVar4;
      iVar6 = FDynamicMeshBuilder::AddVertex(&local_2b0,(FDynamicMeshVertex *)&local_268._s_0);
      local_268._s_0.X = (float)*(double *)((longlong)FVar14 + 0x18);
      local_268._s_0.Y = (float)*(double *)((longlong)FVar14 + 0x20);
      local_268._s_0.Z = (float)*(double *)((longlong)FVar14 + 0x28);
      FPackedNormal::FPackedNormal(&local_21c,(TVector<float> *)local_348);
      FPackedNormal::FPackedNormal(&local_218,(TVector<float> *)&local_338[0]._s_0);
      local_214 = FColor::White.field0_0x0;
      local_218.Vector._s_0.W = '\x7f';
      local_25c = (TVector2<float>_u_0)dVar51;
      local_254 = (TVector2<float>_u_0)dVar51;
      local_24c = (TVector2<float>_u_0)dVar51;
      local_244 = (TVector2<float>_u_0)dVar51;
      local_23c = (TVector2<float>_u_0)dVar51;
      local_234 = (TVector2<float>_u_0)dVar51;
      local_22c = (TVector2<float>_u_0)dVar51;
      local_224 = (TVector2<float>_u_0)dVar51;
      iVar7 = FDynamicMeshBuilder::AddVertex(&local_2b0,(FDynamicMeshVertex *)&local_268._s_0);
      local_268._s_0.X = (float)*(double *)((longlong)FVar14 + 0x30);
      local_268._s_0.Y = (float)*(double *)((longlong)FVar14 + 0x38);
      local_268._s_0.Z = (float)*(double *)((longlong)FVar14 + 0x40);
      FPackedNormal::FPackedNormal(&local_21c,(TVector<float> *)local_348);
      FPackedNormal::FPackedNormal(&local_218,(TVector<float> *)&local_338[0]._s_0);
      local_214 = FColor::White.field0_0x0;
      local_218.Vector._s_0.W = '\x7f';
      local_25c = (TVector2<float>_u_0)0x3f8000003f800000;
      local_254 = (TVector2<float>_u_0)0x3f8000003f800000;
      local_24c = (TVector2<float>_u_0)0x3f8000003f800000;
      local_244 = (TVector2<float>_u_0)0x3f8000003f800000;
      local_23c = (TVector2<float>_u_0)0x3f8000003f800000;
      local_234 = (TVector2<float>_u_0)0x3f8000003f800000;
      local_22c = (TVector2<float>_u_0)0x3f8000003f800000;
      local_224 = (TVector2<float>_u_0)0x3f8000003f800000;
      iVar8 = FDynamicMeshBuilder::AddVertex(&local_2b0,(FDynamicMeshVertex *)&local_268._s_0);
      FDynamicMeshBuilder::AddTriangle(&local_2b0,iVar6,iVar7,iVar8);
      uVar11 = local_350 & 0xffffffff;
      FVar14 = (FName)((longlong)FVar14 + 0x48);
    }
    local_350 = 0;
    this = UMaterialInstanceDynamic::Create
                     ((UMaterialInterface *)(GEngine->ConstraintLimitMaterial).field0_0x0.DebugPtr,
                      (UObject *)0x0,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pFVar9 = ::FName::FName(&local_318,"Color");
    local_338[0]._0_8_ = *(undefined8 *)local_310;
    local_338[0]._8_8_ = *(double *)((longlong)local_310 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this,*pFVar9,(FLinearColor *)&local_338[0]._s_0);
    pFVar9 = ::FName::FName(&local_310,"Desaturation");
    UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar9,__real_3f19999a);
    pFVar10 = (FMaterialRenderProxy *)(**(code **)(this->_padding_ + 0x310))(this);
    FDynamicMeshBuilder::Draw
              (&local_2b0,local_2f0,&UE::Math::TMatrix<double>::Identity,pFVar10,'\0',false,false,
               (FHitProxyId)0xffffffff);
    FToolDataVisualizer::FToolDataVisualizer(&local_208);
    local_208.DepthBias = param_7;
    FToolDataVisualizer::BeginFrame(&local_208,local_2e8);
    iVar6 = (param_2->Segments).ArrayNum;
    pFVar12 = (param_2->Segments).AllocatorInstance.Data;
    local_208.LineColor.field0_0x0._0_8_ = *(undefined8 *)local_2d8._0_8_;
    local_208.LineColor.field0_0x0._8_8_ = *(undefined8 *)(local_2d8._0_8_ + 8);
    local_208.PointColor.field0_0x0._0_8_ = *(undefined8 *)&param_6->field0_0x0;
    local_208.PointColor.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
    local_208.ArrowHeadSize = 4.0;
    local_208.PointSize = param_5;
    pFVar13 = pFVar12 + (longlong)iVar6 * 0x38;
    local_208.LineThickness = param_3;
    while( true ) {
      if ((param_2->Segments).ArrayNum != iVar6) {
        `TCheckedPointerIterator<UE::Geometry::TSegment3<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_358);
      }
      if (pFVar12 == pFVar13) break;
      auVar3._8_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      auVar3._0_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      dVar51 = *(double *)(pFVar12 + 0x30);
      dVar1 = local_208.TotalTransform.Rotation.XY.m128d_f64[1];
      uVar57 = (undefined4)((ulonglong)local_208.TotalTransform.Rotation.ZW.m128d_f64[0] >> 0x20);
      auVar68._0_8_ =
           (*(double *)(pFVar12 + 0x10) + dVar51 * *(double *)(pFVar12 + 0x28)) *
           local_208.TotalTransform.Scale3D.ZW.m128d_f64[0];
      auVar68._8_8_ = local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      local_2d8._8_4_ = SUB84(local_208.TotalTransform.Rotation.ZW.m128d_f64[0],0);
      local_2d8._0_8_ = dVar1;
      local_2d8._12_4_ = uVar57;
      local_348 = blendpd((undefined1  [16])local_208.TotalTransform.Rotation.XY.m128d_f64,auVar3,2)
      ;
      dVar64 = local_208.TotalTransform.Scale3D.XY.m128d_f64[0] *
               (*(double *)pFVar12 + dVar51 * *(double *)(pFVar12 + 0x18));
      dVar67 = local_208.TotalTransform.Scale3D.XY.m128d_f64[1] *
               (*(double *)(pFVar12 + 8) + dVar51 * *(double *)(pFVar12 + 0x20));
      auVar58._8_4_ = SUB84(dVar67,0);
      auVar58._0_8_ = dVar64;
      uVar31 = (undefined4)((ulonglong)dVar67 >> 0x20);
      auVar58._12_4_ = uVar31;
      local_338[0]._0_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      local_338[0]._8_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      auVar32._8_4_ = SUB84(dVar67,0);
      auVar32._0_8_ = dVar64;
      auVar32._12_4_ = uVar31;
      auVar17._8_4_ = SUB84(local_208.TotalTransform.Rotation.ZW.m128d_f64[0],0);
      auVar17._0_8_ = dVar1;
      auVar17._12_4_ = uVar57;
      dVar30 = local_208.TotalTransform.Rotation.XY.m128d_f64[0];
      auVar33 = blendpd(auVar32,auVar68,2);
      auVar59._0_8_ = auVar58._8_8_ * dVar30 - dVar1 * dVar64;
      auVar59._8_8_ = auVar68._0_8_ * dVar1 - auVar17._8_8_ * dVar67;
      auVar52._8_4_ = SUB84(auVar59._8_8_,0);
      auVar52._0_8_ = auVar59._0_8_;
      auVar52._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
      dVar15 = local_348._0_8_;
      dVar29 = local_348._8_8_;
      dVar2 = local_208.TotalTransform.Scale3D.XY.m128d_f64[0] *
              (*(double *)pFVar12 - dVar51 * *(double *)(pFVar12 + 0x18));
      dVar16 = local_208.TotalTransform.Scale3D.XY.m128d_f64[1] *
               (*(double *)(pFVar12 + 8) - dVar51 * *(double *)(pFVar12 + 0x20));
      uVar72 = SUB84(dVar16,0);
      uVar73 = (undefined4)((ulonglong)dVar16 >> 0x20);
      auVar34._0_8_ =
           auVar33._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] -
           dVar15 * auVar68._0_8_;
      auVar34._8_8_ =
           auVar33._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           dVar29 * auVar68._8_8_;
      auVar33 = blendpd(auVar59,auVar34,2);
      dVar50 = auVar52._8_8_ + auVar52._8_8_;
      dVar56 = auVar34._0_8_ + auVar34._0_8_;
      auVar60._0_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar60._8_8_ = auVar33._8_8_ + auVar33._8_8_;
      uVar31 = SUB84(dVar56,0);
      auVar44._8_4_ = uVar31;
      auVar44._0_8_ = dVar50;
      uVar57 = (undefined4)((ulonglong)dVar56 >> 0x20);
      auVar44._12_4_ = uVar57;
      auVar18._8_4_ = uVar31;
      auVar18._0_8_ = dVar50;
      auVar18._12_4_ = uVar57;
      auVar35._8_4_ = uVar31;
      auVar35._0_8_ = dVar50;
      auVar35._12_4_ = uVar57;
      auVar33 = blendpd(auVar35,auVar60,2);
      auVar65._0_8_ =
           (*(double *)(pFVar12 + 0x10) - dVar51 * *(double *)(pFVar12 + 0x28)) *
           local_208.TotalTransform.Scale3D.ZW.m128d_f64[0];
      auVar65._8_8_ = local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar45._0_8_ = auVar44._8_8_ * dVar30 - dVar50 * dVar1;
      auVar45._8_8_ =
           auVar60._0_8_ * dVar1 - auVar18._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0]
      ;
      auVar19._8_4_ = SUB84(auVar60._8_8_,0);
      auVar19._0_8_ = auVar60._0_8_;
      auVar19._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar36._0_8_ =
           auVar33._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] -
           auVar60._0_8_ * dVar15;
      auVar36._8_8_ =
           auVar33._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar19._8_8_ * dVar29;
      auVar20._8_4_ = SUB84(auVar45._8_8_,0);
      auVar20._0_8_ = auVar45._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
      auVar33 = blendpd(auVar45,auVar36,2);
      local_308 = (TVector2<float>_u_0)
                  (dVar50 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar64 +
                   auVar20._8_8_ + local_208.TotalTransform.Translation.XY.m128d_f64[0]);
      dStack_300 = dVar56 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar67 +
                   auVar36._0_8_ + local_208.TotalTransform.Translation.XY.m128d_f64[1];
      local_2f8 = auVar60._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + auVar68._0_8_
                  + auVar33._0_8_ + local_208.TotalTransform.Translation.ZW.m128d_f64[0];
      auVar61._8_4_ = uVar72;
      auVar61._0_8_ = dVar2;
      auVar61._12_4_ = uVar73;
      auVar21._8_4_ = uVar72;
      auVar21._0_8_ = dVar2;
      auVar21._12_4_ = uVar73;
      auVar37._8_4_ = uVar72;
      auVar37._0_8_ = dVar2;
      auVar37._12_4_ = uVar73;
      auVar33 = blendpd(auVar37,auVar65,2);
      auVar62._0_8_ = auVar61._8_8_ * dVar30 - dVar2 * dVar1;
      auVar62._8_8_ =
           auVar65._0_8_ * dVar1 - auVar21._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0]
      ;
      auVar22._8_4_ = SUB84(auVar65._8_8_,0);
      auVar22._0_8_ = auVar65._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
      auVar53._8_4_ = SUB84(auVar62._8_8_,0);
      auVar53._0_8_ = auVar62._0_8_;
      auVar53._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
      auVar38._0_8_ =
           auVar33._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] -
           auVar65._0_8_ * dVar15;
      auVar38._8_8_ =
           auVar33._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar22._8_8_ * dVar29;
      auVar33 = blendpd(auVar62,auVar38,2);
      dVar51 = auVar53._8_8_ + auVar53._8_8_;
      dVar50 = auVar38._0_8_ + auVar38._0_8_;
      auVar63._0_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar63._8_8_ = auVar33._8_8_ + auVar33._8_8_;
      uVar31 = SUB84(dVar50,0);
      auVar46._8_4_ = uVar31;
      auVar46._0_8_ = dVar51;
      uVar57 = (undefined4)((ulonglong)dVar50 >> 0x20);
      auVar46._12_4_ = uVar57;
      auVar23._8_4_ = uVar31;
      auVar23._0_8_ = dVar51;
      auVar23._12_4_ = uVar57;
      auVar39._8_4_ = uVar31;
      auVar39._0_8_ = dVar51;
      auVar39._12_4_ = uVar57;
      auVar33 = blendpd(auVar39,auVar63,2);
      auVar47._0_8_ = auVar46._8_8_ * dVar30 - dVar51 * dVar1;
      auVar47._8_8_ =
           auVar63._0_8_ * dVar1 - auVar23._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0]
      ;
      auVar24._8_4_ = SUB84(auVar63._8_8_,0);
      auVar24._0_8_ = auVar63._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
      auVar40._0_8_ =
           auVar33._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] -
           auVar63._0_8_ * dVar15;
      auVar40._8_8_ =
           auVar33._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar24._8_8_ * dVar29;
      auVar25._8_4_ = SUB84(auVar47._8_8_,0);
      auVar25._0_8_ = auVar47._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
      local_2c8 = dVar51 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar2 + auVar25._8_8_
                  + local_208.TotalTransform.Translation.XY.m128d_f64[0];
      dStack_2c0 = dVar50 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar16 +
                   auVar40._0_8_ + local_208.TotalTransform.Translation.XY.m128d_f64[1];
      auVar33 = blendpd(auVar47,auVar40,2);
      local_2b8 = auVar63._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + auVar65._0_8_
                  + auVar33._0_8_ + local_208.TotalTransform.Translation.ZW.m128d_f64[0];
      (**(code **)(local_208._padding_ + 8))(&local_208,&local_2c8,&local_308,&local_208.LineColor);
      pFVar12 = pFVar12 + 0x38;
    }
    iVar6 = (param_2->Points).ArrayNum;
    pFVar13 = (param_2->Points).AllocatorInstance.Data;
    pFVar12 = pFVar13 + (longlong)iVar6 * 0x18;
    while( true ) {
      if ((param_2->Points).ArrayNum != iVar6) {
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_358);
      }
      if (pFVar13 == pFVar12) break;
      auVar66._8_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      auVar66._0_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      dVar2 = *(double *)(pFVar13 + 0x10) * local_208.TotalTransform.Scale3D.ZW.m128d_f64[0];
      dVar16 = local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar15 = local_208.TotalTransform.Rotation.XY.m128d_f64[1];
      dVar51 = local_208.TotalTransform.Scale3D.XY.m128d_f64[0] * *(double *)pFVar13;
      dVar1 = local_208.TotalTransform.Scale3D.XY.m128d_f64[1] * *(double *)(pFVar13 + 8);
      uVar31 = (undefined4)((ulonglong)dVar1 >> 0x20);
      auVar26._8_4_ = SUB84(local_208.TotalTransform.Rotation.ZW.m128d_f64[0],0);
      auVar26._0_8_ = dVar15;
      auVar26._12_4_ = (int)((ulonglong)local_208.TotalTransform.Rotation.ZW.m128d_f64[0] >> 0x20);
      auVar66 = blendpd((undefined1  [16])local_208.TotalTransform.Rotation.XY.m128d_f64,auVar66,2);
      auVar69._8_4_ = SUB84(dVar1,0);
      auVar69._0_8_ = dVar51;
      auVar69._12_4_ = uVar31;
      auVar41._8_4_ = SUB84(dVar1,0);
      auVar41._0_8_ = dVar51;
      auVar41._12_4_ = uVar31;
      auVar33._8_4_ = SUB84(dVar16,0);
      auVar33._0_8_ = dVar2;
      auVar33._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      auVar33 = blendpd(auVar41,auVar33,2);
      auVar70._0_8_ =
           auVar69._8_8_ * local_208.TotalTransform.Rotation.XY.m128d_f64[0] - dVar15 * dVar51;
      auVar70._8_8_ = dVar2 * dVar15 - auVar26._8_8_ * dVar1;
      auVar42._0_8_ =
           auVar33._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] - auVar66._0_8_ * dVar2
      ;
      auVar42._8_8_ =
           auVar33._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar66._8_8_ * dVar16;
      auVar27._8_4_ = SUB84(auVar70._8_8_,0);
      auVar27._0_8_ = auVar70._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
      dVar16 = auVar27._8_8_ + auVar27._8_8_;
      dVar30 = auVar42._0_8_ + auVar42._0_8_;
      auVar33 = blendpd(auVar70,auVar42,2);
      auVar43._8_4_ = SUB84(local_208.TotalTransform.Rotation.ZW.m128d_f64[1],0);
      auVar43._0_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      auVar43._12_4_ = (int)((ulonglong)local_208.TotalTransform.Rotation.ZW.m128d_f64[1] >> 0x20);
      auVar54._8_4_ = SUB84(dVar30,0);
      auVar54._0_8_ = dVar16;
      uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar54._12_4_ = uVar31;
      auVar71._0_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar71._8_8_ = auVar33._8_8_ + auVar33._8_8_;
      auVar48._8_4_ = SUB84(dVar30,0);
      auVar48._0_8_ = dVar16;
      auVar48._12_4_ = uVar31;
      auVar55._0_8_ =
           auVar54._8_8_ * local_208.TotalTransform.Rotation.XY.m128d_f64[0] - dVar15 * dVar16;
      auVar55._8_8_ =
           auVar71._0_8_ * dVar15 - local_208.TotalTransform.Rotation.ZW.m128d_f64[0] * dVar30;
      auVar33 = blendpd(auVar48,auVar71,2);
      auVar28._8_4_ = SUB84(auVar55._8_8_,0);
      auVar28._0_8_ = auVar55._0_8_;
      auVar28._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
      auVar49._0_8_ =
           auVar33._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] -
           auVar66._0_8_ * auVar71._0_8_;
      auVar49._8_8_ =
           auVar33._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar66._8_8_ * auVar71._8_8_;
      auVar33 = blendpd(auVar55,auVar49,2);
      local_2b8 = local_208.TotalTransform.Rotation.ZW.m128d_f64[1] * auVar71._0_8_ + dVar2 +
                  auVar33._0_8_ + local_208.TotalTransform.Translation.ZW.m128d_f64[0];
      local_2c8 = local_208.TotalTransform.Rotation.ZW.m128d_f64[1] * dVar16 + dVar51 +
                  auVar28._8_8_ + local_208.TotalTransform.Translation.XY.m128d_f64[0];
      dStack_2c0 = auVar43._8_8_ * dVar30 + dVar1 + auVar49._0_8_ +
                   local_208.TotalTransform.Translation.XY.m128d_f64[1];
      (**(code **)(local_208._padding_ + 0x18))(&local_208,&local_2c8,&local_208.PointColor);
      pFVar13 = pFVar13 + 0x18;
    }
    FToolDataVisualizer::EndFrame(&local_208);
    FToolDataVisualizer::~FToolDataVisualizer(&local_208);
    FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_2b0);
  }
  return;
}

// DebugRenderGeometrySelectionElements @ 14cb81aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ToolSelectionUtil::DebugRenderGeometrySelectionElements
          (IToolsContextRenderAPI *param_1,FGeometrySelectionElements *param_2,bool param_3)

{
  float fVar1;
  float fVar2;
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  FLinearColor_u_0 local_18;
  
  if (param_3) {
    fStack_34 = __real_3f800000;
    local_38 = __real_3f800000;
    fStack_24 = __real_3f800000;
    local_28 = __real_3f800000;
    _uStack_30 = 0x3f80000000000000;
    _uStack_20 = 0x3f80000000000000;
    fVar1 = __real_3f800000;
    fVar2 = __real_40a00000;
  }
  else {
    _local_38 = (ulonglong)__real_3e99999a << 0x20;
    uStack_2c = 0x3f800000;
    uStack_30 = __real_3f733333;
    _local_28 = (ulonglong)__real_3e99999a << 0x20;
    uStack_1c = 0x3f800000;
    uStack_20 = __real_3f733333;
    fVar1 = __real_40400000;
    fVar2 = __real_41200000;
  }
  local_18._0_8_ = ___xmm_3f80000000000000000000003f800000;
  local_18._8_8_ = _UNK_15076b188;
  DebugRender(param_1,param_2,fVar1,(FLinearColor *)&local_28,fVar2,(FLinearColor *)&local_38,0.0,
              (FLinearColor *)&local_18._s_0);
  return;
}

// EmptyLinkFunctionForGeneratedCodeBoundarySelectionMechanic @ 14cb88680

void __cdecl EmptyLinkFunctionForGeneratedCodeBoundarySelectionMechanic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDynamicMeshProvider @ 14cb88690

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicMeshProvider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometrySelectionManager @ 14cb886a0

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometrySelectionManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshTopologySelectionMechanic @ 14cb886b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshTopologySelectionMechanic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeModelingSceneSnappingManager @ 14cb886c0

void __cdecl EmptyLinkFunctionForGeneratedCodeModelingSceneSnappingManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePolygonSelectionMechanic @ 14cb886d0

void __cdecl EmptyLinkFunctionForGeneratedCodePolygonSelectionMechanic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeToolHostCustomizationAPI @ 14cb886e0

void __cdecl EmptyLinkFunctionForGeneratedCodeToolHostCustomizationAPI(void)

{
  return;
}

// FindNearestVisibleObjectHit @ 14cb8e170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
ToolSceneQueriesUtil::FindNearestVisibleObjectHit
          (USceneSnappingManager *param_1,FHitResult *param_2,TRay<double> *param_3,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_258 [48];
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_1e0;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined4 local_188;
  undefined8 local_138;
  undefined4 local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (param_1 != (USceneSnappingManager *)0x0) {
    local_218 = (param_3->Origin).field0_0x0._s_0.X;
    dStack_210 = (param_3->Origin).field0_0x0._s_0.Y;
    local_208 = (param_3->Origin).field0_0x0._s_0.Z;
    dStack_200 = (param_3->Direction).field0_0x0._s_0.X;
    local_1f8 = (param_3->Direction).field0_0x0._s_0.Y;
    dStack_1f0 = (param_3->Direction).field0_0x0._s_0.Z;
    local_1e8 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1d8 = param_5;
    local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_190 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_1a0 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    dStack_198 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_188 = 0xffffffff;
    local_88 = 0;
    local_60 = 0;
    local_58 = 0;
    local_48 = 0;
    local_40 = 0;
    local_1e0 = param_4;
    memset(&local_138,0,0x100);
    local_80 = 0;
    uStack_78 = 0;
    local_228 = 0;
    uStack_220 = 0xffffffff;
    uStack_21c = 0;
    local_138._4_4_ = 0x3f800000;
    local_94 = 0xffffffff;
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0xffffffff;
    uStack_64 = 0;
    cVar5 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_218,&local_1c8);
    if (cVar5 != '\0') {
      lVar7 = 2;
      puVar6 = &local_138;
      do {
        uVar1 = *puVar6;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        param_2->FaceIndex = (int)uVar1;
        param_2->Time = (float)(int)((ulonglong)uVar1 >> 0x20);
        param_2->Distance = (float)(int)uVar2;
        param_2->_padding_ = (int)((ulonglong)uVar2 >> 0x20);
        uVar1 = puVar6[4];
        uVar2 = puVar6[5];
        *(undefined8 *)&param_2->Location = uVar3;
        *(undefined8 *)&(param_2->Location).field_0x8 = uVar4;
        uVar3 = puVar6[6];
        uVar4 = puVar6[7];
        *(undefined8 *)&(param_2->Location).field_0x10 = uVar1;
        *(undefined8 *)&param_2->ImpactPoint = uVar2;
        uVar1 = puVar6[8];
        uVar2 = puVar6[9];
        *(undefined8 *)&(param_2->ImpactPoint).field_0x8 = uVar3;
        *(undefined8 *)&(param_2->ImpactPoint).field_0x10 = uVar4;
        uVar3 = puVar6[10];
        uVar4 = puVar6[0xb];
        *(undefined8 *)&param_2->Normal = uVar1;
        *(undefined8 *)&(param_2->Normal).field_0x8 = uVar2;
        uVar1 = puVar6[0xc];
        uVar2 = puVar6[0xd];
        *(undefined8 *)&(param_2->Normal).field_0x10 = uVar3;
        *(undefined8 *)&param_2->ImpactNormal = uVar4;
        uVar3 = puVar6[0xe];
        uVar4 = puVar6[0xf];
        *(undefined8 *)&(param_2->ImpactNormal).field_0x8 = uVar1;
        *(undefined8 *)&(param_2->ImpactNormal).field_0x10 = uVar2;
        *(undefined8 *)&param_2->TraceStart = uVar3;
        *(undefined8 *)&(param_2->TraceStart).field_0x8 = uVar4;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 0x10;
        param_2 = (FHitResult *)&(param_2->TraceStart).field_0x10;
      } while (lVar7 != 0);
      return true;
    }
  }
  return false;
}

// FindNearestVisibleObjectHit @ 14cb8e340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ToolSceneQueriesUtil::FindNearestVisibleObjectHit
          (UWorld *param_1,FHitResult *param_2,TRay<double> *param_3,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X =
       (param_3->Direction).field0_0x0._s_0.X * __real_4290000000000000 +
       (param_3->Origin).field0_0x0._s_0.X;
  local_28._s_0.Z =
       (param_3->Direction).field0_0x0._s_0.Z * __real_4290000000000000 +
       (param_3->Origin).field0_0x0._s_0.Z;
  local_28._s_0.Y =
       (param_3->Direction).field0_0x0._s_0.Y * __real_4290000000000000 +
       (param_3->Origin).field0_0x0._s_0.Y;
  bVar1 = FindNearestVisibleObjectHit
                    (param_1,param_2,&param_3->Origin,(TVector<double> *)&local_28._s_0,param_4,
                     param_5);
  return bVar1;
}

// FindNearestVisibleObjectHit @ 14cb8e3c0

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

bool __cdecl
ToolSceneQueriesUtil::FindNearestVisibleObjectHit
          (UWorld *param_1,FHitResult *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  FCollisionQueryFlag *pFVar8;
  AActor *pAVar9;
  UObject *pUVar10;
  FHitResult *pFVar11;
  FWeakObjectPtr *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FWeakObjectPtr *this;
  FWeakObjectPtr *pFVar15;
  float fVar16;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_100;
  FCollisionObjectQueryParams local_f0;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar8 = FCollisionQueryFlag::Get();
  local_f0.ObjectTypesToQuery = pFVar8->AllObjectQueryFlag;
  local_f0.IgnoreMask = '\0';
  FCollisionQueryParams::FCollisionQueryParams(&local_e8,&FCollisionQueryParams::DefaultQueryParam);
  local_e8.bTraceComplex = true;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  bVar6 = UWorld::LineTraceMultiByObjectType(param_1,&local_100,param_3,param_4,&local_f0,&local_e8)
  ;
  if (bVar6) {
    this = (FWeakObjectPtr *)(local_100.AllocatorInstance.Data + 0xd8);
    iVar5 = local_100.ArrayNum;
    pFVar15 = (FWeakObjectPtr *)
              (local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 0x100);
    fVar16 = __real_7f7fffff;
    while( true ) {
      if (local_100.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_108);
      }
      if (this + -0x1b == pFVar15) break;
      if ((float)this[-0x1a].ObjectIndex <= fVar16 && fVar16 != (float)this[-0x1a].ObjectIndex) {
        pAVar9 = FActorInstanceHandle::FetchActor((FActorInstanceHandle *)(this + -4));
        if (((pAVar9 == (AActor *)0x0) || (!(bool)pAVar9->bHidden)) &&
           ((pUVar10 = FWeakObjectPtr::Get(this), pUVar10 == (UObject *)0x0 ||
            (cVar7 = (**(code **)(*(longlong *)pUVar10 + 0x560))(pUVar10), cVar7 != '\0')))) {
LAB_14cb8e54a:
          if (param_5 != (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
            pUVar10 = FWeakObjectPtr::Get(this);
            pFVar13 = (param_5->AllocatorInstance).Data;
            pFVar1 = pFVar13 + (longlong)param_5->ArrayNum * 8;
            for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
              if (*(UObject **)pFVar13 == pUVar10) goto LAB_14cb8e5df;
            }
          }
          lVar14 = 2;
          pFVar11 = param_2;
          pFVar12 = this + -0x1b;
          do {
            iVar2 = pFVar12->ObjectSerialNumber;
            iVar3 = pFVar12[1].ObjectIndex;
            iVar4 = pFVar12[1].ObjectSerialNumber;
            pFVar11->FaceIndex = pFVar12->ObjectIndex;
            pFVar11->Time = (float)iVar2;
            pFVar11->Distance = (float)iVar3;
            pFVar11->_padding_ = iVar4;
            iVar2 = pFVar12[2].ObjectSerialNumber;
            iVar3 = pFVar12[3].ObjectIndex;
            iVar4 = pFVar12[3].ObjectSerialNumber;
            *(int *)&(pFVar11->Location).field_0x0 = pFVar12[2].ObjectIndex;
            *(int *)&(pFVar11->Location).field_0x4 = iVar2;
            *(int *)&(pFVar11->Location).field_0x8 = iVar3;
            *(int *)&(pFVar11->Location).field_0xc = iVar4;
            iVar2 = pFVar12[4].ObjectSerialNumber;
            iVar3 = pFVar12[5].ObjectIndex;
            iVar4 = pFVar12[5].ObjectSerialNumber;
            *(int *)&(pFVar11->Location).field_0x10 = pFVar12[4].ObjectIndex;
            *(int *)&(pFVar11->Location).field_0x14 = iVar2;
            *(int *)&(pFVar11->ImpactPoint).field_0x0 = iVar3;
            *(int *)&(pFVar11->ImpactPoint).field_0x4 = iVar4;
            iVar2 = pFVar12[6].ObjectSerialNumber;
            iVar3 = pFVar12[7].ObjectIndex;
            iVar4 = pFVar12[7].ObjectSerialNumber;
            *(int *)&(pFVar11->ImpactPoint).field_0x8 = pFVar12[6].ObjectIndex;
            *(int *)&(pFVar11->ImpactPoint).field_0xc = iVar2;
            *(int *)&(pFVar11->ImpactPoint).field_0x10 = iVar3;
            *(int *)&(pFVar11->ImpactPoint).field_0x14 = iVar4;
            iVar2 = pFVar12[8].ObjectSerialNumber;
            iVar3 = pFVar12[9].ObjectIndex;
            iVar4 = pFVar12[9].ObjectSerialNumber;
            *(int *)&(pFVar11->Normal).field_0x0 = pFVar12[8].ObjectIndex;
            *(int *)&(pFVar11->Normal).field_0x4 = iVar2;
            *(int *)&(pFVar11->Normal).field_0x8 = iVar3;
            *(int *)&(pFVar11->Normal).field_0xc = iVar4;
            iVar2 = pFVar12[10].ObjectSerialNumber;
            iVar3 = pFVar12[0xb].ObjectIndex;
            iVar4 = pFVar12[0xb].ObjectSerialNumber;
            *(int *)&(pFVar11->Normal).field_0x10 = pFVar12[10].ObjectIndex;
            *(int *)&(pFVar11->Normal).field_0x14 = iVar2;
            *(int *)&(pFVar11->ImpactNormal).field_0x0 = iVar3;
            *(int *)&(pFVar11->ImpactNormal).field_0x4 = iVar4;
            iVar2 = pFVar12[0xc].ObjectSerialNumber;
            iVar3 = pFVar12[0xd].ObjectIndex;
            iVar4 = pFVar12[0xd].ObjectSerialNumber;
            *(int *)&(pFVar11->ImpactNormal).field_0x8 = pFVar12[0xc].ObjectIndex;
            *(int *)&(pFVar11->ImpactNormal).field_0xc = iVar2;
            *(int *)&(pFVar11->ImpactNormal).field_0x10 = iVar3;
            *(int *)&(pFVar11->ImpactNormal).field_0x14 = iVar4;
            iVar2 = pFVar12[0xe].ObjectSerialNumber;
            iVar3 = pFVar12[0xf].ObjectIndex;
            iVar4 = pFVar12[0xf].ObjectSerialNumber;
            *(int *)&(pFVar11->TraceStart).field_0x0 = pFVar12[0xe].ObjectIndex;
            *(int *)&(pFVar11->TraceStart).field_0x4 = iVar2;
            *(int *)&(pFVar11->TraceStart).field_0x8 = iVar3;
            *(int *)&(pFVar11->TraceStart).field_0xc = iVar4;
            lVar14 = lVar14 + -1;
            pFVar11 = (FHitResult *)&(pFVar11->TraceStart).field_0x10;
            pFVar12 = pFVar12 + 0x10;
          } while (lVar14 != 0);
          fVar16 = (float)this[-0x1a].ObjectIndex;
          goto LAB_14cb8e5df;
        }
        if (param_6 == (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0)
        goto LAB_14cb8e5df;
        pUVar10 = FWeakObjectPtr::Get(this);
        pFVar13 = (param_6->AllocatorInstance).Data;
        pFVar1 = pFVar13 + (longlong)param_6->ArrayNum * 8;
        if (pFVar13 == pFVar1) goto LAB_14cb8e5df;
        do {
          if (*(UObject **)pFVar13 == pUVar10) goto LAB_14cb8e54a;
          pFVar13 = pFVar13 + 8;
        } while (pFVar13 != pFVar1);
        this = this + 0x20;
      }
      else {
LAB_14cb8e5df:
        this = this + 0x20;
      }
    }
    bVar6 = fVar16 < __real_7f7fffff;
  }
  else {
    bVar6 = false;
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar6;
}

// FindNearestVisibleObjectHit @ 14cb8e680

bool __cdecl
ToolSceneQueriesUtil::FindNearestVisibleObjectHit
          (UInteractiveTool *param_1,FHitResult *param_2,TRay<double> *param_3,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  UInteractiveToolManager *pUVar2;
  USceneSnappingManager *pUVar3;
  
  pUVar2 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))();
  pUVar3 = USceneSnappingManager::Find(pUVar2);
  bVar1 = FindNearestVisibleObjectHit(pUVar3,param_2,param_3,param_4,param_5);
  return bVar1;
}

// FindNearestVisibleObjectHit @ 14cb8e6d0

bool __cdecl
ToolSceneQueriesUtil::FindNearestVisibleObjectHit
          (UInteractiveTool *param_1,FHitResult *param_2,TVector<double> *param_3,
          TVector<double> *param_4,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_6)

{
  double dVar1;
  bool bVar2;
  UInteractiveToolManager *pUVar3;
  USceneSnappingManager *pUVar4;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_38._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_38._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y - local_38._s_0.Y;
  local_20._s_0.Z = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  local_20._8_4_ = SUB84(dVar1,0);
  local_20._0_8_ = (param_4->field0_0x0)._s_0.X - local_38._s_0.X;
  local_20._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_20._s_0,__real_3e45798ee0000000);
  pUVar3 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  pUVar4 = USceneSnappingManager::Find(pUVar3);
  bVar2 = FindNearestVisibleObjectHit(pUVar4,param_2,(TRay<double> *)&local_38._s_0,param_5,param_6)
  ;
  return bVar2;
}

// FindNearestVisibleObjectHit_Internal @ 14cb8e770

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

bool __cdecl
FindNearestVisibleObjectHit_Internal
          (UWorld *param_1,FHitResult *param_2,TRay<double> *param_3,bool param_4,
          FSceneQueryVisibilityFilter *param_5,FSceneGeometrySpatialCache *param_6)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  TConsoleVariableData<bool> *pTVar6;
  int iVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  FCollisionQueryFlag *pFVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UPrimitiveComponent *pUVar14;
  FHitResult *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  FWeakObjectPtr *this;
  FWeakObjectPtr *pFVar18;
  FWeakObjectPtr *pFVar19;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_150;
  FCollisionObjectQueryParams local_140;
  FSceneQueryVisibilityFilter *local_138;
  FHitResult *local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_138 = param_5;
  local_130 = param_2;
  pFVar11 = FCollisionQueryFlag::Get();
  local_140.ObjectTypesToQuery = pFVar11->AllObjectQueryFlag;
  local_140.IgnoreMask = '\0';
  FCollisionQueryParams::FCollisionQueryParams(&local_f8,&FCollisionQueryParams::DefaultQueryParam);
  uVar17 = 0;
  local_f8.bTraceComplex = true;
  local_128._s_0.X =
       (param_3->Direction).field0_0x0._s_0.X * __real_4290000000000000 +
       (param_3->Origin).field0_0x0._s_0.X;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128._s_0.Z =
       (param_3->Direction).field0_0x0._s_0.Z * __real_4290000000000000 +
       (param_3->Origin).field0_0x0._s_0.Z;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  local_110._s_0.Z = (param_3->Origin).field0_0x0._s_0.Z;
  local_128._s_0.Y =
       (param_3->Direction).field0_0x0._s_0.Y * __real_4290000000000000 +
       (param_3->Origin).field0_0x0._s_0.Y;
  local_110._s_0.X = (param_3->Origin).field0_0x0._s_0.X;
  local_110._s_0.Y = (param_3->Origin).field0_0x0._s_0.Y;
  local_f8.bReturnFaceIndex = param_4;
  bVar8 = UWorld::LineTraceMultiByObjectType
                    (param_1,&local_150,(TVector<double> *)&local_110._s_0,
                     (TVector<double> *)&local_128._s_0,&local_140,&local_f8);
  pTVar6 = CVarEnableModelingVolumeSnapping.Ref;
  if (bVar8) {
    bVar8 = IsInParallelGameThread();
    if (!bVar8) {
      bVar8 = IsInGameThread();
      if (!bVar8) {
        uVar17 = 1;
      }
    }
    iVar7 = local_150.ArrayNum;
    bVar8 = pTVar6->ShadowedValue[uVar17];
    this = (FWeakObjectPtr *)(local_150.AllocatorInstance.Data + 0xd8);
    pFVar19 = (FWeakObjectPtr *)
              (local_150.AllocatorInstance.Data + (longlong)local_150.ArrayNum * 0x100);
    dVar3 = __real_7fefffffffffffff;
    while( true ) {
      if (local_150.ArrayNum != iVar7) {
        `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      if (this + -0x1b == pFVar19) break;
      if (param_6 == (FSceneGeometrySpatialCache *)0x0) {
LAB_14cb8e925:
        if (bVar8 == false) {
          pUVar12 = FWeakObjectPtr::Get(this);
          if (pUVar12 != (UObject *)0x0) {
            pUVar13 = Z_Construct_UClass_UBrushComponent_NoRegister();
            iVar1 = (int)pUVar13->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar13->_padding_)) goto LAB_14cb8ea2e;
          }
          pUVar12 = FWeakObjectPtr::Get(this);
          if (pUVar12 != (UObject *)0x0) {
            pUVar13 = Z_Construct_UClass_UShapeComponent_NoRegister();
            iVar1 = (int)pUVar13->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar13->_padding_)) goto LAB_14cb8ea2e;
          }
        }
        if ((double)(float)this[-0x1a].ObjectIndex < dVar3) {
          pUVar14 = (UPrimitiveComponent *)FWeakObjectPtr::Get(this);
          bVar10 = FSceneQueryVisibilityFilter::IsVisible(local_138,pUVar14);
          if (bVar10) {
            lVar16 = 2;
            pFVar15 = local_130;
            pFVar18 = this + -0x1b;
            do {
              iVar1 = pFVar18->ObjectSerialNumber;
              iVar4 = pFVar18[1].ObjectIndex;
              iVar5 = pFVar18[1].ObjectSerialNumber;
              pFVar15->FaceIndex = pFVar18->ObjectIndex;
              pFVar15->Time = (float)iVar1;
              pFVar15->Distance = (float)iVar4;
              pFVar15->_padding_ = iVar5;
              iVar1 = pFVar18[2].ObjectSerialNumber;
              iVar4 = pFVar18[3].ObjectIndex;
              iVar5 = pFVar18[3].ObjectSerialNumber;
              *(int *)&(pFVar15->Location).field_0x0 = pFVar18[2].ObjectIndex;
              *(int *)&(pFVar15->Location).field_0x4 = iVar1;
              *(int *)&(pFVar15->Location).field_0x8 = iVar4;
              *(int *)&(pFVar15->Location).field_0xc = iVar5;
              iVar1 = pFVar18[4].ObjectSerialNumber;
              iVar4 = pFVar18[5].ObjectIndex;
              iVar5 = pFVar18[5].ObjectSerialNumber;
              *(int *)&(pFVar15->Location).field_0x10 = pFVar18[4].ObjectIndex;
              *(int *)&(pFVar15->Location).field_0x14 = iVar1;
              *(int *)&(pFVar15->ImpactPoint).field_0x0 = iVar4;
              *(int *)&(pFVar15->ImpactPoint).field_0x4 = iVar5;
              iVar1 = pFVar18[6].ObjectSerialNumber;
              iVar4 = pFVar18[7].ObjectIndex;
              iVar5 = pFVar18[7].ObjectSerialNumber;
              *(int *)&(pFVar15->ImpactPoint).field_0x8 = pFVar18[6].ObjectIndex;
              *(int *)&(pFVar15->ImpactPoint).field_0xc = iVar1;
              *(int *)&(pFVar15->ImpactPoint).field_0x10 = iVar4;
              *(int *)&(pFVar15->ImpactPoint).field_0x14 = iVar5;
              iVar1 = pFVar18[8].ObjectSerialNumber;
              iVar4 = pFVar18[9].ObjectIndex;
              iVar5 = pFVar18[9].ObjectSerialNumber;
              *(int *)&(pFVar15->Normal).field_0x0 = pFVar18[8].ObjectIndex;
              *(int *)&(pFVar15->Normal).field_0x4 = iVar1;
              *(int *)&(pFVar15->Normal).field_0x8 = iVar4;
              *(int *)&(pFVar15->Normal).field_0xc = iVar5;
              iVar1 = pFVar18[10].ObjectSerialNumber;
              iVar4 = pFVar18[0xb].ObjectIndex;
              iVar5 = pFVar18[0xb].ObjectSerialNumber;
              *(int *)&(pFVar15->Normal).field_0x10 = pFVar18[10].ObjectIndex;
              *(int *)&(pFVar15->Normal).field_0x14 = iVar1;
              *(int *)&(pFVar15->ImpactNormal).field_0x0 = iVar4;
              *(int *)&(pFVar15->ImpactNormal).field_0x4 = iVar5;
              iVar1 = pFVar18[0xc].ObjectSerialNumber;
              iVar4 = pFVar18[0xd].ObjectIndex;
              iVar5 = pFVar18[0xd].ObjectSerialNumber;
              *(int *)&(pFVar15->ImpactNormal).field_0x8 = pFVar18[0xc].ObjectIndex;
              *(int *)&(pFVar15->ImpactNormal).field_0xc = iVar1;
              *(int *)&(pFVar15->ImpactNormal).field_0x10 = iVar4;
              *(int *)&(pFVar15->ImpactNormal).field_0x14 = iVar5;
              iVar1 = pFVar18[0xe].ObjectSerialNumber;
              iVar4 = pFVar18[0xf].ObjectIndex;
              iVar5 = pFVar18[0xf].ObjectSerialNumber;
              *(int *)&(pFVar15->TraceStart).field_0x0 = pFVar18[0xe].ObjectIndex;
              *(int *)&(pFVar15->TraceStart).field_0x4 = iVar1;
              *(int *)&(pFVar15->TraceStart).field_0x8 = iVar4;
              *(int *)&(pFVar15->TraceStart).field_0xc = iVar5;
              lVar16 = lVar16 + -1;
              pFVar15 = (FHitResult *)&(pFVar15->TraceStart).field_0x10;
              pFVar18 = pFVar18 + 0x10;
            } while (lVar16 != 0);
            dVar3 = (double)(float)this[-0x1a].ObjectIndex;
          }
        }
      }
      else {
        pcVar2 = *(code **)(param_6->_padding_ + 0x20);
        pUVar12 = FWeakObjectPtr::Get(this);
        cVar9 = (*pcVar2)(param_6,pUVar12);
        if (cVar9 == '\0') goto LAB_14cb8e925;
      }
LAB_14cb8ea2e:
      this = this + 0x20;
    }
    uVar17 = (ulonglong)(dVar3 < __real_7fefffffffffffff);
  }
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return SUB81(uVar17,0);
}

// FindSceneSnapPoint @ 14cb8f290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cb8f731) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl ToolSceneQueriesUtil::FindSceneSnapPoint(FFindSceneSnapPointParams *param_1)

{
  double *pdVar1;
  TVector<double> *pTVar2;
  FSnapGeometry *pFVar3;
  code *pcVar4;
  double dVar5;
  ulonglong uVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auStackY_1a8 [32];
  ForAnyElementType local_160;
  undefined8 local_158;
  TBitArray<FDefaultBitArrayAllocator> local_150;
  undefined8 uStack_130;
  void *local_120;
  undefined4 local_118;
  undefined1 local_f8;
  undefined1 local_d8;
  undefined1 local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  float local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_40;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  dVar12 = param_1->VisualAngleThreshold;
  if (param_1->VisualAngleThreshold <= 0.0) {
    dVar12 = VISUAL_ANGLE_SNAP_THRESHOLD_DEG;
  }
  if (param_1->SnappingManager == (USceneSnappingManager *)0x0) {
    bVar8 = false;
  }
  else {
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    local_150.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88 = 0;
    uStack_80 = 0;
    local_120 = (void *)0x0;
    local_118 = 0;
    local_150._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_130 = _UNK_150631d98;
    local_f8 = 0;
    local_68 = 0;
    local_d8 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_b8 = 0;
    local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_50 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    pTVar2 = param_1->Point;
    local_b0 = (pTVar2->field0_0x0)._s_0.X;
    dStack_a8 = (pTVar2->field0_0x0)._s_0.Y;
    local_a0 = (pTVar2->field0_0x0)._s_0.Z;
    local_40 = param_1->ComponentsToIgnore;
    local_38 = param_1->InvisibleComponentsToInclude;
    local_98 = (float)(dVar12 * (double)((param_1->CameraState).HorizontalFOVDegrees *
                                        __real_3c360b61));
    cVar7 = (**(code **)(*(longlong *)param_1->SnappingManager + 0x2b8))();
    if (cVar7 == '\0') {
      bVar8 = false;
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      dVar5 = _DAT_00000030;
      dVar12 = _DAT_00000028;
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pTVar2 = param_1->SnapPointOut;
      (pTVar2->field0_0x0)._s_0.X = _DAT_00000020;
      (pTVar2->field0_0x0)._s_0.Y = dVar12;
      (pTVar2->field0_0x0)._s_0.Z = dVar5;
      if (param_1->SnapGeometryOut != (FSnapGeometry *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        iVar10 = _DAT_000000d8;
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        lVar11 = (longlong)_DAT_000000d8;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pdVar1 = (double *)((lVar11 + 6) * 0x18);
        dVar5 = pdVar1[1];
        dVar12 = *(double *)((lVar11 + 6) * 0x18 + 0x10);
        pFVar3 = param_1->SnapGeometryOut;
        pFVar3->Points[0].field0_0x0._s_0.X = *pdVar1;
        pFVar3->Points[0].field0_0x0._s_0.Y = dVar5;
        pFVar3->Points[0].field0_0x0._s_0.Z = dVar12;
        param_1->SnapGeometryOut->PointCount = 1;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if (DAT_00000018 == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          iVar10 = iVar10 + 1;
          lVar11 = (longlong)
                   (iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3) + 6;
          pdVar1 = (double *)(lVar11 * 0x18);
          dVar5 = pdVar1[1];
          dVar12 = *(double *)(lVar11 * 0x18 + 0x10);
          pFVar3 = param_1->SnapGeometryOut;
          pFVar3->Points[1].field0_0x0._s_0.X = *pdVar1;
          pFVar3->Points[1].field0_0x0._s_0.Y = dVar5;
          pFVar3->Points[1].field0_0x0._s_0.Z = dVar12;
          param_1->SnapGeometryOut->PointCount = 2;
        }
      }
      if (param_1->DebugTriangleOut != (TVector<double> *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        dVar5 = _DAT_000000a0;
        dVar12 = dRam0000000000000098;
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pTVar2 = param_1->DebugTriangleOut;
        (pTVar2->field0_0x0)._s_0.X = _DAT_00000090;
        (pTVar2->field0_0x0)._s_0.Y = dVar12;
        (pTVar2->field0_0x0)._s_0.Z = dVar5;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        dVar5 = dRam00000000000000b8;
        dVar12 = _DAT_000000b0;
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pTVar2 = param_1->DebugTriangleOut;
        pTVar2[1].field0_0x0._s_0.X = _DAT_000000a8;
        pTVar2[1].field0_0x0._s_0.Y = dVar12;
        pTVar2[1].field0_0x0._s_0.Z = dVar5;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        dVar5 = _DAT_000000d0;
        dVar12 = dRam00000000000000c8;
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pTVar2 = param_1->DebugTriangleOut;
        pTVar2[2].field0_0x0._s_0.X = _DAT_000000c0;
        pTVar2[2].field0_0x0._s_0.Y = dVar12;
        pTVar2[2].field0_0x0._s_0.Z = dVar5;
      }
      bVar8 = true;
    }
    local_118 = 0;
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    uVar6 = local_158 >> 0x20;
    local_158 = local_158 & 0xffffffff00000000;
    if ((int)uVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_160,0,(int *)((longlong)&local_158 + 4));
    }
    iVar10 = local_150.MaxBits;
    local_150._24_8_ = (ulonglong)(uint)local_150.MaxBits << 0x20;
    uStack_130 = 0xffffffff;
    if (0x80 < (uint)iVar10) {
      local_150.NumBits = 0;
      local_150.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_150,0);
    }
    if (local_150.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
  }
  return bVar8;
}

// FindSceneSnapPoint @ 14cb8f7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
ToolSceneQueriesUtil::FindSceneSnapPoint
          (UInteractiveTool *param_1,TVector<double> *param_2,TVector<double> *param_3,bool param_4,
          bool param_5,double param_6,FSnapGeometry *param_7,TVector<double> *param_8)

{
  bool bVar1;
  UInteractiveToolManager *pUVar2;
  longlong *plVar3;
  FFindSceneSnapPointParams local_b8;
  
  local_b8.CameraState.Position.field0_0x0._s_0.X = 0.0;
  local_b8.CameraState.Position.field0_0x0._s_0.Y = 0.0;
  local_b8.CameraState.Orientation.X = 0.0;
  local_b8.CameraState.Orientation.Y = 0.0;
  local_b8.CameraState.DPIScale = __real_3ff0000000000000;
  local_b8.CameraState.Orientation.Z = ___xmm_3ff00000000000000000000000000000;
  local_b8.CameraState.Orientation.W = _UNK_15061cbc8;
  local_b8.ComponentsToIgnore =
       (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  local_b8.InvisibleComponentsToInclude =
       (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  local_b8.CameraState.Position.field0_0x0._s_0.Z = 0.0;
  local_b8.VisualAngleThreshold = 0.0;
  local_b8.CameraState.HorizontalFOVDegrees = 90.0;
  local_b8.CameraState.OrthoWorldCoordinateWidth = 100.0;
  local_b8.CameraState.AspectRatio = 1.0;
  local_b8.CameraState.bIsOrthographic = false;
  local_b8.CameraState.bIsVR = false;
  local_b8.Point = (TVector<double> *)0x0;
  local_b8.SnapPointOut = (TVector<double> *)0x0;
  local_b8.bVertices = true;
  local_b8.bEdges = false;
  local_b8.SnapGeometryOut = (FSnapGeometry *)0x0;
  local_b8.DebugTriangleOut = (TVector<double> *)0x0;
  pUVar2 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))();
  local_b8.SnappingManager = USceneSnappingManager::Find(pUVar2);
  plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x398))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_b8.CameraState);
  local_b8.SnapGeometryOut = param_7;
  local_b8.DebugTriangleOut = param_8;
  local_b8.VisualAngleThreshold = param_6;
  local_b8.bEdges = param_5;
  local_b8.bVertices = param_4;
  local_b8.Point = param_2;
  local_b8.SnapPointOut = param_3;
  bVar1 = FindSceneSnapPoint(&local_b8);
  return bVar1;
}

// FindWorldGridSnapPoint @ 14cb91020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cb91178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
ToolSceneQueriesUtil::FindWorldGridSnapPoint
          (UInteractiveTool *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  UInteractiveToolManager *pUVar9;
  USceneSnappingManager *pUVar10;
  undefined1 auStackY_1a8 [32];
  ForAnyElementType local_160;
  undefined8 local_158;
  TBitArray<FDefaultBitArrayAllocator> local_150;
  undefined8 uStack_130;
  void *local_120;
  undefined4 local_118;
  undefined1 local_f8;
  undefined1 local_d8;
  undefined1 local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pUVar9 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))();
  pUVar10 = USceneSnappingManager::Find(pUVar9);
  bVar7 = false;
  if (pUVar10 != (USceneSnappingManager *)0x0) {
    local_150.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_150.MaxBits = _UNK_150631d94;
    uStack_130 = _UNK_150631d98;
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0x41700000;
    local_68 = 0;
    local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_50 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_48 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_b0 = (param_2->field0_0x0)._s_0.X;
    dStack_a8 = (param_2->field0_0x0)._s_0.Y;
    local_88 = 0;
    uStack_80 = 0;
    local_a0 = (param_2->field0_0x0)._s_0.Z;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    local_150.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_120 = (void *)0x0;
    local_118 = 0;
    local_f8 = 0;
    local_d8 = 0;
    local_b8 = 0;
    local_40 = 0;
    local_38 = 0;
    cVar6 = (**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10);
    if (cVar6 == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      dVar4 = _DAT_00000030;
      dVar3 = _DAT_00000028;
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return (bool)uVar8;
      }
      (param_3->field0_0x0)._s_0.X = _DAT_00000020;
      (param_3->field0_0x0)._s_0.Y = dVar3;
      (param_3->field0_0x0)._s_0.Z = dVar4;
      bVar7 = true;
    }
    local_118 = 0;
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    uVar2 = local_158 >> 0x20;
    local_158 = local_158 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_160,0,(int *)((longlong)&local_158 + 4));
    }
    iVar5 = local_150.MaxBits;
    local_150._24_8_ = (ulonglong)(uint)local_150.MaxBits << 0x20;
    uStack_130 = 0xffffffff;
    if (0x80 < (uint)iVar5) {
      local_150.NumBits = 0;
      local_150.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_150,0);
    }
    if (local_150.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
  }
  return bVar7;
}

// GetDefaultVisualAngleSnapThreshD @ 14cb95c20

double __cdecl ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD(void)

{
  return VISUAL_ANGLE_SNAP_THRESHOLD_DEG;
}

// GetTypeHash @ 14cba0330

uint __cdecl GetTypeHash(FGeometryIdentifier *param_1)

{
  EObjectType EVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  EVar1 = param_1->ObjectType;
  uVar5 = (param_1->TargetObject).WeakPtr.ObjectSerialNumber ^
          (param_1->TargetObject).WeakPtr.ObjectIndex;
  uVar3 = param_1->TargetType - EVar1 ^ EVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - EVar1 ^ uVar3 << 8;
  uVar4 = (EVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar3 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar3 << 8;
  uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  return (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// IsOccluded @ 14cba4250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cba43eb) */
/* WARNING: Removing unreachable block (ram,0x00014cba43fd) */
/* WARNING: Removing unreachable block (ram,0x00014cba4401) */

bool __cdecl
IsOccluded(TVector<double> *param_1,TVector<double> *param_2,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_3,bool param_4)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte extraout_var;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_a0;
  undefined8 local_98 [2];
  code *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  double *local_68;
  longlong *plStack_60;
  undefined1 local_58;
  ulonglong local_48;
  
  uVar3 = uStack_74;
  uVar2 = local_78;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_d0 = 0.0;
  local_e0 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dStack_d8 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  auVar5._0_8_ = local_e0 * local_e0;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dStack_d8 * dStack_d8 + auVar5._0_8_ + dVar1 * dVar1;
  auVar6 = sqrtpd(auVar5,auVar6);
  if (auVar6._0_8_ <= 0.0) {
    local_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  else {
    local_d0 = __real_3ff0000000000000 / auVar6._0_8_;
    local_e0 = local_d0 * local_e0;
    dStack_d8 = local_d0 * dStack_d8;
    local_d0 = local_d0 * dVar1;
  }
  local_88 = (code *)0x0;
  local_58 = 0;
  local_e8 = (param_1->field0_0x0)._s_0.Z + local_d0 * __real_3f1a36e2ea000000;
  local_f8 = (param_1->field0_0x0)._s_0.X + local_e0 * __real_3f1a36e2ea000000;
  dStack_f0 = (param_1->field0_0x0)._s_0.Y + dStack_d8 * __real_3f1a36e2ea000000;
  local_98[0] = __real_7fefffffffffffff;
  local_b8 = local_d0;
  uStack_70 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)
              CONCAT44(uStack_70._4_4_,(undefined4)uStack_70);
  if (!param_4) {
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`IsOccluded'::__l5::<lambda_1>,bool,int>::Call;
    local_68 = &local_f8;
    plStack_60 = (longlong *)0x0;
    local_78 = 0x5291a2f0;
    uStack_74 = 1;
    uStack_70 = param_3;
    local_c8 = 0;
    local_b8 = (double)CONCAT44(uVar3,uVar2);
    uStack_a0 = 0;
  }
  plStack_60 = (longlong *)0x0;
  (**(code **)(param_3->_padding_ + 0x40))(param_3,&local_f8,local_98);
  if (local_88 != (code *)0x0) {
    plVar4 = (longlong *)&local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar4 = plStack_60;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return (bool)(extraout_var >> 7 ^ 1);
}

// IsOccluded @ 14cba4480

bool __cdecl
IsOccluded(FNearest *param_1,TVector<double> *param_2,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_3,bool param_4)

{
  bool bVar1;
  
  bVar1 = IsOccluded(&param_1->NearestGeoPoint,param_2,param_3,param_4);
  return bVar1;
}

// IsPointVisible @ 14cba4490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
ToolSceneQueriesUtil::IsPointVisible(FViewCameraState *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48 [2];
  
  if (param_1->bIsOrthographic == false) {
    auVar2 = *(undefined1 (*) [16])&(param_1->Position).field0_0x0;
    local_48[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_48[0]._s_0.Y = _UNK_150689518;
    dVar1 = (param_1->Position).field0_0x0._s_0.Z;
    local_48[0]._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&param_1->Orientation,(TVector<double> *)&local_68._s_0,
               (TVector<double> *)&local_48[0]._s_0);
    auVar3._4_8_ = extraout_XMM0_Qb;
    auVar3._0_4_ = auVar2._4_4_;
    auVar4._0_8_ = auVar3._0_8_ << 0x20;
    auVar4._8_4_ = auVar2._8_4_;
    auVar4._12_4_ = auVar2._12_4_;
    if (((param_2->field0_0x0)._s_0.Y - auVar4._8_8_) * local_68._s_0.Y +
        ((param_2->field0_0x0)._s_0.X - auVar2._0_8_) * local_68._s_0.X +
        ((param_2->field0_0x0)._s_0.Z - dVar1) * local_68._s_0.Z < __real_3fd0000000000000) {
      return false;
    }
  }
  return true;
}

// IsVisibleObjectHit @ 14cba46f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl ToolSceneQueriesUtil::IsVisibleObjectHit(FHitResult *param_1)

{
  char cVar1;
  AActor *pAVar2;
  UObject *pUVar3;
  
  pAVar2 = FActorInstanceHandle::FetchActor(&param_1->HitObjectHandle);
  if ((pAVar2 != (AActor *)0x0) && ((bool)pAVar2->bHidden)) {
    return false;
  }
  pUVar3 = FWeakObjectPtr::Get(&(param_1->Component).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    cVar1 = (**(code **)(*(longlong *)pUVar3 + 0x560))(pUVar3);
    return cVar1 != '\0';
  }
  return true;
}

// PointSnapMetric @ 14cba6d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl
ToolSceneQueriesUtil::PointSnapMetric
          (FViewCameraState *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98 [6];
  
  if (param_1->bIsOrthographic == false) {
    local_98[0]._16_8_ = (param_3->field0_0x0)._s_0.Z;
    dVar8 = 0.0;
    dVar10 = (param_1->Position).field0_0x0._s_0.X;
    dVar9 = (param_1->Position).field0_0x0._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.X - dVar10;
    dVar5 = (param_1->Position).field0_0x0._s_0.Z;
    dVar3 = (param_2->field0_0x0)._s_0.Z - dVar5;
    dVar1 = (param_2->field0_0x0)._s_0.Y - dVar9;
    dVar2 = SQRT(dVar1 * dVar1 + dVar4 * dVar4 + dVar3 * dVar3);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
      dVar1 = 0.0;
      dVar4 = 0.0;
    }
    else {
      dVar2 = __real_3ff0000000000000 / dVar2;
      dVar4 = dVar2 * dVar4;
      dVar1 = dVar2 * dVar1;
      dVar2 = dVar2 * dVar3;
    }
    dVar10 = (param_3->field0_0x0)._s_0.X - dVar10;
    dVar9 = (param_3->field0_0x0)._s_0.Y - dVar9;
    dVar5 = (double)local_98[0]._16_8_ - dVar5;
    dVar3 = SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar5 * dVar5);
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
      dVar9 = 0.0;
    }
    else {
      dVar3 = __real_3ff0000000000000 / dVar3;
      dVar8 = dVar3 * dVar10;
      dVar9 = dVar3 * dVar9;
      dVar3 = dVar3 * dVar5;
    }
    dVar4 = dVar9 * dVar1 + dVar8 * dVar4 + dVar3 * dVar2;
    dVar5 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar4) && (dVar5 = dVar4, __real_3ff0000000000000 <= dVar4)) {
      dVar5 = __real_3ff0000000000000;
    }
    dVar5 = acos(dVar5);
    dVar5 = (dVar5 * __real_404ca5dc1a63c1f8) /
            (double)(param_1->HorizontalFOVDegrees * __real_3c360b61);
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  else {
    local_98[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_98[0]._s_0.Y = _UNK_150689518;
    local_98[0]._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&param_1->Orientation,(TVector<double> *)&local_b8._s_0,
               (TVector<double> *)&local_98[0]._s_0);
    dVar1 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    dVar5 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    dVar10 = dVar1 * local_b8._s_0.Y + dVar4 * local_b8._s_0.X + dVar5 * local_b8._s_0.Z;
    auVar6._0_8_ = dVar10 * local_b8._s_0.X;
    auVar6._8_8_ = 0;
    dVar4 = dVar4 - auVar6._0_8_;
    dVar1 = dVar1 - dVar10 * local_b8._s_0.Y;
    dVar5 = dVar5 - dVar10 * local_b8._s_0.Z;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar1 * dVar1 + dVar4 * dVar4 + dVar5 * dVar5;
    auVar7 = sqrtpd(auVar6,auVar7);
    dVar5 = (auVar7._0_8_ * __real_4056800000000000) / (double)param_1->OrthoWorldCoordinateWidth;
  }
  return dVar5;
}

// PointSnapQuery @ 14cba7060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
ToolSceneQueriesUtil::PointSnapQuery
          (FViewCameraState *param_1,TVector<double> *param_2,TVector<double> *param_3,
          double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8 [6];
  
  if (param_1->bIsOrthographic == false) {
    dVar9 = 0.0;
    if (param_4 <= 0.0) {
      param_4 = VISUAL_ANGLE_SNAP_THRESHOLD_DEG;
    }
    dVar3 = (param_1->Position).field0_0x0._s_0.X;
    dVar10 = (param_1->Position).field0_0x0._s_0.Y;
    dVar8 = (param_1->Position).field0_0x0._s_0.Z;
    dVar2 = (param_2->field0_0x0)._s_0.X - dVar3;
    dVar1 = param_4 * (double)(param_1->HorizontalFOVDegrees * __real_3c360b61);
    dVar7 = (param_2->field0_0x0)._s_0.Z - dVar8;
    local_a8[0]._16_8_ = (param_3->field0_0x0)._s_0.Z;
    dVar11 = (param_2->field0_0x0)._s_0.Y - dVar10;
    dVar6 = SQRT(dVar11 * dVar11 + dVar2 * dVar2 + dVar7 * dVar7);
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
      dVar11 = 0.0;
      dVar2 = 0.0;
    }
    else {
      dVar6 = __real_3ff0000000000000 / dVar6;
      dVar2 = dVar6 * dVar2;
      dVar11 = dVar6 * dVar11;
      dVar6 = dVar6 * dVar7;
    }
    dVar3 = (param_3->field0_0x0)._s_0.X - dVar3;
    dVar10 = (param_3->field0_0x0)._s_0.Y - dVar10;
    dVar8 = (double)local_a8[0]._16_8_ - dVar8;
    dVar7 = SQRT(dVar10 * dVar10 + dVar3 * dVar3 + dVar8 * dVar8);
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
      dVar10 = 0.0;
    }
    else {
      dVar7 = __real_3ff0000000000000 / dVar7;
      dVar9 = dVar7 * dVar3;
      dVar10 = dVar7 * dVar10;
      dVar7 = dVar7 * dVar8;
    }
    dVar8 = dVar10 * dVar11 + dVar9 * dVar2 + dVar7 * dVar6;
    dVar9 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar8) && (dVar9 = dVar8, __real_3ff0000000000000 <= dVar8)) {
      dVar9 = __real_3ff0000000000000;
    }
    dVar9 = acos(dVar9);
    dVar9 = (double)CONCAT44((uint)((ulonglong)(dVar9 * __real_404ca5dc1a63c1f8) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar9 * __real_404ca5dc1a63c1f8,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    bVar5 = dVar1 == dVar9;
    bVar4 = dVar1 < dVar9;
  }
  else {
    if (param_4 <= 0.0) {
      param_4 = VISUAL_ANGLE_SNAP_THRESHOLD_DEG;
    }
    local_a8[0]._s_0.Z = 0.0;
    dVar2 = (double)param_1->OrthoWorldCoordinateWidth * param_4;
    local_a8[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_a8[0]._s_0.Y = _UNK_150689518;
    UE::Math::TQuat<double>::RotateVector
              (&param_1->Orientation,(TVector<double> *)&local_c8._s_0,
               (TVector<double> *)&local_a8[0]._s_0);
    dVar8 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    dVar1 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    dVar9 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    dVar2 = dVar2 * dVar2 * ___real_3f202e85c0898b71;
    dVar11 = dVar1 * local_c8._s_0.Y + dVar8 * local_c8._s_0.X + dVar9 * local_c8._s_0.Z;
    dVar8 = dVar8 - dVar11 * local_c8._s_0.X;
    dVar1 = dVar1 - dVar11 * local_c8._s_0.Y;
    dVar9 = dVar9 - dVar11 * local_c8._s_0.Z;
    dVar9 = dVar1 * dVar1 + dVar8 * dVar8 + dVar9 * dVar9;
    bVar5 = dVar2 == dVar9;
    bVar4 = dVar2 < dVar9;
  }
  return !bVar4 && !bVar5;
}

// PointSnapQuery @ 14cba7360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
ToolSceneQueriesUtil::PointSnapQuery
          (UInteractiveTool *param_1,TVector<double> *param_2,TVector<double> *param_3,
          double param_4)

{
  bool bVar1;
  longlong *plVar2;
  TVector<double>_u_0 local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  
  plVar2 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d8))();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x398))(plVar2);
  local_38 = 0x42b40000;
  local_78._s_0.X = 0.0;
  local_78._s_0.Y = 0.0;
  local_78._s_0.Z = 0.0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = __real_3ff0000000000000;
  local_48 = ___xmm_3ff00000000000000000000000000000;
  uStack_40 = _UNK_15061cbc8;
  local_34 = 0x42c80000;
  local_30 = 0x3f800000;
  local_2c = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_78);
  bVar1 = PointSnapQuery((FViewCameraState *)&local_78._s_0,param_2,param_3,param_4);
  return bVar1;
}

// SetNewActorSelection @ 14cbb00a0

void __cdecl
ToolSelectionUtil::SetNewActorSelection
          (UInteractiveToolManager *param_1,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined4 local_40 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  pFVar7 = (param_2->AllocatorInstance).Data;
  iVar6 = 0;
  iVar2 = param_2->ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  local_20 = 0;
  local_40[0] = 0;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      iVar6 = (int)local_30;
    }
    if (pFVar7 == pFVar1) break;
    local_48 = *(undefined8 *)pFVar7;
    iVar5 = iVar6;
    if ((local_38.Data <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < local_38.Data + (longlong)local_30._4_4_ * 8)) {
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
      iVar5 = (int)local_30;
    }
    if (iVar5 == local_30._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_38,(int *)((longlong)&local_30 + 4));
    }
    iVar6 = iVar5 + 1;
    pFVar7 = pFVar7 + 8;
    local_30 = CONCAT44(local_30._4_4_,iVar6);
    *(undefined8 *)(local_38.Data + (longlong)iVar5 * 8) = local_48;
  }
  (**(code **)(param_1->_padding_ + 0x370))(param_1,local_40);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// SetNewActorSelection @ 14cbb0200

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
ToolSelectionUtil::SetNewActorSelection(UInteractiveToolManager *param_1,AActor *param_2)

{
  int iVar1;
  undefined4 local_38 [2];
  ForAnyElementType local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_38[0] = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_30,(int *)((longlong)&local_28 + 4));
  local_28 = CONCAT44(local_28._4_4_,iVar1 + 1);
  *(AActor **)(local_30.Data + (longlong)iVar1 * 8) = param_2;
  (**(code **)(param_1->_padding_ + 0x370))(param_1,local_38);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// SnapDistanceToWorldGridSize @ 14cbb3690

double __cdecl
ToolSceneQueriesUtil::SnapDistanceToWorldGridSize(UInteractiveTool *param_1,double param_2)

{
  longlong *plVar1;
  char *pcVar2;
  undefined1 local_b8 [8];
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_68 [96];
  
  plVar1 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d8))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x398))(plVar1);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_b8);
  pcVar2 = (char *)(**(code **)(*plVar1 + 0x30))(plVar1,local_68);
  if (*pcVar2 != '\0') {
    if (local_b0 <= local_a8) {
      local_b0 = local_a8;
    }
    if (local_b0 <= local_a0) {
      local_b0 = local_a0;
    }
    if (0.0 < local_b0) {
      return (double)(int)((longlong)ROUND((param_2 + param_2) / local_b0 + __real_3fe0000000000000)
                          >> 1) * local_b0;
    }
  }
  return param_2;
}

// ToGeometryElementType @ 14cbb4aa0

EGeometryElementType __cdecl
PolygonSelectionMechanicLocals::ToGeometryElementType(FGroupTopologySelection *param_1)

{
  EGeometryElementType EVar1;
  
  if (*(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 !=
      *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34) {
    return Vertex;
  }
  EVar1 = Face;
  if (*(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 !=
      *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34) {
    EVar1 = Edge;
  }
  return EVar1;
}

// Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister @ 14cbbcf30

UClass * __cdecl Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoundarySelectionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BoundarySelectionMechanic",
               &Z_Registration_Info_UClass_UBoundarySelectionMechanic.InnerSingleton,
               UBoundarySelectionMechanic::StaticRegisterNativesUBoundarySelectionMechanic,0xb30,
               0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoundarySelectionMechanic>,
               InternalVTableHelperCtorCaller<UBoundarySelectionMechanic>,local_res8,
               UMeshTopologySelectionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoundarySelectionMechanic.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_NoRegister @ 14cbbcff0

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolygonSelectionMechanicProperties",
               &Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.
                InnerSingleton,
               UDEPRECATED_PolygonSelectionMechanicProperties::
               StaticRegisterNativesUDEPRECATED_PolygonSelectionMechanicProperties,200,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_PolygonSelectionMechanicProperties>,
               InternalVTableHelperCtorCaller<UDEPRECATED_PolygonSelectionMechanicProperties>,
               local_res8,UMeshTopologySelectionMechanicProperties::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.InnerSingleton;
}

// Z_Construct_UClass_UDynamicMeshProvider_NoRegister @ 14cbbd0b0

UClass * __cdecl Z_Construct_UClass_UDynamicMeshProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DynamicMeshProvider",
               &Z_Registration_Info_UClass_UDynamicMeshProvider.InnerSingleton,
               UDynamicMeshProvider::StaticRegisterNativesUDynamicMeshProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshProvider>,
               InternalVTableHelperCtorCaller<UDynamicMeshProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshProvider.InnerSingleton;
}

// Z_Construct_UClass_UGeometrySelectionManager_NoRegister @ 14cbbd170

UClass * __cdecl Z_Construct_UClass_UGeometrySelectionManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionManager",
               &Z_Registration_Info_UClass_UGeometrySelectionManager.InnerSingleton,
               UGeometrySelectionManager::StaticRegisterNativesUGeometrySelectionManager,0x4d0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometrySelectionManager>,
               InternalVTableHelperCtorCaller<UGeometrySelectionManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionManager.InnerSingleton;
}

// Z_Construct_UClass_UMeshTopologySelectionMechanic_NoRegister @ 14cbbd220

UClass * __cdecl Z_Construct_UClass_UMeshTopologySelectionMechanic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshTopologySelectionMechanic",
               &Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.InnerSingleton,
               UMeshTopologySelectionMechanic::StaticRegisterNativesUMeshTopologySelectionMechanic,
               0xb30,0x10,CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshTopologySelectionMechanic>,
               InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.InnerSingleton;
}

// Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister @ 14cbbd2e0

UClass * __cdecl Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingSceneSnappingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingSceneSnappingManager",
               &Z_Registration_Info_UClass_UModelingSceneSnappingManager.InnerSingleton,
               UModelingSceneSnappingManager::StaticRegisterNativesUModelingSceneSnappingManager,
               0x150,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModelingSceneSnappingManager>,
               InternalVTableHelperCtorCaller<UModelingSceneSnappingManager>,local_res8,
               USceneSnappingManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingSceneSnappingManager.InnerSingleton;
}

// Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister @ 14cbbd3a0

UClass * __cdecl Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolygonSelectionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolygonSelectionMechanic",
               &Z_Registration_Info_UClass_UPolygonSelectionMechanic.InnerSingleton,
               UPolygonSelectionMechanic::StaticRegisterNativesUPolygonSelectionMechanic,0xb30,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolygonSelectionMechanic>,
               InternalVTableHelperCtorCaller<UPolygonSelectionMechanic>,local_res8,
               UMeshTopologySelectionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolygonSelectionMechanic.InnerSingleton;
}

// Z_Construct_UClass_UToolHostCustomizationAPI_NoRegister @ 14cbbd460

UClass * __cdecl Z_Construct_UClass_UToolHostCustomizationAPI_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolHostCustomizationAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ToolHostCustomizationAPI",
               &Z_Registration_Info_UClass_UToolHostCustomizationAPI.InnerSingleton,
               UToolHostCustomizationAPI::StaticRegisterNativesUToolHostCustomizationAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolHostCustomizationAPI>,
               InternalVTableHelperCtorCaller<UToolHostCustomizationAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolHostCustomizationAPI.InnerSingleton;
}

// HoverOverSelectedSetIds'' @ 150453370

void __cdecl
`dynamic_atexit_destructor_for_'UGeometrySelectionManager::HoverOverSelectedSetIds__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TStaticArray<FString,3,4294967295> *pTVar3;
  
  pTVar3 = &UGeometrySelectionManager::HoverOverUnselectedSetIds;
  lVar2 = 3;
  do {
    pFVar1 = (((FString *)((longlong)pTVar3 + -0x10))->Data).AllocatorInstance.Data;
    pTVar3 = (TStaticArray<FString,3,4294967295> *)((longlong)pTVar3 + -0x10);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// HoverOverUnselectedSetIds'' @ 1504533c0

void __cdecl
`dynamic_atexit_destructor_for_'UGeometrySelectionManager::HoverOverUnselectedSetIds__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TStaticArray<FString,3,4294967295> *pTVar3;
  
  pTVar3 = &UGeometrySelectionManager::SelectedSetIds;
  lVar2 = 3;
  do {
    pFVar1 = (((FString *)((longlong)pTVar3 + -0x10))->Data).AllocatorInstance.Data;
    pTVar3 = (TStaticArray<FString,3,4294967295> *)((longlong)pTVar3 + -0x10);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// PositionCurve'' @ 150453410

void __cdecl `dynamic_atexit_destructor_for_'FSpline::PositionCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::PositionCurve._0_8_;
  if (FSpline::PositionCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::PositionCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// RotationCurve'' @ 150453430

void __cdecl `dynamic_atexit_destructor_for_'FSpline::RotationCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::RotationCurve._0_8_;
  if (FSpline::RotationCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::RotationCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// ScaleCurve'' @ 150453450

void __cdecl `dynamic_atexit_destructor_for_'FSpline::ScaleCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::ScaleCurve._0_8_;
  if (FSpline::ScaleCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::ScaleCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// SelectedSetIds'' @ 150453470

void __cdecl `dynamic_atexit_destructor_for_'UGeometrySelectionManager::SelectedSetIds__(void)

{
  FStaticBasicLogDynamicData *pFVar1;
  longlong lVar2;
  FStaticBasicLogDynamicData *pFVar3;
  
  pFVar3 = &::LOG_Dynamic;
  lVar2 = 3;
  do {
    pFVar1 = pFVar3 + -0x10;
    pFVar3 = pFVar3 + -0x10;
    lVar2 = lVar2 + -1;
    if (*(void **)pFVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// UnselectedSetIds'' @ 1504534c0

void __cdecl `dynamic_atexit_destructor_for_'UGeometrySelectionManager::UnselectedSetIds__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TStaticArray<FString,3,4294967295> *pTVar3;
  
  pTVar3 = &UGeometrySelectionManager::HoverOverSelectedSetIds;
  lVar2 = 3;
  do {
    pFVar1 = (((FString *)((longlong)pTVar3 + -0x10))->Data).AllocatorInstance.Data;
    pTVar3 = (TStaticArray<FString,3,4294967295> *)((longlong)pTVar3 + -0x10);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableModelingVolumeSnapping'' @ 150453510

void __cdecl _dynamic_atexit_destructor_for__CVarEnableModelingVolumeSnapping__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableModelingVolumeSnapping);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometrySelectionManager_FullSelectionHoverHighlights'' @ 150453530

void __cdecl
_dynamic_atexit_destructor_for__CVarGeometrySelectionManager_FullSelectionHoverHighlights__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometrySelectionManager_FullSelectionHoverHighlights);
  return;
}

// `dynamic_atexit_destructor_for_'CVarModelingWorldRenderCaptureWarmupFrames'' @ 150453550

void __cdecl _dynamic_atexit_destructor_for__CVarModelingWorldRenderCaptureWarmupFrames__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarModelingWorldRenderCaptureWarmupFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderCaptureDraws'' @ 150453570

void __cdecl _dynamic_atexit_destructor_for__CVarRenderCaptureDraws__(void)

{
  CVarRenderCaptureDraws._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderCaptureDraws);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 150453590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

