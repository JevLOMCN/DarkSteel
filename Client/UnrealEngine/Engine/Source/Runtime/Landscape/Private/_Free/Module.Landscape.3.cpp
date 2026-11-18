// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 130

// PositionCurve'' @ 141077480

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 1410774a0

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 1410774c0

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// ShaderTypeRegistration'' @ 1410774e0

void __cdecl
`dynamic_initializer_for_'UE::Landscape::Culling::FBuildLandscapeTileDataCS::
ShaderTypeRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderTypeRegistration *local_18 [2];
  
  bVar3 = FShaderTypeRegistration::AreShaderTypesInitialized();
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AreShaderTypesInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x63a,
                       L"Shader type was loaded too late, use ELoadingPhase::PostConfigInit on your module to cause it to load earlier. This shader will not be compiled or function.  The module and shader will appear in the callstack of this assert."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = FShaderTypeRegistration::GetInstances();
  local_18[0] = &UE::Landscape::Culling::FBuildLandscapeTileDataCS::ShaderTypeRegistration;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
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
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FShaderTypeRegistration **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  atexit(`dynamic_atexit_destructor_for_'UE::Landscape::Culling::FBuildLandscapeTileDataCS::
         ShaderTypeRegistration__);
  return;
}

// StaticType'' @ 1410775e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FLandscapeTileVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&FLandscapeTileVertexFactory::StaticType,L"FLandscapeTileVertexFactory",
             L"/Engine/Private/LandscapeVertexFactory.ush",
             SupportsLandscape|SupportsPSOPrecaching|SupportsLightmapBaking|SupportsDynamicLighting|
             SupportsStaticLighting|UsedWithMaterials,
             ConstructVertexFactoryParameters<FLandscapeTileVertexFactory>,
             GetVertexFactoryParametersLayout<FLandscapeTileVertexFactory>,
             GetVertexFactoryParametersElementShaderBindings<FLandscapeTileVertexFactory>,
             FLandscapeTileVertexFactory::GetPSOPrecacheVertexFetchElements,
             FLandscapeTileVertexFactory::ShouldCompilePermutation);
  atexit(`dynamic_atexit_destructor_for_'FLandscapeTileVertexFactory::StaticType__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeApplyPhysicalMaterialChangesImmediately'' @ 141077660

void __cdecl _dynamic_initializer_for__CVarLandscapeApplyPhysicalMaterialChangesImmediately__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLandscapeApplyPhysicalMaterialChangesImmediately,
             L"landscape.ApplyPhysicalMaterialChangesImmediately",local_res8,
             L"Applies physical material task changes immediately rather than during the next cook/PIE."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeApplyPhysicalMaterialChangesImmediately__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeEnableGPUCulling'' @ 1410776b0

void __cdecl _dynamic_initializer_for__CVarLandscapeEnableGPUCulling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLandscapeEnableGPUCulling,L"landscape.EnableGPUCulling",local_res8,
             L"Whether to use landscape GPU culling when it\'s supported. Allows to toggle culling at runtime"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeEnableGPUCulling__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeEnableGPUCullingShadows'' @ 141077700

void __cdecl _dynamic_initializer_for__CVarLandscapeEnableGPUCullingShadows__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLandscapeEnableGPUCullingShadows,L"landscape.EnableGPUCullingShadows",local_res8,
             L"Whether to use landscape GPU culling for a shadow views when it\'s supported. Allows to toggle shadow views culling at runtime"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeEnableGPUCullingShadows__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeSupportCulling'' @ 141077750

void __cdecl _dynamic_initializer_for__CVarLandscapeSupportCulling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLandscapeSupportCulling,L"landscape.SupportGPUCulling",local_res8,
             L"Whether to support landscape GPU culling",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeSupportCulling__);
  return;
}

// `dynamic_initializer_for_'GCullingSystem'' @ 1410777a0

void __cdecl UE::Landscape::Culling::_dynamic_initializer_for__GCullingSystem__(void)

{
  atexit(_dynamic_atexit_destructor_for__GCullingSystem__);
  return;
}

// `dynamic_initializer_for_'GRegisterFHeightmapTextureEdgeSnapshotCustomVersion'' @ 1410777c0

void __cdecl _dynamic_initializer_for__GRegisterFHeightmapTextureEdgeSnapshotCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FHeightmapTextureEdgeSnapshotCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,5,L"FHeightmapTextureEdgeSnapshotCustomVersion",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterFHeightmapTextureEdgeSnapshotCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogLandscape'' @ 141077800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLandscape__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogLandscape,L"LogLandscape",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLandscape__);
  return;
}

// `dynamic_initializer_for_'LogLandscapeBP'' @ 141077840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLandscapeBP__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLandscapeBP,L"LogLandscapeBP",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogLandscapeBP__);
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 141077880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1410778c0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h__Script_Landscape_1958986362'' @ 1410778e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h__Script_Landscape_1958986362__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h__Script_Landscape_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h__Script_Landscape_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h__Script_Landscape_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h__Script_Landscape_2980828661'' @ 141077930

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h__Script_Landscape_2980828661__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h__Script_Landscape_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEdgeFixup_h__Script_Landscape_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeConfigHelper_h__Script_Landscape_3848783702'' @ 141077980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeConfigHelper_h__Script_Landscape_3848783702__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeConfigHelper_h__Script_Landscape_Statics
             ::EnumInfo,1);
  return;
}

// ELandscapeResizeMode_StaticEnum @ 145f22c10

UEnum * __cdecl ELandscapeResizeMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeResizeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeResizeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeResizeMode,(UObject *)pUVar1,
                       L"ELandscapeResizeMode");
  }
  return Z_Registration_Info_UEnum_ELandscapeResizeMode.OuterSingleton;
}

