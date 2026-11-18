// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 298

// EmptyData'' @ 14110add0

void __cdecl `dynamic_initializer_for_'FMaterialCachedExpressionData::EmptyData__(void)

{
  FMaterialCachedExpressionData::FMaterialCachedExpressionData
            (&FMaterialCachedExpressionData::EmptyData);
  atexit(`dynamic_atexit_destructor_for_'FMaterialCachedExpressionData::EmptyData__);
  return;
}

// EmptyData'' @ 14110ae00

void __cdecl `dynamic_initializer_for_'FMaterialCachedExpressionEditorOnlyData::EmptyData__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMaterialCachedExpressionEditorOnlyData::EmptyData__);
  return;
}

// EmptyData'' @ 14110ae20

void __cdecl `dynamic_initializer_for_'FMaterialCachedParameterEntry::EmptyData__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMaterialCachedParameterEntry::EmptyData__);
  return;
}

// GMaterialPropertyAttributesMap'' @ 14110ae40

void __cdecl
`dynamic_initializer_for_'FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap__(void)

{
  FMaterialAttributeDefinitionMap::FMaterialAttributeDefinitionMap
            (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap);
  atexit(`dynamic_atexit_destructor_for_'FMaterialAttributeDefinitionMap::
         GMaterialPropertyAttributesMap__);
  return;
}

// `dynamic_initializer_for_'CVarDiscardUnusedQualityLevels'' @ 14110ae70

void __cdecl _dynamic_initializer_for__CVarDiscardUnusedQualityLevels__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDiscardUnusedQualityLevels,L"r.DiscardUnusedQuality",local_res8,
             L"Whether to keep or discard unused quality level shadermaps in memory.\n0: keep all quality levels in memory. (default)\n1: Discard unused quality levels on load."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDiscardUnusedQualityLevels__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialLogErrorOnFailure'' @ 14110aec0

void __cdecl _dynamic_initializer_for__CVarMaterialLogErrorOnFailure__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMaterialLogErrorOnFailure,L"r.MaterialLogErrorOnFailure",local_res8,
             L"When enabled, when a material fails to compile it will issue an Error instead of a Warning.\nDefault: false"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMaterialLogErrorOnFailure__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialsDuplicateVerbatim'' @ 14110af10

void __cdecl _dynamic_initializer_for__CVarMaterialsDuplicateVerbatim__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMaterialsDuplicateVerbatim,L"r.MaterialsDuplicateVerbatim",local_res8,
             L"When enabled, when a material or material function is duplicated, it will not change StateId (which influences DDC keys) pre-emptively.\nDefault: false"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaterialsDuplicateVerbatim__);
  return;
}

// `dynamic_initializer_for_'CmdListSceneColorMaterials'' @ 14110af60

void __cdecl _dynamic_initializer_for__CmdListSceneColorMaterials__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = ListSceneColorMaterials;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CmdListSceneColorMaterials,L"r.ListSceneColorMaterials",
             L"Lists all materials that read from scene color.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CmdListSceneColorMaterials__);
  return;
}

// `dynamic_initializer_for_'GCompileMaterialsForShaderFormatCVar'' @ 14110b0a0

void __cdecl _dynamic_initializer_for__GCompileMaterialsForShaderFormatCVar__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&GCompileMaterialsForShaderFormatCVar,L"r.CompileMaterialsForShaderFormat",L"",
             L"When enabled, compile materials for this shader format in addition to those for the running platform.\nNote that these shaders are compiled and immediately tossed. This is only useful when directly inspecting output via r.DebugDumpShaderInfo."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCompileMaterialsForShaderFormatCVar__);
  return;
}

// `dynamic_initializer_for_'LightingGuidFixupMap'' @ 14110b0f0

void __cdecl _dynamic_initializer_for__LightingGuidFixupMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__LightingGuidFixupMap__);
  return;
}

// `dynamic_initializer_for_'NAME_GradientBias'' @ 14110b110

void __cdecl _dynamic_initializer_for__NAME_GradientBias__(void)

{
  FName::FName(&NAME_GradientBias,L"GradientBias");
  return;
}

// `dynamic_initializer_for_'NAME_GradientCount'' @ 14110b130

void __cdecl _dynamic_initializer_for__NAME_GradientCount__(void)

{
  FName::FName(&NAME_GradientCount,L"GradientCount");
  return;
}

// `dynamic_initializer_for_'NAME_GradientScale'' @ 14110b150

void __cdecl _dynamic_initializer_for__NAME_GradientScale__(void)

{
  FName::FName(&NAME_GradientScale,L"GradientScale");
  return;
}

// `dynamic_initializer_for_'NAME_GradientTexture'' @ 14110b170

void __cdecl _dynamic_initializer_for__NAME_GradientTexture__(void)

{
  FName::FName(&NAME_GradientTexture,L"GradientTexture");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h__Script_Engine_754467625'' @ 14110b190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h__Script_Engine_754467625__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h__Script_Engine_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h__Script_Engine_2938547831'' @ 14110b1d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h__Script_Engine_2938547831__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h__Script_Engine_2364856366'' @ 14110b220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h__Script_Engine_2364856366__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialEnumeration_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h__Script_Engine_318370296'' @ 14110b260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h__Script_Engine_318370296__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h__Script_Engine_1824539473'' @ 14110b2b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h__Script_Engine_1824539473__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h__Script_Engine_1845399974'' @ 14110b300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h__Script_Engine_1845399974__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// Z_Construct_UClass_UMaterialAggregate_NoRegister @ 147ee9e80

UClass * __cdecl Z_Construct_UClass_UMaterialAggregate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialAggregate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialAggregate",
               &Z_Registration_Info_UClass_UMaterialAggregate.InnerSingleton,
               UMaterialAggregate::StaticRegisterNativesUMaterialAggregate,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialAggregate>,
               InternalVTableHelperCtorCaller<UMaterialAggregate>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialAggregate.InnerSingleton;
}

// Z_Construct_UClass_UMaterialAggregate @ 147eea040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialAggregate(void)

{
  if (Z_Registration_Info_UClass_UMaterialAggregate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialAggregate.OuterSingleton,
               &Z_Construct_UClass_UMaterialAggregate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialAggregate.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EMaterialAggregateAttributeType @ 147eea080

UEnum * __cdecl Z_Construct_UEnum_Engine_EMaterialAggregateAttributeType(void)

{
  if (Z_Registration_Info_UEnum_EMaterialAggregateAttributeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMaterialAggregateAttributeType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMaterialAggregateAttributeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMaterialAggregateAttributeType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMaterialAggregateAttribute @ 147eea0c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialAggregateAttribute(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialAggregateAttribute.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialAggregateAttribute.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialAggregateAttribute_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialAggregateAttribute.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialAggregateAttribute.InnerSingleton;
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

// EMaterialAggregateAttributeType_StaticEnum @ 147eea140

UEnum * __cdecl EMaterialAggregateAttributeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialAggregateAttributeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaterialAggregateAttributeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialAggregateAttributeType,(UObject *)pUVar1,
                       L"EMaterialAggregateAttributeType");
  }
  return Z_Registration_Info_UEnum_EMaterialAggregateAttributeType.OuterSingleton;
}

// NewStructOps @ 147eea1d0

void * __cdecl Z_Construct_UScriptStruct_FMaterialAggregateAttribute_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialAggregateAttribute,&UE::CoreUObject::Private::Construct<FMaterialAggregateAttribute>,&UE::CoreUObject::Private::ConstructForTests<FMaterialAggregateAttribute>,&UE::CoreUObject::Private::Destruct<FMaterialAggregateAttribute>,&UE::CoreUObject::Private::Copy<FMaterialAggregateAttribute>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMaterialExpressionNoise @ 147eea560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionNoise(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionNoise.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionNoise.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionNoise_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNoise.OuterSingleton;
}

// Z_Construct_UClass_UMaterialExpressionScalarBlueNoise @ 147eea5a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionScalarBlueNoise(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionScalarBlueNoise_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ENoiseFunction @ 147eea5e0

UEnum * __cdecl Z_Construct_UEnum_Engine_ENoiseFunction(void)

{
  if (Z_Registration_Info_UEnum_ENoiseFunction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENoiseFunction.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENoiseFunction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENoiseFunction.InnerSingleton;
}

// ENoiseFunction_StaticEnum @ 147eea620

UEnum * __cdecl ENoiseFunction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENoiseFunction,(UObject *)pUVar1,L"ENoiseFunction");
  }
  return Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton;
}

// NewProp_bTurbulence_SetBit @ 147eea720

void __cdecl
Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) | 1;
  return;
}

// Z_Construct_UClass_UMaterial @ 147eea730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterial(void)

{
  if (Z_Registration_Info_UClass_UMaterial.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterial.OuterSingleton,
               &Z_Construct_UClass_UMaterial_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterial.OuterSingleton;
}

// Z_Construct_UClass_UMaterialEditorOnlyData @ 147eea770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialEditorOnlyData(void)

{
  if (Z_Registration_Info_UClass_UMaterialEditorOnlyData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialEditorOnlyData.OuterSingleton,
               &Z_Construct_UClass_UMaterialEditorOnlyData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialEditorOnlyData.OuterSingleton;
}

// NewProp_bTiling_SetBit @ 147eea7b0

void __cdecl
Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x128) = *(uint *)((longlong)param_1 + 0x128) | 1;
  return;
}

// Z_Construct_UEnum_Engine_EDecalBlendMode @ 147eea7c0

UEnum * __cdecl Z_Construct_UEnum_Engine_EDecalBlendMode(void)

{
  if (Z_Registration_Info_UEnum_EDecalBlendMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDecalBlendMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EDecalBlendMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDecalBlendMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMaterialDecalResponse @ 147eea800

UEnum * __cdecl Z_Construct_UEnum_Engine_EMaterialDecalResponse(void)

{
  if (Z_Registration_Info_UEnum_EMaterialDecalResponse.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMaterialDecalResponse.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMaterialDecalResponse_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMaterialDecalResponse.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMaterialTranslucencyPass @ 147eea880

UEnum * __cdecl Z_Construct_UEnum_Engine_EMaterialTranslucencyPass(void)

{
  if (Z_Registration_Info_UEnum_EMaterialTranslucencyPass.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMaterialTranslucencyPass.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMaterialTranslucencyPass_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMaterialTranslucencyPass.InnerSingleton;
}

// Z_Construct_UScriptStruct_FColorMaterialInput @ 147eea8c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FColorMaterialInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FColorMaterialInput_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FMaterialInput @ 147eea940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FMaterialInput_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FParameterGroupData @ 147eea9c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FParameterGroupData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FParameterGroupData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FParameterGroupData.InnerSingleton,
               &Z_Construct_UScriptStruct_FParameterGroupData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FParameterGroupData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FParameterGroupData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FScalarMaterialInput @ 147eeaa40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FScalarMaterialInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FShadingModelMaterialInput @ 147eeaac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FShadingModelMaterialInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FShadingModelMaterialInput_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FSubstrateMaterialInput @ 147eeab40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubstrateMaterialInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FSubstrateMaterialInput_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVector2MaterialInput @ 147eeabc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector2MaterialInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::StructParams)
    ;
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVectorMaterialInput @ 147eeac40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVectorMaterialInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// EDecalBlendMode_StaticEnum @ 147eeacc0

UEnum * __cdecl EDecalBlendMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDecalBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDecalBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDecalBlendMode,(UObject *)pUVar1,L"EDecalBlendMode"
                      );
  }
  return Z_Registration_Info_UEnum_EDecalBlendMode.OuterSingleton;
}

// EMaterialDecalResponse_StaticEnum @ 147eead00

UEnum * __cdecl EMaterialDecalResponse_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialDecalResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaterialDecalResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialDecalResponse,(UObject *)pUVar1,
                       L"EMaterialDecalResponse");
  }
  return Z_Registration_Info_UEnum_EMaterialDecalResponse.OuterSingleton;
}

// EMaterialTranslucencyPass_StaticEnum @ 147eeada0

UEnum * __cdecl EMaterialTranslucencyPass_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialTranslucencyPass.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaterialTranslucencyPass.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialTranslucencyPass,(UObject *)pUVar1,
                       L"EMaterialTranslucencyPass");
  }
  return Z_Registration_Info_UEnum_EMaterialTranslucencyPass.OuterSingleton;
}

// NewProp_UseConstant_SetBit @ 147eeaed0

void __cdecl
Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) | 1;
  return;
}

// NewProp_UseConstant_SetBit @ 147eeaee0

void __cdecl
Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) | 1;
  return;
}

// Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry @ 147eeaef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorEntry.InnerSingleton
               ,&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo @ 147eeaf70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEditorInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMaterialCachedParameterEntry @ 147eeaff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialCachedParameterEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMaterialFunctionInfo @ 147eeb070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialFunctionInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialFunctionInfo.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialFunctionInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialFunctionInfo.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMaterialFunctionInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo @ 147eeb0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialParameterCollectionInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialParameterCollectionInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialParameterCollectionInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialParameterCollectionInfo.InnerSingleton;
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

// NewStructOps @ 147eeb170

void * __cdecl Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialFunctionInfo,&UE::CoreUObject::Private::Construct<FMaterialFunctionInfo>,&UE::CoreUObject::Private::ConstructForTests<FMaterialFunctionInfo>,&UE::CoreUObject::Private::Destruct<FMaterialFunctionInfo>,&UE::CoreUObject::Private::Copy<FMaterialFunctionInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_UseConstant_SetBit @ 147eeb360

void __cdecl
Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) | 1;
  return;
}

// NewStructOps @ 147eeb370

void * __cdecl
Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialParameterCollectionInfo,&UE::CoreUObject::Private::Construct<FMaterialParameterCollectionInfo>,&UE::CoreUObject::Private::ConstructForTests<FMaterialParameterCollectionInfo>,&UE::CoreUObject::Private::Destruct<FMaterialParameterCollectionInfo>,&UE::CoreUObject::Private::Copy<FMaterialParameterCollectionInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_UseConstant_SetBit @ 147eeb3f0

void __cdecl
Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) | 1;
  return;
}

// NewStructOps @ 147eeb400

void * __cdecl Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FParameterGroupData,&UE::CoreUObject::Private::Construct<FParameterGroupData>,&UE::CoreUObject::Private::ConstructForTests<FParameterGroupData>,&UE::CoreUObject::Private::Destruct<FParameterGroupData>,&UE::CoreUObject::Private::Copy<FParameterGroupData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147eeb440

void * __cdecl
Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialCachedParameterEditorInfo,&UE::CoreUObject::Private::Construct<FMaterialCachedParameterEditorInfo>,&UE::CoreUObject::Private::ConstructForTests<FMaterialCachedParameterEditorInfo>,&UE::CoreUObject::Private::Destruct<FMaterialCachedParameterEditorInfo>,&UE::CoreUObject::Private::Copy<FMaterialCachedParameterEditorInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147eeb480

void * __cdecl Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialCachedParameterEntry,&UE::CoreUObject::Private::Construct<FMaterialCachedParameterEntry>,&UE::CoreUObject::Private::ConstructForTests<FMaterialCachedParameterEntry>,&UE::CoreUObject::Private::Destruct<FMaterialCachedParameterEntry>,&UE::CoreUObject::Private::Copy<FMaterialCachedParameterEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsSubsutrateAutoConvertedAndNotSaved_SetBit @ 147eeb4f0

void __cdecl
Z_Construct_UClass_UMaterialEditorOnlyData_Statics::
NewProp_bIsSubsutrateAutoConvertedAndNotSaved_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6b0) = 1;
  return;
}

// NewStructOps @ 147eeb5e0

void * __cdecl
Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialCachedParameterEditorEntry,&UE::CoreUObject::Private::Construct<FMaterialCachedParameterEditorEntry>,&UE::CoreUObject::Private::ConstructForTests<FMaterialCachedParameterEditorEntry>,&UE::CoreUObject::Private::Destruct<FMaterialCachedParameterEditorEntry>,&UE::CoreUObject::Private::Copy<FMaterialCachedParameterEditorEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147eeb620

void * __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2e0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialCachedExpressionEditorOnlyData,&UE::CoreUObject::Private::Construct<FMaterialCachedExpressionEditorOnlyData>,&UE::CoreUObject::Private::ConstructForTests<FMaterialCachedExpressionEditorOnlyData>,&UE::CoreUObject::Private::Destruct<FMaterialCachedExpressionEditorOnlyData>,&UE::CoreUObject::Private::Copy<FMaterialCachedExpressionEditorOnlyData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCastDynamicShadowAsMasked_SetBit @ 147eeb6a0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x199) = *(byte *)((longlong)param_1 + 0x199) | 1;
  return;
}

// NewProp_bEnableSeparateTranslucency_SetBit @ 147eeb6b0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 1;
  return;
}

// NewProp_bEnableResponsiveAA_SetBit @ 147eeb6c0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 2;
  return;
}

// NewProp_bScreenSpaceReflections_SetBit @ 147eeb6d0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 4;
  return;
}

// NewProp_bContactShadows_SetBit @ 147eeb6e0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 8;
  return;
}

// NewProp_TwoSided_SetBit @ 147eeb6f0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 0x10;
  return;
}

// NewProp_bIsThinSurface_SetBit @ 147eeb700

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bIsThinSurface_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 0x20;
  return;
}

// NewProp_DitheredLODTransition_SetBit @ 147eeb710

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 0x40;
  return;
}

// NewProp_DitherOpacityMask_SetBit @ 147eeb720

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a0) = *(byte *)((longlong)param_1 + 0x1a0) | 0x80;
  return;
}

// NewProp_bAllowNegativeEmissiveColor_SetBit @ 147eeb730

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a1) = *(byte *)((longlong)param_1 + 0x1a1) | 1;
  return;
}

// NewProp_bHasPixelAnimation_SetBit @ 147eeb740

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bHasPixelAnimation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a1) = *(byte *)((longlong)param_1 + 0x1a1) | 2;
  return;
}

// NewProp_bEnableTessellation_SetBit @ 147eeb750

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableTessellation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a1) = *(byte *)((longlong)param_1 + 0x1a1) | 4;
  return;
}

// NewProp_bEnableDisplacementFade_SetBit @ 147eeb760

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableDisplacementFade_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a1) = *(byte *)((longlong)param_1 + 0x1a1) | 8;
  return;
}

// NewProp_bEnableMobileSeparateTranslucency_SetBit @ 147eeb770

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1a4) = *(byte *)((longlong)param_1 + 0x1a4) | 1;
  return;
}

// NewProp_bDisableDepthTest_SetBit @ 147eeb780

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d8) = *(byte *)((longlong)param_1 + 0x1d8) | 1;
  return;
}

