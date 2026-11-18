// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 79

// CurveGroupName'' @ 14143da50

void __cdecl `dynamic_initializer_for_'FDataflowCurveSelection::CurveGroupName__(void)

{
  ::FName::FName(&FDataflowCurveSelection::CurveGroupName,"Curves");
  return;
}

// FacesGroupName'' @ 14143da70

void __cdecl `dynamic_initializer_for_'FDataflowFaceSelection::FacesGroupName__(void)

{
  ::FName::FName(&FDataflowFaceSelection::FacesGroupName,"Faces");
  return;
}

// GeometryGroupName'' @ 14143da90

void __cdecl `dynamic_initializer_for_'FDataflowGeometrySelection::GeometryGroupName__(void)

{
  ::FName::FName(&FDataflowGeometrySelection::GeometryGroupName,"Geometry");
  return;
}

// MaterialGroupName'' @ 14143dab0

void __cdecl `dynamic_initializer_for_'FDataflowMaterialSelection::MaterialGroupName__(void)

{
  ::FName::FName(&FDataflowMaterialSelection::MaterialGroupName,"Material");
  return;
}

// TransformGroupName'' @ 14143dad0

void __cdecl `dynamic_initializer_for_'FDataflowTransformSelection::TransformGroupName__(void)

{
  ::FName::FName(&FDataflowTransformSelection::TransformGroupName,"Transform");
  return;
}

// VerticesGroupName'' @ 14143daf0

void __cdecl `dynamic_initializer_for_'FDataflowVertexSelection::VerticesGroupName__(void)

{
  ::FName::FName(&FDataflowVertexSelection::VerticesGroupName,"Vertices");
  return;
}

// `dynamic_initializer_for_'LogFractureEngineUtility'' @ 14143db10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogFractureEngineUtility__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogFractureEngineUtility,L"LogFractureEngineUtility",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogFractureEngineUtility__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantFractureEngine'' @ 14143db50

void __cdecl _dynamic_initializer_for__ModuleRegistrantFractureEngine__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "FractureEngine";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"FractureEngine",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FFractureEnginePlugin>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 14143dba0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 14143dc30

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 14143dcc0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 14143dd50

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 14143dde0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 14143de70

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 14143df00

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 14143df90

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 14143e020

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 14143e0b0

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineConvex_h__Script_FractureEngine_2924336191'' @ 14143e140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineConvex_h__Script_FractureEngine_2924336191__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FractureEngine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineConvex_h__Script_FractureEngine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineFracturing_h__Script_FractureEngine_1107837983'' @ 14143e190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineFracturing_h__Script_FractureEngine_1107837983__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FractureEngine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineFracturing_h__Script_FractureEngine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineSampling_h__Script_FractureEngine_2768036986'' @ 14143e1e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineSampling_h__Script_FractureEngine_2768036986__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FractureEngine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineSampling_h__Script_FractureEngine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineUtility_h__Script_FractureEngine_2161566832'' @ 14143e230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineUtility_h__Script_FractureEngine_2161566832__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FractureEngine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineUtility_h__Script_FractureEngine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_FractureEngine'' @ 14143e280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_FractureEngine__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x70927d9f;
  local_res8[0].DeclarationsHash = 0xa971704;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_FractureEngine,L"/Script/FractureEngine",
             &Z_Registration_Info_UPackage__Script_FractureEngine,local_res8);
  return;
}

// Z_Construct_UPackage__Script_FractureEngine @ 14e8015b0

UPackage * __cdecl Z_Construct_UPackage__Script_FractureEngine(void)

{
  if (Z_Registration_Info_UPackage__Script_FractureEngine.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_FractureEngine.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_FractureEngine.OuterSingleton;
}

// EConvexHullSimplifyMethod_StaticEnum @ 14e8015f0

UEnum * __cdecl EConvexHullSimplifyMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod,(UObject *)pUVar1,
                       L"EConvexHullSimplifyMethod");
  }
  return Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e801630

void * __thiscall
IFractureEnginePlugin::_scalar_deleting_destructor_(IFractureEnginePlugin *this,uint param_1)

{
  *this = (IFractureEnginePlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e801690

void * __thiscall
FFractureEnginePlugin::_scalar_deleting_destructor_(FFractureEnginePlugin *this,uint param_1)

{
  *this = (FFractureEnginePlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ENonUniformSamplingDistributionMode_StaticEnum @ 14e8016d0

UEnum * __cdecl ENonUniformSamplingDistributionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode,
                       (UObject *)pUVar1,L"ENonUniformSamplingDistributionMode");
  }
  return Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.OuterSingleton;
}

// ENonUniformSamplingWeightMode_StaticEnum @ 14e801710

UEnum * __cdecl ENonUniformSamplingWeightMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode,
                       (UObject *)pUVar1,L"ENonUniformSamplingWeightMode");
  }
  return Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.OuterSingleton;
}

// EFractureBrickBondEnum_StaticEnum @ 14e801750

UEnum * __cdecl EFractureBrickBondEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFractureBrickBondEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFractureBrickBondEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum,(UObject *)pUVar1,
                       L"EFractureBrickBondEnum");
  }
  return Z_Registration_Info_UEnum_EFractureBrickBondEnum.OuterSingleton;
}

// EMeshCutterCutDistribution_StaticEnum @ 14e801790

UEnum * __cdecl EMeshCutterCutDistribution_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshCutterCutDistribution.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EMeshCutterCutDistribution.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution,(UObject *)pUVar1
                       ,L"EMeshCutterCutDistribution");
  }
  return Z_Registration_Info_UEnum_EMeshCutterCutDistribution.OuterSingleton;
}

// EMeshCutterPerCutMeshSelection_StaticEnum @ 14e8017d0

UEnum * __cdecl EMeshCutterPerCutMeshSelection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshCutterPerCutMeshSelection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EMeshCutterPerCutMeshSelection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EMeshCutterPerCutMeshSelection,
                       (UObject *)pUVar1,L"EMeshCutterPerCutMeshSelection");
  }
  return Z_Registration_Info_UEnum_EMeshCutterPerCutMeshSelection.OuterSingleton;
}

// EFixTinyGeoMergeType_StaticEnum @ 14e801810

UEnum * __cdecl EFixTinyGeoMergeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFixTinyGeoMergeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFixTinyGeoMergeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType,(UObject *)pUVar1,
                       L"EFixTinyGeoMergeType");
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoMergeType.OuterSingleton;
}

// EFixTinyGeoNeighborSelectionMethod_StaticEnum @ 14e801850

UEnum * __cdecl EFixTinyGeoNeighborSelectionMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod,
                       (UObject *)pUVar1,L"EFixTinyGeoNeighborSelectionMethod");
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.OuterSingleton;
}

// EFixTinyGeoUseBoneSelection_StaticEnum @ 14e801890

UEnum * __cdecl EFixTinyGeoUseBoneSelection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection,
                       (UObject *)pUVar1,L"EFixTinyGeoUseBoneSelection");
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.OuterSingleton;
}

// EFixTinyGeoGeometrySelectionMethod_StaticEnum @ 14e8018d0

UEnum * __cdecl EFixTinyGeoGeometrySelectionMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod,
                       (UObject *)pUVar1,L"EFixTinyGeoGeometrySelectionMethod");
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.OuterSingleton;
}

// Count<TArray<int,TSizedDefaultAllocator<32>_>,int> @ 14e801a30

ulong64 __cdecl
Algo::Count<TArray<int,TSizedDefaultAllocator<32>_>,int>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 4;
  uVar5 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    uVar3 = uVar5 + 1;
    if (*(int *)pFVar4 != *param_2) {
      uVar3 = uVar5;
    }
    pFVar4 = pFVar4 + 4;
    uVar5 = uVar3;
  }
  return uVar5;
}

// DefaultConstructItems<UE::Private::ClusterMagnet::FClusterMagnet,int> @ 14e801ab0

void __cdecl
DefaultConstructItems<UE::Private::ClusterMagnet::FClusterMagnet,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined4 *)(lVar1 + 0x6c) = 0;
      *(undefined4 *)(lVar1 + 0x70) = 0x80;
      *(undefined4 *)(lVar1 + 0x74) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined4 *)(lVar1 + 0x8c) = 0;
      lVar1 = lVar1 + 0xa0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Private::ClusterMagnet::FClusterMagnet,int> @ 14e801b30

void __cdecl
DestructItems<UE::Private::ClusterMagnet::FClusterMagnet,int>(FClusterMagnet *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Connections).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      pFVar1 = pFVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// StaticEnum<enum_EConvexHullSimplifyMethod> @ 14e801ea0