// Z_Construct_UClass_ULandscapeComponent @ 145f230f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeComponent(void)

{
  if (Z_Registration_Info_UClass_ULandscapeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeComponent.OuterSingleton,
               &Z_Construct_UClass_ULandscapeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeComponent.OuterSingleton;
}

// Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup_NoRegister @ 145f23130

UClass * __cdecl Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = ULandscapeHeightmapTextureEdgeFixup::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeHeightmapTextureEdgeFixup",
               &Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.InnerSingleton,
               ULandscapeHeightmapTextureEdgeFixup::
               StaticRegisterNativesULandscapeHeightmapTextureEdgeFixup,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeHeightmapTextureEdgeFixup>,
               InternalVTableHelperCtorCaller<ULandscapeHeightmapTextureEdgeFixup>,local_res8,
               UAssetUserData::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED @ 145f231f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED(void)

{
  if (Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.OuterSingleton,
               &Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.OuterSingleton;
}

// Z_Construct_UScriptStruct_FHeightmapData @ 145f23230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHeightmapData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHeightmapData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHeightmapData.InnerSingleton,
               &Z_Construct_UScriptStruct_FHeightmapData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHeightmapData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHeightmapData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride @ 145f232b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapePerLODMaterialOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapePerLODMaterialOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapePerLODMaterialOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapePerLODMaterialOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWeightmapData @ 145f23330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWeightmapData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWeightmapData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWeightmapData.InnerSingleton,
               &Z_Construct_UScriptStruct_FWeightmapData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWeightmapData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWeightmapData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo @ 145f233b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWeightmapLayerAllocationInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWeightmapLayerAllocationInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWeightmapLayerAllocationInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWeightmapLayerAllocationInfo.InnerSingleton;
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

// NewStructOps @ 145f23430

void * __cdecl Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapeEditToolRenderData,&UE::CoreUObject::Private::Construct<FLandscapeEditToolRenderData>,&UE::CoreUObject::Private::ConstructForTests<FLandscapeEditToolRenderData>,&UE::CoreUObject::Private::Destruct<FLandscapeEditToolRenderData>,&UE::CoreUObject::Private::Copy<FLandscapeEditToolRenderData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 145f23590

void * __cdecl Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWeightmapLayerAllocationInfo,&UE::CoreUObject::Private::Construct<FWeightmapLayerAllocationInfo>,&UE::CoreUObject::Private::ConstructForTests<FWeightmapLayerAllocationInfo>,&UE::CoreUObject::Private::Destruct<FWeightmapLayerAllocationInfo>,&UE::CoreUObject::Private::Copy<FWeightmapLayerAllocationInfo>,&UE::CoreUObject::Private::GetStructTypeHash<FWeightmapLayerAllocationInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 145f236b0

void * __cdecl
Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapeComponentMaterialOverride,&UE::CoreUObject::Private::Construct<FLandscapeComponentMaterialOverride>,&UE::CoreUObject::Private::ConstructForTests<FLandscapeComponentMaterialOverride>,&UE::CoreUObject::Private::Destruct<FLandscapeComponentMaterialOverride>,&UE::CoreUObject::Private::Copy<FLandscapeComponentMaterialOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 145f236f0

void * __cdecl
Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapePerLODMaterialOverride,&UE::CoreUObject::Private::Construct<FLandscapePerLODMaterialOverride>,&UE::CoreUObject::Private::ConstructForTests<FLandscapePerLODMaterialOverride>,&UE::CoreUObject::Private::Destruct<FLandscapePerLODMaterialOverride>,&UE::CoreUObject::Private::Copy<FLandscapePerLODMaterialOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 145f23730

void * __cdecl Z_Construct_UScriptStruct_FWeightmapData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWeightmapData,&UE::CoreUObject::Private::Construct<FWeightmapData>,&UE::CoreUObject::Private::ConstructForTests<FWeightmapData>,&UE::CoreUObject::Private::Destruct<FWeightmapData>,&UE::CoreUObject::Private::Copy<FWeightmapData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 145f23830

void * __cdecl Z_Construct_UScriptStruct_FHeightmapData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHeightmapData,&UE::CoreUObject::Private::Construct<FHeightmapData>,&UE::CoreUObject::Private::ConstructForTests<FHeightmapData>,&UE::CoreUObject::Private::Destruct<FHeightmapData>,&UE::CoreUObject::Private::Copy<FHeightmapData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 145f23870

void * __cdecl Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapeLayerComponentData,&UE::CoreUObject::Private::Construct<FLandscapeLayerComponentData>,&UE::CoreUObject::Private::ConstructForTests<FLandscapeLayerComponentData>,&UE::CoreUObject::Private::Destruct<FLandscapeLayerComponentData>,&UE::CoreUObject::Private::Copy<FLandscapeLayerComponentData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ELandscapeClearMode_StaticEnum @ 145f238b0

UEnum * __cdecl ELandscapeClearMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeClearMode,(UObject *)pUVar1,
                       L"ELandscapeClearMode");
  }
  return Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton;
}

// Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation @ 145f23b10

UFunction * __cdecl
Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup @ 145f23b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup(void)