// NewProp_bWriteOnlyAlpha_SetBit @ 147eeb790

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d8) = *(byte *)((longlong)param_1 + 0x1d8) | 2;
  return;
}

// NewProp_bGenerateSphericalParticleNormals_SetBit @ 147eeb7a0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d8) = *(byte *)((longlong)param_1 + 0x1d8) | 4;
  return;
}

// NewProp_bTangentSpaceNormal_SetBit @ 147eeb7b0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d8) = *(byte *)((longlong)param_1 + 0x1d8) | 8;
  return;
}

// NewProp_bUseEmissiveForDynamicAreaLighting_SetBit @ 147eeb7c0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d8) = *(byte *)((longlong)param_1 + 0x1d8) | 0x10;
  return;
}

// NewProp_bUsedAsSpecialEngineMaterial_SetBit @ 147eeb7d0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d8) = *(byte *)((longlong)param_1 + 0x1d8) | 0x20;
  return;
}

// NewProp_bSubstrateRoughnessTracking_SetBit @ 147eeb7e0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bSubstrateRoughnessTracking_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d8) = *(byte *)((longlong)param_1 + 0x1d8) | 0x40;
  return;
}

// NewProp_bUsedWithSkeletalMesh_SetBit @ 147eeb7f0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d8) = *(byte *)((longlong)param_1 + 0x1d8) | 0x80;
  return;
}

// NewProp_bUsedWithEditorCompositing_SetBit @ 147eeb800

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d9) = *(byte *)((longlong)param_1 + 0x1d9) | 1;
  return;
}

// NewProp_bUsedWithParticleSprites_SetBit @ 147eeb810

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d9) = *(byte *)((longlong)param_1 + 0x1d9) | 2;
  return;
}

// NewProp_bUsedWithBeamTrails_SetBit @ 147eeb820

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d9) = *(byte *)((longlong)param_1 + 0x1d9) | 4;
  return;
}

// NewProp_bUsedWithMeshParticles_SetBit @ 147eeb830

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d9) = *(byte *)((longlong)param_1 + 0x1d9) | 8;
  return;
}

// NewProp_bUsedWithNiagaraSprites_SetBit @ 147eeb840

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d9) = *(byte *)((longlong)param_1 + 0x1d9) | 0x10;
  return;
}

// NewProp_bUsedWithNiagaraRibbons_SetBit @ 147eeb850

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d9) = *(byte *)((longlong)param_1 + 0x1d9) | 0x20;
  return;
}

// NewProp_bUsedWithNiagaraMeshParticles_SetBit @ 147eeb860

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d9) = *(byte *)((longlong)param_1 + 0x1d9) | 0x40;
  return;
}

// NewProp_bUsedWithGeometryCache_SetBit @ 147eeb870

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d9) = *(byte *)((longlong)param_1 + 0x1d9) | 0x80;
  return;
}

// NewProp_bUsedWithStaticLighting_SetBit @ 147eeb880

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1da) = *(byte *)((longlong)param_1 + 0x1da) | 1;
  return;
}

// NewProp_bUsedWithMorphTargets_SetBit @ 147eeb890

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1da) = *(byte *)((longlong)param_1 + 0x1da) | 2;
  return;
}

// NewProp_bUsedWithSplineMeshes_SetBit @ 147eeb8a0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1da) = *(byte *)((longlong)param_1 + 0x1da) | 4;
  return;
}

// NewProp_bUsedWithInstancedStaticMeshes_SetBit @ 147eeb8b0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1da) = *(byte *)((longlong)param_1 + 0x1da) | 8;
  return;
}

// NewProp_bUsedWithGeometryCollections_SetBit @ 147eeb8c0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCollections_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1da) = *(byte *)((longlong)param_1 + 0x1da) | 0x10;
  return;
}

// NewProp_bUsesDistortion_SetBit @ 147eeb8d0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1da) = *(byte *)((longlong)param_1 + 0x1da) | 0x20;
  return;
}

// NewProp_bRootNodeOverridesDefaultDistortion_SetBit @ 147eeb8e0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bRootNodeOverridesDefaultDistortion_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1da) = *(byte *)((longlong)param_1 + 0x1da) | 0x40;
  return;
}

// NewProp_bUsedWithClothing_SetBit @ 147eeb8f0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1da) = *(byte *)((longlong)param_1 + 0x1da) | 0x80;
  return;
}

// NewProp_bUsedWithWater_SetBit @ 147eeb900

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithWater_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1dc) = *(uint *)((longlong)param_1 + 0x1dc) | 1;
  return;
}

// NewProp_bUsedWithHairStrands_SetBit @ 147eeb910

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHairStrands_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1dc) = *(uint *)((longlong)param_1 + 0x1dc) | 2;
  return;
}

// NewProp_bUsedWithLidarPointCloud_SetBit @ 147eeb920

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithLidarPointCloud_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1dc) = *(uint *)((longlong)param_1 + 0x1dc) | 4;
  return;
}

// NewProp_bUsedWithVirtualHeightfieldMesh_SetBit @ 147eeb930

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVirtualHeightfieldMesh_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1dc) = *(uint *)((longlong)param_1 + 0x1dc) | 8;
  return;
}

// NewProp_bUsedWithNanite_SetBit @ 147eeb940

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNanite_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1dc) = *(uint *)((longlong)param_1 + 0x1dc) | 0x10;
  return;
}

// NewProp_bUsedWithVoxels_SetBit @ 147eeb950

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVoxels_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e0) = *(byte *)((longlong)param_1 + 0x1e0) | 1;
  return;
}

// NewProp_bUsedWithVolumetricCloud_SetBit @ 147eeb960

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVolumetricCloud_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1e4) = *(uint *)((longlong)param_1 + 0x1e4) | 1;
  return;
}

// NewProp_bUsedWithHeterogeneousVolumes_SetBit @ 147eeb970

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHeterogeneousVolumes_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1e4) = *(uint *)((longlong)param_1 + 0x1e4) | 2;
  return;
}

// NewProp_bUsedWithStaticMesh_SetBit @ 147eeb980

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticMesh_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1e4) = *(uint *)((longlong)param_1 + 0x1e4) | 4;
  return;
}

// NewProp_bUsedWithUI_SetBit @ 147eeb990

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e8) = *(byte *)((longlong)param_1 + 0x1e8) | 1;
  return;
}

// NewProp_bForceCompatibleWithLightFunctionAtlas_SetBit @ 147eeb9a0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bForceCompatibleWithLightFunctionAtlas_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e8) = *(byte *)((longlong)param_1 + 0x1e8) | 2;
  return;
}

// NewProp_bAutomaticallySetUsageInEditor_SetBit @ 147eeb9d0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e8) = *(byte *)((longlong)param_1 + 0x1e8) | 4;
  return;
}

// NewProp_bFullyRough_SetBit @ 147eeba00

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e8) = *(byte *)((longlong)param_1 + 0x1e8) | 8;
  return;
}

// NewProp_bUseFullPrecision_SetBit @ 147eeba10

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e8) = *(byte *)((longlong)param_1 + 0x1e8) | 0x10;
  return;
}

// NewProp_bUseLightmapDirectionality_SetBit @ 147eeba30

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ea) = *(byte *)((longlong)param_1 + 0x1ea) | 1;
  return;
}

// NewProp_bUseAlphaToCoverage_SetBit @ 147eeba40

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bUseAlphaToCoverage_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ea) = *(byte *)((longlong)param_1 + 0x1ea) | 2;
  return;
}

// NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL_SetBit @ 147eeba50

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1ec) = *(uint *)((longlong)param_1 + 0x1ec) | 1;
  return;
}

// NewProp_bUseHQForwardReflections_SetBit @ 147eeba60

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1f0) = *(byte *)((longlong)param_1 + 0x1f0) | 1;
  return;
}

// NewProp_bForwardBlendsSkyLightCubemaps_SetBit @ 147eeba70

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardBlendsSkyLightCubemaps_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1f0) = *(byte *)((longlong)param_1 + 0x1f0) | 2;
  return;
}

// NewProp_bUsePlanarForwardReflections_SetBit @ 147eeba80

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1f0) = *(byte *)((longlong)param_1 + 0x1f0) | 4;
  return;
}

// NewProp_bNormalCurvatureToRoughness_SetBit @ 147eeba90

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1f0) = *(byte *)((longlong)param_1 + 0x1f0) | 8;
  return;
}

// NewProp_AllowTranslucentCustomDepthWrites_SetBit @ 147eebaa0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1f0) = *(byte *)((longlong)param_1 + 0x1f0) | 0x10;
  return;
}

// NewProp_bAllowFrontLayerTranslucency_SetBit @ 147eebab0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowFrontLayerTranslucency_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1f0) = *(byte *)((longlong)param_1 + 0x1f0) | 0x20;
  return;
}

// NewProp_bCompatibleWithLumenCardSharing_SetBit @ 147eebb50

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bCompatibleWithLumenCardSharing_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1f0) = *(byte *)((longlong)param_1 + 0x1f0) | 0x40;
  return;
}

// NewProp_Wireframe_SetBit @ 147eebb60

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1f0) = *(byte *)((longlong)param_1 + 0x1f0) | 0x80;
  return;
}

// NewProp_bAllowTranslucentLocalLightShadow_SetBit @ 147eebb70

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowTranslucentLocalLightShadow_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1f1) = *(byte *)((longlong)param_1 + 0x1f1) | 1;
  return;
}

// NewProp_bAllowVariableRateShading_SetBit @ 147eebb80

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowVariableRateShading_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fd) = *(byte *)((longlong)param_1 + 0x1fd) | 1;
  return;
}

// NewProp_bCanMaskedBeAssumedOpaque_SetBit @ 147eebb90

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fd) = *(byte *)((longlong)param_1 + 0x1fd) | 2;
  return;
}

// NewProp_bIsMasked_SetBit @ 147eebba0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fd) = *(byte *)((longlong)param_1 + 0x1fd) | 4;
  return;
}

// NewProp_bHasMaterialLayers_SetBit @ 147eebbb0

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 1;
  return;
}

// NewProp_bIsPreviewMaterial_SetBit @ 147eebbc0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fd) = *(byte *)((longlong)param_1 + 0x1fd) | 8;
  return;
}

// NewProp_bHasRuntimeVirtualTextureOutput_SetBit @ 147eebbd0

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bHasRuntimeVirtualTextureOutput_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 2;
  return;
}

// NewProp_bIsFunctionPreviewMaterial_SetBit @ 147eebbe0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fd) = *(byte *)((longlong)param_1 + 0x1fd) | 0x10;
  return;
}

// NewProp_bHasFirstPersonOutput_SetBit @ 147eebbf0

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bHasFirstPersonOutput_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 4;
  return;
}

// NewProp_bUseMaterialAttributes_SetBit @ 147eebc00

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fd) = *(byte *)((longlong)param_1 + 0x1fd) | 0x20;
  return;
}

// NewProp_bUsesTemporalResponsiveness_SetBit @ 147eebc10

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bUsesTemporalResponsiveness_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 8;
  return;
}

// NewProp_bEnableExecWire_SetBit @ 147eebc20

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableExecWire_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fd) = *(byte *)((longlong)param_1 + 0x1fd) | 0x40;
  return;
}

// NewProp_bUsesMotionVectorWorldOffset_SetBit @ 147eebc30

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bUsesMotionVectorWorldOffset_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x10;
  return;
}

// NewProp_bEnableNewHLSLGenerator_SetBit @ 147eebc40

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableNewHLSLGenerator_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fd) = *(byte *)((longlong)param_1 + 0x1fd) | 0x80;
  return;
}

// NewProp_bSamplesMaterialCache_SetBit @ 147eebc50

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bSamplesMaterialCache_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x20;
  return;
}

// NewProp_bCastRayTracedShadows_SetBit @ 147eebc60

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bCastRayTracedShadows_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fe) = *(byte *)((longlong)param_1 + 0x1fe) | 1;
  return;
}

// NewProp_bHasMaterialCacheOutput_SetBit @ 147eebc70

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bHasMaterialCacheOutput_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x40;
  return;
}

// NewProp_bUseTranslucencyVertexFog_SetBit @ 147eebc80

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fe) = *(byte *)((longlong)param_1 + 0x1fe) | 2;
  return;
}

// NewProp_bMaterialCacheHasNonUVDerivedExpression_SetBit @ 147eebc90

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bMaterialCacheHasNonUVDerivedExpression_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x80;
  return;
}

// NewProp_bApplyCloudFogging_SetBit @ 147eebcb0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bApplyCloudFogging_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fe) = *(byte *)((longlong)param_1 + 0x1fe) | 4;
  return;
}

// NewProp_bHasSceneColor_SetBit @ 147eebcc0

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x100;
  return;
}

// NewProp_bIsSky_SetBit @ 147eebce0

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bIsSky_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fe) = *(byte *)((longlong)param_1 + 0x1fe) | 8;
  return;
}

// NewProp_bHasPerInstanceCustomData_SetBit @ 147eebcf0

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bHasPerInstanceCustomData_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x200;
  return;
}

// NewProp_bComputeFogPerPixel_SetBit @ 147eebd10

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fe) = *(byte *)((longlong)param_1 + 0x1fe) | 0x10;
  return;
}

// NewProp_bHasPerInstanceRandom_SetBit @ 147eebd20

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bHasPerInstanceRandom_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x400;
  return;
}

// NewProp_bOutputTranslucentVelocity_SetBit @ 147eebd40

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputTranslucentVelocity_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fe) = *(byte *)((longlong)param_1 + 0x1fe) | 0x20;
  return;
}

// NewProp_bHasVertexInterpolator_SetBit @ 147eebd50

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::
NewProp_bHasVertexInterpolator_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x800;
  return;
}

// NewProp_bIsTranslucencyVelocityFromDepth_SetBit @ 147eebd70

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bIsTranslucencyVelocityFromDepth_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fe) = *(byte *)((longlong)param_1 + 0x1fe) | 0x40;
  return;
}

// NewProp_bHasCustomizedUVs_SetBit @ 147eebd80

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasCustomizedUVs_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x1000;
  return;
}

// NewProp_bAllowDevelopmentShaderCompile_SetBit @ 147eebda0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1fe) = *(byte *)((longlong)param_1 + 0x1fe) | 0x80;
  return;
}

// NewProp_bHasMeshPaintTexture_SetBit @ 147eebdb0

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMeshPaintTexture_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x2000;
  return;
}

// NewProp_bIsMaterialEditorStatsMaterial_SetBit @ 147eebdd0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ff) = *(byte *)((longlong)param_1 + 0x1ff) | 1;
  return;
}

// NewProp_bHasWorldPosition_SetBit @ 147eebde0

void __cdecl
Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasWorldPosition_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d0) = *(uint *)((longlong)param_1 + 0x4d0) | 0x4000;
  return;
}

// NewProp_bRelaxRuntimeVirtualTextureRestrictions_SetBit @ 147eebe00

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bRelaxRuntimeVirtualTextureRestrictions_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ff) = *(byte *)((longlong)param_1 + 0x1ff) | 2;
  return;
}

// NewProp_BlendableOutputAlpha_SetBit @ 147eebe10

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x201) = *(byte *)((longlong)param_1 + 0x201) | 1;
  return;
}

// NewStructOps @ 147eebe20

void * __cdecl Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4e0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialCachedExpressionData,&UE::CoreUObject::Private::Construct<FMaterialCachedExpressionData>,&UE::CoreUObject::Private::ConstructForTests<FMaterialCachedExpressionData>,&UE::CoreUObject::Private::Destruct<FMaterialCachedExpressionData>,&UE::CoreUObject::Private::SerializeArchive<FMaterialCachedExpressionData>,&UE::CoreUObject::Private::PostSerialize<FMaterialCachedExpressionData>,&UE::CoreUObject::Private::Copy<FMaterialCachedExpressionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDisablePreExposureScale_SetBit @ 147eebe60

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bDisablePreExposureScale_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x21c) = *(byte *)((longlong)param_1 + 0x21c) | 1;
  return;
}

// NewProp_bUsedWithNeuralNetworks_SetBit @ 147eebe70

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNeuralNetworks_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x21c) = *(byte *)((longlong)param_1 + 0x21c) | 2;
  return;
}

// NewProp_bEnableStencilTest_SetBit @ 147eebe80

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableStencilTest_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x21c) = *(byte *)((longlong)param_1 + 0x21c) | 4;
  return;
}

// NewProp_bIsBlendable_SetBit @ 147eebe90

void __cdecl Z_Construct_UClass_UMaterial_Statics::NewProp_bIsBlendable_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x228) = *(byte *)((longlong)param_1 + 0x228) | 1;
  return;
}

// NewProp_bAlwaysEvaluateWorldPositionOffset_SetBit @ 147eebea0

void __cdecl
Z_Construct_UClass_UMaterial_Statics::NewProp_bAlwaysEvaluateWorldPositionOffset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x23c) = 1;
  return;
}

// Z_Construct_UClass_UMaterialEnumerationProvider @ 147eec1a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialEnumerationProvider(void)

{
  if (Z_Registration_Info_UClass_UMaterialEnumerationProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialEnumerationProvider.OuterSingleton,
               &Z_Construct_UClass_UMaterialEnumerationProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialEnumerationProvider.OuterSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLayerStack @ 147eec2a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLayerStack(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionLayerStack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionLayerStack.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionLayerStack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLayerStack.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMaterialLayerInput @ 147eec2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialLayerInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialLayerInput.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialLayerInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialLayerInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialLayerInput.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMaterialLayerInput.InnerSingleton;
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

// NewStructOps @ 147eec360

void * __cdecl Z_Construct_UScriptStruct_FMaterialLayerInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialLayerInput,&UE::CoreUObject::Private::Construct<FMaterialLayerInput>,&UE::CoreUObject::Private::ConstructForTests<FMaterialLayerInput>,&UE::CoreUObject::Private::Destruct<FMaterialLayerInput>,&UE::CoreUObject::Private::Copy<FMaterialLayerInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// CastChecked<UMaterial,UMaterialInterface> @ 147eec540

UMaterial * __cdecl CastChecked<UMaterial,UMaterialInterface>(UMaterialInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMaterialInterface *)0x0) {
    pFVar3 = GetTypeName<UMaterial>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMaterial::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMaterial *)param_1;
  }
  pFVar3 = GetTypeName<UMaterial>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMaterialInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMaterial,UObject> @ 147eec600

UMaterial * __cdecl CastChecked<UMaterial,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMaterial>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMaterial::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMaterial *)param_1;
  }
  pFVar3 = GetTypeName<UMaterial>(&local_28);
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

// CastChecked<UMaterialExpressionExternalCodeBase,UObject_const_> @ 147eec6c0

