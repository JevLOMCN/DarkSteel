// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 288

// AllMaterialShaderMaps'' @ 14110b8f0

void __cdecl `dynamic_initializer_for_'FMaterialShaderMap::AllMaterialShaderMaps__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMaterialShaderMap::AllMaterialShaderMaps__);
  return;
}

// AllMaterialShaderMapsGuard'' @ 14110b910

void __cdecl `dynamic_initializer_for_'FMaterialShaderMap::AllMaterialShaderMapsGuard__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FMaterialShaderMap::AllMaterialShaderMapsGuard,4000);
  atexit(`dynamic_atexit_destructor_for_'FMaterialShaderMap::AllMaterialShaderMapsGuard__);
  return;
}

// DeferredUniformExpressionCacheRequests'' @ 14110b940

void __cdecl
`dynamic_initializer_for_'FMaterialRenderProxy::DeferredUniformExpressionCacheRequests__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMaterialRenderProxy::
         DeferredUniformExpressionCacheRequests__);
  return;
}

// GIdToMaterialShaderMap'' @ 14110b960

void __cdecl `dynamic_initializer_for_'FMaterialShaderMap::GIdToMaterialShaderMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMaterialShaderMap::GIdToMaterialShaderMap__);
  return;
}

// GIdToMaterialShaderMapCS'' @ 14110b980

void __cdecl `dynamic_initializer_for_'FMaterialShaderMap::GIdToMaterialShaderMapCS__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FMaterialShaderMap::GIdToMaterialShaderMapCS,4000);
  atexit(`dynamic_atexit_destructor_for_'FMaterialShaderMap::GIdToMaterialShaderMapCS__);
  return;
}

// Null'' @ 14110b9b0

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValue::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__);
  return;
}

// Null'' @ 14110b9d0

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__);
  return;
}

// PrecachedPSORequestIDsCS'' @ 14110b9f0

void __cdecl `dynamic_initializer_for_'FMaterial::PrecachedPSORequestIDsCS__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FMaterial::PrecachedPSORequestIDsCS,4000);
  atexit(`dynamic_atexit_destructor_for_'FMaterial::PrecachedPSORequestIDsCS__);
  return;
}

// `dynamic_initializer_for_'CVarDeferUniformExpressionCaching'' @ 14110ba20

void __cdecl _dynamic_initializer_for__CVarDeferUniformExpressionCaching__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDeferUniformExpressionCaching,L"r.DeferUniformExpressionCaching",
             &GDeferUniformExpressionCaching,
             L"Whether to defer caching of uniform expressions until a rendering command needs them up to date.  Deferring updates is more efficient because multiple SetVectorParameterValue calls in a frame will only result in one update."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDeferUniformExpressionCaching__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialExcludeNonPipelinedShaders'' @ 14110ba70

void __cdecl _dynamic_initializer_for__CVarMaterialExcludeNonPipelinedShaders__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaterialExcludeNonPipelinedShaders,L"r.Material.ExcludeNonPipelinedShaders",
             &GMaterialExcludeNonPipelinedShaders,
             L"if != 0, standalone shaders that are also part of FShaderPipeline will not be compiled (default)."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMaterialExcludeNonPipelinedShaders__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialShaderMapDump'' @ 14110bac0

void __cdecl _dynamic_initializer_for__CVarMaterialShaderMapDump__(void)

{
  FString local_18;
  
  FString::FString(&local_18,"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarMaterialShaderMapDump,L"r.Material.ShaderMapDump",&local_18,
             L"Outputs a textual dump of all shader maps found for the given named material (specified by path).\nNote that this will include any instances of said material created by a MaterialInstance.\nFiles (.txt extension) will be dumped to Saved\\MaterialShaderMaps named with the DDC key hash.\n"
             ,4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarMaterialShaderMapDump__);
  return;
}

// `dynamic_initializer_for_'CVarUniformExpressionCacheAsyncUpdates'' @ 14110bb30

void __cdecl _dynamic_initializer_for__CVarUniformExpressionCacheAsyncUpdates__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUniformExpressionCacheAsyncUpdates,L"r.UniformExpressionCacheAsyncUpdates",
             &GUniformExpressionCacheAsyncUpdates,
             L"Whether to allow async updates of uniform expression caches.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarUniformExpressionCacheAsyncUpdates__);
  return;
}

// `dynamic_initializer_for_'CVarUsingUseNewMaterialTranslatorPrototype'' @ 14110bb80

void __cdecl _dynamic_initializer_for__CVarUsingUseNewMaterialTranslatorPrototype__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarUsingUseNewMaterialTranslatorPrototype,L"r.Material.Translator.EnableNew",
             local_res8,L"Controls whether to enable the new material translator prototype (WIP) .",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarUsingUseNewMaterialTranslatorPrototype__);
  return;
}

// `dynamic_initializer_for_'ColorMaterialInput_Ops'' @ 14110bbd0

void __cdecl _dynamic_initializer_for__ColorMaterialInput_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"ColorMaterialInput");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/Engine");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  ColorMaterialInput_Ops.Name.AssetName = local_28.AssetName;
  ColorMaterialInput_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x40;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FColorMaterialInput,&UE::CoreUObject::Private::Construct<FColorMaterialInput>,&UE::CoreUObject::Private::ConstructForTests<FColorMaterialInput>,&UE::CoreUObject::Private::Destruct<FColorMaterialInput>,&UE::CoreUObject::Private::SerializeArchive<FColorMaterialInput>,&UE::CoreUObject::Private::Copy<FColorMaterialInput>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = ColorMaterialInput_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__ColorMaterialInput_Ops__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper256'' @ 14110bc90

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper256__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_25>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper256,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper257'' @ 14110bcf0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper257__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_26>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper257,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper258'' @ 14110bd50

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper258__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_27>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper258,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper259'' @ 14110bdb0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper259__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_28>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper259,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper260'' @ 14110be10

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper260__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_29>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper260,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper261'' @ 14110be70

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper261__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_30>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper261,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper262'' @ 14110bed0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper262__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_31>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper262,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper263'' @ 14110bf30

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper263__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_32>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper263,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper264'' @ 14110bf90

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper264__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_33>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper264,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper265'' @ 14110bff0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper265__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_34>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper265,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper266'' @ 14110c050

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper266__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_35>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper266,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper267'' @ 14110c0b0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper267__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_36>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper267,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper268'' @ 14110c110

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper268__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_37>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper268,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper269'' @ 14110c170

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper269__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_38>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper269,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper270'' @ 14110c1d0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper270__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_39>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper270,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'ExpressionInput_Ops'' @ 14110c230

void __cdecl _dynamic_initializer_for__ExpressionInput_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"ExpressionInput");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/Engine");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  ExpressionInput_Ops.Name.AssetName = local_28.AssetName;
  ExpressionInput_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x28;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FExpressionInput,&UE::CoreUObject::Private::Construct<FExpressionInput>,&UE::CoreUObject::Private::ConstructForTests<FExpressionInput>,&UE::CoreUObject::Private::Destruct<FExpressionInput>,&UE::CoreUObject::Private::SerializeArchive<FExpressionInput>,&UE::CoreUObject::Private::Copy<FExpressionInput>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = ExpressionInput_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__ExpressionInput_Ops__);
  return;
}

// `dynamic_initializer_for_'GFlushMaterialUniforms'' @ 14110c2f0

void __cdecl _dynamic_initializer_for__GFlushMaterialUniforms__(void)

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
    puVar1[3] = <lambda_40>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GFlushMaterialUniforms,L"r.FlushMaterialUniforms",L"",
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
  atexit(_dynamic_atexit_destructor_for__GFlushMaterialUniforms__);
  return;
}

// `dynamic_initializer_for_'GUniformExpressionCacheAsyncUpdateTask'' @ 14110c430

void __cdecl _dynamic_initializer_for__GUniformExpressionCacheAsyncUpdateTask__(void)

{
  atexit(_dynamic_atexit_destructor_for__GUniformExpressionCacheAsyncUpdateTask__);
  return;
}

// `dynamic_initializer_for_'LogMaterial'' @ 14110c450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMaterial__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMaterial,L"LogMaterial",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMaterial__);
  return;
}

// `dynamic_initializer_for_'MaterialAttributesInput_Ops'' @ 14110c490

void __cdecl _dynamic_initializer_for__MaterialAttributesInput_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"MaterialAttributesInput");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/Engine");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  MaterialAttributesInput_Ops.Name.AssetName = local_28.AssetName;
  MaterialAttributesInput_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x30;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FMaterialAttributesInput,&UE::CoreUObject::Private::Construct<FMaterialAttributesInput>,&UE::CoreUObject::Private::ConstructForTests<FMaterialAttributesInput>,&UE::CoreUObject::Private::Destruct<FMaterialAttributesInput>,&UE::CoreUObject::Private::SerializeArchive<FMaterialAttributesInput>,&UE::CoreUObject::Private::Copy<FMaterialAttributesInput>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = MaterialAttributesInput_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__MaterialAttributesInput_Ops__);
  return;
}

// `dynamic_initializer_for_'MaterialQualityLevelNames'' @ 14110c550

void __cdecl _dynamic_initializer_for__MaterialQualityLevelNames__(void)

{
  FName::FName(MaterialQualityLevelNames,L"Low");
  FName::FName(MaterialQualityLevelNames + 1,L"High");
  FName::FName(MaterialQualityLevelNames + 2,L"Medium");
  FName::FName(MaterialQualityLevelNames + 3,L"Epic");
  FName::FName(MaterialQualityLevelNames + 4,L"Num");
  return;
}

// `dynamic_initializer_for_'NAME_LightmapRes'' @ 14110c5c0

void __cdecl _dynamic_initializer_for__NAME_LightmapRes__(void)

{
  FName::FName(&NAME_LightmapRes,L"LightmapRes");
  return;
}

// `dynamic_initializer_for_'ScalarMaterialInput_Ops'' @ 14110c5e0

void __cdecl _dynamic_initializer_for__ScalarMaterialInput_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"ScalarMaterialInput");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/Engine");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  ScalarMaterialInput_Ops.Name.AssetName = local_28.AssetName;
  ScalarMaterialInput_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x30;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FScalarMaterialInput,&UE::CoreUObject::Private::Construct<FScalarMaterialInput>,&UE::CoreUObject::Private::ConstructForTests<FScalarMaterialInput>,&UE::CoreUObject::Private::Destruct<FScalarMaterialInput>,&UE::CoreUObject::Private::SerializeArchive<FScalarMaterialInput>,&UE::CoreUObject::Private::Copy<FScalarMaterialInput>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = ScalarMaterialInput_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__ScalarMaterialInput_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector2MaterialInput_Ops'' @ 14110c6a0

void __cdecl _dynamic_initializer_for__Vector2MaterialInput_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector2MaterialInput");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/Engine");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector2MaterialInput_Ops.Name.AssetName = local_28.AssetName;
  Vector2MaterialInput_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x38;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FVector2MaterialInput,&UE::CoreUObject::Private::Construct<FVector2MaterialInput>,&UE::CoreUObject::Private::ConstructForTests<FVector2MaterialInput>,&UE::CoreUObject::Private::Destruct<FVector2MaterialInput>,&UE::CoreUObject::Private::SerializeArchive<FVector2MaterialInput>,&UE::CoreUObject::Private::Copy<FVector2MaterialInput>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Vector2MaterialInput_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector2MaterialInput_Ops__);
  return;
}

// `dynamic_initializer_for_'VectorMaterialInput_Ops'' @ 14110c760

void __cdecl _dynamic_initializer_for__VectorMaterialInput_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"VectorMaterialInput");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/Engine");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  VectorMaterialInput_Ops.Name.AssetName = local_28.AssetName;
  VectorMaterialInput_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x38;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FVectorMaterialInput,&UE::CoreUObject::Private::Construct<FVectorMaterialInput>,&UE::CoreUObject::Private::ConstructForTests<FVectorMaterialInput>,&UE::CoreUObject::Private::Destruct<FVectorMaterialInput>,&UE::CoreUObject::Private::SerializeArchive<FVectorMaterialInput>,&UE::CoreUObject::Private::Copy<FVectorMaterialInput>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = VectorMaterialInput_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__VectorMaterialInput_Ops__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialShared_h__Script_Engine_3361344579'' @ 14110c820

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialShared_h__Script_Engine_3361344579__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialShared_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialOverrideNanite_h__Script_Engine_3480220318'' @ 14110c870

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialOverrideNanite_h__Script_Engine_3480220318__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialOverrideNanite_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h__Script_Engine_2671699040'' @ 14110c8b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h__Script_Engine_2671699040__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameterCollection_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterShaders_OnDemandShaderRequests'' @ 14110c900

void __cdecl _dynamic_initializer_for____GTraceCounterShaders_OnDemandShaderRequests__(void)

{
  __GTraceCounterShaders_OnDemandShaderRequests.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Shaders/OnDemandShaderRequests",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterShaders_OnDemandShaderRequests.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterShaders_OnDemandShaderRequests__);
  return;
}

// Z_Construct_UClass_UMaterialParameterCollection_NoRegister @ 147f5af80

UClass * __cdecl Z_Construct_UClass_UMaterialParameterCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialParameterCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialParameterCollection",
               &Z_Registration_Info_UClass_UMaterialParameterCollection.InnerSingleton,
               UMaterialParameterCollection::StaticRegisterNativesUMaterialParameterCollection,0x128
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialParameterCollection>,
               InternalVTableHelperCtorCaller<UMaterialParameterCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollection.InnerSingleton;
}

// NewProp_bEnableOverride_SetBit @ 147f5b070

void __cdecl
Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 147f5b080

void * __cdecl Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialOverrideNanite,&UE::CoreUObject::Private::Construct<FMaterialOverrideNanite>,&UE::CoreUObject::Private::ConstructForTests<FMaterialOverrideNanite>,&UE::CoreUObject::Private::Destruct<FMaterialOverrideNanite>,&UE::CoreUObject::Private::SerializeArchive<FMaterialOverrideNanite>,&UE::CoreUObject::Private::Copy<FMaterialOverrideNanite>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ELWCFunctionKind_StaticEnum @ 147f5b1f0

UEnum * __cdecl ELWCFunctionKind_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELWCFunctionKind.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ELWCFunctionKind.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ELWCFunctionKind,(UObject *)pUVar1,
                       L"ELWCFunctionKind");
  }
  return Z_Registration_Info_UEnum_ELWCFunctionKind.OuterSingleton;
}

// Z_Construct_UClass_UMaterialParameterCollection @ 147f5b340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialParameterCollection(void)

{
  if (Z_Registration_Info_UClass_UMaterialParameterCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialParameterCollection.OuterSingleton,
               &Z_Construct_UClass_UMaterialParameterCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCollectionParameterBase @ 147f5b380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCollectionParameterBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCollectionParameterBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCollectionParameterBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCollectionParameterBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCollectionParameterBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCollectionScalarParameter @ 147f5b400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCollectionScalarParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCollectionScalarParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCollectionScalarParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCollectionScalarParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCollectionScalarParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCollectionVectorParameter @ 147f5b480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCollectionVectorParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCollectionVectorParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCollectionVectorParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCollectionVectorParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCollectionVectorParameter.InnerSingleton;
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

// NewStructOps @ 147f5b500

void * __cdecl Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCollectionParameterBase,&UE::CoreUObject::Private::Construct<FCollectionParameterBase>,&UE::CoreUObject::Private::ConstructForTests<FCollectionParameterBase>,&UE::CoreUObject::Private::Destruct<FCollectionParameterBase>,&UE::CoreUObject::Private::Copy<FCollectionParameterBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147f5b540

void * __cdecl Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCollectionScalarParameter,&UE::CoreUObject::Private::Construct<FCollectionScalarParameter>,&UE::CoreUObject::Private::ConstructForTests<FCollectionScalarParameter>,&UE::CoreUObject::Private::Destruct<FCollectionScalarParameter>,&UE::CoreUObject::Private::Copy<FCollectionScalarParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147f5b580

void * __cdecl Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCollectionVectorParameter,&UE::CoreUObject::Private::Construct<FCollectionVectorParameter>,&UE::CoreUObject::Private::ConstructForTests<FCollectionVectorParameter>,&UE::CoreUObject::Private::Destruct<FCollectionVectorParameter>,&UE::CoreUObject::Private::Copy<FCollectionVectorParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMaterialParameterCollection_GetBaseParameterCollection @ 147f5b5c0

UFunction * __cdecl
Z_Construct_UFunction_UMaterialParameterCollection_GetBaseParameterCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMaterialParameterCollection_GetBaseParameterCollection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bParameterFound_SetBit @ 147f5b600

void __cdecl
Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::
NewProp_bParameterFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue @ 147f5b610

UFunction * __cdecl
Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames @ 147f5b650

UFunction * __cdecl Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bParameterFound_SetBit @ 147f5b6d0

void __cdecl
Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::
NewProp_bParameterFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue @ 147f5b730

UFunction * __cdecl
Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames @ 147f5b810

UFunction * __cdecl Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// <lambda_invoker_cdecl> @ 147f5c220

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMemoryImageMaterialParameterInfo::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c240

void __cdecl <lambda_26>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FUniformExpressionSet::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c260

void __cdecl <lambda_27>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialCompilationOutput::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c280

void __cdecl <lambda_28>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMeshMaterialShaderMap::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c2a0

void __cdecl <lambda_29>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialProcessedSource::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c2c0

void __cdecl <lambda_30>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialShaderMapContent::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c2e0

void __cdecl <lambda_31>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialUniformParameterEvaluation::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c300

void __cdecl <lambda_32>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialUniformPreshaderHeader::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c320

void __cdecl <lambda_33>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialUniformPreshaderField::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c340

void __cdecl <lambda_34>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialNumericParameterInfo::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c360

void __cdecl <lambda_35>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialTextureParameterInfo::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c380

void __cdecl <lambda_36>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialTextureCollectionParameterInfo::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c3a0

void __cdecl <lambda_37>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialExternalTextureParameterInfo::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c3c0

void __cdecl <lambda_38>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialVirtualTextureStack::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c3e0

void __cdecl <lambda_39>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMaterialCacheTagStack::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147f5c400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl <lambda_40>::<lambda_invoker_cdecl>(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  FMaterialRenderProxy *this;
  longlong lVar6;
  TObjectIterator<UMaterialInterface> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UMaterialInterface>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this = (FMaterialRenderProxy *)
           (**(code **)(**(longlong **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) +
                       0x310))();
    if (this != (FMaterialRenderProxy *)0x0) {
      FMaterialRenderProxy::CacheUniformExpressions_GameThread(this,false);
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// operator<<<UMaterialExpression_*,int> @ 147f5c4f0

FArchive * __cdecl
operator<<<UMaterialExpression_*,int>(FArchive *param_1,TTuple<UMaterialExpression_*,int> *param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x168))();
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)&param_2->field_0x8 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x8,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x8);
  return param_1;
}

// operator<<<UTexture_*,TSizedDefaultAllocator<32>_> @ 147f5c580