{
  if (Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.OuterSingleton,
               &Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.OuterSingleton;
}

// NewStructOps @ 145f23b90

void * __cdecl Z_Construct_UScriptStruct_FHeightmapTextureEdgeSnapshot_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHeightmapTextureEdgeSnapshot,&UE::CoreUObject::Private::Construct<FHeightmapTextureEdgeSnapshot>,&UE::CoreUObject::Private::ConstructForTests<FHeightmapTextureEdgeSnapshot>,&UE::CoreUObject::Private::Destruct<FHeightmapTextureEdgeSnapshot>,&UE::CoreUObject::Private::Copy<FHeightmapTextureEdgeSnapshot>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation @ 145f23bd0

UFunction * __cdecl
Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULandscapeComponent_GetGrassTypesBP @ 145f23c10

UFunction * __cdecl Z_Construct_UFunction_ULandscapeComponent_GetGrassTypesBP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULandscapeComponent_GetGrassTypesBP_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic @ 145f23c50

UFunction * __cdecl Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD @ 145f23c90

UFunction * __cdecl Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULandscapeComponent_SetLODBias @ 145f23cd0

UFunction * __cdecl Z_Construct_UFunction_ULandscapeComponent_SetLODBias(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUserTriggeredChangeRequested_SetBit @ 145f23d40

void __cdecl
Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x650) = 1;
  return;
}

// NewProp_bNaniteActive_SetBit @ 145f23d50

void __cdecl
Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x651) = 1;
  return;
}

// operator<<<unsigned_int,4,4294967295> @ 145f241a0

