// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 121

// `dynamic_initializer_for_'CVarRayTracingProceduralMesh'' @ 1413c7950

void __cdecl _dynamic_initializer_for__CVarRayTracingProceduralMesh__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingProceduralMesh,L"r.RayTracing.Geometry.ProceduralMeshes",local_res8,
             L"Include procedural meshes in ray tracing effects (default = 1 (procedural meshes enabled in ray tracing))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingProceduralMesh__);
  return;
}

// `dynamic_initializer_for_'LogProceduralComponent'' @ 1413c79a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogProceduralComponent__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogProceduralComponent,L"LogProceduralComponent",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogProceduralComponent__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantProceduralMeshComponent'' @ 1413c79e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantProceduralMeshComponent__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ProceduralMeshComponent";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ProceduralMeshComponent",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FProceduralMeshComponentPlugin>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413c7a30

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413c7ac0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413c7b50

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413c7be0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413c7c70

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413c7d00

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413c7d90

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413c7e20

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413c7eb0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413c7f40

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

// `dynamic_initializer_for_'StatPtr_STAT_ProcMesh_CalcTangents'' @ 1413c7fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcMesh_CalcTangents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcMesh_CalcTangents ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_CalcTangents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcMesh_CalcTangents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_CalcTangents,*pFVar1,
               L"Update Collision","STATGROUP_ProceduralMesh","STATCAT_Advanced",L"ProceduralMesh",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcMesh_CreateMeshSection'' @ 1413c8060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcMesh_CreateMeshSection__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcMesh_CreateMeshSection ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_CreateMeshSection>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcMesh_CreateMeshSection");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_CreateMeshSection,*pFVar1,
               L"Create Mesh Section","STATGROUP_ProceduralMesh","STATCAT_Advanced",
               L"ProceduralMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcMesh_CreateSceneProxy'' @ 1413c80f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcMesh_CreateSceneProxy__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcMesh_CreateSceneProxy ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_CreateSceneProxy>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcMesh_CreateSceneProxy");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_CreateSceneProxy,*pFVar1,
               L"Create ProcMesh Proxy","STATGROUP_ProceduralMesh","STATCAT_Advanced",
               L"ProceduralMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcMesh_GetMeshElements'' @ 1413c8180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcMesh_GetMeshElements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcMesh_GetMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_GetMeshElements>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcMesh_GetMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_GetMeshElements,*pFVar1,
               L"Get ProcMesh Elements","STATGROUP_ProceduralMesh","STATCAT_Advanced",
               L"ProceduralMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcMesh_UpdateCollision'' @ 1413c8210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcMesh_UpdateCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcMesh_UpdateCollision ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateCollision>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcMesh_UpdateCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_UpdateCollision,*pFVar1,
               L"Update Collision","STATGROUP_ProceduralMesh","STATCAT_Advanced",L"ProceduralMesh",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcMesh_UpdateSectionGT'' @ 1413c82a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcMesh_UpdateSectionGT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcMesh_UpdateSectionGT ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateSectionGT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcMesh_UpdateSectionGT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_UpdateSectionGT,*pFVar1,
               L"UpdateSection GT","STATGROUP_ProceduralMesh","STATCAT_Advanced",L"ProceduralMesh",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcMesh_UpdateSectionRT'' @ 1413c8330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcMesh_UpdateSectionRT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcMesh_UpdateSectionRT ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateSectionRT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcMesh_UpdateSectionRT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_UpdateSectionRT,*pFVar1,
               L"UpdateSection RT","STATGROUP_ProceduralMesh","STATCAT_Advanced",L"ProceduralMesh",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h__Script_ProceduralMeshComponent_45071823'' @ 1413c83c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h__Script_ProceduralMeshComponent_45071823__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProceduralMeshComponent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h__Script_ProceduralMeshComponent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h__Script_ProceduralMeshComponent_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h__Script_ProceduralMeshComponent_3505280174'' @ 1413c8410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h__Script_ProceduralMeshComponent_3505280174__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProceduralMeshComponent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h__Script_ProceduralMeshComponent_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h__Script_ProceduralMeshComponent_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ProceduralMeshComponent'' @ 1413c8460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ProceduralMeshComponent__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xbf1e764b;
  local_res8[0].DeclarationsHash = 0xfb7c7fe;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ProceduralMeshComponent,L"/Script/ProceduralMeshComponent"
             ,&Z_Registration_Info_UPackage__Script_ProceduralMeshComponent,local_res8);
  return;
}

// Z_Construct_UPackage__Script_ProceduralMeshComponent @ 14d261ab0

UPackage * __cdecl Z_Construct_UPackage__Script_ProceduralMeshComponent(void)

{
  if (Z_Registration_Info_UPackage__Script_ProceduralMeshComponent.OuterSingleton == (UPackage *)0x0
     ) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ProceduralMeshComponent.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ProceduralMeshComponent.OuterSingleton;
}

// Z_Construct_UClass_UProceduralMeshComponent @ 14d261bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProceduralMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UProceduralMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProceduralMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UProceduralMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProceduralMeshComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FProcMeshSection @ 14d261bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FProcMeshSection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FProcMeshSection.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FProcMeshSection.InnerSingleton,
               &Z_Construct_UScriptStruct_FProcMeshSection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FProcMeshSection.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FProcMeshSection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FProcMeshVertex @ 14d261c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FProcMeshVertex(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FProcMeshVertex.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FProcMeshVertex.InnerSingleton,
               &Z_Construct_UScriptStruct_FProcMeshVertex_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FProcMeshVertex.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FProcMeshVertex.InnerSingleton;
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

// NewProp_bFlipTangentY_SetBit @ 14d261cf0

void __cdecl
Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14d261d00

void * __cdecl Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FProcMeshTangent,&UE::CoreUObject::Private::Construct<FProcMeshTangent>,&UE::CoreUObject::Private::ConstructForTests<FProcMeshTangent>,&UE::CoreUObject::Private::Destruct<FProcMeshTangent>,&UE::CoreUObject::Private::Copy<FProcMeshTangent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UProceduralMeshComponent_NoRegister @ 14d261d40

UClass * __cdecl Z_Construct_UClass_UProceduralMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralMeshComponent",L"ProceduralMeshComponent",
               &Z_Registration_Info_UClass_UProceduralMeshComponent.InnerSingleton,
               UProceduralMeshComponent::StaticRegisterNativesUProceduralMeshComponent,0x610,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralMeshComponent>,
               InternalVTableHelperCtorCaller<UProceduralMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralMeshComponent.InnerSingleton;
}

// NewStructOps @ 14d261eb0

void * __cdecl Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FProcMeshVertex,&UE::CoreUObject::Private::Construct<FProcMeshVertex>,&UE::CoreUObject::Private::ConstructForTests<FProcMeshVertex>,&UE::CoreUObject::Private::Destruct<FProcMeshVertex>,&UE::CoreUObject::Private::Copy<FProcMeshVertex>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableCollision_SetBit @ 14d2620c0

void __cdecl
Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bEnableCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bSectionVisible_SetBit @ 14d2620d0

void __cdecl
Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bSectionVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// NewStructOps @ 14d2620e0

void * __cdecl Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FProcMeshSection,&UE::CoreUObject::Private::Construct<FProcMeshSection>,&UE::CoreUObject::Private::ConstructForTests<FProcMeshSection>,&UE::CoreUObject::Private::Destruct<FProcMeshSection>,&UE::CoreUObject::Private::Copy<FProcMeshSection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh @ 14d262120

UFunction * __cdecl Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections @ 14d262160

UFunction * __cdecl Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes @ 14d2621a0

UFunction * __cdecl Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection @ 14d262240

UFunction * __cdecl Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bCreateCollision_SetBit @ 14d2622d0

void __cdecl
Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::
NewProp_bCreateCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection @ 14d2622e0

UFunction * __cdecl Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bCreateCollision_SetBit @ 14d2623e0

void __cdecl
Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::
NewProp_bCreateCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_bSRGBConversion_SetBit @ 14d2623f0

void __cdecl
Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::
NewProp_bSRGBConversion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x99) = 1;
  return;
}

// Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor @ 14d262400

UFunction * __cdecl
Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections @ 14d262440

UFunction * __cdecl Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d262480

void __cdecl
Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible @ 14d262490

UFunction * __cdecl Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewVisibility_SetBit @ 14d2624d0

void __cdecl
Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::
NewProp_bNewVisibility_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible @ 14d2624e0

UFunction * __cdecl Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection @ 14d262520

UFunction * __cdecl Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bSRGBConversion_SetBit @ 14d262560

void __cdecl
Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::
NewProp_bSRGBConversion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor @ 14d262570

UFunction * __cdecl
Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseComplexAsSimpleCollision_SetBit @ 14d2625b0

void __cdecl
Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x598) = 1;
  return;
}

// NewProp_bUseAsyncCooking_SetBit @ 14d2625c0

void __cdecl
Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x599) = 1;
  return;
}

// Z_Construct_UClass_UKismetProceduralMeshLibrary @ 14d2625d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UKismetProceduralMeshLibrary(void)

{
  if (Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.OuterSingleton,
               &Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.OuterSingleton;
}

// Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption @ 14d262610

UEnum * __cdecl Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption(void)

{
  if (Z_Registration_Info_UEnum_EProcMeshSliceCapOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EProcMeshSliceCapOption.InnerSingleton,
               &Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EProcMeshSliceCapOption.InnerSingleton;
}

// Z_Construct_UScriptStruct_FProcMeshTangent @ 14d262650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FProcMeshTangent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FProcMeshTangent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FProcMeshTangent.InnerSingleton,
               &Z_Construct_UScriptStruct_FProcMeshTangent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FProcMeshTangent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FProcMeshTangent.InnerSingleton;
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

// EProcMeshSliceCapOption_StaticEnum @ 14d2626d0

UEnum * __cdecl EProcMeshSliceCapOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProcMeshSliceCapOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralMeshComponent();
    Z_Registration_Info_UEnum_EProcMeshSliceCapOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption,
                       (UObject *)pUVar1,L"EProcMeshSliceCapOption");
  }
  return Z_Registration_Info_UEnum_EProcMeshSliceCapOption.OuterSingleton;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh @ 14d262710

UFunction * __cdecl
Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles @ 14d262750

UFunction * __cdecl Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCreateCollision_SetBit @ 14d262790

void __cdecl
Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics
::NewProp_bCreateCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent @ 14d2627a0

UFunction * __cdecl
Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit @ 14d2627e0

UFunction * __cdecl Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWinding_SetBit @ 14d262820

void __cdecl
Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::
NewProp_bWinding_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles @ 14d262830

UFunction * __cdecl Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded @ 14d262870

UFunction * __cdecl Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh @ 14d2628b0

UFunction * __cdecl Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh @ 14d2628f0

UFunction * __cdecl
Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh @ 14d262930

UFunction * __cdecl
Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCreateOtherHalf_SetBit @ 14d262970

void __cdecl
Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::
NewProp_bCreateOtherHalf_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh @ 14d262980

UFunction * __cdecl Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14d2629c0

void * __thiscall
IProceduralMeshComponentPlugin::_scalar_deleting_destructor_
          (IProceduralMeshComponentPlugin *this,uint param_1)

{
  *this = (IProceduralMeshComponentPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d262a20

void * __thiscall
FProceduralMeshComponentPlugin::_scalar_deleting_destructor_
          (FProceduralMeshComponentPlugin *this,uint param_1)

{
  *this = (FProceduralMeshComponentPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator<FPolygonGroupID,`anonymous_namespace'::FMeshSectionAttributeData>_TTuple<FPolygonGroupID,`anonymous_namespace'::FMeshSectionAttributeData> @ 14d262a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData> * __thiscall
TKeyInitializer<FPolygonGroupID_const_&>::
operator<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData>_TTuple<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData>
          (TKeyInitializer<FPolygonGroupID_const_&> *this,
          TTuple<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData>
          *__return_storage_ptr__)

{
  ulonglong uVar1;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [96];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_58.MaxBits = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_20 = 0;
  local_58.AllocatorInstance.InlineData[0] = '\0';
  local_58.AllocatorInstance.InlineData[1] = '\0';
  local_58.AllocatorInstance.InlineData[2] = '\0';
  local_58.AllocatorInstance.InlineData[3] = '\0';
  local_58.AllocatorInstance.InlineData[4] = '\0';
  local_58.AllocatorInstance.InlineData[5] = '\0';
  local_58.AllocatorInstance.InlineData[6] = '\0';
  local_58.AllocatorInstance.InlineData[7] = '\0';
  local_58.AllocatorInstance.InlineData[8] = '\0';
  local_58.AllocatorInstance.InlineData[9] = '\0';
  local_58.AllocatorInstance.InlineData[10] = '\0';
  local_58.AllocatorInstance.InlineData[0xb] = '\0';
  local_58.AllocatorInstance.InlineData[0xc] = '\0';
  local_58.AllocatorInstance.InlineData[0xd] = '\0';
  local_58.AllocatorInstance.InlineData[0xe] = '\0';
  local_58.AllocatorInstance.InlineData[0xf] = '\0';
  local_c8._8_4_ = 0;
  local_c8._12_4_ = 0;
  local_c8._16_8_ = (FScriptContainerElement *)0x0;
  local_c8._24_4_ = 0;
  local_c8._28_4_ = 0;
  local_c8._32_8_ = (FScriptContainerElement *)0x0;
  local_c8._40_4_ = 0;
  local_c8._44_4_ = 0;
  local_c8._48_8_ = (FScriptContainerElement *)0x0;
  local_c8._56_4_ = 0;
  local_c8._60_4_ = 0;
  local_c8._64_8_ = (FScriptContainerElement *)0x0;
  local_c8._72_4_ = 0;
  local_c8._76_4_ = 0;
  local_c8._80_8_ = (FScriptContainerElement *)0x0;
  local_c8._88_4_ = 0;
  local_c8._92_4_ = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  *(FPolygonGroupID *)__return_storage_ptr__ = *this->Key;
  _anon_769F2E2B::FMeshSectionAttributeData::FMeshSectionAttributeData
            ((FMeshSectionAttributeData *)&__return_storage_ptr__->field_0x8,
             (FMeshSectionAttributeData *)local_c8);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar1 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if ((FScriptContainerElement *)local_c8._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._80_8_);
  }
  if ((FScriptContainerElement *)local_c8._64_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._64_8_);
  }
  if ((FScriptContainerElement *)local_c8._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._48_8_);
  }
  if ((FScriptContainerElement *)local_c8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._32_8_);
  }
  if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._16_8_);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return __return_storage_ptr__;
}

// DefaultConstructItems<FProcMeshSection,int> @ 14d262c20

void __cdecl DefaultConstructItems<FProcMeshSection,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined1 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x45) = 0;
      *(undefined1 *)(lVar1 + 0x4d) = 1;
      lVar1 = lVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FProcMeshSection,int> @ 14d262ca0

