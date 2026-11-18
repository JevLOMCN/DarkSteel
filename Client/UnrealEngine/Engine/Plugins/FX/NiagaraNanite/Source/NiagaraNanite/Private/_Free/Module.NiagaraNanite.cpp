// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 70

// OnCreateRenderThreadResources'' @ 1413e5fd0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 1413e5ff0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// `dynamic_initializer_for_'CVarRendererEnabled'' @ 1413e6010

void __cdecl NiagaraRendererNaniteLocal::_dynamic_initializer_for__CVarRendererEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRendererEnabled,L"fx.Niagara.NaniteRenderer.Enabled",&GRendererEnabled,
             L"If == 0, Niagara Nanite Renderers are disabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRendererEnabled__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNiagaraNanite'' @ 1413e6060

void __cdecl _dynamic_initializer_for__ModuleRegistrantNiagaraNanite__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NiagaraNanite";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NiagaraNanite",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNiagaraNaniteModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RendererPropertiesToDeferredInit'' @ 1413e60b0

void __cdecl
NiagaraNaniteRendererPropertiesLocal::_dynamic_initializer_for__RendererPropertiesToDeferredInit__
          (void)

{
  atexit(_dynamic_atexit_destructor_for__RendererPropertiesToDeferredInit__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Internal_NiagaraParameterComponentBinding_h__Script_NiagaraNanite_3355511147'' @ 1413e60d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Internal_NiagaraParameterComponentBinding_h__Script_NiagaraNanite_3355511147__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraNanite",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Internal_NiagaraParameterComponentBinding_h__Script_NiagaraNanite_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Internal_Renderer_NiagaraNaniteRendererProperties_h__Script_NiagaraNanite_1864761454'' @ 1413e6110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Internal_Renderer_NiagaraNaniteRendererProperties_h__Script_NiagaraNanite_1864761454__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraNanite",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Internal_Renderer_NiagaraNaniteRendererProperties_h__Script_NiagaraNanite_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Internal_Renderer_NiagaraNaniteRendererProperties_h__Script_NiagaraNanite_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h__Script_NiagaraNanite_4114179863'' @ 1413e6160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h__Script_NiagaraNanite_4114179863__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraNanite",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraNanite_Source_NiagaraNanite_Private_Renderer_NiagaraStaticMeshComponent_h__Script_NiagaraNanite_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NiagaraNanite'' @ 1413e61a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NiagaraNanite__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x194d0bf;
  local_res8[0].DeclarationsHash = 0xcbb94e30;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NiagaraNanite,L"/Script/NiagaraNanite",
             &Z_Registration_Info_UPackage__Script_NiagaraNanite,local_res8);
  return;
}

// Z_Construct_UClass_UNiagaraNaniteRendererProperties @ 14da3d6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraNaniteRendererProperties(void)