UEnum * __cdecl StaticEnum<enum_EConvexHullSimplifyMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod,(UObject *)pUVar1,
                       L"EConvexHullSimplifyMethod");
  }
  return Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.OuterSingleton;
}

// StaticEnum<enum_EFixTinyGeoGeometrySelectionMethod> @ 14e801ee0

UEnum * __cdecl StaticEnum<enum_EFixTinyGeoGeometrySelectionMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod,
                       (UObject *)pUVar1,L"EFixTinyGeoGeometrySelectionMethod");
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.OuterSingleton;
}

// StaticEnum<enum_EFixTinyGeoMergeType> @ 14e801f20

UEnum * __cdecl StaticEnum<enum_EFixTinyGeoMergeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFixTinyGeoMergeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFixTinyGeoMergeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType,(UObject *)pUVar1,
                       L"EFixTinyGeoMergeType");
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoMergeType.OuterSingleton;
}

// StaticEnum<enum_EFixTinyGeoNeighborSelectionMethod> @ 14e801f60

UEnum * __cdecl StaticEnum<enum_EFixTinyGeoNeighborSelectionMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod,
                       (UObject *)pUVar1,L"EFixTinyGeoNeighborSelectionMethod");
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.OuterSingleton;
}

// StaticEnum<enum_EFixTinyGeoUseBoneSelection> @ 14e801fa0

UEnum * __cdecl StaticEnum<enum_EFixTinyGeoUseBoneSelection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection,
                       (UObject *)pUVar1,L"EFixTinyGeoUseBoneSelection");
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.OuterSingleton;
}

// StaticEnum<enum_EFractureBrickBondEnum> @ 14e801fe0

UEnum * __cdecl StaticEnum<enum_EFractureBrickBondEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFractureBrickBondEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EFractureBrickBondEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum,(UObject *)pUVar1,
                       L"EFractureBrickBondEnum");
  }
  return Z_Registration_Info_UEnum_EFractureBrickBondEnum.OuterSingleton;
}

// StaticEnum<enum_EMeshCutterCutDistribution> @ 14e802020

UEnum * __cdecl StaticEnum<enum_EMeshCutterCutDistribution>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshCutterCutDistribution.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EMeshCutterCutDistribution.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution,(UObject *)pUVar1
                       ,L"EMeshCutterCutDistribution");
  }
  return Z_Registration_Info_UEnum_EMeshCutterCutDistribution.OuterSingleton;
}

// StaticEnum<enum_EMeshCutterPerCutMeshSelection> @ 14e802060

UEnum * __cdecl StaticEnum<enum_EMeshCutterPerCutMeshSelection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshCutterPerCutMeshSelection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_EMeshCutterPerCutMeshSelection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_EMeshCutterPerCutMeshSelection,
                       (UObject *)pUVar1,L"EMeshCutterPerCutMeshSelection");
  }
  return Z_Registration_Info_UEnum_EMeshCutterPerCutMeshSelection.OuterSingleton;
}

// StaticEnum<enum_ENonUniformSamplingDistributionMode> @ 14e8020a0

UEnum * __cdecl StaticEnum<enum_ENonUniformSamplingDistributionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode,
                       (UObject *)pUVar1,L"ENonUniformSamplingDistributionMode");
  }
  return Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.OuterSingleton;
}

// StaticEnum<enum_ENonUniformSamplingWeightMode> @ 14e8020e0

UEnum * __cdecl StaticEnum<enum_ENonUniformSamplingWeightMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FractureEngine();
    Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode,
                       (UObject *)pUVar1,L"ENonUniformSamplingWeightMode");
  }
  return Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.OuterSingleton;
}

// ~TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_4>,0,0> @ 14e8022b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_FFractureEngineClustering::ConvexityBasedCluster_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_5>,0,0> @ 14e8022d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_FFractureEngineClustering::ConvexityBasedCluster_::__l2::<lambda_5>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14e804200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e804240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// AppendConvexHullToCompactDynamicMesh @ 14e804b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`anonymous_namespace'::AppendConvexHullToCompactDynamicMesh
          (FConvex *param_1,FDynamicMesh3 *param_2,TTransform<double> *param_3,bool param_4,
          bool param_5,bool param_6)