FArchive * __cdecl
operator<<<unsigned_int,4,4294967295>
          (FArchive *param_1,TStaticArray<unsigned_int,4,4294967295> *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,param_2->Elements);
    }
  }
  else {
    param_2->Elements[0] = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = param_2->Elements + 1;
  puVar1 = &param_1->field_0x2a;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = param_2->Elements + 2;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = param_2->Elements + 3;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<<<unsigned_int,8,4294967295> @ 145f24300

FArchive * __cdecl
operator<<<unsigned_int,8,4294967295>
          (FArchive *param_1,TStaticArray<unsigned_int,8,4294967295> *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,param_2->Elements);
    }
  }
  else {
    param_2->Elements[0] = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = param_2->Elements + 1;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = param_2->Elements + 2;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = param_2->Elements + 3;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = param_2->Elements + 4;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = param_2->Elements + 5;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = param_2->Elements + 6;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = param_2->Elements + 7;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// AddPass<`FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>'::__l2::<lambda_1>_> @ 145f24580

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFBuildLandscapeTileDataCS_Culling_Landscape_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFBuildLandscapeTileDataCS_Culling_Landscape_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FBuildLandscapeTileDataCS_Culling_Landscape_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDynamicWindEvalCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>'::__l2::<lambda_1>_> @ 145f24970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFBuildLandscapeTileDataCS_Culling_Landscape_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFBuildLandscapeTileDataCS_Culling_Landscape_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FBuildLandscapeTileDataCS_Culling_Landscape_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDynamicWindEvalCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// BindForLegacyShaderParameters<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters> @ 145f24c30

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters::FTypeInfo::
           GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClearUnusedGraphResources<UE::Landscape::Culling::FBuildLandscapeTileDataCS> @ 145f24c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<UE::Landscape::Culling::FBuildLandscapeTileDataCS>
          (TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ConstructItems<TObjectPtr<ULandscapeWeightmapUsage>,TObjectPtr<ULandscapeWeightmapUsage>,int> @ 145f24d10

void __cdecl
ConstructItems<TObjectPtr<ULandscapeWeightmapUsage>,TObjectPtr<ULandscapeWeightmapUsage>,int>
          (void *param_1,TObjectPtr<ULandscapeWeightmapUsage> *param_2,int param_3)

{
  TObjectPtr<ULandscapeWeightmapUsage> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<ULandscapeWeightmapUsage>_u_0)param_2->field0_0x0;
      ((TObjectPtr<ULandscapeWeightmapUsage>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (ULandscapeWeightmapUsage *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (ULandscapeWeightmapUsage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int> @ 145f24d70

void __cdecl
ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
          (void *param_1,TObjectPtr<UTexture2D> *param_2,int param_3)

{
  TObjectPtr<UTexture2D> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UTexture2D>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UTexture2D>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UTexture2D *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UTexture2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWeightmapLayerAllocationInfo,FWeightmapLayerAllocationInfo,int> @ 145f24dd0

void __cdecl
ConstructItems<FWeightmapLayerAllocationInfo,FWeightmapLayerAllocationInfo,int>
          (void *param_1,FWeightmapLayerAllocationInfo *param_2,int param_3)

{
  uchar uVar1;
  UObject *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (uchar *)((longlong)param_1 + 9);
    puVar4 = &param_2->WeightmapTextureChannel;
    do {
      pUVar2 = *(UObject **)(puVar3 + (longlong)param_2 + (-9 - (longlong)param_1));
      *(UObject **)(puVar3 + -9) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      puVar3[-1] = puVar4[-1];
      uVar1 = *puVar4;
      puVar4 = puVar4 + 0x10;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructVertexFactoryParameters<FLandscapeTileVertexFactory> @ 145f24e50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FVertexFactoryShaderParameters * __cdecl
ConstructVertexFactoryParameters<FLandscapeTileVertexFactory>
          (EShaderFrequency param_1,FShaderParameterMap *param_2)

{
  code *pcVar1;
  bool bVar2;
  FVertexFactoryShaderParameters *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Pixel:
    pFVar3 = operator_new(4);
    if (pFVar3 != (FVertexFactoryShaderParameters *)0x0) {
      pFVar3->Size_DEPRECATED = 0;
      return pFVar3;
    }
    break;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    break;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0x113,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVertexFactoryShaderParameters *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FVertexFactoryShaderParameters *)0x0;
}

// DefaultConstructItems<UE::Landscape::Culling::FCullingEntry,int> @ 145f24ef0

void __cdecl
DefaultConstructItems<UE::Landscape::Culling::FCullingEntry,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 200);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 2;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 2;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0x80;
      puVar1[0x1a] = 0xffffffff;
      puVar1[0x1b] = 0;
      *(undefined8 *)(puVar1 + 0x1e) = 0;
      puVar1[0x20] = 0;
      puVar1 = puVar1 + 0x54;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Landscape::Culling::FDispatchIntermediates,int> @ 145f24f60

void __cdecl
DefaultConstructItems<UE::Landscape::Culling::FDispatchIntermediates,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection,int> @ 145f24f90

void __cdecl
DefaultConstructItems<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView,int> @ 145f24fa0

void __cdecl
DefaultConstructItems<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Landscape::Culling::FViewStateIntermediateData,int> @ 145f24fb0

void __cdecl
DefaultConstructItems<UE::Landscape::Culling::FViewStateIntermediateData,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x50);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 8;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Landscape::Culling::FCullingEntry,int> @ 145f24fe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
DestructItems<UE::Landscape::Culling::FCullingEntry,int>(FCullingEntry *param_1,int param_2)

{
  FDispatchIntermediates *pFVar1;
  FViewStateIntermediateData *pFVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)&(param_1->CullingArguments).field_0x40;
    do {
      *(undefined4 *)(puVar3 + 1) = 0;
      if ((void *)*puVar3 != (void *)0x0) {
        FMemory::Free((void *)*puVar3);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar3 + -8));
      pFVar1 = (FDispatchIntermediates *)puVar3[-10];
      if ((FDispatchIntermediates *)puVar3[-10] == (FDispatchIntermediates *)0x0) {
        pFVar1 = (FDispatchIntermediates *)(puVar3 + -0xe);
      }
      DestructItems<UE::Landscape::Culling::FDispatchIntermediates,int>
                (pFVar1,*(int *)(puVar3 + -9));
      if ((void *)puVar3[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar3[-10]);
      }
      pFVar2 = (FViewStateIntermediateData *)puVar3[-0x10];
      if ((FViewStateIntermediateData *)puVar3[-0x10] == (FViewStateIntermediateData *)0x0) {
        pFVar2 = (FViewStateIntermediateData *)(puVar3 + -0x26);
      }
      DestructItems<UE::Landscape::Culling::FViewStateIntermediateData,int>
                (pFVar2,*(int *)(puVar3 + -0xf));
      if ((void *)puVar3[-0x10] != (void *)0x0) {
        FMemory::Free((void *)puVar3[-0x10]);
      }
      puVar3 = puVar3 + 0x2a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Landscape::Culling::FDispatchIntermediates,int> @ 145f25090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
DestructItems<UE::Landscape::Culling::FDispatchIntermediates,int>
          (FDispatchIntermediates *param_1,int param_2)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = (param_1->TileDataBuffer).Reference;
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    pFVar2 = (param_1->IndirectArgsBuffer).Reference;
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Landscape::Culling::FViewStateIntermediateData,int> @ 145f25110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
DestructItems<UE::Landscape::Culling::FViewStateIntermediateData,int>
          (FViewStateIntermediateData *param_1,int param_2)

{
  ForElementType<UE::Math::TIntPoint<int>_> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->SectionRenderCoords).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<UE::Math::TIntPoint<int>_>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FLandscapeTileVertexFactory::Copy'::__l2::TSTR_FLandscapeTileVertexFactoryCopyData102>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145f254e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FLandscapeTileVertexFactory::Copy_::__l2::TSTR_FLandscapeTileVertexFactoryCopyData102>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FLandscapeTileVertexFactory::Copy'::__l2::TSTR_FLandscapeTileVertexFactoryCopyData102>
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
      if (bVar8) goto LAB_145f25631;
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
    goto LAB_145f25825;
  }
LAB_145f25631:
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
LAB_145f2570f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145f2570f;
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
LAB_145f25825:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::TSTR_UpdateLandscapeHeightmapCorner1215>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145f25860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal_::__l2::TSTR_UpdateLandscapeHeightmapCorner1215>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::TSTR_UpdateLandscapeHeightmapCorner1215>
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
      if (bVar8) goto LAB_145f259b1;
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
    goto LAB_145f25ba5;
  }
LAB_145f259b1:
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
LAB_145f25a8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145f25a8f;
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
LAB_145f25ba5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::TSTR_UpdateLandscapeHeightmapEdge1133>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145f25be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal_::__l14::TSTR_UpdateLandscapeHeightmapEdge1133>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::TSTR_UpdateLandscapeHeightmapEdge1133>
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
      if (bVar8) goto LAB_145f25d31;
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
    goto LAB_145f25f25;
  }
LAB_145f25d31:
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
LAB_145f25e0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145f25e0f;
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
LAB_145f25f25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetVertexFactoryParametersElementShaderBindings<FLandscapeTileVertexFactory> @ 145f26030

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
GetVertexFactoryParametersElementShaderBindings<FLandscapeTileVertexFactory>
          (EShaderFrequency param_1,FVertexFactoryShaderParameters *param_2,FSceneInterface *param_3
          ,FSceneView *param_4,FMeshMaterialShader *param_5,EVertexInputStreamType param_6,
          Type param_7,FVertexFactory *param_8,FMeshBatchElement *param_9,
          FMeshDrawSingleShaderBindings *param_10,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_11)

{
  code *pcVar1;
  bool bVar2;
  
  switch(param_1) {
  case SF_Vertex:
    FLandscapeVertexFactoryVertexShaderParameters::GetElementShaderBindings
              ((FLandscapeVertexFactoryVertexShaderParameters *)param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11);
    return;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_145f2605c_caseD_1;
  case SF_Pixel:
    FLandscapeVertexFactoryPixelShaderParameters::GetElementShaderBindings
              ((FLandscapeVertexFactoryPixelShaderParameters *)param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11);
    return;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0x132,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
switchD_145f2605c_caseD_1:
    return;
  }
}

// GetVertexFactoryParametersLayout<FLandscapeTileVertexFactory> @ 145f26190

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FTypeLayoutDesc * __cdecl
GetVertexFactoryParametersLayout<FLandscapeTileVertexFactory>(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
    pFVar3 = FLandscapeVertexFactoryVertexShaderParameters::StaticGetTypeLayout();
    return pFVar3;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_145f261ad_caseD_1;
  case SF_Pixel:
    pFVar3 = FLandscapeVertexFactoryPixelShaderParameters::StaticGetTypeLayout();
    return pFVar3;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTypeLayoutDesc *)(*pcVar1)();
      return pFVar3;
    }
switchD_145f261ad_caseD_1:
    return (FTypeLayoutDesc *)0x0;
  }
}