{
  if (Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.OuterSingleton,
               &Z_Construct_UClass_UNiagaraNaniteRendererProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraNaniteMaterialOverride @ 14da3d6f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraNaniteMaterialOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraNaniteMaterialOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraNaniteMaterialOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraNaniteMaterialOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraNaniteMaterialOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraNaniteMaterialOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties @ 14da3d770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties.InnerSingleton
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

// Z_Construct_UScriptStruct_FNiagaraNaniteMICOverride @ 14da3d7f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraNaniteMICOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraNaniteMICOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraNaniteMICOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraNaniteMICOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraNaniteMICOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraNaniteMICOverride.InnerSingleton;
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

// NewStructOps @ 14da3d870

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraNaniteMeshRendererMeshProperties,&UE::CoreUObject::Private::Construct<FNiagaraNaniteMeshRendererMeshProperties>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraNaniteMeshRendererMeshProperties>,&UE::CoreUObject::Private::Destruct<FNiagaraNaniteMeshRendererMeshProperties>,&UE::CoreUObject::Private::Copy<FNiagaraNaniteMeshRendererMeshProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14da3d8b0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraNaniteMICOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraNaniteMICOverride,&UE::CoreUObject::Private::Construct<FNiagaraNaniteMICOverride>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraNaniteMICOverride>,&UE::CoreUObject::Private::Destruct<FNiagaraNaniteMICOverride>,&UE::CoreUObject::Private::Copy<FNiagaraNaniteMICOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_NiagaraNanite @ 14da3d8f0

UPackage * __cdecl Z_Construct_UPackage__Script_NiagaraNanite(void)

{
  if (Z_Registration_Info_UPackage__Script_NiagaraNanite.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NiagaraNanite.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NiagaraNanite.OuterSingleton;
}

// NewStructOps @ 14da3d930

void * __cdecl Z_Construct_UScriptStruct_FNiagaraNaniteMaterialOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraNaniteMaterialOverride,&UE::CoreUObject::Private::Construct<FNiagaraNaniteMaterialOverride>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraNaniteMaterialOverride>,&UE::CoreUObject::Private::Destruct<FNiagaraNaniteMaterialOverride>,&UE::CoreUObject::Private::Copy<FNiagaraNaniteMaterialOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideMaterials_SetBit @ 14da3d970

void __cdecl
Z_Construct_UClass_UNiagaraNaniteRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xb4) = *(uint *)((longlong)param_1 + 0xb4) | 1;
  return;
}

// Z_Construct_UClass_UNiagaraStaticMeshComponent @ 14da3da40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStaticMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStaticMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14da3dbd0

void * __thiscall
FNiagaraNaniteModule::_scalar_deleting_destructor_(FNiagaraNaniteModule *this,uint param_1)

{
  *this = (FNiagaraNaniteModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UScriptStruct_FNiagaraFloatParameterComponentBinding @ 14da3dd10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraFloatParameterComponentBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraFloatParameterComponentBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraFloatParameterComponentBinding.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraFloatParameterComponentBinding_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraFloatParameterComponentBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraFloatParameterComponentBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraParameterComponentBinding @ 14da3dd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterComponentBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterComponentBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraParameterComponentBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraParameterComponentBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterComponentBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraParameterComponentBinding.InnerSingleton;
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

// NewStructOps @ 14da3de50

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraParameterComponentBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraParameterComponentBinding,&UE::CoreUObject::Private::Construct<FNiagaraParameterComponentBinding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraParameterComponentBinding>,&UE::CoreUObject::Private::Destruct<FNiagaraParameterComponentBinding>,&UE::CoreUObject::Private::Copy<FNiagaraParameterComponentBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14da3df80

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraFloatParameterComponentBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraFloatParameterComponentBinding,&UE::CoreUObject::Private::Construct<FNiagaraFloatParameterComponentBinding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraFloatParameterComponentBinding>,&UE::CoreUObject::Private::Destruct<FNiagaraFloatParameterComponentBinding>,&UE::CoreUObject::Private::Copy<FNiagaraFloatParameterComponentBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// AddPass<`FComputeShaderUtils::AddPass<FNiagaraNaniteGPUSceneCS>'::__l2::<lambda_1>_> @ 14da3e2c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FNiagaraNaniteGPUSceneCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFNiagaraNaniteGPUSceneCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFNiagaraNaniteGPUSceneCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FNiagaraNaniteGPUSceneCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairRaytracingGeometryCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FNiagaraNaniteGPUSceneCS>'::__l2::<lambda_1>_> @ 14da3e6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FNiagaraNaniteGPUSceneCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFNiagaraNaniteGPUSceneCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFNiagaraNaniteGPUSceneCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FNiagaraNaniteGPUSceneCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairRaytracingGeometryCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// CastChecked<UNiagaraNaniteRendererProperties_const_,UNiagaraRendererProperties_const_> @ 14da3e9b0

UNiagaraNaniteRendererProperties * __cdecl
CastChecked<UNiagaraNaniteRendererProperties_const_,UNiagaraRendererProperties_const_>
          (UNiagaraRendererProperties *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraRendererProperties *)0x0) {
    pFVar3 = GetTypeName<UNiagaraNaniteRendererProperties_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraNaniteRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraNaniteRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraNaniteRendererProperties_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraRendererProperties_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraNaniteRendererProperties,UObject> @ 14da3ea70

UNiagaraNaniteRendererProperties * __cdecl
CastChecked<UNiagaraNaniteRendererProperties,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraNaniteRendererProperties>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraNaniteRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraNaniteRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraNaniteRendererProperties>(&local_28);
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

// ClearUnusedGraphResources<FNiagaraNaniteGPUSceneCS> @ 14da3eb30

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
ClearUnusedGraphResources<FNiagaraNaniteGPUSceneCS>
          (TShaderRefBase<FNiagaraNaniteGPUSceneCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
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

// DefaultConstructItems<FNiagaraRendererNanite::FMeshData,int> @ 14da3ebb0

void __cdecl DefaultConstructItems<FNiagaraRendererNanite::FMeshData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      *(float *)(puVar1 + 1) = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      *(TQuat<float> *)(puVar1 + 3) = UE::Math::TQuat<float>::Identity;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 4;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 10;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraRendererNanite::FMeshData,int> @ 14da3ec10

void __cdecl DestructItems<FNiagaraRendererNanite::FMeshData,int>(FMeshData *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->MaterialRemapTable).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraNaniteMaterialOverride,int> @ 14da3ec50

void __cdecl
DestructItems<FNiagaraNaniteMaterialOverride,int>
          (FNiagaraNaniteMaterialOverride *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->UserParamBinding).Parameter.VarData;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeName<UNiagaraNaniteRendererProperties_const_> @ 14da3eeb0

FString * __cdecl
GetTypeName<UNiagaraNaniteRendererProperties_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraNaniteRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraNaniteRendererProperties> @ 14da3eef0

FString * __cdecl GetTypeName<UNiagaraNaniteRendererProperties>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraNaniteRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UNiagaraNaniteRendererProperties> @ 14da3f050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UNiagaraNaniteRendererProperties>(FObjectInitializer *param_1)

{
  UNiagaraMergeable *this;
  longlong *plVar1;
  int iVar2;
  
  this = (UNiagaraMergeable *)param_1->Obj;
  if (this == (UNiagaraMergeable *)0x0) {
    return;
  }
  UNiagaraMergeable::UNiagaraMergeable(this);
  *(undefined ***)this = &___7UNiagaraRendererProperties__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)(this + 1));
  *(undefined2 *)&this[2].field_0xd = 0x101;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[2].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[2].field_0x20 = iVar2;
  this[3].field_0x5 = this[3].field_0x5 & 0xfe;
  this[3].field_0x5 = this[3].field_0x5 | 2;
  *(undefined8 *)&this[2].field_0x24 = 0;
  this[3].field_0x4 = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined ***)this = &___7UNiagaraNaniteRendererProperties__6B_;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  this[4].field_0x10 = 0;
  *(undefined8 *)&this[4].field_0x18 = 0;
  *(undefined8 *)&this[4].field_0x20 = 0;
  *(undefined8 *)(this + 5) = 0;
  *(undefined8 *)&this[5].field_0x8 = 0;
  *(undefined4 *)&this[5].field_0x10 = 0;
  *(undefined8 *)&this[5].field_0x14 = 0;
  *(undefined8 *)&this[5].field_0x1c = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[5].field_0x24,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[5].field_0x24 = iVar2;
  this[6].field_0x9 = this[6].field_0x9 & 0xfe;
  this[6].field_0x9 = this[6].field_0x9 | 2;
  *(undefined8 *)(this + 6) = 0;
  this[6].field_0x8 = 0;
  *(undefined8 *)&this[6].field_0xc = 0;
  *(undefined8 *)&this[6].field_0x14 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[6].field_0x1c,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[6].field_0x1c = iVar2;
  this[7].field_0x1 = this[7].field_0x1 & 0xfe;
  this[7].field_0x1 = this[7].field_0x1 | 2;
  *(undefined8 *)&this[6].field_0x20 = 0;
  *(undefined1 *)(this + 7) = 0;
  *(undefined8 *)&this[7].field_0x4 = 0;
  *(undefined8 *)&this[7].field_0xc = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[7].field_0x14,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[7].field_0x14 = iVar2;
  this[7].field_0x21 = this[7].field_0x21 & 0xfe;
  this[7].field_0x21 = this[7].field_0x21 | 2;
  *(undefined8 *)&this[7].field_0x18 = 0;
  this[7].field_0x20 = 0;
  *(undefined8 *)&this[7].field_0x24 = 0;
  *(undefined8 *)&this[8].field_0x4 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[8].field_0xc,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[8].field_0xc = iVar2;
  this[8].field_0x19 = this[8].field_0x19 & 0xfe;
  this[8].field_0x19 = this[8].field_0x19 | 2;
  *(undefined8 *)&this[8].field_0x10 = 0;
  this[8].field_0x18 = 0;
  *(undefined8 *)&this[8].field_0x1c = 0;
  *(undefined8 *)&this[8].field_0x24 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[9].field_0x4,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[9].field_0x4 = iVar2;
  this[9].field_0x11 = this[9].field_0x11 & 0xfe;
  this[9].field_0x11 = this[9].field_0x11 | 2;
  *(undefined8 *)&this[9].field_0x8 = 0;
  this[9].field_0x10 = 0;
  *(undefined8 *)&this[9].field_0x18 = 0;
  *(undefined8 *)&this[9].field_0x20 = 0;
  *(undefined8 *)(this + 10) = 0;
  *(undefined8 *)&this[10].field_0x8 = 0;
  *(undefined8 *)&this[10].field_0x10 = 0;
  *(undefined8 *)&this[10].field_0x18 = 0;
  *(undefined8 *)&this[10].field_0x20 = 0;
  *(undefined8 *)(this + 0xb) = 0;
  *(undefined8 *)&this[0xb].field_0x8 = 0;
  *(undefined8 *)&this[0xb].field_0x10 = 0;
  *(undefined8 *)&this[0xb].field_0x18 = 0;
  *(undefined8 *)&this[0xb].field_0x20 = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)&this[0xc].field_0x8 = 0;
  *(undefined8 *)&this[0xc].field_0x10 = 0;
  *(undefined8 *)&this[0xc].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xc].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xc].field_0x20 = iVar2;
  this[0xd].field_0x5 = this[0xd].field_0x5 & 0xfe;
  this[0xd].field_0x5 = this[0xd].field_0x5 | 2;
  *(undefined8 *)&this[0xc].field_0x24 = 0;
  this[0xd].field_0x4 = 0;
  *(undefined8 *)&this[0xd].field_0x8 = 0;
  *(undefined8 *)&this[0xd].field_0x10 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xd].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xd].field_0x18 = iVar2;
  this[0xd].field_0x25 = this[0xd].field_0x25 & 0xfe;
  this[0xd].field_0x25 = this[0xd].field_0x25 | 2;
  *(undefined8 *)&this[0xd].field_0x1c = 0;
  this[0xd].field_0x24 = 0;
  *(undefined8 *)(this + 0xe) = 0;
  *(undefined8 *)&this[0xe].field_0x8 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xe].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xe].field_0x10 = iVar2;
  this[0xe].field_0x1d = this[0xe].field_0x1d & 0xfe;
  this[0xe].field_0x1d = this[0xe].field_0x1d | 2;
  *(undefined8 *)&this[0xe].field_0x14 = 0;
  this[0xe].field_0x1c = 0;
  *(undefined8 *)&this[0xe].field_0x20 = 0;
  *(undefined8 *)(this + 0xf) = 0;
  *(undefined8 *)&this[0xf].field_0x8 = 0;
  *(undefined8 *)&this[0xf].field_0x10 = 0;
  *(undefined8 *)&this[0xf].field_0x18 = 0;
  this[0xf].field_0x20 = 1;
  *(undefined4 *)&this[0xf].field_0x24 = 0xffffffff;
  *(undefined1 *)(this + 0x10) = 1;
  *(undefined4 *)&this[0x10].field_0x4 = 0xffffffff;
  this[0x10].field_0x8 = 1;
  *(undefined8 *)&this[0x10].field_0xc = 0xffffffffffffffff;
  *(undefined4 *)&this[0x10].field_0x14 = 0xffffffff;
  this[0x10].field_0x18 = 1;
  *(undefined4 *)&this[0x10].field_0x1c = 0xffffffff;
  this[0x10].field_0x20 = 1;
  *(undefined4 *)&this[0x10].field_0x24 = 0xffffffff;
  *(undefined1 *)(this + 0x11) = 1;
  *(undefined4 *)&this[0x11].field_0x4 = 0xffffffff;
  *(undefined4 *)&this[3].field_0x20 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,8,*(int *)&this[3].field_0x24,(ForAnyElementType *)&this[3].field_0x18,8,
             (int *)&this[3].field_0x24);
  plVar1 = *(longlong **)&this[3].field_0x18;
  *plVar1 = (longlong)&this[5].field_0x14;
  plVar1[1] = (longlong)&this[6].field_0xc;
  plVar1[2] = (longlong)&this[7].field_0x4;
  plVar1[3] = (longlong)&this[0xc].field_0x10;
  plVar1[4] = (longlong)&this[0xd].field_0x8;
  plVar1[5] = (longlong)(this + 0xe);
  plVar1[6] = (longlong)&this[7].field_0x24;
  plVar1[7] = (longlong)&this[8].field_0x1c;
  return;
}