UMaterialExpressionExternalCodeBase * __cdecl
CastChecked<UMaterialExpressionExternalCodeBase,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMaterialExpressionExternalCodeBase>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMaterialExpressionExternalCodeBase_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMaterialExpressionExternalCodeBase *)param_1;
  }
  pFVar3 = GetTypeName<UMaterialExpressionExternalCodeBase>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UClass>,TObjectPtr<UClass>,int> @ 147eec780

void __cdecl
ConstructItems<TObjectPtr<UClass>,TObjectPtr<UClass>,int>
          (void *param_1,TObjectPtr<UClass> *param_2,int param_3)

{
  TObjectPtr<UClass> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UClass>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UClass>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr = (UClass *)TVar1.field0_0x0
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UMaterialCacheVirtualTextureTag>,TObjectPtr<UMaterialCacheVirtualTextureTag>,int> @ 147eec7e0

void __cdecl
ConstructItems<TObjectPtr<UMaterialCacheVirtualTextureTag>,TObjectPtr<UMaterialCacheVirtualTextureTag>,int>
          (void *param_1,TObjectPtr<UMaterialCacheVirtualTextureTag> *param_2,int param_3)

{
  TObjectPtr<UMaterialCacheVirtualTextureTag> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UMaterialCacheVirtualTextureTag>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UMaterialCacheVirtualTextureTag>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UMaterialCacheVirtualTextureTag *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UMaterialCacheVirtualTextureTag *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UPhysicalMaterial>,TObjectPtr<UPhysicalMaterial>,int> @ 147eec840

void __cdecl
ConstructItems<TObjectPtr<UPhysicalMaterial>,TObjectPtr<UPhysicalMaterial>,int>
          (void *param_1,TObjectPtr<UPhysicalMaterial> *param_2,int param_3)

{
  TObjectPtr<UPhysicalMaterial> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UPhysicalMaterial>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UPhysicalMaterial *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UPhysicalMaterial *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UTextureCollection>,TObjectPtr<UTextureCollection>,int> @ 147eec8a0

void __cdecl
ConstructItems<TObjectPtr<UTextureCollection>,TObjectPtr<UTextureCollection>,int>
          (void *param_1,TObjectPtr<UTextureCollection> *param_2,int param_3)

{
  TObjectPtr<UTextureCollection> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UTextureCollection>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UTextureCollection>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UTextureCollection *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UTextureCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSoftObjectPtr<UCurveLinearColor>,TSoftObjectPtr<UCurveLinearColor>,int> @ 147eec900

void __cdecl
ConstructItems<TSoftObjectPtr<UCurveLinearColor>,TSoftObjectPtr<UCurveLinearColor>,int>
          (void *param_1,TSoftObjectPtr<UCurveLinearColor> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar1 + (longlong)param_2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSoftObjectPtr<UCurveLinearColorAtlas>,TSoftObjectPtr<UCurveLinearColorAtlas>,int> @ 147eec950

void __cdecl
ConstructItems<TSoftObjectPtr<UCurveLinearColorAtlas>,TSoftObjectPtr<UCurveLinearColorAtlas>,int>
          (void *param_1,TSoftObjectPtr<UCurveLinearColorAtlas> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar1 + (longlong)param_2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSoftObjectPtr<UFont>,TSoftObjectPtr<UFont>,int> @ 147eec9a0

void __cdecl
ConstructItems<TSoftObjectPtr<UFont>,TSoftObjectPtr<UFont>,int>
          (void *param_1,TSoftObjectPtr<UFont> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar1 + (longlong)param_2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSoftObjectPtr<UMaterialParameterCollection>,TSoftObjectPtr<UMaterialParameterCollection>,int> @ 147eec9f0

void __cdecl
ConstructItems<TSoftObjectPtr<UMaterialParameterCollection>,TSoftObjectPtr<UMaterialParameterCollection>,int>
          (void *param_1,TSoftObjectPtr<UMaterialParameterCollection> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar1 + (longlong)param_2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSoftObjectPtr<USparseVolumeTexture>,TSoftObjectPtr<USparseVolumeTexture>,int> @ 147eeca40

void __cdecl
ConstructItems<TSoftObjectPtr<USparseVolumeTexture>,TSoftObjectPtr<USparseVolumeTexture>,int>
          (void *param_1,TSoftObjectPtr<USparseVolumeTexture> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar1 + (longlong)param_2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSoftObjectPtr<UTexture>,TSoftObjectPtr<UTexture>,int> @ 147eeca90

void __cdecl
ConstructItems<TSoftObjectPtr<UTexture>,TSoftObjectPtr<UTexture>,int>
          (void *param_1,TSoftObjectPtr<UTexture> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar1 + (longlong)param_2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSoftObjectPtr<UTextureCollection>,TSoftObjectPtr<UTextureCollection>,int> @ 147eecae0

void __cdecl
ConstructItems<TSoftObjectPtr<UTextureCollection>,TSoftObjectPtr<UTextureCollection>,int>
          (void *param_1,TSoftObjectPtr<UTextureCollection> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar1 + (longlong)param_2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMaterialCachedParameterEditorInfo,FMaterialCachedParameterEditorInfo,int> @ 147eecb30

void __cdecl
ConstructItems<FMaterialCachedParameterEditorInfo,FMaterialCachedParameterEditorInfo,int>
          (void *param_1,FMaterialCachedParameterEditorInfo *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x18);
    piVar4 = &param_2->SortPriority;
    do {
      FString::FString((FString *)(piVar3 + -6),
                       (FString *)
                       ((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)piVar3));
      *(FName *)(piVar3 + -2) = *(FName *)(piVar4 + -2);
      *piVar3 = *piVar4;
      piVar3[1] = piVar4[1];
      uVar2 = ((FGuid *)(piVar4 + 2))->B;
      uVar1 = *(undefined8 *)(piVar4 + 4);
      piVar3[2] = ((FGuid *)(piVar4 + 2))->A;
      piVar3[3] = uVar2;
      *(undefined8 *)(piVar3 + 4) = uVar1;
      param_3 = param_3 + -1;
      piVar3 = piVar3 + 0xc;
      piVar4 = piVar4 + 0xc;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMaterialFunctionInfo,FMaterialFunctionInfo,int> @ 147eecbc0

void __cdecl
ConstructItems<FMaterialFunctionInfo,FMaterialFunctionInfo,int>
          (void *param_1,FMaterialFunctionInfo *param_2,int param_3)

{
  UMaterialFunctionInterface *pUVar1;
  undefined8 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = *(undefined8 *)&(param_2->StateId).C;
    *(undefined8 *)param_1 = *(undefined8 *)&param_2->StateId;
    *(undefined8 *)((longlong)param_1 + 8) = uVar2;
    pUVar1 = (param_2->Function).field0_0x0.DebugPtr;
    *(UMaterialFunctionInterface **)((longlong)param_1 + 0x10) = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UMaterialFunctionInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    param_2 = param_2 + 1;
    param_1 = (void *)((longlong)param_1 + 0x18);
  }
  return;
}

// ConstructItems<FMaterialParameterCollectionInfo,FMaterialParameterCollectionInfo,int> @ 147eecc30

void __cdecl
ConstructItems<FMaterialParameterCollectionInfo,FMaterialParameterCollectionInfo,int>
          (void *param_1,FMaterialParameterCollectionInfo *param_2,int param_3)

{
  UMaterialParameterCollection *pUVar1;
  undefined8 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = *(undefined8 *)&(param_2->StateId).C;
    *(undefined8 *)param_1 = *(undefined8 *)&param_2->StateId;
    *(undefined8 *)((longlong)param_1 + 8) = uVar2;
    pUVar1 = (param_2->ParameterCollection).field0_0x0.DebugPtr;
    *(UMaterialParameterCollection **)((longlong)param_1 + 0x10) = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UMaterialParameterCollection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    param_2 = param_2 + 1;
    param_1 = (void *)((longlong)param_1 + 0x18);
  }
  return;
}

// ConstructItems<FParameterChannelNames,FParameterChannelNames,int> @ 147eecca0

void __cdecl
ConstructItems<FParameterChannelNames,FParameterChannelNames,int>
          (void *param_1,FParameterChannelNames *param_2,int param_3)

{
  ITextData *pIVar1;
  FText *pFVar2;
  longlong *plVar3;
  FText *pFVar4;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [4];
  undefined1 local_24 [12];
  
  if (param_3 != 0) {
    plVar3 = (longlong *)((longlong)param_1 + 0x10);
    pFVar4 = &param_2->G;
    do {
      *(undefined8 *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar4) = 0;
      pIVar1 = (((FParameterChannelNames *)(pFVar4 + -1))->R).TextData.Reference;
      *(ITextData **)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar4) = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      *(uint *)(plVar3 + -1) = (((FParameterChannelNames *)(pFVar4 + -1))->R).Flags;
      *plVar3 = 0;
      pIVar1 = (pFVar4->TextData).Reference;
      *plVar3 = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
      }
      *(uint *)(plVar3 + 1) = pFVar4->Flags;
      plVar3[2] = 0;
      pIVar1 = pFVar4[1].TextData.Reference;
      plVar3[2] = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_28);
      }
      *(uint *)(plVar3 + 3) = pFVar4[1].Flags;
      plVar3[4] = 0;
      pIVar1 = pFVar4[2].TextData.Reference;
      plVar3[4] = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_24);
      }
      pFVar2 = pFVar4 + 2;
      pFVar4 = pFVar4 + 4;
      *(uint *)(plVar3 + 5) = pFVar2->Flags;
      plVar3 = plVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FMaterialResource,int> @ 147eecd90

void __cdecl DefaultConstructItems<FMaterialResource,int>(void *param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined2 *)((longlong)param_1 + 0xc);
    do {
      *(undefined ***)(puVar1 + -6) = &___7FMaterial__6B_;
      *(undefined4 *)(puVar1 + -2) = 0;
      *puVar1 = 0xffff;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[10] = 4;
      *(undefined4 *)(puVar1 + 0xc) = 5;
      puVar1[0x10] = 0;
      *(uint *)(puVar1 + 0xe) = *(uint *)(puVar1 + 0xe) & 0xfffffff4 | 4;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(undefined ***)(puVar1 + -6) = &___7FMaterialResource__6B_;
      *(undefined8 *)(puVar1 + 0x1a) = 0;
      *(undefined8 *)(puVar1 + 0x1e) = 0;
      *(undefined8 *)(puVar1 + 0x22) = 0;
      *(undefined8 *)(puVar1 + 0x26) = 0;
      *(undefined8 *)(puVar1 + 0x2a) = 0;
      *(undefined8 *)(puVar1 + 0x2e) = 0;
      *(undefined8 *)(puVar1 + 0x32) = 0;
      *(undefined8 *)(puVar1 + 0x36) = 0;
      *(undefined8 *)(puVar1 + 0x3a) = 0;
      *(undefined8 *)(puVar1 + 0x3e) = 0;
      *(undefined8 *)(puVar1 + 0x42) = 0;
      *(undefined8 *)(puVar1 + 0x46) = 0;
      *(undefined8 *)(puVar1 + 0x4a) = 0;
      *(undefined8 *)(puVar1 + 0x4e) = 0;
      *(undefined8 *)(puVar1 + 0x52) = 0;
      *(undefined8 *)(puVar1 + 0x56) = 0;
      *(undefined8 *)(puVar1 + 0x5a) = 0;
      *(undefined8 *)(puVar1 + 0x5e) = 0;
      *(undefined8 *)(puVar1 + 0x62) = 0;
      *(undefined8 *)(puVar1 + 0x66) = 0;
      *(undefined8 *)(puVar1 + 0x6a) = 0;
      *(undefined8 *)(puVar1 + 0x6e) = 0;
      *(undefined8 *)(puVar1 + 0x72) = 0;
      *(undefined8 *)(puVar1 + 0x76) = 0;
      *(undefined8 *)(puVar1 + 0x7a) = 0;
      *(undefined8 *)(puVar1 + 0x7e) = 0;
      *(undefined8 *)(puVar1 + 0x82) = 0;
      *(undefined8 *)(puVar1 + 0x86) = 0;
      *(undefined8 *)(puVar1 + 0x8a) = 0;
      *(undefined8 *)(puVar1 + 0x8e) = 0;
      *(undefined8 *)(puVar1 + 0x92) = 0;
      *(undefined8 *)(puVar1 + 0x96) = 0;
      *(undefined8 *)(puVar1 + 0x9a) = 0;
      *(undefined8 *)(puVar1 + 0x9e) = 0;
      *(undefined8 *)(puVar1 + 0xa2) = 0;
      *(undefined8 *)(puVar1 + 0xa6) = 0;
      puVar1 = puVar1 + 0xb0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DereferenceIfNecessary<`UMaterial::CheckMaterialUsage_Concurrent'::__l13::FCallSMU,`UMaterial::CheckMaterialUsage_Concurrent'::__l13::FCallSMU_*_&> @ 147eecef0

FCallSMU * __cdecl
UE::Core::Private::
DereferenceIfNecessary<_UMaterial::CheckMaterialUsage_Concurrent_::__l13::FCallSMU,_UMaterial::CheckMaterialUsage_Concurrent_::__l13::FCallSMU_*_&>
          (FCallSMU **param_1)

{
  return *param_1;
}

// DestructItems<TKeyValuePair<enum_EMaterialShadingModel,FString>,int> @ 147eecf10

void __cdecl
DestructItems<TKeyValuePair<enum_EMaterialShadingModel,FString>,int>
          (TKeyValuePair<EMaterialShadingModel,FString> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Value;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UCurveLinearColor>,int> @ 147eecf50

void __cdecl
DestructItems<TSoftObjectPtr<UCurveLinearColor>,int>
          (TSoftObjectPtr<UCurveLinearColor> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UCurveLinearColorAtlas>,int> @ 147eecf90

void __cdecl
DestructItems<TSoftObjectPtr<UCurveLinearColorAtlas>,int>
          (TSoftObjectPtr<UCurveLinearColorAtlas> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UFont>,int> @ 147eecfd0

void __cdecl DestructItems<TSoftObjectPtr<UFont>,int>(TSoftObjectPtr<UFont> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UMaterialParameterCollection>,int> @ 147eed010

void __cdecl
DestructItems<TSoftObjectPtr<UMaterialParameterCollection>,int>
          (TSoftObjectPtr<UMaterialParameterCollection> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<USparseVolumeTexture>,int> @ 147eed050

void __cdecl
DestructItems<TSoftObjectPtr<USparseVolumeTexture>,int>
          (TSoftObjectPtr<USparseVolumeTexture> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UTexture>,int> @ 147eed090

void __cdecl
DestructItems<TSoftObjectPtr<UTexture>,int>(TSoftObjectPtr<UTexture> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UTextureCollection>,int> @ 147eed0d0

void __cdecl
DestructItems<TSoftObjectPtr<UTextureCollection>,int>
          (TSoftObjectPtr<UTextureCollection> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMaterialCachedParameterEditorInfo,int> @ 147eed110

void __cdecl
DestructItems<FMaterialCachedParameterEditorInfo,int>
          (FMaterialCachedParameterEditorInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Description).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FParameterChannelNames,int> @ 147eed150

void __cdecl DestructItems<FParameterChannelNames,int>(FParameterChannelNames *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->B;
    do {
      pIVar1 = pFVar2[1].TextData.Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (pFVar2->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = pFVar2[-1].TextData.Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (((FParameterChannelNames *)(pFVar2 + -2))->R).TextData.Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FParameterGroupData,int> @ 147eed1c0

void __cdecl DestructItems<FParameterGroupData,int>(FParameterGroupData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->GroupName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FMaterial>,int> @ 147eed200

void __cdecl
DestructItems<TRefCountPtr<FMaterial>,int>(TRefCountPtr<FMaterial> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FMaterial *)0x0) {
      FMaterial::Release(param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FMaterialResource>,int> @ 147eed240

void __cdecl
DestructItems<TRefCountPtr<FMaterialResource>,int>
          (TRefCountPtr<FMaterialResource> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FMaterialResource *)0x0) {
      FMaterial::Release((FMaterial *)param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMaterialCustomOutputAttributeDefintion,int> @ 147eed280

void __cdecl
DestructItems<FMaterialCustomOutputAttributeDefintion,int>
          (FMaterialCustomOutputAttributeDefintion *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x30;
    do {
      if ((void *)puVar1[8] != (void *)0x0) {
        FMemory::Free((void *)puVar1[8]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMaterialResource,int> @ 147eed2d0

void __cdecl DestructItems<FMaterialResource,int>(FMaterialResource *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FMaterialResource__6B_;
    FMaterialLayersFunctions::~FMaterialLayersFunctions(&param_1->MaterialLayersFunctions);
    FMaterial::~FMaterial((FMaterial *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMaterial::BeginDestroy'::__l12::TSTR_BeginDestroyCommand5986>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147eeda40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMaterial::BeginDestroy_::__l12::TSTR_BeginDestroyCommand5986>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UMaterial::BeginDestroy'::__l12::TSTR_BeginDestroyCommand5986>::Get()
  ;
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
      if (bVar8) goto LAB_147eedb91;
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
    goto LAB_147eedd85;
  }
LAB_147eedb91:
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
LAB_147eedc6f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147eedc6f;
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
LAB_147eedd85:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDefaultMaterialInstance::GameThread_Destroy'::__l2::TSTR_FDestroyDefaultMaterialInstanceCommand413>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147eeddc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultMaterialInstance::GameThread_Destroy_::__l2::TSTR_FDestroyDefaultMaterialInstanceCommand413>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FDefaultMaterialInstance::GameThread_Destroy'::__l2::TSTR_FDestroyDefaultMaterialInstanceCommand413>
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
      if (bVar8) goto LAB_147eedf11;
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
    goto LAB_147eee105;
  }
LAB_147eedf11:
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
LAB_147eedfef:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147eedfef;
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
LAB_147eee105:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetFullNameForCastLogError<UMaterialInterface> @ 147eee360

FString * __cdecl
GetFullNameForCastLogError<UMaterialInterface>
          (FString *__return_storage_ptr__,UMaterialInterface *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UMaterial> @ 147eee390

FString * __cdecl GetTypeName<UMaterial>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMaterial::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMaterialExpressionExternalCodeBase> @ 147eee3d0

FString * __cdecl GetTypeName<UMaterialExpressionExternalCodeBase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMaterialExpressionExternalCodeBase_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<UObject_*,int,FIdentityFunctor,TDereferenceWrapper<UObject_*,`UMaterial::AllMaterialsCacheResourceShadersForRendering'::__l2::<lambda_1>_>_> @ 147eee410

void __cdecl
AlgoImpl::
HeapSortInternal<UObject_*,int,FIdentityFunctor,TDereferenceWrapper<UObject_*,_UMaterial::AllMaterialsCacheResourceShadersForRendering_::__l2::<lambda_1>_>_>
          (UObject **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UObject_*,_public:_static_void___cdecl_UMaterial::AllMaterialsCacheResourceShadersForRendering(bool,bool)_::_2_::<lambda_1>_>
          param_4)

{
  UObject *pUVar1;
  UMaterial *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  UMaterial **ppUVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UObject_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UObject_*,_UMaterial::AllMaterialsCacheResourceShadersForRendering_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<UObject_*,_public:_static_void___cdecl_UMaterial::AllMaterialsCacheResourceShadersForRendering(bool,bool)_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar8 = param_2 + -1;
  lVar10 = (longlong)iVar8;
  if (0 < iVar8) {
    do {
      pUVar1 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = pUVar1;
      iVar7 = 0;
      if (1 < iVar8) {
        do {
          iVar4 = iVar7 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < iVar8) {
            bVar5 = false;
            ppUVar6 = GDefaultMaterials;
            do {
              if (0x15521492f < (longlong)ppUVar6) break;
              pUVar2 = *ppUVar6;
              bVar5 = (UMaterial *)param_1[(longlong)iVar4 + 2] == pUVar2;
              ppUVar6 = ppUVar6 + 1;
            } while ((UMaterial *)param_1[(longlong)iVar4 + 2] != pUVar2);
            bVar11 = false;
            ppUVar6 = GDefaultMaterials;
            do {
              if (0x15521492f < (longlong)ppUVar6) break;
              pUVar2 = *ppUVar6;
              bVar11 = (UMaterial *)param_1[(longlong)iVar4 + 1] == pUVar2;
              ppUVar6 = ppUVar6 + 1;
            } while ((UMaterial *)param_1[(longlong)iVar4 + 1] != pUVar2);
            if ((bool)(bVar5 & (bVar11 ^ 1U))) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          bVar5 = false;
          ppUVar6 = GDefaultMaterials;
          do {
            if (0x15521492f < (longlong)ppUVar6) break;
            pUVar2 = *ppUVar6;
            bVar5 = (UMaterial *)param_1[iVar7] == pUVar2;
            ppUVar6 = ppUVar6 + 1;
          } while ((UMaterial *)param_1[iVar7] != pUVar2);
          bVar11 = false;
          ppUVar6 = GDefaultMaterials;
          do {
            if (0x15521492f < (longlong)ppUVar6) break;
            pUVar2 = *ppUVar6;
            bVar11 = (UMaterial *)param_1[iVar9] == pUVar2;
            ppUVar6 = ppUVar6 + 1;
          } while ((UMaterial *)param_1[iVar9] != pUVar2);
          if (!(bool)(bVar5 & (bVar11 ^ 1U))) break;
          pUVar1 = param_1[iVar7];
          param_1[iVar7] = param_1[iVar9];
          param_1[iVar9] = pUVar1;
          iVar7 = iVar9;
        } while (iVar9 * 2 + 1 < iVar8);
      }
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}

// HeapifyInternal<UObject_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UObject_*,`UMaterial::AllMaterialsCacheResourceShadersForRendering'::__l2::<lambda_1>_>_>_> @ 147eee5d0

void __cdecl
AlgoImpl::
HeapifyInternal<UObject_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UObject_*,_UMaterial::AllMaterialsCacheResourceShadersForRendering_::__l2::<lambda_1>_>_>_>
          (UObject **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<UObject_*,_public:_static_void___cdecl_UMaterial::AllMaterialsCacheResourceShadersForRendering(bool,bool)_::_2_::<lambda_1>_>_>
          param_4)

{
  UMaterial *pUVar1;
  UObject *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UMaterial **ppUVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar4 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_147eee738:
      if (iVar10 == 0) {
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar4 + -2;
      iVar4 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = false;
      ppUVar8 = GDefaultMaterials;
      do {
        if (0x15521492f < (longlong)ppUVar8) break;
        pUVar1 = *ppUVar8;
        bVar5 = (UMaterial *)param_1[(longlong)iVar7 + 2] == pUVar1;
        ppUVar8 = ppUVar8 + 1;
      } while ((UMaterial *)param_1[(longlong)iVar7 + 2] != pUVar1);
      bVar11 = false;
      ppUVar8 = GDefaultMaterials;
      do {
        if (0x15521492f < (longlong)ppUVar8) break;
        pUVar1 = *ppUVar8;
        bVar11 = (UMaterial *)param_1[(longlong)iVar7 + 1] == pUVar1;
        ppUVar8 = ppUVar8 + 1;
      } while ((UMaterial *)param_1[(longlong)iVar7 + 1] != pUVar1);
      if ((bool)(bVar5 & (bVar11 ^ 1U))) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    bVar5 = false;
    ppUVar8 = GDefaultMaterials;
    do {
      if (0x15521492f < (longlong)ppUVar8) break;
      pUVar1 = *ppUVar8;
      bVar5 = (UMaterial *)param_1[iVar6] == pUVar1;
      ppUVar8 = ppUVar8 + 1;
    } while ((UMaterial *)param_1[iVar6] != pUVar1);
    bVar11 = false;
    ppUVar8 = GDefaultMaterials;
    do {
      if (0x15521492f < (longlong)ppUVar8) break;
      pUVar1 = *ppUVar8;
      bVar11 = (UMaterial *)param_1[iVar9] == pUVar1;
      ppUVar8 = ppUVar8 + 1;
    } while ((UMaterial *)param_1[iVar9] != pUVar1);
    if (!(bool)(bVar5 & (bVar11 ^ 1U))) goto LAB_147eee738;
    pUVar2 = param_1[iVar6];
    param_1[iVar6] = param_1[iVar9];
    iVar7 = iVar9 * 2 + 1;
    param_1[iVar9] = pUVar2;
    iVar6 = iVar9;
  } while( true );
}

// InternalConstructor<UMaterial> @ 147eee780

void __cdecl InternalConstructor<UMaterial>(FObjectInitializer *param_1)

{
  undefined1 *this;
  UMaterial *this_00;
  
  this_00 = (UMaterial *)param_1->Obj;
  if (this_00 != (UMaterial *)0x0) {
    UMaterialInterface::UMaterialInterface((UMaterialInterface *)this_00,param_1);
    this = &(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
    this_00->_padding_ = (longlong)&UMaterial::_vftable__for__UObject__;
    this_00->_padding_ = (longlong)&UMaterial::_vftable__for__IBlendableInterface__;
    this_00->_padding_ = (longlong)&UMaterial::_vftable__for__IInterface_AssetUserData__;
    (this_00->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
    (this_00->PhysMaterialMask).field0_0x0.DebugPtr = (UPhysicalMaterialMask *)0x0;
    this_00->PhysicalMaterialMap[0].field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
    this_00->PhysicalMaterialMap[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[2].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[3].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[4].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[5].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[6].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[7].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    (this_00->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this_00->RenderTracePhysicalMaterialOutputs).ArrayNum = 0;
    (this_00->RenderTracePhysicalMaterialOutputs).ArrayMax = 0;
    (this_00->NaniteOverrideMaterial).bEnableOverride = true;
    (this_00->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr =
         (UMaterialInterface *)0x0;
    *(undefined8 *)this = 0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x20 =
         0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr = 0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x10 =
         0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x8 =
         0;
    FUtf8String::Reset((FUtf8String *)this,0);
    (this_00->DisplacementScaling).Magnitude = 4.0;
    (this_00->DisplacementScaling).Center = 0.5;
    (this_00->DisplacementFadeRange).StartSizePixels = 4.0;
    (this_00->DisplacementFadeRange).EndSizePixels = 1.0;
    (this_00->ShadingModels).ShadingModelField = 0;
    this_00->TranslucentLocalLightShadowQuality = 0.0;
    this_00->TranslucentDirectionalLightShadowQuality = 0.0;
    (this_00->UserSceneTexture).ComparisonIndex = 0;
    (this_00->UserSceneTexture).Number = 0;
    (this_00->UserTextureDivisor).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this_00->ResolutionRelativeToInput).ComparisonIndex = 0;
    (this_00->ResolutionRelativeToInput).Number = 0;
    this_00->StencilRefValue = '\0';
    this_00->NeuralProfileId = -1;
    this_00->UsageFlagCacheMiss = (atomic<unsigned_int>)0x0;
    (this_00->SubstrateCompilationConfig).bFullSimplify = false;
    (this_00->SubstrateCompilationConfig).BytesPerPixelOverride = -1;
    (this_00->SubstrateCompilationConfig).ClosuresPerPixelOverride = -1;
    (this_00->StateId).A = 0;
    (this_00->StateId).B = 0;
    (this_00->StateId).C = 0;
    (this_00->StateId).D = 0;
    (this_00->LoadedMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->LoadedMaterialResources).ArrayNum = 0;
    (this_00->LoadedMaterialResources).ArrayMax = 0;
    (this_00->MaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->MaterialResources).ArrayNum = 0;
    (this_00->MaterialResources).ArrayMax = 0;
    this_00->ReleasedByRT = (FThreadSafeBool)0x1;
    this_00->bCachingUniformExpressions = false;
    UMaterial::SetInitialValues(this_00);
  }
  return;
}

// InternalConstructor<UMaterialAggregate> @ 147eee910

void __cdecl InternalConstructor<UMaterialAggregate>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialAggregate__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMaterialEditorOnlyData> @ 147eee950

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl InternalConstructor<UMaterialEditorOnlyData>(FObjectInitializer *param_1)

{
  FSharedReferencer<1> *pFVar1;
  double dVar2;
  UMaterialInterfaceEditorOnlyData *this;
  undefined8 uVar3;
  FMaterialAttributeDefintion *pFVar4;
  FLinearColor *pFVar5;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  FLinearColor FStack_18;
  
  this = (UMaterialInterfaceEditorOnlyData *)param_1->Obj;
  if (this == (UMaterialInterfaceEditorOnlyData *)0x0) {
    return;
  }
  UMaterialInterfaceEditorOnlyData::UMaterialInterfaceEditorOnlyData(this);
  this->_padding_ = (longlong)&___7UMaterialEditorOnlyData__6B_;
  *(uint *)&this[1].CachedExpressionData.Object =
       *(uint *)&this[1].CachedExpressionData.Object & 0xfffffffe;
  this[1]._padding_ = 0;
  *(undefined8 *)((longlong)&this[1].CachedExpressionData.Object + 4) = 0;
  *(undefined8 *)
   ((longlong)&this[1].CachedExpressionData.SharedReferenceCount.ReferenceController + 4) = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(uint *)&this[2].CachedExpressionData.Object =
       *(uint *)&this[2].CachedExpressionData.Object & 0xfffffffe;
  *(uint *)&this[3]._padding_ = (uint)this[3]._padding_ & 0xfffffffe;
  *(uint *)&this[4]._padding_ = (uint)this[4]._padding_ & 0xfffffffe;
  *(uint *)&this[4].bLoadedCachedExpressionData =
       *(uint *)&this[4].bLoadedCachedExpressionData & 0xfffffffe;
  *(uint *)&this[5].CachedExpressionData.Object =
       *(uint *)&this[5].CachedExpressionData.Object & 0xfffffffe;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this[2].CachedExpressionData.Object + 4) = 0;
  *(undefined8 *)&this[2].bLoadedCachedExpressionData = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  this[2].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
  this[3].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[3].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[3].bLoadedCachedExpressionData = 0;
  this[4]._padding_ = 0;
  this[3]._padding_ = 0;
  *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
  this[4]._padding_ = 0;
  this[4]._padding_ = 0;
  this[4].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[4].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this[4]._padding_ = 0;
  *(undefined4 *)&this[4].field_0x3c = 0;
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  *(undefined8 *)((longlong)&this[5].CachedExpressionData.Object + 4) = 0;
  *(undefined4 *)
   ((longlong)&this[5].CachedExpressionData.SharedReferenceCount.ReferenceController + 4) = 0;
  *(uint *)&this[6]._padding_ = (uint)this[6]._padding_ & 0xfffffffe;
  this[6]._padding_ = 0;
  this[6]._padding_ = 0;
  this[6]._padding_ = 0;
  this[6]._padding_ = 0;
  *(undefined8 *)&this[5].bLoadedCachedExpressionData = 0;
  *(undefined8 *)((longlong)&this[6]._padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this[6].CachedExpressionData.Object + 4) = 0;
  *(uint *)&this[7]._padding_ = (uint)this[7]._padding_ & 0xfffffffe;
  this[7]._padding_ = 0;
  *(undefined8 *)((longlong)&this[7]._padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this[7]._padding_ + 4) = 0;
  *(undefined8 *)&this[6].bLoadedCachedExpressionData = 0;
  this[7]._padding_ = 0;
  this[7]._padding_ = 0;
  this[6].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(uint *)&this[8]._padding_ = (uint)this[8]._padding_ & 0xfffffffe;
  *(undefined8 *)&this[7].bLoadedCachedExpressionData = 0;
  this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[7].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)((longlong)&this[8]._padding_ + 4) = 0;
  this[8].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[8].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[8].bLoadedCachedExpressionData = 0;
  this[9]._padding_ = 0;
  *(uint *)&this[9]._padding_ = (uint)this[9]._padding_ & 0xfffffffe;
  *(uint *)&this[9].bLoadedCachedExpressionData =
       *(uint *)&this[9].bLoadedCachedExpressionData & 0xfffffffe;
  this[8]._padding_ = 0;
  *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
  this[9]._padding_ = 0;
  this[9]._padding_ = 0;
  this[9].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[9].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this[9]._padding_ = 0;
  _fStack_28 = 0;
  *(undefined8 *)&this[9].field_0x3c = 0;
  *(undefined4 *)((longlong)&this[10]._padding_ + 4) = 0;
  pFVar1 = &this[10].CachedExpressionData.SharedReferenceCount;
  *(uint *)&pFVar1->ReferenceController = *(uint *)&pFVar1->ReferenceController & 0xfffffffe;
  *(uint *)&this[0xb]._padding_ = (uint)this[0xb]._padding_ & 0xfffffffe;
  this[10]._padding_ = 0;
  this[10]._padding_ = 0;
  this[10]._padding_ = 0;
  this[10].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[10]._padding_ = 0;
  *(undefined4 *)
   ((longlong)&this[10].CachedExpressionData.SharedReferenceCount.ReferenceController + 4) = 0;
  this[0xb]._padding_ = 0;
  *(undefined8 *)((longlong)&this[0xb]._padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this[0xb].CachedExpressionData.Object + 4) = 0;
  this[0xb]._padding_ = 0;
  this[0xb]._padding_ = 0;
  this[0xb]._padding_ = 0;
  *(undefined8 *)&this[10].bLoadedCachedExpressionData = 0;
  *(uint *)&this[0xc]._padding_ = (uint)this[0xc]._padding_ & 0xfffffffe;
  *(uint *)&this[0xd]._padding_ = (uint)this[0xd]._padding_ & 0xfffffffe;
  *(uint *)&this[0xe]._padding_ = (uint)this[0xe]._padding_ & 0xfffffffe;
  pFVar1 = &this[0xe].CachedExpressionData.SharedReferenceCount;
  *(uint *)&pFVar1->ReferenceController = *(uint *)&pFVar1->ReferenceController & 0xfffffffe;
  this[0xc]._padding_ = 0;
  this[0xc]._padding_ = 0;
  this[0xc]._padding_ = 0;
  this[0xc]._padding_ = 0;
  *(undefined8 *)&this[0xb].bLoadedCachedExpressionData = 0;
  *(undefined4 *)((longlong)&this[0xc]._padding_ + 4) = 0;
  this[0xc].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[0xc].bLoadedCachedExpressionData = 0;
  this[0xd]._padding_ = 0;
  this[0xd]._padding_ = 0;
  this[0xc].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  *(undefined4 *)((longlong)&this[0xd]._padding_ + 4) = 0;
  this[0xd]._padding_ = 0;
  this[0xd].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[0xd].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[0xd].bLoadedCachedExpressionData = 0;
  this[0xd]._padding_ = 0;
  *(undefined4 *)((longlong)&this[0xe]._padding_ + 4) = 0;
  this[0xe]._padding_ = 0;
  this[0xe]._padding_ = 0;
  this[0xe]._padding_ = 0;
  this[0xe].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[0xe]._padding_ = 0;
  *(undefined4 *)
   ((longlong)&this[0xe].CachedExpressionData.SharedReferenceCount.ReferenceController + 4) = 0;
  *(uint *)&this[0xf]._padding_ = (uint)this[0xf]._padding_ & 0xfffffffe;
  this[0xf]._padding_ = 0;
  *(undefined8 *)((longlong)&this[0xf]._padding_ + 4) = 0;
  this[0xf]._padding_ = 0;
  this[0xf]._padding_ = 0;
  this[0xf]._padding_ = 0;
  *(undefined8 *)&this[0xe].bLoadedCachedExpressionData = 0;
  *(undefined8 *)&this[0xf].bLoadedCachedExpressionData = 0;
  this[0x10]._padding_ = 0;
  this[0x10]._padding_ = 0;
  this[0x10]._padding_ = 0;
  this[0xf].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(uint *)&this[0x10]._padding_ = (uint)this[0x10]._padding_ & 0xfffffffe;
  *(undefined8 *)((longlong)&this[0x10]._padding_ + 4) = 0;
  this[0x10].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[0x10].bLoadedCachedExpressionData = 0;
  this[0x11]._padding_ = 0;
  this[0x11]._padding_ = 0;
  this[0x10].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  *(uint *)&this[0x11]._padding_ = (uint)this[0x11]._padding_ & 0xfffffffe;
  *(undefined8 *)((longlong)&this[0x11]._padding_ + 4) = 0;
  this[0x11].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[0x11].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[0x11].bLoadedCachedExpressionData = 0;
  this[0x12]._padding_ = 0;
  this[0x11]._padding_ = 0;
  *(uint *)&this[0x12]._padding_ = (uint)this[0x12]._padding_ & 0xfffffffe;
  *(undefined8 *)((longlong)&this[0x12]._padding_ + 4) = 0;
  this[0x12]._padding_ = 0;
  this[0x12].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[0x12].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[0x12].bLoadedCachedExpressionData = 0;
  this[0x12]._padding_ = 0;
  *(uint *)&this[0x13]._padding_ = (uint)this[0x13]._padding_ & 0xfffffffe;
  *(undefined8 *)((longlong)&this[0x13]._padding_ + 4) = 0;
  this[0x13]._padding_ = 0;
  this[0x13]._padding_ = 0;
  this[0x13].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[0x13].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this[0x13]._padding_ = 0;
  *(uint *)&this[0x13].bLoadedCachedExpressionData =
       *(uint *)&this[0x13].bLoadedCachedExpressionData & 0xfffffffe;
  *(undefined8 *)&this[0x13].field_0x3c = 0;
  this[0x14]._padding_ = 0;
  this[0x14]._padding_ = 0;
  this[0x14]._padding_ = 0;
  this[0x14].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[0x14]._padding_ = 0;
  pFVar1 = &this[0x14].CachedExpressionData.SharedReferenceCount;
  *(uint *)&pFVar1->ReferenceController = *(uint *)&pFVar1->ReferenceController & 0xfffffffe;
  *(undefined8 *)
   ((longlong)&this[0x14].CachedExpressionData.SharedReferenceCount.ReferenceController + 4) = 0;
  this[0x15]._padding_ = 0;
  this[0x15]._padding_ = 0;
  this[0x15]._padding_ = 0;
  this[0x15]._padding_ = 0;
  this[0x15]._padding_ = 0;
  *(uint *)&this[0x15].CachedExpressionData.Object =
       *(uint *)&this[0x15].CachedExpressionData.Object & 0xfffffffe;
  *(undefined8 *)((longlong)&this[0x15].CachedExpressionData.Object + 4) = 0;
  *(uint *)&this[0x17]._padding_ = (uint)this[0x17]._padding_ & 0xfffffffe;
  *(uint *)&this[0x18]._padding_ = (uint)this[0x18]._padding_ & 0xfffffffe;
  pFVar1 = &this[0x18].CachedExpressionData.SharedReferenceCount;
  *(uint *)&pFVar1->ReferenceController = *(uint *)&pFVar1->ReferenceController & 0xfffffffe;
  *(uint *)&this[0x19]._padding_ = (uint)this[0x19]._padding_ & 0xfffffffe;
  this[0x16]._padding_ = 0;
  this[0x16]._padding_ = 0;
  this[0x16]._padding_ = 0;
  this[0x16]._padding_ = 0;
  *(undefined8 *)&this[0x15].bLoadedCachedExpressionData = 0;
  this[0x16]._padding_ = 0;
  this[0x16].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[0x16].bLoadedCachedExpressionData = 0;
  this[0x17]._padding_ = 0;
  this[0x17]._padding_ = 0;
  this[0x16].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  *(undefined4 *)((longlong)&this[0x17]._padding_ + 4) = 0;
  this[0x17]._padding_ = 0;
  this[0x17].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[0x17].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[0x17].bLoadedCachedExpressionData = 0;
  this[0x17]._padding_ = 0;
  *(undefined4 *)((longlong)&this[0x18]._padding_ + 4) = 0;
  this[0x18]._padding_ = 0;
  this[0x18]._padding_ = 0;
  this[0x18]._padding_ = 0;
  this[0x18].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[0x18]._padding_ = 0;
  *(undefined4 *)
   ((longlong)&this[0x18].CachedExpressionData.SharedReferenceCount.ReferenceController + 4) = 0;
  this[0x19]._padding_ = 0;
  this[0x19]._padding_ = 0;
  this[0x19]._padding_ = 0;
  this[0x19]._padding_ = 0;
  *(undefined8 *)&this[0x18].bLoadedCachedExpressionData = 0;
  *(undefined4 *)((longlong)&this[0x19]._padding_ + 4) = 0;
  this[0x19].CachedExpressionData.Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  this[0x19].CachedExpressionData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this[0x19].bLoadedCachedExpressionData = 0;
  this[0x1a]._padding_ = 0;
  this[0x1a]._padding_ = 0;
  this[0x1a]._padding_ = 0;
  this[0x1a]._padding_ = 0;
  this[0x1a]._padding_ = 0;
  *(undefined1 *)&this[0x1a].CachedExpressionData.SharedReferenceCount.ReferenceController = 0;
  ((FLinearColor_u_0 *)((longlong)&this[1].CachedExpressionData.Object + 4))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Gray.field0_0x0;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Metallic);
  *(float *)((longlong)&this[2].CachedExpressionData.Object + 4) =
       (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Specular);
  *(float *)((longlong)&this[3]._padding_ + 4) = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Roughness)
  ;
  *(float *)((longlong)&this[4]._padding_ + 4) = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Anisotropy
                     );
  *(float *)&this[4].field_0x3c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Normal);
  dVar2 = (pFVar4->DefaultValue).field0_0x0._s_0.Z;
  *(ulonglong *)((longlong)&this[5].CachedExpressionData.Object + 4) =
       CONCAT44((float)(pFVar4->DefaultValue).field0_0x0._s_0.Y,
                (float)(pFVar4->DefaultValue).field0_0x0._s_0.X);
  *(float *)((longlong)&this[5].CachedExpressionData.SharedReferenceCount.ReferenceController + 4) =
       (float)dVar2;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Tangent);
  dVar2 = (pFVar4->DefaultValue).field0_0x0._s_0.Z;
  *(ulonglong *)((longlong)&this[6]._padding_ + 4) =
       CONCAT44((float)(pFVar4->DefaultValue).field0_0x0._s_0.Y,
                (float)(pFVar4->DefaultValue).field0_0x0._s_0.X);
  *(float *)((longlong)&this[6].CachedExpressionData.Object + 4) = (float)dVar2;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_EmissiveColor);
  uStack_1c = (undefined4)(pFVar4->DefaultValue).field0_0x0._s_0.W;
  uStack_20 = (undefined4)(pFVar4->DefaultValue).field0_0x0._s_0.Z;
  fStack_24 = (float)(pFVar4->DefaultValue).field0_0x0._s_0.Y;
  fStack_28 = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar5 = FLinearColor::FLinearColor(&FStack_18,(TVector4<float> *)&fStack_28);
  uVar3 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)((longlong)&this[7]._padding_ + 4) = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)((longlong)&this[7]._padding_ + 4) = uVar3;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Opacity);
  *(float *)((longlong)&this[8]._padding_ + 4) = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_OpacityMask);
  *(float *)((longlong)&this[9]._padding_ + 4) = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_WorldPositionOffset);
  dVar2 = (pFVar4->DefaultValue).field0_0x0._s_0.Z;
  *(ulonglong *)&this[9].field_0x3c =
       CONCAT44((float)(pFVar4->DefaultValue).field0_0x0._s_0.Y,
                (float)(pFVar4->DefaultValue).field0_0x0._s_0.X);
  *(float *)((longlong)&this[10]._padding_ + 4) = (float)dVar2;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_Displacement);
  *(float *)((longlong)&this[10].CachedExpressionData.SharedReferenceCount.ReferenceController + 4)
       = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_SubsurfaceColor);
  uStack_1c = (undefined4)(pFVar4->DefaultValue).field0_0x0._s_0.W;
  uStack_20 = (undefined4)(pFVar4->DefaultValue).field0_0x0._s_0.Z;
  fStack_24 = (float)(pFVar4->DefaultValue).field0_0x0._s_0.Y;
  fStack_28 = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar5 = FLinearColor::FLinearColor(&FStack_18,(TVector4<float> *)&fStack_28);
  uVar3 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)((longlong)&this[0xb]._padding_ + 4) = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)((longlong)&this[0xb].CachedExpressionData.Object + 4) = uVar3;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_CustomData0);
  *(float *)((longlong)&this[0xc]._padding_ + 4) = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_CustomData1);
  *(float *)((longlong)&this[0xd]._padding_ + 4) = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_AmbientOcclusion);
  *(float *)((longlong)&this[0xe]._padding_ + 4) = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Refraction
                     );
  *(float *)((longlong)&this[0xe].CachedExpressionData.SharedReferenceCount.ReferenceController + 4)
       = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_SurfaceThickness);
  dVar2 = (pFVar4->DefaultValue).field0_0x0._s_0.X;
  this[0x1a].CachedExpressionData.Object =
       (FMaterialCachedExpressionEditorOnlyData *)0xffffffffffffffff;
  *(float *)((longlong)&this[0x18].CachedExpressionData.SharedReferenceCount.ReferenceController + 4
            ) = (float)dVar2;
  return;
}

// InternalConstructor<UMaterialEnumerationProvider> @ 147eee970

void __cdecl InternalConstructor<UMaterialEnumerationProvider>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMaterialEnumerationProvider__6B_;
  }
  return;
}

// InternalConstructor<UMaterialExpressionLayerStack> @ 147eee9a0

void __cdecl InternalConstructor<UMaterialExpressionLayerStack>(FObjectInitializer *param_1)

{
  UMaterialExpressionMaterialAttributeLayers *this;
  
  this = (UMaterialExpressionMaterialAttributeLayers *)param_1->Obj;
  if (this != (UMaterialExpressionMaterialAttributeLayers *)0x0) {
    UMaterialExpressionMaterialAttributeLayers::UMaterialExpressionMaterialAttributeLayers
              (this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionLayerStack__6B_;
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
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1].Input._padding_ = 0;
    this[1].Input._padding_ = 0;
    *(undefined1 *)&this[1].Input._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMaterialExpressionNoise> @ 147eeea80

void __cdecl InternalConstructor<UMaterialExpressionNoise>(FObjectInitializer *param_1)

{
  uint *puVar1;
  int *piVar2;
  UMaterialExpression *this;
  ulonglong uVar3;
  
  this = (UMaterialExpression *)param_1->Obj;
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    uVar3 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7UMaterialExpressionNoise__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].MaterialExpressionEditorX = 0;
    this[1].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[1].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].LastErrorText.Data.ArrayNum = 0;
    this[1].LastErrorText.Data.ArrayMax = 0;
    this[1].MaterialExpressionGuid.A = 0;
    this[1].MaterialExpressionGuid.B = 0;
    this[1].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&ConstructorStatics.NAME_Utility,L"MaterialExpressionNoise",L"Utility",L"Utility"
                  );
        atexit(`UMaterialExpressionNoise::UMaterialExpressionNoise'::__l2::
               _dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
      }
    }
    puVar1 = (uint *)((longlong)&this[1].Material.field0_0x0 + 4);
    *puVar1 = *puVar1 | 1;
    piVar2 = &this[1].Desc.Data.ArrayNum;
    *piVar2 = *piVar2 & 0xfffffffe;
    this[1].MaterialExpressionGuid.C = 0x3f800000;
    *(undefined4 *)&this[1].Function.field0_0x0 = 6;
    this[1].MaterialExpressionGuid.D = 1;
    *(undefined4 *)((longlong)&this[1].Function.field0_0x0 + 4) = 0xbf800000;
    *(undefined4 *)&this[1].Desc.Data.AllocatorInstance.Data = 0x3f800000;
    *(undefined4 *)((longlong)&this[1].Desc.Data.AllocatorInstance.Data + 4) = 0x40000000;
    *(undefined1 *)&this[1].Material.field0_0x0 = 0;
    this[1].Desc.Data.ArrayMax = 0x200;
  }
  return;
}

// InternalConstructor<UMaterialExpressionScalarBlueNoise> @ 147eeebe0

void __cdecl InternalConstructor<UMaterialExpressionScalarBlueNoise>(FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase *this;
  ulonglong uVar1;
  
  this = (UMaterialExpressionExternalCodeBase *)param_1->Obj;
  if (this != (UMaterialExpressionExternalCodeBase *)0x0) {
    UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase(this,param_1);
    uVar1 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7UMaterialExpressionScalarBlueNoise__6B_;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&ConstructorStatics.NAME_Utility,L"MaterialExpressionNoise",L"Noise",L"Noise");
        atexit(`UMaterialExpressionScalarBlueNoise::UMaterialExpressionScalarBlueNoise'::__l2::
               _dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
        return;
      }
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<UMaterial> @ 147eeec90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMaterial>(FVTableHelper *param_1)

{
  undefined1 *this;
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterial *this_00;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterial::GetPrivateStaticClass();
  this_00 = (UMaterial *)
            StaticAllocateObject
                      (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                       Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (this_00 != (UMaterial *)0x0) {
    UMaterialInterface::UMaterialInterface((UMaterialInterface *)this_00,param_1);
    this = &(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
    this_00->_padding_ = (longlong)&UMaterial::_vftable__for__UObject__;
    this_00->_padding_ = (longlong)&UMaterial::_vftable__for__IBlendableInterface__;
    this_00->_padding_ = (longlong)&UMaterial::_vftable__for__IInterface_AssetUserData__;
    (this_00->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
    (this_00->PhysMaterialMask).field0_0x0.DebugPtr = (UPhysicalMaterialMask *)0x0;
    this_00->PhysicalMaterialMap[0].field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
    this_00->PhysicalMaterialMap[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[2].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[3].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[4].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[5].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[6].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[7].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    (this_00->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this_00->RenderTracePhysicalMaterialOutputs).ArrayNum = 0;
    (this_00->RenderTracePhysicalMaterialOutputs).ArrayMax = 0;
    (this_00->NaniteOverrideMaterial).bEnableOverride = true;
    (this_00->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr =
         (UMaterialInterface *)0x0;
    *(undefined8 *)this = 0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x20 =
         0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr = 0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x10 =
         0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x8 =
         0;
    FUtf8String::Reset((FUtf8String *)this,0);
    (this_00->DisplacementScaling).Magnitude = 4.0;
    (this_00->DisplacementScaling).Center = 0.5;
    (this_00->DisplacementFadeRange).StartSizePixels = 4.0;
    (this_00->DisplacementFadeRange).EndSizePixels = 1.0;
    (this_00->ShadingModels).ShadingModelField = 0;
    this_00->TranslucentLocalLightShadowQuality = 0.0;
    this_00->TranslucentDirectionalLightShadowQuality = 0.0;
    (this_00->UserSceneTexture).ComparisonIndex = 0;
    (this_00->UserSceneTexture).Number = 0;
    (this_00->UserTextureDivisor).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this_00->ResolutionRelativeToInput).ComparisonIndex = 0;
    (this_00->ResolutionRelativeToInput).Number = 0;
    this_00->StencilRefValue = '\0';
    this_00->NeuralProfileId = -1;
    this_00->UsageFlagCacheMiss = (atomic<unsigned_int>)0x0;
    (this_00->SubstrateCompilationConfig).bFullSimplify = false;
    (this_00->SubstrateCompilationConfig).BytesPerPixelOverride = -1;
    (this_00->SubstrateCompilationConfig).ClosuresPerPixelOverride = -1;
    (this_00->StateId).A = 0;
    (this_00->StateId).B = 0;
    (this_00->StateId).C = 0;
    (this_00->StateId).D = 0;
    (this_00->LoadedMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->LoadedMaterialResources).ArrayNum = 0;
    (this_00->LoadedMaterialResources).ArrayMax = 0;
    (this_00->MaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->MaterialResources).ArrayNum = 0;
    (this_00->MaterialResources).ArrayMax = 0;
    this_00->ReleasedByRT = (FThreadSafeBool)0x1;
    this_00->bCachingUniformExpressions = false;
    UMaterial::SetInitialValues(this_00);
    return (UObject *)this_00;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialAggregate> @ 147eeeca0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMaterialAggregate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialAggregate::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialAggregate__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialEditorOnlyData> @ 147eeed60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMaterialEditorOnlyData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialEditorOnlyData *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialEditorOnlyData::GetPrivateStaticClass();
  pUVar3 = (UMaterialEditorOnlyData *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMaterialEditorOnlyData *)0x0) {
    pUVar3 = UMaterialEditorOnlyData::UMaterialEditorOnlyData(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialEnumerationProvider> @ 147eeee00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialEnumerationProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialEnumerationProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMaterialEnumerationProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionLayerStack> @ 147eeeeb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionLayerStack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpressionMaterialAttributeLayers *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionLayerStack::GetPrivateStaticClass();
  this = (UMaterialExpressionMaterialAttributeLayers *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpressionMaterialAttributeLayers *)0x0) {
    UMaterialExpressionMaterialAttributeLayers::UMaterialExpressionMaterialAttributeLayers
              (this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionLayerStack__6B_;
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
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1].Input._padding_ = 0;
    this[1].Input._padding_ = 0;
    *(undefined1 *)&this[1].Input._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionNoise> @ 147eef010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMaterialExpressionNoise>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionNoise::GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    *(undefined1 *)&this[1].MaterialExpressionEditorX = 0;
    this->_padding_ = (longlong)&___7UMaterialExpressionNoise__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[1].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].LastErrorText.Data.ArrayNum = 0;
    this[1].LastErrorText.Data.ArrayMax = 0;
    this[1].MaterialExpressionGuid.A = 0;
    this[1].MaterialExpressionGuid.B = 0;
    this[1].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionScalarBlueNoise> @ 147eef110

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionScalarBlueNoise>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpressionExternalCodeBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionScalarBlueNoise::GetPrivateStaticClass();
  this = (UMaterialExpressionExternalCodeBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpressionExternalCodeBase *)0x0) {
    UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionScalarBlueNoise__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<UObject_*,int,FIdentityFunctor,TDereferenceWrapper<UObject_*,`UMaterial::AllMaterialsCacheResourceShadersForRendering'::__l2::<lambda_1>_>_> @ 147eef1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UObject_*,int,FIdentityFunctor,TDereferenceWrapper<UObject_*,_UMaterial::AllMaterialsCacheResourceShadersForRendering_::__l2::<lambda_1>_>_>
          (UObject **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UObject_*,_public:_static_void___cdecl_UMaterial::AllMaterialsCacheResourceShadersForRendering(bool,bool)_::_2_::<lambda_1>_>
          param_4)

{
  UObject **ppUVar1;
  UObject *pUVar2;
  UMaterial *pUVar3;
  int iVar4;
  UMaterial **ppUVar5;
  UObject **ppUVar6;
  UObject **ppUVar7;
  UObject **ppUVar8;
  UObject **ppUVar9;
  UObject **ppUVar10;
  UObject ***pppUVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_388 [48];
  UObject **local_358;
  UObject **local_348;
  UObject **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    pppUVar11 = &local_348;
    do {
      ppUVar6 = pppUVar11[1];
      ppUVar9 = *pppUVar11;
      ppUVar1 = pppUVar11[2];
      iVar4 = (int)((longlong)ppUVar6 - (longlong)ppUVar9 >> 3) + 1;
      local_358._0_4_ = (int)ppUVar1;
      ppUVar10 = ppUVar9;
      if ((int)local_358 != 0) {
LAB_147eef290:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          ppUVar7 = ppUVar6 + 1;
          pUVar2 = ppUVar10[iVar4 >> 1];
          ppUVar10[iVar4 >> 1] = *ppUVar10;
          *ppUVar10 = pUVar2;
          ppUVar9 = ppUVar10;
LAB_147eef2c0:
          ppUVar9 = ppUVar9 + 1;
          if (ppUVar9 <= ppUVar6) goto code_r0x000147eef2c9;
          goto LAB_147eef311;
        }
        for (; ppUVar9 = ppUVar10, ppUVar1 = ppUVar10, ppUVar10 < ppUVar6; ppUVar6 = ppUVar6 + -1) {
          while (ppUVar7 = ppUVar9, ppUVar1 = ppUVar1 + 1, ppUVar1 <= ppUVar6) {
            bVar12 = false;
            ppUVar5 = GDefaultMaterials;
            do {
              if (0x15521492f < (longlong)ppUVar5) break;
              pUVar3 = *ppUVar5;
              bVar12 = (UMaterial *)*ppUVar7 == pUVar3;
              ppUVar5 = ppUVar5 + 1;
            } while ((UMaterial *)*ppUVar7 != pUVar3);
            bVar13 = false;
            ppUVar5 = GDefaultMaterials;
            do {
              if (0x15521492f < (longlong)ppUVar5) break;
              pUVar3 = *ppUVar5;
              bVar13 = (UMaterial *)*ppUVar1 == pUVar3;
              ppUVar5 = ppUVar5 + 1;
            } while ((UMaterial *)*ppUVar1 != pUVar3);
            ppUVar9 = ppUVar1;
            if (!(bool)(bVar12 & (bVar13 ^ 1U))) {
              ppUVar9 = ppUVar7;
            }
          }
          pUVar2 = *ppUVar7;
          *ppUVar7 = *ppUVar6;
          *ppUVar6 = pUVar2;
        }
        goto LAB_147eef40c;
      }
LAB_147eef3fb:
      local_358 = ppUVar1;
      HeapSortInternal<UObject_*,int,FIdentityFunctor,TDereferenceWrapper<UObject_*,_UMaterial::AllMaterialsCacheResourceShadersForRendering_::__l2::<lambda_1>_>_>
                (ppUVar9,iVar4,param_3,param_4);
LAB_147eef40c:
      pppUVar11 = pppUVar11 + -3;
    } while (&local_348 <= pppUVar11);
  }
  return;
code_r0x000147eef2c9:
  bVar12 = false;
  ppUVar5 = GDefaultMaterials;
  do {
    if (0x15521492f < (longlong)ppUVar5) break;
    pUVar3 = *ppUVar5;
    bVar12 = (UMaterial *)*ppUVar10 == pUVar3;
    ppUVar5 = ppUVar5 + 1;
  } while ((UMaterial *)*ppUVar10 != pUVar3);
  bVar13 = false;
  ppUVar5 = GDefaultMaterials;
  do {
    if (0x15521492f < (longlong)ppUVar5) break;
    pUVar3 = *ppUVar5;
    bVar13 = (UMaterial *)*ppUVar9 == pUVar3;
    ppUVar5 = ppUVar5 + 1;
  } while ((UMaterial *)*ppUVar9 != pUVar3);
  if (!(bool)(bVar12 & (bVar13 ^ 1U))) goto LAB_147eef2c0;
LAB_147eef311:
  do {
    ppUVar8 = ppUVar7;
    ppUVar7 = ppUVar8 + -1;
    if (ppUVar7 <= ppUVar10) break;
    bVar12 = false;
    ppUVar5 = GDefaultMaterials;
    do {
      if (0x15521492f < (longlong)ppUVar5) break;
      pUVar3 = *ppUVar5;
      bVar12 = (UMaterial *)*ppUVar7 == pUVar3;
      ppUVar5 = ppUVar5 + 1;
    } while ((UMaterial *)*ppUVar7 != pUVar3);
    bVar13 = false;
    ppUVar5 = GDefaultMaterials;
    do {
      if (0x15521492f < (longlong)ppUVar5) break;
      pUVar3 = *ppUVar5;
      bVar13 = (UMaterial *)*ppUVar10 == pUVar3;
      ppUVar5 = ppUVar5 + 1;
    } while ((UMaterial *)*ppUVar10 != pUVar3);
  } while (!(bool)(bVar12 & (bVar13 ^ 1U)));
  if (ppUVar9 <= ppUVar7) {
    pUVar2 = *ppUVar9;
    *ppUVar9 = *ppUVar7;
    *ppUVar7 = pUVar2;
    goto LAB_147eef2c0;
  }
  pUVar2 = *ppUVar10;
  local_358._0_4_ = (int)local_358 + -1;
  *ppUVar10 = *ppUVar7;
  *ppUVar7 = pUVar2;
  if ((longlong)((longlong)ppUVar7 + (-8 - (longlong)ppUVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar6 - (longlong)ppUVar9 & 0xfffffffffffffff8U)) {
    if (ppUVar9 < ppUVar6) {
      *pppUVar11 = ppUVar9;
      pppUVar11[1] = ppUVar6;
      *(int *)(pppUVar11 + 2) = (int)local_358;
      pppUVar11 = pppUVar11 + 3;
    }
    if (ppUVar7 <= ppUVar10 + 1) goto LAB_147eef40c;
    ppUVar6 = ppUVar8 + -2;
    ppUVar9 = ppUVar10;
  }
  else {
    if (ppUVar10 + 1 < ppUVar7) {
      *pppUVar11 = ppUVar10;
      pppUVar11[1] = ppUVar8 + -2;
      *(int *)(pppUVar11 + 2) = (int)local_358;
      pppUVar11 = pppUVar11 + 3;
    }
    if (ppUVar6 <= ppUVar9) goto LAB_147eef40c;
  }
  iVar4 = (int)((longlong)ppUVar6 - (longlong)ppUVar9 >> 3) + 1;
  ppUVar10 = ppUVar9;
  if ((int)local_358 == 0) goto LAB_147eef3fb;
  goto LAB_147eef290;
}

// StaticEnum<enum_EDecalBlendMode> @ 147eef6b0

UEnum * __cdecl StaticEnum<enum_EDecalBlendMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDecalBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDecalBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDecalBlendMode,(UObject *)pUVar1,L"EDecalBlendMode"
                      );
  }
  return Z_Registration_Info_UEnum_EDecalBlendMode.OuterSingleton;
}

// StaticEnum<enum_EMaterialAggregateAttributeType> @ 147eef6f0

UEnum * __cdecl StaticEnum<enum_EMaterialAggregateAttributeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialAggregateAttributeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaterialAggregateAttributeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialAggregateAttributeType,(UObject *)pUVar1,
                       L"EMaterialAggregateAttributeType");
  }
  return Z_Registration_Info_UEnum_EMaterialAggregateAttributeType.OuterSingleton;
}

// StaticEnum<enum_EMaterialDecalResponse> @ 147eef730

UEnum * __cdecl StaticEnum<enum_EMaterialDecalResponse>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialDecalResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaterialDecalResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialDecalResponse,(UObject *)pUVar1,
                       L"EMaterialDecalResponse");
  }
  return Z_Registration_Info_UEnum_EMaterialDecalResponse.OuterSingleton;
}

// StaticEnum<enum_EMaterialTranslucencyPass> @ 147eef770

UEnum * __cdecl StaticEnum<enum_EMaterialTranslucencyPass>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialTranslucencyPass.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaterialTranslucencyPass.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialTranslucencyPass,(UObject *)pUVar1,
                       L"EMaterialTranslucencyPass");
  }
  return Z_Registration_Info_UEnum_EMaterialTranslucencyPass.OuterSingleton;
}

// StaticEnum<enum_ENoiseFunction> @ 147eef7b0

UEnum * __cdecl StaticEnum<enum_ENoiseFunction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENoiseFunction,(UObject *)pUVar1,L"ENoiseFunction");
  }
  return Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton;
}

// atomic_fetch_and<unsigned_int> @ 147eef7f0

uint __cdecl std::atomic_fetch_and<unsigned_int>(atomic<unsigned_int> *param_1,uint param_2)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  
  aVar2 = *param_1;
  do {
    LOCK();
    aVar1 = *param_1;
    bVar3 = aVar2 == aVar1;
    if (bVar3) {
      *param_1 = (atomic<unsigned_int>)((uint)aVar2 & param_2);
      aVar1 = aVar2;
    }
    aVar2 = aVar1;
    UNLOCK();
  } while (!bVar3);
  return (uint)aVar2;
}

// atomic_fetch_or<unsigned_int> @ 147eef820

uint __cdecl std::atomic_fetch_or<unsigned_int>(atomic<unsigned_int> *param_1,uint param_2)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  
  aVar2 = *param_1;
  do {
    LOCK();
    aVar1 = *param_1;
    bVar3 = aVar2 == aVar1;
    if (bVar3) {
      *param_1 = (atomic<unsigned_int>)((uint)aVar2 | param_2);
      aVar1 = aVar2;
    }
    aVar2 = aVar1;
    UNLOCK();
  } while (!bVar3);
  return (uint)aVar2;
}

// ~TFunction_OwnedObject<`FDefaultMaterialInstance::GameThread_Destroy'::__l2::<lambda_1>,1,0> @ 147ef1ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultMaterialInstance::GameThread_Destroy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDefaultMaterialInstance::GameThread_Destroy_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GameThread_Destroy_FDefaultMaterialInstance__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UMaterial::BeginDestroy'::__l12::<lambda_1>,1,1> @ 147ef1f00

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UMaterial::BeginDestroy'::__l12::<lambda_1>,1,1>
::~TFunction_OwnedObject<_UMaterial::BeginDestroy_::__l12::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterial::BeginDestroy'::`12'::<lambda_1>,1,1>::_vftable_;
  DestructItems<TRefCountPtr<FMaterialResource>,int>
            (*(TRefCountPtr<FMaterialResource> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// operator() @ 147ef3860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `ListSceneColorMaterials'::__l2::<lambda_1>::operator()(void *this,Type param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong *plVar6;
  FMaterial *this_01;
  longlong lVar7;
  FString local_48;
  FString local_38;
  TObjectIterator<UMaterialInterface> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  GetFeatureLevelName(param_1,&local_48);
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  TObjectIterator<UMaterialInterface>::Advance(&local_28);
  while( true ) {
    lVar7 = (longlong)local_28.Index;
    if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
      if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      return;
    }
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    this_00 = *(UObjectBaseUtility **)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
    plVar6 = (longlong *)(**(code **)(*(longlong *)this_00 + 0x310))(this_00);
    this_01 = (FMaterial *)(**(code **)(*plVar6 + 0x30))(plVar6,param_1);
    if ((this_01 != (FMaterial *)0x0) &&
       (bVar2 = FMaterial::RequiresSceneColorCopy_GameThread(this_01), bVar2)) {
      (**(code **)(*(longlong *)this_00 + 0x2d8))(this_00);
      if (3 < (byte)LogConsoleResponse._0_1_) {
        UObjectBaseUtility::GetPathName(this_00,&local_38,(UObject *)0x0);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      **(int **)this = **(int **)this + 1;
    }
    TObjectIterator<UMaterialInterface>::Advance(&local_28);
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147ef3b50

/* [thunk]:public: virtual void * __ptr64 __cdecl UMaterial::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMaterial::_vector_deleting_destructor__adjustor_40__(UMaterial *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMaterial *)&this[-1].LoadedMaterialResources,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 147ef3b60

/* [thunk]:public: virtual void * __ptr64 __cdecl UMaterial::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UMaterial::_vector_deleting_destructor__adjustor_48__(UMaterial *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMaterial *)&this[-1].DefaultMaterialInstance,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147ef3b70

void * __thiscall
TBaseSPMethodDelegateInstance<0,`UMaterial::CheckMaterialUsage_Concurrent'::__l13::FCallSMU,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultMaterialInstance::GameThread_Destroy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GameThread_Destroy_FDefaultMaterialInstance__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3c10

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UMaterial::BeginDestroy'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterial::BeginDestroy'::`12'::<lambda_1>,1,1>::_vftable_;
  DestructItems<TRefCountPtr<FMaterialResource>,int>
            (*(TRefCountPtr<FMaterialResource> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3c70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`UMaterial::CheckMaterialUsage_Concurrent'::__l13::FCallSMU,SharedPointerInternals::DefaultDeleter<`UMaterial::CheckMaterialUsage_Concurrent'::__l13::FCallSMU>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3cb0

void * __thiscall
FDefaultMaterialInstance::_scalar_deleting_destructor_(FDefaultMaterialInstance *this,uint param_1)

{
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3cf0

void * __thiscall FMaterial::_scalar_deleting_destructor_(FMaterial *this,uint param_1)

{
  ~FMaterial(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3d30

void * __thiscall
FMaterialResource::_scalar_deleting_destructor_(FMaterialResource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMaterialResource__6B_;
  FMaterialLayersFunctions::~FMaterialLayersFunctions(&this->MaterialLayersFunctions);
  FMaterial::~FMaterial((FMaterial *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3d80

void * __thiscall UMaterial::_scalar_deleting_destructor_(UMaterial *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->MaterialResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMaterialResource,int>
            ((FMaterialResource *)(this->LoadedMaterialResources).AllocatorInstance.Data,
             (this->LoadedMaterialResources).ArrayNum);
  pFVar1 = (this->LoadedMaterialResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialInterface::~UMaterialInterface((UMaterialInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3e50

void * __thiscall
UMaterialAggregate::_scalar_deleting_destructor_(UMaterialAggregate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialAggregate__6B_;
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3ec0

void * __thiscall
UMaterialEditorOnlyData::_scalar_deleting_destructor_(UMaterialEditorOnlyData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialEditorOnlyData__6B_;
  DestructItems<FParameterGroupData,int>
            ((FParameterGroupData *)(this->ParameterGroupData).AllocatorInstance.Data,
             (this->ParameterGroupData).ArrayNum);
  pFVar1 = (this->ParameterGroupData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExpressionCollection).EditorComments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExpressionCollection).Expressions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialInterfaceEditorOnlyData::~UMaterialInterfaceEditorOnlyData
            ((UMaterialInterfaceEditorOnlyData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef3f70

void * __thiscall
UMaterialEnumerationProvider::_scalar_deleting_destructor_
          (UMaterialEnumerationProvider *this,uint param_1)

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

// `scalar_deleting_destructor' @ 147ef3fd0

void * __thiscall
UMaterialExpressionLayerStack::_scalar_deleting_destructor_
          (UMaterialExpressionLayerStack *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionLayerStack__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedCache).SharedReferenceCount.ReferenceController);
  (this->AvailableBlends).HashSize = 0;
  FVar1 = (this->AvailableBlends).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMaterialFunctionInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMaterialFunctionInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AvailableBlends).Elements);
  (this->AvailableLayers).HashSize = 0;
  FVar1 = (this->AvailableLayers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMaterialFunctionInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMaterialFunctionInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AvailableLayers).Elements);
  pFVar2 = (this->LayerInputs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMaterialExpressionMaterialAttributeLayers::~UMaterialExpressionMaterialAttributeLayers
            ((UMaterialExpressionMaterialAttributeLayers *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef40b0

void * __thiscall
UMaterialExpressionNoise::_scalar_deleting_destructor_(UMaterialExpressionNoise *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionNoise__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ef4110

void * __thiscall
UMaterialExpressionScalarBlueNoise::_scalar_deleting_destructor_
          (UMaterialExpressionScalarBlueNoise *this,uint param_1)

{
  *(undefined ***)this = &___7UMaterialExpressionScalarBlueNoise__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// ConvertLegacyBlendMode @ 147ef6be0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

EBlendMode __cdecl ConvertLegacyBlendMode(EBlendMode param_1,FMaterialShadingModelField param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EBlendMode EVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_2.ShadingModelField -
          ((ulonglong)(param_2.ShadingModelField >> 1) & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  if ((char)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) == '\x01') {
    if (0x1ffe < (ushort)(param_2.ShadingModelField - 1)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineTypes.h"
                         ,0x2fc,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    iVar1 = 0;
    if (param_2.ShadingModelField != 0) {
      for (; (param_2.ShadingModelField >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    iVar5 = 0x20;
    if (param_2.ShadingModelField != 0) {
      iVar5 = iVar1;
    }
    if (iVar5 == 0xb) {
      return BLEND_TranslucentColoredTransmittance;
    }
  }
  if (param_1 == BLEND_Translucent) {
    param_1 = BLEND_Translucent;
  }
  return param_1;
}

// EmptyLinkFunctionForGeneratedCodeMaterial @ 147ef7100

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterial(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialAggregate @ 147ef7110

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialAggregate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialCachedData @ 147ef7120

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialCachedData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialEnumeration @ 147ef7130

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialEnumeration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionLayerStack @ 147ef7140

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionLayerStack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionNoise @ 147ef7150

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionNoise(void)

{
  return;
}

// FindMaterialResource @ 147ef76b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialResource * __cdecl
FindMaterialResource
          (TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_1,EShaderPlatform param_2,
          Type param_3,bool param_4)

{
  Type TVar1;
  int iVar2;
  FMaterialResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMaterialResource *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FMaterialResource *)0x0;
  uVar9 = 0;
  if (0 < iVar2) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMaterialResource *)(*pcVar4)();
        return pFVar7;
      }
      pFVar3 = *(FMaterialResource **)((param_1->AllocatorInstance).Data + lVar8 * 8);
      if (GMaxRHIShaderPlatform == param_2) {
        TVar1 = (Type)pFVar3->_padding_;
        if (TVar1 == param_3) {
          return pFVar3;
        }
        if ((param_4) && (TVar1 == Num)) {
          pFVar7 = pFVar3;
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar2);
  }
  return pFVar7;
}

// FindMaterialResource @ 147ef7790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FMaterialResource * __cdecl
FindMaterialResource
          (TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_1,Type param_2,
          Type param_3,bool param_4)

{
  FMaterialResource *pFVar1;
  
  if (param_2 == Num) {
    pFVar1 = FindMaterialResource(param_1,SP_NumPlatforms,param_3,param_4);
    return pFVar1;
  }
  pFVar1 = FindMaterialResource
                     (param_1,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2],param_3,
                      param_4);
  return pFVar1;
}

// FindMaterialResource @ 147ef77c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialResource * __cdecl
FindMaterialResource
          (TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_1,EShaderPlatform param_2,
          Type param_3,bool param_4)

{
  Type TVar1;
  int iVar2;
  FMaterialResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMaterialResource *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FMaterialResource *)0x0;
  uVar9 = 0;
  if (0 < iVar2) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMaterialResource *)(*pcVar4)();
        return pFVar7;
      }
      pFVar3 = *(FMaterialResource **)((param_1->AllocatorInstance).Data + lVar8 * 8);
      if (GMaxRHIShaderPlatform == param_2) {
        TVar1 = (Type)pFVar3->_padding_;
        if (TVar1 == param_3) {
          return pFVar3;
        }
        if ((param_4) && (TVar1 == Num)) {
          pFVar7 = pFVar3;
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar2);
  }
  return pFVar7;
}

// FindMaterialResource @ 147ef77d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FMaterialResource * __cdecl
FindMaterialResource
          (TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_1,Type param_2,
          Type param_3,bool param_4)

{
  FMaterialResource *pFVar1;
  
  if (param_2 == Num) {
    pFVar1 = FindMaterialResource(param_1,SP_NumPlatforms,param_3,param_4);
    return pFVar1;
  }
  pFVar1 = FindMaterialResource
                     (param_1,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2],param_3,
                      param_4);
  return pFVar1;
}

// FindOrCreateMaterialResource @ 147ef7800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialResource * __cdecl
FindOrCreateMaterialResource
          (TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_1,UMaterial *param_2,
          UMaterialInstance *param_3,EShaderPlatform param_4,Type param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  Type TVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FMaterialResource *pFVar7;
  UMaterialInstance *this;
  uint uVar8;
  longlong lVar9;
  ForElementType<bool> FVar10;
  undefined1 auStack_c8 [32];
  FMaterialResource **local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  EShaderPlatform local_78;
  FMaterialResource *local_70;
  TArray<bool,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_78 = param_4;
  if ((param_2 == (UMaterial *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("OwnerMaterial",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x405,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FMaterialResource *)(*pcVar2)();
    return pFVar7;
  }
  if (param_5 != Num) {
    local_68.AllocatorInstance.SecondaryData = (ForElementType<bool>)0x0;
    local_68.ArrayNum = 0;
    this = param_3;
    if (param_3 == (UMaterialInstance *)0x0) {
      this = (UMaterialInstance *)param_2;
    }
    local_68.ArrayMax = 4;
    UMaterialInterface::GetQualityLevelUsage((UMaterialInterface *)this,&local_68,local_78,false);
    if ((local_68.ArrayNum <= (int)(uint)param_5) &&
       (local_a8 = (FMaterialResource **)(ulonglong)param_5,
       local_a0 = (FScriptContainerElement *)(longlong)local_68.ArrayNum,
       bVar4 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMaterialResource *)(*pcVar2)();
      return pFVar7;
    }
    FVar10 = (ForElementType<bool>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
      FVar10 = local_68.AllocatorInstance.SecondaryData;
    }
    TVar3 = Num;
    if (*(char *)((longlong)(ulonglong)param_5 + (longlong)FVar10) != '\0') {
      TVar3 = param_5;
    }
    param_5 = TVar3;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
  }
  iVar6 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_a8 = (FMaterialResource **)(longlong)(int)uVar8;
        local_a0 = (FScriptContainerElement *)(longlong)param_1->ArrayNum;
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FMaterialResource *)(*pcVar2)();
          return pFVar7;
        }
      }
      pFVar7 = *(FMaterialResource **)((param_1->AllocatorInstance).Data + lVar9 * 8);
      if ((GMaxRHIShaderPlatform == local_78) && ((Type)pFVar7->_padding_ == param_5)) {
        local_70 = pFVar7;
        if (pFVar7 != (FMaterialResource *)0x0) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterial *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          (pFVar7->Material).field0_0x0.DebugPtr = param_2;
          (local_70->MaterialInstance).field0_0x0.DebugPtr = param_3;
          return local_70;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar6);
  }
  if (param_3 == (UMaterialInstance *)0x0) {
    pFVar7 = (FMaterialResource *)(**(code **)(param_2->_padding_ + 0x5c0))(param_2);
  }
  else {
    pFVar7 = (FMaterialResource *)(**(code **)(param_3->_padding_ + 0x5c8))(param_3);
  }
  local_70 = pFVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (pFVar7->Material).field0_0x0.DebugPtr = param_2;
  (pFVar7->MaterialInstance).field0_0x0.DebugPtr = param_3;
  *(Type *)&pFVar7->_padding_ = param_5;
  *(Type *)((longlong)&pFVar7->_padding_ + 4) = GMaxRHIFeatureLevel;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_70) &&
     ((FScriptContainerElement *)&local_70 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    local_90 = (longlong)param_1->ArrayNum;
    local_88 = 8;
    local_a8 = &local_70;
    local_a0 = pFVar1;
    local_98 = (longlong)param_1->ArrayMax;
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMaterialResource *)(*pcVar2)();
      return pFVar7;
    }
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  *(FMaterialResource **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_70;
  return local_70;
}

// FindOrCreateMaterialResource @ 147ef7b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FMaterialResource * __cdecl
FindOrCreateMaterialResource
          (TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_1,UMaterial *param_2,
          UMaterialInstance *param_3,Type param_4,Type param_5)

{
  FMaterialResource *pFVar1;
  
  if (param_4 == Num) {
    pFVar1 = FindOrCreateMaterialResource(param_1,param_2,param_3,SP_NumPlatforms,param_5);
    return pFVar1;
  }
  pFVar1 = FindOrCreateMaterialResource
                     (param_1,param_2,param_3,
                      GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_4],param_5);
  return pFVar1;
}

// HandleCacheShadersForResourcesErrors @ 147eff190

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
MaterialImpl::HandleCacheShadersForResourcesErrors
          (bool param_1,EShaderPlatform param_2,UMaterial *param_3,FMaterialResource *param_4)

{
  UMaterial *pUVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  FName FVar4;
  UMaterial **ppUVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  FString local_98;
  FString local_88;
  FString local_78;
  FAssetLog local_68;
  FAssetLog local_50;
  FAssetLog local_38;
  FAssetLog local_20;
  
  if (param_1) {
    return;
  }
  bVar8 = false;
  ppUVar5 = GDefaultMaterials;
  do {
    if (0x15521492f < (longlong)ppUVar5) break;
    pUVar1 = *ppUVar5;
    bVar8 = param_3 == pUVar1;
    ppUVar5 = ppUVar5 + 1;
  } while (param_3 != pUVar1);
  lVar6 = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  if (bVar8) {
    FVar4 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a8);
    ::FName::ToString((FName *)FVar4,&local_98);
    ::FString::PrintfImpl(&local_118,L"Failed to compile Default Material for platform %s!\n");
    iVar7 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_128,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar7);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    bVar8 = AreShaderErrorsFatal();
    if (bVar8) {
      ::FString::PrintfImpl(&local_e8,L"%s");
      local_68.Path = (wchar_t *)0x0;
      local_68.PackagePath = (FPackagePath *)0x0;
      local_68.Object = (UObject *)param_3;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogMaterial.field_0x4,Fatal,&local_68,&local_e8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                 ,0xb0d);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      bVar8 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (!bVar8) {
        FWindowsPlatformMisc::PromptForRemoteDebugging(false);
      }
      bVar8 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::PrintfImpl(&local_108,L"%s");
      FAssetMsg::FormatPathForAssetLog(&local_88,(UObject *)param_3);
      ::FDebug::AssertFailed
                ("",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                 ,0xb0d,L"%s: %s");
      local_d8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        local_d8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((byte)LogMaterial._0_1_ < 2) goto LAB_147eff559;
      ::FString::PrintfImpl(&local_d8,L"%s");
      local_50.Path = (wchar_t *)0x0;
      local_50.PackagePath = (FPackagePath *)0x0;
      local_50.Object = (UObject *)param_3;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogMaterial.field_0x4,Error,&local_50,&local_d8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                 ,0xb11);
    }
  }
  else {
    FVar4 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a0);
    ::FName::ToString((FName *)FVar4,&local_78);
    ::FString::PrintfImpl
              (&local_f8,
               L"Failed to compile Material for platform %s, Default Material will be used in game.\n"
              );
    iVar7 = local_f8.Data.ArrayNum + -1;
    if (local_f8.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_128,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar7);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pTVar3 = CVarMaterialLogErrorOnFailure.Ref;
    bVar8 = IsInParallelGameThread();
    if ((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) {
      lVar6 = 1;
    }
    if (pTVar3->ShadowedValue[lVar6] == false) {
      if ((byte)LogMaterial._0_1_ < 3) goto LAB_147eff559;
      ::FString::PrintfImpl(&local_b8,L"%s");
      local_20.Path = (wchar_t *)0x0;
      local_20.PackagePath = (FPackagePath *)0x0;
      local_20.Object = (UObject *)param_3;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogMaterial.field_0x4,Warning,&local_20,&local_b8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                 ,0xb1a);
      local_d8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    }
    else {
      if ((byte)LogMaterial._0_1_ < 2) goto LAB_147eff559;
      ::FString::PrintfImpl(&local_c8,L"%s");
      local_38.Path = (wchar_t *)0x0;
      local_38.PackagePath = (FPackagePath *)0x0;
      local_38.Object = (UObject *)param_3;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogMaterial.field_0x4,Error,&local_38,&local_c8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                 ,0xb16);
      local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
LAB_147eff559:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// IsExpressionClassPermitted @ 147f02a70

bool __cdecl IsExpressionClassPermitted(UClass *param_1)

{
  return true;
}

// IsPropertyActive_Internal @ 147f02fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl
IsPropertyActive_Internal
          (EMaterialProperty param_1,EMaterialDomain param_2,EBlendMode param_3,
          FMaterialShadingModelField param_4,ETranslucencyLightingMode param_5,
          ERefractionMode param_6,bool param_7,bool param_8,bool param_9,bool param_10,bool param_11
          ,bool param_12,bool param_13,bool param_14)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_b8 [32];
  undefined1 local_78;
  undefined1 local_77;
  ForAnyElementType local_70;
  uint local_68;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar10 = Substrate::IsSubstrateEnabled();
  bVar11 = Substrate::IsHiddenMaterialAssetConversionEnabled();
  if ((!bVar10) || ((bVar11 && (!param_14)))) {
    bVar2 = false;
    bVar9 = false;
    if (bVar10) goto LAB_147f03050;
  }
  else {
    bVar9 = true;
LAB_147f03050:
    bVar2 = bVar9;
    if ((bVar11) && (param_1 == MP_FrontMaterial)) {
      return true;
    }
  }
  local_77 = param_3 == BLEND_AlphaComposite;
  if (param_2 == MD_PostProcess) {
    if (!bVar2) {
      if (param_1 == MP_EmissiveColor) {
        return true;
      }
      if (!param_8) {
        return false;
      }
      bVar11 = param_1 == MP_Opacity;
LAB_147f03091:
      if (bVar11) {
        return true;
      }
      return false;
    }
    if (param_1 == MP_FrontMaterial) {
      return true;
    }
LAB_147f03072:
    if ((param_1 == MP_Opacity) && (param_3 == BLEND_AlphaComposite)) {
      return true;
    }
    return false;
  }
  if (param_2 == MD_LightFunction) {
    if (!bVar2) {
      return param_1 == MP_EmissiveColor;
    }
LAB_147f03156:
    return param_1 == MP_FrontMaterial;
  }
  if (param_2 == MD_DeferredDecal) {
    if (!bVar2) {
      if (param_1 - MP_CustomizedUVs0 < 8) {
        return true;
      }
      if (param_1 == MP_MaterialAttributes) {
        return true;
      }
      if (param_1 == MP_WorldPositionOffset) {
        return true;
      }
      if (param_3 == BLEND_Translucent) {
        if (MP_AmbientOcclusion < param_1) {
          return false;
        }
        if ((0x405e3U >> (param_1 & MP_SurfaceThickness) & 1) == 0) {
          return false;
        }
        return true;
      }
      if (param_3 == BLEND_AlphaComposite) {
        if (param_1 < MP_OpacityMask) {
          return true;
        }
        if (param_1 - MP_BaseColor < 4) {
          return true;
        }
        return false;
      }
      if (param_3 != BLEND_ColoredTransmittanceOnly) {
        return false;
      }
      if (MP_Normal < param_1) {
        return false;
      }
      if ((0x5e3U >> (param_1 & MP_SurfaceThickness) & 1) == 0) {
        return false;
      }
      return true;
    }
    if ((param_1 < MP_SurfaceThickness) &&
       ((0x40041000U >> (param_1 & MP_SurfaceThickness) & 1) != 0)) {
      return true;
    }
    goto LAB_147f03072;
  }
  if (param_2 == MD_Volume) {
    if (!bVar2) {
      if (MP_AmbientOcclusion < param_1) {
        return false;
      }
      if ((0x48021U >> (param_1 & MP_SurfaceThickness) & 1) == 0) {
        return false;
      }
      return true;
    }
    goto LAB_147f03156;
  }
  if (param_2 == MD_UI) {
    if (bVar2) {
      if (param_1 == MP_FrontMaterial) {
        return true;
      }
      if (param_1 == MP_WorldPositionOffset) {
        return true;
      }
      if (param_1 != MP_OpacityMask) {
        if (param_1 == MP_Opacity) {
          bVar11 = param_3 == BLEND_AlphaComposite;
          goto LAB_147f03091;
        }
LAB_147f031c8:
        if (param_1 - MP_CustomizedUVs0 < 8) {
          return true;
        }
        return false;
      }
    }
    else {
      if (param_1 == MP_EmissiveColor) {
        return true;
      }
      if (param_1 == MP_WorldPositionOffset) {
        return true;
      }
      if (param_1 != MP_OpacityMask) {
        if (param_1 == MP_Opacity) {
          bVar11 = IsTranslucentBlendMode(param_3);
          if (!bVar11) {
            return false;
          }
          if (param_3 != BLEND_ColoredTransmittanceOnly) {
            return true;
          }
          return false;
        }
        goto LAB_147f031c8;
      }
    }
    bVar11 = IsMaskedBlendMode(param_3);
    if (bVar11) {
      return true;
    }
    return false;
  }
  bVar10 = IsTranslucentBlendMode(param_3);
  uVar7 = _UNK_15199bda8;
  uVar6 = ___xmm_00000008000000060000000300000002;
  uVar5 = _UNK_15071d2f8;
  uVar4 = ___xmm_00000009000000080000000700000004;
  if ((param_5 & ~TLM_VolumetricPerVertexNonDirectional) == TLM_VolumetricNonDirectional) {
    bVar9 = true;
    if (param_5 != TLM_VolumetricNonDirectional) goto LAB_147f03237;
LAB_147f03243:
    bVar3 = true;
  }
  else {
    bVar9 = false;
LAB_147f03237:
    if (param_5 - TLM_VolumetricDirectional < 3) goto LAB_147f03243;
    bVar3 = false;
  }
  if (bVar2) {
    if (!param_13) {
      return false;
    }
    switch(param_1) {
    case MP_Opacity:
      return (bool)local_77;
    case MP_OpacityMask:
      bVar11 = IsMaskedBlendMode(param_3);
      return bVar11;
    default:
      if (7 < param_1 - MP_CustomizedUVs0) {
        return false;
      }
      break;
    case MP_WorldPositionOffset:
    case MP_FrontMaterial:
    case MP_MaterialAttributes:
      break;
    case MP_AmbientOcclusion:
      return (bool)(~(byte)param_4.ShadingModelField & 1);
    case MP_Refraction:
      if ((((!bVar10) || (bVar11 = IsAlphaHoldoutBlendMode(param_3), bVar11)) ||
          (bVar11 = IsModulateBlendMode(param_3), bVar11)) ||
         ((!param_9 || (param_6 == RM_IndexOfRefractionFromF0)))) {
        if ((param_4.ShadingModelField >> 10 & 1) != 0) {
          return true;
        }
        return false;
      }
      break;
    case MP_PixelDepthOffset:
      if (bVar10) {
        if (param_11) {
          return true;
        }
        return false;
      }
      break;
    case MP_SurfaceThickness:
      return param_12;
    case MP_Displacement:
      return param_7;
    }
    return true;
  }
  switch(param_1) {
  case MP_EmissiveColor:
    bVar11 = IsAlphaHoldoutBlendMode(param_3);
    bVar11 = !bVar11;
    break;
  case MP_Opacity:
    if (((bVar10) && (bVar11 = IsModulateBlendMode(param_3), !bVar11)) ||
       ((param_4.ShadingModelField >> 10 & 1) != 0)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (((((param_4.ShadingModelField & 4) == 0) && ((param_4.ShadingModelField & 8) == 0)) &&
        (((param_4.ShadingModelField & 0x20) == 0 &&
         (((param_4.ShadingModelField & 0x40) == 0 && ((param_4.ShadingModelField >> 8 & 1) == 0))))
        )) && ((param_4.ShadingModelField >> 9 & 1) == 0)) {
      return bVar11;
    }
    goto switchD_147f0334b_caseD_c;
  case MP_OpacityMask:
    bVar11 = IsMaskedBlendMode(param_3);
    break;
  case MP_DiffuseColor:
  case MP_SpecularColor:
  case MP_SurfaceThickness:
switchD_147f0334b_caseD_3:
    bVar11 = false;
    break;
  case MP_BaseColor:
  case MP_AmbientOcclusion:
    bVar11 = (bool)(~(byte)param_4.ShadingModelField & 1);
    break;
  case MP_Metallic:
  case MP_Specular:
  case MP_Roughness:
    if (((param_4.ShadingModelField & 1) != 0) || ((bVar10 && (bVar3))))
    goto switchD_147f0334b_caseD_3;
    goto switchD_147f0334b_caseD_c;
  case MP_Anisotropy:
    local_60 = 1;
    uStack_5c = 4;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,2,0,&local_70,2,&local_64);
    uVar8 = local_68;
    *(ulonglong *)local_70.Data = CONCAT44(uStack_5c,local_60);
    uVar12 = (ulonglong)(int)local_68;
    pFVar1 = local_70.Data + uVar12 * 4;
    FVar13.Data = local_70.Data;
    while( true ) {
      if ((uint)uVar12 != uVar8) {
        `TCheckedPointerIterator<enum_EMaterialShadingModel_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_78);
        uVar12 = (ulonglong)local_68;
      }
      if (FVar13.Data == pFVar1) goto LAB_147f0373c;
      if ((param_4.ShadingModelField >> ((byte)*FVar13.Data & 0x1f) & 1) != 0) break;
      FVar13.Data = FVar13.Data + 4;
    }
    goto LAB_147f0357f;
  case MP_Normal:
    if ((((param_4.ShadingModelField & 1) != 0) || ((bVar10 && (bVar9)))) && (!param_9)) {
      return false;
    }
    goto switchD_147f0334b_caseD_c;
  case MP_Tangent:
    local_60 = 1;
    uStack_5c = 4;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,2,0,&local_70,2,&local_64);
    uVar8 = local_68;
    *(ulonglong *)local_70.Data = CONCAT44(uStack_5c,local_60);
    uVar12 = (ulonglong)(int)local_68;
    pFVar1 = local_70.Data + uVar12 * 4;
    FVar13.Data = local_70.Data;
    while( true ) {
      if ((uint)uVar12 != uVar8) {
        `TCheckedPointerIterator<enum_EMaterialShadingModel_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_78);
        uVar12 = (ulonglong)local_68;
      }
      if (FVar13.Data == pFVar1) goto LAB_147f0373c;
      if ((param_4.ShadingModelField >> ((byte)*FVar13.Data & 0x1f) & 1) != 0) break;
      FVar13.Data = FVar13.Data + 4;
    }
LAB_147f0357f:
    if ((!bVar10) || (!bVar3)) goto LAB_147f0358d;
LAB_147f0373c:
    bVar11 = false;
    goto LAB_147f0373f;
  default:
    goto switchD_147f0334b_caseD_c;
  case MP_SubsurfaceColor:
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 4;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,4,0,&local_70,4,&local_64);
    uVar8 = local_68;
    *(undefined8 *)local_70.Data = uVar6;
    *(undefined8 *)(local_70.Data + 8) = uVar7;
    uVar12 = (ulonglong)(int)local_68;
    pFVar1 = local_70.Data + uVar12 * 4;
    FVar13.Data = local_70.Data;
    while( true ) {
      if ((uint)uVar12 != uVar8) {
        `TCheckedPointerIterator<enum_EMaterialShadingModel_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_78);
        uVar12 = (ulonglong)local_68;
      }
      if (FVar13.Data == pFVar1) goto LAB_147f0373c;
      if ((param_4.ShadingModelField >> ((byte)*FVar13.Data & 0x1f) & 1) != 0) break;
      FVar13.Data = FVar13.Data + 4;
    }
    goto LAB_147f0358d;
  case MP_CustomData0:
    local_50 = 5;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 5;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,0,&local_70,5,&local_64);
    uVar8 = local_68;
    *(undefined8 *)local_70.Data = uVar4;
    *(undefined8 *)(local_70.Data + 8) = uVar5;
    *(undefined4 *)(local_70.Data + 0x10) = local_50;
    uVar12 = (ulonglong)(int)local_68;
    pFVar1 = local_70.Data + uVar12 * 4;
    FVar13.Data = local_70.Data;
    while( true ) {
      if ((uint)uVar12 != uVar8) {
        `TCheckedPointerIterator<enum_EMaterialShadingModel_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_78);
        uVar12 = (ulonglong)local_68;
      }
      if (FVar13.Data == pFVar1) goto LAB_147f0373c;
      if ((param_4.ShadingModelField >> ((byte)*FVar13.Data & 0x1f) & 1) != 0) break;
      FVar13.Data = FVar13.Data + 4;
    }
    goto LAB_147f0358d;
  case MP_CustomData1:
    local_60 = 4;
    uStack_5c = 9;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,2,0,&local_70,2,&local_64);
    uVar8 = local_68;
    *(ulonglong *)local_70.Data = CONCAT44(uStack_5c,local_60);
    uVar12 = (ulonglong)(int)local_68;
    pFVar1 = local_70.Data + uVar12 * 4;
    FVar13.Data = local_70.Data;
    while( true ) {
      if ((uint)uVar12 != uVar8) {
        `TCheckedPointerIterator<enum_EMaterialShadingModel_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_78);
        uVar12 = (ulonglong)local_68;
      }
      if (FVar13.Data == pFVar1) goto LAB_147f0373c;
      if ((param_4.ShadingModelField >> ((byte)*FVar13.Data & 0x1f) & 1) != 0) break;
      FVar13.Data = FVar13.Data + 4;
    }
LAB_147f0358d:
    bVar11 = true;
LAB_147f0373f:
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    break;
  case MP_Refraction:
    if (((((!bVar10) || (bVar11 = IsAlphaHoldoutBlendMode(param_3), bVar11)) ||
         (bVar11 = IsModulateBlendMode(param_3), bVar11)) ||
        ((!param_9 || (param_6 == RM_IndexOfRefractionFromF0)))) &&
       ((param_4.ShadingModelField >> 10 & 1) == 0)) {
      return false;
    }
    goto switchD_147f0334b_caseD_c;
  case MP_PixelDepthOffset:
    if ((bVar10) && (!param_11)) {
      return false;
    }
switchD_147f0334b_caseD_c:
    bVar11 = true;
    break;
  case MP_ShadingModel:
    bVar11 = param_10;
    break;
  case MP_FrontMaterial:
    break;
  case MP_Displacement:
    bVar11 = param_7;
  }
  return bVar11;
}

// ListSceneColorMaterials @ 147f03eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ListSceneColorMaterials(void)

{
  Type TVar1;
  uint uVar2;
  uint uVar3;
  Type TVar4;
  undefined4 local_res8 [2];
  undefined4 *local_res10 [3];
  
  local_res10[0] = local_res8;
  local_res8[0] = 0;
  uVar2 = UMaterialInterface::GetFeatureLevelsToCompileForAllMaterials();
  while (uVar2 != 0) {
    uVar3 = -uVar2 & uVar2;
    uVar2 = uVar2 & uVar2 - 1;
    TVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> TVar1 == 0; TVar1 = TVar1 - ES3_1) {
      }
    }
    TVar4 = ES2_REMOVED;
    if (uVar3 != 0) {
      TVar4 = TVar1;
    }
    `ListSceneColorMaterials'::__l2::<lambda_1>::operator()(local_res10,TVar4);
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  return;
}

// MaterialDomainString @ 147f042c0

FString * __cdecl MaterialDomainString(FString *__return_storage_ptr__,EMaterialDomain param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      Enum = StaticEnum<enum_EMaterialDomain>();
      _Init_thread_footer(&_TSS0);
    }
  }
  if (Enum == (UEnum *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Enum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                       ,0x32a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UEnum::GetNameStringByValue(Enum,__return_storage_ptr__,(longlong)(int)param_1);
  return __return_storage_ptr__;
}

// PoolSpecialMaterialsCompileJobs @ 147f04770

bool __cdecl PoolSpecialMaterialsCompileJobs(void)

{
  return GPoolSpecialMaterialsCompileJobs;
}

// ProcessSerializedInlineShaderMaps @ 147f05ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ProcessSerializedInlineShaderMaps
          (UMaterialInterface *param_1,
          TArray<FMaterialResource,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_3)

{
  Type TVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  uint uVar6;
  UClass *pUVar7;
  longlong lVar8;
  FCachedSystemScalabilityCVars *pFVar9;
  FString *pFVar10;
  FMaterialShaderMap *pFVar11;
  FMaterialResource *this;
  int iVar12;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar13;
  wchar_t *pwVar14;
  uint uVar15;
  int iVar16;
  FMaterial *pFVar17;
  wchar_t *pwVar18;
  undefined1 local_res10 [8];
  TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *local_res18;
  Type local_res20;
  FLLMScope local_98;
  int local_94;
  UMaterialInstance *local_90;
  UMaterial *local_88;
  FMemScope local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res18 = param_3;
  FLLMScope::FLLMScope(&local_98,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_80,Shaders,true);
  bVar4 = IsInGameThread();
  pwVar18 = L"";
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x385,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2->ArrayNum == 0) goto LAB_147f06213;
  if (param_1 == (UMaterialInterface *)0x0) {
LAB_147f05f94:
    local_90 = (UMaterialInstance *)0x0;
    if (param_1 == (UMaterialInterface *)0x0) {
      pFVar10 = GetTypeName<UMaterial>(&local_68);
      if ((pFVar10->Data).ArrayNum != 0) {
        pwVar18 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar18);
    }
    pUVar7 = UMaterial::GetPrivateStaticClass();
    iVar16 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar16) ||
       (local_88 = (UMaterial *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8)
       != &pUVar7->_padding_)) {
      pFVar10 = GetTypeName<UMaterial>(&local_58);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      pFVar10 = GetFullNameForCastLogError<UMaterialInterface>(&local_48,param_1);
      if ((pFVar10->Data).ArrayNum != 0) {
        pwVar18 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar18,pwVar14);
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar16 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar7->_padding_)) goto LAB_147f05f94;
    local_88 = UMaterialInterface::GetBaseMaterial(param_1);
    local_90 = (UMaterialInstance *)param_1;
  }
  this_00 = (FMaterial *)(param_2->AllocatorInstance).Data;
  iVar16 = param_2->ArrayNum;
  pFVar17 = (FMaterial *)((longlong)this_00 + (longlong)iVar16 * 0x160);
  while( true ) {
    if (param_2->ArrayNum != iVar16) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMaterialResource,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    pTVar3 = CVarDiscardUnusedQualityLevels.Ref;
    if (this_00 == pFVar17) break;
    FMaterial::RegisterInlineShaderMap(this_00,true);
    this_00 = (FMaterial *)&this_00[5].QualityLevel;
  }
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 4;
  }
  iVar16 = *(int *)((longlong)pTVar3->ShadowedValue + lVar8);
  local_94 = iVar16;
  pFVar9 = GetCachedScalabilityCVars();
  iVar12 = param_2->ArrayNum;
  uVar15 = 0;
  local_res20 = pFVar9->MaterialQualityLevel;
  if (0 < iVar12) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar15 < iVar12) {
        uVar6 = ~uVar15 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar13 = *(FMaterialShaderMap **)((param_2->AllocatorInstance).Data + lVar8 + 0x10);
      if (pFVar13 != (FMaterialShaderMap *)0x0) {
        if ((FShaderMapContent *)pFVar13->_padding_ == (FShaderMapContent *)0x0) {
          EVar5 = SP_NumPlatforms;
        }
        else {
          EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)pFVar13->_padding_);
        }
        if (EVar5 == GMaxRHIShaderPlatform) {
          TVar1 = (pFVar13->ShaderMapId).QualityLevel;
          if ((GRHIGlobals.ShaderPlatformForFeatureLevel[(int)(pFVar13->ShaderMapId).FeatureLevel]
               != GMaxRHIShaderPlatform) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("GRHIGlobals.ShaderPlatformForFeatureLevel[LoadedFeatureLevel] == GMaxRHIShaderPlatform"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                                 ,0x3ad,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((iVar16 == 0) || (TVar1 == local_res20)) || (TVar1 == Num)) {
            if ((GODSCManager != (FODSCManager *)0x0) &&
               (GODSCManager->Thread != (FODSCThread *)0x0)) {
              pFVar10 = UObjectBaseUtility::GetPathName
                                  ((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0);
              pFVar11 = FODSCManager::FindMaterialShaderMap(pFVar10,&pFVar13->ShaderMapId);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              iVar16 = local_94;
              if (pFVar11 != (FMaterialShaderMap *)0x0) {
                pFVar13 = pFVar11;
              }
            }
            if ((FShaderMapContent *)pFVar13->_padding_ == (FShaderMapContent *)0x0) {
              EVar5 = SP_NumPlatforms;
            }
            else {
              EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)pFVar13->_padding_);
            }
            this = FindOrCreateMaterialResource(local_res18,local_88,local_90,EVar5,TVar1);
            FMaterial::SetInlineShaderMap((FMaterial *)this,pFVar13);
          }
        }
      }
      iVar12 = param_2->ArrayNum;
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + 0x160;
    } while ((int)uVar15 < iVar12);
  }
LAB_147f06213:
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(&local_98);
  return;
}

// ShouldRecacheMaterialExpressions @ 147f083c0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __cdecl
ShouldRecacheMaterialExpressions
          (FMaterialResource *param_1,FMemoryImageMaterialParameterInfo *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int local_28;
  TArrayView<FMaterialNumericParameterInfo_const_,int> local_18;
  
  if (param_1 != (FMaterialResource *)0x0) {
    FMaterial::GetUniformNumericParameterExpressions((FMaterial *)param_1,&local_18);
    uVar7 = 0;
    if (0 < local_18.ArrayNum) {
      lVar8 = 0;
      iVar9 = local_18.ArrayNum;
      do {
        uVar5 = 0;
        if ((int)uVar7 < iVar9) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , iVar9 = local_18.ArrayNum, bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        uVar1 = (param_2->Name).ComparisonIndex;
        piVar6 = (int *)((longlong)&((local_18.DataPtr)->ParameterInfo).Name.ComparisonIndex.Value +
                        lVar8);
        if ((((*piVar6 == uVar1) && (piVar6[2] == (param_2->Name).Number)) &&
            ((uchar)piVar6[4] == (param_2->Association).Value)) && (piVar6[3] == param_2->Index)) {
          return true;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x1c;
      } while ((int)uVar7 < iVar9);
    }
  }
  return false;
}

// Z_Construct_UClass_UMaterialEditorOnlyData_NoRegister @ 147f092a0

UClass * __cdecl Z_Construct_UClass_UMaterialEditorOnlyData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialEditorOnlyData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialEditorOnlyData.InnerSingleton,
               UMaterialEditorOnlyData::StaticRegisterNativesUMaterialEditorOnlyData,0x6b8,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialEditorOnlyData>,aFStackX_8,
               UMaterialInterfaceEditorOnlyData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialEditorOnlyData.InnerSingleton;
}

// Z_Construct_UClass_UMaterialEnumerationProvider_NoRegister @ 147f092b0

UClass * __cdecl Z_Construct_UClass_UMaterialEnumerationProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialEnumerationProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialEnumerationProvider",
               &Z_Registration_Info_UClass_UMaterialEnumerationProvider.InnerSingleton,
               UMaterialEnumerationProvider::StaticRegisterNativesUMaterialEnumerationProvider,0x28,
               8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialEnumerationProvider>,
               InternalVTableHelperCtorCaller<UMaterialEnumerationProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialEnumerationProvider.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLayerStack_NoRegister @ 147f09370

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLayerStack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLayerStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLayerStack",
               &Z_Registration_Info_UClass_UMaterialExpressionLayerStack.InnerSingleton,
               UMaterialExpressionLayerStack::StaticRegisterNativesUMaterialExpressionLayerStack,
               0x300,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionLayerStack>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLayerStack>,local_res8,
               UMaterialExpressionMaterialAttributeLayers::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLayerStack.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionNoise_NoRegister @ 147f09430

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionNoise_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNoise",
               &Z_Registration_Info_UClass_UMaterialExpressionNoise.InnerSingleton,
               UMaterialExpressionNoise::StaticRegisterNativesUMaterialExpressionNoise,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNoise>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNoise>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNoise.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionScalarBlueNoise_NoRegister @ 147f094f0

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionScalarBlueNoise_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionScalarBlueNoise",
               &Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.InnerSingleton,
               UMaterialExpressionScalarBlueNoise::
               StaticRegisterNativesUMaterialExpressionScalarBlueNoise,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionScalarBlueNoise>,
               InternalVTableHelperCtorCaller<UMaterialExpressionScalarBlueNoise>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.InnerSingleton;
}

// Z_Construct_UClass_UMaterial_NoRegister @ 147f095b0

UClass * __cdecl Z_Construct_UClass_UMaterial_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMaterial::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Material",&Z_Registration_Info_UClass_UMaterial.InnerSingleton,
               UMaterial::StaticRegisterNativesUMaterial,0x288,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMaterial>,InternalVTableHelperCtorCaller<UMaterial>,
               local_res8,UMaterialInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterial.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMaterialCachedExpressionData @ 147f09670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialCachedExpressionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData @ 147f096f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionEditorOnlyData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionEditorOnlyData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionEditorOnlyData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionEditorOnlyData.InnerSingleton;
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

// EmptyData'' @ 1503f3090

void __cdecl `dynamic_atexit_destructor_for_'FMaterialCachedExpressionData::EmptyData__(void)

{
  FMaterialCachedExpressionData::~FMaterialCachedExpressionData
            (&FMaterialCachedExpressionData::EmptyData);
  return;
}

// EmptyData'' @ 1503f30b0

void __cdecl
`dynamic_atexit_destructor_for_'FMaterialCachedExpressionEditorOnlyData::EmptyData__(void)

{
  FMaterialCachedExpressionEditorOnlyData::~FMaterialCachedExpressionEditorOnlyData
            (&FMaterialCachedExpressionEditorOnlyData::EmptyData);
  return;
}

// EmptyData'' @ 1503f30d0

void __cdecl `dynamic_atexit_destructor_for_'FMaterialCachedParameterEntry::EmptyData__(void)

{
  FMaterialCachedParameterEntry::EmptyData.ParameterInfoSet.HashSize = 0;
  if (FMaterialCachedParameterEntry::EmptyData.ParameterInfoSet.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FMaterialCachedParameterEntry::EmptyData.ParameterInfoSet.Hash.
                          SecondaryData);
  }
  TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FMaterialCachedParameterEntry::EmptyData);
  return;
}

// GMaterialPropertyAttributesMap'' @ 1503f3110

void __cdecl
`dynamic_atexit_destructor_for_'FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap__
          (void)

{
  if (FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.AttributeDDCString.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.AttributeDDCString
                  .Data.AllocatorInstance.Data);
  }
  if (FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.
                  OrderedVisibleAttributeList.AllocatorInstance.Data);
  }
  DestructItems<FMaterialCustomOutputAttributeDefintion,int>
            ((FMaterialCustomOutputAttributeDefintion *)
             FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.CustomAttributes.
             AllocatorInstance.Data,
             FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.CustomAttributes.
             ArrayNum);
  if (FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.CustomAttributes.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.CustomAttributes.
                  AllocatorInstance.Data);
  }
  FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.AttributeMap._72_4_ = 0;
  if (FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.AttributeMap._64_8_ != 0) {
    FMemory::Free((void *)FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap.
                          AttributeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDiscardUnusedQualityLevels'' @ 1503f3190

void __cdecl _dynamic_atexit_destructor_for__CVarDiscardUnusedQualityLevels__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDiscardUnusedQualityLevels);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialLogErrorOnFailure'' @ 1503f31b0

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialLogErrorOnFailure__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaterialLogErrorOnFailure);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialsDuplicateVerbatim'' @ 1503f31d0

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialsDuplicateVerbatim__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaterialsDuplicateVerbatim);
  return;
}

// `dynamic_atexit_destructor_for_'CmdListSceneColorMaterials'' @ 1503f31f0

void __cdecl _dynamic_atexit_destructor_for__CmdListSceneColorMaterials__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdListSceneColorMaterials);
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503f3210

void __cdecl
`UMaterialExpressionNoise::UMaterialExpressionNoise'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Utility.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503f321f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Utility.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503f3230

void __cdecl
`UMaterialExpressionScalarBlueNoise::UMaterialExpressionScalarBlueNoise'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Utility.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503f323f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Utility.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503f3250

void __cdecl
`UMaterialExpressionVectorNoise::UMaterialExpressionVectorNoise'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Utility.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503f325f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Utility.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCompileMaterialsForShaderFormatCVar'' @ 1503f3270

void __cdecl _dynamic_atexit_destructor_for__GCompileMaterialsForShaderFormatCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GCompileMaterialsForShaderFormatCVar);
  return;
}

// `dynamic_atexit_destructor_for_'LightingGuidFixupMap'' @ 1503f3290

void __cdecl _dynamic_atexit_destructor_for__LightingGuidFixupMap__(void)

{
  LightingGuidFixupMap._72_4_ = 0;
  if (LightingGuidFixupMap._64_8_ != 0) {
    FMemory::Free((void *)LightingGuidFixupMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,UMaterialInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&LightingGuidFixupMap);
  return;
}

