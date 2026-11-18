// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 404

// StashedMeshes'' @ 141199360

void __cdecl `dynamic_initializer_for_'UE::Local::FDynamicMeshCopyHelper::StashedMeshes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Local::FDynamicMeshCopyHelper::StashedMeshes__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicMeshComponent_AllowCollisionAsyncBuildInEditor'' @ 141199380

void __cdecl
_dynamic_initializer_for__CVarDynamicMeshComponent_AllowCollisionAsyncBuildInEditor__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDynamicMeshComponent_AllowCollisionAsyncBuildInEditor,
             L"geometry.DynamicMesh.AllowAsyncCollisionBuildInEditor",local_res8,
             L"If enabled, we allow async build of dynamic mesh component collision in (non-PIE) Editor. Otherwise, async collision build will only happen in game worlds (PIE/runtime)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicMeshComponent_AllowCollisionAsyncBuildInEditor__
        );
  return;
}

// `dynamic_initializer_for_'CVarDynamicMeshComponent_AllowMeshCardGeneration'' @ 1411993d0

void __cdecl _dynamic_initializer_for__CVarDynamicMeshComponent_AllowMeshCardGeneration__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDynamicMeshComponent_AllowMeshCardGeneration,
             L"geometry.DynamicMesh.AllowMeshCardGeneration",local_res8,
             L"Whether to allow mesh card generation for dynamic mesh components",0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicMeshComponent_AllowMeshCardGeneration__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicMeshComponent_MaxComplexCollisionTriCount'' @ 141199420

void __cdecl _dynamic_initializer_for__CVarDynamicMeshComponent_MaxComplexCollisionTriCount__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 250000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDynamicMeshComponent_MaxComplexCollisionTriCount,
             L"geometry.DynamicMesh.MaxComplexCollisionTriCount",local_res8,
             L"If a DynamicMeshCompnent\'s UDynamicMesh has a larger triangle count than this value, it will not be passed to the Physics system to be used as Complex Collision geometry. A negative value indicates no limit."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicMeshComponent_MaxComplexCollisionTriCount__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicMeshDupeHelperTimeout'' @ 141199470

void __cdecl _dynamic_initializer_for__CVarDynamicMeshDupeHelperTimeout__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 300;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDynamicMeshDupeHelperTimeout,L"geometry.DynamicMesh.DupeStashTimeout",local_res8,
             L"Timeout in seconds for references held by internal UDynamicMesh duplication helper system. See FDynamicMeshCopyHelper."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicMeshDupeHelperTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicMeshPoolMaxPoolSizeThreshold'' @ 1411994c0

void __cdecl _dynamic_initializer_for__CVarDynamicMeshPoolMaxPoolSizeThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDynamicMeshPoolMaxPoolSizeThreshold,L"geometry.DynamicMesh.MaxPoolSize",local_res8
             ,
             L"Maximum number of meshes a UDynamicMeshPool will allow to be in the pool before running garbage collection"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicMeshPoolMaxPoolSizeThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicMeshTextBasedDupeTriangleCountThreshold'' @ 141199510

void __cdecl _dynamic_initializer_for__CVarDynamicMeshTextBasedDupeTriangleCountThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 200000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDynamicMeshTextBasedDupeTriangleCountThreshold,
             L"geometry.DynamicMesh.TextBasedDupeTriThreshold",local_res8,
             L"Triangle count threshold for text-based UDynamicMesh duplication using Base64. Large values are quite slow."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicMeshTextBasedDupeTriangleCountThreshold__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGeometryFramework'' @ 141199560

void __cdecl _dynamic_initializer_for__ModuleRegistrantGeometryFramework__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GeometryFramework";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GeometryFramework",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FGeometryFrameworkModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'NAME_UDynamicMeshProcessorBlueprint_ProcessDynamicMesh'' @ 1411995b0

void __cdecl
_dynamic_initializer_for__NAME_UDynamicMeshProcessorBlueprint_ProcessDynamicMesh__(void)

{
  FName::FName(&NAME_UDynamicMeshProcessorBlueprint_ProcessDynamicMesh,L"ProcessDynamicMesh");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1411995d0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 141199660

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1411996f0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 141199780

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 141199810

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1411998a0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 141199930

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1411999c0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 141199a50

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 141199ae0

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h__Script_GeometryFramework_1364092745'' @ 141199b70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h__Script_GeometryFramework_1364092745__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h__Script_GeometryFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h__Script_GeometryFramework_1655117626'' @ 141199bb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h__Script_GeometryFramework_1655117626__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h__Script_GeometryFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h__Script_GeometryFramework_857809036'' @ 141199bf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h__Script_GeometryFramework_857809036__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h__Script_GeometryFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h__Script_GeometryFramework_721479653'' @ 141199c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h__Script_GeometryFramework_721479653__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h__Script_GeometryFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h__Script_GeometryFramework_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h__Script_GeometryFramework_1895255418'' @ 141199c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h__Script_GeometryFramework_1895255418__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h__Script_GeometryFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h__Script_GeometryFramework_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h__Script_GeometryFramework_3564745497'' @ 141199cd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h__Script_GeometryFramework_3564745497__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h__Script_GeometryFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h__Script_GeometryFramework_576539064'' @ 141199d10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h__Script_GeometryFramework_576539064__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h__Script_GeometryFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h__Script_GeometryFramework_1809219412'' @ 141199d50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h__Script_GeometryFramework_1809219412__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h__Script_GeometryFramework_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h__Script_GeometryFramework_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h__Script_GeometryFramework_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GeometryFramework'' @ 141199da0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GeometryFramework__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x794668a7;
  local_res8[0].DeclarationsHash = 0x3a60a9ef;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GeometryFramework,L"/Script/GeometryFramework",
             &Z_Registration_Info_UPackage__Script_GeometryFramework,local_res8);
  return;
}

// Z_Construct_UClass_UDynamicMesh_NoRegister @ 1496e8190

UClass * __cdecl Z_Construct_UClass_UDynamicMesh_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMesh",
               &Z_Registration_Info_UClass_UDynamicMesh.InnerSingleton,
               UDynamicMesh::StaticRegisterNativesUDynamicMesh,0xd0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDynamicMesh>,
               InternalVTableHelperCtorCaller<UDynamicMesh>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMesh.InnerSingleton;
}

// Z_Construct_UClass_UDynamicMeshPool_NoRegister @ 1496e8240

UClass * __cdecl Z_Construct_UClass_UDynamicMeshPool_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshPool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshPool",
               &Z_Registration_Info_UClass_UDynamicMeshPool.InnerSingleton,
               UDynamicMeshPool::StaticRegisterNativesUDynamicMeshPool,0x70,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshPool>,
               InternalVTableHelperCtorCaller<UDynamicMeshPool>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshPool.InnerSingleton;
}

// Z_Construct_UClass_UDynamicMeshProcessorBlueprint @ 1496e8600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDynamicMeshProcessorBlueprint(void)

{
  if (Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.OuterSingleton,
               &Z_Construct_UClass_UDynamicMeshProcessorBlueprint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.OuterSingleton;
}

// Z_Construct_UPackage__Script_GeometryFramework @ 1496e8640

UPackage * __cdecl Z_Construct_UPackage__Script_GeometryFramework(void)

{
  if (Z_Registration_Info_UPackage__Script_GeometryFramework.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GeometryFramework.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_GeometryFramework.OuterSingleton;
}

// NewProp_bFailed_SetBit @ 1496e8680

void __cdecl
Z_Construct_UFunction_UDynamicMeshProcessorBlueprint_ProcessDynamicMesh_Statics::
NewProp_bFailed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UDynamicMeshProcessorBlueprint_ProcessDynamicMesh @ 1496e8690

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshProcessorBlueprint_ProcessDynamicMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshProcessorBlueprint_ProcessDynamicMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRequiresGameThread_SetBit @ 1496e86d0

void __cdecl
Z_Construct_UClass_UDynamicMeshProcessorBlueprint_Statics::NewProp_bRequiresGameThread_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature @ 1496e86e0

UFunction * __cdecl
Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMeshCommandChangeTarget @ 1496e8720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshCommandChangeTarget(void)

{
  if (Z_Registration_Info_UClass_UMeshCommandChangeTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshCommandChangeTarget.OuterSingleton,
               &Z_Construct_UClass_UMeshCommandChangeTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshCommandChangeTarget.OuterSingleton;
}

// Z_Construct_UClass_UDynamicMesh @ 1496e8760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDynamicMesh(void)

{
  if (Z_Registration_Info_UClass_UDynamicMesh.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDynamicMesh.OuterSingleton,
               &Z_Construct_UClass_UDynamicMesh_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDynamicMesh.OuterSingleton;
}

// Z_Construct_UClass_UDynamicMeshGenerator @ 1496e87a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDynamicMeshGenerator(void)

{
  if (Z_Registration_Info_UClass_UDynamicMeshGenerator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDynamicMeshGenerator.OuterSingleton,
               &Z_Construct_UClass_UDynamicMeshGenerator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDynamicMeshGenerator.OuterSingleton;
}

// Z_Construct_UClass_UDynamicMeshPool @ 1496e87e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDynamicMeshPool(void)

{
  if (Z_Registration_Info_UClass_UDynamicMeshPool.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDynamicMeshPool.OuterSingleton,
               &Z_Construct_UClass_UDynamicMeshPool_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDynamicMeshPool.OuterSingleton;
}

// Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags @ 1496e8820

UEnum * __cdecl Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags(void)

{
  if (Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.InnerSingleton,
               &Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.InnerSingleton;
}

// Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType @ 1496e8860

UEnum * __cdecl Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType(void)

{
  if (Z_Registration_Info_UEnum_EDynamicMeshChangeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDynamicMeshChangeType.InnerSingleton,
               &Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDynamicMeshChangeType.InnerSingleton;
}

// EDynamicMeshChangeType_StaticEnum @ 1496e88a0

UEnum * __cdecl EDynamicMeshChangeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshChangeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshChangeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType,(UObject *)pUVar1,
                       L"EDynamicMeshChangeType");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshChangeType.OuterSingleton;
}

// EDynamicMeshAttributeChangeFlags_StaticEnum @ 1496e88e0

UEnum * __cdecl EDynamicMeshAttributeChangeFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags,
                       (UObject *)pUVar1,L"EDynamicMeshAttributeChangeFlags");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.OuterSingleton;
}

// NewProp_bIsRevertChange_SetBit @ 1496e8920

void __cdecl
Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_bIsRevertChange_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewStructOps @ 1496e8930

void * __cdecl Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicMeshChangeInfo,&UE::CoreUObject::Private::Construct<FDynamicMeshChangeInfo>,&UE::CoreUObject::Private::ConstructForTests<FDynamicMeshChangeInfo>,&UE::CoreUObject::Private::Destruct<FDynamicMeshChangeInfo>,&UE::CoreUObject::Private::Copy<FDynamicMeshChangeInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMeshReplacementCommandChangeTarget @ 1496e8970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshReplacementCommandChangeTarget(void)

{
  if (Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.OuterSingleton,
               &Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.OuterSingleton;
}

// Z_Construct_UFunction_UDynamicMesh_GetTriangleCount @ 1496e89b0

UFunction * __cdecl Z_Construct_UFunction_UDynamicMesh_GetTriangleCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1496e89f0

void __cdecl
Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDynamicMesh_IsEmpty @ 1496e8a00

UFunction * __cdecl Z_Construct_UFunction_UDynamicMesh_IsEmpty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMesh_Reset @ 1496e8a40

UFunction * __cdecl Z_Construct_UFunction_UDynamicMesh_Reset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDynamicMesh_Reset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMesh_ResetToCube @ 1496e8a80

UFunction * __cdecl Z_Construct_UFunction_UDynamicMesh_ResetToCube(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableMeshGenerator_SetBit @ 1496e8ac0

void __cdecl
Z_Construct_UClass_UDynamicMesh_Statics::NewProp_bEnableMeshGenerator_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// Z_Construct_UClass_UDynamicMeshComponent @ 1496e8ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDynamicMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UDynamicMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDynamicMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UDynamicMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDynamicMeshComponent.OuterSingleton;
}

// EDynamicMeshComponentRenderUpdateMode_StaticEnum @ 1496e8b10

UEnum * __cdecl EDynamicMeshComponentRenderUpdateMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode,
                       (UObject *)pUVar1,L"EDynamicMeshComponentRenderUpdateMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1496e8b50

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_AllowsGeometrySelection_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDynamicMeshComponent_AllowsGeometrySelection @ 1496e8b60

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_AllowsGeometrySelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_AllowsGeometrySelection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDeleteExtraSlots_SetBit @ 1496e8ba0

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::
NewProp_bDeleteExtraSlots_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet @ 1496e8bb0

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision @ 1496e8bf0

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes @ 1496e8c30

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType @ 1496e8d30

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshPool_RequestMesh @ 1496e8d70

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshPool_RequestMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes @ 1496e8db0

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure @ 1496e8df0

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsTypePure_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified @ 1496e8e30

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshModified_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh @ 1496e8e70

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPositions_SetBit @ 1496e8eb0

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::
NewProp_bPositions_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bNormals_SetBit @ 1496e8ec0

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::
NewProp_bNormals_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bUVs_SetBit @ 1496e8ed0

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::
NewProp_bUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bColors_SetBit @ 1496e8ee0

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics::
NewProp_bColors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified @ 1496e8ef0

UFunction * __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_NotifyMeshVertexAttributesModified_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInAllowsGeometrySelection_SetBit @ 1496e8f30

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_SetAllowsGeometrySelection_Statics::
NewProp_bInAllowsGeometrySelection_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDynamicMeshComponent_SetAllowsGeometrySelection @ 1496e8f40

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_SetAllowsGeometrySelection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_SetAllowsGeometrySelection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 1496e8f80

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::
NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bImmediateUpdate_SetBit @ 1496e8f90

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::
NewProp_bImmediateUpdate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled @ 1496e8fa0

UFunction * __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 1496e8fe0

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::
NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bImmediateUpdate_SetBit @ 1496e8ff0

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::
NewProp_bImmediateUpdate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled @ 1496e9000

UFunction * __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh @ 1496e9040

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType @ 1496e9080

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnlyIfPending_SetBit @ 1496e90c0

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::NewProp_bOnlyIfPending_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UMeshVertexCommandChangeTarget @ 1496e90d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshVertexCommandChangeTarget(void)

{
  if (Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.OuterSingleton,
               &Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.OuterSingleton;
}

// Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision @ 1496e9110

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCreateIfMissing_SetBit @ 1496e9150

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::
NewProp_bCreateIfMissing_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bDeleteExtraSlots_SetBit @ 1496e9160

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::
NewProp_bDeleteExtraSlots_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 1496e9170

void __cdecl
Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots @ 1496e9180

UFunction * __cdecl Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowsGeometrySelection_SetBit @ 1496e91c0

void __cdecl
Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bAllowsGeometrySelection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x691) = 1;
  return;
}

// NewProp_bUseAsyncCooking_SetBit @ 1496e91d0

void __cdecl
Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x851) = 1;
  return;
}

// NewProp_bEnableComplexCollision_SetBit @ 1496e91e0

void __cdecl
Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x852) = 1;
  return;
}

// NewProp_bDeferCollisionUpdates_SetBit @ 1496e91f0

void __cdecl
Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x853) = 1;
  return;
}

// NewProp_bDisableMeshUVHitResults_SetBit @ 1496e9200

void __cdecl
Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDisableMeshUVHitResults_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x854) = 1;
  return;
}

// Z_Construct_UClass_UBaseDynamicMeshComponent @ 1496e92d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBaseDynamicMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UBaseDynamicMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBaseDynamicMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBaseDynamicMeshComponent.OuterSingleton;
}

// Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode @ 1496e9310

UEnum * __cdecl Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode(void)

{
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.InnerSingleton;
}

// Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentDistanceFieldMode @ 1496e9350

UEnum * __cdecl Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentDistanceFieldMode(void)

{
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentDistanceFieldMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDynamicMeshComponentDistanceFieldMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentDistanceFieldMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentDistanceFieldMode.InnerSingleton;
}

// Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode @ 1496e9390

UEnum * __cdecl Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode(void)