// InternalConstructor<UNiagaraStaticMeshComponent> @ 14da3f070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UNiagaraStaticMeshComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UStaticMeshComponent *this;
  
  this = (UStaticMeshComponent *)param_1->Obj;
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xeb;
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
    this->_padding_ = (longlong)&UNiagaraStaticMeshComponent::_vftable__for__UObject__;
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNiagaraStaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNiagaraStaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UNiagaraStaticMeshComponent::_vftable__for__INavRelevantInterface__
    ;
    this->_padding_ =
         (longlong)&UNiagaraStaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UNiagaraStaticMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
    this->bEnableVertexColorMeshPainting = '\0';
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0x3f;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNiagaraNaniteRendererProperties> @ 14da3f140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraNaniteRendererProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraNaniteRendererProperties *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraNaniteRendererProperties::GetPrivateStaticClass();
  pUVar3 = (UNiagaraNaniteRendererProperties *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraNaniteRendererProperties *)0x0) {
    pUVar3 = UNiagaraNaniteRendererProperties::UNiagaraNaniteRendererProperties(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStaticMeshComponent> @ 14da3f1e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStaticMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStaticMeshComponent::GetPrivateStaticClass();
  this = (UStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNiagaraStaticMeshComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UNiagaraStaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNiagaraStaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UNiagaraStaticMeshComponent::_vftable__for__INavRelevantInterface__
    ;
    this->_padding_ =
         (longlong)&UNiagaraStaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UNiagaraStaticMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UNiagaraStaticMeshComponent> @ 14da3f2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraStaticMeshComponent * __cdecl NewObject<UNiagaraStaticMeshComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UNiagaraStaticMeshComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNiagaraStaticMeshComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNiagaraStaticMeshComponent *)
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

// UnsetShaderUAVs<FRHIComputeCommandList,FNiagaraNaniteGPUSceneCS> @ 14da3f620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FNiagaraNaniteGPUSceneCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FNiagaraNaniteGPUSceneCS,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FNiagaraNaniteGPUSceneCS *pFVar4;
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

// ~TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>,1,1> @ 14da40ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraRendererNanite::ReleaseComponents_::__l20::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::`20'::<lambda_1>,1,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l52::<lambda_1>,0,1> @ 14da40af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l52::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FNiagaraRendererNanite::PostSystemTick_GameThread_::__l52::<lambda_1>,0,1>
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::`52'::<lambda_1>,0,1>
        ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 8) < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l54::<lambda_2>,0,1> @ 14da40b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l54::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FNiagaraRendererNanite::PostSystemTick_GameThread_::__l54::<lambda_2>,0,1>
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::`54'::<lambda_2>,0,1>
        ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 8) < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
  }
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14da40fa4

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraStaticMeshComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraStaticMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UNiagaraStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNiagaraStaticMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14da40fb8

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraStaticMeshComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraStaticMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UNiagaraStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNiagaraStaticMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14da40fcc

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraStaticMeshComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraStaticMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UNiagaraStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNiagaraStaticMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14da40fe0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraStaticMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraStaticMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UNiagaraStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraStaticMeshComponent *)&this[-1].PendingCpuUpdateFunction.field_0x8,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14da40ff0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::__l18::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da41050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::`20'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da410a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l52::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::`52'::<lambda_1>,0,1>
        ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 8) < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da41130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l54::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::`54'::<lambda_2>,0,1>
        ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 8) < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da411c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FNiagaraNaniteGPUSceneCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FNiagaraNaniteGPUSceneCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da411f0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FNiagaraNaniteGPUSceneCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14da41250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
NiagaraStaticMeshComponentPrivate::FMeshSceneProxy::_scalar_deleting_destructor_
          (FMeshSceneProxy *this,uint param_1)

{
  FInstancedStaticMeshSceneProxy::~FInstancedStaticMeshSceneProxy
            ((FInstancedStaticMeshSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xdb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da41290

void * __thiscall
NiagaraStaticMeshComponentPrivate::FNaniteSceneProxy::_scalar_deleting_destructor_
          (FNaniteSceneProxy *this,uint param_1)

{
  Nanite::FSceneProxy::~FSceneProxy((FSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da412d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraRendererNanite::_scalar_deleting_destructor_(FNiagaraRendererNanite *this,uint param_1)

{
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar1;
  
  this->_padding_ = (longlong)&___7FNiagaraRendererNanite__6B_;
  ReleaseComponents(this);
  FVar1 = (this->MeshDatas).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
    FVar1 = (ForElementType<FNiagaraRendererNanite::FMeshData>)&this->MeshDatas;
  }
  DestructItems<FNiagaraRendererNanite::FMeshData,int>
            ((FMeshData *)FVar1,(this->MeshDatas).ArrayNum);
  FVar1 = (this->MeshDatas).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FNiagaraRenderer::~FNiagaraRenderer((FNiagaraRenderer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da41360

void * __thiscall
UNiagaraNaniteRendererProperties::_scalar_deleting_destructor_
          (UNiagaraNaniteRendererProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraNaniteRendererProperties__6B_;
  pFVar1 = (this->RendererLayout).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayout).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceDataFloatComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceDataBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).StaticBoolParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).TextureParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).VectorParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).ScalarParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MICOverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraNaniteMaterialOverride,int>
            ((FNiagaraNaniteMaterialOverride *)(this->OverrideMaterials).AllocatorInstance.Data,
             (this->OverrideMaterials).ArrayNum);
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da414a0

void * __thiscall
UNiagaraStaticMeshComponent::_scalar_deleting_destructor_
          (UNiagaraStaticMeshComponent *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  if (*(longlong *)&this->PendingCpuUpdateFunction != 0) {
    plVar1 = *(longlong **)&(this->PendingCpuUpdateFunction).field_0x28;
    plVar2 = (longlong *)&(this->PendingCpuUpdateFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x690);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraNaniteRendererProperties @ 14da42cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraNaniteRendererProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraNanite_init @ 14da42d00

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraNanite_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraParameterComponentBinding @ 14da42d10

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraParameterComponentBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStaticMeshComponent @ 14da42d20

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStaticMeshComponent(void)

{
  return;
}

// SetupBindings @ 14da468f0

void __cdecl
NiagaraNaniteRendererPropertiesLocal::SetupBindings(UNiagaraNaniteRendererProperties *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  FNiagaraTypeDefinition *pFVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  FVersionedNiagaraEmitterBase local_48;
  FNiagaraVariableAttributeBinding local_30;
  
  if (((param_1->PositionBinding).DataSetName == (FName)0x0) ||
     (pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                         (&(param_1->PositionBinding).ParamMapVariable.TypeDefHandle),
     (pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
    pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_30,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
    FVar1 = (pFVar4->ParamMapVariable).Name;
    (param_1->PositionBinding).RootName = pFVar4->RootName;
    (param_1->PositionBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
    *(undefined8 *)&(param_1->PositionBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(param_1->PositionBinding).DataSetName.Number = uVar2;
    pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_30,(FNiagaraVariableBase *)&INiagaraModule::Particles_MeshOrientation
                       );
    FVar1 = (pFVar4->ParamMapVariable).Name;
    (param_1->RotationBinding).RootName = pFVar4->RootName;
    (param_1->RotationBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
    *(undefined8 *)&(param_1->RotationBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(param_1->RotationBinding).DataSetName.Number = uVar2;
    pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_30,(FNiagaraVariableBase *)&INiagaraModule::Particles_Scale);
    FVar1 = (pFVar4->ParamMapVariable).Name;
    (param_1->ScaleBinding).RootName = pFVar4->RootName;
    (param_1->ScaleBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
    *(undefined8 *)&(param_1->ScaleBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(param_1->ScaleBinding).DataSetName.Number = uVar2;
    pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_30,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
    FVar1 = (pFVar4->ParamMapVariable).Name;
    (param_1->RendererVisibilityTagBinding).RootName = pFVar4->RootName;
    (param_1->RendererVisibilityTagBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
    *(undefined8 *)&(param_1->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(param_1->RendererVisibilityTagBinding).DataSetName.Number = uVar2;
    pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_30,(FNiagaraVariableBase *)&INiagaraModule::Particles_MeshIndex);
    FVar1 = (pFVar4->ParamMapVariable).Name;
    (param_1->MeshIndexBinding).RootName = pFVar4->RootName;
    (param_1->MeshIndexBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
    *(undefined8 *)&(param_1->MeshIndexBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(param_1->MeshIndexBinding).DataSetName.Number = uVar2;
    UNiagaraRendererProperties::GetOuterEmitterBase((UNiagaraRendererProperties *)param_1,&local_48)
    ;
    if ((((uint)param_1->_padding_ >> 0xc & 1) == 0) &&
       ((local_48.Emitter != (UNiagaraEmitterBase *)0x0 &&
        (((uint)(local_48.Emitter)->_padding_ >> 10 & 1) == 0)))) {
      FNiagaraVariableAttributeBinding::SetAsPreviousValue
                (&param_1->PreviousPositionBinding,&param_1->PositionBinding,&local_48,
                 param_1->SourceMode);
      FNiagaraVariableAttributeBinding::SetAsPreviousValue
                (&param_1->PreviousRotationBinding,&param_1->RotationBinding,&local_48,
                 param_1->SourceMode);
      FNiagaraVariableAttributeBinding::SetAsPreviousValue
                (&param_1->PreviousScaleBinding,&param_1->ScaleBinding,&local_48,param_1->SourceMode
                );
    }
  }
  return;
}

// Z_Construct_UClass_UNiagaraNaniteRendererProperties_NoRegister @ 14da48bc0

UClass * __cdecl Z_Construct_UClass_UNiagaraNaniteRendererProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraNanite",L"NiagaraNaniteRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.InnerSingleton,
               UNiagaraNaniteRendererProperties::
               StaticRegisterNativesUNiagaraNaniteRendererProperties,0x2b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraNaniteRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraNaniteRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStaticMeshComponent_NoRegister @ 14da48c80

UClass * __cdecl Z_Construct_UClass_UNiagaraStaticMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraNanite",L"NiagaraStaticMeshComponent",
               &Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.InnerSingleton,
               UNiagaraStaticMeshComponent::StaticRegisterNativesUNiagaraStaticMeshComponent,0x690,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UNiagaraStaticMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.InnerSingleton;
}

// IMPLEMENT_MODULE_NiagaraNanite @ 14da48d40

void __cdecl IMPLEMENT_MODULE_NiagaraNanite(void)

{
  return;
}

// OnCreateRenderThreadResources'' @ 15045bb30

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources);
  return;
}

// OnDestroyRenderThreadResources'' @ 15045bb70

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
OnDestroyRenderThreadResources__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_)
    ;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRendererEnabled'' @ 15045bbb0

void __cdecl NiagaraRendererNaniteLocal::_dynamic_atexit_destructor_for__CVarRendererEnabled__(void)

{
  CVarRendererEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRendererEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'RendererPropertiesToDeferredInit'' @ 15045bbd0

void __cdecl
NiagaraNaniteRendererPropertiesLocal::
_dynamic_atexit_destructor_for__RendererPropertiesToDeferredInit__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RendererPropertiesToDeferredInit.AllocatorInstance.Data;
  if (RendererPropertiesToDeferredInit.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RendererPropertiesToDeferredInit.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