FArchive * __cdecl
operator<<<UTexture_*,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            (**(code **)(*(longlong *)param_1 + 0x168))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<UTexture_*,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x168))(param_1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TTuple<UMaterialExpression_*,int>,TDefaultMapHashableKeyFuncs<UMaterialExpression_*,int,0>,FDefaultSetAllocator> @ 147f5c590

FArchive * __cdecl
operator<<<TTuple<UMaterialExpression_*,int>,TDefaultMapHashableKeyFuncs<UMaterialExpression_*,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UMaterialExpression_*,int>,TDefaultMapHashableKeyFuncs<UMaterialExpression_*,int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<UMaterialExpression_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147f6378e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147f6378e:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar6 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147f6386b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147f6386b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18;
        uVar6 = *(ulonglong *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18);
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(lVar3 + 0x14) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar6 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FLegacyTextureLookup,TSizedDefaultAllocator<32>_> @ 147f5c5a0

FArchive * __cdecl
operator<<<FLegacyTextureLookup,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FLegacyTextureLookup,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            FLegacyTextureLookup::Serialize
                      ((FLegacyTextureLookup *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10),param_1);
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FLegacyTextureLookup,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          FLegacyTextureLookup::Serialize
                    ((FLegacyTextureLookup *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),param_1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FMaterialResourceLocOnDisk,TSizedDefaultAllocator<32>_> @ 147f5c5b0

FArchive * __cdecl
operator<<<FMaterialResourceLocOnDisk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FMaterialResourceLocOnDisk,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            operator<<(param_1,(FMaterialResourceLocOnDisk *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FMaterialResourceLocOnDisk,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0])
        ;
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FMaterialResourceLocOnDisk *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<UMaterialExpression_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147f5c5c0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<UMaterialExpression_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<UMaterialExpression_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<UMaterialExpression_*,int> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<UMaterialExpression_*,int> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<UMaterialExpression_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x18,(longlong)*(int *)&param_2->field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147f5c8bc;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_147f5c8bc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<UMaterialExpression_*,int>
                  (param_1,(TTuple<UMaterialExpression_*,int> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x18));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<UMaterialExpression_*,int> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x18);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<UMaterialExpression_*,int> *)0x0;
        if (local_78.Pointer != (TTuple<UMaterialExpression_*,int> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<UMaterialExpression_*,int>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<UMaterialExpression_*,int> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// BinarySearchBy<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>,FHashedName,FMaterialShaderMapContent::FProjectMeshShaderMapToKey,TLess<void>_> @ 147f5c9d0

int __cdecl
Algo::
BinarySearchBy<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>,FHashedName,FMaterialShaderMapContent::FProjectMeshShaderMapToKey,TLess<void>_>
          (TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> *param_1,
          FHashedName *param_2,FProjectMeshShaderMapToKey param_3,TLess<void> param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  
  FVar6 = param_1->AllocatorInstance;
  FVar8 = (ForAnyElementType)
          ((longlong)&(param_1->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
  if (((ulonglong)FVar6 & 1) == 0) {
    FVar8 = FVar6;
  }
  iVar5 = 0;
  if (0 < param_1->ArrayNum) {
    uVar7 = param_1->ArrayNum;
    do {
      iVar3 = (uVar7 >> 1) + iVar5;
      lVar1 = (longlong)iVar3 * 8;
      uVar4 = *(ulonglong *)(lVar1 + (longlong)FVar8);
      if ((uVar4 & 1) != 0) {
        uVar4 = ((longlong)uVar4 >> 0x18) + lVar1 + (longlong)FVar8;
      }
      if (*(ulonglong *)(uVar4 + 0x60) < param_2->Hash) {
        iVar5 = iVar3 + (uVar7 & 1);
      }
      uVar2 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar2 != 0);
  }
  if (param_1->ArrayNum <= iVar5) {
    return -1;
  }
  if (((ulonglong)FVar6 & 1) != 0) {
    FVar6 = (ForAnyElementType)
            ((longlong)&(param_1->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
  }
  uVar4 = *(ulonglong *)((longlong)FVar6 + (longlong)iVar5 * 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = ((longlong)uVar4 >> 0x18) + (longlong)FVar6 + (longlong)iVar5 * 8;
  }
  iVar3 = -1;
  if (*(ulonglong *)(uVar4 + 0x60) <= param_2->Hash) {
    iVar3 = iVar5;
  }
  return iVar3;
}

// CompareItems<TObjectPtr<UMaterialFunctionInterface>,int> @ 147f5cad0

bool __cdecl
CompareItems<TObjectPtr<UMaterialFunctionInterface>,int>
          (TObjectPtr<UMaterialFunctionInterface> *param_1,
          TObjectPtr<UMaterialFunctionInterface> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (((TObjectPtr<UMaterialFunctionInterface>_u_0 *)(lVar1 + (longlong)param_2))->DebugPtr !=
          param_2->field0_0x0) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FSoftObjectPath,int> @ 147f5cb00

bool __cdecl
CompareItems<FSoftObjectPath,int>(FSoftObjectPath *param_1,FSoftObjectPath *param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = FSoftObjectPath::operator==((FSoftObjectPath *)(lVar2 + (longlong)param_2),param_2);
      if (!bVar1) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FStaticSwitchParameter,int> @ 147f5cb70

bool __cdecl
CompareItems<FStaticSwitchParameter,int>
          (FStaticSwitchParameter *param_1,FStaticSwitchParameter *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = &param_2->_padding_;
    plVar1 = &param_1->_padding_;
    do {
      if (((((int)((FStaticSwitchParameter *)(plVar1 + -1))->_padding_ !=
             *(int *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)plVar1)) ||
           (*(int *)((longlong)plVar1 + -4) != *(int *)((longlong)plVar2 + -4))) ||
          ((char)*plVar1 != (char)*plVar2)) ||
         (((*(int *)((longlong)plVar1 + 4) != *(int *)((longlong)plVar2 + 4) ||
           ((char)plVar1[1] != (char)plVar2[1])) ||
          ((((*(int *)((longlong)plVar2 + 0xc) != *(int *)((longlong)plVar1 + 0xc) ||
             (int)plVar2[2] != (int)plVar1[2]) ||
            *(int *)((longlong)plVar2 + 0x14) != *(int *)((longlong)plVar1 + 0x14)) ||
            *(int *)(plVar2 + 3) != *(int *)(plVar1 + 3) ||
           (*(bool *)((longlong)plVar1 + 0x1c) != *(bool *)((longlong)plVar2 + 0x1c))))))) {
        return false;
      }
      plVar2 = plVar2 + 5;
      plVar1 = plVar1 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FMaterial_const_*,FMaterialResource_*,int> @ 147f5cc00

void __cdecl
ConstructItems<FMaterial_const_*,FMaterialResource_*,int>
          (void *param_1,FMaterialResource **param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FMaterialResource **)(lVar1 + (longlong)param_2) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FLegacyTextureLookup,int> @ 147f5cc30

void __cdecl DefaultConstructItems<FLegacyTextureLookup,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FMaterialResourceLocOnDisk,int> @ 147f5cc40

void __cdecl DefaultConstructItems<FMaterialResourceLocOnDisk,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FNameEntryId,int> @ 147f5cc50

void __cdecl DefaultConstructItems<FNameEntryId,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DestructItems<FUniformExpressionCacheAsyncUpdater::FItem,int> @ 147f5cc70

void __cdecl
DestructItems<FUniformExpressionCacheAsyncUpdater::FItem,int>(FItem *param_1,int param_2)

{
  IAllocatedVirtualTexture **ppIVar1;
  FRHIUniformBuffer *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    ppIVar1 = (param_1->AllocatedVTs).AllocatorInstance.Data;
    if (ppIVar1 != (IAllocatedVirtualTexture **)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppIVar1);
    }
    this = (param_1->UniformBuffer).Reference;
    if (this != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`FMaterialShaderMap::LoadForRemoteRecompile'::__l2::FMaterialShaderMapData,int> @ 147f5ccc0

void __cdecl
DestructItems<_FMaterialShaderMap::LoadForRemoteRecompile_::__l2::FMaterialShaderMapData,int>
          (FMaterialShaderMapData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->LoadedShaderMapsIds).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->MaterialName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMaterialShaderParameters,int> @ 147f5cd10

void __cdecl
DestructItems<FMaterialShaderParameters,int>(FMaterialShaderParameters *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->MaterialShaderTags;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPSOPrecacheData,int> @ 147f5cd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl DestructItems<FPSOPrecacheData,int>(FPSOPrecacheData *param_1,int param_2)

{
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x27;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TRefCountPtr<FMaterialShaderMap>,int> @ 147f5cda0

void __cdecl
DestructItems<TRefCountPtr<FMaterialShaderMap>,int>
          (TRefCountPtr<FMaterialShaderMap> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FMaterialShaderMap *)0x0) {
      FMaterialShaderMap::Release(param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FMaterialShaderMapLayout,TDefaultDelete<FMaterialShaderMapLayout>_>,int> @ 147f5cde0

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
DestructItems<TUniquePtr<FMaterialShaderMapLayout,TDefaultDelete<FMaterialShaderMapLayout>_>,int>
          (TUniquePtr<FMaterialShaderMapLayout,TDefaultDelete<FMaterialShaderMapLayout>_> *param_1,
          int param_2)

{
  FMaterialShaderMapLayout *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FMaterialShaderMapLayout *)0x0) {
      DestructItems<FMeshMaterialShaderMapLayout,int>
                ((FMeshMaterialShaderMapLayout *)(pFVar1->MeshShaderMaps).AllocatorInstance.Data,
                 (pFVar1->MeshShaderMaps).ArrayNum);
      pFVar2 = (pFVar1->MeshShaderMaps).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      if ((void *)pFVar1->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pFVar1->_padding_);
      }
      if ((void *)pFVar1->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pFVar1->_padding_);
      }
      operator_delete(pFVar1,0x50);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMeshMaterialShaderMapLayout,int> @ 147f5ce70

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
DestructItems<FMeshMaterialShaderMapLayout,int>(FMeshMaterialShaderMapLayout *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)plVar1[2] != (void *)0x0) {
        FMemory::Free((void *)plVar1[2]);
      }
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EmplaceByHash<TPairInitializer<FString_const_&,`DumpMaterialStats'::__l2::FMaterialInfo_const_&>_> @ 147f5df90

FSetElementId __thiscall
TSet<TTuple<FString,`DumpMaterialStats'::__l2::FMaterialInfo>,TDefaultMapHashableKeyFuncs<FString,`DumpMaterialStats'::__l2::FMaterialInfo,0>,FDefaultSetAllocator>
::EmplaceByHash<TPairInitializer<FString_const_&,_DumpMaterialStats_::__l2::FMaterialInfo_const_&>_>
          (void *this,uint param_1,
          TPairInitializer<FString_const_&,_void___cdecl_DumpMaterialStats(EShaderPlatform)_::_2_::FMaterialInfo_const_&>
          *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  longlong lVar8;
  int iVar9;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,_void___cdecl_DumpMaterialStats(EShaderPlatform)_::_2_::FMaterialInfo>_>
       *)0x0) {
    puVar3 = *(undefined8 **)(param_3 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_3);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar7 = *(int *)((longlong)this + 0x48) - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x1c) = uVar7;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// Enqueue<TRenderCommandTag<`FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope'::__l2::TSTR_BeginAsyncUniformExpressionCacheUpdates90>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f5e2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope_::__l2::TSTR_BeginAsyncUniformExpressionCacheUpdates90>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope'::__l2::TSTR_BeginAsyncUniformExpressionCacheUpdates90>
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
      if (bVar8) goto LAB_147f5e411;
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
    goto LAB_147f5e605;
  }
LAB_147f5e411:
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
LAB_147f5e4ef:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f5e4ef;
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
LAB_147f5e605:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::__l2::TSTR_DeferredDestroyMaterial1373>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f5e640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterial::ReleaseRenderThreadCompilingShaderMap_::__l2::TSTR_DeferredDestroyMaterial1373>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::__l2::TSTR_DeferredDestroyMaterial1373>
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
      if (bVar8) goto LAB_147f5e791;
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
    goto LAB_147f5e985;
  }
LAB_147f5e791:
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
LAB_147f5e86f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f5e86f;
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
LAB_147f5e985:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterial::DeferredDelete'::__l8::TSTR_DeferredDestroyMaterial2486>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f5e9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterial::DeferredDelete_::__l8::TSTR_DeferredDestroyMaterial2486>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterial::DeferredDelete'::__l8::TSTR_DeferredDestroyMaterial2486>::
            Get();
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
      if (bVar8) goto LAB_147f5eb11;
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
    goto LAB_147f5ed05;
  }
LAB_147f5eb11:
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
LAB_147f5ebef:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f5ebef;
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
LAB_147f5ed05:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterial::DeleteMaterialsOnRenderThread'::__l5::TSTR_DeferredDestroyMaterialArray2505>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f5ed40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterial::DeleteMaterialsOnRenderThread_::__l5::TSTR_DeferredDestroyMaterialArray2505>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterial::DeleteMaterialsOnRenderThread'::__l5::TSTR_DeferredDestroyMaterialArray2505>
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
      if (bVar8) goto LAB_147f5ee91;
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
    goto LAB_147f5f085;
  }
LAB_147f5ee91:
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
LAB_147f5ef6f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f5ef6f;
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
LAB_147f5f085:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope'::__l2::TSTR_EndAsyncUniformExpressionCacheUpdates99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f5f0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope_::__l2::TSTR_EndAsyncUniformExpressionCacheUpdates99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope'::__l2::TSTR_EndAsyncUniformExpressionCacheUpdates99>
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
      if (bVar8) goto LAB_147f5f211;
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
    goto LAB_147f5f405;
  }
LAB_147f5f211:
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
LAB_147f5f2ef:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f5f2ef;
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
LAB_147f5f405:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::TSTR_FCacheUniformExpressionsCommand626>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f5f440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterialRenderProxy::CacheUniformExpressions_GameThread_::__l5::TSTR_FCacheUniformExpressionsCommand626>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::TSTR_FCacheUniformExpressionsCommand626>
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
      if (bVar8) goto LAB_147f5f591;
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
    goto LAB_147f5f785;
  }
LAB_147f5f591:
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
LAB_147f5f66f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f5f66f;
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
LAB_147f5f785:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterial::SetShaderMapsOnMaterialResources'::__l2::TSTR_FSetShaderMapOnMaterialResources5586>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f5f7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterial::SetShaderMapsOnMaterialResources_::__l2::TSTR_FSetShaderMapOnMaterialResources5586>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterial::SetShaderMapsOnMaterialResources'::__l2::TSTR_FSetShaderMapOnMaterialResources5586>
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
      if (bVar8) goto LAB_147f5f911;
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
    goto LAB_147f5fb05;
  }
LAB_147f5f911:
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
LAB_147f5f9ef:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f5f9ef;
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
LAB_147f5fb05:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterial::ReleaseShaderMap'::__l27::TSTR_ReleaseShaderMap1644>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f5fb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterial::ReleaseShaderMap_::__l27::TSTR_ReleaseShaderMap1644>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterial::ReleaseShaderMap'::__l27::TSTR_ReleaseShaderMap1644>::Get
                      ();
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
      if (bVar8) goto LAB_147f5fc91;
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
    goto LAB_147f5fe85;
  }
LAB_147f5fc91:
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
LAB_147f5fd6f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f5fd6f;
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
LAB_147f5fe85:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l29::TSTR_ReloadNaniteFixedFunctionBins4957>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f5fec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterialUpdateContext::~FMaterialUpdateContext_::__l29::TSTR_ReloadNaniteFixedFunctionBins4957>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l29::TSTR_ReloadNaniteFixedFunctionBins4957>
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
      if (bVar8) goto LAB_147f60011;
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
    goto LAB_147f60205;
  }
LAB_147f60011:
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
LAB_147f600ef:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f600ef;
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
LAB_147f60205:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterial::SetGameThreadShaderMap'::__l2::TSTR_SetGameThreadShaderMap1271>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f60240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterial::SetGameThreadShaderMap_::__l2::TSTR_SetGameThreadShaderMap1271>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterial::SetGameThreadShaderMap'::__l2::TSTR_SetGameThreadShaderMap1271>
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
      if (bVar8) goto LAB_147f60391;
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
    goto LAB_147f60585;
  }
LAB_147f60391:
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
LAB_147f6046f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f6046f;
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
LAB_147f60585:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterial::SetInlineShaderMap'::__l2::TSTR_SetInlineShaderMap1316>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f605c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterial::SetInlineShaderMap_::__l2::TSTR_SetInlineShaderMap1316>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterial::SetInlineShaderMap'::__l2::TSTR_SetInlineShaderMap1316>::
            Get();
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
      if (bVar8) goto LAB_147f60711;
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
    goto LAB_147f60905;
  }
LAB_147f60711:
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
LAB_147f607ef:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f607ef;
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
LAB_147f60905:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterial::UpdateInlineShaderMapIsComplete'::__l2::TSTR_UpdateGameThreadShaderMapIsComplete1293>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f60940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterial::UpdateInlineShaderMapIsComplete_::__l2::TSTR_UpdateGameThreadShaderMapIsComplete1293>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterial::UpdateInlineShaderMapIsComplete'::__l2::TSTR_UpdateGameThreadShaderMapIsComplete1293>
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
      if (bVar8) goto LAB_147f60a91;
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
    goto LAB_147f60c85;
  }
LAB_147f60a91:
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
LAB_147f60b6f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f60b6f;
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
LAB_147f60c85:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// HeapSortInternal<FStaticSwitchParameter,int,FIdentityFunctor,TDereferenceWrapper<FStaticSwitchParameter,`FStaticParameterSet::SortForEquivalent'::__l2::<lambda_1>_>_> @ 147f60ee0

void __cdecl
AlgoImpl::
HeapSortInternal<FStaticSwitchParameter,int,FIdentityFunctor,TDereferenceWrapper<FStaticSwitchParameter,_FStaticParameterSet::SortForEquivalent_::__l2::<lambda_1>_>_>
          (FStaticSwitchParameter *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FStaticSwitchParameter,_private:_void___cdecl_FStaticParameterSet::SortForEquivalent(void)_::_2_::<lambda_1>_>
          param_4)

{
  FStaticSwitchParameter *pFVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  FStaticSwitchParameter *pFVar9;
  undefined3 uVar10;
  bool bVar11;
  undefined3 uVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  FStaticSwitchParameter *pFVar18;
  int iVar19;
  longlong lVar20;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FStaticSwitchParameter,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FStaticSwitchParameter,_FStaticParameterSet::SortForEquivalent_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FStaticSwitchParameter,_private:_void___cdecl_FStaticParameterSet::SortForEquivalent(void)_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar17 = param_2 + -1;
  lVar20 = (longlong)iVar17;
  if (0 < iVar17) {
    pFVar18 = param_1 + lVar20;
    do {
      lVar14 = pFVar18->_padding_;
      iVar19 = param_1->_padding_;
      bVar11 = param_1->Value;
      uVar12 = *(undefined3 *)&param_1->field_0x25;
      lVar15 = param_1->_padding_;
      lVar6 = param_1->_padding_;
      lVar7 = param_1->_padding_;
      lVar8 = param_1->_padding_;
      param_1->_padding_ = pFVar18->_padding_;
      param_1->_padding_ = lVar14;
      lVar14 = pFVar18->_padding_;
      param_1->_padding_ = pFVar18->_padding_;
      param_1->_padding_ = lVar14;
      bVar13 = pFVar18->Value;
      uVar10 = *(undefined3 *)&pFVar18->field_0x25;
      param_1->_padding_ = pFVar18->_padding_;
      param_1->Value = bVar13;
      *(undefined3 *)&param_1->field_0x25 = uVar10;
      pFVar18->_padding_ = lVar15;
      pFVar18->_padding_ = lVar6;
      pFVar18->_padding_ = lVar7;
      pFVar18->_padding_ = lVar8;
      pFVar18->_padding_ = iVar19;
      pFVar18->Value = bVar11;
      *(undefined3 *)&pFVar18->field_0x25 = uVar12;
      iVar19 = 0;
      if (1 < iVar17) {
        do {
          iVar5 = iVar19 * 2;
          iVar16 = iVar5 + 1;
          if (iVar5 + 2 < iVar17) {
            lVar14 = (longlong)iVar5;
            lVar15 = lVar14 + 1;
            uVar2 = *(uint *)((longlong)&param_1[lVar14 + 2]._padding_ + 4);
            uVar3 = *(uint *)((longlong)&param_1[lVar15]._padding_ + 4);
            if (uVar3 < uVar2) {
              bVar13 = true;
            }
            else if (uVar2 < uVar3) {
              bVar13 = false;
            }
            else {
              uVar2 = (uint)param_1[lVar14 + 2]._padding_;
              uVar3 = (uint)param_1[lVar15]._padding_;
              if (uVar3 < uVar2) {
                bVar13 = true;
              }
              else if (uVar2 < uVar3) {
                bVar13 = false;
              }
              else {
                uVar2 = *(uint *)((longlong)&param_1[lVar14 + 2]._padding_ + 4);
                uVar3 = *(uint *)((longlong)&param_1[lVar15]._padding_ + 4);
                if (uVar3 < uVar2) {
                  bVar13 = true;
                }
                else if (uVar2 < uVar3) {
                  bVar13 = false;
                }
                else {
                  bVar13 = (uint)param_1[lVar15]._padding_ < (uint)param_1[lVar14 + 2]._padding_;
                }
              }
            }
            if (bVar13) {
              iVar16 = iVar5;
            }
            iVar16 = iVar16 + 1;
          }
          pFVar1 = param_1 + iVar19;
          uVar2 = *(uint *)((longlong)&pFVar1->_padding_ + 4);
          uVar3 = *(uint *)((longlong)&param_1[iVar16]._padding_ + 4);
          if ((uVar2 <= uVar3) &&
             ((uVar3 != uVar2 ||
              ((uVar2 = (uint)pFVar1->_padding_, uVar3 = (uint)param_1[iVar16]._padding_,
               uVar2 <= uVar3 &&
               ((uVar3 != uVar2 ||
                ((uVar2 = *(uint *)((longlong)&pFVar1->_padding_ + 4),
                 uVar3 = *(uint *)((longlong)&param_1[iVar16]._padding_ + 4), uVar2 <= uVar3 &&
                 ((uVar3 != uVar2 || ((uint)pFVar1->_padding_ <= (uint)param_1[iVar16]._padding_))))
                )))))))) break;
          lVar14 = param_1[iVar16]._padding_;
          iVar19 = pFVar1->_padding_;
          bVar11 = pFVar1->Value;
          uVar12 = *(undefined3 *)&pFVar1->field_0x25;
          lVar15 = pFVar1->_padding_;
          lVar6 = pFVar1->_padding_;
          lVar7 = pFVar1->_padding_;
          lVar8 = pFVar1->_padding_;
          pFVar1->_padding_ = param_1[iVar16]._padding_;
          pFVar1->_padding_ = lVar14;
          lVar14 = (&param_1[iVar16]._padding_)[1];
          pFVar1->_padding_ = param_1[iVar16]._padding_;
          pFVar1->_padding_ = lVar14;
          pFVar9 = param_1 + iVar16;
          bVar13 = pFVar9->Value;
          uVar10 = *(undefined3 *)&pFVar9->field_0x25;
          pFVar1->_padding_ = pFVar9->_padding_;
          pFVar1->Value = bVar13;
          *(undefined3 *)&pFVar1->field_0x25 = uVar10;
          param_1[iVar16]._padding_ = lVar15;
          param_1[iVar16]._padding_ = lVar6;
          param_1[iVar16]._padding_ = lVar7;
          (&param_1[iVar16]._padding_)[1] = lVar8;
          pFVar1 = param_1 + iVar16;
          pFVar1->_padding_ = iVar19;
          pFVar1->Value = bVar11;
          *(undefined3 *)&pFVar1->field_0x25 = uVar12;
          iVar19 = iVar16;
        } while (iVar16 * 2 + 1 < iVar17);
      }
      iVar17 = iVar17 + -1;
      lVar20 = lVar20 + -1;
      pFVar18 = pFVar18 + -1;
    } while (0 < lVar20);
  }
  return;
}