{
  double *pdVar1;
  EIndexType EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TConvexHalfEdgeStructureData<int> *pTVar5;
  TConvexHalfEdgeStructureData<short> *pTVar6;
  TConvexHalfEdgeStructureData<unsigned_char> *pTVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TTransform<double> *pTVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  FPlaneData *pFVar20;
  FPlaneData *pFVar21;
  FPlaneData *pFVar22;
  FHalfEdgeData *pFVar23;
  FHalfEdgeData *pFVar24;
  FHalfEdgeData *pFVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 local_res8 [8];
  int local_res10;
  TTransform<double> *local_res18;
  char local_res20;
  FIndex3i_u_0 local_2d0;
  undefined1 local_2c0 [24];
  TVector<float>_u_0 local_2a8;
  TVector<float>_u_0 local_29c;
  TVector2<float>_u_0 local_290;
  undefined2 local_288;
  bool local_286;
  FIndex3i_u_0 local_280;
  FIndex3i_u_0 local_270;
  FConvex *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  FConvex **local_240;
  TVector<double>_u_0 local_238;
  undefined8 local_220;
  float local_218;
  undefined8 local_214;
  float local_20c;
  TVector2<float>_u_0 local_208;
  undefined2 local_200;
  undefined1 local_1fe;
  TVector<double>_u_0 local_1f8;
  undefined8 local_1e0;
  float local_1d8;
  undefined8 local_1d4;
  float local_1cc;
  TVector2<float>_u_0 local_1c8;
  undefined2 local_1c0;
  undefined1 local_1be;
  TVector<double>_u_0 local_1b8;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_194;
  float local_18c;
  TVector2<float>_u_0 local_188;
  undefined2 local_180;
  undefined1 local_17e;
  TConvexHull3<double> local_178;
  undefined1 local_c8 [16];
  double local_b8;
  undefined1 local_a8 [16];
  
  local_res18 = param_3;
  local_res20 = param_4;
  if (((((param_2->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
         (param_2->VertexRefCounts).FreeIndices.CurBlockUsed != 0) ||
       ((param_2->EdgeRefCounts).FreeIndices.CurBlock * 0x200 +
        (param_2->EdgeRefCounts).FreeIndices.CurBlockUsed != 0)) ||
      ((param_2->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_2->TriangleRefCounts).FreeIndices.CurBlockUsed != 0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh.IsCompact()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineConvex.cpp"
                          ,0x1c,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar16 = local_res18;
  iVar33 = (param_1->Vertices).ArrayNum;
  lVar35 = (longlong)iVar33;
  uVar29 = 0;
  iVar3 = (param_1->Planes).ArrayNum;
  iVar31 = (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_2->VertexRefCounts).RefCounts.CurBlockUsed;
  local_res10 = iVar31;
  if (0 < iVar33) {
    uVar32 = uVar29;
    if (param_3 == (TTransform<double> *)0x0) {
      if (0 < lVar35) {
        do {
          uVar18 = (uint)uVar29;
          uVar27 = 0;
          if ((int)uVar18 < (param_1->Vertices).ArrayNum) {
            uVar27 = ~uVar18 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
          local_288._0_1_ = false;
          local_288._1_1_ = false;
          local_286 = false;
          local_2c0._16_8_ = (undefined8)*(float *)(pFVar4 + uVar32 + 8);
          local_2a8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_29c._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_290 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_2c0._8_8_ = (double)*(float *)(pFVar4 + uVar32 + 4);
          local_2c0._0_8_ = (double)*(float *)(pFVar4 + uVar32);
          local_2a8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_29c._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          UE::Geometry::FDynamicMesh3::AppendVertex(param_2,(FVertexInfo *)local_2c0);
          uVar29 = (ulonglong)(uVar18 + 1);
          lVar35 = lVar35 + -1;
          uVar32 = uVar32 + 0xc;
        } while (lVar35 != 0);
      }
    }
    else {
      do {
        uVar18 = (uint)uVar29;
        uVar27 = 0;
        if ((int)uVar18 < (param_1->Vertices).ArrayNum) {
          uVar27 = ~uVar18 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
        auVar38 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
        dVar15 = (pTVar16->Rotation).ZW.m128d_f64[1];
        local_2a8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_29c._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_290 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_288._0_1_ = false;
        local_288._1_1_ = false;
        local_286 = false;
        dVar13 = (double)*(float *)(pFVar4 + uVar32 + 8) * (pTVar16->Scale3D).ZW.m128d_f64[0];
        dVar14 = (pTVar16->Scale3D).ZW.m128d_f64[1] * 0.0;
        auVar44 = *(undefined1 (*) [16])(pTVar16->Rotation).ZW.m128d_f64;
        dVar11 = (pTVar16->Scale3D).XY.m128d_f64[0] * (double)*(float *)(pFVar4 + uVar32);
        dVar12 = (pTVar16->Scale3D).XY.m128d_f64[1] * (double)*(float *)(pFVar4 + uVar32 + 4);
        uVar45 = (undefined4)((ulonglong)dVar12 >> 0x20);
        local_a8 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
        auVar39 = blendpd(local_a8,auVar44,2);
        auVar47._8_4_ = SUB84(dVar12,0);
        auVar47._0_8_ = dVar11;
        auVar47._12_4_ = uVar45;
        dVar9 = auVar44._0_8_;
        auVar48._0_8_ = auVar47._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar11;
        auVar48._8_8_ = dVar13 * local_a8._8_8_ - dVar9 * dVar12;
        auVar41._8_4_ = SUB84(dVar12,0);
        auVar41._0_8_ = dVar11;
        auVar41._12_4_ = uVar45;
        auVar36._8_4_ = SUB84(dVar14,0);
        auVar36._0_8_ = dVar13;
        auVar36._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        auVar36 = blendpd(auVar41,auVar36,2);
        auVar37._0_8_ = auVar36._0_8_ * dVar9 - auVar39._0_8_ * dVar13;
        auVar37._8_8_ = auVar36._8_8_ * auVar44._8_8_ - auVar39._8_8_ * dVar14;
        auVar36 = blendpd(auVar48,auVar37,2);
        dVar14 = auVar48._8_8_ + auVar48._8_8_;
        dVar10 = auVar37._0_8_ + auVar37._0_8_;
        uVar45 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar49._0_8_ = auVar36._0_8_ + auVar36._0_8_;
        auVar49._8_8_ = auVar36._8_8_ + auVar36._8_8_;
        auVar42._8_4_ = SUB84(dVar10,0);
        auVar42._0_8_ = dVar14;
        auVar42._12_4_ = uVar45;
        auVar39._8_4_ = SUB84(dVar10,0);
        auVar39._0_8_ = dVar14;
        auVar39._12_4_ = uVar45;
        auVar36 = blendpd(auVar39,auVar49,2);
        auVar43._0_8_ = auVar42._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar14;
        auVar43._8_8_ = auVar49._0_8_ * auVar38._8_8_ - dVar9 * dVar10;
        auVar41 = blendpd(auVar38,auVar44,2);
        auVar38._8_4_ = SUB84(auVar43._8_8_,0);
        auVar38._0_8_ = auVar43._0_8_;
        auVar38._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
        auVar40._0_8_ = auVar36._0_8_ * dVar9 - auVar41._0_8_ * auVar49._0_8_;
        auVar40._8_8_ = auVar36._8_8_ * auVar44._8_8_ - auVar41._8_8_ * auVar49._8_8_;
        auVar44 = blendpd(auVar43,auVar40,2);
        dVar9 = dVar14 * dVar15 + dVar11 + auVar38._8_8_ + (pTVar16->Translation).XY.m128d_f64[0];
        dVar14 = dVar10 * dVar15 + dVar12 + auVar40._0_8_ + (pTVar16->Translation).XY.m128d_f64[1];
        uVar45 = SUB84(dVar14,0);
        uVar46 = (undefined4)((ulonglong)dVar14 >> 0x20);
        local_2c0._16_8_ =
             auVar49._0_8_ * dVar15 + dVar13 + auVar44._0_8_ +
             (pTVar16->Translation).ZW.m128d_f64[0];
        local_c8._8_4_ = uVar45;
        local_c8._0_8_ = dVar9;
        local_c8._12_4_ = uVar46;
        local_2c0._8_4_ = uVar45;
        local_2c0._0_8_ = dVar9;
        local_2c0._12_4_ = uVar46;
        local_2a8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_29c._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_b8 = (double)local_2c0._16_8_;
        UE::Geometry::FDynamicMesh3::AppendVertex(param_2,(FVertexInfo *)local_2c0);
        uVar29 = (ulonglong)(uVar18 + 1);
        uVar32 = uVar32 + 0xc;
        iVar31 = local_res10;
      } while ((int)(uVar18 + 1) < iVar33);
    }
  }
  iVar34 = 0;
  if (param_6) {
    local_178.Progress = (FProgressCancel *)0x0;
    local_250 = local_res8;
    local_178.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
    local_178.SimplificationSettings.SkipAtHullDistanceAbsolute =
         ___xmm_ffefffffffffffffffefffffffffffff;
    local_178.SimplificationSettings.SkipAtHullDistanceAsFraction = _UNK_1508ffb58;
    local_258 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::Solve'::__l2::<lambda_1>,bool,int>
                ::Call;
    local_178.Line.Origin.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_178.Line.Origin.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_248 = UE::Core::Private::Function::
                TFunctionRefCaller<``anonymous_namespace'::AppendConvexHullToCompactDynamicMesh'::__l18::<lambda_1>,UE::Math::TVector<double>,int>
                ::Call;
    local_240 = &local_260;
    local_178.NumHullPoints = 0;
    local_178.Line.Origin.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_178.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Line.Direction.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    local_178.bSaveTriangleNeighbors = false;
    local_178.SimplificationSettings.MaxHullVertices = -1;
    local_178.Line.Direction.field0_0x0._s_0.X =
         UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_178.Line.Direction.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_178.Hull.ArrayNum = 0;
    local_178.Hull.ArrayMax = 0;
    local_178.HullNeighbors.ArrayNum = 0;
    local_178.HullNeighbors.ArrayMax = 0;
    local_260 = param_1;
    UE::Geometry::TConvexHull3<double>::Solve
              (&local_178,iVar33,(TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_248,
               (TFunctionRef<bool___cdecl(int)> *)&local_258);
    uVar27 = 0;
    if (0 < local_178.Hull.ArrayNum) {
      lVar35 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar27 < local_178.Hull.ArrayNum) {
          uVar18 = ~uVar27 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_2d0._s_0.A = *(int *)(local_178.Hull.AllocatorInstance.Data + lVar35) + iVar31;
        local_2d0._s_0.B = *(int *)(local_178.Hull.AllocatorInstance.Data + lVar35 + 4) + iVar31;
        local_2d0._s_0.C = *(int *)(local_178.Hull.AllocatorInstance.Data + lVar35 + 8) + iVar31;
        if (!param_5) {
          local_2d0._s_0.B = *(int *)(local_178.Hull.AllocatorInstance.Data + lVar35 + 8) + iVar31;
          local_2d0._s_0.C = *(int *)(local_178.Hull.AllocatorInstance.Data + lVar35 + 4) + iVar31;
        }
        UE::Geometry::FDynamicMesh3::AppendTriangle(param_2,(FIndex3i *)&local_2d0._s_0,0);
        uVar27 = uVar27 + 1;
        lVar35 = lVar35 + 0xc;
      } while ((int)uVar27 < local_178.Hull.ArrayNum);
    }
    if (local_178.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.HullNeighbors.AllocatorInstance.Data);
    }
    if (local_178.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Hull.AllocatorInstance.Data);
    }
  }
  else if (0 < iVar3) {
    do {
      EVar2 = (param_1->StructureData).IndexType;
      if (EVar2 == Small) {
        pFVar22 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                            ((param_1->StructureData).Data.DataS,iVar34);
        uVar27 = (uint)pFVar22->NumHalfEdges;
      }
      else if (EVar2 == Medium) {
        pFVar21 = Chaos::TConvexHalfEdgeStructureData<short>::GetPlane
                            ((param_1->StructureData).Data.DataM,iVar34);
        uVar27 = (uint)pFVar21->NumHalfEdges;
      }
      else if (EVar2 == Large) {
        pFVar20 = Chaos::TConvexHalfEdgeStructureData<int>::GetPlane
                            ((param_1->StructureData).Data.DataL,iVar34);
        uVar27 = pFVar20->NumHalfEdges;
      }
      else {
        uVar27 = 0;
      }
      EVar2 = (param_1->StructureData).IndexType;
      if (EVar2 == Small) {
        pTVar7 = (param_1->StructureData).Data.DataS;
        pFVar22 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlane(pTVar7,iVar34);
        if ((pFVar22->NumHalfEdges == '\0') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                ,0x9e,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar22 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlane(pTVar7,iVar34);
        pFVar25 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                            (pTVar7,(uint)pFVar22->FirstHalfEdgeIndex);
        uVar18 = (uint)pFVar25->VertexIndex;
      }
      else if (EVar2 == Medium) {
        pTVar6 = (param_1->StructureData).Data.DataM;
        pFVar21 = Chaos::TConvexHalfEdgeStructureData<short>::GetPlane(pTVar6,iVar34);
        if ((pFVar21->NumHalfEdges < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                ,0x9e,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar21 = Chaos::TConvexHalfEdgeStructureData<short>::GetPlane(pTVar6,iVar34);
        pFVar24 = Chaos::TConvexHalfEdgeStructureData<short>::GetHalfEdge
                            (pTVar6,(int)pFVar21->FirstHalfEdgeIndex);
        uVar18 = (uint)pFVar24->VertexIndex;
      }
      else if (EVar2 == Large) {
        pTVar5 = (param_1->StructureData).Data.DataL;
        pFVar20 = Chaos::TConvexHalfEdgeStructureData<int>::GetPlane(pTVar5,iVar34);
        if ((pFVar20->NumHalfEdges < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                ,0x9e,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar20 = Chaos::TConvexHalfEdgeStructureData<int>::GetPlane(pTVar5,iVar34);
        pFVar23 = Chaos::TConvexHalfEdgeStructureData<int>::GetHalfEdge
                            (pTVar5,pFVar20->FirstHalfEdgeIndex);
        uVar18 = pFVar23->VertexIndex;
      }
      else {
        uVar18 = 0xffffffff;
      }
      uVar18 = uVar18 + iVar31;
      if (2 < (int)uVar27) {
        iVar33 = 2;
        do {
          EVar2 = (param_1->StructureData).IndexType;
          if (EVar2 == Small) {
            pTVar7 = (param_1->StructureData).Data.DataS;
            iVar19 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                               (pTVar7,iVar34,iVar33 + -1);
            pFVar25 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge(pTVar7,iVar19)
            ;
            uVar30 = (uint)pFVar25->VertexIndex;
          }
          else if (EVar2 == Medium) {
            pTVar6 = (param_1->StructureData).Data.DataM;
            iVar19 = Chaos::TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                               (pTVar6,iVar34,iVar33 + -1);
            pFVar24 = Chaos::TConvexHalfEdgeStructureData<short>::GetHalfEdge(pTVar6,iVar19);
            uVar30 = (uint)pFVar24->VertexIndex;
          }
          else if (EVar2 == Large) {
            pTVar5 = (param_1->StructureData).Data.DataL;
            iVar19 = Chaos::TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge
                               (pTVar5,iVar34,iVar33 + -1);
            pFVar23 = Chaos::TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar5,iVar19);
            uVar30 = pFVar23->VertexIndex;
          }
          else {
            uVar30 = 0xffffffff;
          }
          EVar2 = (param_1->StructureData).IndexType;
          if (EVar2 == Small) {
            pTVar7 = (param_1->StructureData).Data.DataS;
            iVar19 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                               (pTVar7,iVar34,iVar33);
            pFVar25 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge(pTVar7,iVar19)
            ;
            uVar28 = (uint)pFVar25->VertexIndex;
          }
          else if (EVar2 == Medium) {
            pTVar6 = (param_1->StructureData).Data.DataM;
            iVar19 = Chaos::TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                               (pTVar6,iVar34,iVar33);
            pFVar24 = Chaos::TConvexHalfEdgeStructureData<short>::GetHalfEdge(pTVar6,iVar19);
            uVar28 = (uint)pFVar24->VertexIndex;
          }
          else if (EVar2 == Large) {
            pTVar5 = (param_1->StructureData).Data.DataL;
            iVar19 = Chaos::TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge
                               (pTVar5,iVar34,iVar33);
            pFVar23 = Chaos::TConvexHalfEdgeStructureData<int>::GetHalfEdge(pTVar5,iVar19);
            uVar28 = pFVar23->VertexIndex;
          }
          else {
            uVar28 = 0xffffffff;
          }
          uVar26 = uVar30;
          if (!param_5) {
            uVar26 = uVar28;
          }
          uVar26 = uVar26 + iVar31;
          if (!param_5) {
            uVar28 = uVar30;
          }
          uVar28 = local_res10 + uVar28;
          local_280._s_0.A = uVar18;
          local_280._s_0.B = uVar28;
          local_280._s_0.C = uVar26;
          iVar31 = UE::Geometry::FDynamicMesh3::AppendTriangle
                             (param_2,(FIndex3i *)&local_280._s_0,0);
          if ((local_res20 != '\0') && (iVar31 == -2)) {
            local_200 = 0;
            local_1fe = 0;
            lVar35 = *(longlong *)
                      ((param_2->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar26 >> 9) * 8);
            pdVar1 = (double *)(lVar35 + (ulonglong)(uVar26 & 0x1ff) * 0x18);
            local_238._s_0.X = *pdVar1;
            local_238._s_0.Y = pdVar1[1];
            local_238._s_0.Z = *(double *)(lVar35 + 0x10 + (ulonglong)(uVar26 & 0x1ff) * 0x18);
            local_218 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_20c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_220 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_214 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_208 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            iVar31 = UE::Geometry::FDynamicMesh3::AppendVertex
                               (param_2,(FVertexInfo *)&local_238._s_0);
            local_1d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_1cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            lVar35 = *(longlong *)
                      ((param_2->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar28 >> 9) * 8);
            local_1c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            local_1c0 = 0;
            local_1be = 0;
            pdVar1 = (double *)(lVar35 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
            local_1f8._s_0.X = *pdVar1;
            local_1f8._s_0.Y = pdVar1[1];
            local_1f8._s_0.Z = *(double *)(lVar35 + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
            local_1e0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_1d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            iVar19 = UE::Geometry::FDynamicMesh3::AppendVertex
                               (param_2,(FVertexInfo *)&local_1f8._s_0);
            local_180 = 0;
            local_17e = 0;
            local_198 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_18c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            lVar35 = *(longlong *)
                      ((param_2->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar18 >> 9) * 8);
            local_188 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            pdVar1 = (double *)(lVar35 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
            local_1b8._s_0.X = *pdVar1;
            local_1b8._s_0.Y = pdVar1[1];
            local_1b8._s_0.Z = *(double *)(lVar35 + 0x10 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
            local_1a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_194 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_270._s_0.A =
                 UE::Geometry::FDynamicMesh3::AppendVertex(param_2,(FVertexInfo *)&local_1b8._s_0);
            local_270._s_0.B = iVar19;
            local_270._s_0.C = iVar31;
            UE::Geometry::FDynamicMesh3::AppendTriangle(param_2,(FIndex3i *)&local_270._s_0,0);
          }
          iVar33 = iVar33 + 1;
          iVar31 = local_res10;
        } while (iVar33 < (int)uVar27);
      }
      iVar34 = iVar34 + 1;
    } while (iVar34 < iVar3);
  }
  return;
}

// CalculateNumBricks @ 14e807170

long64 __cdecl
FractureToolBrickLocals::CalculateNumBricks(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint in_EAX;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar12 = dVar1;
  if (dVar2 <= dVar1) {
    dVar12 = dVar2;
  }
  if (dVar3 <= dVar12) {
    dVar12 = dVar3;
  }
  if (0.0 < dVar12) {
    dVar12 = (param_2->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Y;
    dVar5 = (param_2->field0_0x0)._s_0.Z;
    dVar13 = dVar12;
    if (dVar4 <= dVar12) {
      dVar13 = dVar4;
    }
    if (dVar5 <= dVar13) {
      dVar13 = dVar5;
    }
    if (0.0 < dVar13) {
      dVar12 = dVar12 / dVar1;
      lVar11 = (longlong)dVar12;
      if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar12)) {
        auVar6._8_4_ = SUB84(dVar12,0);
        auVar6._0_8_ = dVar12;
        auVar6._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        uVar9 = movmskpd(in_EAX,auVar6);
        in_EAX = uVar9 & 1 ^ 1;
        dVar12 = (double)(longlong)(lVar11 + (ulonglong)in_EAX);
      }
      dVar4 = dVar4 / dVar2;
      lVar11 = (longlong)dVar4;
      if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar4)) {
        auVar8._8_4_ = SUB84(dVar4,0);
        auVar8._0_8_ = dVar4;
        auVar8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uVar9 = movmskpd(in_EAX,auVar8);
        in_EAX = uVar9 & 1 ^ 1;
        dVar4 = (double)(longlong)(lVar11 + (ulonglong)in_EAX);
      }
      dVar5 = dVar5 / dVar3;
      lVar11 = (longlong)dVar5;
      if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar5)) {
        auVar7._8_4_ = SUB84(dVar5,0);
        auVar7._0_8_ = dVar5;
        auVar7._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uVar9 = movmskpd(in_EAX,auVar7);
        dVar5 = (double)(longlong)(lVar11 + (ulonglong)(uVar9 & 1 ^ 1));
      }
      iVar10 = _finite(dVar12);
      if (((iVar10 != 0) && (iVar10 = _finite(dVar4), iVar10 != 0)) &&
         (iVar10 = _finite(dVar5), iVar10 != 0)) {
        dVar5 = dVar12 * dVar4 * dVar5;
        iVar10 = _isnan(dVar5);
        if (iVar10 == 0) {
          return (longlong)dVar5;
        }
      }
    }
  }
  return -1;
}

// CollectTargetBones @ 14e808610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
CollectTargetBones(FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_3,
                  TArray<double,TSizedDefaultAllocator<32>_> *param_4,double *param_5,
                  EFixTinyGeoMergeType param_6,bool param_7,
                  EFixTinyGeoGeometrySelectionMethod param_8,float param_9,float param_10,
                  EFixTinyGeoUseBoneSelection param_11,bool param_12)

{
  FManagedArrayBase *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar10;
  uint uVar11;
  FValueType *this;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  double dVar16;
  double dVar17;
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_328;
  int local_318 [2];
  TArrayView<int_const_,int> local_310;
  TArrayView<double_const_,int> local_300;
  TArrayView<int_const_,int> local_2f0;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FCollectionTransformSelectionFacade local_2c8;
  
  uVar11 = 0;
  local_310.DataPtr = (int *)0x0;
  local_310.ArrayNum = 0;
  FindBoneVolumes(param_1,&local_310,param_4,__real_3f847ae147ae147b,param_6 == MergeClusters);
  dVar16 = 0.0;
  iVar7 = (**(code **)(param_1->_padding_ + 0x60))(&param_1->_padding_);
  dVar17 = 0.0;
  if (param_4->ArrayNum == iVar7) {
    iVar7 = (**(code **)(param_1->_padding_ + 0x60))(&param_1->_padding_);
    if (0 < iVar7) {
      lVar14 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < *(int *)&(param_1->SimulationType).field_0x18) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar14 * 4) == 1) {
          uVar8 = 0;
          if ((int)uVar11 < param_4->ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          dVar16 = dVar16 + *(double *)((param_4->AllocatorInstance).Data + lVar14 * 8);
        }
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 1;
        dVar17 = dVar16;
      } while (lVar14 < iVar7);
    }
  }
  if (param_8 == VolumeCubeRoot) {
    dVar16 = (double)param_9;
    dVar17 = dVar16 * dVar16;
    dVar16 = dVar16 * ___real_3eb0c6f7a0b5ed8e;
  }
  else {
    dVar16 = pow(dVar17,__real_3fd5555555555555);
    dVar16 = dVar16 * (double)param_10;
    dVar17 = dVar16 * dVar16;
  }
  *param_5 = dVar17 * dVar16;
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_2c8,(FManagedArrayCollection *)param_1);
  if (param_11 == OnlyMergeSelected) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(param_3,param_2);
    if (param_6 != MergeClusters) {
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertSelectionToRigidNodes
                (&local_2c8,param_3);
    }
  }
  else {
    dVar16 = *param_5;
    iVar7 = param_4->ArrayNum;
    local_300.DataPtr = (double *)(param_4->AllocatorInstance).Data;
    if ((iVar7 < 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_2f0.DataPtr = (int *)0x0;
    local_2f0.ArrayNum = 0;
    local_300.ArrayNum = iVar7;
    FindSmallBones(param_1,&local_2f0,&local_300,dVar16,param_3,param_6 == MergeClusters);
    FVar4 = FTransformCollection::TransformGroup;
    pFVar9 = FName::FName(&local_2d0,"Level");
    local_2d8 = FVar4;
    local_2e0 = *pFVar9;
    pTVar10 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_1->_padding_,(TTuple<FName,FName> *)&local_2e0);
    this = (FValueType *)&pTVar10->field_0x10;
    if (pTVar10 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      this = (FValueType *)0x0;
    }
    if (this != (FValueType *)0x0) {
      if ((this->ArrayType != FInt32Type) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsSameType<T>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x315,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FManagedArrayCollection::FValueType::MakeUniqueForWrite(this);
      pFVar1 = this->ManagedArray;
      if ((pFVar1 == (FManagedArrayBase *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar1->bIsDirty = true;
    }
    if (param_6 == MergeClusters) {
      pFVar2 = (param_3->AllocatorInstance).Data;
      pFVar15 = pFVar2 + (longlong)param_3->ArrayNum * 4;
      pFVar12 = pFVar2;
      while (pFVar12 != pFVar15) {
        uVar11 = *(uint *)pFVar12;
        uVar8 = 0;
        if ((int)uVar11 < *(int *)&(param_1->SimulationType).field_0x18) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + (longlong)(int)uVar11 * 4)
            == 2) {
          pFVar12 = pFVar12 + 4;
        }
        else {
          do {
            pFVar15 = pFVar15 + -4;
            if (pFVar12 == pFVar15) goto LAB_14e808a43;
            uVar11 = *(uint *)pFVar15;
            uVar8 = 0;
            if ((int)uVar11 < *(int *)&(param_1->SimulationType).field_0x18) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          } while (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 +
                           (longlong)(int)uVar11 * 4) != 2);
          *(uint *)pFVar12 = *(uint *)pFVar15;
          pFVar12 = pFVar12 + 4;
        }
      }
LAB_14e808a43:
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                (param_3,(int)((longlong)pFVar12 - (longlong)pFVar2 >> 2),Default);
    }
    if (param_11 == AlsoMergeSelected) {
      local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.ArrayNum = param_2->ArrayNum;
      lVar14 = (longlong)local_328.ArrayNum;
      pFVar15 = (param_2->AllocatorInstance).Data;
      if (local_328.ArrayNum == 0) {
        local_328.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_328.ArrayNum,0,&local_328.AllocatorInstance,local_328.ArrayNum,
                   &local_328.ArrayMax);
        memcpy(local_328.AllocatorInstance.Data,pFVar15,lVar14 << 2);
      }
      if (param_6 != MergeClusters) {
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertSelectionToRigidNodes(&local_2c8,&local_328);
      }
      iVar7 = local_328.ArrayNum;
      pFVar15 = local_328.AllocatorInstance.Data + (longlong)local_328.ArrayNum * 4;
      FVar13.Data = local_328.AllocatorInstance.Data;
      while( true ) {
        if (local_328.ArrayNum != iVar7) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar13.Data == pFVar15) break;
        local_318[0] = *(int *)FVar13.Data;
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_3,local_318);
        FVar13.Data = FVar13.Data + 4;
      }
      if (local_328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.AllocatorInstance.Data);
      }
    }
  }
  return param_3->ArrayNum != 0;
}