// InternalConstructor<ULandscapeComponent> @ 145f26230

void __cdecl InternalConstructor<ULandscapeComponent>(FObjectInitializer *param_1)

{
  if ((ULandscapeComponent *)param_1->Obj != (ULandscapeComponent *)0x0) {
    ULandscapeComponent::ULandscapeComponent((ULandscapeComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ULandscapeHeightmapTextureEdgeFixup> @ 145f26250

void __cdecl InternalConstructor<ULandscapeHeightmapTextureEdgeFixup>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7ULandscapeHeightmapTextureEdgeFixup__6B_;
    MakeShared<FHeightmapTextureEdgeSnapshot,1>
              ((TSharedRef<FHeightmapTextureEdgeSnapshot,1> *)(this + 1));
    this[2].field_0x22 = 1;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[2].field_0x20 = 0;
    *(TIntPoint<int>_u_0 *)&this[2].field_0x24 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<ULandscapeLODStreamingProxy_DEPRECATED> @ 145f262c0

void __cdecl
InternalConstructor<ULandscapeLODStreamingProxy_DEPRECATED>(FObjectInitializer *param_1)

{
  if ((ULandscapeLODStreamingProxy_DEPRECATED *)param_1->Obj !=
      (ULandscapeLODStreamingProxy_DEPRECATED *)0x0) {
    ULandscapeLODStreamingProxy_DEPRECATED::ULandscapeLODStreamingProxy_DEPRECATED
              ((ULandscapeLODStreamingProxy_DEPRECATED *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<ULandscapeComponent> @ 145f262e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULandscapeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULandscapeComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeComponent::GetPrivateStaticClass();
  pUVar3 = (ULandscapeComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (ULandscapeComponent *)0x0) {
    pUVar3 = ULandscapeComponent::ULandscapeComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeHeightmapTextureEdgeFixup> @ 145f26380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULandscapeHeightmapTextureEdgeFixup>(FVTableHelper *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)0x0;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = ULandscapeHeightmapTextureEdgeFixup::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 == (UObject *)0x0) {
    return (UObject *)0x0;
  }
  UAssetUserData::UAssetUserData((UAssetUserData *)pUVar3,param_1);
  *(undefined ***)pUVar3 = &___7ULandscapeHeightmapTextureEdgeFixup__6B_;
  puVar5 = operator_new(0x58);
  puVar7 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar7 = puVar5;
  }
  *(undefined8 **)(pUVar3 + 1) = puVar7;
  puVar5 = operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &
              ___7__TReferenceControllerWithDeleter_UFHeightmapTextureEdgeSnapshot__U__DefaultDeleter_UFHeightmapTextureEdgeSnapshot___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    puVar5[2] = puVar7;
    puVar6 = puVar5;
  }
  *(undefined8 **)&pUVar3[1].field_0x8 = puVar6;
  EnsureRetrievingVTablePtrDuringCtor(L"TSharedRef()");
  if ((*(longlong *)(pUVar3 + 1) == 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  *(undefined8 *)&pUVar3[1].field_0x10 = 0;
  *(undefined8 *)&pUVar3[1].field_0x18 = 0;
  *(undefined8 *)&pUVar3[1].field_0x20 = 0;
  *(undefined2 *)&pUVar3[2].field_0x20 = 0;
  pUVar3[2].field_0x22 = 1;
  *(TIntPoint<int>_u_0 *)&pUVar3[2].field_0x24 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  *(undefined8 *)&pUVar3[3].field_0x8 = 0;
  *(undefined8 *)&pUVar3[3].field_0x10 = 0;
  return pUVar3;
}

// InternalVTableHelperCtorCaller<ULandscapeLODStreamingProxy_DEPRECATED> @ 145f26500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULandscapeLODStreamingProxy_DEPRECATED>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStreamableRenderAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeLODStreamingProxy_DEPRECATED::GetPrivateStaticClass();
  this = (UStreamableRenderAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStreamableRenderAsset *)0x0) {
    UStreamableRenderAsset::UStreamableRenderAsset(this,param_1);
    this->_padding_ = (longlong)&___7ULandscapeLODStreamingProxy_DEPRECATED__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<ULandscapeComponent,ULandscapeComponent_*,0> @ 145f265b0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<ULandscapeComponent,ULandscapeComponent_*,0>
          (TObjectPtr<ULandscapeComponent> *param_1,ULandscapeComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ULandscapeComponent *)0x0) {
    return *param_2 == (ULandscapeComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UTexture2D,UTexture2D_*,0> @ 145f265d0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UTexture2D,UTexture2D_*,0>
          (TObjectPtr<UTexture2D> *param_1,UTexture2D **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UTexture2D *)0x0) {
    return *param_2 == (UTexture2D *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeShared<FHeightmapTextureEdgeSnapshot,1> @ 145f265f0

TSharedRef<FHeightmapTextureEdgeSnapshot,1> * __cdecl
MakeShared<FHeightmapTextureEdgeSnapshot,1>
          (TSharedRef<FHeightmapTextureEdgeSnapshot,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FHeightmapTextureEdgeSnapshot,1> *pTVar4;
  
  pTVar3 = operator_new(0x68);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FHeightmapTextureEdgeSnapshot *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFHeightmapTextureEdgeSnapshot___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    __return_storage_ptr__->Object = (FHeightmapTextureEdgeSnapshot *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FHeightmapTextureEdgeSnapshot *)(pTVar3 + 1) == (FHeightmapTextureEdgeSnapshot *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FHeightmapTextureEdgeSnapshot,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// ObjectPtrDecay<TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_>_>,TArray<ULandscapeGrassType_*,TSizedDefaultAllocator<32>_>_> @ 145f266a0

TArray<ULandscapeGrassType_*,TSizedDefaultAllocator<32>_> * __cdecl
ObjectPtrDecay<TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_>_>,TArray<ULandscapeGrassType_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeGrassType>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<ULandscapeGrassType_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// StaticEnum<enum_ELandscapeClearMode> @ 145f27150

UEnum * __cdecl StaticEnum<enum_ELandscapeClearMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeClearMode,(UObject *)pUVar1,
                       L"ELandscapeClearMode");
  }
  return Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton;
}

// StaticEnum<enum_ELandscapeResizeMode> @ 145f27190

UEnum * __cdecl StaticEnum<enum_ELandscapeResizeMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeResizeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeResizeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeResizeMode,(UObject *)pUVar1,
                       L"ELandscapeResizeMode");
  }
  return Z_Registration_Info_UEnum_ELandscapeResizeMode.OuterSingleton;
}

// UnsetShaderUAVs<FRHIComputeCommandList,UE::Landscape::Culling::FBuildLandscapeTileDataCS> @ 145f271d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,UE::Landscape::Culling::FBuildLandscapeTileDataCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>
          *param_2,FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FBuildLandscapeTileDataCS *pFVar4;
  longlong lVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IRHIComputeContext *pIVar9;
  undefined8 *puVar10;
  void *_Dst;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined1 local_res20 [8];
  undefined1 local_78 [16];
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (GRHIGlobals.NeedsShaderUnbinds) {
    if (0 < *(int *)&param_1->field_0xd8) {
      local_res20[0] = 0;
      bVar7 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()
                        (local_res20);
      if (!bVar7) {
        *(undefined4 *)&param_1->field_0xd8 = 0;
        if (*(int *)&param_1->field_0xdc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,0,(ForAnyElementType *)&param_1->field_0xd0,0,(int *)&param_1->field_0xdc);
        }
      }
    }
    pFVar4 = param_2->ShaderContent;
    puVar1 = &param_1->field_0xd0;
    if ((*(short *)&pFVar4->field_0x54 != -1) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar11 = *(undefined1 **)&pFVar4->field_0x10;
    if (((ulonglong)puVar11 & 1) != 0) {
      puVar11 = &pFVar4->field_0x10 + ((longlong)puVar11 >> 0x18);
    }
    iVar3 = *(int *)&pFVar4->field_0x18;
    pbVar12 = puVar11 + 2;
    while( true ) {
      if (*(int *)&pFVar4->field_0x18 != iVar3) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_78);
      }
      if (pbVar12 + -2 == puVar11 + (longlong)iVar3 * 4) break;
      if ((pbVar12[1] == 7) || ((pbVar12[1] - 0xe & 0xfb) == 0)) {
        iVar8 = *(int *)&param_1->field_0xd8;
        bVar2 = *pbVar12;
        if (iVar8 == *(int *)&param_1->field_0xdc) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
        }
        *(int *)&param_1->field_0xd8 = iVar8 + 1;
        lVar5 = *(longlong *)puVar1;
        *(ushort *)(lVar5 + (longlong)iVar8 * 4) = (ushort)bVar2;
        *(undefined1 *)(lVar5 + (longlong)iVar8 * 4 + 2) = 1;
      }
      pbVar12 = pbVar12 + 4;
    }
    iVar3 = *(int *)&param_1->field_0xd8;
    if (0 < iVar3) {
      _Src = *(void **)puVar1;
      local_68 = _Src;
      iStack_60 = iVar3;
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar10;
          *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
          _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(longlong)iVar3 << 2,2);
          memcpy(_Dst,_Src,(longlong)iVar3 << 2);
          puVar10[1] = 0;
          *puVar10 = &___7__FRHICommandSetShaderUnbinds_VFRHIComputeShader____6B_;
          puVar10[3] = _Dst;
          puVar10[4] = CONCAT44(uStack_4c,iVar3);
          puVar10[2] = param_3;
          local_58 = _Dst;
          iStack_50 = iVar3;
        }
        else {
          pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
          local_48 = (undefined4)local_68;
          uStack_44 = local_68._4_4_;
          iStack_40 = iStack_60;
          uStack_3c = uStack_5c;
          (**(code **)(pIVar9->_padding_ + 0xa8))(pIVar9,param_3,&local_48);
        }
      }
      *(undefined4 *)&param_1->field_0xd8 = 0;
      if (*(int *)&param_1->field_0xdc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,0,(ForAnyElementType *)puVar1,0,(int *)&param_1->field_0xdc);
      }
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FLandscapeTileVertexFactory::Copy'::__l2::<lambda_1>,1,0> @ 145f278e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeTileVertexFactory::Copy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FLandscapeTileVertexFactory::Copy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeTileVertexFactory::Copy'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::<lambda_1>,1,1> @ 145f27900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::<lambda_1>,1,1> @ 145f27920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal_::__l14::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::`14'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// operator<< @ 145f27e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FHeightmapTextureEdgeSnapshot *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  TStaticArray<unsigned_int,4,4294967295> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FHeightmapTextureEdgeSnapshotCustomVersion::GUID);
  iVar2 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FHeightmapTextureEdgeSnapshotCustomVersion::GUID);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->EdgeLength = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->EdgeData);
  if (iVar2 < 3) {
    local_28.Elements[0] = 0;
    local_28.Elements[1] = 0;
    local_28.Elements[2] = 0;
    local_28.Elements[3] = 0;
    operator<<<unsigned_int,4,4294967295>(param_1,&local_28);
  }
  operator<<<unsigned_int,8,4294967295>(param_1,&param_2->SnapshotEdgeHashes);
  if (1 < iVar2) {
    operator<<<unsigned_int,8,4294967295>(param_1,&param_2->InitialEdgeHashes);
  }
  return param_1;
}

// `scalar_deleting_destructor' @ 145f286f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeTileVertexFactory::Copy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeTileVertexFactory::Copy'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f28730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f28770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::`14'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f287b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHeightmapTextureEdgeSnapshot,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FHeightmapTextureEdgeSnapshot,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f287f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f28820

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f28880

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHeightmapTextureEdgeSnapshot,SharedPointerInternals::DefaultDeleter<FHeightmapTextureEdgeSnapshot>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FHeightmapTextureEdgeSnapshot,SharedPointerInternals::DefaultDeleter<FHeightmapTextureEdgeSnapshot>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f288c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLandscapeComponentGrassData,SharedPointerInternals::DefaultDeleter<FLandscapeComponentGrassData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLandscapeComponentGrassData,SharedPointerInternals::DefaultDeleter<FLandscapeComponentGrassData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f28900

void * __thiscall
UE::Landscape::Culling::FLandscapeTileDataBuffer::_scalar_deleting_destructor_
          (FLandscapeTileDataBuffer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FLandscapeTileDataBuffer_Culling_Landscape_UE__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f28950

void * __thiscall
UE::Landscape::Culling::FLandscapeTileMesh::_scalar_deleting_destructor_
          (FLandscapeTileMesh *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FLandscapeTileMesh_Culling_Landscape_UE__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  (**(code **)((this->VertexBuffer)._padding_ + 0x20))(&this->VertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  FIndexBuffer::~FIndexBuffer(&this->IndexBuffer);
  FVertexBuffer::~FVertexBuffer(&this->VertexBuffer);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f289e0

void * __thiscall
FLandscapeTileVertexFactory::_scalar_deleting_destructor_
          (FLandscapeTileVertexFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FLandscapeVertexFactory__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f28a30

void * __thiscall
FLandscapeVertexFactory::_scalar_deleting_destructor_(FLandscapeVertexFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FLandscapeVertexFactory__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f28a80

void * __thiscall
ULandscapeHeightmapTextureEdgeFixup::_scalar_deleting_destructor_
          (ULandscapeHeightmapTextureEdgeFixup *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeHeightmapTextureEdgeFixup__6B_;
  pFVar1 = (this->DisabledComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EdgeSnapshot).SharedReferenceCount.ReferenceController);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeComponent @ 145f2d400

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeConfigHelper @ 145f2d410

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeConfigHelper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeEdgeFixup @ 145f2d420

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeEdgeFixup(void)

{
  return;
}

// GetTypeHash @ 145f2f5c0

uint __cdecl GetTypeHash(FWeightmapLayerAllocationInfo *param_1)

{
  ULandscapeLayerInfoObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pUVar1 = (param_1->LayerInfo).field0_0x0.DebugPtr;
  uVar2 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar4 = param_1->WeightmapTextureIndex - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar3 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = param_1->WeightmapTextureChannel - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// Z_Construct_UClass_ULandscapeComponent_NoRegister @ 145f34490

UClass * __cdecl Z_Construct_UClass_ULandscapeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ULandscapeComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeComponent",
               &Z_Registration_Info_UClass_ULandscapeComponent.InnerSingleton,
               ULandscapeComponent::StaticRegisterNativesULandscapeComponent,0x750,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeComponent>,
               InternalVTableHelperCtorCaller<ULandscapeComponent>,local_res8,
               UPrimitiveComponent::StaticClass,ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeComponent.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_NoRegister @ 145f34550

UClass * __cdecl Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeLODStreamingProxy_DEPRECATED",
               &Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.InnerSingleton,
               ULandscapeLODStreamingProxy_DEPRECATED::
               StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeLODStreamingProxy_DEPRECATED>,
               InternalVTableHelperCtorCaller<ULandscapeLODStreamingProxy_DEPRECATED>,local_res8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeClearMode @ 145f34610

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeClearMode(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeClearMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeClearMode.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeClearMode.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeResizeMode @ 145f34650

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeResizeMode(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeResizeMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeResizeMode.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeResizeMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FHeightmapTextureEdgeSnapshot @ 145f34690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHeightmapTextureEdgeSnapshot(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHeightmapTextureEdgeSnapshot.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHeightmapTextureEdgeSnapshot.InnerSingleton,
               &Z_Construct_UScriptStruct_FHeightmapTextureEdgeSnapshot_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHeightmapTextureEdgeSnapshot.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHeightmapTextureEdgeSnapshot.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride @ 145f34710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeComponentMaterialOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapeComponentMaterialOverride.InnerSingleton
               ,&Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapeComponentMaterialOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapeComponentMaterialOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLandscapeEditToolRenderData @ 145f34790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapeEditToolRenderData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeEditToolRenderData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapeEditToolRenderData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapeEditToolRenderData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapeEditToolRenderData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLandscapeLayerComponentData @ 145f34810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapeLayerComponentData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeLayerComponentData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapeLayerComponentData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapeLayerComponentData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapeLayerComponentData.InnerSingleton;
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

// PositionCurve'' @ 1503d4440

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

// RotationCurve'' @ 1503d4460

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

// ScaleCurve'' @ 1503d4480

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

// ShaderTypeRegistration'' @ 1503d44a0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Landscape::Culling::FBuildLandscapeTileDataCS::
ShaderTypeRegistration__(void)

{
  return;
}

// StaticType'' @ 1503d44b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'FLandscapeTileVertexFactory::StaticType__(void)

{
  FVertexFactoryType::~FVertexFactoryType(&FLandscapeTileVertexFactory::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeApplyPhysicalMaterialChangesImmediately'' @ 1503d44d0

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeApplyPhysicalMaterialChangesImmediately__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeApplyPhysicalMaterialChangesImmediately);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeEnableGPUCulling'' @ 1503d44f0

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeEnableGPUCulling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLandscapeEnableGPUCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeEnableGPUCullingShadows'' @ 1503d4510

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeEnableGPUCullingShadows__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeEnableGPUCullingShadows);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeSupportCulling'' @ 1503d4530

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeSupportCulling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLandscapeSupportCulling);
  return;
}

// `dynamic_atexit_destructor_for_'DirectionStrings'' @ 1503d4550