void __cdecl DestructItems<FProcMeshSection,int>(FProcMeshSection *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ProcIndexBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ProcVertexBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`UProceduralMeshComponent::UpdateMeshSection'::__l49::TSTR_FProcMeshSectionUpdate756>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d2637e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UProceduralMeshComponent::UpdateMeshSection_::__l49::TSTR_FProcMeshSectionUpdate756>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UProceduralMeshComponent::UpdateMeshSection'::__l49::TSTR_FProcMeshSectionUpdate756>
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
      if (bVar8) goto LAB_14d263931;
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
    goto LAB_14d263b25;
  }
LAB_14d263931:
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
LAB_14d263a0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d263a0f;
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
LAB_14d263b25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::TSTR_FProcMeshSectionVisibilityUpdate800>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d263b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UProceduralMeshComponent::SetMeshSectionVisible_::__l8::TSTR_FProcMeshSectionVisibilityUpdate800>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::TSTR_FProcMeshSectionVisibilityUpdate800>
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
      if (bVar8) goto LAB_14d263cb1;
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
    goto LAB_14d263ea5;
  }
LAB_14d263cb1:
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
LAB_14d263d8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d263d8f;
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
LAB_14d263ea5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::TSTR_InitProceduralMeshRayTracingGeometry159>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d263ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy_::__l15::TSTR_InitProceduralMeshRayTracingGeometry159>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::TSTR_InitProceduralMeshRayTracingGeometry159>
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
      if (bVar8) goto LAB_14d264031;
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
    goto LAB_14d264225;
  }
LAB_14d264031:
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
LAB_14d26410f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d26410f;
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
LAB_14d264225:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<UKismetProceduralMeshLibrary> @ 14d264260

void __cdecl InternalConstructor<UKismetProceduralMeshLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UKismetProceduralMeshLibrary__6B_;
  }
  return;
}

// InternalConstructor<UProceduralMeshComponent> @ 14d264290

void __cdecl InternalConstructor<UProceduralMeshComponent>(FObjectInitializer *param_1)

{
  UMeshComponent *this;
  
  this = (UMeshComponent *)param_1->Obj;
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UProceduralMeshComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UProceduralMeshComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UProceduralMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UProceduralMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UProceduralMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UProceduralMeshComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = (longlong)&___7UProceduralMeshComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UKismetProceduralMeshLibrary> @ 14d264350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UKismetProceduralMeshLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UKismetProceduralMeshLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UKismetProceduralMeshLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProceduralMeshComponent> @ 14d264400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProceduralMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProceduralMeshComponent::GetPrivateStaticClass();
  this = (UMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UProceduralMeshComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UProceduralMeshComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UProceduralMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UProceduralMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UProceduralMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UProceduralMeshComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = (longlong)&___7UProceduralMeshComponent__6B_;
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

// MutableView<TObjectPtr<UProceduralMeshComponent>_> @ 14d264530

TMutableView<TObjectPtr<UProceduralMeshComponent>_> __cdecl
MutableView<TObjectPtr<UProceduralMeshComponent>_>(TObjectPtr<UProceduralMeshComponent> *param_1)

{
  TObjectPtr<UProceduralMeshComponent>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UProceduralMeshComponent>_>)(UProceduralMeshComponent **)param_1;
}

// NewObject<UProceduralMeshComponent> @ 14d264540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UProceduralMeshComponent * __cdecl NewObject<UProceduralMeshComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UProceduralMeshComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UProceduralMeshComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UProceduralMeshComponent *)
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

// ObjectPtrWrap<UProceduralMeshComponent_*,TObjectPtr<UProceduralMeshComponent>_> @ 14d2645e0

TObjectPtr<UProceduralMeshComponent> * __cdecl
ObjectPtrWrap<UProceduralMeshComponent_*,TObjectPtr<UProceduralMeshComponent>_>
          (UProceduralMeshComponent **param_1)

{
  return (TObjectPtr<UProceduralMeshComponent> *)param_1;
}

// StaticEnum<enum_EProcMeshSliceCapOption> @ 14d2645f0

UEnum * __cdecl StaticEnum<enum_EProcMeshSliceCapOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProcMeshSliceCapOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralMeshComponent();
    Z_Registration_Info_UEnum_EProcMeshSliceCapOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption,
                       (UObject *)pUVar1,L"EProcMeshSliceCapOption");
  }
  return Z_Registration_Info_UEnum_EProcMeshSliceCapOption.OuterSingleton;
}

// ~TFunction_OwnedObject<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::<lambda_1>,1,0> @ 14d265230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UProceduralMeshComponent::SetMeshSectionVisible_::__l8::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UProceduralMeshComponent::SetMeshSectionVisible'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UProceduralMeshComponent::UpdateMeshSection'::__l49::<lambda_1>,1,0> @ 14d265250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::UpdateMeshSection'::__l49::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UProceduralMeshComponent::UpdateMeshSection_::__l49::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UProceduralMeshComponent::UpdateMeshSection'::`49'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::<lambda_1>,1,1> @ 14d265270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FProceduralMeshSceneProxy::FProceduralMeshSceneProxy_::__l15::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__P____0FProceduralMeshSceneProxy__QEAA_PEAVUProceduralMeshComponent___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,`anonymous_namespace'::FMeshSectionAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14d265470

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,`anonymous_namespace'::FMeshSectionAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14d265f60

/* [thunk]:public: virtual void * __ptr64 __cdecl UProceduralMeshComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UProceduralMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UProceduralMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UProceduralMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14d265f74

/* [thunk]:public: virtual void * __ptr64 __cdecl UProceduralMeshComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UProceduralMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UProceduralMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UProceduralMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14d265f88

/* [thunk]:public: virtual void * __ptr64 __cdecl UProceduralMeshComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UProceduralMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UProceduralMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UProceduralMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d265f9c

/* [thunk]:public: virtual void * __ptr64 __cdecl UProceduralMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UProceduralMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UProceduralMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UProceduralMeshComponent *)
                      ((longlong)&this[-1].LocalBounds.BoxExtent.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1424}' @ 14d265fac

/* [thunk]:public: virtual void * __ptr64 __cdecl UProceduralMeshComponent::`vector deleting
   destructor'`adjustor{1424}' (unsigned int) __ptr64 */

void * __thiscall
UProceduralMeshComponent::_vector_deleting_destructor__adjustor_1424__
          (UProceduralMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UProceduralMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d265fc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d265ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UProceduralMeshComponent::SetMeshSectionVisible'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d266030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::UpdateMeshSection'::__l49::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UProceduralMeshComponent::UpdateMeshSection'::`49'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d266070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__P____0FProceduralMeshSceneProxy__QEAA_PEAVUProceduralMeshComponent___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d2660b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FProceduralMeshSceneProxy::_scalar_deleting_destructor_
          (FProceduralMeshSceneProxy *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  this->_padding_ = (longlong)&___7FProceduralMeshSceneProxy__6B_;
  pFVar4 = (this->Sections).AllocatorInstance.Data;
  local_res18 = (this->Sections).ArrayNum;
  uVar3 = (ulonglong)(int)local_res18;
  local_res20 = pFVar4 + uVar3 * 8;
  local_res10 = param_1;
  while( true ) {
    pFVar2 = local_res20;
    if ((this->Sections).ArrayNum != (int)uVar3) {
      `TCheckedPointerIterator<FProcMeshProxySection_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    pvVar1 = *(void **)pFVar4;
    if (pvVar1 != (void *)0x0) {
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0xc0) + 0x20))((longlong)pvVar1 + 0xc0);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 8) + 0x20))((longlong)pvVar1 + 8);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0x110) + 0x20))((longlong)pvVar1 + 0x110);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0x160) + 0x20))((longlong)pvVar1 + 0x160);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0x1a0) + 0x20))((longlong)pvVar1 + 0x1a0);
      (**(code **)(*(longlong *)((longlong)pvVar1 + 0x3d8) + 0x20))((longlong)pvVar1 + 0x3d8);
      FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)((longlong)pvVar1 + 0x3d8));
      FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)((longlong)pvVar1 + 0x1a0));
      FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32
                ((FDynamicMeshIndexBuffer32 *)((longlong)pvVar1 + 0x160));
      FColorVertexBuffer::~FColorVertexBuffer((FColorVertexBuffer *)((longlong)pvVar1 + 0x110));
      FPositionVertexBuffer::~FPositionVertexBuffer
                ((FPositionVertexBuffer *)((longlong)pvVar1 + 0xc0));
      FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
                ((FStaticMeshVertexBuffer *)((longlong)pvVar1 + 8));
      ::operator_delete(pvVar1,0x4d8);
    }
    uVar3 = (ulonglong)local_res18;
    pFVar4 = pFVar4 + 8;
  }
  pFVar4 = (this->Sections).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((local_res10 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d266260

void * __thiscall
UKismetProceduralMeshLibrary::_scalar_deleting_destructor_
          (UKismetProceduralMeshLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UKismetProceduralMeshLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14d2662c0

void * __thiscall
UProceduralMeshComponent::_scalar_deleting_destructor_(UProceduralMeshComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UProceduralMeshComponent__6B_;
  pFVar1 = (this->AsyncBodySetupQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)(this->CollisionConvexElems).AllocatorInstance.Data,
             (this->CollisionConvexElems).ArrayNum);
  pFVar1 = (this->CollisionConvexElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FProcMeshSection,int>
            ((FProcMeshSection *)(this->ProcMeshSections).AllocatorInstance.Data,
             (this->ProcMeshSections).ArrayNum);
  pFVar1 = (this->ProcMeshSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x610);
  }
  return this;
}

// BoxPlaneCompare @ 14d266640

int __cdecl BoxPlaneCompare(TBox<double> *param_1,TPlane<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  dVar1 = ((param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  dVar3 = ((param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  dVar5 = ((param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar2 = dVar1 * (double)param_2->_padding_;
  dVar4 = dVar3 * (double)param_2->_padding_;
  dVar6 = dVar5 * (double)param_2->_padding_;
  dVar2 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar1 = ((dVar5 + (param_1->Min).field0_0x0._s_0.Y) * (double)param_2->_padding_ +
           (dVar3 + (param_1->Min).field0_0x0._s_0.X) * (double)param_2->_padding_ +
          (dVar1 + (param_1->Min).field0_0x0._s_0.Z) * (double)param_2->_padding_) - param_2->W;
  if (dVar1 <= dVar2) {
    uVar8 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar9 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    iVar7 = ((double)CONCAT44(uVar9,uVar8) < dVar1 || (double)CONCAT44(uVar9,uVar8) == dVar1) - 1;
  }
  else {
    iVar7 = 1;
  }
  return iVar7;
}

// BuildMaterialMap @ 14d266740

TMap<UMaterialInterface_*,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,FPolygonGroupID,0>_>
* __cdecl BuildMaterialMap(TMap<UMaterialInterface_*,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,FPolygonGroupID,0>_>
                           *__return_storage_ptr__,UProceduralMeshComponent *param_1,
                          FMeshDescription *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  FMeshElementContainer *pFVar7;
  FAttributesSetEntry *pFVar8;
  TMap<UMaterialInterface_*,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,FPolygonGroupID,0>_>
  *pTVar9;
  int iVar10;
  undefined1 *puVar11;
  FMeshAttributeArraySetBase *pFVar12;
  uint uVar13;
  uint uVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  FMeshAttributeArraySetBase *pFVar17;
  uint *puVar18;
  FMeshAttributeArraySetBase *pFVar19;
  int local_res20 [2];
  UMaterial *local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int local_8c;
  TPairInitializer<UMaterialInterface_*_const_&,FPolygonGroupID_const_&> local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  UMaterial **local_58;
  int *local_50;
  
  pFVar19 = (FMeshAttributeArraySetBase *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar1 = (param_1->ProcMeshSections).ArrayNum;
  uVar15 = (ulong64)(int)uVar1;
  if (uVar1 == 0) goto LAB_14d2669dd;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar15);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar1);
  if (uVar1 < 4) {
    uVar13 = 1;
  }
  else {
    uVar16 = (ulonglong)((uVar1 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_90 = (undefined4)lVar2;
    uVar13 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 == 0) ||
     (*(int *)&__return_storage_ptr__->field_0x48 < (int)uVar13)) {
    *(uint *)&__return_storage_ptr__->field_0x48 = uVar13;
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
    }
    if (uVar13 != 0) {
      uVar14 = uVar13;
      if (uVar13 < 2) {
        if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
          uVar14 = 0;
          goto LAB_14d266822;
        }
      }
      else {
LAB_14d266822:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar14,4);
      }
      if (0 < (int)uVar13) {
        uVar16 = (ulonglong)uVar13;
        pFVar12 = pFVar19;
        do {
          puVar11 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar6 = (longlong)(int)uVar13 - 1U & (ulonglong)pFVar12;
          pFVar12 = (FMeshAttributeArraySetBase *)((longlong)&pFVar12->_padding_ + 1);
          *(undefined4 *)(puVar11 + uVar6 * 4) = 0xffffffff;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
      uVar13 = *(uint *)&__return_storage_ptr__->field_0x28;
      puStack_a8 = &__return_storage_ptr__->field_0x10;
      uStack_ac = 1;
      local_b0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      pFVar12 = pFVar19;
      if (uVar13 != 0) {
        puVar18 = *(uint **)&__return_storage_ptr__->field_0x20;
        if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
          puVar18 = (uint *)puStack_a8;
        }
        uVar14 = *puVar18;
        pFVar17 = pFVar19;
        while (uVar14 == 0) {
          uStack_98 = (int)pFVar17 + 0x20;
          pFVar17 = (FMeshAttributeArraySetBase *)(ulonglong)uStack_98;
          iVar10 = (int)pFVar12;
          local_b0 = iVar10 + 1;
          pFVar12 = (FMeshAttributeArraySetBase *)(ulonglong)local_b0;
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_b0)
          goto LAB_14d26690f;
          uVar14 = puVar18[(longlong)iVar10 + 1];
        }
        uStack_ac = -uVar14 & uVar14;
        uVar16 = (ulonglong)uStack_ac * 2 + 1;
        lVar2 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        local_8c = (int)lVar2;
        uStack_9c = local_8c + -1 + uStack_98;
        pFVar12 = (FMeshAttributeArraySetBase *)(ulonglong)uStack_9c;
        if ((int)uVar13 < (int)uStack_9c) {
LAB_14d26690f:
          pFVar12 = (FMeshAttributeArraySetBase *)(ulonglong)uVar13;
          uStack_9c = uVar13;
        }
      }
      local_a0 = 0xffffffff;
      local_78._padding_ = CONCAT44(uStack_ac,local_b0);
      local_78.CurrentBitIndex = uStack_9c;
      local_78.UnvisitedBitMask = 0xffffffff;
      local_78._28_4_ = uStack_94;
      local_78.BaseBitIndex = uStack_98;
      local_88.Value = (FPolygonGroupID *)__return_storage_ptr__;
      local_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_a8;
      if ((int)pFVar12 < (int)uVar13) {
        do {
          iVar10 = (int)pFVar12;
          lVar2 = *(longlong *)local_88.Value + (longlong)iVar10 * 0x18;
          uVar16 = *(ulonglong *)(*(longlong *)local_88.Value + (longlong)iVar10 * 0x18);
          uVar13 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          uVar13 = (uVar13 >> 0x10 ^ uVar13) & *(int *)&__return_storage_ptr__->field_0x48 - 1U;
          *(uint *)(lVar2 + 0x14) = uVar13;
          puVar11 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar16 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                   (longlong)(int)uVar13;
          *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar11 + uVar16 * 4);
          *(int *)(puVar11 + uVar16 * 4) = iVar10;
          local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
          pFVar12 = (FMeshAttributeArraySetBase *)(ulonglong)(uint)local_78.CurrentBitIndex;
        } while (local_78.CurrentBitIndex < (local_78.Array)->NumBits);
      }
    }
  }
  uVar15 = (ulong64)uVar1;
LAB_14d2669dd:
  pFVar7 = FMeshElementChannels::Get(param_2->PolygonGroupElements,0);
  pFVar8 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar7->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  if (((pFVar8 == (FAttributesSetEntry *)0x0) || (pFVar12 = (pFVar8->Ptr).Ptr, pFVar12->Type != 6))
     || (pFVar12->Extent != 1)) {
    pFVar12 = pFVar19;
  }
  if (0 < (int)uVar15) {
    do {
      iVar10 = (int)pFVar19;
      if (((iVar10 < (param_1->ProcMeshSections).ArrayNum) && (iVar10 < 0)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TMap<UMaterialInterface_*,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,FPolygonGroupID,0>_>
                  *)(*pcVar3)();
        return pTVar9;
      }
      local_b8 = (UMaterial *)(**(code **)(param_1->_padding_ + 0x690))();
      if (local_b8 == (UMaterial *)0x0) {
        local_b8 = UMaterial::GetDefaultMaterial(MD_Surface);
      }
      uVar13 = ((uint)((ulonglong)local_b8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_b8 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      if (*(int *)&__return_storage_ptr__->field_0x8 != *(int *)&__return_storage_ptr__->field_0x34)
      {
        puVar11 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        iVar5 = *(int *)(puVar11 +
                        (ulonglong)
                        (*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                        (uVar13 >> 0x10 ^ uVar13)) * 4);
        if (iVar5 != -1) {
          do {
            if (*(UMaterial **)(*(longlong *)__return_storage_ptr__ + (longlong)iVar5 * 0x18) ==
                local_b8) goto LAB_14d266c15;
            iVar5 = *(int *)(*(longlong *)__return_storage_ptr__ + 0x10 + (longlong)iVar5 * 0x18);
          } while (iVar5 != -1);
        }
      }
      pFVar7 = FMeshElementChannels::Get(param_2->PolygonGroupElements,0);
      local_res20[0] = FMeshElementContainer::Add(pFVar7);
      local_58 = &local_b8;
      local_50 = local_res20;
      TSet<TTuple<UMaterialInterface_*,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,FPolygonGroupID,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UMaterialInterface_*_const_&,FPolygonGroupID_const_&>_>
                ((TSet<TTuple<UMaterialInterface_*,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,FPolygonGroupID,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_88,(bool *)&local_58);
      iVar5 = local_res20[0];
      lVar2 = local_b8->_padding_;
      if (((int)pFVar12[2].Type < 1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TMap<UMaterialInterface_*,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,FPolygonGroupID,0>_>
                  *)(*pcVar3)();
        return pTVar9;
      }
      pFVar19 = pFVar12 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar12[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar19 = (FMeshAttributeArraySetBase *)pFVar12[2]._padding_;
      }
      uVar14 = iVar5 * pFVar19->NumElements;
      uVar13 = 0;
      if ((int)uVar14 < (int)pFVar19->Type) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TMap<UMaterialInterface_*,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,FPolygonGroupID,0>_>
                  *)(*pcVar3)();
        return pTVar9;
      }
      uVar15 = (ulong64)uVar1;
      *(longlong *)(pFVar19->_padding_ + (longlong)(int)uVar14 * 8) = lVar2;
LAB_14d266c15:
      pFVar19 = (FMeshAttributeArraySetBase *)(ulonglong)(iVar10 + 1U);
    } while ((int)(iVar10 + 1U) < (int)uVar15);
  }
  return __return_storage_ptr__;
}

// BuildMeshDescription @ 14d266c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMeshDescription * __cdecl
BuildMeshDescription(FMeshDescription *__return_storage_ptr__,UProceduralMeshComponent *param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FVertexID FVar5;
  uint uVar6;
  TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  FPolygonGroupID FVar12;
  UProceduralMeshComponent *pUVar13;
  bool bVar14;
  uint uVar15;
  FPolygonID FVar16;
  FMeshElementContainer *pFVar17;
  FAttributesSetEntry *pFVar18;
  FProcMeshSection *pFVar19;
  FMeshElementContainer *pFVar20;
  UMaterial *pUVar21;
  FMeshDescription *pFVar22;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar23;
  TVector<float> *pTVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  ForElementType<FSetElementId> FVar30;
  FMeshAttributeArraySetBase *pFVar31;
  uint *puVar32;
  FScriptContainerElement *pFVar33;
  FScriptContainerElement *pFVar34;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this;
  int iVar35;
  uint uVar36;
  ulonglong uVar37;
  ForElementType<unsigned_int> FVar38;
  longlong lVar39;
  int iVar40;
  uint uVar41;
  FMeshAttributeArraySetBase *pFVar42;
  FMeshAttributeArraySetBase *pFVar43;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  FVertexInstanceID FVar44;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_02;
  undefined4 uVar45;
  undefined1 auStackY_3a8 [32];
  int local_358;
  FVertexInstanceID local_348 [2];
  FMeshAttributeArraySetBase *local_340;
  ulonglong local_338;
  uint local_330 [2];
  FMeshDescription *local_328;
  FPolygonGroupID local_320;
  FProcMeshSection *local_318;
  ForAnyElementType local_310;
  undefined8 local_308;
  longlong local_300;
  uint local_2f8;
  uint local_2f4;
  ForAnyElementType local_2f0;
  int local_2e8 [2];
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_2e0;
  FMeshAttributeArraySetBase *local_2d8;
  FMeshAttributeArraySetBase *local_2d0;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_2c8;
  undefined **local_2c0;
  FMeshDescription *local_2b8;
  UProceduralMeshComponent *local_2b0;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_2a8;
  int local_2a0 [2];
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *local_298;
  longlong local_290;
  int local_288;
  uint uStack_284;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_280;
  undefined4 local_278;
  int iStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  float local_268;
  float fStack_264;
  float local_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  TPairInitializer<int_const_&,FVertexInstanceID_const_&> local_238;
  int local_228;
  undefined4 local_224;
  TPairInitializer<int_const_&,FVertexID_const_&> local_220;
  undefined1 local_210 [20];
  int iStack_1fc;
  uint *local_1f0;
  int *local_1e8;
  uint *local_1e0;
  FVertexInstanceID *local_1d8;
  FVertexInstanceID *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TArrayView<FVertexInstanceID_const_,int> local_1b8;
  undefined1 local_1a8 [32];
  ForElementType<unsigned_int> local_188;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  FScriptContainerElement local_170 [8];
  ForAnyElementType local_168;
  uint local_160;
  TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
  local_158;
  undefined1 local_108 [72];
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_328 = __return_storage_ptr__;
  local_2b0 = param_1;
  FMeshDescription::FMeshDescription(__return_storage_ptr__);
  local_2c0 = &___7FStaticMeshAttributes__6B_;
  local_2b8 = __return_storage_ptr__;
  FStaticMeshAttributes::Register((FStaticMeshAttributes *)&local_2c0,false);
  pFVar17 = FMeshElementChannels::Get(local_2b8->PolygonGroupElements,0);
  TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
  ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
          *)&pFVar17->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  pFVar17 = FMeshElementChannels::Get(local_2b8->VertexElements,0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::Vertex::Position);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_2e0 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar18->Ptr).Ptr,
      *(uint *)&local_2e0->_padding_ != 1)) || (*(uint *)((longlong)&local_2e0->_padding_ + 4) != 1)
     ) {
    local_2e0 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  this = local_2e0;
  pFVar17 = FMeshElementChannels::Get(local_2b8->VertexInstanceElements,0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_2c8 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar18->Ptr).Ptr,
      *(uint *)&local_2c8->_padding_ != 1)) || (*(uint *)((longlong)&local_2c8->_padding_ + 4) != 1)
     ) {
    local_2c8 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  this_02 = local_2c8;
  pFVar17 = FMeshElementChannels::Get(local_2b8->VertexInstanceElements,0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_2d0 = (pFVar18->Ptr).Ptr, local_2d0->Type != 3)) || (local_2d0->Extent != 1)) {
    local_2d0 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar31 = local_2d0;
  pFVar17 = FMeshElementChannels::Get(local_2b8->VertexInstanceElements,0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_2a8 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar18->Ptr).Ptr,
      *(uint *)&local_2a8->_padding_ != 1)) || (*(uint *)((longlong)&local_2a8->_padding_ + 4) != 1)
     ) {
    local_2a8 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  this_01 = local_2a8;
  pFVar17 = FMeshElementChannels::Get(local_2b8->VertexInstanceElements,0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::Color);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_2d8 = (pFVar18->Ptr).Ptr, local_2d8->Type != 0)) || (local_2d8->Extent != 1)) {
    local_2d8 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar43 = local_2d8;
  pFVar17 = FMeshElementChannels::Get(local_2b8->VertexInstanceElements,0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_298 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar18->Ptr).Ptr,
      *(uint *)&local_298->_padding_ != 2)) || (*(uint *)((longlong)&local_298->_padding_ + 4) != 1)
     ) {
    local_298 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  this_00 = local_298;
  uVar36 = (param_1->ProcMeshSections).ArrayNum;
  local_348[0] = (FVertexInstanceID)0x0;
  local_330[0] = 0;
  local_358 = 0;
  BuildMaterialMap((TMap<UMaterialInterface_*,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,FPolygonGroupID,0>_>
                    *)local_108,local_2b0,local_328);
  local_310.Data = (FScriptContainerElement *)0x0;
  local_308 = 0;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
  }
  FVar44 = local_348[0];
  uVar41 = local_330[0];
  if (0 < (int)uVar36) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar36,&local_310,0,(int *)((longlong)&local_308 + 4));
    pUVar13 = local_2b0;
    iVar35 = 0;
    local_358 = 0;
    FVar44 = (FVertexInstanceID)0x0;
    uVar41 = 0;
    do {
      pFVar19 = UProceduralMeshComponent::GetProcMeshSection(pUVar13,iVar35);
      iVar35 = iVar35 + 1;
      FVar44 = (FVertexInstanceID)((int)FVar44 + (pFVar19->ProcVertexBuffer).ArrayNum);
      iVar40 = (pFVar19->ProcIndexBuffer).ArrayNum;
      uVar41 = uVar41 + iVar40;
      local_358 = local_358 +
                  iVar40 / 3 + (iVar40 >> 0x1f) +
                  (int)(((longlong)iVar40 / 3 + ((longlong)iVar40 >> 0x3f) & 0xffffffffU) >> 0x1f);
      pFVar31 = local_2d0;
      this = local_2e0;
      pFVar43 = local_2d8;
      this_01 = local_2a8;
      this_02 = local_2c8;
    } while (iVar35 < (int)uVar36);
  }
  local_330[0] = uVar41;
  local_348[0] = FVar44;
  pFVar17 = FMeshElementChannels::Get(local_328->VertexElements,0);
  pFVar20 = FMeshElementChannels::Get(local_328->VertexElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar17->BitArray,
             ((pFVar20->BitArray).NumBits - pFVar20->NumHoles) + (int)local_348[0]);
  pFVar17 = FMeshElementChannels::Get(local_328->VertexInstanceElements,0);
  pFVar20 = FMeshElementChannels::Get(local_328->VertexInstanceElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar17->BitArray,((pFVar20->BitArray).NumBits - pFVar20->NumHoles) + local_330[0]);
  pFVar17 = FMeshElementChannels::Get(local_328->PolygonElements,0);
  pFVar20 = FMeshElementChannels::Get(local_328->PolygonElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar17->BitArray,((pFVar20->BitArray).NumBits - pFVar20->NumHoles) + local_358);
  pFVar17 = FMeshElementChannels::Get(local_328->EdgeElements,0);
  pFVar20 = FMeshElementChannels::Get(local_328->EdgeElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar17->BitArray,((pFVar20->BitArray).NumBits - pFVar20->NumHoles) + local_358 * 2);
  TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(this_00,4);
  pUVar13 = local_2b0;
  local_320 = (FPolygonGroupID)0x0;
  if (0 < (int)uVar36) {
    pFVar34 = (FScriptContainerElement *)0x0;
    do {
      FVar12 = local_320;
      UProceduralMeshComponent::GetProcMeshSection(pUVar13,(int)local_320);
      pUVar21 = (UMaterial *)(**(code **)(pUVar13->_padding_ + 0x690))(pUVar13,FVar12);
      if (pUVar21 == (UMaterial *)0x0) {
        pUVar21 = UMaterial::GetDefaultMaterial(MD_Surface);
      }
      uVar41 = ((uint)((ulonglong)pUVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar21 >> 4)) *
               -0x7a143595;
      uVar41 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
      pFVar33 = pFVar34;
      if (local_108._8_4_ != local_108._52_4_) {
        puVar27 = local_108 + 0x38;
        if ((undefined1 *)local_108._64_8_ != (undefined1 *)0x0) {
          puVar27 = (undefined1 *)local_108._64_8_;
        }
        iVar35 = *(int *)(puVar27 + (ulonglong)(local_c0 - 1U & (uVar41 >> 0x10 ^ uVar41)) * 4);
        while (iVar35 != -1) {
          lVar29 = local_108._0_8_ + (longlong)iVar35 * 0x18;
          if (*(UMaterial **)(local_108._0_8_ + (longlong)iVar35 * 0x18) == pUVar21) {
            pFVar33 = (FScriptContainerElement *)(lVar29 + 8);
            if (lVar29 == 0) {
              pFVar33 = pFVar34;
            }
            if (pFVar33 != (FScriptContainerElement *)0x0) goto LAB_14d267105;
            break;
          }
          iVar35 = *(int *)(lVar29 + 0x10);
        }
      }
      bVar14 = FDebug::CheckVerifyFailedImpl2
                         ("PolygonGroupID != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshConversion.cpp"
                          ,0x9e,L"");
      if (bVar14) {
        pcVar8 = (code *)swi(3);
        pFVar22 = (FMeshDescription *)(*pcVar8)();
        return pFVar22;
      }
LAB_14d267105:
      if (((local_310.Data <= pFVar33) && (pFVar33 < local_310.Data + (longlong)local_308._4_4_ * 4)
          ) && (bVar14 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
        pcVar8 = (code *)swi(3);
        pFVar22 = (FMeshDescription *)(*pcVar8)();
        return pFVar22;
      }
      iVar35 = (int)local_308;
      if ((int)local_308 == local_308._4_4_) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_310,(int *)((longlong)&local_308 + 4));
      }
      local_308 = CONCAT44(local_308._4_4_,iVar35 + 1);
      local_320 = (FPolygonGroupID)((int)local_320 + 1);
      *(undefined4 *)(local_310.Data + (longlong)iVar35 * 4) = *(undefined4 *)pFVar33;
      pFVar31 = local_2d0;
      this = local_2e0;
      pFVar43 = local_2d8;
    } while ((int)local_320 < (int)uVar36);
  }
  fVar11 = __real_3b808081;
  uVar10 = __real_bf800000;
  uVar9 = __real_3f800000;
  local_2f4 = 0;
  if (0 < (int)uVar36) {
    local_238.Value = (FVertexInstanceID *)(longlong)(int)uVar36;
    local_290 = 0;
    do {
      uVar36 = local_2f4;
      local_318 = UProceduralMeshComponent::GetProcMeshSection(local_2b0,local_2f4);
      uVar41 = 0;
      if ((int)uVar36 < (int)local_308) {
        uVar41 = ~uVar36 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pFVar22 = (FMeshDescription *)(*pcVar8)();
        return pFVar22;
      }
      local_320 = *(FPolygonGroupID *)(local_310.Data + local_290 * 4);
      uVar36 = (local_318->ProcVertexBuffer).ArrayNum;
      local_158.Elements._0_8_ = 0;
      local_158.Elements._8_8_ = 0;
      local_158.Elements._32_8_ = 0;
      local_158.Elements._40_4_ = 0;
      local_158.Elements._52_4_ = 0;
      local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_158.HashSize = 0;
      local_158.Elements._44_4_ = 0x80;
      local_158.Elements._48_4_ = 0xffffffff;
      TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
      ::Reserve(&local_158,uVar36);
      pFVar19 = local_318;
      pFVar22 = local_328;
      local_330[0] = 0;
      if (0 < (int)uVar36) {
        do {
          uVar41 = local_330[0];
          uVar15 = 0;
          if ((int)local_330[0] < (pFVar19->ProcVertexBuffer).ArrayNum) {
            uVar15 = ~local_330[0] >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          local_300 = (longlong)(int)uVar41 * 0x98;
          local_340 = (FMeshAttributeArraySetBase *)
                      (pFVar19->ProcVertexBuffer).AllocatorInstance.Data;
          pFVar17 = FMeshElementChannels::Get(pFVar22->VertexElements,0);
          local_2a0[0] = FMeshElementContainer::Add(pFVar17);
          local_338 = CONCAT44(local_338._4_4_,local_2a0[0]);
          dVar2 = *(double *)((longlong)local_340 + local_300);
          dVar3 = *(double *)((longlong)local_340 + local_300 + 8);
          dVar4 = *(double *)((longlong)local_340 + local_300 + 0x10);
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
          pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar23,(uint)local_338);
          (pTVar24->field0_0x0)._s_0.X = (float)dVar2;
          (pTVar24->field0_0x0)._s_0.Y = (float)dVar3;
          (pTVar24->field0_0x0)._s_0.Z = (float)dVar4;
          local_1f0 = local_330;
          local_1e8 = local_2a0;
          TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,FVertexID_const_&>_>
                    (&local_158,&local_220,(bool *)&local_1f0);
          local_330[0] = local_330[0] + 1;
          pFVar31 = local_2d0;
          this_00 = local_298;
          this_01 = local_2a8;
          this_02 = local_2c8;
        } while ((int)local_330[0] < (int)uVar36);
      }
      iVar35 = (local_318->ProcIndexBuffer).ArrayNum;
      local_1a8._0_8_ = (FScriptContainerElement *)0x0;
      local_1a8._8_8_ = 0;
      local_300 = CONCAT44(local_300._4_4_,
                           (int)(((longlong)iVar35 / 3 + ((longlong)iVar35 >> 0x3f) & 0xffffffffU)
                                >> 0x1f) + iVar35 / 3 + (iVar35 >> 0x1f));
      local_188 = (ForElementType<unsigned_int>)0x0;
      local_180 = 0;
      local_17c = 0x80;
      local_178 = -1;
      local_174 = 0;
      local_168.Data = (FScriptContainerElement *)0x0;
      local_160 = 0;
      if (uVar36 != 0) {
        if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar36);
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_1a8,uVar36);
        uVar41 = 1;
        if (3 < uVar36) {
          uVar28 = (ulonglong)((uVar36 >> 1) + 7) * 2 + 1;
          lVar29 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          local_224 = (undefined4)lVar29;
          uVar41 = 1 << ((byte)lVar29 & 0x1f);
        }
        if ((local_160 == 0) || ((int)local_160 < (int)uVar41)) {
          local_160 = uVar41;
          if (local_168.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,0,4);
          }
          if (uVar41 != 0) {
            uVar36 = uVar41;
            if (uVar41 < 2) {
              if (local_168.Data != (FScriptContainerElement *)0x0) {
                uVar36 = 0;
                goto LAB_14d267541;
              }
            }
            else {
LAB_14d267541:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_168,0,uVar36,4);
            }
            if (0 < (int)uVar41) {
              uVar37 = (ulonglong)uVar41;
              uVar28 = 0;
              do {
                FVar26.Data = local_170;
                if (local_168.Data != (FScriptContainerElement *)0x0) {
                  FVar26.Data = local_168.Data;
                }
                uVar25 = uVar28 & (longlong)(int)uVar41 - 1U;
                uVar28 = uVar28 + 1;
                *(undefined4 *)(FVar26.Data + uVar25 * 4) = 0xffffffff;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
          }
          if (local_160 != 0) {
            pTStack_280 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
            local_288 = 0;
            uStack_284 = 1;
            iStack_274 = 0;
            iStack_270 = 0;
            if (local_180 != 0) {
              FVar38 = (ForElementType<unsigned_int>)((longlong)local_1a8 + 0x10);
              if (local_188 != (ForElementType<unsigned_int>)0x0) {
                FVar38 = local_188;
              }
              uVar36 = *(uint *)FVar38;
              while (uVar36 == 0) {
                iStack_270 = iStack_270 + 0x20;
                lVar29 = (longlong)local_288;
                local_288 = local_288 + 1;
                if ((int)(local_180 + -1 + (local_180 + -1 >> 0x1f & 0x1fU)) >> 5 < local_288)
                goto LAB_14d267680;
                uVar36 = ((uint *)((longlong)FVar38 + 4))[lVar29];
              }
              uStack_284 = -uVar36 & uVar36;
              uVar28 = (ulonglong)uStack_284 * 2 + 1;
              lVar29 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                }
              }
              local_228 = (int)lVar29;
              iStack_274 = local_228 + -1 + iStack_270;
              if (local_180 < iStack_274) {
LAB_14d267680:
                iStack_274 = local_180;
              }
            }
            local_278 = 0xffffffff;
            local_220.Value = (FVertexID *)local_1a8;
            local_210._0_8_ = CONCAT44(uStack_284,local_288);
            iStack_1fc = iStack_274;
            local_210._16_4_ = 0xffffffff;
            unique0x100010b4 = iStack_270;
            unique0x100010b8 = uStack_26c;
            local_210._8_8_ = pTStack_280;
            iVar40 = iStack_274;
            if (iStack_274 < local_180) {
              do {
                lVar29 = *(longlong *)local_220.Value;
                lVar39 = (longlong)iVar40 * 0x10;
                uVar36 = local_160 - 1 & *(uint *)(lVar39 + lVar29);
                *(uint *)(lVar39 + 0xc + lVar29) = uVar36;
                FVar26.Data = local_170;
                if (local_168.Data != (FScriptContainerElement *)0x0) {
                  FVar26.Data = local_168.Data;
                }
                uVar28 = (longlong)(int)local_160 - 1U & (longlong)(int)uVar36;
                *(undefined4 *)(lVar39 + 8 + lVar29) = *(undefined4 *)(FVar26.Data + uVar28 * 4);
                *(int *)(FVar26.Data + uVar28 * 4) = iVar40;
                local_210._16_4_ = local_210._16_4_ & ~local_210._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_210);
                iVar40 = iStack_1fc;
              } while (iStack_1fc < *(int *)(local_210._8_8_ + 0x18));
            }
          }
        }
      }
      local_2f8 = 0;
      pFVar42 = pFVar43;
      if (0 < iVar35) {
        local_340 = pFVar31 + 1;
        do {
          uVar36 = local_2f8;
          uVar41 = 0;
          if ((int)local_2f8 < (local_318->ProcIndexBuffer).ArrayNum) {
            uVar41 = ~local_2f8 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          uVar36 = *(uint *)((local_318->ProcIndexBuffer).AllocatorInstance.Data +
                            (longlong)(int)uVar36 * 4);
          local_338 = CONCAT44(local_338._4_4_,uVar36);
          puVar32 = (uint *)0x0;
          if (local_158.Elements._8_4_ != local_158.Elements._52_4_) {
            FVar30 = (ForElementType<FSetElementId>)&local_158.Hash;
            if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar30 = local_158.Hash.SecondaryData;
            }
            uVar41 = *(uint *)((longlong)FVar30 + (ulonglong)(local_158.HashSize - 1U & uVar36) * 4)
            ;
            while (puVar32 = (uint *)0x0, uVar41 != 0xffffffff) {
              puVar32 = (uint *)((longlong)(int)uVar41 * 0x10 + local_158.Elements._0_8_);
              if (*puVar32 == uVar36) {
                if (puVar32 != (uint *)0x0) goto LAB_14d267854;
                break;
              }
              uVar41 = puVar32[2];
            }
          }
          bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar14) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
LAB_14d267854:
          FVar5 = *(FVertexID *)(puVar32 + 1);
          pFVar17 = FMeshElementChannels::Get(local_328->VertexInstanceElements,0);
          local_348[0] = (FVertexInstanceID)FMeshElementContainer::Add(pFVar17);
          FMeshDescription::CreateVertexInstance_Internal(local_328,local_348[0],FVar5);
          local_1e0 = &local_2f8;
          local_1d8 = local_348;
          TSet<TTuple<int,FVertexInstanceID>,TDefaultMapHashableKeyFuncs<int,FVertexInstanceID,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,FVertexInstanceID_const_&>_>
                    ((TSet<TTuple<int,FVertexInstanceID>,TDefaultMapHashableKeyFuncs<int,FVertexInstanceID,0>,FDefaultSetAllocator>
                      *)local_1a8,&local_238,(bool *)&local_1e0);
          lVar29 = (longlong)(int)(uint)local_338;
          uVar36 = 0;
          if ((int)(uint)local_338 < (local_318->ProcVertexBuffer).ArrayNum) {
            uVar36 = ~(uint)local_338 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          FVar44 = local_348[0];
          local_338 = lVar29 * 0x98;
          pFVar34 = (local_318->ProcVertexBuffer).AllocatorInstance.Data;
          dVar2 = *(double *)(pFVar34 + local_338 + 0x30);
          dVar3 = *(double *)(pFVar34 + local_338 + 0x38);
          dVar4 = *(double *)(pFVar34 + local_338 + 0x40);
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0)
          ;
          pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar23,(int)FVar44);
          FVar44 = local_348[0];
          (pTVar24->field0_0x0)._s_0.X = (float)dVar2;
          (pTVar24->field0_0x0)._s_0.Y = (float)dVar3;
          (pTVar24->field0_0x0)._s_0.Z = (float)dVar4;
          dVar2 = *(double *)(pFVar34 + local_338 + 0x18);
          dVar3 = *(double *)(pFVar34 + local_338 + 0x20);
          dVar4 = *(double *)(pFVar34 + local_338 + 0x28);
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0)
          ;
          pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar23,(int)FVar44);
          FVar44 = local_348[0];
          (pTVar24->field0_0x0)._s_0.X = (float)dVar2;
          (pTVar24->field0_0x0)._s_0.Y = (float)dVar3;
          (pTVar24->field0_0x0)._s_0.Z = (float)dVar4;
          uVar45 = uVar9;
          if (pFVar34[local_338 + 0x48] != (FScriptContainerElement)0x0) {
            uVar45 = uVar10;
          }
          if (((int)pFVar31[2].Type < 1) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          local_340 = pFVar31 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar31[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            local_340 = (FMeshAttributeArraySetBase *)pFVar31[2]._padding_;
          }
          uVar41 = (int)FVar44 * local_340->NumElements;
          uVar36 = 0;
          if ((int)uVar41 < (int)local_340->Type) {
            uVar36 = ~uVar41 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          FVar44 = local_348[0];
          *(undefined4 *)(local_340->_padding_ + (longlong)(int)uVar41 * 4) = uVar45;
          local_248 = FLinearColor::sRGBToLinearTable[(byte)pFVar34[local_338 + 0x52]];
          fStack_244 = FLinearColor::sRGBToLinearTable[(byte)pFVar34[local_338 + 0x51]];
          fStack_240 = FLinearColor::sRGBToLinearTable[(byte)pFVar34[local_338 + 0x50]];
          fStack_23c = (float)(byte)pFVar34[local_338 + 0x53] * fVar11;
          if (((int)pFVar43[2].Type < 1) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          local_340 = pFVar43 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar43[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            local_340 = (FMeshAttributeArraySetBase *)pFVar43[2]._padding_;
          }
          uVar41 = (int)FVar44 * local_340->NumElements;
          uVar36 = 0;
          if ((int)uVar41 < (int)local_340->Type) {
            uVar36 = ~uVar41 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          FVar44 = local_348[0];
          puVar1 = (undefined8 *)(local_340->_padding_ + (longlong)(int)uVar41 * 0x10);
          *puVar1 = CONCAT44(fStack_244,local_248);
          puVar1[1] = CONCAT44(fStack_23c,fStack_240);
          local_268 = (float)*(double *)(pFVar34 + local_338 + 0x58);
          fStack_264 = (float)*(double *)(pFVar34 + local_338 + 0x60);
          if (((this_00->ArrayForChannels).ArrayNum < 1) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          pTVar7 = *(TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     **)&(this_00->ArrayForChannels).AllocatorInstance.SecondaryData.field_0x0;
          local_340 = (FMeshAttributeArraySetBase *)&this_00->ArrayForChannels;
          if (pTVar7 != (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                         *)0x0) {
            local_340 = (FMeshAttributeArraySetBase *)pTVar7;
          }
          uVar41 = (int)FVar44 *
                   *(int *)((((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                               *)local_340)->AllocatorInstance).InlineData + 0x10);
          uVar36 = 0;
          if ((int)uVar41 <
              *(int *)((((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                          *)local_340)->AllocatorInstance).InlineData + 8)) {
            uVar36 = ~uVar41 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          FVar44 = local_348[0];
          *(ulonglong *)
           (*(longlong *)
             ((ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> *)
             &local_340->_padding_)->InlineData + (longlong)(int)uVar41 * 8) =
               CONCAT44(fStack_264,local_268);
          local_260 = (float)*(double *)(pFVar34 + local_338 + 0x68);
          fStack_25c = (float)*(double *)(pFVar34 + local_338 + 0x70);
          if (((this_00->ArrayForChannels).ArrayNum < 2) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          pTVar7 = *(TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     **)&(this_00->ArrayForChannels).AllocatorInstance.SecondaryData.field_0x0;
          local_340 = (FMeshAttributeArraySetBase *)&this_00->ArrayForChannels;
          if (pTVar7 != (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                         *)0x0) {
            local_340 = (FMeshAttributeArraySetBase *)pTVar7;
          }
          uVar41 = (int)FVar44 *
                   *(int *)&((TVector2<float> *)((longlong)local_340 + 0x28))->field0_0x0;
          uVar36 = 0;
          if ((int)uVar41 <
              ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)local_340)->ArrayNum) {
            uVar36 = ~uVar41 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          FVar44 = local_348[0];
          *(ulonglong *)
           (*(longlong *)
             &(((ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> *)
               &local_340->_padding_)->SecondaryData).field_0x0 + (longlong)(int)uVar41 * 8) =
               CONCAT44(fStack_25c,local_260);
          local_258 = (float)*(double *)(pFVar34 + local_338 + 0x78);
          fStack_254 = (float)*(double *)(pFVar34 + local_338 + 0x80);
          if (((this_00->ArrayForChannels).ArrayNum < 3) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          pTVar7 = *(TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     **)&(this_00->ArrayForChannels).AllocatorInstance.SecondaryData.field_0x0;
          local_340 = (FMeshAttributeArraySetBase *)&this_00->ArrayForChannels;
          if (pTVar7 != (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                         *)0x0) {
            local_340 = (FMeshAttributeArraySetBase *)pTVar7;
          }
          uVar41 = (int)FVar44 * *(int *)((TVector2<float> *)((longlong)local_340 + 0x28) + 3);
          uVar36 = 0;
          if ((int)uVar41 < *(int *)((TVector2<float> *)((longlong)local_340 + 0x28) + 2)) {
            uVar36 = ~uVar41 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          FVar44 = local_348[0];
          *(ulonglong *)
           (*(longlong *)((TVector2<float> *)((longlong)local_340 + 0x28) + 1) +
           (longlong)(int)uVar41 * 8) = CONCAT44(fStack_254,local_258);
          local_250 = (float)*(double *)(pFVar34 + local_338 + 0x88);
          fStack_24c = (float)*(double *)(pFVar34 + local_338 + 0x90);
          if (((this_00->ArrayForChannels).ArrayNum < 4) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          pFVar42 = *(FMeshAttributeArraySetBase **)
                     &(this_00->ArrayForChannels).AllocatorInstance.SecondaryData.field_0x0;
          local_340 = (FMeshAttributeArraySetBase *)&this_00->ArrayForChannels;
          if (pFVar42 != (FMeshAttributeArraySetBase *)0x0) {
            local_340 = pFVar42;
          }
          uVar41 = (int)FVar44 * local_340[3].NumElements;
          uVar36 = 0;
          if ((int)uVar41 < (int)local_340[3].Type) {
            uVar36 = ~uVar41 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          *(ulonglong *)(local_340[3]._padding_ + (longlong)(int)uVar41 * 8) =
               CONCAT44(fStack_24c,local_250);
          local_2f8 = local_2f8 + 1;
          this = local_2e0;
          pFVar42 = local_2d8;
        } while ((int)local_2f8 < iVar35);
      }
      uVar36 = 0;
      local_340 = (FMeshAttributeArraySetBase *)(longlong)(int)local_300;
      pFVar43 = pFVar42;
      if (0 < (longlong)local_340) {
        local_338 = local_338 & 0xffffffff00000000;
        lVar29 = -(longlong)&local_b8;
        uVar41 = uVar36;
        do {
          local_b8 = 0xffffffffffffffff;
          local_b0 = 0xffffffff;
          local_2f0.Data = (FScriptContainerElement *)0x0;
          local_2e8[0] = 0;
          local_2e8[1] = 0;
          iVar35 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,3,&local_2f0,local_2e8,local_2e8 + 1);
          DefaultConstructItems<FVertexInstanceID,int>(local_2f0.Data + (longlong)iVar35 * 4,3);
          pFVar19 = local_318;
          local_300 = 0;
          pFVar34 = (FScriptContainerElement *)0x0;
          do {
            lVar39 = local_300;
            uVar15 = 0;
            if ((int)uVar36 < (pFVar19->ProcIndexBuffer).ArrayNum) {
              uVar15 = ~uVar36 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar14 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              pFVar22 = (FMeshDescription *)(*pcVar8)();
              return pFVar22;
            }
            uVar15 = *(uint *)((longlong)&local_b8 +
                              (longlong)
                              ((pFVar19->ProcIndexBuffer).AllocatorInstance.Data + lVar29 + lVar39))
            ;
            pFVar33 = pFVar34;
            if (local_158.Elements._8_4_ != local_158.Elements._52_4_) {
              FVar30 = (ForElementType<FSetElementId>)&local_158.Hash;
              if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar30 = local_158.Hash.SecondaryData;
              }
              uVar6 = *(uint *)((longlong)FVar30 + (ulonglong)(local_158.HashSize - 1U & uVar15) * 4
                               );
              while (pFVar33 = pFVar34, uVar6 != 0xffffffff) {
                pFVar33 = (FScriptContainerElement *)
                          ((longlong)(int)uVar6 * 0x10 + local_158.Elements._0_8_);
                if (*(uint *)pFVar33 == uVar15) {
                  if (pFVar33 != (FScriptContainerElement *)0x0) goto LAB_14d2680e4;
                  break;
                }
                uVar6 = *(uint *)(pFVar33 + 8);
              }
            }
            bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L"");
            if (bVar14) {
              pcVar8 = (code *)swi(3);
              pFVar22 = (FMeshDescription *)(*pcVar8)();
              return pFVar22;
            }
LAB_14d2680e4:
            *(uint *)((longlong)&local_b8 + local_300) = *(uint *)(pFVar33 + 4);
            pFVar33 = pFVar34;
            if (local_1a8._8_4_ != local_174) {
              FVar26.Data = local_170;
              if (local_168.Data != (FScriptContainerElement *)0x0) {
                FVar26.Data = local_168.Data;
              }
              uVar15 = *(uint *)(FVar26.Data + (ulonglong)(local_160 - 1 & uVar36) * 4);
              while (pFVar33 = pFVar34, uVar15 != 0xffffffff) {
                pFVar33 = (FScriptContainerElement *)
                          (local_1a8._0_8_ + (longlong)(int)uVar15 * 0x10);
                if (*(uint *)pFVar33 == uVar36) {
                  if (pFVar33 != (FScriptContainerElement *)0x0) goto LAB_14d268189;
                  break;
                }
                uVar15 = *(uint *)(pFVar33 + 8);
              }
            }
            bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L"");
            if (bVar14) {
              pcVar8 = (code *)swi(3);
              pFVar22 = (FMeshDescription *)(*pcVar8)();
              return pFVar22;
            }
LAB_14d268189:
            uVar15 = *(uint *)(pFVar33 + 4);
            if ((local_2e8[0] <= (int)(uVar36 + uVar41)) &&
               (bVar14 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              pFVar22 = (FMeshDescription *)(*pcVar8)();
              return pFVar22;
            }
            FVar12 = local_320;
            uVar36 = uVar36 + 1;
            *(uint *)(local_2f0.Data + local_300) = uVar15;
            local_300 = local_300 + 4;
          } while ((int)(uVar36 + uVar41) < 3);
          iVar35 = local_2e8[0];
          local_1c8 = (FVertexInstanceID *)local_2f0.Data;
          if ((local_2e8[0] < 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            pFVar22 = (FMeshDescription *)(*pcVar8)();
            return pFVar22;
          }
          pFVar22 = local_328;
          iStack_1c0 = iVar35;
          pFVar17 = FMeshElementChannels::Get(local_328->PolygonElements,0);
          FVar16 = (FPolygonID)FMeshElementContainer::Add(pFVar17);
          local_1b8._12_4_ = uStack_1bc;
          local_1b8.ArrayNum = iStack_1c0;
          local_1b8.DataPtr = local_1c8;
          FMeshDescription::CreatePolygon_Internal
                    (pFVar22,FVar16,FVar12,&local_1b8,
                     (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0);
          if (local_2f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data);
          }
          uVar41 = uVar41 - 3;
          lVar29 = lVar29 + 0xc;
          local_340 = (FMeshAttributeArraySetBase *)((longlong)local_340 + -1);
          uVar36 = (uint)local_338 + 3;
          local_338 = CONCAT44(local_338._4_4_,uVar36);
        } while (local_340 != (FMeshAttributeArraySetBase *)0x0);
        local_340 = (FMeshAttributeArraySetBase *)0x0;
        this = local_2e0;
        pFVar43 = local_2d8;
        this_00 = local_298;
        this_01 = local_2a8;
        this_02 = local_2c8;
      }
      local_160 = 0;
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FVertexInstanceID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FVertexInstanceID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FVertexInstanceID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1a8);
      local_158.HashSize = 0;
      if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_158.Elements);
      local_290 = local_290 + 1;
      local_2f4 = local_2f4 + 1;
      pFVar31 = local_2d0;
    } while (local_290 < (longlong)local_238.Value);
  }
  if (local_310.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data);
  }
  local_c0 = 0;
  if ((undefined1 *)local_108._64_8_ != (undefined1 *)0x0) {
    FMemory::Free((void *)local_108._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  return local_328;
}

// ConvertProcMeshToDynMeshVertex @ 14d26a9c0

void __cdecl ConvertProcMeshToDynMeshVertex(FDynamicMeshVertex *param_1,FProcMeshVertex *param_2)

{
  double dVar1;
  double dVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float> TVar4;
  TVector2<float> TVar5;
  TVector2<float> TVar6;
  schar sVar7;
  
  dVar1 = (param_2->Position).field0_0x0._s_0.Y;
  dVar2 = (param_2->Position).field0_0x0._s_0.Z;
  (param_1->Position).field0_0x0._s_0.X = (float)(param_2->Position).field0_0x0._s_0.X;
  (param_1->Position).field0_0x0._s_0.Y = (float)dVar1;
  (param_1->Position).field0_0x0._s_0.Z = (float)dVar2;
  (param_1->Color).field0_0x0 = (param_2->Color).field0_0x0;
  TVar3._s_0.Y = (float)(param_2->UV0).field0_0x0._s_0.Y;
  TVar3._s_0.X = (float)(param_2->UV0).field0_0x0._s_0.X;
  param_1->TextureCoordinate[0].field0_0x0 = TVar3;
  TVar4.field0_0x0._s_0.Y = (float)(param_2->UV1).field0_0x0._s_0.Y;
  TVar4.field0_0x0._s_0.X = (float)(param_2->UV1).field0_0x0._s_0.X;
  param_1->TextureCoordinate[1].field0_0x0 = TVar4.field0_0x0;
  TVar5.field0_0x0._s_0.Y = (float)(param_2->UV2).field0_0x0._s_0.Y;
  TVar5.field0_0x0._s_0.X = (float)(param_2->UV2).field0_0x0._s_0.X;
  param_1->TextureCoordinate[2].field0_0x0 = TVar5.field0_0x0;
  TVar6.field0_0x0._s_0.Y = (float)(param_2->UV3).field0_0x0._s_0.Y;
  TVar6.field0_0x0._s_0.X = (float)(param_2->UV3).field0_0x0._s_0.X;
  param_1->TextureCoordinate[3].field0_0x0 = TVar6.field0_0x0;
  FPackedNormal::operator=(&param_1->TangentX,&(param_2->Tangent).TangentX);
  FPackedNormal::operator=(&param_1->TangentZ,&param_2->Normal);
  sVar7 = '\x7f';
  if ((param_2->Tangent).bFlipTangentY != false) {
    sVar7 = -0x7f;
  }
  (param_1->TangentZ).Vector._s_0.W = sVar7;
  return;
}

// EmptyLinkFunctionForGeneratedCodeKismetProceduralMeshLibrary @ 14d26e3c0

void __cdecl EmptyLinkFunctionForGeneratedCodeKismetProceduralMeshLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProceduralMeshComponent @ 14d26e3d0

void __cdecl EmptyLinkFunctionForGeneratedCodeProceduralMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProceduralMeshComponent_init @ 14d26e3e0

void __cdecl EmptyLinkFunctionForGeneratedCodeProceduralMeshComponent_init(void)

{
  return;
}

// FindVertOverlaps @ 14d26e530

void __cdecl
FindVertOverlaps(int param_1,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
                TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint local_78 [2];
  double local_70;
  double dStack_68;
  double local_60;
  
  if (param_1 < param_2->ArrayNum) {
    if ((param_1 < 0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar9 = __real_3f1a36e2e0000000;
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar2 = (param_2->AllocatorInstance).Data;
    iVar11 = param_2->ArrayNum;
    local_78[0] = 0;
    dVar1 = *(double *)(pFVar2 + (longlong)param_1 * 0x18 + 0x10);
    pFVar2 = pFVar2 + (longlong)param_1 * 0x18;
    dVar5 = *(double *)pFVar2;
    dVar6 = *(double *)(pFVar2 + 8);
    local_70 = dVar5;
    dStack_68 = dVar6;
    local_60 = dVar1;
    if (0 < iVar11) {
      do {
        uVar13 = local_78[0];
        uVar14 = 0;
        if ((int)local_78[0] < iVar11) {
          uVar14 = ~local_78[0] >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar12 = (longlong)(int)uVar13;
        pFVar2 = (param_2->AllocatorInstance).Data;
        dVar4 = dVar5 - *(double *)(pFVar2 + lVar12 * 0x18);
        uVar13 = SUB84(dVar4,0) & uVar7;
        uVar14 = (uint)((ulonglong)dVar4 >> 0x20) & uVar8;
        if ((((double)CONCAT44(uVar14,uVar13) < dVar9 || (double)CONCAT44(uVar14,uVar13) == dVar9)
            && (dVar4 = dVar6 - *(double *)(pFVar2 + lVar12 * 0x18 + 8),
               uVar13 = SUB84(dVar4,0) & uVar7, uVar14 = (uint)((ulonglong)dVar4 >> 0x20) & uVar8,
               (double)CONCAT44(uVar14,uVar13) < dVar9 || (double)CONCAT44(uVar14,uVar13) == dVar9))
           && (dVar4 = dVar1 - *(double *)(pFVar2 + lVar12 * 0x18 + 0x10),
              uVar13 = SUB84(dVar4,0) & uVar7, uVar14 = (uint)((ulonglong)dVar4 >> 0x20) & uVar8,
              (double)CONCAT44(uVar14,uVar13) < dVar9 || (double)CONCAT44(uVar14,uVar13) == dVar9))
        {
          pFVar2 = (param_3->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_78) &&
              ((FScriptContainerElement *)local_78 < pFVar2 + (longlong)param_3->ArrayMax * 4)) &&
             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar11 = param_3->ArrayNum;
          if (iVar11 == param_3->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar11 + 1;
          *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_78[0];
        }
        iVar11 = param_2->ArrayNum;
        local_78[0] = local_78[0] + 1;
      } while ((int)local_78[0] < iVar11);
    }
  }
  return;
}

// GetNewIndexForOldVertIndex @ 14d272360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
GetNewIndexForOldVertIndex
          (int param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2,
          FStaticMeshVertexBuffers *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *param_7)

{
  uchar *puVar1;
  ushort *puVar2;
  uchar *puVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  TVector4<float> *pTVar11;
  int *piVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_res8 [2];
  int local_res10 [2];
  float local_c8;
  float fStack_c4;
  double local_c0;
  double dStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  TPairInitializer<int_const_&,int_const_&> local_60;
  int *local_50;
  TVector4<float> local_48 [2];
  
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar13 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar13 = &param_2->field_0x38;
    }
    iVar8 = *(int *)(puVar13 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        piVar12 = (int *)((longlong)iVar8 * 0x10 + *(longlong *)param_2);
        if (*piVar12 == param_1) {
          piVar10 = piVar12 + 1;
          if (piVar12 == (int *)0x0) {
            piVar10 = (int *)0x0;
          }
          if (piVar10 != (int *)0x0) {
            return *piVar10;
          }
          break;
        }
        iVar8 = piVar12[2];
      } while (iVar8 != -1);
    }
  }
  uVar14 = (ulonglong)(param_1 * (param_3->PositionVertexBuffer).Stride);
  puVar3 = (param_3->PositionVertexBuffer).Data;
  pFVar4 = (param_4->AllocatorInstance).Data;
  local_a0 = (double)*(float *)(puVar3 + uVar14 + 8);
  uStack_a8 = (double)*(float *)(puVar3 + uVar14 + 4);
  local_b0 = (double)*(float *)(puVar3 + uVar14);
  local_res8[0] = param_1;
  if ((pFVar4 <= (FScriptContainerElement *)&local_b0) &&
     ((FScriptContainerElement *)&local_b0 < pFVar4 + (longlong)param_4->ArrayMax * 0x18)) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
  }
  local_res10[0] = param_4->ArrayNum;
  if (local_res10[0] == param_4->ArrayMax) {
    local_res10[0] =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = local_res10[0] + 1;
  pFVar5 = (param_4->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)local_res10[0] * 0x18;
  *(undefined4 *)pFVar4 = (undefined4)local_b0;
  *(undefined4 *)(pFVar4 + 4) = local_b0._4_4_;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)uStack_a8;
  *(undefined4 *)(pFVar4 + 0xc) = uStack_a8._4_4_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = local_a0;
  *(double *)(pFVar5 + (longlong)local_res10[0] * 0x18 + 0x10) = local_a0;
  puVar3 = (param_3->StaticMeshVertexBuffer).TangentsDataPtr;
  pcVar6 = *(code **)((longlong)*(param_3->StaticMeshVertexBuffer).TangentsData + 0x50);
  if ((param_3->StaticMeshVertexBuffer).bUseHighPrecisionTangentBasis == false) {
    puVar1 = puVar3 + (ulonglong)local_res8[0] * 8;
    lVar9 = (*pcVar6)();
    if (puVar3 + lVar9 < puVar1 + 8) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x104,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
    if (puVar1 < (param_3->StaticMeshVertexBuffer).TangentsDataPtr) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x105,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
    auVar15 = pmovsxbd(auVar15,*(undefined4 *)(puVar1 + 4));
    fVar16 = (float)auVar15._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
    fVar17 = (float)auVar15._4_4_ * _UNK_151040074;
    fVar18 = (float)auVar15._8_4_ * _UNK_151040078;
  }
  else {
    puVar1 = puVar3 + (ulonglong)local_res8[0] * 0x10;
    lVar9 = (*pcVar6)();
    if (puVar3 + lVar9 < puVar1 + 0x10) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x104,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
    if (puVar1 < (param_3->StaticMeshVertexBuffer).TangentsDataPtr) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x105,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
    auVar15 = pmovsxwd(auVar15,*(undefined8 *)(puVar1 + 8));
    fVar16 = (float)auVar15._0_4_ * ___xmm_38000100380001003800010038000100;
    fVar17 = (float)auVar15._4_4_ * _UNK_150d565e4;
    fVar18 = (float)auVar15._8_4_ * _UNK_150d565e8;
  }
  local_98 = (double)fVar16;
  pFVar4 = (param_5->AllocatorInstance).Data;
  dStack_90 = (double)fVar17;
  local_88 = (double)fVar18;
  if ((pFVar4 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar4 + (longlong)param_5->ArrayMax * 0x18)) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
  }
  iVar8 = param_5->ArrayNum;
  if (iVar8 == param_5->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar8 + 1;
  pFVar5 = (param_5->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar8 * 0x18;
  *(double *)pFVar4 = local_98;
  *(double *)(pFVar4 + 8) = dStack_90;
  *(double *)(pFVar5 + (longlong)iVar8 * 0x18 + 0x10) = local_88;
  if (param_5->ArrayNum != param_4->ArrayNum) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Normals.Num() == Vertices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                       ,0x1b4,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
  }
  puVar3 = (param_3->StaticMeshVertexBuffer).TexcoordDataPtr;
  lVar9 = (ulonglong)(param_3->StaticMeshVertexBuffer).NumTexCoords * (ulonglong)local_res8[0];
  pcVar6 = *(code **)((longlong)*(param_3->StaticMeshVertexBuffer).TexcoordData + 0x50);
  if ((param_3->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
    puVar2 = (ushort *)(puVar3 + lVar9 * 4);
    lVar9 = (*pcVar6)();
    if (puVar3 + lVar9 < puVar2 + 2) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17b,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
    if (puVar2 < (param_3->StaticMeshVertexBuffer).TexcoordDataPtr) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17c,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
    fStack_c4 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
    local_c8 = FGenericPlatformMath::LoadHalf(puVar2);
  }
  else {
    puVar1 = puVar3 + lVar9 * 8;
    lVar9 = (*pcVar6)();
    if (puVar3 + lVar9 < puVar1 + 8) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17b,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
    if (puVar1 < (param_3->StaticMeshVertexBuffer).TexcoordDataPtr) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17c,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
    local_c8 = (float)*(undefined8 *)puVar1;
    fStack_c4 = (float)((ulonglong)*(undefined8 *)puVar1 >> 0x20);
  }
  dStack_b8 = (double)fStack_c4;
  pFVar4 = (param_6->AllocatorInstance).Data;
  local_c0 = (double)local_c8;
  if ((pFVar4 <= (FScriptContainerElement *)&local_c0) &&
     ((FScriptContainerElement *)&local_c0 < pFVar4 + (longlong)param_6->ArrayMax * 0x10)) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
  }
  iVar8 = param_6->ArrayNum;
  if (iVar8 == param_6->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_6->AllocatorInstance,&param_6->ArrayMax);
  }
  param_6->ArrayNum = iVar8 + 1;
  pFVar4 = (param_6->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(double *)pFVar4 = local_c0;
  *(double *)(pFVar4 + 8) = dStack_b8;
  if (param_6->ArrayNum != param_4->ArrayNum) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("UVs.Num() == Vertices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                       ,0x1b8,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
  }
  pTVar11 = FStaticMeshVertexBuffer::VertexTangentX
                      (&param_3->StaticMeshVertexBuffer,local_48,local_res8[0]);
  pFVar4 = (param_7->AllocatorInstance).Data;
  local_80 = (double)(pTVar11->field0_0x0)._s_0.X;
  dStack_78 = (double)(pTVar11->field0_0x0)._s_0.Y;
  uStack_68 = (pTVar11->field0_0x0)._s_0.W < 0.0;
  local_70 = (double)(pTVar11->field0_0x0)._s_0.Z;
  if ((pFVar4 <= (FScriptContainerElement *)&local_80) &&
     ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)param_7->ArrayMax * 0x20)) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
  }
  iVar8 = param_7->ArrayNum;
  if (iVar8 == param_7->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_7->AllocatorInstance,&param_7->ArrayMax);
  }
  param_7->ArrayNum = iVar8 + 1;
  pFVar5 = (param_7->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar8 * 0x20;
  *(double *)pFVar4 = local_80;
  *(double *)(pFVar4 + 8) = dStack_78;
  pFVar5 = pFVar5 + (longlong)iVar8 * 0x20 + 0x10;
  *(double *)pFVar5 = local_70;
  *(ulonglong *)(pFVar5 + 8) = CONCAT71(uStack_67,uStack_68);
  if (param_7->ArrayNum != param_4->ArrayNum) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Tangents.Num() == Vertices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                       ,0x1be,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
  }
  local_60.Value = (int *)local_res8;
  local_50 = local_res10;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             param_2,&local_60,(bool *)&local_60.Value);
  return local_res10[0];
}

// InterpolateVert @ 14d274400

FProcMeshVertex * __cdecl
InterpolateVert(FProcMeshVertex *__return_storage_ptr__,FProcMeshVertex *param_1,
               FProcMeshVertex *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined7 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uchar uVar15;
  uchar uVar16;
  float fVar17;
  
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.Z = 1.0;
  (__return_storage_ptr__->Tangent).TangentX.field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->Tangent).TangentX.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Tangent).TangentX.field0_0x0._s_0.Z = 0.0;
  uVar16 = '\0';
  (__return_storage_ptr__->Tangent).bFlipTangentY = false;
  dVar6 = (double)param_3;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0xffffffff;
  (__return_storage_ptr__->UV0).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->UV0).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->UV1).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->UV1).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->UV2).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->UV2).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->UV3).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->UV3).field0_0x0._s_0.Y = 0.0;
  iVar13 = _isnan(dVar6);
  if ((iVar13 == 0) && (iVar13 = _finite(dVar6), iVar13 != 0)) {
    dVar7 = (param_1->Position).field0_0x0._s_0.X;
    dVar8 = (param_1->Position).field0_0x0._s_0.Y;
    dVar1 = (param_2->Position).field0_0x0._s_0.Z;
    dVar2 = (param_1->Position).field0_0x0._s_0.Z;
    dVar9 = (param_2->Position).field0_0x0._s_0.Y;
    dVar3 = (param_1->Position).field0_0x0._s_0.Z;
    (__return_storage_ptr__->Position).field0_0x0._s_0.X =
         ((param_2->Position).field0_0x0._s_0.X - dVar7) * dVar6 + dVar7;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Y = (dVar9 - dVar8) * dVar6 + dVar8;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Z = (dVar1 - dVar2) * dVar6 + dVar3;
    dVar2 = (param_1->Normal).field0_0x0._s_0.Y;
    dVar1 = (param_1->Normal).field0_0x0._s_0.Z;
    dVar3 = (param_2->Normal).field0_0x0._s_0.Y;
    dVar1 = ((param_2->Normal).field0_0x0._s_0.Z - dVar1) * dVar6 + dVar1;
    (__return_storage_ptr__->Normal).field0_0x0._s_0.X =
         ((param_2->Normal).field0_0x0._s_0.X - (param_1->Normal).field0_0x0._s_0.X) * dVar6 +
         (param_1->Normal).field0_0x0._s_0.X;
    auVar4._8_4_ = SUB84(dVar1,0);
    auVar4._0_8_ = (dVar3 - dVar2) * dVar6 + dVar2;
    auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Normal).field0_0x0 + 8) = auVar4;
    dVar2 = (param_1->Tangent).TangentX.field0_0x0._s_0.Y;
    dVar1 = (param_1->Tangent).TangentX.field0_0x0._s_0.Z;
    dVar3 = (param_2->Tangent).TangentX.field0_0x0._s_0.Y;
    dVar1 = ((param_2->Tangent).TangentX.field0_0x0._s_0.Z - dVar1) * dVar6 + dVar1;
    (__return_storage_ptr__->Tangent).TangentX.field0_0x0._s_0.X =
         ((param_2->Tangent).TangentX.field0_0x0._s_0.X -
         (param_1->Tangent).TangentX.field0_0x0._s_0.X) * dVar6 +
         (param_1->Tangent).TangentX.field0_0x0._s_0.X;
    auVar5._8_4_ = SUB84(dVar1,0);
    auVar5._0_8_ = (dVar3 - dVar2) * dVar6 + dVar2;
    auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Tangent).TangentX.field0_0x0 + 8) =
         auVar5;
    (__return_storage_ptr__->Tangent).bFlipTangentY = (param_1->Tangent).bFlipTangentY;
    dVar1 = (param_2->UV0).field0_0x0._s_0.Y;
    dVar2 = (param_1->UV0).field0_0x0._s_0.Y;
    dVar3 = (param_1->UV0).field0_0x0._s_0.Y;
    (__return_storage_ptr__->UV0).field0_0x0._s_0.X =
         ((param_2->UV0).field0_0x0._s_0.X - (param_1->UV0).field0_0x0._s_0.X) * dVar6 +
         (param_1->UV0).field0_0x0._s_0.X;
    (__return_storage_ptr__->UV0).field0_0x0._s_0.Y = (dVar1 - dVar2) * dVar6 + dVar3;
    fVar17 = (float)(param_1->Color).field0_0x0._s_0.R;
    iVar14 = (int)(((float)(param_2->Color).field0_0x0._s_0.R - fVar17) * param_3 + fVar17);
    iVar13 = 0xff;
    if (iVar14 < 0xff) {
      iVar13 = iVar14;
    }
    if (0 < iVar13) {
      uVar16 = (uchar)iVar13;
    }
    (__return_storage_ptr__->Color).field0_0x0._s_0.R = uVar16;
    fVar17 = (float)(param_1->Color).field0_0x0._s_0.G;
    iVar14 = (int)(((float)(param_2->Color).field0_0x0._s_0.G - fVar17) * param_3 + fVar17);
    iVar13 = 0xff;
    if (iVar14 < 0xff) {
      iVar13 = iVar14;
    }
    uVar15 = '\0';
    uVar16 = uVar15;
    if (0 < iVar13) {
      uVar16 = (uchar)iVar13;
    }
    (__return_storage_ptr__->Color).field0_0x0._s_0.G = uVar16;
    fVar17 = (float)(param_1->Color).field0_0x0._s_0.B;
    iVar14 = (int)(((float)(param_2->Color).field0_0x0._s_0.B - fVar17) * param_3 + fVar17);
    iVar13 = 0xff;
    if (iVar14 < 0xff) {
      iVar13 = iVar14;
    }
    uVar16 = uVar15;
    if (0 < iVar13) {
      uVar16 = (uchar)iVar13;
    }
    (__return_storage_ptr__->Color).field0_0x0._s_0.B = uVar16;
    fVar17 = (float)(param_1->Color).field0_0x0._s_0.A;
    iVar14 = (int)(((float)(param_2->Color).field0_0x0._s_0.A - fVar17) * param_3 + fVar17);
    iVar13 = 0xff;
    if (iVar14 < 0xff) {
      iVar13 = iVar14;
    }
    if (0 < iVar13) {
      uVar15 = (uchar)iVar13;
    }
    (__return_storage_ptr__->Color).field0_0x0._s_0.A = uVar15;
    return __return_storage_ptr__;
  }
  dVar6 = (param_2->Position).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = (param_2->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_2->Normal).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = (param_2->Position).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.X = dVar6;
  dVar6 = (param_2->Normal).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.Y = (param_2->Normal).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.Z = dVar6;
  dVar6 = (param_2->Tangent).TangentX.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Tangent).TangentX.field0_0x0._s_0.X =
       (param_2->Tangent).TangentX.field0_0x0._s_0.X;
  (__return_storage_ptr__->Tangent).TangentX.field0_0x0._s_0.Y = dVar6;
  bVar10 = (param_2->Tangent).bFlipTangentY;
  uVar11 = *(undefined7 *)&(param_2->Tangent).field_0x19;
  (__return_storage_ptr__->Tangent).TangentX.field0_0x0._s_0.Z =
       (param_2->Tangent).TangentX.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Tangent).bFlipTangentY = bVar10;
  *(undefined7 *)&(__return_storage_ptr__->Tangent).field_0x19 = uVar11;
  uVar12 = *(undefined4 *)&param_2->field_0x54;
  dVar6 = (param_2->UV0).field0_0x0._s_0.X;
  __return_storage_ptr__->Color = (FColor)(param_2->Color).field0_0x0;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = uVar12;
  (__return_storage_ptr__->UV0).field0_0x0._s_0.X = dVar6;
  dVar6 = (param_2->UV1).field0_0x0._s_0.X;
  (__return_storage_ptr__->UV0).field0_0x0._s_0.Y = (param_2->UV0).field0_0x0._s_0.Y;
  (__return_storage_ptr__->UV1).field0_0x0._s_0.X = dVar6;
  dVar6 = (param_2->UV2).field0_0x0._s_0.X;
  (__return_storage_ptr__->UV1).field0_0x0._s_0.Y = (param_2->UV1).field0_0x0._s_0.Y;
  (__return_storage_ptr__->UV2).field0_0x0._s_0.X = dVar6;
  dVar6 = (param_2->UV3).field0_0x0._s_0.X;
  (__return_storage_ptr__->UV2).field0_0x0._s_0.Y = (param_2->UV2).field0_0x0._s_0.Y;
  (__return_storage_ptr__->UV3).field0_0x0._s_0.X = dVar6;
  (__return_storage_ptr__->UV3).field0_0x0._s_0.Y = (param_2->UV3).field0_0x0._s_0.Y;
  return __return_storage_ptr__;
}

// MeshDescriptionToProcMesh @ 14d2747f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MeshDescriptionToProcMesh(FMeshDescription *param_1,UProceduralMeshComponent *param_2)

{
  ForAnyElementType *pFVar1;
  float *pfVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  FMeshAttributeArraySetBase *pFVar6;
  TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  code *pcVar8;
  ForAnyElementType *pFVar9;
  UProceduralMeshComponent *this;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  FMeshElementContainer *pFVar13;
  FAttributesSetEntry *pFVar14;
  uint *puVar15;
  TArrayView<FVertexInstanceID,int> *pTVar16;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar17;
  TVector<float> *pTVar18;
  byte bVar19;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  ForElementType<FSetElementId> FVar23;
  int iVar24;
  FMeshAttributeArraySetBase *pFVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar28;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar29;
  uint uVar30;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar31;
  ForElementType<unsigned_int> FVar32;
  uint uVar33;
  TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar34;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_02;
  undefined1 auStackY_308 [32];
  int local_2a8 [2];
  ForAnyElementType *local_2a0;
  ForElementType<unsigned_int> local_298;
  undefined1 local_290 [8];
  TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_288;
  ForElementType<unsigned_int> local_280;
  uint local_278;
  int local_274;
  FMeshDescription *local_270;
  ulonglong local_268;
  int local_260;
  uint uStack_25c;
  ForElementType<unsigned_int> FStack_258;
  uint local_250;
  uint uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  uint local_240;
  uint uStack_23c;
  ForElementType<unsigned_int> FStack_238;
  undefined4 local_230;
  uint uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  double local_220;
  double dStack_218;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_210;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  int local_1b0;
  int local_1ac;
  TPairInitializer<FVertexInstanceID_const_&,int_const_&> local_1a8;
  ulonglong local_198;
  UProceduralMeshComponent *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  longlong *local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  uint local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  ForElementType<unsigned_int> local_108;
  int *local_100;
  undefined8 local_f8;
  ForElementType<unsigned_int> FStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  TArrayView<FVertexInstanceID,int> local_d8 [2];
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_270 = param_1;
  local_190 = param_2;
  UProceduralMeshComponent::ClearAllMeshSections(param_2);
  pFVar13 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
  TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
  ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
          *)&pFVar13->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  pFVar13 = FMeshElementChannels::Get(param_1->VertexElements,0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::Vertex::Position);
  pTVar20 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
      (this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar14->Ptr).Ptr,
      *(uint *)&this_00->_padding_ != 1)) || (*(uint *)((longlong)&this_00->_padding_ + 4) != 1)) {
    this_00 = pTVar20;
  }
  pFVar13 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
      (this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar14->Ptr).Ptr,
      *(uint *)&this_01->_padding_ != 1)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1)) {
    this_01 = pTVar20;
  }
  pFVar13 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
      (pTVar29 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar14->Ptr).Ptr,
      *(uint *)&pTVar29->_padding_ != 3)) || (*(uint *)((longlong)&pTVar29->_padding_ + 4) != 1)) {
    pTVar29 = pTVar20;
  }
  pFVar13 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
      (this_02 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar14->Ptr).Ptr,
      *(uint *)&this_02->_padding_ != 1)) || (*(uint *)((longlong)&this_02->_padding_ + 4) != 1)) {
    this_02 = pTVar20;
  }
  pFVar13 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
  ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
          *)&pFVar13->Attributes,MeshAttribute::VertexInstance::Color);
  pFVar13 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
      (pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar14->Ptr).Ptr,
      *(uint *)&pTVar28->_padding_ != 2)) || (*(uint *)((longlong)&pTVar28->_padding_ + 4) != 1)) {
    pTVar28 = pTVar20;
  }
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_280 = (ForElementType<unsigned_int>)FMeshElementChannels::Get(param_1->TriangleElements,0);
  local_268 = 1;
  uStack_23c = 1;
  uStack_24c = *(int *)((longlong)local_280 + 0x18);
  local_240 = 0;
  uStack_22c = 0;
  iStack_228 = 0;
  local_2a0 = (ForAnyElementType *)CONCAT44(local_2a0._4_4_,uStack_24c);
  if (uStack_24c != 0) {
    FVar32 = local_280;
    if (*(ForElementType<unsigned_int> *)((longlong)local_280 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar32 = *(ForElementType<unsigned_int> *)((longlong)local_280 + 0x10);
    }
    uVar30 = *(uint *)FVar32;
    iStack_228 = 0;
    while (uVar30 == 0) {
      iStack_228 = iStack_228 + 0x20;
      iVar12 = (int)pTVar20;
      local_240 = iVar12 + 1;
      pTVar20 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(ulonglong)local_240;
      if ((int)((uStack_24c - 1) + ((int)(uStack_24c - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_240)
      goto LAB_14d274a78;
      uVar30 = ((uint *)((longlong)FVar32 + 4))[iVar12];
    }
    uStack_23c = -uVar30 & uVar30;
    uVar3 = (ulonglong)uStack_23c * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_1b0 = (int)lVar22;
    uStack_22c = local_1b0 + -1 + iStack_228;
    if ((int)uStack_24c < (int)uStack_22c) {
LAB_14d274a78:
      uStack_22c = uStack_24c;
    }
  }
  local_230 = 0xffffffff;
  local_188._padding_ = CONCAT44(uStack_23c,local_240);
  local_188.CurrentBitIndex = uStack_22c;
  local_188.UnvisitedBitMask = 0xffffffff;
  local_188._28_4_ = uStack_224;
  local_188.BaseBitIndex = iStack_228;
  iVar12 = (int)uStack_24c >> 5;
  bVar19 = (byte)uStack_24c & 0x1f;
  local_298._0_4_ = iVar12;
  local_250 = -1 << bVar19;
  uVar33 = uStack_24c & 0xffffffe0;
  uStack_25c = 1 << bVar19;
  local_288 = (TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)CONCAT44(local_288._4_4_,local_250);
  uVar27 = uStack_24c;
  uVar30 = local_250;
  local_260 = iVar12;
  FStack_258 = local_280;
  uStack_248 = uVar33;
  FStack_238 = local_280;
  local_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_280;
  if ((int)uStack_24c < 0) {
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar27 = (uint)local_2a0;
    uVar30 = (uint)local_288;
  }
  uVar5 = *(uint *)((longlong)local_280 + 0x18);
  if (uVar27 != uVar5) {
    FVar32 = local_280;
    if (*(ForElementType<unsigned_int> *)((longlong)local_280 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar32 = *(ForElementType<unsigned_int> *)((longlong)local_280 + 0x10);
    }
    uVar30 = uVar30 & *(uint *)((longlong)FVar32 + (longlong)(int)local_298._0_4_ * 4);
    while (uVar30 == 0) {
      uStack_248 = uVar33 + 0x20;
      local_260 = iVar12 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < local_260)
      goto LAB_14d274b8c;
      uVar30 = ((uint *)((longlong)FVar32 + 4))[iVar12];
      local_250 = 0xffffffff;
      iVar12 = local_260;
      uVar33 = uStack_248;
    }
    uStack_25c = -uVar30 & uVar30;
    uVar3 = (ulonglong)uStack_25c * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_1ac = (int)lVar22;
    uStack_24c = local_1ac + -1 + uVar33;
    if ((int)uVar5 < (int)uStack_24c) {
LAB_14d274b8c:
      uStack_24c = uVar5;
    }
  }
  local_e8 = CONCAT44(uStack_24c,local_250);
  uStack_e0 = CONCAT44(uStack_244,uStack_248);
  local_f8 = CONCAT44(uStack_25c,local_260);
  local_198 = (ulonglong)uStack_24c;
  FStack_f0 = FStack_258;
  while ((uVar30 = local_80, local_188.CurrentBitIndex != (int)local_198 ||
         ((ForElementType<unsigned_int>)local_188.Array != FStack_f0))) {
    iVar12 = -1;
    if (local_188.CurrentBitIndex < *(int *)((longlong)local_188.Array + 0x18)) {
      iVar12 = local_188.CurrentBitIndex;
    }
    local_298._0_4_ = iVar12;
    pFVar6 = (local_270->TrianglePolygonGroups).ArrayPtr;
    if (((int)pFVar6[2].Type < 1) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar25 = pFVar6 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar6[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      pFVar25 = (FMeshAttributeArraySetBase *)pFVar6[2]._padding_;
    }
    uVar33 = iVar12 * pFVar25->NumElements;
    uVar30 = 0;
    if ((int)uVar33 < (int)pFVar25->Type) {
      uVar30 = ~uVar33 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_278 = *(uint *)(pFVar25->_padding_ + (longlong)(int)uVar33 * 4);
    if (local_a8._8_4_ != local_74) {
      FVar23 = (ForElementType<FSetElementId>)local_70;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FVar23 = local_68;
      }
      uVar30 = *(uint *)((longlong)FVar23 + (ulonglong)(local_60 - 1U & local_278) * 4);
      while (uVar30 != 0xffffffff) {
        puVar15 = (uint *)((longlong)(int)uVar30 * 0xc0 + local_a8._0_8_);
        if (*puVar15 == local_278) {
          if (puVar15 != (uint *)0x0) goto LAB_14d274d48;
          break;
        }
        uVar30 = puVar15[0x2e];
      }
    }
    local_1a8.Value = (int *)&local_278;
    TSet<TTuple<FPolygonGroupID,`anonymous_namespace'::FMeshSectionAttributeData>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,`anonymous_namespace'::FMeshSectionAttributeData,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FPolygonGroupID_const_&>_>
              ((TSet<TTuple<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData,0>,FDefaultSetAllocator>
                *)local_a8,(uint)&local_274,
               (TKeyInitializer<FPolygonGroupID_const_&> *)(ulonglong)local_278,
               (bool *)&local_1a8.Value);
    puVar15 = (uint *)((longlong)local_274 * 0xc0 + local_a8._0_8_);
LAB_14d274d48:
    local_2a0 = (ForAnyElementType *)(puVar15 + 2);
    pTVar16 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                        (&local_270->TriangleVertexInstances,local_d8,local_298._0_4_);
    local_298 = (ForElementType<unsigned_int>)pTVar16->DataPtr;
    local_280 = (ForElementType<unsigned_int>)
                ((longlong)local_298 + (longlong)pTVar16->ArrayNum * 4);
    if (local_298 != local_280) {
      do {
        pFVar9 = local_2a0;
        uVar30 = *(uint *)local_298;
        if (*(uint *)&local_2a0[0xd].Data != *(uint *)((longlong)&local_2a0[0x12].Data + 4)) {
          pFVar21 = (FScriptContainerElement *)(local_2a0 + 0x13);
          if (local_2a0[0x14].Data != (FScriptContainerElement *)0x0) {
            pFVar21 = local_2a0[0x14].Data;
          }
          uVar33 = *(uint *)(pFVar21 + (ulonglong)(*(uint *)&local_2a0[0x15].Data - 1 & uVar30) * 4)
          ;
          if (uVar33 != 0xffffffff) {
            do {
              pFVar21 = local_2a0[0xc].Data + (longlong)(int)uVar33 * 0x10;
              if (*(uint *)pFVar21 == uVar30) {
                pFVar26 = pFVar21 + 4;
                if (pFVar21 == (FScriptContainerElement *)0x0) {
                  pFVar26 = (FScriptContainerElement *)0x0;
                }
                if (pFVar26 != (FScriptContainerElement *)0x0) {
                  pFVar1 = local_2a0 + 2;
                  if (((local_2a0[2].Data <= pFVar26) &&
                      (pFVar26 < local_2a0[2].Data +
                                 (longlong)(int)*(uint *)((longlong)&local_2a0[3].Data + 4) * 4)) &&
                     (bVar11 = FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar30 = *(uint *)&pFVar9[3].Data;
                  puVar15 = (uint *)((longlong)&pFVar9[3].Data + 4);
                  if (uVar30 == *puVar15) {
                    uVar30 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,pFVar1,(int *)puVar15);
                  }
                  *(uint *)&pFVar9[3].Data = uVar30 + 1;
                  *(uint *)(pFVar1->Data + (longlong)(int)uVar30 * 4) = *(uint *)pFVar26;
                  goto LAB_14d275473;
                }
                break;
              }
              uVar33 = *(uint *)(pFVar21 + 8);
            } while (uVar33 != 0xffffffff);
          }
        }
        pFVar6 = (local_270->VertexInstanceVertices).ArrayPtr;
        if (((int)pFVar6[2].Type < 1) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar25 = pFVar6 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar6[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar25 = (FMeshAttributeArraySetBase *)pFVar6[2]._padding_;
        }
        uVar30 = uVar30 * pFVar25->NumElements;
        uVar33 = 0;
        if ((int)uVar30 < (int)pFVar25->Type) {
          uVar33 = ~uVar30 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar9 = local_2a0;
        iVar12 = *(int *)(pFVar25->_padding_ + (longlong)(int)uVar30 * 4);
        local_2a8[0] = *(int *)&local_2a0[0xd].Data - *(int *)((longlong)&local_2a0[0x12].Data + 4);
        local_108 = local_298;
        local_100 = local_2a8;
        TSet<TTuple<FVertexInstanceID,int>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FVertexInstanceID_const_&,int_const_&>_>
                  ((TSet<TTuple<FVertexInstanceID,int>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,int,0>,FDefaultSetAllocator>
                    *)(local_2a0 + 0xc),&local_1a8,(bool *)&local_108);
        pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
        pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar17,iVar12)
        ;
        local_1f0 = (double)(pTVar18->field0_0x0)._s_0.Z;
        dStack_1f8 = (double)(pTVar18->field0_0x0)._s_0.Y;
        local_200 = (double)(pTVar18->field0_0x0)._s_0.X;
        if (((pFVar9->Data <= (FScriptContainerElement *)&local_200) &&
            ((FScriptContainerElement *)&local_200 <
             pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 0x18)) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = *(int *)&pFVar9[1].Data;
        piVar4 = (int *)((longlong)&pFVar9[1].Data + 4);
        if (iVar12 == *piVar4) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,pFVar9,piVar4);
        }
        *(int *)&pFVar9[1].Data = iVar12 + 1;
        pFVar26 = pFVar9->Data;
        pFVar21 = pFVar26 + (longlong)iVar12 * 0x18;
        *(double *)pFVar21 = local_200;
        *(double *)(pFVar21 + 8) = dStack_1f8;
        *(double *)(pFVar26 + (longlong)iVar12 * 0x18 + 0x10) = local_1f0;
        if (((pFVar9[2].Data <= (FScriptContainerElement *)local_2a8) &&
            ((FScriptContainerElement *)local_2a8 <
             pFVar9[2].Data + (longlong)*(int *)((longlong)&pFVar9[3].Data + 4) * 4)) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = *(int *)&pFVar9[3].Data;
        piVar4 = (int *)((longlong)&pFVar9[3].Data + 4);
        if (iVar12 == *piVar4) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar9 + 2,piVar4);
        }
        *(int *)&pFVar9[3].Data = iVar12 + 1;
        *(int *)(pFVar9[2].Data + (longlong)iVar12 * 4) = local_2a8[0];
        uVar30 = *(uint *)local_298;
        pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0);
        pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar17,uVar30)
        ;
        local_1d8 = (double)(pTVar18->field0_0x0)._s_0.Z;
        dStack_1e0 = (double)(pTVar18->field0_0x0)._s_0.Y;
        local_1e8 = (double)(pTVar18->field0_0x0)._s_0.X;
        if (((pFVar9[4].Data <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 <
             pFVar9[4].Data + (longlong)*(int *)((longlong)&pFVar9[5].Data + 4) * 0x18)) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = *(int *)&pFVar9[5].Data;
        piVar4 = (int *)((longlong)&pFVar9[5].Data + 4);
        if (iVar12 == *piVar4) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,pFVar9 + 4,piVar4);
        }
        *(int *)&pFVar9[5].Data = iVar12 + 1;
        pFVar26 = pFVar9[4].Data;
        pFVar21 = pFVar26 + (longlong)iVar12 * 0x18;
        *(double *)pFVar21 = local_1e8;
        *(double *)(pFVar21 + 8) = dStack_1e0;
        *(double *)(pFVar26 + (longlong)iVar12 * 0x18 + 0x10) = local_1d8;
        local_288 = &pTVar28->ArrayForChannels;
        uVar30 = *(uint *)local_298;
        if (((pTVar28->ArrayForChannels).ArrayNum < 1) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar7 = *(TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   **)&(local_288->AllocatorInstance).SecondaryData.field_0x0;
        if (pTVar7 != (TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                       *)0x0) {
          local_288 = pTVar7;
        }
        uVar30 = uVar30 * *(int *)((local_288->AllocatorInstance).InlineData + 0x10);
        uVar33 = 0;
        if ((int)uVar30 < *(int *)((local_288->AllocatorInstance).InlineData + 8)) {
          uVar33 = ~uVar30 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar22 = *(longlong *)(local_288->AllocatorInstance).InlineData;
        dStack_218 = (double)*(float *)(lVar22 + 4 + (longlong)(int)uVar30 * 8);
        local_220 = (double)*(float *)(lVar22 + (longlong)(int)uVar30 * 8);
        if (((pFVar9[6].Data <= (FScriptContainerElement *)&local_220) &&
            ((FScriptContainerElement *)&local_220 <
             pFVar9[6].Data + (longlong)*(int *)((longlong)&pFVar9[7].Data + 4) * 0x10)) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = *(int *)&pFVar9[7].Data;
        piVar4 = (int *)((longlong)&pFVar9[7].Data + 4);
        if (iVar12 == *piVar4) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar9 + 6,piVar4);
        }
        *(int *)&pFVar9[7].Data = iVar12 + 1;
        pFVar21 = pFVar9[6].Data;
        *(double *)(pFVar21 + (longlong)iVar12 * 0x10) = local_220;
        *(double *)(pFVar21 + (longlong)iVar12 * 0x10 + 8) = dStack_218;
        uVar30 = *(uint *)local_298;
        if (((pTVar29->ArrayForChannels).ArrayNum < 1) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar7 = *(TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   **)&(pTVar29->ArrayForChannels).AllocatorInstance.SecondaryData.field_0x0;
        pTVar34 = &pTVar29->ArrayForChannels;
        if (pTVar7 != (TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                       *)0x0) {
          pTVar34 = pTVar7;
        }
        uVar30 = uVar30 * *(int *)((pTVar34->AllocatorInstance).InlineData + 0x10);
        uVar33 = 0;
        if ((int)uVar30 < *(int *)((pTVar34->AllocatorInstance).InlineData + 8)) {
          uVar33 = ~uVar30 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pfVar2 = (float *)(*(longlong *)(pTVar34->AllocatorInstance).InlineData +
                          (longlong)(int)uVar30 * 4);
        uVar30 = *(uint *)local_298;
        bVar11 = *pfVar2 <= 0.0 && *pfVar2 != 0.0;
        pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
        pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar17,uVar30)
        ;
        pFVar9 = local_2a0;
        dStack_1c8 = (double)(pTVar18->field0_0x0)._s_0.Y;
        local_1c0 = (double)(pTVar18->field0_0x0)._s_0.Z;
        local_1d0 = (double)(pTVar18->field0_0x0)._s_0.X;
        uStack_1b8 = bVar11;
        if (((local_2a0[10].Data <= (FScriptContainerElement *)&local_1d0) &&
            ((FScriptContainerElement *)&local_1d0 <
             local_2a0[10].Data +
             (longlong)(int)*(uint *)((longlong)&local_2a0[0xb].Data + 4) * 0x20)) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar30 = *(uint *)&pFVar9[0xb].Data;
        puVar15 = (uint *)((longlong)&pFVar9[0xb].Data + 4);
        if (uVar30 == *puVar15) {
          uVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,pFVar9 + 10,(int *)puVar15);
        }
        *(uint *)&pFVar9[0xb].Data = uVar30 + 1;
        pFVar26 = pFVar9[10].Data;
        pFVar21 = pFVar26 + (longlong)(int)uVar30 * 0x20;
        *(double *)pFVar21 = local_1d0;
        *(double *)(pFVar21 + 8) = dStack_1c8;
        pFVar26 = pFVar26 + (longlong)(int)uVar30 * 0x20 + 0x10;
        *(double *)pFVar26 = local_1c0;
        *(ulonglong *)(pFVar26 + 8) = CONCAT71(uStack_1b7,uStack_1b8);
LAB_14d275473:
        local_298 = (ForElementType<unsigned_int>)((longlong)local_298 + 4);
      } while (local_298 != local_280);
    }
    local_188.UnvisitedBitMask = local_188.UnvisitedBitMask & ~local_188._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
  }
  iVar12 = 0;
  uStack_160 = 0;
  local_148 = 0;
  uStack_14c = local_148;
  if (local_80 != 0) {
    puVar15 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar15 = local_88;
    }
    uVar33 = *puVar15;
    local_148 = 0;
    uStack_160 = 0;
    while (uVar33 == 0) {
      lVar22 = (longlong)(int)uStack_160;
      local_148 = local_148 + 0x20;
      uStack_160 = uStack_160 + 1;
      uStack_14c = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_160)
      goto LAB_14d2755f2;
      uVar33 = puVar15[lVar22 + 1];
    }
    local_268 = (ulonglong)(-uVar33 & uVar33);
    uVar3 = local_268 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_1a8.Key._4_4_ = (int)lVar22;
    uStack_14c = local_1a8.Key._4_4_ + -1 + local_148;
    if ((int)local_80 < (int)uStack_14c) {
      uStack_14c = local_80;
    }
  }
LAB_14d2755f2:
  local_168 = (longlong *)local_a8;
  uStack_15c = (undefined4)local_268;
  uVar27 = local_80 & 0xffffffe0;
  uStack_144 = local_ac;
  local_158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  iStack_140 = local_a8._8_4_ - local_74;
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar33 = -1 << ((byte)local_80 & 0x1f);
  TStack_130._padding_ = CONCAT44(uStack_15c,uStack_160);
  iVar24 = (int)local_80 >> 5;
  local_2a0 = (ForAnyElementType *)CONCAT44(local_2a0._4_4_,uVar33);
  TStack_130._28_4_ = local_ac;
  TStack_130.BaseBitIndex = local_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  local_138 = local_168;
  TStack_130.Array = local_158;
  if ((int)local_80 < 0) {
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar33 = (uint)local_2a0;
  }
  this = local_190;
  if (uVar30 != local_80) {
    puVar15 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar15 = local_88;
    }
    uVar33 = uVar33 & puVar15[iVar24];
    while (uVar33 == 0) {
      lVar22 = (longlong)iVar24;
      uVar27 = uVar27 + 0x20;
      iVar24 = iVar24 + 1;
      uVar30 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_14d275750;
      uVar33 = puVar15[lVar22 + 1];
    }
    uVar3 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    uVar30 = (uVar27 - 1) + (int)lVar22;
    if ((int)local_80 < (int)uVar30) {
      uVar30 = local_80;
    }
  }