// ConvertSelectionSetToSelectionArr @ 14e80b4e0

void __cdecl
ConvertSelectionSetToSelectionArr
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  uVar14 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  iVar13 = 0;
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar2 = &(param_1->Elements).field_0x10;
  uVar14 = 1;
  iVar15 = 0;
  iVar10 = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e80b5bd;
      uVar12 = puVar17[lVar11 + 1];
    }
    uVar14 = -uVar12 & uVar12;
    uVar4 = (ulonglong)uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar10 = local_res20 + -1 + iVar15;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_14e80b5bd:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar14,iVar13);
  uVar14 = uVar12 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar10;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar10;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar6) {
    puVar16 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e80b6d0;
      uVar12 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_14e80b6d0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar3 = (FScriptContainerElement *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0xc);
    pFVar7 = (param_2->AllocatorInstance).Data;
    if (((pFVar7 <= pFVar3) && (pFVar3 < pFVar7 + (longlong)*piVar1 * 4)) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar13 = param_2->ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar13 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 4) =
         *(undefined4 *)pFVar3;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeFractureEngineConvex @ 14e80ee80

void __cdecl EmptyLinkFunctionForGeneratedCodeFractureEngineConvex(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFractureEngineFracturing @ 14e80ee90

void __cdecl EmptyLinkFunctionForGeneratedCodeFractureEngineFracturing(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFractureEngineSampling @ 14e80eea0

void __cdecl EmptyLinkFunctionForGeneratedCodeFractureEngineSampling(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFractureEngineUtility @ 14e80eeb0

void __cdecl EmptyLinkFunctionForGeneratedCodeFractureEngineUtility(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFractureEngine_init @ 14e80eec0

void __cdecl EmptyLinkFunctionForGeneratedCodeFractureEngine_init(void)

{
  return;
}

// GetBrickDimensions @ 14e813ad0

TVector<double> * __cdecl
FractureToolBrickLocals::GetBrickDimensions
          (TVector<double> *__return_storage_ptr__,float param_1,float param_2,float param_3,
          TVector<double> *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  long64 lVar13;
  longlong lVar14;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0 [7];
  
  dVar10 = (double)param_2;
  dVar8 = (double)param_1;
  dVar9 = (double)param_3;
  local_d8._s_0.X = dVar8;
  local_d8._s_0.Y = dVar9;
  local_d8._s_0.Z = dVar10;
  lVar13 = CalculateNumBricks((TVector<double> *)&local_d8._s_0,param_4);
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (lVar13 < 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar3 = dVar8;
    dVar4 = dVar9;
    dVar2 = dVar10;
    uVar5 = local_d8._s_0.X;
    uVar6 = local_d8._s_0.Y;
    if (0x2000 < lVar13) {
      do {
        dVar3 = dVar3 + dVar3;
        dVar4 = dVar4 + dVar4;
        dVar2 = dVar2 + dVar2;
        local_d8._s_0.X = dVar3;
        local_d8._s_0.Y = dVar4;
        local_d8._s_0.Z = dVar2;
        lVar13 = CalculateNumBricks((TVector<double> *)&local_d8._s_0,param_4);
        dVar11 = __real_3fe0000000000000;
      } while (0x2000 < lVar13);
      lVar14 = 10;
      do {
        uVar5 = (dVar3 + dVar8) * dVar11;
        uVar6 = (dVar4 + dVar9) * dVar11;
        dVar7 = (dVar2 + dVar10) * dVar11;
        local_c0[0]._0_8_ = uVar5;
        local_c0[0]._8_8_ = uVar6;
        local_c0[0]._16_8_ = dVar7;
        lVar13 = CalculateNumBricks((TVector<double> *)&local_c0[0]._s_0,param_4);
        uVar12 = dVar7;
        if (0x2000 < lVar13) {
          dVar8 = (double)uVar5;
          dVar9 = (double)uVar6;
          dVar10 = dVar7;
          uVar5 = dVar3;
          uVar6 = dVar4;
          dVar7 = dVar2;
          uVar12 = local_d8._s_0.Z;
        }
        local_d8._s_0.Z = (double)uVar12;
        lVar14 = lVar14 + -1;
        dVar2 = dVar7;
        dVar3 = (double)uVar5;
        dVar4 = (double)uVar6;
      } while (lVar14 != 0);
    }
    auVar1._8_4_ = (int)uVar6;
    auVar1._0_8_ = uVar5;
    auVar1._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_d8._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetValidGeoCenter @ 14e8146b0

bool __cdecl
GetValidGeoCenter(FManagedArrayCollection *param_1,TManagedArray<int> *param_2,
                 TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
                 TManagedArray<int> *param_4,
                 TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *param_5,
                 TManagedArray<UE::Math::TBox<double>_> *param_6,TManagedArray<int> *param_7,
                 int param_8,TVector<double> *param_9)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  TVector<double> *pTVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  longlong *plVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uVar53;
  undefined1 local_148 [4];
  int local_144;
  longlong *local_140;
  int iStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_8c;
  
  iVar4 = param_8;
  lVar27 = (longlong)param_8;
  iVar20 = 0;
  uVar21 = (uint)~param_8 >> 0x1f;
  uVar22 = 0;
  if (param_8 < *(int *)&param_7->field_0x18) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar16 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar5 = (code *)swi(3);
    uVar17 = (*pcVar5)();
    return (bool)uVar17;
  }
  if (*(int *)(*(longlong *)&param_7->field_0x10 + lVar27 * 4) == 1) {
    uVar22 = 0;
    if (iVar4 < param_3->ArrayNum) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    pFVar26 = (param_3->AllocatorInstance).Data + lVar27 * 0x60;
    uVar22 = 0;
    if (iVar4 < *(int *)&param_2->field_0x18) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    uVar22 = *(uint *)(*(longlong *)&param_2->field_0x10 + lVar27 * 4);
    uVar21 = 0;
    if ((int)uVar22 < *(int *)&param_6->field_0x18) {
      uVar21 = ~uVar22 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    lVar27 = *(longlong *)&param_6->field_0x10;
    dVar13 = *(double *)(pFVar26 + 0x18);
    lVar19 = (longlong)(int)uVar22 * 0x38;
    auVar29 = *(undefined1 (*) [16])pFVar26;
    dVar10 = (*(double *)(lVar19 + 0x28 + lVar27) + *(double *)(lVar19 + 0x10 + lVar27)) *
             __real_3fe0000000000000 * *(double *)&pFVar26[0x50].field_0x0;
    dVar11 = *(double *)(pFVar26 + 0x58) * 0.0;
    auVar41 = *(undefined1 (*) [16])(pFVar26 + 0x10);
    dVar7 = (*(double *)(lVar19 + 0x18 + lVar27) + *(double *)(lVar19 + lVar27)) *
            __real_3fe0000000000000 * *(double *)&pFVar26[0x40].field_0x0;
    dVar8 = (*(double *)(lVar19 + 0x20 + lVar27) + *(double *)(lVar19 + 8 + lVar27)) *
            __real_3fe0000000000000 * *(double *)(pFVar26 + 0x48);
    uVar44 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar34 = blendpd(auVar29,auVar41,2);
    auVar46._8_4_ = SUB84(dVar8,0);
    auVar46._0_8_ = dVar7;
    auVar46._12_4_ = uVar44;
    dVar3 = auVar41._0_8_;
    auVar47._0_8_ = auVar46._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar7;
    auVar47._8_8_ = dVar10 * auVar29._8_8_ - dVar3 * dVar8;
    auVar28._8_4_ = SUB84(dVar8,0);
    auVar28._0_8_ = dVar7;
    auVar28._12_4_ = uVar44;
    auVar48._8_4_ = SUB84(dVar11,0);
    auVar48._0_8_ = dVar10;
    auVar48._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar29 = blendpd(auVar28,auVar48,2);
    auVar30._0_8_ = auVar29._0_8_ * dVar3 - auVar34._0_8_ * dVar10;
    auVar30._8_8_ = auVar29._8_8_ * auVar41._8_8_ - auVar34._8_8_ * dVar11;
    auVar29 = *(undefined1 (*) [16])pFVar26;
    auVar48 = blendpd(auVar47,auVar30,2);
    dVar11 = auVar47._8_8_ + auVar47._8_8_;
    dVar45 = auVar30._0_8_ + auVar30._0_8_;
    uVar44 = (undefined4)((ulonglong)dVar45 >> 0x20);
    auVar49._0_8_ = auVar48._0_8_ + auVar48._0_8_;
    auVar49._8_8_ = auVar48._8_8_ + auVar48._8_8_;
    auVar39._8_4_ = SUB84(dVar45,0);
    auVar39._0_8_ = dVar11;
    auVar39._12_4_ = uVar44;
    auVar35._8_4_ = SUB84(dVar45,0);
    auVar35._0_8_ = dVar11;
    auVar35._12_4_ = uVar44;
    auVar48 = blendpd(auVar35,auVar49,2);
    auVar40._0_8_ = auVar39._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar11;
    auVar40._8_8_ = auVar49._0_8_ * auVar29._8_8_ - dVar3 * dVar45;
    auVar34._8_4_ = SUB84(auVar40._8_8_,0);
    auVar34._0_8_ = auVar40._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
    auVar29 = blendpd(auVar29,auVar41,2);
    auVar36._0_8_ = auVar48._0_8_ * dVar3 - auVar29._0_8_ * auVar49._0_8_;
    auVar36._8_8_ = auVar48._8_8_ * auVar41._8_8_ - auVar29._8_8_ * auVar49._8_8_;
    auVar41 = blendpd(auVar40,auVar36,2);
    dVar45 = dVar45 * dVar13 + dVar8 + auVar36._0_8_ + *(double *)(pFVar26 + 0x28);
    dVar3 = *(double *)&pFVar26[0x30].field_0x0;
    auVar29._8_4_ = SUB84(dVar45,0);
    auVar29._0_8_ = dVar11 * dVar13 + dVar7 + auVar34._8_8_ + *(double *)&pFVar26[0x20].field_0x0;
    auVar29._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    *(undefined1 (*) [16])&param_9->field0_0x0 = auVar29;
    (param_9->field0_0x0)._s_0.Z = auVar49._0_8_ * dVar13 + dVar10 + auVar41._0_8_ + dVar3;
    return true;
  }
  uVar22 = 0;
  if (iVar4 < *(int *)&param_7->field_0x18) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar16 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar5 = (code *)swi(3);
    uVar17 = (*pcVar5)();
    return (bool)uVar17;
  }
  if (*(int *)(*(longlong *)&param_7->field_0x10 + lVar27 * 4) == 0) {
    uVar22 = 0;
    if (iVar4 < *(int *)&param_4->field_0x18) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    uVar22 = *(uint *)(*(longlong *)&param_4->field_0x10 + lVar27 * 4);
    if (uVar22 == 0xffffffff) {
      uVar22 = 0xffffffff;
LAB_14e814a91:
      param_8 = param_8 & 0xffffff00;
      bVar16 = `GetValidGeoCenter'::__l10::<lambda_1>::operator()(&param_8);
      if (!bVar16) goto LAB_14e814fdb;
    }
    else {
      uVar18 = 0;
      if ((int)uVar22 < *(int *)&param_2->field_0x18) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      uVar22 = *(uint *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar22 * 4);
      if (uVar22 == 0xffffffff) goto LAB_14e814a91;
    }
    uVar18 = 0;
    if (iVar4 < *(int *)&param_4->field_0x18) {
      uVar18 = uVar21;
    }
    if ((uVar18 == 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    uVar21 = *(uint *)(*(longlong *)&param_4->field_0x10 + lVar27 * 4);
    uVar18 = 0;
    if ((int)uVar21 < param_3->ArrayNum) {
      uVar18 = ~uVar21 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    pFVar26 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60;
    uVar21 = 0;
    if ((int)uVar22 < *(int *)&param_6->field_0x18) {
      uVar21 = ~uVar22 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    dVar13 = *(double *)(pFVar26 + 0x18);
    lVar19 = (longlong)(int)uVar22 * 0x38;
    lVar27 = *(longlong *)&param_6->field_0x10;
    auVar29 = *(undefined1 (*) [16])pFVar26;
    dVar10 = (*(double *)(lVar19 + 0x28 + lVar27) + *(double *)(lVar19 + 0x10 + lVar27)) *
             __real_3fe0000000000000 * *(double *)&pFVar26[0x50].field_0x0;
    dVar11 = *(double *)(pFVar26 + 0x58) * 0.0;
    auVar41 = *(undefined1 (*) [16])(pFVar26 + 0x10);
    dVar7 = (*(double *)(lVar19 + 0x18 + lVar27) + *(double *)(lVar19 + lVar27)) *
            __real_3fe0000000000000 * *(double *)&pFVar26[0x40].field_0x0;
    dVar8 = (*(double *)(lVar19 + 0x20 + lVar27) + *(double *)(lVar19 + 8 + lVar27)) *
            __real_3fe0000000000000 * *(double *)(pFVar26 + 0x48);
    uVar44 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar48 = blendpd(auVar29,auVar41,2);
    auVar50._8_4_ = SUB84(dVar8,0);
    auVar50._0_8_ = dVar7;
    auVar50._12_4_ = uVar44;
    dVar3 = auVar41._0_8_;
    auVar51._0_8_ = auVar50._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar7;
    auVar51._8_8_ = dVar10 * auVar29._8_8_ - dVar3 * dVar8;
    auVar31._8_4_ = SUB84(dVar8,0);
    auVar31._0_8_ = dVar7;
    auVar31._12_4_ = uVar44;
    auVar9._8_4_ = SUB84(dVar11,0);
    auVar9._0_8_ = dVar10;
    auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar29 = blendpd(auVar31,auVar9,2);
    auVar32._0_8_ = auVar29._0_8_ * dVar3 - auVar48._0_8_ * dVar10;
    auVar32._8_8_ = auVar29._8_8_ * auVar41._8_8_ - auVar48._8_8_ * dVar11;
    auVar29 = *(undefined1 (*) [16])pFVar26;
    auVar48 = blendpd(auVar51,auVar32,2);
    dVar11 = auVar51._8_8_ + auVar51._8_8_;
    dVar45 = auVar32._0_8_ + auVar32._0_8_;
    uVar44 = (undefined4)((ulonglong)dVar45 >> 0x20);
    auVar52._0_8_ = auVar48._0_8_ + auVar48._0_8_;
    auVar52._8_8_ = auVar48._8_8_ + auVar48._8_8_;
    auVar42._8_4_ = SUB84(dVar45,0);
    auVar42._0_8_ = dVar11;
    auVar42._12_4_ = uVar44;
    auVar37._8_4_ = SUB84(dVar45,0);
    auVar37._0_8_ = dVar11;
    auVar37._12_4_ = uVar44;
    auVar48 = blendpd(auVar37,auVar52,2);
    auVar43._0_8_ = auVar42._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar11;
    auVar43._8_8_ = auVar52._0_8_ * auVar29._8_8_ - dVar3 * dVar45;
    auVar33._8_4_ = SUB84(auVar43._8_8_,0);
    auVar33._0_8_ = auVar43._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
    auVar29 = blendpd(auVar29,auVar41,2);
    auVar38._0_8_ = auVar48._0_8_ * dVar3 - auVar29._0_8_ * auVar52._0_8_;
    auVar38._8_8_ = auVar48._8_8_ * auVar41._8_8_ - auVar29._8_8_ * auVar52._8_8_;
    auVar29 = blendpd(auVar43,auVar38,2);
    dVar45 = dVar45 * dVar13 + dVar8 + auVar38._0_8_ + *(double *)(pFVar26 + 0x28);
    dVar3 = *(double *)&pFVar26[0x30].field_0x0;
    auVar6._8_4_ = SUB84(dVar45,0);
    auVar6._0_8_ = dVar11 * dVar13 + dVar7 + auVar33._8_8_ + *(double *)&pFVar26[0x20].field_0x0;
    auVar6._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    *(undefined1 (*) [16])&param_9->field0_0x0 = auVar6;
    (param_9->field0_0x0)._s_0.Z = auVar52._0_8_ * dVar13 + dVar10 + auVar29._0_8_ + dVar3;
    bVar16 = true;
  }
  else {
    uVar22 = 0;
    if (iVar4 < *(int *)&param_5->field_0x18) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    iStack_138 = 0;
    uStack_134 = 1;
    plVar25 = (longlong *)(lVar27 * 0x50 + *(longlong *)&param_5->field_0x10);
    iVar4 = (int)plVar25[5];
    pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar25 + 2);
    local_120 = 0;
    iStack_124 = 0;
    if (iVar4 != 0) {
      pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar24 = pTVar2;
      }
      uVar22 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
      iStack_138 = 0;
      while (uVar22 == 0) {
        lVar27 = (longlong)iStack_138;
        local_120 = local_120 + 0x20;
        iStack_138 = iStack_138 + 1;
        iStack_124 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14e814daf;
        uVar22 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar27 * 4 + 4);
      }
      uStack_134 = -uVar22 & uVar22;
      uVar1 = (ulonglong)uStack_134 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_144 = (int)lVar27;
      iStack_124 = local_120 + -1 + local_144;
      if (iVar4 < iStack_124) {
        iStack_124 = iVar4;
      }
    }
LAB_14e814daf:
    uVar22 = *(uint *)(plVar25 + 5);
    uStack_11c = local_8c;
    uVar21 = uVar22 & 0xffffffe0;
    iStack_118 = (int)plVar25[1] - *(int *)((longlong)plVar25 + 0x34);
    uStack_128 = 0xffffffff;
    TStack_108._padding_ = CONCAT44(uStack_134,iStack_138);
    TStack_108.CurrentBitIndex = iStack_124;
    TStack_108.UnvisitedBitMask = 0xffffffff;
    iVar23 = (int)uVar22 >> 5;
    TStack_108._28_4_ = local_8c;
    TStack_108.BaseBitIndex = local_120;
    uStack_e8 = CONCAT44(uStack_114,iStack_118);
    local_140 = plVar25;
    local_130 = pTVar2;
    local_110 = plVar25;
    TStack_108.Array = pTVar2;
    if ((((int)uVar22 < 0) || (iVar4 < (int)uVar22)) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar17 = (*pcVar5)();
      return (bool)uVar17;
    }
    pTVar14 = param_9;
    uVar18 = *(uint *)(plVar25 + 5);
    if (uVar22 != uVar18) {
      pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar24 = pTVar2;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) &
               *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar23 * 4);
      while (uVar22 == 0) {
        lVar27 = (longlong)iVar23;
        uVar21 = uVar21 + 0x20;
        iVar23 = iVar23 + 1;
        uVar22 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_14e814ebc;
        uVar22 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar27 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      uVar22 = (uVar21 - 1) + (int)lVar27;
      if ((int)uVar18 < (int)uVar22) {
        uVar22 = uVar18;
      }
    }
LAB_14e814ebc:
    uVar53 = 0;
    dVar11 = local_e0;
    dVar3 = local_d0;
    dVar45 = local_d8;
    while( true ) {
      plVar15 = local_110;
      if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
      }
      if (((TStack_108.CurrentBitIndex == uVar22) && (TStack_108.Array == pTVar2)) &&
         (plVar15 == plVar25)) break;
      bVar16 = GetValidGeoCenter(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                 *(int *)(*plVar15 + (longlong)TStack_108.CurrentBitIndex * 0xc),
                                 pTVar14);
      if (bVar16) {
        if (iVar20 == 0) {
          auVar29 = *(undefined1 (*) [16])&pTVar14->field0_0x0;
          dVar11 = auVar29._0_8_;
          dVar3 = (pTVar14->field0_0x0)._s_0.Z;
          auVar12._4_8_ = uVar53;
          auVar12._0_4_ = auVar29._4_4_;
          auVar41._0_8_ = auVar12._0_8_ << 0x20;
          auVar41._8_4_ = auVar29._8_4_;
          auVar41._12_4_ = auVar29._12_4_;
          dVar45 = auVar41._8_8_;
          uVar53 = auVar29._8_8_;
        }
        else {
          dVar11 = dVar11 + (pTVar14->field0_0x0)._s_0.X;
          dVar45 = dVar45 + (pTVar14->field0_0x0)._s_0.Y;
          dVar3 = dVar3 + (pTVar14->field0_0x0)._s_0.Z;
        }
        iVar20 = iVar20 + 1;
      }
      TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    }
    if (0 < iVar20) {
      dVar7 = __real_3ff0000000000000 / (double)iVar20;
      (pTVar14->field0_0x0)._s_0.X = dVar11 * dVar7;
      (pTVar14->field0_0x0)._s_0.Y = dVar45 * dVar7;
      (pTVar14->field0_0x0)._s_0.Z = dVar3 * dVar7;
      return true;
    }
LAB_14e814fdb:
    bVar16 = false;
  }
  return bVar16;
}

// RandomReduceSelection @ 14e818d70

void __cdecl RandomReduceSelection(FDataflowTransformSelection *param_1,int param_2,float param_3)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  
  fVar2 = __real_3f800000;
  uVar4 = 0;
  if (0 < *(int *)&param_1->field_0x20) {
    do {
      if ((((int)uVar4 < 0) || (*(int *)&param_1->field_0x20 <= (int)uVar4)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar5 = &param_1->field_0x8;
      if (*(undefined1 **)&param_1->field_0x18 != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)&param_1->field_0x18;
      }
      lVar6 = (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5);
      if (((*(uint *)(puVar5 + lVar6 * 4) >> (uVar4 & 0x1f) & 1) != 0) &&
         (param_2 = param_2 * 0xbb38435 + 0x3619636b,
         param_3 <= (float)((uint)param_2 >> 9 | 0x3f800000) - fVar2)) {
        if ((((int)uVar4 < 0) || (*(int *)&param_1->field_0x20 <= (int)uVar4)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar5 = &param_1->field_0x8;
        if (*(undefined1 **)&param_1->field_0x18 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&param_1->field_0x18;
        }
        *(uint *)(puVar5 + lVar6 * 4) = *(uint *)(puVar5 + lVar6 * 4) & ~(1 << ((byte)uVar4 & 0x1f))
        ;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)&param_1->field_0x20);
  }
  return;
}

// RandomShuffleArray @ 14e818eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
RandomShuffleArray(TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2,float param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong local_res20;
  
  fVar6 = __real_3f800000;
  iVar2 = param_1->ArrayNum;
  iVar1 = iVar2 + -1;
  uVar14 = (uint)param_3;
  if (param_2) {
    uVar14 = uVar14 * 0xbb38435 + 0x3619636b;
    uVar9 = (int)(((float)(uVar14 >> 9 | 0x3f800000) - __real_3f800000) * ___real_42240000) + 10;
  }
  else {
    uVar9 = FMath::RandRange(10,0x32);
  }
  fVar7 = __real_38000100;
  lVar13 = (longlong)iVar1;
  if (0 < (int)uVar9) {
    local_res20 = (ulonglong)uVar9;
    do {
      iVar10 = 0;
      lVar12 = 0;
      if (-1 < lVar13) {
        iVar16 = iVar2;
        iVar15 = iVar1;
        if (param_2) {
          do {
            if (iVar16 < 1) {
              iVar15 = 0;
            }
            else {
              uVar14 = uVar14 * 0xbb38435 + 0x3619636b;
              iVar15 = (int)(((float)(uVar14 >> 9 | 0x3f800000) - fVar6) * (float)iVar16);
            }
            iVar11 = iVar15 + iVar10;
            if (iVar10 != iVar11) {
              if (((lVar12 < 0) || (iVar11 < 0)) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0xce6,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((param_1->ArrayNum <= iVar10) || (param_1->ArrayNum <= iVar11)) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0xce7,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (param_1->AllocatorInstance).Data;
              uVar3 = *(undefined4 *)(pFVar4 + lVar12 * 4);
              *(undefined4 *)(pFVar4 + lVar12 * 4) =
                   *(undefined4 *)(pFVar4 + (longlong)(iVar15 + iVar10) * 4);
              *(undefined4 *)(pFVar4 + (longlong)(iVar15 + iVar10) * 4) = uVar3;
            }
            iVar10 = iVar10 + 1;
            lVar12 = lVar12 + 1;
            iVar16 = iVar16 + -1;
          } while (lVar12 <= lVar13);
        }
        else {
          do {
            if (iVar15 + 1 < 1) {
              iVar16 = 0;
            }
            else {
              uVar9 = rand();
              iVar11 = (int)((float)(uVar9 & 0x7fff) * (float)(iVar15 + 1) * fVar7);
              iVar16 = iVar15;
              if (iVar11 < iVar15) {
                iVar16 = iVar11;
              }
            }
            iVar11 = iVar16 + iVar10;
            if (iVar10 != iVar11) {
              if (((lVar12 < 0) || (iVar11 < 0)) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0xce6,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((param_1->ArrayNum <= iVar10) || (param_1->ArrayNum <= iVar11)) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0xce7,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (param_1->AllocatorInstance).Data;
              uVar3 = *(undefined4 *)(pFVar4 + lVar12 * 4);
              *(undefined4 *)(pFVar4 + lVar12 * 4) =
                   *(undefined4 *)(pFVar4 + (longlong)(iVar16 + iVar10) * 4);
              *(undefined4 *)(pFVar4 + (longlong)(iVar16 + iVar10) * 4) = uVar3;
            }
            iVar10 = iVar10 + 1;
            lVar12 = lVar12 + 1;
            iVar15 = iVar15 + -1;
          } while (lVar12 <= lVar13);
        }
      }
      local_res20 = local_res20 - 1;
    } while (local_res20 != 0);
  }
  return;
}

// Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod @ 14e825030

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod(void)

{
  if (Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.InnerSingleton;
}

// Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod @ 14e825070

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod(void)

{
  if (Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.InnerSingleton;
}

// Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType @ 14e8250b0

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType(void)

{
  if (Z_Registration_Info_UEnum_EFixTinyGeoMergeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFixTinyGeoMergeType.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoMergeType.InnerSingleton;
}

// Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod @ 14e8250f0

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod(void)

{
  if (Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.InnerSingleton;
}

// Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection @ 14e825130

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection(void)

{
  if (Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.InnerSingleton;
}

// Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum @ 14e825170

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum(void)

{
  if (Z_Registration_Info_UEnum_EFractureBrickBondEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFractureBrickBondEnum.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_EFractureBrickBondEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFractureBrickBondEnum.InnerSingleton;
}

// Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution @ 14e8251b0

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution(void)

{
  if (Z_Registration_Info_UEnum_EMeshCutterCutDistribution.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshCutterCutDistribution.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_EMeshCutterCutDistribution_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshCutterCutDistribution.InnerSingleton;
}

// Z_Construct_UEnum_FractureEngine_EMeshCutterPerCutMeshSelection @ 14e8251f0

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_EMeshCutterPerCutMeshSelection(void)

{
  if (Z_Registration_Info_UEnum_EMeshCutterPerCutMeshSelection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshCutterPerCutMeshSelection.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_EMeshCutterPerCutMeshSelection_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EMeshCutterPerCutMeshSelection.InnerSingleton;
}

// Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode @ 14e825230

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode(void)

{
  if (Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_ENonUniformSamplingDistributionMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENonUniformSamplingDistributionMode.InnerSingleton;
}

// Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode @ 14e825270

UEnum * __cdecl Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode(void)

{
  if (Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.InnerSingleton,
               &Z_Construct_UEnum_FractureEngine_ENonUniformSamplingWeightMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENonUniformSamplingWeightMode.InnerSingleton;
}

// IMPLEMENT_MODULE_FractureEngine @ 14e8252b0

void __cdecl IMPLEMENT_MODULE_FractureEngine(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogFractureEngineUtility'' @ 15046c480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogFractureEngineUtility__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogFractureEngineUtility);
  return;
}

// operator() @ 150599e60

bool __thiscall `GetValidGeoCenter'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3803646685427531546>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3803646685427531546>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