// HeapifyInternal<FStaticSwitchParameter,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FStaticSwitchParameter,`FStaticParameterSet::SortForEquivalent'::__l2::<lambda_1>_>_>_> @ 147f610d0

void __cdecl
AlgoImpl::
HeapifyInternal<FStaticSwitchParameter,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FStaticSwitchParameter,_FStaticParameterSet::SortForEquivalent_::__l2::<lambda_1>_>_>_>
          (FStaticSwitchParameter *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FStaticSwitchParameter,_private:_void___cdecl_FStaticParameterSet::SortForEquivalent(void)_::_2_::<lambda_1>_>_>
          param_4)

{
  FStaticSwitchParameter *pFVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  FStaticSwitchParameter *pFVar9;
  undefined3 uVar10;
  bool bVar11;
  undefined3 uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar15 = iVar14 * 2 + 1;
  iVar5 = iVar15;
  iVar19 = iVar14;
  do {
    while (param_2 <= iVar15) {
LAB_147f6123f:
      if (iVar19 == 0) {
        return;
      }
      iVar14 = iVar19 + -1;
      iVar15 = iVar5 + -2;
      iVar5 = iVar15;
      iVar19 = iVar14;
    }
    iVar15 = iVar14 * 2;
    iVar18 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      lVar16 = (longlong)iVar15;
      lVar17 = lVar16 + 1;
      uVar2 = *(uint *)((longlong)&param_1[lVar16 + 2]._padding_ + 4);
      uVar3 = *(uint *)((longlong)&param_1[lVar17]._padding_ + 4);
      if (uVar3 < uVar2) {
        bVar13 = true;
      }
      else if (uVar2 < uVar3) {
        bVar13 = false;
      }
      else {
        uVar2 = (uint)param_1[lVar16 + 2]._padding_;
        uVar3 = (uint)param_1[lVar17]._padding_;
        if (uVar3 < uVar2) {
          bVar13 = true;
        }
        else if (uVar2 < uVar3) {
          bVar13 = false;
        }
        else {
          uVar2 = *(uint *)((longlong)&param_1[lVar16 + 2]._padding_ + 4);
          uVar3 = *(uint *)((longlong)&param_1[lVar17]._padding_ + 4);
          if (uVar3 < uVar2) {
            bVar13 = true;
          }
          else if (uVar2 < uVar3) {
            bVar13 = false;
          }
          else {
            bVar13 = (uint)param_1[lVar17]._padding_ < (uint)param_1[lVar16 + 2]._padding_;
          }
        }
      }
      if (bVar13) {
        iVar18 = iVar15;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar1 = param_1 + iVar14;
    uVar2 = *(uint *)((longlong)&pFVar1->_padding_ + 4);
    uVar3 = *(uint *)((longlong)&param_1[iVar18]._padding_ + 4);
    if ((uVar2 <= uVar3) &&
       ((uVar3 != uVar2 ||
        ((uVar2 = (uint)pFVar1->_padding_, uVar3 = (uint)param_1[iVar18]._padding_, uVar2 <= uVar3
         && ((uVar3 != uVar2 ||
             ((uVar2 = *(uint *)((longlong)&pFVar1->_padding_ + 4),
              uVar3 = *(uint *)((longlong)&param_1[iVar18]._padding_ + 4), uVar2 <= uVar3 &&
              ((uVar3 != uVar2 || ((uint)pFVar1->_padding_ <= (uint)param_1[iVar18]._padding_)))))))
         ))))) goto LAB_147f6123f;
    lVar16 = param_1[iVar18]._padding_;
    iVar15 = iVar18 * 2 + 1;
    iVar14 = pFVar1->_padding_;
    bVar11 = pFVar1->Value;
    uVar12 = *(undefined3 *)&pFVar1->field_0x25;
    lVar17 = pFVar1->_padding_;
    lVar6 = pFVar1->_padding_;
    lVar7 = pFVar1->_padding_;
    lVar8 = pFVar1->_padding_;
    pFVar1->_padding_ = param_1[iVar18]._padding_;
    pFVar1->_padding_ = lVar16;
    lVar16 = (&param_1[iVar18]._padding_)[1];
    pFVar1->_padding_ = param_1[iVar18]._padding_;
    pFVar1->_padding_ = lVar16;
    pFVar9 = param_1 + iVar18;
    bVar13 = pFVar9->Value;
    uVar10 = *(undefined3 *)&pFVar9->field_0x25;
    pFVar1->_padding_ = pFVar9->_padding_;
    pFVar1->Value = bVar13;
    *(undefined3 *)&pFVar1->field_0x25 = uVar10;
    param_1[iVar18]._padding_ = lVar17;
    param_1[iVar18]._padding_ = lVar6;
    param_1[iVar18]._padding_ = lVar7;
    (&param_1[iVar18]._padding_)[1] = lVar8;
    pFVar1 = param_1 + iVar18;
    pFVar1->_padding_ = iVar14;
    pFVar1->Value = bVar11;
    *(undefined3 *)&pFVar1->field_0x25 = uVar12;
    iVar14 = iVar18;
  } while( true );
}

// InternalConstructor<UMaterialParameterCollection> @ 147f61270

void __cdecl InternalConstructor<UMaterialParameterCollection>(FObjectInitializer *param_1)

{
  if ((UMaterialParameterCollection *)param_1->Obj != (UMaterialParameterCollection *)0x0) {
    UMaterialParameterCollection::UMaterialParameterCollection
              ((UMaterialParameterCollection *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMaterialParameterCollection> @ 147f61290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialParameterCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialParameterCollection::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMaterialParameterCollection__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)&pUVar1[3].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 4) = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)&pUVar1[5].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 6) = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x4 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntrinsicAppendHash<FGuid,TMemoryImageAllocator<0>_> @ 147f613f0

uint __cdecl
Freeze::IntrinsicAppendHash<FGuid,TMemoryImageAllocator<0>_>
          (TArray<FGuid,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FScriptName,TMemoryImageAllocator<0>_> @ 147f61410

uint __cdecl
Freeze::IntrinsicAppendHash<FScriptName,TMemoryImageAllocator<0>_>
          (TArray<FScriptName,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> @ 147f61430

uint __cdecl
Freeze::IntrinsicAppendHash<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>
          (TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> @ 147f61450

uint __cdecl
Freeze::IntrinsicAppendHash<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>
          (TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f61470

uint __cdecl
Freeze::IntrinsicAppendHash<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> @ 147f61490

uint __cdecl
Freeze::IntrinsicAppendHash<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> @ 147f614b0

uint __cdecl
Freeze::IntrinsicAppendHash<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f614d0

uint __cdecl
Freeze::IntrinsicAppendHash<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> @ 147f614f0

uint __cdecl
Freeze::IntrinsicAppendHash<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>
          (TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> @ 147f61510

uint __cdecl
Freeze::IntrinsicAppendHash<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>
          (TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> @ 147f61530

uint __cdecl
Freeze::IntrinsicAppendHash<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>
          (TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> @ 147f61550

uint __cdecl
Freeze::IntrinsicAppendHash<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>
          (TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMeshMaterialShaderMap> @ 147f61570

uint __cdecl
Freeze::IntrinsicAppendHash<FMeshMaterialShaderMap>
          (TMemoryImagePtr<FMeshMaterialShaderMap> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,8,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<FGuid,TMemoryImageAllocator<0>_> @ 147f61590

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FGuid,TMemoryImageAllocator<0>_>
          (TArray<FGuid,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FScriptName,TMemoryImageAllocator<0>_> @ 147f615b0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FScriptName,TMemoryImageAllocator<0>_>
          (TArray<FScriptName,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> @ 147f615d0

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>
          (TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> @ 147f615f0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>
          (TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f61610

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> @ 147f61630

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> @ 147f61650

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f61670

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> @ 147f61690

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>
          (TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> @ 147f616b0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>
          (TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> @ 147f616d0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>
          (TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> @ 147f616f0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>
          (TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<FGuid,TMemoryImageAllocator<0>_> @ 147f61710

void __cdecl
Freeze::IntrinsicToString<FGuid,TMemoryImageAllocator<0>_>
          (TArray<FGuid,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = StaticGetTypeLayoutDesc<FGuid>();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FScriptName,TMemoryImageAllocator<0>_> @ 147f61780

void __cdecl
Freeze::IntrinsicToString<FScriptName,TMemoryImageAllocator<0>_>
          (TArray<FScriptName,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = StaticGetTypeLayoutDesc<FScriptName>();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> @ 147f617f0

void __cdecl
Freeze::IntrinsicToString<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>
          (TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FMeshMaterialShaderMap>_>();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> @ 147f61860

void __cdecl
Freeze::IntrinsicToString<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>
          (TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FMaterialCacheTagStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f618d0

void __cdecl
Freeze::IntrinsicToString<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FMaterialExternalTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> @ 147f61940

void __cdecl
Freeze::IntrinsicToString<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FMaterialNumericParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> @ 147f619b0

void __cdecl
Freeze::IntrinsicToString<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FMaterialTextureCollectionParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f61a20

void __cdecl
Freeze::IntrinsicToString<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>
          (TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FMaterialTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> @ 147f61a90

void __cdecl
Freeze::IntrinsicToString<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>
          (TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FMaterialUniformParameterEvaluation::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> @ 147f61b00

void __cdecl
Freeze::IntrinsicToString<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>
          (TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FMaterialUniformPreshaderField::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> @ 147f61b70

void __cdecl
Freeze::IntrinsicToString<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>
          (TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FMaterialUniformPreshaderHeader::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> @ 147f61be0

void __cdecl
Freeze::IntrinsicToString<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>
          (TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FMaterialVirtualTextureStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<FMeshMaterialShaderMap> @ 147f61c50

void __cdecl
Freeze::IntrinsicToString<FMeshMaterialShaderMap>
          (TMemoryImagePtr<FMeshMaterialShaderMap> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  uint uVar1;
  FTypeLayoutDesc *pFVar2;
  FTypeLayoutDesc *this;
  FMeshMaterialShaderMap *pFVar3;
  
  pFVar3 = (param_1->field0_0x0).UnfrozenPtr;
  if (((ulonglong)pFVar3 & 1) != 0) {
    pFVar3 = (FMeshMaterialShaderMap *)((longlong)&param_1->field0_0x0 + ((longlong)pFVar3 >> 0x18))
    ;
  }
  if (pFVar3 != (FMeshMaterialShaderMap *)0x0) {
    pFVar2 = FMeshMaterialShaderMap::StaticGetTypeLayout();
    this = FMeshMaterialShaderMap::StaticGetTypeLayout();
    uVar1 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar2);
    if (((param_1->field0_0x0).Packed & 1) == 0) {
      FMemoryToStringContext::AppendUnfrozenPointer(param_4,pFVar2);
    }
    else {
      FMemoryToStringContext::AppendFrozenPointer
                (param_4,pFVar2,((uint)((param_1->field0_0x0).Packed >> 1) & 0x7fffff) - 1);
    }
                    /* WARNING: Could not recover jumptable at 0x000147f61d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->ToStringFunc)((void *)((longlong)pFVar3 - (ulonglong)uVar1),this,param_3,param_4);
    return;
  }
  FMemoryToStringContext::AppendNullptr(param_4);
  return;
}

// IntrinsicUnfrozenCopy<FGuid,TMemoryImageAllocator<0>_> @ 147f61d20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FGuid,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,TArray<FGuid,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FGuid,TMemoryImageAllocator<0>_>::SetNumZeroed(param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<FGuid>();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FScriptName,TMemoryImageAllocator<0>_> @ 147f61db0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FScriptName,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,TArray<FScriptName,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FScriptName,TMemoryImageAllocator<0>_>::SetNumZeroed(param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<FScriptName>();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> @ 147f61e40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FMeshMaterialShaderMap>_>();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> @ 147f61ed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialCacheTagStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f61f60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialExternalTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> @ 147f61ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialNumericParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> @ 147f62080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialTextureCollectionParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f62110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> @ 147f621a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialUniformParameterEvaluation::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> @ 147f62230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialUniformPreshaderField::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> @ 147f622c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialUniformPreshaderHeader::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> @ 147f62350

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialVirtualTextureStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMeshMaterialShaderMap> @ 147f623e0

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMeshMaterialShaderMap>
          (FMemoryUnfreezeContent *param_1,TMemoryImagePtr<FMeshMaterialShaderMap> *param_2,
          void *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTypeLayoutDesc *pFVar5;
  FTypeLayoutDesc *this;
  void *pvVar6;
  FMeshMaterialShaderMap *pFVar7;
  
  pFVar7 = (param_2->field0_0x0).UnfrozenPtr;
  if (((ulonglong)pFVar7 & 1) != 0) {
    pFVar7 = (FMeshMaterialShaderMap *)((longlong)&param_2->field0_0x0 + ((longlong)pFVar7 >> 0x18))
    ;
  }
  if (pFVar7 != (FMeshMaterialShaderMap *)0x0) {
    pFVar5 = FMeshMaterialShaderMap::StaticGetTypeLayout();
    if (((*(byte *)&param_2->field0_0x0 & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFrozen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,400,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    this = FMemoryUnfreezeContent::GetDerivedTypeDesc
                     (param_1,pFVar5,(*(uint *)&param_2->field0_0x0 >> 1 & 0x7fffff) - 1);
    if ((this != (FTypeLayoutDesc *)0x0) ||
       ((param_1->bIsFrozenForCurrentPlatform != false &&
        (this = FMeshMaterialShaderMap::StaticGetTypeLayout(), this != (FTypeLayoutDesc *)0x0)))) {
      uVar4 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar5);
      pvVar6 = ::operator_new((ulonglong)this->Size);
      (*this->UnfrozenCopyFunc)(param_1,(void *)((longlong)pFVar7 - (ulonglong)uVar4),this,pvVar6);
      uVar1 = (ulonglong)uVar4 + (longlong)pvVar6;
      *(ulonglong *)param_3 = uVar1;
      if ((uVar1 & 1) == 0) {
        return 8;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x185,L"");
      if (!bVar3) {
        return 8;
      }
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  *(undefined8 *)param_3 = 0;
  return 8;
}

// IntrinsicWriteMemoryImage<FGuid,TMemoryImageAllocator<0>_> @ 147f62510

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FGuid,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,TArray<FGuid,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<FGuid>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FScriptName,TMemoryImageAllocator<0>_> @ 147f62590

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FScriptName,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,TArray<FScriptName,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<FScriptName>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> @ 147f62610

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FMeshMaterialShaderMap>_>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> @ 147f62690

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMaterialCacheTagStack,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMaterialCacheTagStack,TMemoryImageAllocator<0>_> *param_2,FTypeLayoutDesc *param_3
          )

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialCacheTagStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f62710

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMaterialExternalTextureParameterInfo,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialExternalTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> @ 147f62790

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialNumericParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> @ 147f62810

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialTextureCollectionParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> @ 147f62890

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialTextureParameterInfo::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> @ 147f62910

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMaterialUniformParameterEvaluation,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialUniformParameterEvaluation::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> @ 147f62990

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMaterialUniformPreshaderField,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialUniformPreshaderField::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> @ 147f62a10

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMaterialUniformPreshaderHeader,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialUniformPreshaderHeader::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> @ 147f62a90

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMaterialVirtualTextureStack,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FMaterialVirtualTextureStack::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<FMeshMaterialShaderMap> @ 147f62b10

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMeshMaterialShaderMap>
          (FMemoryImageWriter *param_1,TMemoryImagePtr<FMeshMaterialShaderMap> *param_2,
          FTypeLayoutDesc *param_3)

{
  FTypeLayoutDesc *pFVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  FMemoryImageWriter local_res20;
  
  pvVar3 = (void *)(param_2->field0_0x0).Packed;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)((longlong)&param_2->field0_0x0 + ((longlong)pvVar3 >> 0x18));
  }
  if (pvVar3 != (void *)0x0) {
    FMemoryImageWriter::TryGetPrevPointerTable(param_1);
    pFVar1 = FMeshMaterialShaderMap::StaticGetTypeLayout();
    pFVar2 = FMeshMaterialShaderMap::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer(param_1,(FTypeLayoutDesc *)&local_res20,pFVar2,(uint *)pFVar1);
    FMemoryImageWriter::WriteObject(&local_res20,pvVar3,pFVar1);
    FMemoryImageWriter::~FMemoryImageWriter(&local_res20);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

// IntroSortInternal<FStaticSwitchParameter,int,FIdentityFunctor,TDereferenceWrapper<FStaticSwitchParameter,`FStaticParameterSet::SortForEquivalent'::__l2::<lambda_1>_>_> @ 147f62bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FStaticSwitchParameter,int,FIdentityFunctor,TDereferenceWrapper<FStaticSwitchParameter,_FStaticParameterSet::SortForEquivalent_::__l2::<lambda_1>_>_>
          (FStaticSwitchParameter *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FStaticSwitchParameter,_private:_void___cdecl_FStaticParameterSet::SortForEquivalent(void)_::_2_::<lambda_1>_>
          param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  FStaticSwitchParameter *pFVar8;
  undefined3 uVar9;
  int iVar10;
  bool bVar11;
  undefined3 uVar12;
  int iVar13;
  int iVar14;
  FStaticSwitchParameter *pFVar15;
  FStaticSwitchParameter *pFVar16;
  FStaticSwitchParameter *pFVar17;
  FStaticSwitchParameter *pFVar18;
  FStaticSwitchParameter *pFVar19;
  FStaticSwitchParameter **ppFVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_378 [48];
  FStaticSwitchParameter *local_348;
  FStaticSwitchParameter *local_338;
  FStaticSwitchParameter *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (param_2 < 2) {
    return;
  }
  local_330 = param_1 + (longlong)param_2 + -1;
  local_338 = param_1;
  fVar22 = logf((float)param_2 * (float)param_2);
  local_328 = (undefined4)(longlong)fVar22;
  memset(local_320,0,0x2e8);
  ppFVar20 = &local_338;
  do {
    pFVar15 = ppFVar20[1];
    local_348 = ppFVar20[2];
    iVar13 = (int)(((longlong)pFVar15 - (longlong)*ppFVar20) / 0x28);
    pFVar8 = *ppFVar20;
    iVar14 = (int)local_348;
joined_r0x000147f62c88:
    iVar13 = iVar13 + 1;
    if (iVar14 == 0) {
      HeapSortInternal<FStaticSwitchParameter,int,FIdentityFunctor,TDereferenceWrapper<FStaticSwitchParameter,_FStaticParameterSet::SortForEquivalent_::__l2::<lambda_1>_>_>
                (pFVar8,iVar13,param_3,param_4);
    }
    else {
      if (8 < iVar13) {
        lVar3 = pFVar8->_padding_;
        pFVar16 = pFVar15 + 1;
        iVar13 = iVar13 / 2;
        lVar4 = pFVar8[iVar13]._padding_;
        lVar5 = pFVar8[iVar13]._padding_;
        lVar6 = pFVar8[iVar13]._padding_;
        lVar7 = (&pFVar8[iVar13]._padding_)[1];
        pFVar18 = pFVar8 + iVar13;
        iVar10 = pFVar18->_padding_;
        bVar11 = pFVar18->Value;
        uVar12 = *(undefined3 *)&pFVar18->field_0x25;
        pFVar8[iVar13]._padding_ = pFVar8->_padding_;
        pFVar8[iVar13]._padding_ = lVar3;
        lVar3 = pFVar8->_padding_;
        pFVar8[iVar13]._padding_ = pFVar8->_padding_;
        (&pFVar8[iVar13]._padding_)[1] = lVar3;
        bVar21 = pFVar8->Value;
        uVar9 = *(undefined3 *)&pFVar8->field_0x25;
        pFVar18 = pFVar8 + iVar13;
        pFVar18->_padding_ = pFVar8->_padding_;
        pFVar18->Value = bVar21;
        *(undefined3 *)&pFVar18->field_0x25 = uVar9;
        pFVar8->_padding_ = lVar4;
        pFVar8->_padding_ = lVar5;
        pFVar8->_padding_ = lVar6;
        pFVar8->_padding_ = lVar7;
        pFVar8->_padding_ = iVar10;
        pFVar8->Value = bVar11;
        *(undefined3 *)&pFVar8->field_0x25 = uVar12;
        pFVar18 = pFVar8;
LAB_147f62cf0:
        pFVar19 = pFVar18;
        pFVar18 = pFVar19 + 1;
        if ((pFVar18 <= pFVar15) &&
           (uVar1 = *(uint *)((longlong)&pFVar8->_padding_ + 4),
           uVar2 = *(uint *)((longlong)&pFVar19[1]._padding_ + 4), uVar1 <= uVar2)) break;
        goto LAB_147f62d27;
      }
      for (; pFVar18 = pFVar8, pFVar16 = pFVar8, pFVar8 < pFVar15; pFVar15 = pFVar15 + -1) {
        while (pFVar19 = pFVar18, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar15) {
          uVar1 = *(uint *)((longlong)&pFVar19->_padding_ + 4);
          uVar2 = *(uint *)((longlong)&pFVar16->_padding_ + 4);
          if (uVar2 < uVar1) {
            bVar21 = true;
          }
          else if (uVar1 < uVar2) {
            bVar21 = false;
          }
          else {
            uVar1 = (uint)pFVar19->_padding_;
            uVar2 = (uint)pFVar16->_padding_;
            if (uVar2 < uVar1) {
              bVar21 = true;
            }
            else if (uVar1 < uVar2) {
              bVar21 = false;
            }
            else {
              uVar1 = *(uint *)((longlong)&pFVar19->_padding_ + 4);
              uVar2 = *(uint *)((longlong)&pFVar16->_padding_ + 4);
              if (uVar2 < uVar1) {
                bVar21 = true;
              }
              else if (uVar1 < uVar2) {
                bVar21 = false;
              }
              else {
                bVar21 = (uint)pFVar16->_padding_ < (uint)pFVar19->_padding_;
              }
            }
          }
          pFVar18 = pFVar16;
          if (!bVar21) {
            pFVar18 = pFVar19;
          }
        }
        lVar3 = pFVar19->_padding_;
        lVar4 = pFVar19->_padding_;
        iVar13 = pFVar19->_padding_;
        bVar11 = pFVar19->Value;
        uVar12 = *(undefined3 *)&pFVar19->field_0x25;
        lVar5 = pFVar19->_padding_;
        lVar6 = pFVar19->_padding_;
        lVar7 = pFVar15->_padding_;
        pFVar19->_padding_ = pFVar15->_padding_;
        pFVar19->_padding_ = lVar7;
        lVar7 = pFVar15->_padding_;
        pFVar19->_padding_ = pFVar15->_padding_;
        pFVar19->_padding_ = lVar7;
        bVar21 = pFVar15->Value;
        uVar9 = *(undefined3 *)&pFVar15->field_0x25;
        pFVar19->_padding_ = pFVar15->_padding_;
        pFVar19->Value = bVar21;
        *(undefined3 *)&pFVar19->field_0x25 = uVar9;
        pFVar15->_padding_ = lVar3;
        pFVar15->_padding_ = lVar4;
        pFVar15->_padding_ = lVar5;
        pFVar15->_padding_ = lVar6;
        pFVar15->_padding_ = iVar13;
        pFVar15->Value = bVar11;
        *(undefined3 *)&pFVar15->field_0x25 = uVar12;
      }
    }
LAB_147f62e98:
    ppFVar20 = ppFVar20 + -3;
    if (ppFVar20 < &local_338) {
      return;
    }
  } while( true );
  if ((uVar2 != uVar1) ||
     ((uVar1 = (uint)pFVar8->_padding_, uVar2 = (uint)pFVar19[1]._padding_, uVar1 <= uVar2 &&
      ((uVar2 != uVar1 ||
       ((uVar1 = *(uint *)((longlong)&pFVar8->_padding_ + 4),
        uVar2 = *(uint *)((longlong)&pFVar19[1]._padding_ + 4), uVar1 <= uVar2 &&
        ((uVar2 != uVar1 || ((uint)pFVar8->_padding_ <= (uint)pFVar19[1]._padding_))))))))))
  goto LAB_147f62cf0;
LAB_147f62d27:
  do {
    pFVar17 = pFVar16;
    pFVar16 = pFVar17 + -1;
    if ((pFVar16 <= pFVar8) ||
       (uVar1 = *(uint *)((longlong)&pFVar17[-1]._padding_ + 4),
       uVar2 = *(uint *)((longlong)&pFVar8->_padding_ + 4), uVar2 < uVar1)) break;
  } while ((uVar2 != uVar1) ||
          ((uVar1 = (uint)pFVar17[-1]._padding_, uVar2 = (uint)pFVar8->_padding_, uVar1 <= uVar2 &&
           ((uVar2 != uVar1 ||
            ((uVar1 = *(uint *)((longlong)&pFVar17[-1]._padding_ + 4),
             uVar2 = *(uint *)((longlong)&pFVar8->_padding_ + 4), uVar1 <= uVar2 &&
             ((uVar2 != uVar1 || ((uint)pFVar17[-1]._padding_ <= (uint)pFVar8->_padding_))))))))));
  lVar3 = pFVar17[-1]._padding_;
  if (pFVar18 <= pFVar16) {
    lVar4 = pFVar18->_padding_;
    lVar5 = pFVar19[1]._padding_;
    lVar6 = pFVar19[1]._padding_;
    lVar7 = pFVar19[1]._padding_;
    iVar13 = pFVar19[1]._padding_;
    bVar11 = pFVar19[1].Value;
    uVar12 = *(undefined3 *)&pFVar19[1].field_0x25;
    pFVar18->_padding_ = pFVar16->_padding_;
    pFVar19[1]._padding_ = lVar3;
    lVar3 = pFVar17[-1]._padding_;
    pFVar19[1]._padding_ = pFVar17[-1]._padding_;
    pFVar19[1]._padding_ = lVar3;
    bVar21 = pFVar17[-1].Value;
    uVar9 = *(undefined3 *)&pFVar17[-1].field_0x25;
    pFVar19[1]._padding_ = pFVar17[-1]._padding_;
    pFVar19[1].Value = bVar21;
    *(undefined3 *)&pFVar19[1].field_0x25 = uVar9;
    pFVar16->_padding_ = lVar4;
    pFVar17[-1]._padding_ = lVar5;
    pFVar17[-1]._padding_ = lVar6;
    pFVar17[-1]._padding_ = lVar7;
    pFVar17[-1]._padding_ = iVar13;
    pFVar17[-1].Value = bVar11;
    *(undefined3 *)&pFVar17[-1].field_0x25 = uVar12;
    goto LAB_147f62cf0;
  }
  lVar4 = pFVar8->_padding_;
  lVar5 = pFVar8->_padding_;
  lVar6 = pFVar8->_padding_;
  lVar7 = pFVar8->_padding_;
  iVar14 = iVar14 + -1;
  iVar13 = pFVar8->_padding_;
  bVar11 = pFVar8->Value;
  uVar12 = *(undefined3 *)&pFVar8->field_0x25;
  pFVar8->_padding_ = pFVar16->_padding_;
  pFVar8->_padding_ = lVar3;
  lVar3 = pFVar17[-1]._padding_;
  pFVar8->_padding_ = pFVar17[-1]._padding_;
  pFVar8->_padding_ = lVar3;
  bVar21 = pFVar17[-1].Value;
  uVar9 = *(undefined3 *)&pFVar17[-1].field_0x25;
  pFVar8->_padding_ = pFVar17[-1]._padding_;
  pFVar8->Value = bVar21;
  *(undefined3 *)&pFVar8->field_0x25 = uVar9;
  pFVar16->_padding_ = lVar4;
  pFVar17[-1]._padding_ = lVar5;
  pFVar17[-1]._padding_ = lVar6;
  pFVar17[-1]._padding_ = lVar7;
  pFVar17[-1]._padding_ = iVar13;
  pFVar17[-1].Value = bVar11;
  *(undefined3 *)&pFVar17[-1].field_0x25 = uVar12;
  if (((longlong)pFVar16 + (-0x28 - (longlong)pFVar8)) / 0x28 <
      ((longlong)pFVar15 - (longlong)pFVar18) / 0x28) {
    if (pFVar18 < pFVar15) {
      *ppFVar20 = pFVar18;
      ppFVar20[1] = pFVar15;
      *(int *)(ppFVar20 + 2) = iVar14;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar16 <= pFVar8 + 1) goto LAB_147f62e98;
    pFVar15 = pFVar17 + -2;
    pFVar18 = pFVar8;
  }
  else {
    if (pFVar8 + 1 < pFVar16) {
      *ppFVar20 = pFVar8;
      ppFVar20[1] = pFVar17 + -2;
      *(int *)(ppFVar20 + 2) = iVar14;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar15 <= pFVar18) goto LAB_147f62e98;
  }
  iVar13 = (int)(((longlong)pFVar15 - (longlong)pFVar18) / 0x28);
  pFVar8 = pFVar18;
  goto joined_r0x000147f62c88;
}

// IsObjectPtrEqual<UMaterialInterface,UMaterialInstance_*,0> @ 147f62fb0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMaterialInterface,UMaterialInstance_*,0>
          (TObjectPtr<UMaterialInterface> *param_1,UMaterialInstance **param_2)

{
  if ((UMaterialInstance *)(param_1->field0_0x0).DebugPtr == (UMaterialInstance *)0x0) {
    return *param_2 == (UMaterialInstance *)0x0;
  }
  return (UMaterialInstance *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// Launch<`FUniformExpressionCacheAsyncUpdater::Update'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&> @ 147f62fd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::
Launch<_FUniformExpressionCacheAsyncUpdater::Update_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>
          (FTaskHandle *this,wchar_t *param_1,<lambda_1> *param_2,FTaskHandle *param_3,
          ETaskPriority param_4,EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *this_00;
  
  if ((this->Pimpl).Reference != (FTaskBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x92,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1__Update_FUniformExpressionCacheAsyncUpdater__QEAAXAEAVFRHICommandListBase___Z_XX_Private_Tasks_UE__6B_
    ;
    FTaskBase::Init(this_00,param_1,param_4,param_5,param_6);
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = (longlong)(param_2->Items).AllocatorInstance.Data;
    (param_2->Items).AllocatorInstance.Data = (FItem *)0x0;
    *(int *)&this_00[1]._padding_ = (param_2->Items).ArrayNum;
    *(int *)((longlong)&this_00[1]._padding_ + 4) = (param_2->Items).ArrayMax;
    (param_2->Items).ArrayNum = 0;
    (param_2->Items).ArrayMax = 0;
    this_00[1]._padding_ = (longlong)param_2->RHICmdList;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1__Update_FUniformExpressionCacheAsyncUpdater__QEAAXAEAVFRHICommandListBase___Z__Private_Tasks_UE__6B_
    ;
  }
  pFVar3 = (param_3->Pimpl).Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    if ((this_00->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this_00->NumLocks))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0xe3,L"Prerequisites can be added only before the task is launched");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    paVar1 = &this_00->NumLocks;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
    UNLOCK();
    if (0x7fffffff < (int)aVar2 + 1U) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrevNumLocks + 1 < ExecutionFlag",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0xea,L"Max number of task prerequisites reached: %d");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar5 = FTaskBase::AddSubsequent(pFVar3,this_00);
    if (bVar5) {
      LOCK();
      pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
      UNLOCK();
      FTaskBase::FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                (&this_00->Prerequisites,pFVar3);
    }
    else {
      LOCK();
      this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + -1);
      UNLOCK();
    }
  }
  pFVar3 = (this->Pimpl).Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  (this->Pimpl).Reference = this_00;
  FTaskBase::TryLaunch(this_00,0x100);
  return;
}

// Launch<`FUniformExpressionCacheAsyncUpdater::Update'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&> @ 147f631c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_FUniformExpressionCacheAsyncUpdater::Update_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>
          (wchar_t *param_1,<lambda_1> *param_2,FTaskHandle *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  Private::FTaskHandle::
  Launch<_FUniformExpressionCacheAsyncUpdater::Update_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>
            ((FTaskHandle *)param_1,(wchar_t *)param_2,(<lambda_1> *)param_3,
             (FTaskHandle *)CONCAT71(in_register_00000089,param_4),param_5,(undefined1)param_6,
             in_stack_00000038);
  return (TTask<void>)param_1;
}

// LowerBoundInternal<TMemoryImagePtr<FMeshMaterialShaderMap>_const_,int,FHashedName,FMaterialShaderMapContent::FProjectMeshShaderMapToKey,TLess<void>_> @ 147f63210

int __cdecl
AlgoImpl::
LowerBoundInternal<TMemoryImagePtr<FMeshMaterialShaderMap>_const_,int,FHashedName,FMaterialShaderMapContent::FProjectMeshShaderMapToKey,TLess<void>_>
          (TMemoryImagePtr<FMeshMaterialShaderMap> *param_1,int param_2,FHashedName *param_3,
          FProjectMeshShaderMapToKey param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  TMemoryImagePtr<FMeshMaterialShaderMap>_u_0 TVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      TVar3 = (TMemoryImagePtr<FMeshMaterialShaderMap>_u_0)param_1[iVar1].field0_0x0.UnfrozenPtr;
      if (((ulonglong)TVar3 & 1) != 0) {
        TVar3.UnfrozenPtr =
             (FMeshMaterialShaderMap *)
             ((longlong)&param_1[iVar1].field0_0x0 + ((longlong)TVar3 >> 0x18));
      }
      if (((TVar3.UnfrozenPtr)->VertexFactoryTypeName).Hash < param_3->Hash) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// Reverse<FShaderPipeline_*> @ 147f633e0

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

void __cdecl AlgoImpl::Reverse<FShaderPipeline_*>(FShaderPipeline **param_1,int param_2)

{
  FShaderPipeline *pFVar1;
  FShaderPipeline **ppFVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppFVar2 = param_1 + (param_2 + -1);
    do {
      pFVar1 = param_1[lVar3];
      param_1[lVar3] = *ppFVar2;
      lVar3 = lVar3 + 1;
      *ppFVar2 = pFVar1;
      ppFVar2 = ppFVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// Reverse<TShaderRefBase<FShader,FShaderMapPointerTable>_> @ 147f63440

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
AlgoImpl::Reverse<TShaderRefBase<FShader,FShaderMapPointerTable>_>
          (TShaderRefBase<FShader,FShaderMapPointerTable> *param_1,int param_2)

{
  FShaderMapBase *pFVar1;
  FShader *pFVar2;
  FShaderMapBase *pFVar3;
  TShaderRefBase<FShader,FShaderMapPointerTable> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pFVar1 = pTVar4->ShaderMap;
      pFVar2 = param_1->ShaderContent;
      pFVar3 = param_1->ShaderMap;
      param_1->ShaderContent = pTVar4->ShaderContent;
      param_1->ShaderMap = pFVar1;
      param_1 = param_1 + 1;
      pTVar4->ShaderContent = pFVar2;
      pTVar4->ShaderMap = pFVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// SerializeMaterialInput<unsigned_int> @ 147f63d40

bool __cdecl
SerializeMaterialInput<unsigned_int>(FArchive *param_1,FMaterialInput<unsigned_int> *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  bool bVar5;
  uint local_res18 [4];
  
  bVar5 = SerializeExpressionInput(param_1,(FExpressionInput *)param_2);
  if (!bVar5) {
    return false;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  bVar5 = param_2->UseConstant;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res18[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res18[0] = (uint)bVar5;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res18[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147f63dd1;
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  bVar5 = uVar2 != 0;
LAB_147f63dd1:
  param_2->UseConstant = 0;
  puVar1 = &param_2->Constant;
  *(uint *)&param_2->field_0x28 = *(uint *)&param_2->field_0x28 | (uint)bVar5;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar4 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) != 0) {
    FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    return true;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
  return true;
}

// StaticEnum<enum_ELWCFunctionKind> @ 147f63e60

UEnum * __cdecl StaticEnum<enum_ELWCFunctionKind>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELWCFunctionKind.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ELWCFunctionKind.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ELWCFunctionKind,(UObject *)pUVar1,
                       L"ELWCFunctionKind");
  }
  return Z_Registration_Info_UEnum_ELWCFunctionKind.OuterSingleton;
}

// StaticGetTypeLayoutDesc<FGuid> @ 147f63ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl StaticGetTypeLayoutDesc<FGuid>(void)

{
  if ((DAT_155215aef & 2) == 0) {
    DAT_155215aef = DAT_155215aef | 3;
    _DAT_155215ae0 = 0x10;
    _DAT_155215a90 = L"FGuid";
    _DAT_155215aa8 = TStaticGetTypeLayoutHelper<FGuid>::CallWriteMemoryImage;
    _DAT_155215ab0 = TStaticGetTypeLayoutHelper<FGuid>::CallUnfrozenCopy;
    _DAT_155215ab8 = TStaticGetTypeLayoutHelper<FGuid>::CallAppendHash;
    _DAT_155215ac0 = TStaticGetTypeLayoutHelper<FGuid>::CallGetTargetAlignment;
    _DAT_155215ac8 = TStaticGetTypeLayoutHelper<FGuid>::CallToString;
    _DAT_155215aa0 = TStaticGetTypeLayoutHelper<FGuid>::CallDestroy;
    _DAT_155215ae8 = 4;
    DAT_155215aec = 0;
    _DAT_155215ae4 = 0x10;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<FGuid>::Do(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayoutDesc<FScriptName> @ 147f63f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl StaticGetTypeLayoutDesc<FScriptName>(void)

{
  if ((DAT_155215a87 & 2) == 0) {
    DAT_155215a87 = DAT_155215a87 | 3;
    _DAT_155215a78 = 0xc;
    _DAT_155215a28 = L"FScriptName";
    _DAT_155215a40 = TStaticGetTypeLayoutHelper<FScriptName>::CallWriteMemoryImage;
    _DAT_155215a48 = TStaticGetTypeLayoutHelper<FScriptName>::CallUnfrozenCopy;
    _DAT_155215a50 = TStaticGetTypeLayoutHelper<FScriptName>::CallAppendHash;
    _DAT_155215a58 = TStaticGetTypeLayoutHelper<FScriptName>::CallGetTargetAlignment;
    _DAT_155215a60 = TStaticGetTypeLayoutHelper<FScriptName>::CallToString;
    _DAT_155215a38 = TStaticGetTypeLayoutHelper<FScriptName>::CallDestroy;
    _DAT_155215a80 = 4;
    DAT_155215a84 = 0;
    _DAT_155215a7c = 0xc;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<FScriptName>::Do(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayoutDesc<TMemoryImagePtr<FMeshMaterialShaderMap>_> @ 147f64000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl StaticGetTypeLayoutDesc<TMemoryImagePtr<FMeshMaterialShaderMap>_>(void)

{
  if ((DAT_15521721f & 2) == 0) {
    DAT_15521721f = DAT_15521721f | 3;
    _DAT_155217210 = 8;
    _DAT_1552171c0 = L"TMemoryImagePtr<T>";
    _DAT_1552171d8 =
         TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallWriteMemoryImage;
    _DAT_1552171e0 =
         TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallUnfrozenCopy;
    _DAT_1552171e8 =
         TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallAppendHash;
    _DAT_1552171f0 =
         TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::
         CallGetTargetAlignment;
    _DAT_1552171f8 =
         TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallToString;
    _DAT_1552171d0 =
         TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::CallDestroy;
    _DAT_155217218 = 8;
    DAT_15521721c = 0;
    _DAT_155217214 = 8;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TMemoryImagePtr<FMeshMaterialShaderMap>_>::Do(void)'
          ::__l2::TypeBuffer;
}

// ~TFunction_OwnedObject<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::__l2::<lambda_1>,1,0> @ 147f67d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FMaterial::ReleaseRenderThreadCompilingShaderMap_::__l2::<lambda_1>,1,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 8) == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  if ((2 < (byte)LogMaterial._0_1_) && (5000 < iVar2 + -1)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  return;
}

// ~TFunction_OwnedObject<`FMaterial::SetGameThreadShaderMap'::__l2::<lambda_1>,1,1> @ 147f67db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::SetGameThreadShaderMap'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FMaterial::SetGameThreadShaderMap_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::SetGameThreadShaderMap'::`2'::<lambda_1>,1,1>::_vftable_;
  if (*(FMaterialShaderMap **)((longlong)this + 0x10) != (FMaterialShaderMap *)0x0) {
    FMaterialShaderMap::Release(*(FMaterialShaderMap **)((longlong)this + 0x10));
  }
  if (*(FMaterial **)((longlong)this + 8) != (FMaterial *)0x0) {
    FMaterial::Release(*(FMaterial **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FMaterial::SetInlineShaderMap'::__l2::<lambda_1>,1,0> @ 147f67df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::SetInlineShaderMap'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FMaterial::SetInlineShaderMap_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::SetInlineShaderMap'::`2'::<lambda_1>,1,0>::_vftable_;
  if (*(FMaterialShaderMap **)((longlong)this + 0x10) != (FMaterialShaderMap *)0x0) {
    FMaterialShaderMap::Release(*(FMaterialShaderMap **)((longlong)this + 0x10));
  }
  if (*(FMaterial **)((longlong)this + 8) != (FMaterial *)0x0) {
    FMaterial::Release(*(FMaterial **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FMaterial::SetShaderMapsOnMaterialResources'::__l2::<lambda_1>,1,1> @ 147f67e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::SetShaderMapsOnMaterialResources'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FMaterial::SetShaderMapsOnMaterialResources_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::SetShaderMapsOnMaterialResources'::`2'::<lambda_1>,1,1>::
        _vftable_;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FMaterial::UpdateInlineShaderMapIsComplete'::__l2::<lambda_1>,1,0> @ 147f67e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::UpdateInlineShaderMapIsComplete'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FMaterial::UpdateInlineShaderMapIsComplete_::__l2::<lambda_1>,1,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::UpdateInlineShaderMapIsComplete'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if (*(longlong *)((longlong)this + 8) == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  if ((2 < (byte)LogMaterial._0_1_) && (5000 < iVar2 + -1)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  return;
}

// ~TFunction_OwnedObject<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::<lambda_1>,1,0> @ 147f67e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FMaterialRenderProxy::CacheUniformExpressions_GameThread_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMaterial::DeleteMaterialsOnRenderThread'::__l5::<lambda_1>,1,0> @ 147f67eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::DeleteMaterialsOnRenderThread'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FMaterial::DeleteMaterialsOnRenderThread_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::DeleteMaterialsOnRenderThread'::`5'::<lambda_1>,1,0>::
        _vftable_;
  DestructItems<TRefCountPtr<FMaterial>,int>
            (*(TRefCountPtr<FMaterial> **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FMaterial::DeferredDelete'::__l8::<lambda_1>,1,0> @ 147f67ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::DeferredDelete'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FMaterial::DeferredDelete_::__l8::<lambda_1>,1,0>(void *this)

{
  int *piVar1;
  int iVar2;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::DeferredDelete'::`8'::<lambda_1>,1,0>::_vftable_;
  if (*(longlong *)((longlong)this + 8) == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  if ((2 < (byte)LogMaterial._0_1_) && (5000 < iVar2 + -1)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  return;
}

// ~TFunction_OwnedObject<`FMaterial::ReleaseShaderMap'::__l27::<lambda_1>,1,0> @ 147f67f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::ReleaseShaderMap'::__l27::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FMaterial::ReleaseShaderMap_::__l27::<lambda_1>,1,0>(void *this)

{
  int *piVar1;
  int iVar2;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::ReleaseShaderMap'::`27'::<lambda_1>,1,0>::_vftable_;
  if (*(longlong *)((longlong)this + 8) == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  if ((2 < (byte)LogMaterial._0_1_) && (5000 < iVar2 + -1)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  return;
}

// ~TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l2::<lambda_2>,0,1> @ 147f67f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l2::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FMaterialUpdateContext::~FMaterialUpdateContext_::__l2::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::`2'::<lambda_2>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l29::<lambda_3>,1,0> @ 147f67f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l29::<lambda_3>,1,0>::
~TFunction_OwnedObject<_FMaterialUpdateContext::~FMaterialUpdateContext_::__l29::<lambda_3>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::`29'::<lambda_3>,1,0>
        ::_vftable_;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,`DumpMaterialStats'::__l2::FMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147f685f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,`DumpMaterialStats'::__l2::FMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,_DumpMaterialStats_::__l2::FMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator<< @ 147f6a360

FArchive * __cdecl operator<<(FArchive *param_1,FLegacyTextureLookup *param_2)

{
  FLegacyTextureLookup::Serialize(param_2,param_1);
  return param_1;
}

// operator<< @ 147f6a390

FArchive * __cdecl operator<<(FArchive *param_1,FMaterialResourceLocOnDisk *param_2)

{
  uint *puVar1;
  uchar *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Offset);
    }
  }
  else {
    param_2->Offset = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FeatureLevel,1);
  }
  else {
    param_2->FeatureLevel = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->QualityLevel = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->QualityLevel,1);
  return param_1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 147f6c670

/* [thunk]:public: virtual void * __ptr64 __cdecl FMaterialShaderMap::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
FMaterialShaderMap::_vector_deleting_destructor__adjustor_64__
          (FMaterialShaderMap *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMaterialShaderMap *)&this[-1].UniformBufferLayout,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147f6c680

void * __thiscall
IBaseDelegateInstance<FString___cdecl(enum_EMaterialShadingModel),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c6b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FShaderMapResource_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FShaderMapResource_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c6e0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(enum_EMaterialShadingModel),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FShaderMapResource_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FShaderMapResource_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c740

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(enum_EMaterialShadingModel),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c770

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FShaderMapResource_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FShaderMapResource_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c7a0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FUniformExpressionCacheAsyncUpdater::Update'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c810

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c870

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FUniformExpressionCacheAsyncUpdater::Update'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c8b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if (*(FMaterial **)((longlong)this + 8) != (FMaterial *)0x0) {
    FMaterial::Release(*(FMaterial **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::SetGameThreadShaderMap'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::SetGameThreadShaderMap'::`2'::<lambda_1>,1,1>::_vftable_;
  if (*(FMaterialShaderMap **)((longlong)this + 0x10) != (FMaterialShaderMap *)0x0) {
    FMaterialShaderMap::Release(*(FMaterialShaderMap **)((longlong)this + 0x10));
  }
  if (*(FMaterial **)((longlong)this + 8) != (FMaterial *)0x0) {
    FMaterial::Release(*(FMaterial **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6c9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::SetInlineShaderMap'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::SetInlineShaderMap'::`2'::<lambda_1>,1,0>::_vftable_;
  if (*(FMaterialShaderMap **)((longlong)this + 0x10) != (FMaterialShaderMap *)0x0) {
    FMaterialShaderMap::Release(*(FMaterialShaderMap **)((longlong)this + 0x10));
  }
  if (*(FMaterial **)((longlong)this + 8) != (FMaterial *)0x0) {
    FMaterial::Release(*(FMaterial **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6ca00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::SetShaderMapsOnMaterialResources'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::SetShaderMapsOnMaterialResources'::`2'::<lambda_1>,1,1>::
        _vftable_;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6ca70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::UpdateInlineShaderMapIsComplete'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::UpdateInlineShaderMapIsComplete'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if (*(FMaterial **)((longlong)this + 8) != (FMaterial *)0x0) {
    FMaterial::Release(*(FMaterial **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cb00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::DeleteMaterialsOnRenderThread'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::DeleteMaterialsOnRenderThread'::`5'::<lambda_1>,1,0>::
        _vftable_;
  DestructItems<TRefCountPtr<FMaterial>,int>
            (*(TRefCountPtr<FMaterial> **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::DeferredDelete'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::DeferredDelete'::`8'::<lambda_1>,1,0>::_vftable_;
  if (*(FMaterial **)((longlong)this + 8) != (FMaterial *)0x0) {
    FMaterial::Release(*(FMaterial **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterial::ReleaseShaderMap'::__l27::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterial::ReleaseShaderMap'::`27'::<lambda_1>,1,0>::_vftable_;
  if (*(FMaterial **)((longlong)this + 8) != (FMaterial *)0x0) {
    FMaterial::Release(*(FMaterial **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cc00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l2::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::`2'::<lambda_2>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cc40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l29::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::`29'::<lambda_3>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cc80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TShaderMap<FMaterialShaderMapContent,FShaderMapPointerTable>::_scalar_deleting_destructor_
          (TShaderMap<FMaterialShaderMapContent,FShaderMapPointerTable> *this,uint param_1)

{
  FShaderMapBase::~FShaderMapBase((FShaderMapBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6ccc0

void * __thiscall
FColoredMaterialRenderProxy::_scalar_deleting_destructor_
          (FColoredMaterialRenderProxy *this,uint param_1)

{
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cd00

void * __thiscall
FColoredTexturedMaterialRenderProxy::_scalar_deleting_destructor_
          (FColoredTexturedMaterialRenderProxy *this,uint param_1)

{
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cd40

void * __thiscall
FLightingDensityMaterialRenderProxy::_scalar_deleting_destructor_
          (FLightingDensityMaterialRenderProxy *this,uint param_1)

{
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cd80

void * __thiscall
FMaterialRenderProxy::_scalar_deleting_destructor_(FMaterialRenderProxy *this,uint param_1)

{
  ~FMaterialRenderProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cdc0

void * __thiscall
FMaterialResourceMemoryWriter::_scalar_deleting_destructor_
          (FMaterialResourceMemoryWriter *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMaterialResourceMemoryWriter__6B_;
  SerializeToParentArchive(this);
  *(undefined4 *)&(this->Name2Indices).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Name2Indices).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Name2Indices);
  pFVar2 = (this->Locs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6ce60

void * __thiscall
FMaterialResourceProxyReader::_scalar_deleting_destructor_
          (FMaterialResourceProxyReader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  
  this->_padding_ = (longlong)&___7FMaterialResourceProxyReader__6B_;
  if (this->OffsetToEnd != -1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x1b8))();
  }
  pFVar1 = (this->Names).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  puVar2 = (undefined8 *)this->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cef0

void * __thiscall
FMaterialShaderMap::_scalar_deleting_destructor_(FMaterialShaderMap *this,uint param_1)

{
  ~FMaterialShaderMap(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cf30

void * __thiscall
FOverrideSelectionColorMaterialRenderProxy::_scalar_deleting_destructor_
          (FOverrideSelectionColorMaterialRenderProxy *this,uint param_1)

{
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f6cf70

void * __thiscall
UMaterialParameterCollection::_scalar_deleting_destructor_
          (UMaterialParameterCollection *this,uint param_1)

{
  FShaderParametersMetadata *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7UMaterialParameterCollection__6B_;
  pFVar1 = (this->UniformBufferStruct).Ptr;
  if (pFVar1 != (FShaderParametersMetadata *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  *(undefined4 *)&(this->VectorParameterBaseOverrides).field_0x48 = 0;
  pvVar2 = *(void **)&(this->VectorParameterBaseOverrides).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VectorParameterBaseOverrides);
  *(undefined4 *)&(this->ScalarParameterBaseOverrides).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ScalarParameterBaseOverrides).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalarParameterBaseOverrides);
  pFVar3 = (this->VectorParameters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ScalarParameters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// AcquireMaterialShaderMapLayout @ 147f6d460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialShaderMapLayout * __cdecl
AcquireMaterialShaderMapLayout
          (EShaderPlatform param_1,EShaderPermutationFlags param_2,
          FMaterialShaderParameters *param_3)

{
  FMaterialShaderMapLayout *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapHashTable.HashSize = 0x400;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapHashTable.HashMask = 0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapLayouts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapHashTable.Hash = FHashTable::EmptyHash;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapLayouts.ArrayNum = 0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapLayouts.ArrayMax = 0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.LayoutLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.MaterialShaderParameters.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.MaterialShaderParameters.ArrayNum = 0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.MaterialShaderParameters.ArrayMax = 0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.MaterialParameterHashes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.MaterialParameterHashes.ArrayNum = 0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.MaterialParameterHashes.ArrayMax = 0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapHashTable.IndexSize = 0;
      `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapHashTable.NextIndex = (uint *)0x0;
      atexit(`FMaterialShaderMapLayoutCache::Get'::__l2::_dynamic_atexit_destructor_for__Instance__)
      ;
      _Init_thread_footer(&`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = FMaterialShaderMapLayoutCache::AcquireLayout
                     (&`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                       ::__l2::Instance,param_1,param_2,param_3);
  return pFVar1;
}

// AddSortedShader @ 147f6d940

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
AddSortedShader(TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *param_1,FShaderType *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FHashedName local_res8;
  FShaderType *local_res10;
  
  iVar6 = 0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar7 = param_1->ArrayNum;
  local_res10 = param_2;
  if (0 < (int)uVar7) {
    do {
      iVar5 = (uVar7 >> 1) + iVar6;
      FHashedName::FHashedName
                (&local_res8,(FHashedName *)(*(longlong *)(pFVar1 + (longlong)iVar5 * 8) + 0x28));
      if (local_res8.Hash < (param_2->HashedName).Hash) {
        iVar6 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
  }
  if (iVar6 < param_1->ArrayNum) {
    if ((iVar6 < 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(FShaderType **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) == local_res10) {
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 8;
  memmove(pFVar1 + 8,pFVar1,(longlong)(iVar5 - iVar6) << 3);
  *(FShaderType **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10;
  return;
}

// AddSortedShaderPipeline @ 147f6db00

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
AddSortedShaderPipeline
          (TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FShaderPipelineType *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FHashedName local_res8;
  FShaderPipelineType *local_res10;
  
  iVar6 = 0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar7 = param_1->ArrayNum;
  local_res10 = param_2;
  if (0 < (int)uVar7) {
    do {
      iVar5 = (uVar7 >> 1) + iVar6;
      FHashedName::FHashedName
                (&local_res8,(FHashedName *)(*(longlong *)(pFVar1 + (longlong)iVar5 * 8) + 0x10));
      if (local_res8.Hash < (param_2->HashedName).Hash) {
        iVar6 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
  }
  if (iVar6 < param_1->ArrayNum) {
    if ((iVar6 < 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(FShaderPipelineType **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) ==
        local_res10) {
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 8;
  memmove(pFVar1 + 8,pFVar1,(longlong)(iVar5 - iVar6) << 3);
  *(FShaderPipelineType **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10;
  return;
}

// AllowDitheredLODTransition @ 147f6e120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl AllowDitheredLODTransition(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel == ES3_1) {
    return FReadOnlyCVARCache::bMobileAllowDitheredLODTransitionValue != false;
  }
  return true;
}

// AllowDitheredLODTransition @ 147f6e1a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl AllowDitheredLODTransition(Type param_1)

{
  bool bVar1;
  
  if (param_1 == Num) {
    bVar1 = AllowDitheredLODTransition(SP_NumPlatforms);
    return bVar1;
  }
  bVar1 = AllowDitheredLODTransition(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1]);
  return bVar1;
}

// DumpMaterialStats @ 147f75500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __cdecl DumpMaterialStats(EShaderPlatform param_1)

{
  int iVar1;
  FMaterialShaderMap *this;
  code *pcVar2;
  undefined8 uVar3;
  TSet<TTuple<FString,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FString,FShaderPipeline_*,1>,FDefaultSetAllocator>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FDateTime this_00;
  FString *pFVar10;
  IFileManager *pIVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  TShaderRefBase<FShader,FShaderMapPointerTable> *pTVar23;
  undefined1 *puVar24;
  ForElementType<FSetElementId> FVar25;
  longlong *plVar26;
  longlong *plVar27;
  undefined1 auStack_408 [32];
  FScriptContainerElement *local_3e8;
  FScriptContainerElement *local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  undefined1 local_3b8;
  undefined1 local_3b7;
  undefined1 local_3b6 [6];
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  ForAnyElementType local_3a0;
  undefined8 local_398;
  FString local_390;
  FDiagnosticTableWriterCSV local_380;
  undefined2 local_368;
  FString local_360;
  uint local_350;
  int local_348;
  byte local_344;
  longlong *local_340;
  ulonglong local_338;
  uint local_330;
  longlong local_328;
  TBaseKeyIterator<0> local_320;
  longlong *local_308;
  undefined1 auStack_300 [16];
  uint uStack_2f0;
  uint uStack_2ec;
  int local_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  TSet<TTuple<FString,_void___cdecl_DumpMaterialStats(EShaderPlatform)_::_2_::FMaterialInfo>,TDefaultMapHashableKeyFuncs<FString,_void___cdecl_DumpMaterialStats(EShaderPlatform)_::_2_::FMaterialInfo,0>,FDefaultSetAllocator>
  *local_2d8;
  undefined2 local_2d0;
  TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedDefaultAllocator<32>_> local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b8;
  undefined1 local_298 [4];
  int local_294;
  TPairInitializer<FString_const_&,FShaderPipeline_*_&&> local_290;
  longlong local_280;
  FString local_278;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  FString *local_238;
  int *local_230;
  FString *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong lStack_210;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  int local_1f0;
  undefined4 uStack_1ec;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  longlong *local_1b0;
  longlong lStack_1a8;
  undefined1 local_1a0 [16];
  int local_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined1 local_178 [32];
  undefined1 *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  void *local_138;
  undefined4 local_130;
  TSet<TTuple<FString,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FString,FShaderPipeline_*,1>,FDefaultSetAllocator>
  local_128;
  undefined1 local_d8 [64];
  undefined1 *local_98;
  int local_90;
  TSet<TTuple<FString,_void___cdecl_DumpMaterialStats(EShaderPlatform)_::_2_::FMaterialInfo>,TDefaultMapHashableKeyFuncs<FString,_void___cdecl_DumpMaterialStats(EShaderPlatform)_::_2_::FMaterialInfo,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_408;
  this_00 = FDateTime::Now();
  pFVar10 = FDateTime::ToString((FDateTime *)this_00.Ticks,&local_1d8);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FPaths::ProjectDir(&local_1e8);
  local_3e8 = (FScriptContainerElement *)pwVar19;
  FString::PrintfImpl(&local_278,L"%sLogs/%s-%s.csv");
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_278.Data.ArrayNum != 0) {
    FVar20.Data = local_278.Data.AllocatorInstance.Data;
  }
  pIVar11 = IFileManager::Get();
  local_380.OutputStream =
       (FArchive *)(**(code **)((longlong)*pIVar11 + 0x28))(pIVar11,FVar20.Data,0);
  local_380.CurrentRow.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.CurrentRow.Data.ArrayNum = 0;
  local_380.CurrentRow.Data.ArrayMax = 0;
  local_368 = 0;
  FString::FString(&local_360,(wchar_t *)FVar20.Data);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_d8._32_8_ = 0;
  local_d8._40_4_ = 0;
  local_d8._44_4_ = 0x80;
  local_d8._48_4_ = 0xffffffff;
  local_d8._52_4_ = 0;
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  local_128.Elements._0_8_ = 0;
  local_128.Elements._8_8_ = 0;
  local_128.Elements._32_8_ = 0;
  local_128.Elements._40_4_ = 0;
  local_128.Elements._44_4_ = 0x80;
  local_128.Elements._48_4_ = 0xffffffff;
  local_128.Elements._52_4_ = 0;
  local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.HashSize = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::AllMaterialShaderMapsGuard);
  local_350 = 0;
  if (0 < FMaterialShaderMap::AllMaterialShaderMaps.ArrayNum) {
    local_328 = 0;
    do {
      lVar14 = local_328;
      uVar6 = 0;
      uVar22 = uVar6;
      if ((int)local_350 < FMaterialShaderMap::AllMaterialShaderMaps.ArrayNum) {
        uVar22 = ~local_350 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_3e0 = (FScriptContainerElement *)
                    (longlong)FMaterialShaderMap::AllMaterialShaderMaps.ArrayNum;
        local_3e8 = (FScriptContainerElement *)(longlong)(int)local_350;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this = *(FMaterialShaderMap **)
              (FMaterialShaderMap::AllMaterialShaderMaps.AllocatorInstance.Data + lVar14);
      local_178._0_8_ = 0;
      local_178._8_8_ = 0;
      local_158 = (undefined1 *)0x0;
      local_150 = 0;
      local_14c = 0x80;
      local_148 = 0xffffffff;
      local_144 = 0;
      local_138 = (void *)0x0;
      local_130 = 0;
      local_340 = (longlong *)0x0;
      local_338 = 0;
      FMaterialShaderMap::GetShaderList
                (this,(TMap<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
                       *)local_178);
      (**(code **)(this->_padding_ + 0x10))(this,&local_340);
      plVar26 = (longlong *)this->_padding_;
      local_348 = 0;
      FString::FString(&local_390,L"");
      if ((local_390.Data.ArrayNum < 2) && (plVar26 != (longlong *)0x0)) {
        local_290.Value = (FShaderPipeline **)plVar26[1];
        pFVar10 = FName::ToString((FName *)&local_290.Value,&local_1c8);
        if (&local_390 != pFVar10) {
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
          local_390.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_390.Data.ArrayNum = (pFVar10->Data).ArrayNum;
          local_390.Data.ArrayMax = (pFVar10->Data).ArrayMax;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        lVar14 = this->_padding_;
        local_348 = (**(code **)(*plVar26 + 0x70))(plVar26);
        local_348 = local_348 + (int)lVar14;
        local_344 = (byte)((uint)(int)plVar26[0xd] >> 0x1f);
      }
      if (local_390.Data.ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        uVar6 = local_390.Data.ArrayNum - 1;
        pwVar19 = (wchar_t *)local_390.Data.AllocatorInstance.Data;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar19);
      iVar7 = TSet<TTuple<FString,`DumpMaterialStats'::__l2::FMaterialInfo>,TDefaultMapHashableKeyFuncs<FString,`DumpMaterialStats'::__l2::FMaterialInfo,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(&local_88,uVar6,&local_390);
      if ((iVar7 == -1) || ((longlong)iVar7 * 0x20 + local_88.Elements._0_8_ == 0)) {
        local_238 = &local_390;
        local_3e8 = (FScriptContainerElement *)0x0;
        local_230 = &local_348;
        TSet<TTuple<FString,`DumpMaterialStats'::__l2::FMaterialInfo>,TDefaultMapHashableKeyFuncs<FString,`DumpMaterialStats'::__l2::FMaterialInfo,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<FString_const_&,_DumpMaterialStats_::__l2::FMaterialInfo_const_&>_>
                  (&local_88,(uint)local_298,
                   (TPairInitializer<FString_const_&,_void___cdecl_DumpMaterialStats(EShaderPlatform)_::_2_::FMaterialInfo_const_&>
                    *)(ulonglong)uVar6,(bool *)&local_238);
      }
      local_2b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
      local_2b8._padding_._0_4_ = 0;
      local_2b8._padding_._4_4_ = 1;
      local_2b8.UnvisitedBitMask = 0xffffffff;
      local_2b8.CurrentBitIndex = 0;
      local_2b8.BaseBitIndex = 0;
      if (local_150 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2b8);
      }
      uVar22 = local_150;
      TStack_260._padding_ = CONCAT44(local_2b8._padding_._4_4_,(undefined4)local_2b8._padding_);
      local_268 = (longlong *)local_178;
      TStack_260.CurrentBitIndex = local_2b8.CurrentBitIndex;
      TStack_260.UnvisitedBitMask = local_2b8.UnvisitedBitMask;
      TStack_260._28_4_ = local_2b8._28_4_;
      TStack_260.BaseBitIndex = local_2b8.BaseBitIndex;
      local_1f0 = local_178._8_4_ - local_144;
      pTStack_208 = local_2b8.Array;
      uVar6 = local_150 & 0xffffffe0;
      iVar7 = (int)local_150 >> 5;
      bVar13 = (byte)local_150;
      uStack_240 = CONCAT44(uStack_1ec,local_1f0);
      TStack_260.Array = local_2b8.Array;
      local_218 = local_268;
      lStack_210 = TStack_260._padding_;
      uStack_200 = TStack_260._16_8_;
      uStack_1f8 = TStack_260._24_8_;
      if (((int)local_150 < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar22 != local_150) {
        puVar24 = local_178 + 0x10;
        if (local_158 != (undefined1 *)0x0) {
          puVar24 = local_158;
        }
        uVar22 = -1 << (bVar13 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar7 * 4);
        while (uVar22 == 0) {
          lVar14 = (longlong)iVar7;
          uVar6 = uVar6 + 0x20;
          iVar7 = iVar7 + 1;
          uVar22 = local_150;
          if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
          goto LAB_147f75a83;
          uVar22 = *(uint *)(puVar24 + lVar14 * 4 + 4);
        }
        uVar16 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_294 = (int)lVar14;
        uVar22 = local_294 + -1 + uVar6;
        if ((int)local_150 < (int)uVar22) {
          uVar22 = local_150;
        }
      }
LAB_147f75a83:
      while( true ) {
        plVar26 = local_268;
        if ((int)local_268[1] - *(int *)((longlong)local_268 + 0x34) != (int)uStack_240) {
          local_3b8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3b8);
        }
        if (((TStack_260.CurrentBitIndex == uVar22) &&
            (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
           (plVar26 == (longlong *)local_178)) break;
        TMultiMap<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>_>
        ::EmplaceUnique<FString_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_const_&>
                  ((TMultiMap<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>_>
                    *)local_d8,&local_390,
                   (TShaderRefBase<FShader,FShaderMapPointerTable> *)
                   (*plVar26 + 0x38 + (longlong)TStack_260.CurrentBitIndex * 0x50));
        TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
      }
      uVar12 = (ulonglong)(int)(uint)local_338;
      plVar27 = local_340 + uVar12 * 2;
      local_330 = (uint)local_338;
      uVar16 = uVar12;
      plVar26 = local_340;
      while( true ) {
        if ((int)uVar12 != (int)uVar16) {
          local_3b7 = 0;
          `TCheckedPointerIterator<FShaderPipelineRef,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_3b7);
        }
        if (plVar26 == plVar27) break;
        FShaderPipeline::GetShaders
                  ((FShaderPipeline *)*plVar26,&local_2c8,(FShaderMapBase *)plVar26[1]);
        iVar7 = local_2c8.ArrayNum;
        pTVar23 = (TShaderRefBase<FShader,FShaderMapPointerTable> *)
                  (local_2c8.AllocatorInstance.Data + (longlong)iVar7 * 0x10);
        FVar20.Data = local_2c8.AllocatorInstance.Data;
        while( true ) {
          if (local_2c8.ArrayNum != iVar7) {
            local_3b6[0] = 0;
            `TCheckedPointerIterator<TShaderRefBase<FShader,FShaderMapPointerTable>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_3b6);
          }
          if ((TShaderRefBase<FShader,FShaderMapPointerTable> *)FVar20.Data == pTVar23) break;
          TMultiMap<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>_>
          ::EmplaceUnique<FString_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_const_&>
                    ((TMultiMap<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>_>
                      *)local_d8,&local_390,
                     (TShaderRefBase<FShader,FShaderMapPointerTable> *)FVar20.Data);
          FVar20.Data = FVar20.Data + 0x10;
        }
        if ((TShaderRefBase<FShader,FShaderMapPointerTable> *)local_2c8.AllocatorInstance.Data !=
            (TShaderRefBase<FShader,FShaderMapPointerTable> *)0x0) {
          FMemory::Free(local_2c8.AllocatorInstance.Data);
        }
        lVar14 = *plVar26;
        local_280 = lVar14;
        TSet<TTuple<FString,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FString,FShaderPipeline_*,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<0>::TBaseKeyIterator<0>(&local_320,&local_128,&local_390);
        pFVar10 = local_320.Key;
        pTVar4 = local_320.Set;
        iVar7 = local_320.NextIndex;
        if (local_320.Index != -1) {
LAB_147f75bf0:
          plVar18 = (longlong *)
                    (*(longlong *)&pTVar4->Elements + 0x10 + (longlong)local_320.Index * 0x20);
          if (*plVar18 == lVar14) {
            if (plVar18 != (longlong *)0x0) goto LAB_147f75c95;
          }
          else {
            iVar9 = iVar7;
            local_320.Index = iVar7;
            if (iVar7 != -1) {
              do {
                iVar8 = (pFVar10->Data).ArrayNum;
                puVar15 = (undefined8 *)((longlong)iVar9 * 0x20 + *(longlong *)&pTVar4->Elements);
                iVar1 = *(int *)(puVar15 + 1);
                iVar7 = *(int *)(puVar15 + 3);
                local_320.NextIndex = iVar7;
                if (iVar1 == iVar8) {
                  if (iVar1 < 2) goto LAB_147f75c52;
                  iVar8 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)*puVar15,
                                     (wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
                  bVar5 = iVar8 == 0;
                }
                else {
                  bVar5 = iVar8 + iVar1 == 1;
                }
                if ((bVar5) || (iVar9 = iVar7, iVar7 == -1)) goto LAB_147f75c52;
              } while( true );
            }
          }
        }
LAB_147f75c61:
        local_228 = &local_390;
        local_220 = &local_280;
        TSet<TTuple<FString,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FString,FShaderPipeline_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FShaderPipeline_*_&&>_>
                  (&local_128,&local_290,(bool *)&local_228);
LAB_147f75c95:
        uVar12 = local_338 & 0xffffffff;
        plVar26 = plVar26 + 2;
        uVar16 = (ulonglong)local_330;
      }
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
      if (local_340 != (longlong *)0x0) {
        FMemory::Free(local_340);
      }
      local_130 = 0;
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_178);
      local_350 = local_350 + 1;
      local_328 = local_328 + 8;
    } while ((int)local_350 < FMaterialShaderMap::AllMaterialShaderMaps.ArrayNum);
  }
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"Name");
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"Shaders");
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"Code Size");
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"Used For Rendering");
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"Pipelines");
  if ((local_380.OutputStream == (FArchive *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("OutputStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                         ,0x47,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::LogfImpl(local_380.OutputStream,L"%s");
  FString::Empty(&local_380.CurrentRow);
  TSet<TTuple<FString,`DumpMaterialStats'::__l2::FMaterialInfo>,TDefaultMapHashableKeyFuncs<FString,`DumpMaterialStats'::__l2::FMaterialInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator(&local_1b0,&local_88);
  local_2d8 = &local_88;
  local_2d0 = 0;
  local_2e8 = local_190;
  uStack_2e4 = uStack_18c;
  uStack_2e0 = uStack_188;
  local_308 = local_1b0;
  auStack_300._0_8_ = lStack_1a8;
  stack0xfffffffffffffd08 = local_1a0;
  uVar16 = local_1a0._8_8_ >> 0x20;
  if (local_1a0._12_4_ < *(int *)(local_1a0._0_8_ + 0x18)) {
    do {
      local_3a0.Data = (FScriptContainerElement *)0x0;
      local_398 = 0;
      puVar15 = (undefined8 *)((longlong)(int)uVar16 * 0x20 + *local_308);
      if (local_90 != 0) {
        if (*(int *)(puVar15 + 1) == 0) {
          pwVar19 = L"";
          iVar7 = 0;
        }
        else {
          pwVar19 = (wchar_t *)*puVar15;
          iVar7 = *(int *)(puVar15 + 1) + -1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar19);
        puVar24 = local_d8 + 0x38;
        if (local_98 != (undefined1 *)0x0) {
          puVar24 = local_98;
        }
        iVar7 = *(int *)(puVar24 + (longlong)(int)(local_90 - 1U & uVar6) * 4);
        iVar9 = iVar7;
        if (iVar7 != -1) {
          do {
            iVar7 = *(int *)(local_d8._0_8_ + 0x20 + (longlong)iVar9 * 0x28);
            puVar17 = (undefined8 *)(local_d8._0_8_ + (longlong)iVar9 * 0x28);
            iVar8 = *(int *)(puVar17 + 1);
            if (iVar8 == *(int *)(puVar15 + 1)) {
              if (iVar8 < 2) break;
              iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar17,(wchar_t *)*puVar15);
              bVar5 = iVar8 == 0;
            }
            else {
              bVar5 = iVar8 + *(int *)(puVar15 + 1) == 1;
            }
            if ((bVar5) || (iVar9 = iVar7, iVar7 == -1)) break;
          } while( true );
        }
        if (iVar9 != -1) {
LAB_147f75f00:
          pFVar21 = (FScriptContainerElement *)(local_d8._0_8_ + ((longlong)iVar9 * 5 + 2) * 8);
          if (local_3a0.Data <= pFVar21) {
            if (pFVar21 < local_3a0.Data + (longlong)local_398._4_4_ * 0x10) {
              local_3d0 = (longlong)(int)local_398;
              local_3c8 = 0x10;
              local_3e0 = local_3a0.Data;
              local_3e8 = pFVar21;
              local_3d8 = (longlong)local_398._4_4_;
              bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
          }
          iVar9 = (int)local_398;
          if ((int)local_398 == local_398._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_3a0,(int *)((longlong)&local_398 + 4));
          }
          local_398 = CONCAT44(local_398._4_4_,iVar9 + 1);
          uVar3 = *(undefined8 *)(pFVar21 + 8);
          *(undefined8 *)(local_3a0.Data + (longlong)iVar9 * 0x10) = *(undefined8 *)pFVar21;
          *(undefined8 *)(local_3a0.Data + (longlong)iVar9 * 0x10 + 8) = uVar3;
          iVar9 = iVar7;
          if (iVar7 != -1) {
            do {
              iVar7 = *(int *)(local_d8._0_8_ + 0x20 + (longlong)iVar9 * 0x28);
              puVar17 = (undefined8 *)(local_d8._0_8_ + (longlong)iVar9 * 0x28);
              iVar8 = *(int *)(puVar17 + 1);
              if (iVar8 == *(int *)(puVar15 + 1)) {
                if (iVar8 < 2) goto LAB_147f76007;
                iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar17,(wchar_t *)*puVar15);
                bVar5 = iVar8 == 0;
              }
              else {
                bVar5 = iVar8 + *(int *)(puVar15 + 1) == 1;
              }
              if ((bVar5) || (iVar9 = iVar7, iVar7 == -1)) goto LAB_147f76007;
            } while( true );
          }
        }
      }
LAB_147f76012:
      local_3b0.Data = (FScriptContainerElement *)0x0;
      local_3a8 = 0;
      puVar15 = (undefined8 *)((longlong)(int)uStack_2ec * 0x20 + *local_308);
      if (local_128.HashSize != 0) {
        if (*(int *)(puVar15 + 1) == 0) {
          pwVar19 = L"";
          iVar7 = 0;
        }
        else {
          pwVar19 = (wchar_t *)*puVar15;
          iVar7 = *(int *)(puVar15 + 1) + -1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar19);
        FVar25 = (ForElementType<FSetElementId>)&local_128.Hash;
        if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_128.Hash.SecondaryData;
        }
        iVar7 = *(int *)((longlong)FVar25 + (longlong)(int)(local_128.HashSize - 1U & uVar6) * 4);
        iVar9 = iVar7;
        if (iVar7 != -1) {
          do {
            puVar17 = (undefined8 *)((longlong)iVar9 * 0x20 + local_128.Elements._0_8_);
            iVar8 = *(int *)(puVar17 + 1);
            iVar7 = *(int *)(puVar17 + 3);
            if (iVar8 == *(int *)(puVar15 + 1)) {
              if (iVar8 < 2) break;
              iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar17,(wchar_t *)*puVar15);
              bVar5 = iVar8 == 0;
            }
            else {
              bVar5 = iVar8 + *(int *)(puVar15 + 1) == 1;
            }
            if ((bVar5) || (iVar9 = iVar7, iVar7 == -1)) break;
          } while( true );
        }
        if (iVar9 != -1) {
LAB_147f760e0:
          pFVar21 = (FScriptContainerElement *)
                    (local_128.Elements._0_8_ + 0x10 + (longlong)iVar9 * 0x20);
          if (local_3b0.Data <= pFVar21) {
            if (pFVar21 < local_3b0.Data + (longlong)local_3a8._4_4_ * 8) {
              local_3d0 = (longlong)(int)local_3a8;
              local_3c8 = 8;
              local_3e0 = local_3b0.Data;
              local_3e8 = pFVar21;
              local_3d8 = (longlong)local_3a8._4_4_;
              bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
          }
          iVar9 = (int)local_3a8;
          if ((int)local_3a8 == local_3a8._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_3b0,(int *)((longlong)&local_3a8 + 4));
          }
          local_3a8 = CONCAT44(local_3a8._4_4_,iVar9 + 1);
          *(undefined8 *)(local_3b0.Data + (longlong)iVar9 * 8) = *(undefined8 *)pFVar21;
          iVar9 = iVar7;
          if (iVar7 != -1) {
            do {
              puVar17 = (undefined8 *)((longlong)iVar9 * 0x20 + local_128.Elements._0_8_);
              iVar8 = *(int *)(puVar17 + 1);
              iVar7 = *(int *)(puVar17 + 3);
              if (iVar8 == *(int *)(puVar15 + 1)) {
                if (iVar8 < 2) goto LAB_147f761d7;
                iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar17,(wchar_t *)*puVar15);
                bVar5 = iVar8 == 0;
              }
              else {
                bVar5 = iVar8 + *(int *)(puVar15 + 1) == 1;
              }
              if ((bVar5) || (iVar9 = iVar7, iVar7 == -1)) goto LAB_147f761d7;
            } while( true );
          }
        }
      }
LAB_147f761e2:
      puVar15 = (undefined8 *)((longlong)(int)uStack_2ec * 0x20 + *local_308);
      if (*(int *)(puVar15 + 1) == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)*puVar15;
      }
      FDiagnosticTableWriterCSV::AddColumn(&local_380,pwVar19);
      FDiagnosticTableWriterCSV::AddColumn(&local_380,L"%u");
      FDiagnosticTableWriterCSV::AddColumn(&local_380,L"%u");
      FDiagnosticTableWriterCSV::AddColumn(&local_380,L"%u");
      FDiagnosticTableWriterCSV::AddColumn(&local_380,L"%u");
      if ((local_380.OutputStream == (FArchive *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("OutputStream",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                             ,0x47,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FArchive::LogfImpl(local_380.OutputStream,L"%s");
      FString::Empty(&local_380.CurrentRow);
      if (local_3b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data);
      }
      if (local_3a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data);
      }
      uStack_2f0 = uStack_2f0 & ~auStack_300._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_300);
      uVar16 = (ulonglong)uStack_2ec;
    } while ((int)uStack_2ec < *(int *)(auStack_300._8_8_ + 0x18));
    if (((char)local_2d0 != '\0') && (local_2d0._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_2d8->Elements).field_0x8 - *(int *)&(local_2d8->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar7 = 1;
      }
      else {
        uVar16 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_290.Key._4_4_ = (undefined4)lVar14;
        iVar7 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_2d8->HashSize < iVar7)) || (iVar7 < local_2d8->HashSize)) {
        local_2d8->HashSize = iVar7;
        TSet<TTuple<FString,`DumpMaterialStats'::__l2::FMaterialInfo>,TDefaultMapHashableKeyFuncs<FString,`DumpMaterialStats'::__l2::FMaterialInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_2d8);
      }
    }
  }
  if ((local_380.OutputStream == (FArchive *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("OutputStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                         ,0x47,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::LogfImpl(local_380.OutputStream,L"%s");
  FString::Empty(&local_380.CurrentRow);
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"Total");
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"%u");
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"%u");
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"%u");
  FDiagnosticTableWriterCSV::AddColumn(&local_380,L"%u");
  if ((local_380.OutputStream == (FArchive *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("OutputStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                         ,0x47,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FArchive::LogfImpl(local_380.OutputStream,L"%s");
  FString::Empty(&local_380.CurrentRow);
  LeaveCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::AllMaterialShaderMapsGuard);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,`DumpMaterialStats'::__l2::FMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,_DumpMaterialStats_::__l2::FMaterialInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderPipeline_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FShaderPipeline_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  local_90 = 0;
  if (local_98 != (undefined1 *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  iVar7 = local_380.CurrentRow.Data.ArrayNum + -1;
  if (local_380.CurrentRow.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 != 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("!CurrentRow.Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                         ,0x25,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_380.OutputStream != (FArchive *)0x0) {
    (**(code **)(*(longlong *)local_380.OutputStream + 0x210))();
    local_380.OutputStream = (FArchive *)0x0;
  }
  if (local_380.CurrentRow.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.CurrentRow.Data.AllocatorInstance.Data);
  }
  return;
LAB_147f75c52:
  local_320.Index = iVar9;
  if (iVar9 == -1) goto LAB_147f75c61;
  goto LAB_147f75bf0;
LAB_147f76007:
  if (iVar9 == -1) goto LAB_147f76012;
  goto LAB_147f75f00;
LAB_147f761d7:
  if (iVar9 == -1) goto LAB_147f761e2;
  goto LAB_147f760e0;
}

// EmptyLinkFunctionForGeneratedCodeMaterialOverrideNanite @ 147f76810

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialOverrideNanite(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialParameterCollection @ 147f76820

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialParameterCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialShared @ 147f76830

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialShared(void)

{
  return;
}

// GetBlendModeString @ 147f79450

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FString * __cdecl GetBlendModeString(FString *__return_storage_ptr__,EBlendMode param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = UMaterial::GetBlendModeString(param_1);
  FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// GetMaterialQualityLevelFName @ 147f7a0c0

FName __cdecl GetMaterialQualityLevelFName(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  undefined7 in_register_00000009;
  byte in_DL;
  
  FVar3._1_7_ = in_register_00000009;
  FVar3.ComparisonIndex.Value._0_1_ = param_1;
  if (4 < in_DL) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("InQualityLevel < (sizeof(UEArrayCountHelper(MaterialQualityLevelNames)) - 1)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  *(FName *)FVar3 = MaterialQualityLevelNames[in_DL];
  return FVar3;
}

// GetMaterialQualityLevelName @ 147f7a120

void __cdecl GetMaterialQualityLevelName(Type param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (Num < param_1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("InQualityLevel < (sizeof(UEArrayCountHelper(MaterialQualityLevelNames)) - 1)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0xf9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FName::ToString(MaterialQualityLevelNames + param_1,param_2);
  return;
}

// GetMaterialShaderParametersHash @ 147f7a180

ulong64 __cdecl GetMaterialShaderParametersHash(FMaterialShaderParameters *param_1,ulong64 param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  iVar1 = (param_1->MaterialShaderTags).ArrayNum;
  lVar4 = (longlong)iVar1;
  if (iVar1 != 0) {
    pFVar6 = (param_1->MaterialShaderTags).AllocatorInstance.Data;
    uVar7 = 0;
    do {
      uVar2 = *(undefined8 *)pFVar6;
      uVar3 = GetTypeHash((FNameEntryId)(uint)uVar2);
      pFVar6 = pFVar6 + 8;
      uVar7 = uVar7 ^ uVar3 + 0x9e3779b9 +
                      (int)((ulonglong)uVar2 >> 0x20) + uVar7 * 0x40 + (uVar7 >> 2);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    param_2 = param_2 ^ uVar7;
  }
  uVar5 = CityHash64WithSeed((char *)param_1,0x38,param_2);
  return uVar5;
}

// GetShaderValueType @ 147f7c020

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

FType * __cdecl GetShaderValueType(FType *__return_storage_ptr__,EMaterialParameterType param_1)

{
  code *pcVar1;
  bool bVar2;
  FType *pFVar3;
  FName local_res18 [2];
  
  switch(param_1) {
  case Scalar:
    __return_storage_ptr__->StructType = (FStructType *)0x0;
    (__return_storage_ptr__->ObjectType).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectType).Number = 0;
    __return_storage_ptr__->ValueType = Float1;
    return __return_storage_ptr__;
  case Vector:
    __return_storage_ptr__->StructType = (FStructType *)0x0;
    (__return_storage_ptr__->ObjectType).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectType).Number = 0;
    __return_storage_ptr__->ValueType = Float4;
    return __return_storage_ptr__;
  case DoubleVector:
    __return_storage_ptr__->StructType = (FStructType *)0x0;
    (__return_storage_ptr__->ObjectType).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectType).Number = 0;
    __return_storage_ptr__->ValueType = Double4;
    return __return_storage_ptr__;
  case Texture:
  case TextureCollection:
  case Font:
  case RuntimeVirtualTexture:
  case ParameterCollection:
    FName::FName(local_res18,L"FMaterialTextureValue");
    __return_storage_ptr__->StructType = (FStructType *)0x0;
    __return_storage_ptr__->ObjectType = local_res18[0];
    __return_storage_ptr__->ValueType = -(local_res18[0] != (FName)0x0) & Object;
    return __return_storage_ptr__;
  case SparseVolumeTexture:
    goto switchD_147f7c046_caseD_7;
  case StaticSwitch:
    __return_storage_ptr__->StructType = (FStructType *)0x0;
    (__return_storage_ptr__->ObjectType).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectType).Number = 0;
    __return_storage_ptr__->ValueType = Bool1;
    return __return_storage_ptr__;
  case NumRuntime:
    __return_storage_ptr__->StructType = (FStructType *)0x0;
    (__return_storage_ptr__->ObjectType).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectType).Number = 0;
    __return_storage_ptr__->ValueType = Bool4;
    return __return_storage_ptr__;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x1628,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FType *)(*pcVar1)();
      return pFVar3;
    }
switchD_147f7c046_caseD_7:
    __return_storage_ptr__->StructType = (FStructType *)0x0;
    (__return_storage_ptr__->ObjectType).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectType).Number = 0;
    __return_storage_ptr__->ValueType = Void;
    return __return_storage_ptr__;
  }
}

// GetShadingModelFieldString @ 147f7c2f0

FString * __cdecl
GetShadingModelFieldString(FString *__return_storage_ptr__,FMaterialShadingModelField param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FString local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  FString::FString(&local_58,L"|");
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__W4EMaterialShadingModel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__W4EMaterialShadingModel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = GetShadingModelString;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  GetShadingModelFieldString
            (__return_storage_ptr__,param_1,
             (TDelegate<FString___cdecl(EMaterialShadingModel),FDefaultDelegateUserPolicy> *)
             local_48,&local_58);
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
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetShadingModelFieldString @ 147f7c450

FString * __cdecl
GetShadingModelFieldString
          (FString *__return_storage_ptr__,FMaterialShadingModelField param_1,
          TDelegate<FString___cdecl(EMaterialShadingModel),FDefaultDelegateUserPolicy> *param_2,
          FString *param_3)

{
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar6;
  FString *pFVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  FReadAccessScope *local_58;
  wchar_t *local_50 [2];
  FReadAccessScope local_40;
  
  uVar9 = (uint)param_1.ShadingModelField;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1.ShadingModelField != 0) {
    while( true ) {
      iVar4 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      local_40.DestructionSentinel.AccessType = Reader;
      iVar10 = 0x20;
      if (uVar9 != 0) {
        iVar10 = iVar4;
      }
      local_40.DestructionSentinel.bDestroyed = false;
      uVar9 = uVar9 & ~(1 << ((byte)iVar10 & 0x1f));
      local_40.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)param_2;
      FVar5 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
              FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
      local_58 = &local_40;
      FVar1 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
               ((longlong)FVar5 + 0x20);
      FVar6 = FVar5;
      if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
        FVar6 = FVar1;
      }
      if ((ulonglong)FVar6 <= &local_58) {
        FVar6 = FVar5;
        if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
          FVar6 = FVar1;
        }
        if ((&local_58 <
             (FReadAccessScope **)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar5 + 0x2c) * 8)
            ) && (bVar3 = FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
      }
      iVar4 = *(int *)((longlong)FVar5 + 0x28);
      if (iVar4 == *(int *)((longlong)FVar5 + 0x2c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                          (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>
                                  *)FVar5,(int *)((longlong)FVar5 + 0x2c));
      }
      *(int *)((longlong)FVar5 + 0x28) = iVar4 + 1;
      if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar5 + 0x20) !=
          (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
        FVar5 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                 ((longlong)FVar5 + 0x20);
      }
      *(FReadAccessScope **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_58;
      FMRSWRecursiveAccessDetector::AcquireReadAccess((FMRSWRecursiveAccessDetector *)param_2);
      plVar8 = (longlong *)0x0;
      if (*(int *)&param_2->field_0x10 != 0) {
        plVar8 = *(longlong **)&param_2->field_0x8;
      }
      (**(code **)(*plVar8 + 0x60))(plVar8,local_50,iVar10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      iVar4 = (int)local_50[1] + -1;
      if ((int)local_50[1] == 0) {
        iVar4 = 0;
      }
      FString::AppendChars(__return_storage_ptr__,local_50[0],iVar4);
      if (local_50[0] != (wchar_t *)0x0) {
        FMemory::Free(local_50[0]);
      }
      if (uVar9 == 0) break;
      iVar10 = (param_3->Data).ArrayNum;
      iVar4 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar4 = 0;
      }
      FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar4);
    }
  }
  return __return_storage_ptr__;
}

// GetShadingModelString @ 147f7c640

FString * __cdecl
GetShadingModelString(FString *__return_storage_ptr__,EMaterialShadingModel param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  switch(param_1) {
  case MSM_Unlit:
    FString::operator=(__return_storage_ptr__,L"MSM_Unlit");
    return __return_storage_ptr__;
  case MSM_DefaultLit:
    FString::operator=(__return_storage_ptr__,L"MSM_DefaultLit");
    return __return_storage_ptr__;
  case MSM_Subsurface:
    FString::operator=(__return_storage_ptr__,L"MSM_Subsurface");
    return __return_storage_ptr__;
  case MSM_PreintegratedSkin:
    FString::operator=(__return_storage_ptr__,L"MSM_PreintegratedSkin");
    return __return_storage_ptr__;
  case MSM_ClearCoat:
    FString::operator=(__return_storage_ptr__,L"MSM_ClearCoat");
    return __return_storage_ptr__;
  case MSM_SubsurfaceProfile:
    FString::operator=(__return_storage_ptr__,L"MSM_SubsurfaceProfile");
    return __return_storage_ptr__;
  case MSM_TwoSidedFoliage:
    FString::operator=(__return_storage_ptr__,L"MSM_TwoSidedFoliage");
    return __return_storage_ptr__;
  case MSM_Hair:
    FString::operator=(__return_storage_ptr__,L"MSM_Hair");
    return __return_storage_ptr__;
  case MSM_Cloth:
    FString::operator=(__return_storage_ptr__,L"MSM_Cloth");
    return __return_storage_ptr__;
  case MSM_Eye:
    FString::operator=(__return_storage_ptr__,L"MSM_Eye");
    return __return_storage_ptr__;
  case MSM_SingleLayerWater:
    FString::operator=(__return_storage_ptr__,L"MSM_SingleLayerWater");
    return __return_storage_ptr__;
  case MSM_ThinTranslucent:
    FString::operator=(__return_storage_ptr__,L"MSM_ThinTranslucent");
    return __return_storage_ptr__;
  default:
    FString::operator=(__return_storage_ptr__,L"Unknown");
    return __return_storage_ptr__;
  }
}

// InvalidateMaterialRenderProxyExpressionCache @ 147f7f910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl InvalidateMaterialRenderProxyExpressionCache(FMaterialRenderProxy *param_1)

{
  FMutex *this;
  atomic<unsigned_char> aVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMaterial *pFVar6;
  uint uVar7;
  int iVar8;
  FMaterialRenderContext local_48;
  
  FMaterialRenderProxy::InvalidateUniformExpressionCache(param_1,false);
  uVar5 = UMaterialInterface::GetFeatureLevelsToCompileForAllMaterials();
  if (uVar5 != 0) {
    this = &param_1->Mutex;
    do {
      uVar7 = -uVar5 & uVar5;
      uVar5 = uVar5 & uVar5 - 1;
      iVar2 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar8 = 0;
      if (uVar7 != 0) {
        iVar8 = iVar2;
      }
      bVar4 = IsInRenderingThread();
      if ((!bVar4) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1594,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (FMaterial *)(**(code **)(param_1->_padding_ + 0x30))(param_1,iVar8);
      if ((this == (FMutex *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      LOCK();
      bVar4 = this->State == (atomic<unsigned_char>)0x0;
      if (bVar4) {
        this->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow(this);
      }
      if (pFVar6 != (FMaterial *)0x0) {
        bVar4 = IsInParallelRenderingThread();
        if ((!bVar4) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("IsInParallelRenderingThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                               ,0x565,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((pFVar6->RenderingThreadShaderMap).Reference !=
            (param_1->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap) {
          FRDGBuilder::WaitForAsyncExecuteTask();
          local_48.bShowSelection = false;
          local_48.MaterialRenderProxy = param_1;
          local_48.Material = pFVar6;
          FMaterialRenderProxy::EvaluateUniformExpressions
                    (param_1,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                     &(param_1->UniformExpressionCache).Elements,&local_48,
                     (FUniformExpressionCacheAsyncUpdater *)0x0);
        }
      }
      if (this != (FMutex *)0x0) {
        LOCK();
        aVar1 = this->State;
        this->State = (atomic<unsigned_char>)((char)this->State + -1);
        UNLOCK();
        if (((byte)aVar1 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this);
        }
      }
    } while (uVar5 != 0);
  }
  return;
}

// IsUsingNewMaterialTranslatorPrototype @ 147f811f0

bool __cdecl IsUsingNewMaterialTranslatorPrototype(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarUsingUseNewMaterialTranslatorPrototype.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// OnTagChangedCB @ 147f82cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl OnTagChangedCB(void *param_1)

{
  atomic<unsigned_char> *this;
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMaterial *pFVar7;
  uint uVar8;
  int iVar9;
  FMaterialRenderContext FStack_48;
  
  FMaterialRenderProxy::InvalidateUniformExpressionCache(param_1,false);
  uVar6 = UMaterialInterface::GetFeatureLevelsToCompileForAllMaterials();
  if (uVar6 != 0) {
    this = (atomic<unsigned_char> *)((longlong)param_1 + 0xbd);
    do {
      uVar8 = -uVar6 & uVar6;
      uVar6 = uVar6 & uVar6 - 1;
      iVar3 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar9 = 0;
      if (uVar8 != 0) {
        iVar9 = iVar3;
      }
      bVar5 = IsInRenderingThread();
      if ((!bVar5) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1594,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (FMaterial *)(**(code **)(*(longlong *)param_1 + 0x30))(param_1,iVar9);
      if ((this == (atomic<unsigned_char> *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      FVar1.State = *this;
      if (FVar1.State == (atomic<unsigned_char>)0x0) {
        *this = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar1.State != (atomic<unsigned_char>)0x0) {
        UE::FMutex::LockSlow((FMutex *)this);
      }
      if (pFVar7 != (FMaterial *)0x0) {
        bVar5 = IsInParallelRenderingThread();
        if ((!bVar5) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsInParallelRenderingThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                               ,0x565,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pFVar7->RenderingThreadShaderMap).Reference !=
            *(FMaterialShaderMap **)((longlong)param_1 + 0x58)) {
          FRDGBuilder::WaitForAsyncExecuteTask();
          FStack_48.bShowSelection = false;
          FStack_48.MaterialRenderProxy = param_1;
          FStack_48.Material = pFVar7;
          FMaterialRenderProxy::EvaluateUniformExpressions
                    (param_1,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                     (FUniformExpressionCache *)((longlong)param_1 + 0x20),&FStack_48,
                     (FUniformExpressionCacheAsyncUpdater *)0x0);
        }
      }
      if (this != (atomic<unsigned_char> *)0x0) {
        LOCK();
        aVar2 = *this;
        *this = (atomic<unsigned_char>)((char)*this + -1);
        UNLOCK();
        if (((byte)aVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)this);
        }
      }
    } while (uVar6 != 0);
  }
  return;
}

// OnVirtualTextureDestroyedCB @ 147f82ce0

void __cdecl OnVirtualTextureDestroyedCB(FVirtualTextureProducerHandle *param_1,void *param_2)

{
  InvalidateMaterialRenderProxyExpressionCache(param_2);
  return;
}

// SerializeExpressionInput @ 147f86e10

bool __cdecl SerializeExpressionInput(FArchive *param_1,FExpressionInput *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FString local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCoreObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FCoreObjectVersion::GUID);
  if (iVar4 < 1) {
    return false;
  }
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,param_2);
  piVar1 = &param_2->OutputIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_1->field_0x2a;
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (iVar4 < 0x1f) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    operator<<(param_1,&local_18);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
    FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    param_2->InputName = local_res8;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->InputName);
  }
  piVar1 = &param_2->Mask;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->MaskR;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->MaskG;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->MaskB;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->MaskA;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((*puVar2 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return true;
}

// SetShaderMapsOnMaterialResources_RenderThread @ 147f89420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetShaderMapsOnMaterialResources_RenderThread
          (FRHICommandListImmediate *param_1,
          TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
          *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_Scene_SetShaderMapsOnMaterialResources_RT> FVar5;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_Scene_SetShaderMapsOnMaterialResources_RT;
  if (StatPtr_STAT_Scene_SetShaderMapsOnMaterialResources_RT ==
      (FThreadSafeStaticStat<FStat_STAT_Scene_SetShaderMapsOnMaterialResources_RT>)0x0) {
    pFVar4 = FName::FName(&local_res20,"STAT_Scene_SetShaderMapsOnMaterialResources_RT");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_Scene_SetShaderMapsOnMaterialResources_RT>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_Scene_SetShaderMapsOnMaterialResources_RT,*pFVar4,
                       L"Set Shader Maps On Material Resources (RT)","STATGROUP_SceneUpdate",
                       "STATCAT_Advanced",L"Scene Update",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar7.Value;
        local_res18.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                   ,0x1594);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res18.s.LowPart = FVar7.Value;
      local_res18.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      if (this->bWaitForExplicitFlush < this->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res18);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this,&local_28);
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
  }
  return;
}

// UpdateMaterialShaderCompilingStats @ 147f8d420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UpdateMaterialShaderCompilingStats(FMaterial *param_1)

{
  FName FVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTotalMaterialShaders> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumMaskedMaterialShaders> FVar14;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumLitMaterialShaders> FVar15;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumSpecialMaterialShaders> FVar16;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumParticleMaterialShaders> FVar17;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumSkinnedMaterialShaders> FVar18;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTransparentMaterialShaders> *this;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumUnlitMaterialShaders> *this_00;
  ulonglong uVar19;
  FName FVar20;
  wchar_t *pwVar21;
  undefined1 auStackY_108 [32];
  FName local_a8;
  uint local_a0;
  int local_9c;
  FStatMessage local_98;
  ushort local_88 [2];
  undefined1 local_84 [36];
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FVar11 = StatPtr_STAT_ShaderCompiling_NumTotalMaterialShaders;
  if (StatPtr_STAT_ShaderCompiling_NumTotalMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTotalMaterialShaders>)0x0) {
    pFVar10 = FName::FName(&local_a8,"STAT_ShaderCompiling_NumTotalMaterialShaders");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTotalMaterialShaders>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ShaderCompiling_NumTotalMaterialShaders,*pFVar10,
                        L"Num Total Material Shaders","STATGROUP_ShaderCompiling","STATCAT_Advanced"
                        ,L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar11;
  local_a8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    local_98.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_98.StatData.Pad[0] = '\x01';
    local_98.StatData.Pad[1] = '\0';
    local_98.StatData.Pad[2] = '\0';
    local_98.StatData.Pad[3] = '\0';
    local_98.StatData.Pad[4] = '\0';
    local_98.StatData.Pad[5] = '\0';
    local_98.StatData.Pad[6] = '\0';
    local_98.StatData.Pad[7] = '\0';
    local_a8 = FVar1;
    local_98.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar12,&local_98);
    FStatsTrace::Add(&local_a8,1);
    if (pFVar12->ScopeCount == 0) {
      FThreadStats::Flush(pFVar12,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar12,false,false);
    }
  }
  iVar9 = (**(code **)(param_1->_padding_ + 0x268))(param_1);
  if (iVar9 == 0) {
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumMaskedMaterialShaders>)
             StatPtr_STAT_ShaderCompiling_NumOpaqueMaterialShaders;
    if (StatPtr_STAT_ShaderCompiling_NumOpaqueMaterialShaders ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumOpaqueMaterialShaders>)0x0) {
      pFVar10 = FName::FName(&local_a8,"STAT_ShaderCompiling_NumOpaqueMaterialShaders");
      pwVar21 = L"Num Opaque Material Shaders";
      this = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTransparentMaterialShaders> *)
             &StatPtr_STAT_ShaderCompiling_NumOpaqueMaterialShaders;
      goto LAB_147f8d62d;
    }
  }
  else if (iVar9 == 1) {
    FVar14 = StatPtr_STAT_ShaderCompiling_NumMaskedMaterialShaders;
    if (StatPtr_STAT_ShaderCompiling_NumMaskedMaterialShaders ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumMaskedMaterialShaders>)0x0) {
      pFVar10 = FName::FName(&local_a8,"STAT_ShaderCompiling_NumMaskedMaterialShaders");
      pwVar21 = L"Num Masked Material Shaders";
      this = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTransparentMaterialShaders> *)
             &StatPtr_STAT_ShaderCompiling_NumMaskedMaterialShaders;
      goto LAB_147f8d62d;
    }
  }
  else {
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumMaskedMaterialShaders>)
             StatPtr_STAT_ShaderCompiling_NumTransparentMaterialShaders;
    if (StatPtr_STAT_ShaderCompiling_NumTransparentMaterialShaders ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTransparentMaterialShaders>)0x0) {
      pFVar10 = FName::FName(&local_a8,"STAT_ShaderCompiling_NumTransparentMaterialShaders");
      pwVar21 = L"Num Transparent Material Shaders";
      this = &StatPtr_STAT_ShaderCompiling_NumTransparentMaterialShaders;
LAB_147f8d62d:
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumMaskedMaterialShaders>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this,*pFVar10,pwVar21,
                          "STATGROUP_ShaderCompiling","STATCAT_Advanced",L"Shader Compiling",true,
                          false,ST_int64,false,false,MCR_Invalid);
    }
  }
  FVar1 = *(FName *)FVar14;
  local_a8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    local_98.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_98.StatData.Pad[0] = '\x01';
    local_98.StatData.Pad[1] = '\0';
    local_98.StatData.Pad[2] = '\0';
    local_98.StatData.Pad[3] = '\0';
    local_98.StatData.Pad[4] = '\0';
    local_98.StatData.Pad[5] = '\0';
    local_98.StatData.Pad[6] = '\0';
    local_98.StatData.Pad[7] = '\0';
    local_a8 = FVar1;
    local_98.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar12,&local_98);
    FStatsTrace::Add(&local_a8,1);
    if (pFVar12->ScopeCount == 0) {
      FThreadStats::Flush(pFVar12,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar12,false,false);
    }
  }
  (**(code **)(param_1->_padding_ + 0x280))(param_1,local_88);
  uVar6 = _UNK_1519b86e8;
  uVar5 = ___xmm_0000000a000000060000000500000008;
  uVar4 = _UNK_150631e38;
  uVar3 = ___xmm_00000004000000030000000200000001;
  if (local_88[0] == 1) {
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumLitMaterialShaders>)
             StatPtr_STAT_ShaderCompiling_NumUnlitMaterialShaders;
    if (StatPtr_STAT_ShaderCompiling_NumUnlitMaterialShaders ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumUnlitMaterialShaders>)0x0) {
      pFVar10 = FName::FName(&local_a8,"STAT_ShaderCompiling_NumUnlitMaterialShaders");
      pwVar21 = L"Num Unlit Material Shaders";
      this_00 = &StatPtr_STAT_ShaderCompiling_NumUnlitMaterialShaders;
LAB_147f8d86e:
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumLitMaterialShaders>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_00,*pFVar10,pwVar21,
                          "STATGROUP_ShaderCompiling","STATCAT_Advanced",L"Shader Compiling",true,
                          false,ST_int64,false,false,MCR_Invalid);
    }
  }
  else {
    local_60 = 0xb;
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    local_a0 = 9;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,9,0,(ForAnyElementType *)&local_a8,9,&local_9c);
    uVar7 = local_a0;
    *(undefined8 *)local_a8 = uVar3;
    *(undefined8 *)((longlong)local_a8 + 8) = uVar4;
    *(undefined8 *)((longlong)local_a8 + 0x10) = uVar5;
    *(undefined8 *)((longlong)local_a8 + 0x18) = uVar6;
    *(undefined4 *)((longlong)local_a8 + 0x20) = local_60;
    uVar19 = (ulonglong)(int)local_a0;
    FVar1 = (FName)((longlong)local_a8 + uVar19 * 4);
    FVar20 = local_a8;
    while( true ) {
      if ((uint)uVar19 != uVar7) {
        `TCheckedPointerIterator<enum_EMaterialShadingModel_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_84);
        uVar19 = (ulonglong)local_a0;
      }
      if (FVar20 == FVar1) {
        bVar2 = false;
        goto LAB_147f8d82e;
      }
      if ((local_88[0] >> (*(byte *)FVar20 & 0x1f) & 1) != 0) break;
      FVar20 = (FName)((longlong)FVar20 + 4);
    }
    bVar2 = true;
LAB_147f8d82e:
    if (local_a8 != (FName)0x0) {
      FMemory::Free((void *)local_a8);
    }
    if (!bVar2) goto LAB_147f8d967;
    FVar15 = StatPtr_STAT_ShaderCompiling_NumLitMaterialShaders;
    if (StatPtr_STAT_ShaderCompiling_NumLitMaterialShaders ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumLitMaterialShaders>)0x0) {
      pFVar10 = FName::FName(&local_a8,"STAT_ShaderCompiling_NumLitMaterialShaders");
      pwVar21 = L"Num Lit Material Shaders";
      this_00 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumUnlitMaterialShaders> *)
                &StatPtr_STAT_ShaderCompiling_NumLitMaterialShaders;
      goto LAB_147f8d86e;
    }
  }
  FVar1 = *(FName *)FVar15;
  local_a8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    local_98.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_98.StatData.Pad[0] = '\x01';
    local_98.StatData.Pad[1] = '\0';
    local_98.StatData.Pad[2] = '\0';
    local_98.StatData.Pad[3] = '\0';
    local_98.StatData.Pad[4] = '\0';
    local_98.StatData.Pad[5] = '\0';
    local_98.StatData.Pad[6] = '\0';
    local_98.StatData.Pad[7] = '\0';
    local_a8 = FVar1;
    local_98.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar12,&local_98);
    FStatsTrace::Add(&local_a8,1);
    if (pFVar12->ScopeCount == 0) {
      FThreadStats::Flush(pFVar12,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar12,false,false);
    }
  }
LAB_147f8d967:
  cVar8 = (**(code **)(param_1->_padding_ + 0x108))(param_1);
  if (cVar8 != '\0') {
    FVar16 = StatPtr_STAT_ShaderCompiling_NumSpecialMaterialShaders;
    if (StatPtr_STAT_ShaderCompiling_NumSpecialMaterialShaders ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumSpecialMaterialShaders>)0x0) {
      pFVar10 = FName::FName(&local_a8,"STAT_ShaderCompiling_NumSpecialMaterialShaders");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumSpecialMaterialShaders>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ShaderCompiling_NumSpecialMaterialShaders,*pFVar10,
                          L"Num Special Material Shaders","STATGROUP_ShaderCompiling",
                          "STATCAT_Advanced",L"Shader Compiling",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar1 = *(FName *)FVar16;
    local_a8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_98.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_98.StatData.Pad[0] = '\x01';
      local_98.StatData.Pad[1] = '\0';
      local_98.StatData.Pad[2] = '\0';
      local_98.StatData.Pad[3] = '\0';
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_a8 = FVar1;
      local_98.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_98);
      FStatsTrace::Add(&local_a8,1);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  cVar8 = (**(code **)(param_1->_padding_ + 0x120))(param_1);
  if (cVar8 != '\0') {
    FVar17 = StatPtr_STAT_ShaderCompiling_NumParticleMaterialShaders;
    if (StatPtr_STAT_ShaderCompiling_NumParticleMaterialShaders ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumParticleMaterialShaders>)0x0) {
      pFVar10 = FName::FName(&local_a8,"STAT_ShaderCompiling_NumParticleMaterialShaders");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumParticleMaterialShaders>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ShaderCompiling_NumParticleMaterialShaders,*pFVar10,
                          L"Num Particle Material Shaders","STATGROUP_ShaderCompiling",
                          "STATCAT_Advanced",L"Shader Compiling",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar1 = *(FName *)FVar17;
    local_a8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_98.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_98.StatData.Pad[0] = '\x01';
      local_98.StatData.Pad[1] = '\0';
      local_98.StatData.Pad[2] = '\0';
      local_98.StatData.Pad[3] = '\0';
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_a8 = FVar1;
      local_98.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_98);
      FStatsTrace::Add(&local_a8,1);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  cVar8 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
  if (cVar8 != '\0') {
    FVar18 = StatPtr_STAT_ShaderCompiling_NumSkinnedMaterialShaders;
    if (StatPtr_STAT_ShaderCompiling_NumSkinnedMaterialShaders ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumSkinnedMaterialShaders>)0x0) {
      pFVar10 = FName::FName(&local_a8,"STAT_ShaderCompiling_NumSkinnedMaterialShaders");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumSkinnedMaterialShaders>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ShaderCompiling_NumSkinnedMaterialShaders,*pFVar10,
                          L"Num Skinned Material Shaders","STATGROUP_ShaderCompiling",
                          "STATCAT_Advanced",L"Shader Compiling",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar1 = *(FName *)FVar18;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_a8 = FVar1;
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_98.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_98.StatData.Pad[0] = '\x01';
      local_98.StatData.Pad[1] = '\0';
      local_98.StatData.Pad[2] = '\0';
      local_98.StatData.Pad[3] = '\0';
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_a8 = FVar1;
      local_98.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_98);
      FStatsTrace::Add(&local_a8,1);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  return;
}

// Z_Construct_UEnum_Engine_ELWCFunctionKind @ 147f8e380

UEnum * __cdecl Z_Construct_UEnum_Engine_ELWCFunctionKind(void)

{
  if (Z_Registration_Info_UEnum_ELWCFunctionKind.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELWCFunctionKind.InnerSingleton,
               &Z_Construct_UEnum_Engine_ELWCFunctionKind_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELWCFunctionKind.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMaterialOverrideNanite @ 147f8e3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialOverrideNanite(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialOverrideNanite.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialOverrideNanite.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialOverrideNanite.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialOverrideNanite.InnerSingleton;
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

// AllMaterialShaderMaps'' @ 1503f3630

void __cdecl `dynamic_atexit_destructor_for_'FMaterialShaderMap::AllMaterialShaderMaps__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FMaterialShaderMap::AllMaterialShaderMaps.AllocatorInstance.Data;
  if (FMaterialShaderMap::AllMaterialShaderMaps.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FMaterialShaderMap::AllMaterialShaderMaps.AllocatorInstance.Data !=
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

// AllMaterialShaderMapsGuard'' @ 1503f3650

void __cdecl `dynamic_atexit_destructor_for_'FMaterialShaderMap::AllMaterialShaderMapsGuard__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f3657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::AllMaterialShaderMapsGuard);
  return;
}

// DeferredUniformExpressionCacheRequests'' @ 1503f3670

void __cdecl
`dynamic_atexit_destructor_for_'FMaterialRenderProxy::DeferredUniformExpressionCacheRequests__(void)

{
  FMaterialRenderProxy::DeferredUniformExpressionCacheRequests.HashSize = 0;
  if (FMaterialRenderProxy::DeferredUniformExpressionCacheRequests.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FMaterialRenderProxy::DeferredUniformExpressionCacheRequests.Hash.
                          SecondaryData);
  }
  TSparseArray<TSparseSetElement<FMaterialRenderProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMaterialRenderProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FMaterialRenderProxy::DeferredUniformExpressionCacheRequests.Elements);
  return;
}

// GIdToMaterialShaderMap'' @ 1503f36b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'FMaterialShaderMap::GIdToMaterialShaderMap__(void)

{
  _func___cdecl_UScriptStruct_ptr *p_Var1;
  _func___cdecl_UScriptStruct_ptr **pp_Var2;
  longlong lVar3;
  
  lVar3 = 0x9b;
  pp_Var2 = &Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::StructParams.SuperFunc;
  do {
    lVar3 = lVar3 + -1;
    *(undefined4 *)(pp_Var2 + -9) = 0;
    p_Var1 = pp_Var2[-10];
    if (p_Var1 != (_func___cdecl_UScriptStruct_ptr *)0x0) {
      FMemory::Free(p_Var1);
    }
    TSparseArray<TSparseSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(pp_Var2 + -0x12));
    pp_Var2 = pp_Var2 + -10;
  } while (lVar3 != 0);
  return;
}

// GIdToMaterialShaderMapCS'' @ 1503f3710

void __cdecl `dynamic_atexit_destructor_for_'FMaterialShaderMap::GIdToMaterialShaderMapCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f3717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::GIdToMaterialShaderMapCS);
  return;
}

// Null'' @ 1503f3730

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer(&UE::DerivedData::FValue::Null.Data.CompressedData);
  return;
}

// Null'' @ 1503f3750

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer
            ((FCompositeBuffer *)&UE::DerivedData::FValueWithId::Null._padding_);
  return;
}

// PrecachedPSORequestIDsCS'' @ 1503f3770

void __cdecl `dynamic_atexit_destructor_for_'FMaterial::PrecachedPSORequestIDsCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f3777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FMaterial::PrecachedPSORequestIDsCS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeferUniformExpressionCaching'' @ 1503f3790

void __cdecl _dynamic_atexit_destructor_for__CVarDeferUniformExpressionCaching__(void)

{
  CVarDeferUniformExpressionCaching._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDeferUniformExpressionCaching);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialExcludeNonPipelinedShaders'' @ 1503f37b0

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialExcludeNonPipelinedShaders__(void)

{
  CVarMaterialExcludeNonPipelinedShaders._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaterialExcludeNonPipelinedShaders);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialShaderMapDump'' @ 1503f37d0

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialShaderMapDump__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaterialShaderMapDump);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUniformExpressionCacheAsyncUpdates'' @ 1503f37f0

void __cdecl _dynamic_atexit_destructor_for__CVarUniformExpressionCacheAsyncUpdates__(void)

{
  CVarUniformExpressionCacheAsyncUpdates._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUniformExpressionCacheAsyncUpdates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUsingUseNewMaterialTranslatorPrototype'' @ 1503f3810

void __cdecl _dynamic_atexit_destructor_for__CVarUsingUseNewMaterialTranslatorPrototype__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUsingUseNewMaterialTranslatorPrototype);
  return;
}

// `dynamic_atexit_destructor_for_'ColorMaterialInput_Ops'' @ 1503f3830

void __cdecl _dynamic_atexit_destructor_for__ColorMaterialInput_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = ColorMaterialInput_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyExpressions'' @ 1503f3860

void __cdecl
`FMaterial::GetUniformExpressions'::__l2::_dynamic_atexit_destructor_for__EmptyExpressions__(void)

{
  FUniformExpressionSet::~FUniformExpressionSet(&EmptyExpressions);
  return;
}

// `dynamic_atexit_destructor_for_'ExpressionInput_Ops'' @ 1503f3880

void __cdecl _dynamic_atexit_destructor_for__ExpressionInput_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = ExpressionInput_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'GFlushMaterialUniforms'' @ 1503f38b0

void __cdecl _dynamic_atexit_destructor_for__GFlushMaterialUniforms__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GFlushMaterialUniforms);
  return;
}

// `dynamic_atexit_destructor_for_'GUniformExpressionCacheAsyncUpdateTask'' @ 1503f38d0

void __cdecl _dynamic_atexit_destructor_for__GUniformExpressionCacheAsyncUpdateTask__(void)

{
  int *piVar1;
  int iVar2;
  FTaskHandle FVar3;
  
  FVar3.Pimpl.Reference = GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference;
  if (GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001503f38f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)FVar3.Pimpl.Reference)(FVar3.Pimpl.Reference,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 1503f3900

void __cdecl
`FMaterialShaderMapLayoutCache::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive
                    ((PSRWLOCK)
                     &`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                      ::__l2::Instance.LayoutLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive
              ((PSRWLOCK)
               &`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                ::__l2::Instance.LayoutLock);
  }
  if (`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapHashTable.IndexSize != 0) {
    `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
    ::__l2::Instance.ShaderMapHashTable.HashMask = 0;
    `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
    ::__l2::Instance.ShaderMapHashTable.IndexSize = 0;
    operator_delete__(`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                      ::__l2::Instance.ShaderMapHashTable.Hash);
    `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
    ::__l2::Instance.ShaderMapHashTable.Hash = FHashTable::EmptyHash;
    operator_delete__(`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                      ::__l2::Instance.ShaderMapHashTable.NextIndex);
    `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
    ::__l2::Instance.ShaderMapHashTable.NextIndex = (uint *)0x0;
  }
  if (`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.MaterialParameterHashes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                  ::__l2::Instance.MaterialParameterHashes.AllocatorInstance.Data);
  }
  DestructItems<FMaterialShaderParameters,int>
            ((FMaterialShaderParameters *)
             `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
             ::__l2::Instance.MaterialShaderParameters.AllocatorInstance.Data,
             `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
             ::__l2::Instance.MaterialShaderParameters.ArrayNum);
  if (`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.MaterialShaderParameters.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                  ::__l2::Instance.MaterialShaderParameters.AllocatorInstance.Data);
  }
  DestructItems<TUniquePtr<FMaterialShaderMapLayout,TDefaultDelete<FMaterialShaderMapLayout>_>,int>
            ((TUniquePtr<FMaterialShaderMapLayout,TDefaultDelete<FMaterialShaderMapLayout>_> *)
             `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
             ::__l2::Instance.ShaderMapLayouts.AllocatorInstance.Data,
             `public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
             ::__l2::Instance.ShaderMapLayouts.ArrayNum);
  if (`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
      ::__l2::Instance.ShaderMapLayouts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_FMaterialShaderMapLayoutCache&___ptr64___cdecl_FMaterialShaderMapLayoutCache::Get(void)'
                  ::__l2::Instance.ShaderMapLayouts.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogMaterial'' @ 1503f3a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMaterial__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMaterial);
  return;
}

// `dynamic_atexit_destructor_for_'MaterialAttributesInput_Ops'' @ 1503f3a20

void __cdecl _dynamic_atexit_destructor_for__MaterialAttributesInput_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = MaterialAttributesInput_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'ScalarMaterialInput_Ops'' @ 1503f3a50

void __cdecl _dynamic_atexit_destructor_for__ScalarMaterialInput_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = ScalarMaterialInput_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector2MaterialInput_Ops'' @ 1503f3a80

void __cdecl _dynamic_atexit_destructor_for__Vector2MaterialInput_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector2MaterialInput_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'VectorMaterialInput_Ops'' @ 1503f3ab0

void __cdecl _dynamic_atexit_destructor_for__VectorMaterialInput_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = VectorMaterialInput_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterShaders_OnDemandShaderRequests'' @ 1503f3ae0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterShaders_OnDemandShaderRequests__(void)

{
  if ((__GTraceCounterShaders_OnDemandShaderRequests.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterShaders_OnDemandShaderRequests.CounterName);
    return;
  }
  return;
}