LAB_14d275750:
  while( true ) {
    plVar10 = local_138;
    if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
      `TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,`anonymous_namespace'::FMeshSectionAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_290);
    }
    if (((TStack_130.CurrentBitIndex == uVar30) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar10 == (longlong *)local_a8)) break;
    pTVar31 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
              (*plVar10 + 8 + (longlong)TStack_130.CurrentBitIndex * 0xc0);
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_210.ArrayMax = 0;
    UProceduralMeshComponent::CreateMeshSection
              (this,iVar12,pTVar31,(TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar31 + 1),
               pTVar31 + 2,
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(pTVar31 + 3),
               &local_210,&local_210,&local_210,
               (TArray<FColor,TSizedDefaultAllocator<32>_> *)(pTVar31 + 4),
               (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)(pTVar31 + 5),true);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    iVar12 = iVar12 + 1;
  }
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,`anonymous_namespace'::FMeshSectionAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,_anonymous_namespace_::FMeshSectionAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return;
}

// SliceConvexElem @ 14d276af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SliceConvexElem(FKConvexElem *param_1,TPlane<double> *param_2,
               TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStackY_1a8 [32];
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> local_158;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  FKConvexElem local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  FKConvexElem::GetPlanes(param_1,&local_158);
  if (3 < local_158.ArrayNum) {
    local_148 = (uint)param_2->_padding_ ^ (uint)__xmm_80000000000000008000000000000000;
    uStack_144 = *(uint *)((longlong)&param_2->_padding_ + 4) ^
                 __xmm_80000000000000008000000000000000._4_4_;
    uStack_140 = (uint)param_2->_padding_ ^ _UNK_15066df78;
    uStack_13c = *(uint *)((longlong)&param_2->_padding_ + 4) ^ _UNK_15066df7c;
    local_138 = (uint)param_2->_padding_ ^ (uint)__xmm_80000000000000008000000000000000;
    uStack_134 = *(uint *)((longlong)&param_2->_padding_ + 4) ^
                 __xmm_80000000000000008000000000000000._4_4_;
    uStack_130 = *(uint *)&param_2->W ^ _UNK_15066df78;
    uStack_12c = *(uint *)((longlong)&param_2->W + 4) ^ _UNK_15066df7c;
    iVar4 = local_158.ArrayNum;
    if ((local_158.AllocatorInstance.Data <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 <
        local_158.AllocatorInstance.Data + (longlong)local_158.ArrayMax * 0x20)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
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
      iVar4 = local_158.ArrayNum;
    }
    if (iVar4 == local_158.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1020,&local_158.AllocatorInstance,&local_158.ArrayMax);
    }
    local_158.ArrayNum = iVar4 + 1;
    *(ulonglong *)(local_158.AllocatorInstance.Data + (longlong)iVar4 * 0x20) =
         CONCAT44(uStack_144,local_148);
    *(ulonglong *)(local_158.AllocatorInstance.Data + (longlong)iVar4 * 0x20 + 8) =
         CONCAT44(uStack_13c,uStack_140);
    *(ulonglong *)(local_158.AllocatorInstance.Data + (longlong)iVar4 * 0x20 + 0x10) =
         CONCAT44(uStack_134,local_138);
    *(ulonglong *)(local_158.AllocatorInstance.Data + (longlong)iVar4 * 0x20 + 0x10 + 8) =
         CONCAT44(uStack_12c,uStack_130);
    FKConvexElem::FKConvexElem(&local_128);
    bVar3 = FKConvexElem::HullFromPlanes(&local_128,&local_158,&param_1->VertexData,__real_322bcc77)
    ;
    if ((bVar3) && (param_3 != &local_128.VertexData)) {
      piVar1 = &param_3->ArrayMax;
      param_3->ArrayNum = local_128.VertexData.ArrayNum;
      if ((local_128.VertexData.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_128.VertexData.ArrayNum,*piVar1,&param_3->AllocatorInstance,
                   local_128.VertexData.ArrayNum,piVar1);
        if (local_128.VertexData.ArrayNum != 0) {
          memcpy((param_3->AllocatorInstance).Data,local_128.VertexData.AllocatorInstance.Data,
                 (longlong)local_128.VertexData.ArrayNum * 0x18);
        }
      }
    }
    FKConvexElem::~FKConvexElem(&local_128);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return;
}

// Transform2DPolygonTo3D @ 14d27a6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Transform2DPolygonTo3D
          (FUtilPoly2D *param_1,TMatrix<double> *param_2,
          TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *param_3,TBox<double> *param_4)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  double dVar28;
  undefined4 uVar29;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  double dStack_160;
  undefined8 local_158;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_e8;
  undefined1 uStack_e0;
  uint7 uStack_df;
  double local_d8;
  
  dVar9 = _UNK_15061cbc8;
  dVar8 = ___xmm_3ff00000000000000000000000000000;
  dVar1 = param_2->M[2][1];
  dVar28 = param_2->M[2][2];
  dVar25 = param_2->M[2][0];
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  dVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar18 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  dVar22 = dVar1 * dVar1 + dVar25 * dVar25 + dVar28 * dVar28;
  dVar24 = dVar1;
  uVar27 = dVar28;
  dVar23 = dVar25;
  if ((dVar22 != __real_3ff0000000000000) &&
     (dVar24 = dVar6, uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_,
     dVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_,
     __real_3e45798ee0000000 <= dVar22)) {
    dVar22 = __real_3ff0000000000000 / SQRT(dVar22);
    dVar24 = dVar22 * dVar1;
    uVar27 = dVar22 * dVar28;
    dVar23 = dVar22 * dVar25;
  }
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar1 = param_2->M[0][1];
  dVar28 = param_2->M[0][0];
  dVar25 = param_2->M[0][2];
  dVar22 = dVar1 * dVar1 + dVar28 * dVar28 + dVar25 * dVar25;
  if (dVar22 != __real_3ff0000000000000) {
    if (dVar22 < __real_3e45798ee0000000) goto LAB_14d27a86b;
    local_d8 = __real_3ff0000000000000 / SQRT(dVar22);
    dVar28 = dVar28 * local_d8;
    dVar1 = dVar1 * local_d8;
    dVar25 = dVar25 * local_d8;
  }
  uVar26 = SUB84(dVar28,0);
  uVar29 = (undefined4)((ulonglong)dVar28 >> 0x20);
  uVar16 = SUB84(dVar25,0);
  uVar18 = (undefined4)((ulonglong)dVar25 >> 0x20);
  dVar6 = dVar1;
LAB_14d27a86b:
  iVar11 = (param_1->Verts).ArrayNum;
  uVar13 = 0;
  uVar5 = CONCAT44(uVar18,uVar16);
  uStack_e0 = 0;
  if (0 < iVar11) {
    lVar14 = 0;
    lVar7 = (ulonglong)uStack_df << 8;
    dVar1 = (double)(float)(double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) ^ uVar17,
                                            SUB84(dVar23,0) ^ uVar15);
    dVar28 = (double)(float)(double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) ^ uVar17,
                                             SUB84(dVar24,0) ^ uVar15);
    dVar25 = (double)(float)(double)CONCAT44((uint)((ulonglong)uVar27 >> 0x20) ^ uVar17,
                                             (uint)uVar27 ^ uVar15);
    local_e8 = uVar5;
    do {
      uVar15 = 0;
      if ((int)uVar13 < iVar11) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->Verts).AllocatorInstance.Data;
      pFVar3 = (param_3->AllocatorInstance).Data;
      uStack_130 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_108 = 0;
      dVar22 = *(double *)(pFVar2 + lVar14);
      dVar23 = *(double *)(pFVar2 + lVar14 + 8);
      local_198 = param_2->M[1][0] * dVar23 + param_2->M[0][0] * dVar22 + param_2->M[2][0] * dVar8 +
                  param_2->M[3][0] * dVar9;
      dStack_190 = param_2->M[1][1] * dVar23 + param_2->M[0][1] * dVar22 + param_2->M[2][1] * dVar8
                   + param_2->M[3][1] * dVar9;
      local_168 = CONCAT44(uVar29,uVar26);
      local_188 = param_2->M[0][2] * dVar22 + param_2->M[1][2] * dVar23 + param_2->M[2][2] * dVar8 +
                  dVar9 * param_2->M[3][2];
      local_148 = *(undefined4 *)(pFVar2 + lVar14 + 0x10);
      uStack_140 = *(undefined8 *)(pFVar2 + lVar14 + 0x18);
      uStack_138 = *(undefined8 *)(pFVar2 + lVar14 + 0x18 + 8);
      dStack_180 = dVar1;
      local_178 = dVar28;
      dStack_170 = dVar25;
      dStack_160 = dVar6;
      local_158 = uVar5;
      lStack_150 = lVar7;
      if (((pFVar3 <= (FScriptContainerElement *)&local_198) &&
          ((FScriptContainerElement *)&local_198 < pFVar3 + (longlong)param_3->ArrayMax * 0x98)) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = param_3->ArrayNum;
      if (iVar11 == param_3->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x898,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar11 + 1;
      lVar12 = (longlong)iVar11 * 0x98;
      pFVar2 = (param_3->AllocatorInstance).Data;
      *(double *)(pFVar2 + lVar12) = local_198;
      *(double *)(pFVar2 + lVar12 + 8) = dStack_190;
      *(double *)(pFVar2 + lVar12 + 0x10) = local_188;
      *(double *)(pFVar2 + lVar12 + 0x10 + 8) = dStack_180;
      *(double *)(pFVar2 + lVar12 + 0x20) = local_178;
      *(double *)(pFVar2 + lVar12 + 0x20 + 8) = dStack_170;
      *(undefined8 *)(pFVar2 + lVar12 + 0x30) = local_168;
      *(double *)(pFVar2 + lVar12 + 0x30 + 8) = dStack_160;
      *(undefined8 *)(pFVar2 + lVar12 + 0x40) = local_158;
      *(longlong *)(pFVar2 + lVar12 + 0x40 + 8) = lStack_150;
      *(ulonglong *)(pFVar2 + lVar12 + 0x50) = CONCAT44(uStack_144,local_148);
      *(undefined8 *)(pFVar2 + lVar12 + 0x50 + 8) = uStack_140;
      *(undefined8 *)(pFVar2 + lVar12 + 0x60) = uStack_138;
      *(undefined8 *)(pFVar2 + lVar12 + 0x60 + 8) = uStack_130;
      *(undefined8 *)(pFVar2 + lVar12 + 0x70) = local_128;
      *(undefined8 *)(pFVar2 + lVar12 + 0x70 + 8) = uStack_120;
      *(undefined8 *)(pFVar2 + lVar12 + 0x80) = local_118;
      *(undefined8 *)(pFVar2 + lVar12 + 0x80 + 8) = uStack_110;
      *(undefined8 *)(pFVar2 + lVar12 + 0x90) = local_108;
      if (param_4->IsValid == '\0') {
        (param_4->Max).field0_0x0._s_0.X = local_198;
        (param_4->Max).field0_0x0._s_0.Y = dStack_190;
        param_4->IsValid = '\x01';
        (param_4->Min).field0_0x0._s_0.X = local_198;
        (param_4->Min).field0_0x0._s_0.Y = dStack_190;
        (param_4->Max).field0_0x0._s_0.Z = local_188;
        (param_4->Min).field0_0x0._s_0.Z = local_188;
      }
      else {
        uVar20 = SUB84(local_188,0);
        uVar21 = (undefined4)((ulonglong)local_188 >> 0x20);
        uVar16 = SUB84(local_198,0);
        uVar18 = (undefined4)((ulonglong)local_198 >> 0x20);
        dVar22 = *(double *)&(param_4->Min).field0_0x0;
        if (dVar22 <= local_198) {
          uVar16 = SUB84(dVar22,0);
          uVar18 = (undefined4)((ulonglong)dVar22 >> 0x20);
        }
        dVar22 = (param_4->Max).field0_0x0._s_0.X;
        dVar23 = local_198;
        if (local_198 <= dVar22) {
          dVar23 = dVar22;
        }
        (param_4->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar18,uVar16);
        uVar19 = (undefined4)((ulonglong)dStack_190 >> 0x20);
        dVar22 = *(double *)((longlong)&(param_4->Min).field0_0x0 + 8);
        uVar16 = SUB84(dStack_190,0);
        uVar18 = uVar19;
        if (dVar22 <= dStack_190) {
          uVar16 = SUB84(dVar22,0);
          uVar18 = (undefined4)((ulonglong)dVar22 >> 0x20);
        }
        (param_4->Max).field0_0x0._s_0.X = dVar23;
        (param_4->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar18,uVar16);
        dVar22 = *(double *)((longlong)&(param_4->Min).field0_0x0 + 0x10);
        uVar16 = uVar20;
        uVar18 = uVar21;
        if (dVar22 <= local_188) {
          uVar16 = SUB84(dVar22,0);
          uVar18 = (undefined4)((ulonglong)dVar22 >> 0x20);
        }
        dVar22 = *(double *)((longlong)&(param_4->Max).field0_0x0 + 0x10);
        if (local_188 <= dVar22) {
          uVar20 = SUB84(dVar22,0);
          uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
        }
        (param_4->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar16);
        dVar22 = *(double *)((longlong)&(param_4->Max).field0_0x0 + 8);
        uVar16 = SUB84(dVar22,0);
        uVar18 = (int)((ulonglong)dVar22 >> 0x20);
        if (dVar22 <= dStack_190) {
          uVar16 = SUB84(dStack_190,0);
          uVar18 = uVar19;
        }
        (param_4->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar21,uVar20);
        (param_4->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar18,uVar16);
      }
      iVar11 = (param_1->Verts).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x30;
    } while ((int)uVar13 < iVar11);
  }
  return;
}

// TriangulatePoly @ 14d27ac30

bool __cdecl
TriangulatePoly(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
               TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *param_2,int param_3,
               TVector<float> *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0;
  FScriptContainerElement *local_d8;
  longlong local_d0;
  FScriptContainerElement *local_c8;
  TVector<float>_u_0 local_c0;
  TVector<float>_u_0 local_b4;
  TVector<float>_u_0 local_a8;
  TVector<float>_u_0 local_9c;
  longlong local_90;
  FScriptContainerElement *local_88;
  longlong local_80;
  
  iVar12 = param_2->ArrayNum - param_3;
  if (iVar12 < 3) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_f8 = 0;
    if (((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    local_f4 = 2;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_f8;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_f4) &&
        ((FScriptContainerElement *)&local_f4 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    local_f0 = 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_f4;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_f0) &&
        ((FScriptContainerElement *)&local_f0 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_f0;
    return true;
  }
  uVar1 = param_1->ArrayNum;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar12,&local_108,(int *)&local_100,(int *)((longlong)&local_100 + 4));
  uVar14 = 0;
  if (0 < iVar12) {
    lVar13 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < (int)(uint)local_100) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar8 = uVar14 + param_3;
      uVar14 = uVar14 + 1;
      *(int *)(local_108.Data + lVar13 * 4) = iVar8;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar12);
  }
  do {
    if ((int)(uint)local_100 < 3) {
      bVar4 = true;
LAB_14d27b7a7:
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      return bVar4;
    }
    uVar14 = 0;
    local_e0 = 0;
    if ((int)(uint)local_100 < 1) {
LAB_14d27b812:
      iVar12 = param_1->ArrayNum;
      if (iVar12 < (int)uVar1) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar1 - iVar12,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        memset((param_1->AllocatorInstance).Data + (longlong)iVar8 * 4,0,
               (longlong)(int)(uVar1 - iVar12) << 2);
        bVar4 = false;
      }
      else {
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
        }
        if ((int)uVar1 < iVar12) {
          uVar14 = iVar12 - uVar1;
          if (((int)(uVar14 | uVar1) < 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (uVar14 != 0) {
            pFVar2 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 4;
            iVar12 = (param_1->ArrayNum - uVar14) - uVar1;
            if (iVar12 != 0) {
              memmove(pFVar2,pFVar2 + (longlong)(int)uVar14 * 4,(longlong)iVar12 << 2);
            }
            iVar12 = param_1->ArrayNum - uVar14;
            param_1->ArrayNum = iVar12;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&param_1->AllocatorInstance,iVar12,&param_1->ArrayMax);
          }
        }
        bVar4 = false;
      }
      goto LAB_14d27b7a7;
    }
    while( true ) {
      lVar13 = local_e0;
      uVar15 = uVar14;
      if (uVar14 == 0) {
        uVar15 = (uint)local_100;
      }
      uVar15 = uVar15 - 1;
      uVar10 = (int)(uVar14 + 1) % (int)(uint)local_100;
      uVar11 = 0;
      if ((int)uVar15 < (int)(uint)local_100) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar11 = *(uint *)(local_108.Data + (longlong)(int)uVar15 * 4);
      uVar6 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_c8 = (param_2->AllocatorInstance).Data;
      local_d0 = (longlong)(int)uVar11 * 0x98;
      uVar11 = 0;
      if ((int)uVar14 < (int)(uint)local_100) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar11 = *(uint *)(local_108.Data + lVar13 * 4);
      uVar6 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_d8 = (param_2->AllocatorInstance).Data;
      lVar13 = (longlong)(int)uVar11 * 0x98;
      uVar11 = 0;
      if ((int)uVar10 < (int)(uint)local_100) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      local_80 = lVar13;
      if ((uVar11 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar11 = *(uint *)(local_108.Data + (longlong)(int)uVar10 * 4);
      uVar6 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_88 = (param_2->AllocatorInstance).Data;
      local_90 = (longlong)(int)uVar11 * 0x98;
      fVar21 = (float)(*(double *)(local_d8 + lVar13 + 8) - *(double *)(local_c8 + local_d0 + 8));
      fVar18 = (float)(*(double *)(local_88 + local_90 + 0x10) -
                      *(double *)(local_c8 + local_d0 + 0x10));
      fVar16 = (float)(*(double *)(local_d8 + lVar13 + 0x10) -
                      *(double *)(local_c8 + local_d0 + 0x10));
      fVar20 = (float)(*(double *)(local_88 + local_90 + 8) - *(double *)(local_c8 + local_d0 + 8));
      fVar19 = (float)(*(double *)(local_d8 + lVar13) - *(double *)(local_c8 + local_d0));
      fVar17 = (float)(*(double *)(local_88 + local_90) - *(double *)(local_c8 + local_d0));
      if ((fVar21 * fVar18 - fVar16 * fVar20) * (param_4->field0_0x0)._s_0.X +
          (fVar17 * fVar16 - fVar19 * fVar18) * (param_4->field0_0x0)._s_0.Y +
          (fVar19 * fVar20 - fVar17 * fVar21) * (param_4->field0_0x0)._s_0.Z <= 0.0) break;
LAB_14d27b7f3:
      uVar14 = uVar14 + 1;
      local_e0 = local_e0 + 1;
      if ((int)(uint)local_100 <= (int)uVar14) goto LAB_14d27b812;
    }
    uVar11 = 0;
    lVar13 = 0;
    if (0 < (int)(uint)local_100) {
      do {
        uVar6 = 0;
        if ((int)uVar11 < (int)(uint)local_100) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar6 = *(uint *)(local_108.Data + lVar13 * 4);
        uVar7 = 0;
        if ((int)uVar6 < param_2->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (((uVar11 != uVar15) && (lVar13 != local_e0)) && (uVar11 != uVar10)) {
          pFVar2 = (param_2->AllocatorInstance).Data;
          lVar9 = (longlong)(int)uVar6 * 0x98;
          local_c0._s_0.X = (float)*(double *)(pFVar2 + lVar9);
          local_c0._s_0.Y = (float)*(double *)(pFVar2 + lVar9 + 8);
          local_c0._s_0.Z = (float)*(double *)(pFVar2 + lVar9 + 0x10);
          local_b4._s_0.X = (float)*(double *)(local_88 + local_90);
          local_b4._s_0.Y = (float)*(double *)(local_88 + local_90 + 8);
          local_b4._s_0.Z = (float)*(double *)(local_88 + local_90 + 0x10);
          local_a8._s_0.X = (float)*(double *)(local_d8 + local_80);
          local_a8._s_0.Y = (float)*(double *)(local_d8 + local_80 + 8);
          local_a8._s_0.Z = (float)*(double *)(local_d8 + local_80 + 0x10);
          local_9c._s_0.X = (float)*(double *)(local_c8 + local_d0);
          local_9c._s_0.Z = (float)*(double *)(local_c8 + local_d0 + 0x10);
          local_9c._s_0.Y = (float)*(double *)(local_c8 + local_d0 + 8);
          bVar4 = FGeomTools::PointInTriangle
                            ((TVector<float> *)&local_9c._s_0,(TVector<float> *)&local_a8._s_0,
                             (TVector<float> *)&local_b4._s_0,(TVector<float> *)&local_c0._s_0,0.0);
          if (bVar4) goto LAB_14d27b7f3;
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 1;
        if ((int)(uint)local_100 <= (int)uVar11) break;
      } while( true );
    }
    uVar11 = 0;
    if ((int)uVar15 < (int)(uint)local_100) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_ec = *(undefined4 *)(local_108.Data + (longlong)(int)uVar15 * 4);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_ec) &&
        ((FScriptContainerElement *)&local_ec < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_ec;
    uVar15 = 0;
    if ((int)uVar10 < (int)(uint)local_100) {
      uVar15 = ~uVar10 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_e8 = *(undefined4 *)(local_108.Data + (longlong)(int)uVar10 * 4);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_e8;
    uVar15 = 0;
    if ((int)uVar14 < (int)(uint)local_100) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_e4 = *(undefined4 *)(local_108.Data + local_e0 * 4);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_e4) &&
        ((FScriptContainerElement *)&local_e4 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_e4;
    uVar15 = 0;
    if ((int)uVar14 < (int)(uint)local_100) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar8 = ((uint)local_100 - uVar14) + -1;
    iVar12 = (uint)local_100;
    if (iVar8 != 0) {
      memmove(local_108.Data + (longlong)(int)uVar14 * 4,
              local_108.Data + (longlong)(int)uVar14 * 4 + 4,(longlong)iVar8 << 2);
      iVar12 = (uint)local_100;
    }
    local_100 = CONCAT44(local_100._4_4_,iVar12 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_108,iVar12 + -1,(int *)((longlong)&local_100 + 4));
  } while( true );
}

// Z_Construct_UClass_UKismetProceduralMeshLibrary_NoRegister @ 14d27db80

UClass * __cdecl Z_Construct_UClass_UKismetProceduralMeshLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralMeshComponent",L"KismetProceduralMeshLibrary",
               &Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.InnerSingleton,
               UKismetProceduralMeshLibrary::StaticRegisterNativesUKismetProceduralMeshLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UKismetProceduralMeshLibrary>,
               InternalVTableHelperCtorCaller<UKismetProceduralMeshLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_ProceduralMeshComponent @ 14d280b40

void __cdecl IMPLEMENT_MODULE_ProceduralMeshComponent(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingProceduralMesh'' @ 150455c00

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingProceduralMesh__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingProceduralMesh);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150455c20

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

// `dynamic_atexit_destructor_for_'LogProceduralComponent'' @ 150455c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogProceduralComponent__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogProceduralComponent);
  return;
}