void __cdecl
`UE::Landscape::GetDirectionString'::__l2::_dynamic_atexit_destructor_for__DirectionStrings__(void)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &::_TSS0;
  lVar2 = 8;
  do {
    piVar1 = piVar3 + -4;
    piVar3 = piVar3 + -4;
    lVar2 = lVar2 + -1;
    if (*(void **)piVar1 != (void *)0x0) {
      FMemory::Free(*(void **)piVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'ErrorString'' @ 1503d45a0

void __cdecl
`UE::Landscape::GetDirectionString'::__l2::_dynamic_atexit_destructor_for__ErrorString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorString.Data.AllocatorInstance.Data;
  if (ErrorString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GCullingSystem'' @ 1503d45c0

void __cdecl UE::Landscape::Culling::_dynamic_atexit_destructor_for__GCullingSystem__(void)

{
  if (GCullingSystem.Views.AllocatorInstance.SecondaryData !=
      (ForElementType<FSceneView_const_*>)0x0) {
    FMemory::Free((void *)GCullingSystem.Views.AllocatorInstance.SecondaryData);
  }
  DestructItems<UE::Landscape::Culling::FCullingEntry,int>
            ((FCullingEntry *)GCullingSystem.Landscapes.AllocatorInstance.Data,
             GCullingSystem.Landscapes.ArrayNum);
  if (GCullingSystem.Landscapes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GCullingSystem.Landscapes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterFHeightmapTextureEdgeSnapshotCustomVersion'' @ 1503d4610

void __cdecl
_dynamic_atexit_destructor_for__GRegisterFHeightmapTextureEdgeSnapshotCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterFHeightmapTextureEdgeSnapshotCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LandscapeSupportCullingIniValue'' @ 1503d4630

void __cdecl
`UE::Landscape::Culling::FBuildLandscapeTileDataCS::ShouldCompilePermutation'::__l2::
_dynamic_atexit_destructor_for__LandscapeSupportCullingIniValue__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_bool___cdecl_UE::Landscape::Culling::FBuildLandscapeTileDataCS::ShouldCompilePermutation(FGlobalShaderPermutationParameters_const&___ptr64)'
               ::__l2::LandscapeSupportCullingIniValue.CVarName.Data.AllocatorInstance.Data;
  if (`public:_static_bool___cdecl_UE::Landscape::Culling::FBuildLandscapeTileDataCS::ShouldCompilePermutation(FGlobalShaderPermutationParameters_const&___ptr64)'
      ::__l2::LandscapeSupportCullingIniValue.CVarName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_bool___cdecl_UE::Landscape::Culling::FBuildLandscapeTileDataCS::ShouldCompilePermutation(FGlobalShaderPermutationParameters_const&___ptr64)'
      ::__l2::LandscapeSupportCullingIniValue.CVarName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LandscapeSupportCullingIniValue'' @ 1503d4650

void __cdecl
`FLandscapeTileVertexFactory::ShouldCompilePermutation'::__l2::
_dynamic_atexit_destructor_for__LandscapeSupportCullingIniValue__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LandscapeSupportCullingIniValue.CVarName.Data.AllocatorInstance.Data;
  if (LandscapeSupportCullingIniValue.CVarName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (LandscapeSupportCullingIniValue.CVarName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LandscapeSupportCullingIniValue'' @ 1503d4670

void __cdecl
`UE::Landscape::Culling::UseCulling'::__l2::
_dynamic_atexit_destructor_for__LandscapeSupportCullingIniValue__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LandscapeSupportCullingIniValue.CVarName.Data.AllocatorInstance.Data;
  if (LandscapeSupportCullingIniValue.CVarName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (LandscapeSupportCullingIniValue.CVarName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogLandscape'' @ 1503d4690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLandscape__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLandscape);
  return;
}

// `dynamic_atexit_destructor_for_'LogLandscapeBP'' @ 1503d46b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLandscapeBP__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLandscapeBP);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 1503d46d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d46f0

void __cdecl
`UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters::FTypeInfo::GetStructMetadata'::__l2
::_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d4710

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`UE::Landscape::Culling::FBuildLandscapeTileDataCS::GetStaticType'::__l2::
_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