{
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.InnerSingleton;
}

// Z_Construct_UEnum_GeometryFramework_EDynamicMeshDrawPath @ 1496e93d0

UEnum * __cdecl Z_Construct_UEnum_GeometryFramework_EDynamicMeshDrawPath(void)

{
  if (Z_Registration_Info_UEnum_EDynamicMeshDrawPath.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDynamicMeshDrawPath.InnerSingleton,
               &Z_Construct_UEnum_GeometryFramework_EDynamicMeshDrawPath_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDynamicMeshDrawPath.InnerSingleton;
}

// Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode @ 1496e9410

UEnum * __cdecl Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode(void)

{
  if (Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.InnerSingleton;
}

// EDynamicMeshComponentTangentsMode_StaticEnum @ 1496e9450

UEnum * __cdecl EDynamicMeshComponentTangentsMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode,
                       (UObject *)pUVar1,L"EDynamicMeshComponentTangentsMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton;
}

// EDynamicMeshComponentColorOverrideMode_StaticEnum @ 1496e9490

UEnum * __cdecl EDynamicMeshComponentColorOverrideMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode,
                       (UObject *)pUVar1,L"EDynamicMeshComponentColorOverrideMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton;
}

// Z_Construct_UClass_ADynamicMeshActor @ 1496e94d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADynamicMeshActor(void)

{
  if (Z_Registration_Info_UClass_ADynamicMeshActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADynamicMeshActor.OuterSingleton,
               &Z_Construct_UClass_ADynamicMeshActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADynamicMeshActor.OuterSingleton;
}

// EDynamicMeshDrawPath_StaticEnum @ 1496e9510

UEnum * __cdecl EDynamicMeshDrawPath_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshDrawPath.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshDrawPath.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshDrawPath,(UObject *)pUVar1,
                       L"EDynamicMeshDrawPath");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshDrawPath.OuterSingleton;
}

// Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh @ 1496e9550

UFunction * __cdecl Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EDynamicMeshComponentDistanceFieldMode_StaticEnum @ 1496e9590

UEnum * __cdecl EDynamicMeshComponentDistanceFieldMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentDistanceFieldMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshComponentDistanceFieldMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentDistanceFieldMode,
                       (UObject *)pUVar1,L"EDynamicMeshComponentDistanceFieldMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentDistanceFieldMode.OuterSingleton;
}

// Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes @ 1496e95d0

UFunction * __cdecl Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EDynamicMeshVertexColorTransformMode_StaticEnum @ 1496e9610

UEnum * __cdecl EDynamicMeshVertexColorTransformMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode,
                       (UObject *)pUVar1,L"EDynamicMeshVertexColorTransformMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.OuterSingleton;
}

// Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool @ 1496e9650

UFunction * __cdecl Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial @ 1496e9690

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent @ 1496e96d0

UFunction * __cdecl Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideSecondaryWireframeRenderMaterial @ 1496e9710

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideSecondaryWireframeRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideSecondaryWireframeRenderMaterial_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes @ 1496e9750

UFunction * __cdecl Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideWireframeRenderMaterial @ 1496e9790

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideWireframeRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideWireframeRenderMaterial_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1496e97d0

void __cdecl
Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial @ 1496e97e0

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh @ 1496e9820

UFunction * __cdecl Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode @ 1496e9860

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableComputeMeshPool_SetBit @ 1496e98a0

void __cdecl
Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_bEnableComputeMeshPool_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c8) = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor @ 1496e98b0

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDistanceFieldMode @ 1496e98f0

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDistanceFieldMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDistanceFieldMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh @ 1496e9930

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1496e9970

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing @ 1496e9980

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1496e99c0

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass @ 1496e99d0

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDynamicMeshComponent_NoRegister @ 1496e9a10

UClass * __cdecl Z_Construct_UClass_UDynamicMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshComponent",
               &Z_Registration_Info_UClass_UDynamicMeshComponent.InnerSingleton,
               UDynamicMeshComponent::StaticRegisterNativesUDynamicMeshComponent,0x950,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshComponent>,
               InternalVTableHelperCtorCaller<UDynamicMeshComponent>,local_res8,
               UBaseDynamicMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshComponent.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 1496e9ad0

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled @ 1496e9ae0

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetMeshDrawPath @ 1496e9b20

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetMeshDrawPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetMeshDrawPath_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial @ 1496e9b60

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideSecondaryWireframeRenderMaterial @ 1496e9ba0

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideSecondaryWireframeRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideSecondaryWireframeRenderMaterial_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideWireframeRenderMaterial @ 1496e9be0

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideWireframeRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideWireframeRenderMaterial_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1496e9c70

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 1496e9c80

void * __thiscall
FGeometryFrameworkModule::_scalar_deleting_destructor_(FGeometryFrameworkModule *this,uint param_1)

{
  *this = (FGeometryFrameworkModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility @ 1496e9d80

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial @ 1496e9dc0

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1496e9e00

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled @ 1496e9e10

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode @ 1496e9e50

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1496e9e90

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled @ 1496e9ea0

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1496e9ee0

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial @ 1496e9ef0

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode @ 1496e9f30

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor @ 1496e9f70

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetDistanceFieldMode @ 1496e9fb0

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_SetDistanceFieldMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetDistanceFieldMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 1496e9ff0

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading @ 1496ea000

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetEnabled_SetBit @ 1496ea040

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::
NewProp_bSetEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing @ 1496ea050

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 1496ea090

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::
NewProp_bEnable_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass @ 1496ea0a0

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetMeshDrawPath @ 1496ea130

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_SetMeshDrawPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetMeshDrawPath_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial @ 1496ea1c0

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideSecondaryWireframeRenderMaterial @ 1496ea200

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideSecondaryWireframeRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideSecondaryWireframeRenderMaterial_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideWireframeRenderMaterial @ 1496ea240

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideWireframeRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideWireframeRenderMaterial_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetVisible_SetBit @ 1496ea280

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::
NewProp_bSetVisible_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility @ 1496ea290

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial @ 1496ea2d0

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 1496ea310

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled @ 1496ea320

UFunction * __cdecl Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode @ 1496ea360

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 1496ea3a0

void __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::
NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled @ 1496ea3b0

UFunction * __cdecl
Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExplicitShowWireframe_SetBit @ 1496ea3f0

void __cdecl
Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5b0) = 1;
  return;
}

// NewProp_bTwoSided_SetBit @ 1496ea410

void __cdecl
Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bTwoSided_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5cd) = 1;
  return;
}

// NewProp_bEnableFlatShading_SetBit @ 1496ea420

void __cdecl
Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5ce) = 1;
  return;
}

// NewProp_bEnableViewModeOverrides_SetBit @ 1496ea430

void __cdecl
Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5cf) = 1;
  return;
}

// NewProp_bEnableRaytracing_SetBit @ 1496ea440

void __cdecl
Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5f8) = 1;
  return;
}

// Z_Construct_UClass_UDynamicMeshGenerator_NoRegister @ 1496ea460

UClass * __cdecl Z_Construct_UClass_UDynamicMeshGenerator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshGenerator",
               &Z_Registration_Info_UClass_UDynamicMeshGenerator.InnerSingleton,
               UDynamicMeshGenerator::StaticRegisterNativesUDynamicMeshGenerator,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshGenerator>,
               InternalVTableHelperCtorCaller<UDynamicMeshGenerator>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshGenerator.InnerSingleton;
}

// Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_> @ 1496eab00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TAxisAlignedBox3<double> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTaskBase *pFVar12;
  FTSTicker *this;
  FTaskBase *pFVar13;
  FRunnableThread *pFVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code **ppcVar17;
  FPipe *pFVar18;
  FSharedReferencer<1> FVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  FTaskBase *pFVar24;
  Type TVar25;
  undefined1 auStackY_1d8 [32];
  EExtendedTaskPriority local_198;
  ETaskPriority local_197 [7];
  TPromise<void> local_190;
  FRunnableThread *local_178;
  FTaskBase *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar24 = (FTaskBase *)0x0;
  local_178 = (FRunnableThread *)((ulonglong)local_178 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x20,8);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pTVar6 = param_2->BoundsOut;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount =
       (atomic<unsigned___int64>)param_2->__this;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)pTVar6;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).
  SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_2->Triangles;
  if (&((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount !=
      (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
               ::Call;
  }
  TPromise<void>::TPromise<void>(&local_190,param_3);
  if ((local_190.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_190.bFutureRetrieved = true;
  if (((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar21.ReferenceController = local_190.State.SharedReferenceCount.ReferenceController;
  local_170 = (FTaskBase *)local_190.State.Object;
  if (local_190.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar12 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar24;
    if (pFVar12 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar12,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar12->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar12;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar20[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar20[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar24;
    }
    pFVar20[1].Pipe = (FPipe *)local_190.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_190.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_190.bFutureRetrieved;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_197,&local_198);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar20,L"GraphTask",local_197[0],local_198,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = (FTaskBase *)local_190.State.Object;
    local_90 = local_190.State.SharedReferenceCount.ReferenceController;
    local_88 = local_190.bFutureRetrieved;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar17 = local_50 + 2;
    *ppcVar17 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar17 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar17 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar17 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar17 = local_50;
      }
      (**(code **)(*ppcVar17 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar18 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar18 = local_a0;
      }
      (**(code **)(*(code **)pFVar18 + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pFVar13 = operator_new(0x70);
      pFVar20 = local_170;
      pFVar12 = pFVar24;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar13->_padding_ = &___7__TAsyncRunnable_X__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar24;
        }
        *(TFutureState<void> **)&(pFVar13->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar13->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar13->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar24;
        pFVar24 = pFVar13;
        pFVar12 = (FTaskBase *)&DAT_00000001;
      }
      if (pFVar12 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar23.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar14 = FRunnableThread::Create
                          ((FRunnable *)pFVar24,(wchar_t *)FVar23.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_178 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_178);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar24)(uVar16);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pFVar13 = operator_new(0x70);
      pFVar20 = local_170;
      pFVar12 = pFVar24;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar13->_padding_ = &___7__TAsyncRunnable_X__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar24;
        }
        *(TFutureState<void> **)&(pFVar13->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar13->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar13->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar24;
        pFVar24 = pFVar13;
        pFVar12 = (FTaskBase *)&DAT_00000002;
      }
      if (pFVar12 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_120,L"TAsync %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar23.Data = local_120.Data.AllocatorInstance.Data;
      }
      pFVar14 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar24,(wchar_t *)FVar23.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar24)(uVar16);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar15 = operator_new(0x60);
      if (puVar15 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar15[1] = 0;
        *puVar15 = &___7__TAsyncQueuedWork_X__6B_;
        puVar15[2] = local_f8;
        puVar15[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar15 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar15 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar15[6] = local_e8.EmptyEventRef.Object;
        if (puVar15[2] != 0) {
          local_f8 = pFVar24;
        }
        puVar15[8] = local_190.State.Object;
        puVar15[9] = local_190.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar15 + 10) = local_190.bFutureRetrieved;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar15,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar24)(uVar16);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(FTaskBase **)__return_storage_ptr__ = local_170;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar21.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((((FTaskBase *)local_190.State.Object != (FTaskBase *)0x0) &&
      ((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar22 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar22 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_> @ 1496eb7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<bool> * __cdecl
Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l5::<lambda_1>_>
          (TFuture<bool> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<bool> *pTVar6;
  TFutureState<bool> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  uchar uVar10;
  int iVar11;
  TFuture<bool> *pTVar12;
  FTSTicker *this;
  FTaskBase *pFVar13;
  FRunnableThread *pFVar14;
  FTaskBase *pFVar15;
  FTaskBase *pFVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  code **ppcVar19;
  FPipe *pFVar20;
  FTaskBase *pFVar21;
  FSharedReferencer<1> FVar22;
  FSharedReferencer<1> FVar23;
  longlong *plVar24;
  ForAnyElementType FVar25;
  Type TVar26;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<bool> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  TFutureState<bool> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar16 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  local_e8.TaskCount =
       (atomic<unsigned___int64>)
       `UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>::
       <lambda_invoker_cdecl>;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TPromise<bool>::TPromise<bool>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TFuture<bool> *)(*pcVar5)();
    return pTVar12;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<bool> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TFuture<bool> *)(*pcVar5)();
    return pTVar12;
  }
  FVar23.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar26 = GameThread;
    if (param_1 == TaskGraph) {
      TVar26 = AnyNormalThreadNormalTask;
    }
    pFVar15 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar21 = pFVar16;
    if (pFVar15 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar15,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar15->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask__N____6B_;
      pFVar21 = pFVar15;
    }
    pFVar21[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar21[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar21[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar21[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar21[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar21[1]._padding_ != 0) {
      local_f8 = pFVar16;
    }
    pFVar21[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar21[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar21[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<bool> *)0x0;
    *(Type *)&pFVar21[1].TraceId = TVar26;
    UE::Tasks::Private::TranslatePriority(TVar26,local_187,&local_188);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar21,L"GraphTask",local_187[0],local_188,None);
    if (pFVar21 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar21->RefCount = (atomic<unsigned_int>)((int)pFVar21->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar21,0x130);
      LOCK();
      paVar1 = &pFVar21->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar21->_padding_)(pFVar21,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<bool> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`5'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar19 = local_50 + 2;
    *ppcVar19 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar19 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<bool> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar19 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar19 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar19 = local_50;
      }
      (**(code **)(*ppcVar19 + 0x10))();
    }
    if (((local_98 != (TFutureState<bool> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<bool> *)(*pcVar5)();
      return pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar20 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar20 = local_a0;
      }
      (**(code **)((longlong)pFVar20->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar13 = operator_new(0x70);
      pFVar21 = local_168;
      pFVar15 = pFVar16;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar13->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
        pFVar13->_padding_ = (longlong)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar13->_padding_ = (longlong)local_e8.LastTask;
        pFVar13->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar13->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar13->_padding_ != 0) {
          local_f8 = pFVar16;
        }
        *(TFutureState<bool> **)&(pFVar13->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar13->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<bool> *)0x0;
        *(bool *)&pFVar13->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar21 = pFVar16;
        pFVar16 = (FTaskBase *)&DAT_00000001;
        pFVar15 = pFVar13;
      }
      if (pFVar16 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar21);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar25.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar25.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar14 = FRunnableThread::Create
                          ((FRunnable *)pFVar15,(wchar_t *)FVar25.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      iVar11 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar11 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar16 = local_f8;
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar18 = (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 8))();
      uVar10 = (*(code *)pFVar16)(uVar18);
      if (local_180.State.Object == (TFutureState<bool> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      (pTVar7->Result).Pad[0] = uVar10;
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar15 = operator_new(0x70);
      pFVar21 = pFVar16;
      if (pFVar15 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar15->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
        pFVar15->_padding_ = (longlong)local_f8;
        pFVar15->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar15->_padding_ = (longlong)local_e8.LastTask;
        pFVar15->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar15->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar15->_padding_ != 0) {
          local_f8 = pFVar16;
        }
        *(TFutureState<bool> **)&(pFVar15->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar15->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar15->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<bool> *)0x0;
        *(bool *)&pFVar15->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar15->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar16;
        pFVar16 = (FTaskBase *)&DAT_00000002;
        pFVar21 = pFVar15;
      }
      if (pFVar16 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar25.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar25.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar16 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar21,(wchar_t *)FVar25.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar16;
      if ((pFVar16 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      iVar11 = (**(code **)(pFVar16->_padding_ + 0x28))(pFVar16);
      if ((iVar11 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar16 = local_f8;
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar18 = (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 8))();
      uVar10 = (*(code *)pFVar16)(uVar18);
      if (local_180.State.Object == (TFutureState<bool> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      (pTVar7->Result).Pad[0] = uVar10;
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar17 = operator_new(0x60);
      if (puVar17 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar17[1] = 0;
        *puVar17 = &___7__TAsyncQueuedWork__N__6B_;
        puVar17[2] = local_f8;
        puVar17[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar17 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar17 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar17 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar17 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar17[6] = local_e8.EmptyEventRef.Object;
        if (puVar17[2] != 0) {
          local_f8 = pFVar16;
        }
        puVar17[8] = local_180.State.Object;
        puVar17[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar17 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<bool> *)0x0;
        (*pcVar5)(GThreadPool,puVar17,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar16 = local_f8;
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar18 = (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 8))();
      uVar10 = (*(code *)pFVar16)(uVar18);
      if (local_180.State.Object == (TFutureState<bool> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<bool> *)(*pcVar5)();
          return pTVar12;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<bool> *)(*pcVar5)();
        return pTVar12;
      }
      (pTVar7->Result).Pad[0] = uVar10;
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<bool> *)(*pcVar5)();
      return pTVar12;
    }
  }
  *(TFutureState<bool> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar23.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<bool> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TFuture<bool> *)(*pcVar5)();
    return pTVar12;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar23.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar23.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar23.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar24 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar24 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_> @ 1496ec4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_::__l28::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->__this;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,void>
             ::Call;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_> @ 1496ed140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_::__l28::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->__this;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,void>
             ::Call;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_> @ 1496edde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_UDynamicMeshComponent::FastNotifyPositionsUpdated_::__l11::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->__this;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>,void>
             ::Call;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::`11'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_> @ 1496eea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_UDynamicMeshComponent::FastNotifyVertexAttributesUpdated_::__l14::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::`14'::<lambda_1>,1,0>
        ::_vftable_;
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->__this;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>,void>
             ::Call;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::`14'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_> @ 1496ef720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_2> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTaskBase *pFVar12;
  FTSTicker *this;
  FTaskBase *pFVar13;
  FRunnableThread *pFVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code **ppcVar17;
  FPipe *pFVar18;
  FSharedReferencer<1> FVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  FTaskBase *pFVar24;
  Type TVar25;
  undefined1 auStackY_1d8 [32];
  EExtendedTaskPriority local_198;
  ETaskPriority local_197 [7];
  TPromise<void> local_190;
  FRunnableThread *local_178;
  FTaskBase *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar24 = (FTaskBase *)0x0;
  local_178 = (FRunnableThread *)((ulonglong)local_178 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x20,8);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  pTVar6 = param_2->UpdateSetsOut;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount =
       (atomic<unsigned___int64>)param_2->__this;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)pTVar6;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).
  SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_2->Triangles;
  if (&((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount !=
      (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
               ::Call;
  }
  TPromise<void>::TPromise<void>(&local_190,param_3);
  if ((local_190.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_190.bFutureRetrieved = true;
  if (((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar21.ReferenceController = local_190.State.SharedReferenceCount.ReferenceController;
  local_170 = (FTaskBase *)local_190.State.Object;
  if (local_190.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar12 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar24;
    if (pFVar12 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar12,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar12->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar12;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar20[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar20[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar24;
    }
    pFVar20[1].Pipe = (FPipe *)local_190.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_190.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_190.bFutureRetrieved;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_197,&local_198);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar20,L"GraphTask",local_197[0],local_198,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = (FTaskBase *)local_190.State.Object;
    local_90 = local_190.State.SharedReferenceCount.ReferenceController;
    local_88 = local_190.bFutureRetrieved;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar17 = local_50 + 2;
    *ppcVar17 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar17 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar17 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar17 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar17 = local_50;
      }
      (**(code **)(*ppcVar17 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar18 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar18 = local_a0;
      }
      (**(code **)(*(code **)pFVar18 + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pFVar13 = operator_new(0x70);
      pFVar20 = local_170;
      pFVar12 = pFVar24;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar13->_padding_ = &___7__TAsyncRunnable_X__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar24;
        }
        *(TFutureState<void> **)&(pFVar13->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar13->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar13->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar24;
        pFVar24 = pFVar13;
        pFVar12 = (FTaskBase *)&DAT_00000001;
      }
      if (pFVar12 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar23.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar14 = FRunnableThread::Create
                          ((FRunnable *)pFVar24,(wchar_t *)FVar23.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_178 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_178);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar24)(uVar16);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pFVar13 = operator_new(0x70);
      pFVar20 = local_170;
      pFVar12 = pFVar24;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar13->_padding_ = &___7__TAsyncRunnable_X__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar13->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar24;
        }
        *(TFutureState<void> **)&(pFVar13->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar13->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar13->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar24;
        pFVar24 = pFVar13;
        pFVar12 = (FTaskBase *)&DAT_00000002;
      }
      if (pFVar12 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_120,L"TAsync %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar23.Data = local_120.Data.AllocatorInstance.Data;
      }
      pFVar14 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar24,(wchar_t *)FVar23.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar24)(uVar16);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar15 = operator_new(0x60);
      if (puVar15 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar15[1] = 0;
        *puVar15 = &___7__TAsyncQueuedWork_X__6B_;
        puVar15[2] = local_f8;
        puVar15[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar15 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar15 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar15[6] = local_e8.EmptyEventRef.Object;
        if (puVar15[2] != 0) {
          local_f8 = pFVar24;
        }
        puVar15[8] = local_190.State.Object;
        puVar15[9] = local_190.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar15 + 10) = local_190.bFutureRetrieved;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar15,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar24)(uVar16);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(FTaskBase **)__return_storage_ptr__ = local_170;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar21.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((((FTaskBase *)local_190.State.Object != (FTaskBase *)0x0) &&
      ((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar22 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar22 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_> @ 1496f0410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<bool> * __cdecl
Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>_>
          (TFuture<bool> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_2> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TAxisAlignedBox3<double> *pTVar7;
  TFutureState<bool> *pTVar8;
  TFutureState<FRunnableThread_*> *pTVar9;
  bool bVar10;
  atomic<unsigned_char> aVar11;
  int iVar12;
  TFuture<bool> *pTVar13;
  FTaskBase *pFVar14;
  FTSTicker *this;
  FTaskBase *pFVar15;
  FRunnableThread *pFVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  code **ppcVar19;
  FPipe *pFVar20;
  FSharedReferencer<1> FVar21;
  FTaskBase *pFVar22;
  FSharedReferencer<1> FVar23;
  longlong *plVar24;
  ForAnyElementType FVar25;
  FTaskBase *pFVar26;
  Type TVar27;
  undefined1 auStackY_1d8 [32];
  EExtendedTaskPriority local_198;
  ETaskPriority local_197 [7];
  TPromise<bool> local_190;
  FRunnableThread *local_178;
  FTaskBase *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar26 = (FTaskBase *)0x0;
  local_178 = (FRunnableThread *)((ulonglong)local_178 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x28,8);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  pTVar6 = param_2->Triangles;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount =
       (atomic<unsigned___int64>)param_2->__this;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)pTVar6;
  pTVar7 = param_2->BoundsOut;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).
  SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_2->UpdateSetsOut;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->DebugName =
       (wchar_t *)pTVar7;
  if (&((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount !=
      (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>,bool>
               ::Call;
  }
  TPromise<bool>::TPromise<bool>(&local_190,param_3);
  if ((local_190.bFutureRetrieved != false) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TFuture<bool> *)(*pcVar5)();
    return pTVar13;
  }
  local_190.bFutureRetrieved = true;
  if (((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TFuture<bool> *)(*pcVar5)();
    return pTVar13;
  }
  FVar23.ReferenceController = local_190.State.SharedReferenceCount.ReferenceController;
  local_170 = (FTaskBase *)local_190.State.Object;
  if (local_190.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar27 = GameThread;
    if (param_1 == TaskGraph) {
      TVar27 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar22 = pFVar26;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask__N____6B_;
      pFVar22 = pFVar14;
    }
    pFVar22[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar22[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar22[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar22[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    pFVar22[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar22[1]._padding_ != 0) {
      local_f8 = pFVar26;
    }
    pFVar22[1].Pipe = (FPipe *)local_190.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar22[1].StateChangeEvent =
         local_190.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar22[1].ExecutingThreadId = local_190.bFutureRetrieved;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<bool> *)0x0;
    *(Type *)&pFVar22[1].TraceId = TVar27;
    UE::Tasks::Private::TranslatePriority(TVar27,local_197,&local_198);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar22,L"GraphTask",local_197[0],local_198,None);
    if (pFVar22 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar22->RefCount = (atomic<unsigned_int>)((int)pFVar22->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar22,0x130);
      LOCK();
      paVar1 = &pFVar22->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar22->_padding_)(pFVar22,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = (FTaskBase *)local_190.State.Object;
    local_90 = local_190.State.SharedReferenceCount.ReferenceController;
    local_88 = local_190.bFutureRetrieved;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<bool> *)0x0;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar19 = local_50 + 2;
    *ppcVar19 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar19 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar19 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar19 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar19 = local_50;
      }
      (**(code **)(*ppcVar19 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State->IsComplete()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x242,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar20 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar20 = local_a0;
      }
      (**(code **)(*(code **)pFVar20 + 0x10))();
    }
    break;
  case Thread:
    bVar10 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar10) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pFVar15 = operator_new(0x70);
      pFVar22 = local_170;
      pFVar14 = pFVar26;
      if (pFVar15 != (FTaskBase *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("!bFutureRetrieved",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x24d,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        pTVar9 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("State.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x283,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar15->_padding_ = &___7__TAsyncRunnable__N__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar15->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar15->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar15->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar15->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar15->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar15->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar26;
        }
        *(TFutureState<bool> **)&(pFVar15->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar15->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar15->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<bool> *)0x0;
        (pFVar15->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar15->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar9;
        pFVar22 = pFVar26;
        pFVar26 = pFVar15;
        pFVar14 = (FTaskBase *)&DAT_00000001;
      }
      if (pFVar14 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar22);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar25.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar25.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar16 = FRunnableThread::Create
                          ((FRunnable *)pFVar26,(wchar_t *)FVar25.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_178 = pFVar16;
      if ((pFVar16 == (FRunnableThread *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x14d,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      iVar12 = (**(code **)(pFVar16->_padding_ + 0x28))(pFVar16);
      if ((iVar12 != 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x14e,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_178);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar26 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar18 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      aVar11 = (atomic<unsigned_char>)(*(code *)pFVar26)(uVar18);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x283,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
      }
      pTVar8 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("!IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0xcd,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      (((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
       &pTVar8->field_0x58)->Mutex).State = aVar11;
      FFutureState::MarkComplete((FFutureState *)pTVar8);
    }
    break;
  case ThreadIfForkSafe:
    bVar10 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar10) || (bVar10 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar10)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pFVar15 = operator_new(0x70);
      pFVar22 = local_170;
      pFVar14 = pFVar26;
      if (pFVar15 != (FTaskBase *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("!bFutureRetrieved",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x24d,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        pTVar9 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("State.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x283,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar15->_padding_ = &___7__TAsyncRunnable__N__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar15->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar15->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar15->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar15->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar15->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar15->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar26;
        }
        *(TFutureState<bool> **)&(pFVar15->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar15->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar15->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<bool> *)0x0;
        (pFVar15->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar15->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar9;
        pFVar22 = pFVar26;
        pFVar26 = pFVar15;
        pFVar14 = (FTaskBase *)&DAT_00000002;
      }
      if (pFVar14 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar22);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_120,L"TAsync %d");
      FVar25.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar25.Data = local_120.Data.AllocatorInstance.Data;
      }
      pFVar16 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar26,(wchar_t *)FVar25.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar16;
      if ((pFVar16 == (FRunnableThread *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x161,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      iVar12 = (**(code **)(pFVar16->_padding_ + 0x28))(pFVar16);
      if ((iVar12 != 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x162,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar26 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar18 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      aVar11 = (atomic<unsigned_char>)(*(code *)pFVar26)(uVar18);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x283,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
      }
      pTVar8 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("!IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0xcd,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      (((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
       &pTVar8->field_0x58)->Mutex).State = aVar11;
      FFutureState::MarkComplete((FFutureState *)pTVar8);
    }
    break;
  case ThreadPool:
    bVar10 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar10) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("GThreadPool != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x16f,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar17 = operator_new(0x60);
      if (puVar17 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar17[1] = 0;
        *puVar17 = &___7__TAsyncQueuedWork__N__6B_;
        puVar17[2] = local_f8;
        puVar17[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar17 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar17 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar17 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar17 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar17[6] = local_e8.EmptyEventRef.Object;
        if (puVar17[2] != 0) {
          local_f8 = pFVar26;
        }
        puVar17[8] = local_190.State.Object;
        puVar17[9] = local_190.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar17 + 10) = local_190.bFutureRetrieved;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<bool> *)0x0;
        (*pcVar5)(GThreadPool,puVar17,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar26 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar18 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      aVar11 = (atomic<unsigned_char>)(*(code *)pFVar26)(uVar18);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x283,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
      }
      pTVar8 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("!IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0xcd,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      (((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
       &pTVar8->field_0x58)->Mutex).State = aVar11;
      FFutureState::MarkComplete((FFutureState *)pTVar8);
    }
    break;
  default:
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                        ,0x187,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
  }
  *(FTaskBase **)__return_storage_ptr__ = local_170;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar23.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((((FTaskBase *)local_190.State.Object != (FTaskBase *)0x0) &&
      ((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum == '\0')) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("State->IsComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x242,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TFuture<bool> *)(*pcVar5)();
    return pTVar13;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar23.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar23.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar23.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar24 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar24 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  return __return_storage_ptr__;
}

// CastChecked<IMeshCommandChangeTarget,UObject> @ 1496f1530

IMeshCommandChangeTarget * __cdecl CastChecked<IMeshCommandChangeTarget,UObject>(UObject *param_1)

{
  UClass *pUVar1;
  IMeshCommandChangeTarget *pIVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<IMeshCommandChangeTarget>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar1 = Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  if (pIVar2 != (IMeshCommandChangeTarget *)0x0) {
    return pIVar2;
  }
  pFVar3 = GetTypeName<IMeshCommandChangeTarget>(&local_28);
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

// CastChecked<IMeshReplacementCommandChangeTarget,UObject> @ 1496f15e0

IMeshReplacementCommandChangeTarget * __cdecl
CastChecked<IMeshReplacementCommandChangeTarget,UObject>(UObject *param_1)

{
  UClass *pUVar1;
  IMeshReplacementCommandChangeTarget *pIVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<IMeshReplacementCommandChangeTarget>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar1 = Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  if (pIVar2 != (IMeshReplacementCommandChangeTarget *)0x0) {
    return pIVar2;
  }
  pFVar3 = GetTypeName<IMeshReplacementCommandChangeTarget>(&local_28);
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

// CastChecked<IMeshVertexCommandChangeTarget,UObject> @ 1496f1690

IMeshVertexCommandChangeTarget * __cdecl
CastChecked<IMeshVertexCommandChangeTarget,UObject>(UObject *param_1)

{
  UClass *pUVar1;
  IMeshVertexCommandChangeTarget *pIVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<IMeshVertexCommandChangeTarget>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar1 = Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  if (pIVar2 != (IMeshVertexCommandChangeTarget *)0x0) {
    return pIVar2;
  }
  pFVar3 = GetTypeName<IMeshVertexCommandChangeTarget>(&local_28);
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

// ConstructItems<TObjectPtr<UBodySetup>,UBodySetup_*,int> @ 1496f1740

void __cdecl
ConstructItems<TObjectPtr<UBodySetup>,UBodySetup_*,int>
          (void *param_1,UBodySetup **param_2,int param_3)

{
  UBodySetup *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UBodySetup **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBodySetup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int> @ 1496f17a0

void __cdecl
ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
          (void *param_1,TObjectPtr<UDynamicMesh> *param_2,int param_3)

{
  TObjectPtr<UDynamicMesh> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UDynamicMesh>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UDynamicMesh *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UDynamicMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<std::atomic<bool>,int> @ 1496f1800

void __cdecl DefaultConstructItems<std::atomic<bool>,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2);
    return;
  }
  return;
}

// DefaultConstructItems<FThreadSafeCounter,int> @ 1496f1820

void __cdecl DefaultConstructItems<FThreadSafeCounter,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 4);
  }
  return;
}

// DestructItems<FProgressCancel::FMessageInfo,int> @ 1496f18c0

void __cdecl DestructItems<FProgressCancel::FMessageInfo,int>(FMessageInfo *param_1,int param_2)

{
  ITextData *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->MessageText).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob,TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>_>,int> @ 1496f1900

void __cdecl
DestructItems<TUniquePtr<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob,TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>_>,int>
          (TUniquePtr<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob,TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>::
    operator()((TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>
                *)param_1,param_1->Ptr);
    param_1 = (TUniquePtr<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob,TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>_>
               *)((longlong)param_1 + 8);
  }
  return;
}

// DestructItems<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,int> @ 1496f1940

void __cdecl
DestructItems<TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>,int>
          (TUniquePtr<FMeshRenderDecomposition::FGroup,TDefaultDelete<FMeshRenderDecomposition::FGroup>_>
           *param_1,int param_2)

{
  FGroup *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGroup *)0x0) {
      pFVar2 = (pFVar1->Triangles).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x18);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::TSTR_BaseDynamicMeshComponent_SetVertexColorMaterial417>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f1e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial_::__l2::TSTR_BaseDynamicMeshComponent_SetVertexColorMaterial417>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::TSTR_BaseDynamicMeshComponent_SetVertexColorMaterial417>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f1f81;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f2175;
  }
LAB_1496f1f81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f205f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f205f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f2175:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::TSTR_BaseDynamicMeshComponent_SetWireframeMaterial403>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f21b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UBaseDynamicMeshComponent::SetDefaultWireframeMaterial_::__l2::TSTR_BaseDynamicMeshComponent_SetWireframeMaterial403>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::TSTR_BaseDynamicMeshComponent_SetWireframeMaterial403>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f2301;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f24f5;
  }
LAB_1496f2301:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f23df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f23df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f24f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateAllIndexBuffers603>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f2530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers_::__l2::<lambda_1>::operator()_::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateAllIndexBuffers603>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateAllIndexBuffers603>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f2681;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f2875;
  }
LAB_1496f2681:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f275f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f275f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f2875:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateSomeIndexBuffers639>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f28b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::FastUpdateIndexBuffers_::__l2::<lambda_1>::operator()_::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateSomeIndexBuffers639>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateSomeIndexBuffers639>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f2a01;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f2bf5;
  }
LAB_1496f2a01:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f2adf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f2adf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f2bf5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::TSTR_FDynamicMeshSceneProxyFastUpdateVertices455>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f2c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDynamicMeshSceneProxy::FastUpdateVertices_::__l19::TSTR_FDynamicMeshSceneProxyFastUpdateVertices455>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::TSTR_FDynamicMeshSceneProxyFastUpdateVertices455>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f2d81;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f2f75;
  }
LAB_1496f2d81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f2e5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f2e5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f2f75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::TSTR_FDynamicMeshSceneProxyFastUpdateVertices487>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f2fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::FastUpdateVertices_::__l27::<lambda_2>::operator()_::__l8::TSTR_FDynamicMeshSceneProxyFastUpdateVertices487>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::TSTR_FDynamicMeshSceneProxyFastUpdateVertices487>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f3101;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f32f5;
  }
LAB_1496f3101:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f31df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f31df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f32f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::TSTR_FDynamicMeshSceneProxyFastUpdateVerticesBufferList570>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f3330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::FastUpdateVertices_::__l2::<lambda_1>::operator()_::__l11::TSTR_FDynamicMeshSceneProxyFastUpdateVerticesBufferList570>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::TSTR_FDynamicMeshSceneProxyFastUpdateVerticesBufferList570>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f3481;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f3675;
  }
LAB_1496f3481:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f355f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f355f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f3675:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::TSTR_FDynamicMeshSceneProxyInitializeByMaterial321>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f36b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDynamicMeshSceneProxy::InitializeByMaterial_::__l18::TSTR_FDynamicMeshSceneProxyInitializeByMaterial321>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::TSTR_FDynamicMeshSceneProxyInitializeByMaterial321>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f3801;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f39f5;
  }
LAB_1496f3801:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f38df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f38df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f39f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::TSTR_FDynamicMeshSceneProxyInitializeFromDecomposition179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f3a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::InitializeFromDecomposition_::__l2::<lambda_1>::operator()_::__l5::TSTR_FDynamicMeshSceneProxyInitializeFromDecomposition179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::TSTR_FDynamicMeshSceneProxyInitializeFromDecomposition179>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f3b81;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f3d75;
  }
LAB_1496f3b81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f3c5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f3c5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f3d75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::TSTR_FDynamicMeshSceneProxyInitializeSingle226>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1496f3db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDynamicMeshSceneProxy::InitializeSingleBufferSet_::__l2::TSTR_FDynamicMeshSceneProxyInitializeSingle226>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::TSTR_FDynamicMeshSceneProxyInitializeSingle226>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1496f3f01;
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
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1496f40f5;
  }
LAB_1496f3f01:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1496f3fdf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1496f3fdf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1496f40f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTypeName<IMeshCommandChangeTarget> @ 1496f4240

FString * __cdecl GetTypeName<IMeshCommandChangeTarget>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<IMeshReplacementCommandChangeTarget> @ 1496f4280

FString * __cdecl GetTypeName<IMeshReplacementCommandChangeTarget>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<IMeshVertexCommandChangeTarget> @ 1496f42c0

FString * __cdecl GetTypeName<IMeshVertexCommandChangeTarget>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<ADynamicMeshActor> @ 1496f4c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ADynamicMeshActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  longlong *plVar2;
  code *pcVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UMaterial *pUVar7;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7ADynamicMeshActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar4 = FName::FName(&local_res8,L"DynamicMeshComponent");
    FVar1 = *pFVar4;
    pUVar5 = UDynamicMeshComponent::StaticClass();
    pUVar6 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar5,pUVar5,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    this[1]._padding_ = (longlong)pUVar6;
    (**(code **)(*(longlong *)pUVar6 + 0x5f8))(pUVar6);
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this[1]._padding_,false);
    (**(code **)(*(longlong *)this[1]._padding_ + 0x788))
              ((longlong *)this[1]._padding_,UCollisionProfile::BlockAll_ProfileName,1);
    *(undefined1 *)(this[1]._padding_ + 0x850) = 0;
    plVar2 = (longlong *)this[1]._padding_;
    pcVar3 = *(code **)(*plVar2 + 0x6b8);
    pUVar7 = UMaterial::GetDefaultMaterial(MD_Surface);
    (*pcVar3)(plVar2,0,pUVar7);
    AActor::SetRootComponent(this,(USceneComponent *)this[1]._padding_);
  }
  return;
}

// InternalConstructor<UBaseDynamicMeshComponent> @ 1496f4d60

void __cdecl InternalConstructor<UBaseDynamicMeshComponent>(FObjectInitializer *param_1)

{
  if ((UBaseDynamicMeshComponent *)param_1->Obj != (UBaseDynamicMeshComponent *)0x0) {
    UBaseDynamicMeshComponent::UBaseDynamicMeshComponent
              ((UBaseDynamicMeshComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDynamicMesh> @ 1496f4d80

void __cdecl InternalConstructor<UDynamicMesh>(FObjectInitializer *param_1)

{
  UDynamicMesh *this;
  
  this = (UDynamicMesh *)param_1->Obj;
  if (this != (UDynamicMesh *)0x0) {
    UObject::UObject((UObject *)this,param_1);
    *(undefined8 *)&(this->PreMeshChangedEvent).field_0x18 = 2;
    this->_padding_ = (longlong)&UDynamicMesh::_vftable__for__UObject__;
    *(undefined8 *)&(this->MeshChangedEvent).field_0x18 = 2;
    this->_padding_ = (longlong)&UDynamicMesh::_vftable__for__IMeshVertexCommandChangeTarget__;
    this->_padding_ = (longlong)&UDynamicMesh::_vftable__for__IMeshCommandChangeTarget__;
    this->_padding_ = (longlong)&UDynamicMesh::_vftable__for__IMeshReplacementCommandChangeTarget__;
    *(undefined8 *)&this->PreMeshChangedEvent = 0;
    *(undefined8 *)&(this->PreMeshChangedEvent).field_0x8 = 0;
    *(undefined8 *)&(this->PreMeshChangedEvent).field_0x10 = 0;
    *(undefined8 *)&this->MeshChangedEvent = 0;
    *(undefined8 *)&(this->MeshChangedEvent).field_0x8 = 0;
    *(undefined8 *)&(this->MeshChangedEvent).field_0x10 = 0;
    *(undefined8 *)&this->MeshModifiedBPEvent = 0;
    *(undefined8 *)&(this->MeshModifiedBPEvent).field_0x8 = 0;
    *(undefined8 *)&(this->MeshModifiedBPEvent).field_0x10 = 0;
    *(undefined8 *)&this->MeshRealtimeUpdateEvent = 0;
    *(undefined8 *)&(this->MeshRealtimeUpdateEvent).field_0x8 = 0;
    *(undefined8 *)&(this->MeshRealtimeUpdateEvent).field_0x10 = 0;
    (this->Mesh).Ptr = (FDynamicMesh3 *)0x0;
    (this->MeshGenerator).field0_0x0.DebugPtr = (UDynamicMeshGenerator *)0x0;
    this->bEnableMeshGenerator = false;
    *(undefined8 *)&(this->MeshRealtimeUpdateEvent).field_0x18 = 2;
    UDynamicMesh::InitializeNewMesh(this);
    return;
  }
  return;
}

// InternalConstructor<UDynamicMeshComponent> @ 1496f4e60

void __cdecl InternalConstructor<UDynamicMeshComponent>(FObjectInitializer *param_1)

{
  if ((UDynamicMeshComponent *)param_1->Obj != (UDynamicMeshComponent *)0x0) {
    UDynamicMeshComponent::UDynamicMeshComponent((UDynamicMeshComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDynamicMeshGenerator> @ 1496f4e80

void __cdecl InternalConstructor<UDynamicMeshGenerator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDynamicMeshGenerator__6B_;
  }
  return;
}

// InternalConstructor<UDynamicMeshPool> @ 1496f4eb0

void __cdecl InternalConstructor<UDynamicMeshPool>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDynamicMeshPool__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001496f4ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x20,4000);
    return;
  }
  return;
}

// InternalConstructor<UDynamicMeshProcessorBlueprint> @ 1496f4f10

void __cdecl InternalConstructor<UDynamicMeshProcessorBlueprint>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UDynamicMeshProcessorBlueprint__6B_;
  }
  return;
}

// InternalConstructor<UMeshCommandChangeTarget> @ 1496f4f50

void __cdecl InternalConstructor<UMeshCommandChangeTarget>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMeshCommandChangeTarget__6B_;
  }
  return;
}

// InternalConstructor<UMeshReplacementCommandChangeTarget> @ 1496f4f80

void __cdecl InternalConstructor<UMeshReplacementCommandChangeTarget>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMeshReplacementCommandChangeTarget__6B_;
  }
  return;
}

// InternalConstructor<UMeshVertexCommandChangeTarget> @ 1496f4fb0

void __cdecl InternalConstructor<UMeshVertexCommandChangeTarget>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMeshVertexCommandChangeTarget__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<ADynamicMeshActor> @ 1496f4fe0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ADynamicMeshActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADynamicMeshActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7ADynamicMeshActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBaseDynamicMeshComponent> @ 1496f50a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBaseDynamicMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBaseDynamicMeshComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBaseDynamicMeshComponent::GetPrivateStaticClass();
  pUVar3 = (UBaseDynamicMeshComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UBaseDynamicMeshComponent *)0x0) {
    pUVar3 = UBaseDynamicMeshComponent::UBaseDynamicMeshComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDynamicMesh> @ 1496f5140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDynamicMesh>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDynamicMesh::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &UDynamicMesh::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UDynamicMesh::_vftable__for__IMeshVertexCommandChangeTarget__;
    *(undefined ***)&pUVar1[1].field_0x8 = &UDynamicMesh::_vftable__for__IMeshCommandChangeTarget__;
    *(undefined ***)&pUVar1[1].field_0x10 =
         &UDynamicMesh::_vftable__for__IMeshReplacementCommandChangeTarget__;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 2;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 2;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 2;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 5) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDynamicMeshComponent> @ 1496f5290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDynamicMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDynamicMeshComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDynamicMeshComponent::GetPrivateStaticClass();
  pUVar3 = (UDynamicMeshComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UDynamicMeshComponent *)0x0) {
    pUVar3 = UDynamicMeshComponent::UDynamicMeshComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDynamicMeshGenerator> @ 1496f5330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDynamicMeshGenerator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDynamicMeshGenerator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDynamicMeshGenerator__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDynamicMeshPool> @ 1496f53e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDynamicMeshPool>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDynamicMeshPool::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDynamicMeshPool__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[1].field_0x20,4000);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDynamicMeshProcessorBlueprint> @ 1496f54b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDynamicMeshProcessorBlueprint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDynamicMeshProcessorBlueprint::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UDynamicMeshProcessorBlueprint__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshCommandChangeTarget> @ 1496f5560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeshCommandChangeTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshCommandChangeTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMeshCommandChangeTarget__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshReplacementCommandChangeTarget> @ 1496f5610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMeshReplacementCommandChangeTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshReplacementCommandChangeTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMeshReplacementCommandChangeTarget__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshVertexCommandChangeTarget> @ 1496f56c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMeshVertexCommandChangeTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshVertexCommandChangeTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMeshVertexCommandChangeTarget__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UDynamicMesh,UDynamicMesh_*,0> @ 1496f5770

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UDynamicMesh,UDynamicMesh_*,0>
          (TObjectPtr<UDynamicMesh> *param_1,UDynamicMesh **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UDynamicMesh *)0x0) {
    return *param_2 == (UDynamicMesh *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UDynamicMesh> @ 1496f5790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDynamicMesh * __cdecl NewObject<UDynamicMesh>(UObject *param_1)

{
  UClass *pUVar1;
  UDynamicMesh *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UDynamicMesh::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDynamicMesh *)
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

// NewObject<UDynamicMesh> @ 1496f5830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDynamicMesh * __cdecl
NewObject<UDynamicMesh>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDynamicMesh *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UDynamicMesh::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDynamicMesh *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDynamicMeshPool> @ 1496f5920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDynamicMeshPool * __cdecl NewObject<UDynamicMeshPool>(UObject *param_1)

{
  UClass *pUVar1;
  UDynamicMeshPool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UDynamicMeshPool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDynamicMeshPool *)
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

// StaticEnum<enum_EDynamicMeshAttributeChangeFlags> @ 1496f5de0

UEnum * __cdecl StaticEnum<enum_EDynamicMeshAttributeChangeFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags,
                       (UObject *)pUVar1,L"EDynamicMeshAttributeChangeFlags");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.OuterSingleton;
}

// StaticEnum<enum_EDynamicMeshChangeType> @ 1496f5e20

UEnum * __cdecl StaticEnum<enum_EDynamicMeshChangeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshChangeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshChangeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType,(UObject *)pUVar1,
                       L"EDynamicMeshChangeType");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshChangeType.OuterSingleton;
}

// StaticEnum<enum_EDynamicMeshComponentColorOverrideMode> @ 1496f5e60

UEnum * __cdecl StaticEnum<enum_EDynamicMeshComponentColorOverrideMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode,
                       (UObject *)pUVar1,L"EDynamicMeshComponentColorOverrideMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton;
}

// StaticEnum<enum_EDynamicMeshComponentDistanceFieldMode> @ 1496f5ea0

UEnum * __cdecl StaticEnum<enum_EDynamicMeshComponentDistanceFieldMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentDistanceFieldMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshComponentDistanceFieldMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentDistanceFieldMode,
                       (UObject *)pUVar1,L"EDynamicMeshComponentDistanceFieldMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentDistanceFieldMode.OuterSingleton;
}

// StaticEnum<enum_EDynamicMeshComponentRenderUpdateMode> @ 1496f5ee0

UEnum * __cdecl StaticEnum<enum_EDynamicMeshComponentRenderUpdateMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode,
                       (UObject *)pUVar1,L"EDynamicMeshComponentRenderUpdateMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton;
}

// StaticEnum<enum_EDynamicMeshComponentTangentsMode> @ 1496f5f20

UEnum * __cdecl StaticEnum<enum_EDynamicMeshComponentTangentsMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode,
                       (UObject *)pUVar1,L"EDynamicMeshComponentTangentsMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton;
}

// StaticEnum<enum_EDynamicMeshDrawPath> @ 1496f5f60

UEnum * __cdecl StaticEnum<enum_EDynamicMeshDrawPath>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshDrawPath.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshDrawPath.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshDrawPath,(UObject *)pUVar1,
                       L"EDynamicMeshDrawPath");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshDrawPath.OuterSingleton;
}

// StaticEnum<enum_EDynamicMeshVertexColorTransformMode> @ 1496f5fa0

UEnum * __cdecl StaticEnum<enum_EDynamicMeshVertexColorTransformMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode,
                       (UObject *)pUVar1,L"EDynamicMeshVertexColorTransformMode");
  }
  return Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.OuterSingleton;
}

// ~<lambda_1> @ 1496f9fc0

void __thiscall
`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001496fa027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1496fa040

void __thiscall
`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001496fa0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1496fa0c0

void __thiscall
`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::
<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001496fa127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1496fa140

void __thiscall
`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::
<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001496fa1a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1496fa1c0

void __thiscall
`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001496fa227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1496fa240

void __thiscall
`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::
<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001496fa2a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1496fa2c0

void __thiscall
`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001496fa327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1496fa340

void __thiscall
`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001496fa3a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0> @ 1496fa540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__FastUpdateAllIndexBuffers_FDynamicMeshSceneProxy__QEAAXXZ_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0> @ 1496fa560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FDynamicMeshSceneProxy::FastUpdateIndexBuffers_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__FastUpdateIndexBuffers_FDynamicMeshSceneProxy__QEAAXAEBV__TArray_HV__TSizedDefaultAllocator__0CA______Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,1,1> @ 1496fa580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_1>,0,0> @ 1496fa5a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_1>,0,0>
::~TFunction_OwnedObject<_CollectSubDecomposition_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::<lambda_1>,1,0> @ 1496fa5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDynamicMeshSceneProxy::InitializeSingleBufferSet_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__InitializeSingleBufferSet_FDynamicMeshSceneProxy__QEAAXPEAVFMeshRenderBufferSet___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::<lambda_1>,1,0> @ 1496fa5e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::<lambda_1>,1,0> @ 1496fa600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UBaseDynamicMeshComponent::SetDefaultWireframeMaterial_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1496fa620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1496fa640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l5::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`5'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1496fa660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_::__l28::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1496fa680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_::__l28::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1496fa6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UDynamicMeshComponent::FastNotifyPositionsUpdated_::__l11::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::`11'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1496fa6c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UDynamicMeshComponent::FastNotifyVertexAttributesUpdated_::__l14::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::`14'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1> @ 1496fa6e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1> @ 1496fa700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,1,0> @ 1496fa720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FDynamicMeshSceneProxy::InitializeFromDecomposition_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R1_1__InitializeFromDecomposition_FDynamicMeshSceneProxy__QEAAXAEAV__TUniquePtr_VFMeshRenderDecomposition__U__TDefaultDelete_VFMeshRenderDecomposition_______Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::<lambda_1>,1,0> @ 1496fa740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FDynamicMeshSceneProxy::FastUpdateVertices_::__l27::<lambda_2>::operator()_::__l8::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7___R<lambda_2>__BL___FastUpdateVertices_FDynamicMeshSceneProxy__QEAAX_N000_Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l8::<lambda_1>,0,0> @ 1496fa760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UDynamicMeshComponent::CreateSceneProxy_::__l8::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`8'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l8::<lambda_1>,1,1> @ 1496fa780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l8::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc_::__l8::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l8::<lambda_1>,1,1> @ 1496fa7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FDynamicMeshSceneProxy::MakeTangentsFunc_::__l8::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__MakeTangentsFunc_FDynamicMeshSceneProxy__QEAA_AV__TUniqueFunction___A6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z___N_Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::<lambda_1>,1,0> @ 1496fa7c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDynamicMeshSceneProxy::FastUpdateVertices_::__l19::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__BD___FastUpdateVertices_FDynamicMeshSceneProxy__QEAAX_N000_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0> @ 1496fa7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_::__l28::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0> @ 1496fa800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_::__l28::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>,1,0> @ 1496fa820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FDynamicMeshSceneProxy::FastUpdateVertices_::__l2::<lambda_1>::operator()_::__l11::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L____R1_1__FastUpdateVertices_FDynamicMeshSceneProxy__QEAAXAEBV__TArray_HV__TSizedDefaultAllocator__0CA______N111_Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>,1,0> @ 1496fa840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UDynamicMeshComponent::FastNotifyPositionsUpdated_::__l11::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l14::<lambda_1>,0,0> @ 1496fa860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l14::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UDynamicMeshComponent::FastNotifyColorsUpdated_::__l14::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>,1,0> @ 1496fa880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UDynamicMeshComponent::FastNotifyVertexAttributesUpdated_::__l14::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::`14'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,1,1> @ 1496fa8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,1,1>
::
~TFunction_OwnedObject<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_2>,0,0> @ 1496fa8c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_2>,0,0>
::~TFunction_OwnedObject<_CollectSubDecomposition_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>,1,1> @ 1496fa8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::<lambda_2>,1,0> @ 1496fa900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FDynamicMeshSceneProxy::InitializeByMaterial_::__l18::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__BC___InitializeByMaterial_FDynamicMeshSceneProxy__QEAAXAEAV__TArray_PEAVFMeshRenderBufferSet__V__TSizedDefaultAllocator__0CA______Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l21::<lambda_2>,1,0> @ 1496fa920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l21::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UDynamicMeshComponent::FastNotifyColorsUpdated_::__l21::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::`21'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>,0,0> @ 1496fa940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UDynamicMeshComponent::CreateSceneProxy_::__l12::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`12'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l15::<lambda_2>,1,0> @ 1496fa960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l15::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc_::__l15::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::`15'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l15::<lambda_2>,1,0> @ 1496fa980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l15::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FDynamicMeshSceneProxy::MakeTangentsFunc_::__l15::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__P___MakeTangentsFunc_FDynamicMeshSceneProxy__QEAA_AV__TUniqueFunction___A6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z___N_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_3>,0,1> @ 1496fa9a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_3>,0,1>
::~TFunction_OwnedObject<_CollectSubDecomposition_::__l2::<lambda_3>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_3>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_3>,1,0> @ 1496fa9c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_3>,1,0>::
~TFunction_OwnedObject<_UDynamicMeshComponent::CreateSceneProxy_::__l15::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`15'::<lambda_3>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l18::<lambda_4>,1,0> @ 1496fa9e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l18::<lambda_4>,1,0>::
~TFunction_OwnedObject<_UDynamicMeshComponent::CreateSceneProxy_::__l18::<lambda_4>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`18'::<lambda_4>,1,0>::
        _vftable_;
  return;
}

// operator() @ 1496fcf40

void __thiscall
```UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::
operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  FMeshRenderDecomposition *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  this_00 = *(FMeshRenderDecomposition **)(*(longlong *)this + 0x730);
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  uVar4 = FMeshRenderDecomposition::GetGroupForTriangle
                    (this_00,*(int *)(*plVar1 + (longlong)param_1 * 4));
  plVar1 = *(longlong **)((longlong)this + 0x10);
  uVar5 = 0;
  if ((int)uVar4 < (int)plVar1[1]) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  LOCK();
  *(undefined1 *)((longlong)(int)uVar4 + *plVar1) = 1;
  UNLOCK();
  return;
}

// operator() @ 1496fd050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::
operator()'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStackY_108 [32];
  <lambda_1> local_c8;
  int local_c4;
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  int **local_a8;
  int *local_a0;
  longlong local_98;
  undefined8 local_90;
  _RTL_CRITICAL_SECTION *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  _RTL_CRITICAL_SECTION local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId904,
               "SimpleDynamicMeshComponent_FastVertexUpdatePrecomp_CalcBounds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
               ,0x388);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId904);
  }
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar3 = (**(code **)(**(longlong **)this + 0xb38))();
  local_78 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uStack_70 = _UNK_150a9e648;
  local_58 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_50 = _UNK_1508ffb58;
  local_68 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_60 = _UNK_150a9e6d8;
  InitializeCriticalSectionAndSpinCount(&local_48,4000);
  local_c4 = *(int *)(lVar1 + 8);
  local_a0 = &local_c4;
  local_c0.DataPtr = (void **)0x0;
  local_c0.ArrayNum = 0;
  local_88 = &local_48;
  local_80 = &local_78;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`ParallelComputeROIBounds'::__l2::<lambda_1>,void,int>::Call;
  local_a8 = &local_a0;
  local_98 = lVar1;
  local_90 = uVar3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",((int)((local_c4 >> 0x1f & 0xfffU) + local_c4) >> 0xc) + 1,1,
             (TFunctionRef<void___cdecl(int)> *)&local_b0,local_c8,None,&local_c0);
  DeleteCriticalSection(&local_48);
  puVar2 = *(undefined8 **)((longlong)this + 8);
  *puVar2 = local_78;
  puVar2[1] = uStack_70;
  puVar2[2] = local_68;
  puVar2[3] = uStack_60;
  puVar2[4] = local_58;
  puVar2[5] = uStack_50;
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1496ff580

void __thiscall `ParallelComputeROIBounds'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  
  uVar17 = (undefined4)__real_ffefffffffffffff;
  uVar19 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  uVar22 = (undefined4)__real_7fefffffffffffff;
  uVar23 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  lVar15 = 0x1000;
  uVar14 = param_1 << 0xc;
  lVar16 = (longlong)param_1 << 0xe;
  uVar25 = uVar22;
  uVar27 = uVar23;
  uVar28 = uVar17;
  uVar30 = uVar19;
  uVar31 = uVar22;
  uVar32 = uVar23;
  uVar33 = uVar17;
  uVar34 = uVar19;
  do {
    if ((int)uVar14 < **(int **)this) {
      plVar4 = *(longlong **)((longlong)this + 8);
      uVar11 = 0;
      if ((int)uVar14 < (int)plVar4[1]) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar11 = *(uint *)(lVar16 + *plVar4);
      lVar5 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x10);
      uVar13 = (ulonglong)(uVar11 & 0x1ff);
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
               (ulonglong)(uVar11 >> 9) * 8);
      uVar11 = *(uint *)(lVar6 + uVar13 * 0xc);
      uVar12 = (ulonglong)(uVar11 & 0x1ff);
      lVar7 = *(longlong *)(lVar5 + (ulonglong)(uVar11 >> 9) * 8);
      dVar1 = *(double *)(lVar7 + uVar12 * 0x18);
      uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)(lVar7 + 8 + uVar12 * 0x18);
      uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar3 = *(double *)(lVar7 + 0x10 + uVar12 * 0x18);
      uVar26 = (undefined4)((ulonglong)dVar3 >> 0x20);
      uVar18 = SUB84(dVar1,0);
      uVar21 = uVar20;
      if (dVar1 <= (double)CONCAT44(uVar19,uVar17)) {
        uVar18 = uVar17;
        uVar21 = uVar19;
      }
      uVar11 = *(uint *)(lVar6 + 4 + uVar13 * 0xc);
      if ((double)CONCAT44(uVar34,uVar33) <= dVar3) {
        uVar33 = SUB84(dVar3,0);
        uVar34 = uVar26;
      }
      uVar17 = SUB84(dVar1,0);
      if ((double)CONCAT44(uVar23,uVar22) <= dVar1) {
        uVar17 = uVar22;
        uVar20 = uVar23;
      }
      uVar24 = SUB84(dVar3,0);
      if ((double)CONCAT44(uVar27,uVar25) <= dVar3) {
        uVar24 = uVar25;
        uVar26 = uVar27;
      }
      uVar12 = (ulonglong)(uVar11 & 0x1ff);
      uVar25 = SUB84(dVar2,0);
      uVar27 = uVar29;
      if (dVar2 <= (double)CONCAT44(uVar30,uVar28)) {
        uVar25 = uVar28;
        uVar27 = uVar30;
      }
      uVar28 = SUB84(dVar2,0);
      if ((double)CONCAT44(uVar32,uVar31) <= dVar2) {
        uVar28 = uVar31;
        uVar29 = uVar32;
      }
      lVar7 = *(longlong *)(lVar5 + (ulonglong)(uVar11 >> 9) * 8);
      uVar11 = *(uint *)(lVar6 + 8 + uVar13 * 0xc);
      dVar1 = *(double *)(lVar7 + uVar12 * 0x18);
      dVar2 = *(double *)(lVar7 + 8 + uVar12 * 0x18);
      uVar30 = (undefined4)((ulonglong)dVar1 >> 0x20);
      uVar22 = uVar17;
      uVar23 = uVar20;
      if (dVar1 <= (double)CONCAT44(uVar20,uVar17)) {
        uVar22 = SUB84(dVar1,0);
        uVar23 = uVar30;
      }
      dVar3 = *(double *)(lVar7 + 0x10 + uVar12 * 0x18);
      uVar17 = uVar18;
      uVar19 = uVar21;
      if ((double)CONCAT44(uVar21,uVar18) <= dVar1) {
        uVar17 = SUB84(dVar1,0);
        uVar19 = uVar30;
      }
      uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if ((double)CONCAT44(uVar34,uVar33) <= dVar3) {
        uVar33 = SUB84(dVar3,0);
        uVar34 = uVar18;
      }
      uVar12 = (ulonglong)(uVar11 & 0x1ff);
      uVar21 = (undefined4)((ulonglong)dVar2 >> 0x20);
      uVar31 = uVar28;
      uVar32 = uVar29;
      if (dVar2 <= (double)CONCAT44(uVar29,uVar28)) {
        uVar31 = SUB84(dVar2,0);
        uVar32 = uVar21;
      }
      uVar28 = uVar25;
      uVar30 = uVar27;
      if ((double)CONCAT44(uVar27,uVar25) <= dVar2) {
        uVar28 = SUB84(dVar2,0);
        uVar30 = uVar21;
      }
      if (dVar3 <= (double)CONCAT44(uVar26,uVar24)) {
        uVar24 = SUB84(dVar3,0);
        uVar26 = uVar18;
      }
      lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar11 >> 9) * 8);
      dVar1 = *(double *)(lVar5 + 0x10 + uVar12 * 0x18);
      dVar2 = *(double *)(lVar5 + uVar12 * 0x18);
      if (dVar2 <= (double)CONCAT44(uVar23,uVar22)) {
        uVar22 = SUB84(dVar2,0);
        uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      dVar2 = *(double *)(lVar5 + uVar12 * 0x18);
      if ((double)CONCAT44(uVar19,uVar17) <= dVar2) {
        uVar17 = SUB84(dVar2,0);
        uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      dVar2 = *(double *)(lVar5 + 8 + uVar12 * 0x18);
      if (dVar2 <= (double)CONCAT44(uVar32,uVar31)) {
        uVar31 = SUB84(dVar2,0);
        uVar32 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      dVar2 = *(double *)(lVar5 + 8 + uVar12 * 0x18);
      if ((double)CONCAT44(uVar30,uVar28) <= dVar2) {
        uVar28 = SUB84(dVar2,0);
        uVar30 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
      uVar25 = uVar24;
      uVar27 = uVar26;
      if (dVar1 <= (double)CONCAT44(uVar26,uVar24)) {
        uVar25 = SUB84(dVar1,0);
        uVar27 = uVar18;
      }
      if ((double)CONCAT44(uVar34,uVar33) <= dVar1 && dVar1 != (double)CONCAT44(uVar34,uVar33)) {
        uVar33 = SUB84(dVar1,0);
        uVar34 = uVar18;
      }
    }
    uVar14 = uVar14 + 1;
    lVar16 = lVar16 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
  pdVar8 = *(double **)((longlong)this + 0x20);
  dVar1 = *pdVar8;
  if (dVar1 <= (double)CONCAT44(uVar23,uVar22)) {
    uVar22 = SUB84(dVar1,0);
    uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar8[1];
  if (dVar1 <= (double)CONCAT44(uVar32,uVar31)) {
    uVar31 = SUB84(dVar1,0);
    uVar32 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar8[2];
  if (dVar1 <= (double)CONCAT44(uVar27,uVar25)) {
    uVar25 = SUB84(dVar1,0);
    uVar27 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar8[3];
  if ((double)CONCAT44(uVar19,uVar17) <= dVar1) {
    uVar17 = SUB84(dVar1,0);
    uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar8[4];
  if ((double)CONCAT44(uVar30,uVar28) <= dVar1) {
    uVar28 = SUB84(dVar1,0);
    uVar30 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar8[5];
  if ((double)CONCAT44(uVar34,uVar33) <= dVar1) {
    uVar33 = SUB84(dVar1,0);
    uVar34 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  *pdVar8 = (double)CONCAT44(uVar23,uVar22);
  pdVar8[1] = (double)CONCAT44(uVar32,uVar31);
  pdVar8[2] = (double)CONCAT44(uVar27,uVar25);
  pdVar8[3] = (double)CONCAT44(uVar19,uVar17);
  pdVar8[4] = (double)CONCAT44(uVar30,uVar28);
  pdVar8[5] = (double)CONCAT44(uVar34,uVar33);
                    /* WARNING: Could not recover jumptable at 0x0001496ff851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
  return;
}

// operator() @ 1496ffc10

void __thiscall
``UDynamicMeshComponent::GetPhysicsTriMeshData'::__l2::<lambda_1>::operator()'::__l33::<lambda_1>::
operator()(void *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ForAnyElementType *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong local_res8;
  int local_res18;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  double local_60;
  double dStack_58;
  
  uVar17 = 0;
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_70 = *(undefined8 *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  iVar12 = **(int **)((longlong)this + 8);
  if ((int)local_70 == iVar12) {
    local_res18 = 0;
  }
  else if ((int)((ulonglong)local_70 >> 0x20) == iVar12) {
    local_res18 = 1;
  }
  else {
    local_res18 = -1;
    if (*(int *)(lVar3 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc) == iVar12) {
      local_res18 = 2;
    }
  }
  pFVar15 = *(ForAnyElementType **)((longlong)this + 0x10);
  iVar12 = *(int *)((longlong)&pFVar15[1].Data + 4);
  *(undefined4 *)&pFVar15[1].Data = 0;
  if (iVar12 < 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,8,pFVar15,0,(int *)((longlong)&pFVar15[1].Data + 4));
  }
  if (0 < **(int **)((longlong)this + 0x18)) {
    uVar21 = param_1 * 3;
    uVar16 = uVar17;
    uVar14 = uVar17;
    do {
      lVar3 = **(longlong **)((longlong)this + 0x20);
      iVar12 = (int)uVar14;
      uVar14 = uVar17;
      if ((iVar12 < *(int *)(lVar3 + 0x28)) && (-1 < iVar12)) {
        if ((iVar12 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = *(ulonglong *)(uVar16 + *(longlong *)(lVar3 + 0x20));
      }
      lVar3 = *(longlong *)(uVar14 + 0x78);
      local_70 = CONCAT44(*(undefined4 *)
                           (*(longlong *)(lVar3 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                           (ulonglong)(uVar21 + 1 & 0x1ff) * 4),
                          *(undefined4 *)
                           (*(longlong *)(lVar3 + (ulonglong)(uVar21 >> 9) * 8) +
                           (ulonglong)(uVar21 & 0x1ff) * 4));
      local_68 = *(undefined4 *)
                  (*(longlong *)(lVar3 + (ulonglong)(uVar21 + 2 >> 9) * 8) +
                  (ulonglong)(uVar21 + 2 & 0x1ff) * 4);
      local_60 = 0.0;
      dStack_58 = 0.0;
      uVar20 = *(uint *)((longlong)&local_70 + (longlong)local_res18 * 4);
      if (-1 < (int)uVar20) {
        dStack_58 = (double)*(float *)(*(longlong *)
                                        (*(longlong *)(uVar14 + 0x48) +
                                        (ulonglong)((uVar20 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar20 * 2 + 1 & 0x1ff) * 4);
        local_60 = (double)*(float *)(*(longlong *)
                                       (*(longlong *)(uVar14 + 0x48) +
                                       (ulonglong)((uVar20 & 0x7fffffff) >> 8) * 8) +
                                     (ulonglong)(uVar20 * 2 & 0x1ff) * 4);
      }
      pFVar15 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((pFVar15->Data <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 <
           pFVar15->Data + (longlong)*(int *)((longlong)&pFVar15[1].Data + 4) * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = *(int *)&pFVar15[1].Data;
      piVar1 = (int *)((longlong)&pFVar15[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,pFVar15,piVar1);
      }
      uVar14 = (ulonglong)(iVar12 + 1U);
      uVar16 = uVar16 + 8;
      *(int *)&pFVar15[1].Data = iVar10 + 1;
      pFVar19 = pFVar15->Data;
      *(double *)(pFVar19 + (longlong)iVar10 * 0x10) = local_60;
      *(double *)(pFVar19 + (longlong)iVar10 * 0x10 + 8) = dStack_58;
    } while ((int)(iVar12 + 1U) < **(int **)((longlong)this + 0x18));
  }
  uVar21 = **(uint **)((longlong)this + 0x28);
  uVar16 = (ulonglong)(int)uVar21;
  uVar20 = 0;
  if ((int)uVar21 < *(int *)(**(longlong **)((longlong)this + 0x30) + 8)) {
    local_78 = uVar16 << 4;
    do {
      local_res8 = (ulonglong)uVar21;
      uVar11 = (uint)uVar16;
      if (**(int **)((longlong)this + 0x18) < 1) {
LAB_1497000c1:
        if (uVar11 != 0xffffffff) goto LAB_1497002f3;
        break;
      }
      uVar14 = uVar17;
      uVar18 = uVar17;
      uVar22 = uVar16;
      while( true ) {
        uVar13 = (uint)uVar14;
        lVar3 = **(longlong **)((longlong)this + 0x30);
        uVar11 = uVar20;
        if ((int)uVar13 < *(int *)(lVar3 + 0x38)) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
        uVar11 = uVar20;
        if ((int)uVar22 < *(int *)(uVar18 + 8 + lVar3)) {
          uVar11 = ~(uint)uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar4 = *(longlong **)((longlong)this + 0x10);
        lVar3 = *(longlong *)(uVar18 + lVar3);
        uVar11 = uVar20;
        if ((int)uVar13 < (int)plVar4[1]) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *plVar4;
        if ((*(double *)(lVar5 + uVar18) != *(double *)(local_78 + lVar3)) ||
           (*(double *)(lVar5 + 8 + uVar18) != *(double *)(local_78 + 8 + lVar3))) break;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar18 = uVar18 + 0x10;
        uVar22 = local_res8;
        uVar11 = uVar21;
        if (**(int **)((longlong)this + 0x18) <= (int)(uVar13 + 1)) goto LAB_1497000c1;
      }
      local_78 = local_78 + 0x10;
      uVar21 = uVar21 + 1;
      uVar16 = (ulonglong)uVar21;
    } while ((int)uVar21 < *(int *)(**(longlong **)((longlong)this + 0x30) + 8));
  }
  pFVar19 = *(FScriptContainerElement **)((longlong)this + 0x38);
  pFVar15 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 0x30);
  if (((pFVar15->Data <= pFVar19) &&
      (pFVar19 < pFVar15->Data + (longlong)*(int *)((longlong)&pFVar15[1].Data + 4) * 0xc)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = *(uint *)&pFVar15[1].Data;
  puVar2 = (uint *)((longlong)&pFVar15[1].Data + 4);
  if (uVar11 == *puVar2) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,pFVar15,(int *)puVar2);
  }
  pFVar6 = pFVar15->Data;
  *(uint *)&pFVar15[1].Data = uVar11 + 1;
  *(undefined8 *)(pFVar6 + (longlong)(int)uVar11 * 0xc) = *(undefined8 *)pFVar19;
  *(undefined4 *)(pFVar6 + (longlong)(int)uVar11 * 0xc + 8) = *(undefined4 *)(pFVar19 + 8);
  uVar16 = uVar17;
  if (0 < **(int **)((longlong)this + 0x18)) {
    do {
      uVar13 = (uint)uVar17;
      lVar3 = **(longlong **)((longlong)this + 0x30);
      uVar21 = uVar20;
      if ((int)uVar13 < *(int *)(lVar3 + 0x38)) {
        uVar21 = ~uVar13 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar4 = *(longlong **)((longlong)this + 0x10);
      pFVar15 = (ForAnyElementType *)(*(longlong *)(lVar3 + 0x30) + uVar16);
      uVar21 = uVar20;
      if ((int)uVar13 < (int)plVar4[1]) {
        uVar21 = ~uVar13 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar19 = (FScriptContainerElement *)(*plVar4 + uVar16);
      if (((pFVar15->Data <= pFVar19) &&
          (pFVar19 < pFVar15->Data + (longlong)*(int *)((longlong)&pFVar15[1].Data + 4) * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = *(int *)&pFVar15[1].Data;
      piVar1 = (int *)((longlong)&pFVar15[1].Data + 4);
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,pFVar15,piVar1);
      }
      uVar17 = (ulonglong)(uVar13 + 1);
      *(int *)&pFVar15[1].Data = iVar12 + 1;
      uVar8 = *(undefined8 *)(pFVar19 + 8);
      pFVar6 = pFVar15->Data;
      *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x10) = *(undefined8 *)pFVar19;
      *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x10 + 8) = uVar8;
      uVar16 = uVar16 + 0x10;
    } while ((int)(uVar13 + 1) < **(int **)((longlong)this + 0x18));
  }
LAB_1497002f3:
  plVar4 = *(longlong **)((longlong)this + 0x40);
  uVar21 = local_res18 + param_1 * 3;
  if ((int)uVar21 < (int)plVar4[1]) {
    uVar20 = ~uVar21 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(uint *)(*plVar4 + (longlong)(int)uVar21 * 4) = uVar11;
  return;
}

// operator() @ 1497003d0

void __thiscall
``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::
operator()'::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  <lambda_1> local_res8;
  uint local_78 [2];
  ForAnyElementType local_70;
  int local_68 [2];
  TArrayView<std::nullptr_t,int> local_60;
  code *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  ForAnyElementType *local_30;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId910,
               "SimpleDynamicMeshComponent_FastVertexUpdatePrecomp_FindSets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
               ,0x38e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId910);
  }
  uVar11 = 0;
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)this + 0x730) + 8);
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  if ((int)uVar2 < 1) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
  }
  else {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar2,&local_70,local_68,local_68 + 1);
    DefaultConstructItems<std::atomic<bool>,int>(local_70.Data + iVar6,uVar2);
    uVar8 = uVar11;
    uVar10 = uVar11;
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < local_68[0]) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      LOCK();
      local_70.Data[uVar8] = (FScriptContainerElement)0x0;
      UNLOCK();
      uVar8 = uVar8 + 1;
    } while ((int)(uVar9 + 1) < (int)uVar2);
  }
  local_40 = *(undefined8 *)this;
  local_38 = *(longlong *)((longlong)this + 0x10);
  local_30 = &local_70;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<```UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_48 = &local_40;
  local_60.DataPtr = (void **)0x0;
  local_60.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",*(int *)(local_38 + 8),1,
             (TFunctionRef<void___cdecl(int)> *)&local_50,local_res8,None,&local_60);
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar6 = *(int *)((longlong)&pFVar3[1].Data + 4);
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (iVar6 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
  }
  local_78[0] = 0;
  if (0 < (int)uVar2) {
    do {
      uVar9 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar9 < local_68[0]) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_70.Data[(int)uVar9] != (FScriptContainerElement)0x0) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        if (((pFVar3->Data <= (FScriptContainerElement *)local_78) &&
            ((FScriptContainerElement *)local_78 <
             pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) &&
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
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(uint *)(pFVar3->Data + (longlong)iVar6 * 4) = local_78[0];
      }
      local_78[0] = local_78[0] + 1;
      uVar11 = (ulonglong)local_78[0];
    } while ((int)local_78[0] < (int)uVar2);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1497006f0

void __thiscall `CollectSubDecomposition'::__l2::<lambda_2>::operator()(void *this,int param_1)

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

// operator() @ 149700e40

void __thiscall `CollectSubDecomposition'::__l2::<lambda_3>::operator()(void *this,int param_1)

{
  FGroup *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FGroup *pFVar4;
  
  iVar3 = (*(TArray<int,TSizedDefaultAllocator<32>_> **)this)->ArrayNum;
  if (0 < iVar3) {
    if (iVar3 < 100) {
      TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 8),
                 *(TArray<int,TSizedDefaultAllocator<32>_> **)this);
      return;
    }
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    iVar3 = FMeshRenderDecomposition::AppendGroup
                      (*(FMeshRenderDecomposition **)((longlong)this + 0x18));
    pFVar4 = FMeshRenderDecomposition::GetGroup
                       (*(FMeshRenderDecomposition **)((longlong)this + 0x18),iVar3);
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    pFVar1 = *(FGroup **)this;
    if (pFVar4 != pFVar1) {
      pFVar2 = (pFVar4->Triangles).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar4->Triangles).AllocatorInstance.Data = (pFVar1->Triangles).AllocatorInstance.Data;
      (pFVar1->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->Triangles).ArrayNum = (pFVar1->Triangles).ArrayNum;
      (pFVar4->Triangles).ArrayMax = (pFVar1->Triangles).ArrayMax;
      (pFVar1->Triangles).ArrayNum = 0;
      (pFVar1->Triangles).ArrayMax = 0;
    }
    pFVar4->Material = (UMaterialInterface *)**(undefined8 **)((longlong)this + 0x20);
  }
  return;
}

// `vcall'{3472,{flat}}'_}' @ 149700fc8

/* [thunk]: __cdecl UDynamicMeshComponent::`vcall'{3472,{flat}}' }' */

void __thiscall UDynamicMeshComponent::_vcall__3472__flat______(UDynamicMeshComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149700fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd90))();
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 149700fd8

/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseDynamicMeshComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UBaseDynamicMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UBaseDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBaseDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149700fec

/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseDynamicMeshComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UBaseDynamicMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UBaseDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBaseDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 149701000

/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseDynamicMeshComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UBaseDynamicMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UBaseDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBaseDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149701014

/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseDynamicMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBaseDynamicMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UBaseDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBaseDynamicMeshComponent *)&this[-1].WireframeMaterialOverride,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1424}' @ 149701024

/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseDynamicMeshComponent::`vector deleting
   destructor'`adjustor{1424}' (unsigned int) __ptr64 */

void * __thiscall
UBaseDynamicMeshComponent::_vector_deleting_destructor__adjustor_1424__
          (UBaseDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBaseDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1432}' @ 149701038

/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseDynamicMeshComponent::`vector deleting
   destructor'`adjustor{1432}' (unsigned int) __ptr64 */

void * __thiscall
UBaseDynamicMeshComponent::_vector_deleting_destructor__adjustor_1432__
          (UBaseDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBaseDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1440}' @ 14970104c

/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseDynamicMeshComponent::`vector deleting
   destructor'`adjustor{1440}' (unsigned int) __ptr64 */

void * __thiscall
UBaseDynamicMeshComponent::_vector_deleting_destructor__adjustor_1440__
          (UBaseDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBaseDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1448}' @ 149701060

/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseDynamicMeshComponent::`vector deleting
   destructor'`adjustor{1448}' (unsigned int) __ptr64 */

void * __thiscall
UBaseDynamicMeshComponent::_vector_deleting_destructor__adjustor_1448__
          (UBaseDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBaseDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149701074

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMesh::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMesh::_vector_deleting_destructor__adjustor_40__(UDynamicMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDynamicMesh *)&this[-1].MeshRealtimeUpdateEvent.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 149701084

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMesh::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMesh::_vector_deleting_destructor__adjustor_48__(UDynamicMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDynamicMesh *)&this[-1].MeshRealtimeUpdateEvent.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 149701094

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMesh::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMesh::_vector_deleting_destructor__adjustor_56__(UDynamicMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDynamicMesh *)&this[-1].MeshRealtimeUpdateEvent,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 1497010a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMeshComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDynamicMeshComponent *)&this[-1].SecondaryTriFilterFunc,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 1497010b8

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMeshComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDynamicMeshComponent *)&this[-1].VertexColorMappingFunc.field_0x28,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 1497010cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMeshComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDynamicMeshComponent *)&this[-1].VertexColorMappingFunc.field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1497010e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDynamicMeshComponent *)&this[-1].AggGeom.RenderInfoPtr,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1424}' @ 1497010f0

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMeshComponent::`vector deleting
   destructor'`adjustor{1424}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMeshComponent::_vector_deleting_destructor__adjustor_1424__
          (UDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1432}' @ 149701104

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMeshComponent::`vector deleting
   destructor'`adjustor{1432}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMeshComponent::_vector_deleting_destructor__adjustor_1432__
          (UDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1440}' @ 149701118

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMeshComponent::`vector deleting
   destructor'`adjustor{1440}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMeshComponent::_vector_deleting_destructor__adjustor_1440__
          (UDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1448}' @ 14970112c

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMeshComponent::`vector deleting
   destructor'`adjustor{1448}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMeshComponent::_vector_deleting_destructor__adjustor_1448__
          (UDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1552}' @ 149701140

/* [thunk]:public: virtual void * __ptr64 __cdecl UDynamicMeshComponent::`vector deleting
   destructor'`adjustor{1552}' (unsigned int) __ptr64 */

void * __thiscall
UDynamicMeshComponent::_vector_deleting_destructor__adjustor_1552__
          (UDynamicMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDynamicMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 149701160

void * __thiscall
IBaseDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701190

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGeometryFrameworkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGeometryFrameworkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497011c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497011f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701220

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701250

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXHH_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497012d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TAxisAlignedBox3_N_Geometry_UE__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__FastUpdateAllIndexBuffers_FDynamicMeshSceneProxy__QEAAXXZ_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__FastUpdateIndexBuffers_FDynamicMeshSceneProxy__QEAAXAEBV__TArray_HV__TSizedDefaultAllocator__0CA______Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497013d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__InitializeSingleBufferSet_FDynamicMeshSceneProxy__QEAAXPEAVFMeshRenderBufferSet___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497014d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`5'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497015c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::`11'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::`14'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497016b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___R1_1__InitializeFromDecomposition_FDynamicMeshSceneProxy__QEAAXAEAV__TUniquePtr_VFMeshRenderDecomposition__U__TDefaultDelete_VFMeshRenderDecomposition_______Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7___R<lambda_2>__BL___FastUpdateVertices_FDynamicMeshSceneProxy__QEAAX_N000_Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497017d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`8'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l8::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__MakeTangentsFunc_FDynamicMeshSceneProxy__QEAA_AV__TUniqueFunction___A6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z___N_Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__BD___FastUpdateVertices_FDynamicMeshSceneProxy__QEAAX_N000_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497018d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L____R1_1__FastUpdateVertices_FDynamicMeshSceneProxy__QEAAXAEBV__TArray_HV__TSizedDefaultAllocator__0CA______N111_Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497019d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l14::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::`14'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701a90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__BC___InitializeByMaterial_FDynamicMeshSceneProxy__QEAAXAEAV__TArray_PEAVFMeshRenderBufferSet__V__TSizedDefaultAllocator__0CA______Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l21::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::`21'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`12'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l15::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::`15'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l15::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__P___MakeTangentsFunc_FDynamicMeshSceneProxy__QEAA_AV__TUniqueFunction___A6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z___N_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701c50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_3>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_3>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`15'::<lambda_3>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l18::<lambda_4>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`18'::<lambda_4>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701d10

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
ADynamicMeshActor::_scalar_deleting_destructor_(ADynamicMeshActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ADynamicMeshActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701d70

void * __thiscall
FBaseDynamicMeshSceneProxy::_scalar_deleting_destructor_
          (FBaseDynamicMeshSceneProxy *this,uint param_1)

{
  ~FBaseDynamicMeshSceneProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701db0

void * __thiscall
FDynamicMeshSceneProxy::_scalar_deleting_destructor_(FDynamicMeshSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RenderBufferSets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBaseDynamicMeshSceneProxy::~FBaseDynamicMeshSceneProxy((FBaseDynamicMeshSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x510);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701e00

void * __thiscall FMeshChange::_scalar_deleting_destructor_(FMeshChange *this,uint param_1)

{
  longlong *plVar1;
  FDynamicMeshChange *this_00;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FMeshChange__6B_;
  if (*(longlong *)&this->OnChangeAppliedFunc != 0) {
    plVar1 = *(longlong **)&(this->OnChangeAppliedFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnChangeAppliedFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this_00 = (this->DynamicMeshChange).Ptr;
  if (this_00 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
    ::operator_delete(this_00,0x48);
  }
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701e90

void * __thiscall
FMeshRegionChangeBase::_scalar_deleting_destructor_(FMeshRegionChangeBase *this,uint param_1)

{
  *this = (FMeshRegionChangeBase)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149701ed0

void * __thiscall
FMeshRenderBufferSet::_scalar_deleting_destructor_(FMeshRenderBufferSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMeshRenderBufferSet__6B_;
  if (0 < this->TriangleCount) {
    (**(code **)((this->PositionVertexBuffer)._padding_ + 0x20))();
    (**(code **)((this->StaticMeshVertexBuffer)._padding_ + 0x20))(&this->StaticMeshVertexBuffer);
    (**(code **)((this->ColorVertexBuffer)._padding_ + 0x20))();
    (**(code **)((this->VertexFactory)._padding_ + 0x20))();
    if ((int)(this->IndexBuffer)._padding_ != -1) {
      (**(code **)((this->IndexBuffer)._padding_ + 0x20))();
    }
    if ((int)(this->SecondaryIndexBuffer)._padding_ != -1) {
      (**(code **)((this->SecondaryIndexBuffer)._padding_ + 0x20))();
    }
    if (this->bEnableRaytracing != false) {
      (**(code **)((this->PrimaryRayTracingGeometry)._padding_ + 0x20))();
      (**(code **)((this->SecondaryRayTracingGeometry)._padding_ + 0x20))();
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BuffersLock);
  FRayTracingGeometry::~FRayTracingGeometry(&this->SecondaryRayTracingGeometry);
  FRayTracingGeometry::~FRayTracingGeometry(&this->PrimaryRayTracingGeometry);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->SecondaryIndexBuffer);
  if (((this->Triangles).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->Triangles).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&this->ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&this->PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this->StaticMeshVertexBuffer);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x670);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149702020

void * __thiscall
FMeshReplacementChange::_scalar_deleting_destructor_(FMeshReplacementChange *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->OnChangeAppliedFunc != 0) {
    plVar1 = *(longlong **)&(this->OnChangeAppliedFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnChangeAppliedFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->After).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Before).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149702090

void * __thiscall
FMeshVertexChange::_scalar_deleting_destructor_(FMeshVertexChange *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NewUVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldUVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Normals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149702180

void * __thiscall
UE::Geometry::FMinimalBoxMeshGenerator::_scalar_deleting_destructor_
          (FMinimalBoxMeshGenerator *this,uint param_1)

{
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497021c0

void * __thiscall
IMeshCommandChangeTarget::_scalar_deleting_destructor_(IMeshCommandChangeTarget *this,uint param_1)

{
  *this = (IMeshCommandChangeTarget)&___7IMeshCommandChangeTarget__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149702200

void * __thiscall
IMeshReplacementCommandChangeTarget::_scalar_deleting_destructor_
          (IMeshReplacementCommandChangeTarget *this,uint param_1)

{
  *this = (IMeshReplacementCommandChangeTarget)&___7IMeshReplacementCommandChangeTarget__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149702240

void * __thiscall
IMeshVertexCommandChangeTarget::_scalar_deleting_destructor_
          (IMeshVertexCommandChangeTarget *this,uint param_1)

{
  *this = (IMeshVertexCommandChangeTarget)&___7IMeshVertexCommandChangeTarget__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149702280

void * __thiscall
IToolFrameworkComponent::_scalar_deleting_destructor_(IToolFrameworkComponent *this,uint param_1)

{
  *this = (IToolFrameworkComponent)&___7IToolFrameworkComponent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497022c0

void * __thiscall
UBaseDynamicMeshComponent::_scalar_deleting_destructor_
          (UBaseDynamicMeshComponent *this,uint param_1)

{
  ~UBaseDynamicMeshComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x610);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149702320

void * __thiscall UDynamicMesh::_scalar_deleting_destructor_(UDynamicMesh *this,uint param_1)

{
  FDynamicMesh3 *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  pFVar1 = (this->Mesh).Ptr;
  if (pFVar1 != (FDynamicMesh3 *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MeshRealtimeUpdateEvent).field_0x8,
             *(int *)&(this->MeshRealtimeUpdateEvent).field_0x10);
  pvVar2 = *(void **)&(this->MeshRealtimeUpdateEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeshRealtimeUpdateEvent);
  pvVar2 = *(void **)&(this->MeshModifiedBPEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeshModifiedBPEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MeshChangedEvent).field_0x8,*(int *)&(this->MeshChangedEvent).field_0x10);
  pvVar2 = *(void **)&(this->MeshChangedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeshChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreMeshChangedEvent).field_0x8,*(int *)&(this->PreMeshChangedEvent).field_0x10
            );
  pvVar2 = *(void **)&(this->PreMeshChangedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreMeshChangedEvent);
  this->_padding_ = (longlong)&___7IMeshReplacementCommandChangeTarget__6B_;
  this->_padding_ = (longlong)&___7IMeshCommandChangeTarget__6B_;
  this->_padding_ = (longlong)&___7IMeshVertexCommandChangeTarget__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149702480

void * __thiscall
UDynamicMeshComponent::_scalar_deleting_destructor_(UDynamicMeshComponent *this,uint param_1)

{
  ~UDynamicMeshComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x950);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497024e0

void * __thiscall
UDynamicMeshGenerator::_scalar_deleting_destructor_(UDynamicMeshGenerator *this,uint param_1)

{
  *(undefined ***)this = &___7UDynamicMeshGenerator__6B_;
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

// `scalar_deleting_destructor' @ 149702540

void * __thiscall
UDynamicMeshPool::_scalar_deleting_destructor_(UDynamicMeshPool *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDynamicMeshPool__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PoolAccessCs);
  pFVar1 = (this->AllCreatedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497025d0

void * __thiscall
UDynamicMeshProcessorBlueprint::_scalar_deleting_destructor_
          (UDynamicMeshProcessorBlueprint *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDynamicMeshProcessorBlueprint__6B_;
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

// `scalar_deleting_destructor' @ 149702630

void * __thiscall
UMeshCommandChangeTarget::_scalar_deleting_destructor_(UMeshCommandChangeTarget *this,uint param_1)

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

// `scalar_deleting_destructor' @ 149702690

void * __thiscall
UMeshReplacementCommandChangeTarget::_scalar_deleting_destructor_
          (UMeshReplacementCommandChangeTarget *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1497026f0

void * __thiscall
UMeshVertexCommandChangeTarget::_scalar_deleting_destructor_
          (UMeshVertexCommandChangeTarget *this,uint param_1)

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

// CollectSubDecomposition @ 149705a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149705e4b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe98 : 0x000149705e4f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl
CollectSubDecomposition
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          UMaterialInterface *param_3,FMeshRenderDecomposition *param_4,int param_5,
          FWindowsRecursiveMutex *param_6)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  FGroup *pFVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  UMaterialInterface *local_res18 [2];
  undefined1 auStackY_3a8 [32];
  FGroup local_368;
  undefined4 local_350;
  TArray<int,TSizedDefaultAllocator<32>_> local_348;
  undefined *local_338;
  undefined8 local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  code *pcStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined ***pppuStack_2b0;
  double local_2a8;
  TDynamicVector<int,512> local_2a0;
  TDynamicVector<UE::Math::TVector<double>,512> local_288;
  TDynamicVector<UE::Math::TVector<double>,512> local_270;
  TDynamicVector<int,512> local_258;
  undefined8 local_240;
  code *local_238 [2];
  undefined **local_228;
  code *local_220;
  undefined ***local_210;
  code *local_208;
  undefined8 uStack_200;
  undefined **local_1f8;
  undefined **ppuStack_1f0;
  UMaterialInterface **local_1e8;
  undefined ***pppuStack_1e0;
  code *local_1d8;
  undefined8 uStack_1d0;
  undefined **local_1c8;
  undefined **ppuStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined ***pppuStack_1b0;
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined **local_198;
  code *pcStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined ***pppuStack_180;
  code *local_178;
  undefined8 uStack_170;
  undefined **local_168;
  code *pcStack_160;
  undefined8 uStack_150;
  code *local_148;
  undefined8 uStack_140;
  undefined **local_138;
  code *pcStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined ***pppuStack_120;
  code *local_118;
  undefined8 uStack_110;
  undefined **local_108;
  code *pcStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined ***pppuStack_f0;
  code *local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [3];
  longlong *plStack_c0;
  undefined1 local_b8 [56];
  longlong *local_80;
  bool local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_368.Material._0_4_ = param_5;
  local_res18[0] = param_3;
  if (param_2->ArrayNum < param_5) {
    EnterCriticalSection((LPCRITICAL_SECTION)param_6);
    iVar11 = FMeshRenderDecomposition::AppendGroup(param_4);
    pFVar12 = FMeshRenderDecomposition::GetGroup(param_4,iVar11);
    LeaveCriticalSection((LPCRITICAL_SECTION)param_6);
    if (pFVar12 != (FGroup *)param_2) {
      iVar11 = param_2->ArrayNum;
      piVar1 = &(pFVar12->Triangles).ArrayMax;
      pFVar5 = (param_2->AllocatorInstance).Data;
      (pFVar12->Triangles).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        pFVar12->Material = local_res18[0];
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,*piVar1,(ForAnyElementType *)pFVar12,iVar11,piVar1);
      if (iVar11 != 0) {
        memcpy((pFVar12->Triangles).AllocatorInstance.Data,pFVar5,(longlong)iVar11 << 2);
      }
    }
    pFVar12->Material = local_res18[0];
  }
  else {
    local_2f8._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    local_2c8 = &
                ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_2a8 = __real_3e45798ee2308c3a;
    local_2f8._16_8_ = 0;
    local_2f8._24_4_ = 3;
    pppuStack_2b0 = (undefined ***)0x0;
    pcStack_2c0 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                  MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_2f8._32_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
    local_2a0.CurBlock = 0;
    local_2a0.CurBlockUsed = 0;
    local_2a0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a0.Blocks.ArrayNum = 0;
    local_2a0.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_2a0);
    local_288.CurBlock = 0;
    local_288.CurBlockUsed = 0;
    local_288.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.Blocks.ArrayNum = 0;
    local_288.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_288);
    local_270.CurBlock = 0;
    local_270.CurBlockUsed = 0;
    local_270.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.Blocks.ArrayNum = 0;
    local_270.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_270);
    local_258.CurBlock = 0;
    local_258.CurBlockUsed = 0;
    local_258.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Blocks.ArrayNum = 0;
    local_258.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_258);
    pppuStack_120 = pppuStack_2b0;
    pcStack_130 = pcStack_2c0;
    local_138 = local_2c8;
    uVar8 = local_2f8._40_8_;
    local_148 = (code *)local_2f8._32_8_;
    local_2f8._24_4_ = (int)local_368.Material;
    local_2f8._32_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
    local_2f8._40_8_ = uStack_140;
    local_240._0_4_ = -1;
    local_240._4_4_ = -1;
    local_2f8._16_8_ = 0;
    local_2c8 = &
                ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    pcStack_2c0 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                  MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_2b8 = local_128;
    uStack_2b4 = uStack_124;
    pppuStack_2b0 = (undefined ***)0x0;
    uStack_140 = uVar8;
    local_2f8._8_8_ = param_1;
    if (local_148 != (code *)0x0) {
      pppuVar13 = &local_138;
      if (pppuStack_120 != (undefined ***)0x0) {
        pppuVar13 = pppuStack_120;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    iVar11 = param_2->ArrayNum;
    pFVar5 = (param_2->AllocatorInstance).Data;
    local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_348.ArrayNum = iVar11;
    if (iVar11 == 0) {
      local_348.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,0,&local_348.AllocatorInstance,iVar11,&local_348.ArrayMax);
      memcpy(local_348.AllocatorInstance.Data,pFVar5,(longlong)iVar11 << 2);
    }
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    BuildTopDown<TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_2f8,false,&local_348,iVar11);
    local_2f8._16_8_ = UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_2f8._8_8_)
    ;
    uVar8 = uStack_200;
    local_228 = &
                ___7__TFunction_OwnedObject_P6A_NAEBU__TAxisAlignedBox3_N_Geometry_UE__H_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_220 = UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::
                <lambda_25_>::<lambda_invoker_cdecl>;
    ppuStack_1c0 = (undefined **)
                   UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::
                   <lambda_27_>::<lambda_invoker_cdecl>;
    pcStack_190 = UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::
                  <lambda_28_>::<lambda_invoker_cdecl>;
    local_1e8 = &local_368.Material;
    local_208 = UE::Core::Private::Function::
                TFunctionRefCaller<`CollectSubDecomposition'::__l2::<lambda_1>,void,int,int>::Call;
    uStack_200 = uStack_170;
    pppuStack_1e0 = (undefined ***)0x0;
    local_338 = (undefined *)0x0;
    local_330 = 0;
    local_368.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.Triangles.ArrayNum = 0;
    local_368.Triangles.ArrayMax = 0;
    local_210 = (undefined ***)0x0;
    local_238[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
                   ::Call;
    pppuStack_1b0 = (undefined ***)0x0;
    local_1c8 = &___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
    local_1d8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int),void,int>::Call
    ;
    pppuStack_180 = (undefined ***)0x0;
    local_198 = &___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
    local_1a8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int),void,int>::Call
    ;
    local_1f8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_1>,0,0>::_vftable_;
    ppuStack_1f0 = &local_338;
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(int,int),void,int,int>::Call;
    uStack_170 = uVar8;
    local_168 = &___7__TFunction_OwnedObject_P6AXHH_Z_0A__0A__Function_Private_Core_UE__6B_;
    pcStack_160 = UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::
                  <lambda_26_>::<lambda_invoker_cdecl>;
    uStack_150 = 0;
    (*(code *)PTR_Destroy_151eb4578)();
    pppuStack_f0 = pppuStack_1b0;
    pcStack_100 = (code *)ppuStack_1c0;
    local_108 = local_1c8;
    uVar8 = uStack_1d0;
    local_118 = local_1d8;
    local_1d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`CollectSubDecomposition'::__l2::<lambda_2>,void,int>::Call;
    uStack_1d0 = uStack_110;
    local_1b8 = local_f8;
    uStack_1b4 = uStack_f4;
    pppuStack_1b0 = (undefined ***)0x0;
    local_1c8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_2>,0,0>::_vftable_;
    ppuStack_1c0 = &local_338;
    uStack_110 = uVar8;
    if (local_118 != (code *)0x0) {
      pppuVar13 = &local_108;
      if (pppuStack_f0 != (undefined ***)0x0) {
        pppuVar13 = pppuStack_f0;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    local_e8 = (code *)0x0;
    pppuVar13 = FMemory::Malloc(0x30,8);
    plStack_c0 = (longlong *)pppuStack_180;
    uVar8 = uStack_1a0;
    pcVar9 = local_1a8;
    *pppuVar13 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_3>,0,1>::_vftable_;
    pppuVar13[1] = &local_338;
    pppuVar13[2] = (undefined **)&local_368;
    pppuVar13[3] = (undefined **)param_6;
    pppuVar13[4] = (undefined **)param_4;
    pppuVar13[5] = (undefined **)local_res18;
    if (pppuVar13 + 1 != (undefined ***)0x0) {
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`CollectSubDecomposition'::__l2::<lambda_3>,void,int>::Call;
    }
    local_1a8 = local_e8;
    uStack_1a0 = uStack_e0;
    local_188 = (undefined4)local_d8[2];
    uStack_184 = local_d8[2]._4_4_;
    pppuStack_180 = pppuVar13;
    local_e8 = pcVar9;
    uStack_e0 = uVar8;
    local_d8[0]._0_4_ = local_198._0_4_;
    local_d8[0]._4_4_ = local_198._4_4_;
    local_d8[1]._0_4_ = pcStack_190._0_4_;
    local_d8[1]._4_4_ = pcStack_190._4_4_;
    if (pcVar9 != (code *)0x0) {
      pppuVar13 = (undefined ***)local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        pppuVar13 = (undefined ***)plStack_c0;
      }
      (**(code **)((longlong)*pppuVar13 + 0x10))();
    }
    local_b8._0_8_ = __real_7fefffffffffffff;
    uVar14 = (ulonglong)(local_240._4_4_ & 0x1ff);
    local_b8._16_8_ = 0;
    local_80 = (longlong *)0x0;
    local_78 = false;
    local_350 = 0;
    lVar6 = *(longlong *)
             (local_288.Blocks.AllocatorInstance.Data + (ulonglong)(local_240._4_4_ >> 9) * 8);
    local_310 = *(double *)(lVar6 + uVar14 * 0x18);
    lVar7 = *(longlong *)
             (local_270.Blocks.AllocatorInstance.Data + (ulonglong)(local_240._4_4_ >> 9) * 8);
    local_308 = *(double *)(lVar6 + 8 + uVar14 * 0x18);
    local_300 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
    dVar2 = *(double *)(lVar7 + uVar14 * 0x18);
    dVar3 = *(double *)(lVar7 + 8 + uVar14 * 0x18);
    local_328 = local_310 - dVar2;
    dVar4 = *(double *)(lVar7 + 0x10 + uVar14 * 0x18);
    local_320 = local_308 - dVar3;
    local_310 = local_310 + dVar2;
    local_308 = local_308 + dVar3;
    local_318 = local_300 - dVar4;
    local_300 = local_300 + dVar4;
    UE::Core::Private::Function::CheckCallable(local_238[0]);
    pcVar9 = local_238[0];
    pppuVar13 = &local_228;
    if (local_210 != (undefined ***)0x0) {
      pppuVar13 = local_210;
    }
    puVar15 = (undefined8 *)(*(code *)(*pppuVar13)[1])();
    if (pcVar9 == UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
                  ::Call) {
      cVar10 = (*(code *)*puVar15)(&local_328);
    }
    else {
      cVar10 = (*pcVar9)(puVar15);
    }
    if (cVar10 != '\0') {
      if (*(code **)(local_2f8._0_8_ + 0x80) ==
          UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TreeTraversalImpl) {
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TreeTraversalImpl
                  ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_2f8,local_240._4_4_,0,
                   (FTreeTraversal *)local_238,(FQueryOptions *)local_b8);
      }
      else {
        (**(code **)(local_2f8._0_8_ + 0x80))();
      }
    }
    if (local_b8._16_8_ != 0) {
      plVar16 = (longlong *)(local_b8 + 0x20);
      if (local_80 != (longlong *)0x0) {
        plVar16 = local_80;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (0 < local_368.Triangles.ArrayNum) {
      EnterCriticalSection((LPCRITICAL_SECTION)param_6);
      iVar11 = FMeshRenderDecomposition::AppendGroup(param_4);
      pFVar12 = FMeshRenderDecomposition::GetGroup(param_4,iVar11);
      LeaveCriticalSection((LPCRITICAL_SECTION)param_6);
      if (pFVar12 != &local_368) {
        pFVar5 = (pFVar12->Triangles).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Triangles).AllocatorInstance.Data = local_368.Triangles.AllocatorInstance.Data;
        local_368.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->Triangles).ArrayNum = local_368.Triangles.ArrayNum;
        (pFVar12->Triangles).ArrayMax = local_368.Triangles.ArrayMax;
        local_368.Triangles.ArrayNum = 0;
        local_368.Triangles.ArrayMax = 0;
      }
      pFVar12->Material = local_res18[0];
    }
    if (local_1a8 != (code *)0x0) {
      pppuVar13 = &local_198;
      if (pppuStack_180 != (undefined ***)0x0) {
        pppuVar13 = pppuStack_180;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_1d8 != (code *)0x0) {
      pppuVar13 = &local_1c8;
      if (pppuStack_1b0 != (undefined ***)0x0) {
        pppuVar13 = pppuStack_1b0;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_208 != (code *)0x0) {
      pppuVar13 = &local_1f8;
      if (pppuStack_1e0 != (undefined ***)0x0) {
        pppuVar13 = pppuStack_1e0;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_238[0] != (code *)0x0) {
      pppuVar13 = &local_228;
      if (local_210 != (undefined ***)0x0) {
        pppuVar13 = local_210;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_368.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Triangles.AllocatorInstance.Data);
    }
    if (local_338 != (undefined *)0x0) {
      FMemory::Free(local_338);
    }
    UE::Geometry::TDynamicVector<int,512>::Empty(&local_258,0);
    if (local_258.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Blocks.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_270,0);
    if (local_270.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Blocks.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_288,0);
    if (local_288.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Blocks.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<int,512>::Empty(&local_2a0,0);
    if (local_2a0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Blocks.AllocatorInstance.Data);
    }
    if ((code *)local_2f8._32_8_ != (code *)0x0) {
      pppuVar13 = &local_2c8;
      if (pppuStack_2b0 != (undefined ***)0x0) {
        pppuVar13 = pppuStack_2b0;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeBaseDynamicMeshComponent @ 149708e90

void __cdecl EmptyLinkFunctionForGeneratedCodeBaseDynamicMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDynamicMeshActor @ 149708ea0

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicMeshActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDynamicMeshComponent @ 149708eb0

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDynamicMeshProcessor @ 149708ec0

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicMeshProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryFramework_init @ 149708ed0

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryFramework_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshChange @ 149708ee0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshChange(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshReplacementChange @ 149708ef0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshReplacementChange(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshVertexChange @ 149708f00

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshVertexChange(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUDynamicMesh @ 149708f10

void __cdecl EmptyLinkFunctionForGeneratedCodeUDynamicMesh(void)

{
  return;
}

// FOnDynamicMeshModifiedBP_DelegateWrapper @ 1497097e0

void __cdecl
FOnDynamicMeshModifiedBP_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UDynamicMesh *param_2)

{
  UDynamicMesh *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// Z_Construct_UClass_ADynamicMeshActor_NoRegister @ 14971d710

UClass * __cdecl Z_Construct_UClass_ADynamicMeshActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADynamicMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshActor",
               &Z_Registration_Info_UClass_ADynamicMeshActor.InnerSingleton,
               ADynamicMeshActor::StaticRegisterNativesADynamicMeshActor,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADynamicMeshActor>,
               InternalVTableHelperCtorCaller<ADynamicMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADynamicMeshActor.InnerSingleton;
}

// Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister @ 14971d7d0

UClass * __cdecl Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseDynamicMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"BaseDynamicMeshComponent",
               &Z_Registration_Info_UClass_UBaseDynamicMeshComponent.InnerSingleton,
               UBaseDynamicMeshComponent::StaticRegisterNativesUBaseDynamicMeshComponent,0x610,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseDynamicMeshComponent>,
               InternalVTableHelperCtorCaller<UBaseDynamicMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseDynamicMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UDynamicMeshProcessorBlueprint_NoRegister @ 14971d890

UClass * __cdecl Z_Construct_UClass_UDynamicMeshProcessorBlueprint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshProcessorBlueprint",
               &Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.InnerSingleton,
               UDynamicMeshProcessorBlueprint::StaticRegisterNativesUDynamicMeshProcessorBlueprint,
               0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshProcessorBlueprint>,
               InternalVTableHelperCtorCaller<UDynamicMeshProcessorBlueprint>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshProcessorBlueprint.InnerSingleton;
}

// Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister @ 14971d940

UClass * __cdecl Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshCommandChangeTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"MeshCommandChangeTarget",
               &Z_Registration_Info_UClass_UMeshCommandChangeTarget.InnerSingleton,
               UMeshCommandChangeTarget::StaticRegisterNativesUMeshCommandChangeTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshCommandChangeTarget>,
               InternalVTableHelperCtorCaller<UMeshCommandChangeTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshCommandChangeTarget.InnerSingleton;
}

// Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister @ 14971da00

UClass * __cdecl Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"MeshReplacementCommandChangeTarget",
               &Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.InnerSingleton,
               UMeshReplacementCommandChangeTarget::
               StaticRegisterNativesUMeshReplacementCommandChangeTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshReplacementCommandChangeTarget>,
               InternalVTableHelperCtorCaller<UMeshReplacementCommandChangeTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.InnerSingleton;
}

// Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister @ 14971dac0

UClass * __cdecl Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"MeshVertexCommandChangeTarget",
               &Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.InnerSingleton,
               UMeshVertexCommandChangeTarget::StaticRegisterNativesUMeshVertexCommandChangeTarget,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexCommandChangeTarget>,
               InternalVTableHelperCtorCaller<UMeshVertexCommandChangeTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.InnerSingleton;
}

// Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode @ 14971db80

UEnum * __cdecl Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode(void)

{
  if (Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.InnerSingleton,
               &Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDynamicMeshChangeInfo @ 14971dbc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicMeshChangeInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicMeshChangeInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicMeshChangeInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicMeshChangeInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDynamicMeshChangeInfo.InnerSingleton;
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

// IMPLEMENT_MODULE_GeometryFramework @ 149720200

void __cdecl IMPLEMENT_MODULE_GeometryFramework(void)

{
  return;
}

// StashedMeshes'' @ 150416d90

void __cdecl
`dynamic_atexit_destructor_for_'UE::Local::FDynamicMeshCopyHelper::StashedMeshes__(void)

{
  UE::Local::FDynamicMeshCopyHelper::StashedMeshes._72_4_ = 0;
  if (UE::Local::FDynamicMeshCopyHelper::StashedMeshes._64_8_ != 0) {
    FMemory::Free((void *)UE::Local::FDynamicMeshCopyHelper::StashedMeshes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UE::Local::FDynamicMeshCopyHelper::StashedMeshes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicMeshComponent_AllowCollisionAsyncBuildInEditor'' @ 150416dd0

void __cdecl
_dynamic_atexit_destructor_for__CVarDynamicMeshComponent_AllowCollisionAsyncBuildInEditor__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicMeshComponent_AllowCollisionAsyncBuildInEditor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicMeshComponent_AllowMeshCardGeneration'' @ 150416df0

void __cdecl
_dynamic_atexit_destructor_for__CVarDynamicMeshComponent_AllowMeshCardGeneration__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicMeshComponent_AllowMeshCardGeneration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicMeshComponent_MaxComplexCollisionTriCount'' @ 150416e10

void __cdecl
_dynamic_atexit_destructor_for__CVarDynamicMeshComponent_MaxComplexCollisionTriCount__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicMeshComponent_MaxComplexCollisionTriCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicMeshDupeHelperTimeout'' @ 150416e30

void __cdecl _dynamic_atexit_destructor_for__CVarDynamicMeshDupeHelperTimeout__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicMeshDupeHelperTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicMeshPoolMaxPoolSizeThreshold'' @ 150416e50

void __cdecl _dynamic_atexit_destructor_for__CVarDynamicMeshPoolMaxPoolSizeThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicMeshPoolMaxPoolSizeThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicMeshTextBasedDupeTriangleCountThreshold'' @ 150416e70

void __cdecl
_dynamic_atexit_destructor_for__CVarDynamicMeshTextBasedDupeTriangleCountThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicMeshTextBasedDupeTriangleCountThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150416e90

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

