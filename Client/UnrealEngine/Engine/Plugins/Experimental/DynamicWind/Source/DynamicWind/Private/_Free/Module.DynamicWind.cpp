// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 108

// OnCreateRenderThreadResources'' @ 1413e61e0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 1413e6200

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// ShaderTypeRegistration'' @ 1413e6220

void __cdecl `dynamic_initializer_for_'FDynamicWindEvalCS::ShaderTypeRegistration__(void)

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
  local_18[0] = &FDynamicWindEvalCS::ShaderTypeRegistration;
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
  atexit(`dynamic_atexit_destructor_for_'FDynamicWindEvalCS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 1413e6320

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  TRefCountPtr<FRHISamplerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticSamplerState<1,1,1,1,0,1,0,0>::CreateRHI();
    this = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHISamplerState *)
        &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHISamplerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicWindEnable'' @ 1413e63e0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__CVarDynamicWindEnable__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDynamicWindEnable,L"DynamicWind.Enable",local_res8,
             L"Whether or not to enable the dynamic wind subsystem",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicWindEnable__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicWindOverrideAmplitude'' @ 1413e6430

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVarDynamicWindOverrideAmplitude__(void)

{
  float local_res8 [8];
  
  local_res8[0] = -1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDynamicWindOverrideAmplitude,L"DynamicWind.OverrideAmplitude",local_res8,
             L"Overrides the wind amplitude. If this value is below 0.0f, then use the default wind amplitude set on the dynamic wind actor."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicWindOverrideAmplitude__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicWindOverrideRateOfChange'' @ 1413e6480

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVarDynamicWindOverrideRateOfChange__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDynamicWindOverrideRateOfChange,L"DynamicWind.OverrideRateOfChange",local_res8,
             L"Overrides the rate of change per second of the wind amplitude. It is used to smooth the wind amplitude over time to prevent animation popping."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicWindOverrideRateOfChange__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicWindOverrideSpeed'' @ 1413e64d0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__CVarDynamicWindOverrideSpeed__(void)

{
  float local_res8 [8];
  
  local_res8[0] = -1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDynamicWindOverrideSpeed,L"DynamicWind.OverrideSpeed",local_res8,
             L"Overrides the wind speed. If this value is below 0.0f, then use the default wind speed set on the dynamic wind actor."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicWindOverrideSpeed__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicWindPreferAsyncCompute'' @ 1413e6520

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVarDynamicWindPreferAsyncCompute__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDynamicWindPreferAsyncCompute,L"DynamicWind.PreferAsyncCompute",local_res8,
             L"Run dynamic wind on async compute, if supported.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicWindPreferAsyncCompute__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicWindUseSine'' @ 1413e6570

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__CVarDynamicWindUseSine__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDynamicWindUseSine,L"DynamicWind.UseSine",local_res8,
             L"Forces dynamic wind to use a basic sine function to transform the bones.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicWindUseSine__);
  return;
}

// `dynamic_initializer_for_'GPUStat_DynamicWind'' @ 1413e65c0

void __cdecl _dynamic_initializer_for__GPUStat_DynamicWind__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_DynamicWind__);
  return;
}

// `dynamic_initializer_for_'LogDynamicWind'' @ 1413e65e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDynamicWind__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogDynamicWind,L"LogDynamicWind",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDynamicWind__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDynamicWind'' @ 1413e6620

void __cdecl _dynamic_initializer_for__ModuleRegistrantDynamicWind__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DynamicWind";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DynamicWind",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDynamicWindModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion'' @ 1413e6670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesAmbientOcclusion>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesAmbientOcclusion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion,
               *pFVar1,L"Ambient Occlusion","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesLightCache'' @ 1413e6700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesLightCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesLightCache ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesLightCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesLightCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesLightCache,
               *pFVar1,L"Light Cache","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking'' @ 1413e6790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesMaterialBaking>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesMaterialBaking");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking,
               *pFVar1,L"Material Baking","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesShadows'' @ 1413e6820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesShadows__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesShadows ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesShadows>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesShadows");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesShadows,*pFVar1,
               L"Shadows","STATGROUP_HeterogeneousVolumesRT","STATCAT_HeterogeneousVolumes",
               L"Heterogeneous Volumes RT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering'' @ 1413e68b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesSingleScattering>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesSingleScattering");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering,
               *pFVar1,L"Single Scattering","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h__Script_DynamicWind_4073090340'' @ 1413e6940

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h__Script_DynamicWind_4073090340__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DynamicWind",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h__Script_DynamicWind_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindParameters_h__Script_DynamicWind_1841098288'' @ 1413e6980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindParameters_h__Script_DynamicWind_1841098288__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DynamicWind",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindParameters_h__Script_DynamicWind_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h__Script_DynamicWind_630950846'' @ 1413e69c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h__Script_DynamicWind_630950846__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DynamicWind",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h__Script_DynamicWind_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h__Script_DynamicWind_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h__Script_DynamicWind_2236789194'' @ 1413e6a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h__Script_DynamicWind_2236789194__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DynamicWind",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h__Script_DynamicWind_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DynamicWind'' @ 1413e6a50

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DynamicWind__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x30e4b1f8;
  local_res8[0].DeclarationsHash = 0xf2ff1926;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DynamicWind,L"/Script/DynamicWind",
             &Z_Registration_Info_UPackage__Script_DynamicWind,local_res8);
  return;
}

// NewProp_bIsGroundCover_SetBit @ 14da48d50

void __cdecl
Z_Construct_UClass_UDynamicWindSkeletalData_Statics::NewProp_bIsGroundCover_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UPackage__Script_DynamicWind @ 14da48d60

UPackage * __cdecl Z_Construct_UPackage__Script_DynamicWind(void)

{
  if (Z_Registration_Info_UPackage__Script_DynamicWind.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DynamicWind.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_DynamicWind.OuterSingleton;
}

// Z_Construct_UClass_UDynamicWindData @ 14da48f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDynamicWindData(void)

{
  if (Z_Registration_Info_UClass_UDynamicWindData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDynamicWindData.OuterSingleton,
               &Z_Construct_UClass_UDynamicWindData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDynamicWindData.OuterSingleton;
}

// Z_Construct_UClass_UDynamicWindSubsystem @ 14da48f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDynamicWindSubsystem(void)

{
  if (Z_Registration_Info_UClass_UDynamicWindSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDynamicWindSubsystem.OuterSingleton,
               &Z_Construct_UClass_UDynamicWindSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDynamicWindSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UDynamicWindSubsystem_GetBlendedWindAmplitude @ 14da48fa0

UFunction * __cdecl Z_Construct_UFunction_UDynamicWindSubsystem_GetBlendedWindAmplitude(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicWindSubsystem_GetBlendedWindAmplitude_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FDynamicWindParameters @ 14da49020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicWindParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicWindParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicWindParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicWindParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicWindParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDynamicWindParameters.InnerSingleton;
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

// Z_Construct_UFunction_UDynamicWindSubsystem_UpdateWindParameters @ 14da490a0

UFunction * __cdecl Z_Construct_UFunction_UDynamicWindSubsystem_UpdateWindParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDynamicWindSubsystem_UpdateWindParameters_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 14da490f0

void * __cdecl Z_Construct_UScriptStruct_FDynamicWindParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicWindParameters,&UE::CoreUObject::Private::Construct<FDynamicWindParameters>,&UE::CoreUObject::Private::ConstructForTests<FDynamicWindParameters>,&UE::CoreUObject::Private::Destruct<FDynamicWindParameters>,&UE::CoreUObject::Private::Copy<FDynamicWindParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14da49390

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDynamicWindModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDynamicWindModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da49b00

void * __thiscall
FDynamicWindModule::_scalar_deleting_destructor_(FDynamicWindModule *this,uint param_1)

{
  *this = (FDynamicWindModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UDynamicWindSkeletalData @ 14da49cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDynamicWindSkeletalData(void)

{
  if (Z_Registration_Info_UClass_UDynamicWindSkeletalData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDynamicWindSkeletalData.OuterSingleton,
               &Z_Construct_UClass_UDynamicWindSkeletalData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDynamicWindSkeletalData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDynamicWindBoneChainData @ 14da49d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicWindBoneChainData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicWindBoneChainData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicWindBoneChainData.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicWindBoneChainData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicWindBoneChainData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDynamicWindBoneChainData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDynamicWindExtraBoneData @ 14da49db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicWindExtraBoneData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicWindExtraBoneData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicWindExtraBoneData.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicWindExtraBoneData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicWindExtraBoneData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDynamicWindExtraBoneData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDynamicWindSimulationGroupBoneLookup @ 14da49e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicWindSimulationGroupBoneLookup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupBoneLookup.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupBoneLookup.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicWindSimulationGroupBoneLookup_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupBoneLookup.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupBoneLookup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDynamicWindSimulationGroupData @ 14da49eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicWindSimulationGroupData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupData.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicWindSimulationGroupData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupData.InnerSingleton;
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

// NewProp_bUseDualInfluence_SetBit @ 14da49f30

void __cdecl
Z_Construct_UScriptStruct_FDynamicWindSimulationGroupData_Statics::NewProp_bUseDualInfluence_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsTrunkGroup_SetBit @ 14da49f40

void __cdecl
Z_Construct_UScriptStruct_FDynamicWindSimulationGroupData_Statics::NewProp_bIsTrunkGroup_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewStructOps @ 14da49f50

void * __cdecl Z_Construct_UScriptStruct_FDynamicWindSimulationGroupData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicWindSimulationGroupData,&UE::CoreUObject::Private::Construct<FDynamicWindSimulationGroupData>,&UE::CoreUObject::Private::ConstructForTests<FDynamicWindSimulationGroupData>,&UE::CoreUObject::Private::Destruct<FDynamicWindSimulationGroupData>,&UE::CoreUObject::Private::Copy<FDynamicWindSimulationGroupData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14da49f90

void * __cdecl
Z_Construct_UScriptStruct_FDynamicWindSimulationGroupBoneLookup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicWindSimulationGroupBoneLookup,&UE::CoreUObject::Private::Construct<FDynamicWindSimulationGroupBoneLookup>,&UE::CoreUObject::Private::ConstructForTests<FDynamicWindSimulationGroupBoneLookup>,&UE::CoreUObject::Private::Destruct<FDynamicWindSimulationGroupBoneLookup>,&UE::CoreUObject::Private::Copy<FDynamicWindSimulationGroupBoneLookup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14da49fd0

void * __cdecl Z_Construct_UScriptStruct_FDynamicWindBoneChainData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicWindBoneChainData,&UE::CoreUObject::Private::Construct<FDynamicWindBoneChainData>,&UE::CoreUObject::Private::ConstructForTests<FDynamicWindBoneChainData>,&UE::CoreUObject::Private::Destruct<FDynamicWindBoneChainData>,&UE::CoreUObject::Private::Copy<FDynamicWindBoneChainData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14da4a010

void * __cdecl Z_Construct_UScriptStruct_FDynamicWindExtraBoneData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicWindExtraBoneData,&UE::CoreUObject::Private::Construct<FDynamicWindExtraBoneData>,&UE::CoreUObject::Private::ConstructForTests<FDynamicWindExtraBoneData>,&UE::CoreUObject::Private::Destruct<FDynamicWindExtraBoneData>,&UE::CoreUObject::Private::Copy<FDynamicWindExtraBoneData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsEnabled_SetBit @ 14da4a050

void __cdecl
Z_Construct_UClass_UDynamicWindSkeletalData_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// AddLambda<`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_> @ 14da4a060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
::AddLambda<_UDynamicWindSubsystem::PostInitialize_::__l11::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDynamicWindSubsystem *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UDynamicWindSubsystem *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFSkinnedSceneProxy_Nanite___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::`11'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UDynamicWindSubsystem *)0x0;
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
      pUVar5 = (UDynamicWindSubsystem *)*puVar3;
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

// AddLambda<`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_> @ 14da4a2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
::AddLambda<_UDynamicWindSubsystem::PostInitialize_::__l11::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDynamicWindSubsystem *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (UDynamicWindSubsystem *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFSkinnedSceneProxy_Nanite___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::`11'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (UDynamicWindSubsystem *)0x0;
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
      pUVar5 = (UDynamicWindSubsystem *)*puVar3;
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

// AddPass<`FComputeShaderUtils::AddPass<FDynamicWindEvalCS>'::__l2::<lambda_1>_> @ 14da4a500

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FDynamicWindEvalCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDynamicWindEvalCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDynamicWindEvalCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDynamicWindEvalCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandTextureClearCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FDynamicWindEvalCS>'::__l2::<lambda_1>_> @ 14da4a8f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FDynamicWindEvalCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDynamicWindEvalCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDynamicWindEvalCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDynamicWindEvalCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandTextureClearCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddSetupTask<`FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_> @ 14da4ad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FRDGBuilder::
AddSetupTask<_FDynamicWindTransformProvider::ProvideTransforms_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
          (FRDGBuilder *this,<lambda_1> *param_1,FPipe *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_3,
          ETaskPriority param_4,bool param_5,ERDGSetupTaskWaitPoint param_6)

{
  FDynamicWindBlockHeader *pFVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FDynamicWindBlockHeader *pFVar5;
  FTaskHandle *pFVar6;
  FTaskBase *pFVar7;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  char cVar10;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddSetupTask<_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this_00;
  <lambda_1> *p<Var11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *pTVar15;
  ETaskPriority EVar16;
  undefined7 in_stack_00000029;
  byte in_stack_00000040;
  undefined1 auStackY_148 [32];
  undefined1 local_116 [6];
  FTaskTagScope local_110;
  undefined1 local_100 [24];
  undefined1 local_e8 [16];
  TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
  local_d8;
  FProviderIndirection *local_78;
  atomic<UE::Tasks::Private::FTaskBase_*> aStack_70;
  atomic<unsigned___int64> local_68;
  TEventCount<unsigned_int> *pTStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar8 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
           CONCAT71(in_stack_00000029,param_4);
  param_1->BlockHeaders = (FDynamicWindBlockHeader *)0x0;
  if (((param_6 == Compile) || (bVar9 = IsImmediateMode(), bVar9)) && (pTVar8->ArrayNum != 0)) {
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (pTVar8,(FTimespan)0x7fffffffffffffff);
  }
  local_e8._0_8_ = param_2->LastTask;
  local_e8._8_8_ = param_2->TaskCount;
  TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
  ::
  TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
            ((TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
              *)(local_e8 + 0x10),
             (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
              *)&param_2->EmptyEventRef);
  cVar10 = (this->ParallelSetup).bEnabled;
  local_78 = (FProviderIndirection *)param_2[2].DebugName;
  aStack_70 = param_2[3].LastTask;
  bVar9 = (bool)cVar10 == false;
  local_68 = param_2[3].TaskCount;
  pTStack_60 = param_2[3].EmptyEventRef.Object;
  if (this->bCompiling != false) {
    cVar10 = this->bParallelCompileEnabled;
  }
  if (param_6 == Compile) {
LAB_14da4af4f:
    FTaskTagScope::FTaskTagScope(&local_110,EParallelRenderingThread);
    `FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>::operator()(local_e8);
    FTaskTagScope::~FTaskTagScope(&local_110);
  }
  else {
    if (cVar10 == '\0') {
      pFVar14 = (pTVar8->AllocatorInstance).Data;
      iVar12 = pTVar8->ArrayNum;
      pFVar3 = pFVar14 + (longlong)iVar12 * 8;
      while( true ) {
        if (pTVar8->ArrayNum != iVar12) {
          `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_116);
        }
        if (pFVar14 == pFVar3) goto LAB_14da4af4f;
        if ((*(longlong *)pFVar14 != 0) && (*(char *)(*(longlong *)pFVar14 + 0xd0) == '\0')) break;
        pFVar14 = pFVar14 + 8;
      }
    }
    iVar12 = (int)param_5 - (int)(this->ParallelSetup).TaskPriorityBias;
    if (param_3 == (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar13 = 4;
      if (iVar12 < 4) {
        iVar13 = iVar12;
      }
      EVar16 = High;
      if (0 < iVar13) {
        EVar16 = (ETaskPriority)iVar13;
      }
      this_00 = UE::Tasks::Private::
                TExecutableTask<`FRDGBuilder::AddSetupTask<`FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
                ::Create(L"FRDGBuilder::AddSetupTask",(<lambda_1> *)local_e8,EVar16,bVar9,None);
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                ((FTaskBase *)this_00,pTVar8,true);
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x180);
      p<Var11 = (<lambda_1> *)(local_100 + 8);
    }
    else {
      iVar13 = 4;
      if (iVar12 < 4) {
        iVar13 = iVar12;
      }
      EVar16 = High;
      if (0 < iVar13) {
        EVar16 = (ETaskPriority)iVar13;
      }
      this_00 = UE::Tasks::Private::
                TExecutableTask<`FRDGBuilder::AddSetupTask<`FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
                ::Create(L"FRDGBuilder::AddSetupTask",(<lambda_1> *)local_e8,EVar16,bVar9,None);
      LOCK();
      *(longlong *)&param_3->ArrayNum = *(longlong *)&param_3->ArrayNum + 1;
      UNLOCK();
      LOCK();
      *(int *)&this_00->field_0x34 = *(int *)&this_00->field_0x34 + 1;
      UNLOCK();
      *(TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> **)&this_00->field_0x38
           = param_3;
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                ((FTaskBase *)this_00,pTVar8,true);
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x180);
      p<Var11 = (<lambda_1> *)local_100;
    }
    if (param_1 == p<Var11) {
      if (this_00 !=
          (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddSetupTask<_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
           *)0x0) {
        LOCK();
        puVar2 = &this_00->field_0x30;
        iVar12 = *(int *)puVar2;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (*(code *)**(undefined8 **)this_00)(this_00,1);
        }
      }
    }
    else {
      pFVar5 = param_1->BlockHeaders;
      param_1->BlockHeaders = (FDynamicWindBlockHeader *)this_00;
      if (pFVar5 != (FDynamicWindBlockHeader *)0x0) {
        LOCK();
        pFVar1 = pFVar5 + 3;
        uVar4 = pFVar1->SkeletonDataIndex;
        pFVar1->SkeletonDataIndex = pFVar1->SkeletonDataIndex - 1;
        UNLOCK();
        if (uVar4 == 1) {
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
        }
      }
    }
  }
  if (param_1->BlockHeaders != (FDynamicWindBlockHeader *)0x0) {
    pTVar15 = (this->ParallelSetup).Tasks.Elements + in_stack_00000040;
    iVar12 = pTVar15->ArrayNum;
    if (iVar12 == pTVar15->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                         (0x808,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
    }
    pTVar15->ArrayNum = iVar12 + 1;
    pFVar6 = (pTVar15->AllocatorInstance).Data;
    pFVar6[iVar12].Pimpl.Reference = (FTaskBase *)0x0;
    pFVar7 = (FTaskBase *)param_1->BlockHeaders;
    pFVar6[iVar12].Pimpl.Reference = pFVar7;
    if (pFVar7 != (FTaskBase *)0x0) {
      LOCK();
      *(int *)&(pFVar7->RefCount).field_0x0 = *(int *)&(pFVar7->RefCount).field_0x0 + 1;
      UNLOCK();
    }
  }
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData.SecondaryData.Data != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_d8.Hash.SecondaryData.SecondaryData.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
              *)(local_e8 + 0x10));
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// BindForLegacyShaderParameters<FDynamicWindEvalCS::FParameters> @ 14da4b5b0

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
BindForLegacyShaderParameters<FDynamicWindEvalCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FDynamicWindEvalCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// CastChecked<USkeletalMesh,USkinnedAsset_const_> @ 14da4b610

USkeletalMesh * __cdecl CastChecked<USkeletalMesh,USkinnedAsset_const_>(USkinnedAsset *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (USkinnedAsset *)0x0) {
    pFVar3 = GetTypeName<USkeletalMesh>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USkeletalMesh *)param_1;
  }
  pFVar3 = GetTypeName<USkeletalMesh>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<USkinnedAsset_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<USkeletalMesh,USkinnedAsset> @ 14da4b6d0

USkeletalMesh * __cdecl CastChecked<USkeletalMesh,USkinnedAsset>(USkinnedAsset *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (USkinnedAsset *)0x0) {
    pFVar3 = GetTypeName<USkeletalMesh>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USkeletalMesh *)param_1;
  }
  pFVar3 = GetTypeName<USkeletalMesh>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<USkinnedAsset>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ClearUnusedGraphResources<FDynamicWindEvalCS> @ 14da4b790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FDynamicWindEvalCS>
          (TShaderRefBase<FDynamicWindEvalCS,FShaderMapPointerTable> *param_1,
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

// DestructItems<FDynamicWindSimulationGroupBoneLookup,int> @ 14da4b850

void __cdecl
DestructItems<FDynamicWindSimulationGroupBoneLookup,int>
          (FDynamicWindSimulationGroupBoneLookup *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->BoneIndices).Hash.SecondaryData;
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
      pFVar1 = pFVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`UDynamicWindSubsystem::UpdateWindParameters'::__l5::TSTR_UpdateFoliageWindSimulationInputs171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14da4bcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UDynamicWindSubsystem::UpdateWindParameters_::__l5::TSTR_UpdateFoliageWindSimulationInputs171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  FMutex *this;
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_char> aVar3;
  atomic<unsigned_int> aVar4;
  TStatIdData *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *pFVar18;
  atomic<unsigned___int64> aVar19;
  FRHICommandListImmediate *pFVar20;
  undefined8 uVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar22;
  FTaskBase *this_02;
  FName FVar23;
  FNameEntryId FVar24;
  FNameEntryId FVar25;
  uint local_res10;
  uint uStackX_14;
  ETaskPriority local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`UDynamicWindSubsystem::UpdateWindParameters'::__l5::TSTR_UpdateFoliageWindSimulationInputs171>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      pFVar18 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (pFVar18 != (FTaskBase *)0x0) {
        pFVar18->Pipe = (FPipe *)0x0;
        pFVar18->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
        pFVar18->RefCount = (atomic<unsigned_int>)0x1;
        pFVar18->NumLocks = (atomic<unsigned_int>)0x1;
        (pFVar18->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
        pFVar18->TaskTriggered = (atomic<bool>)0x0;
        pFVar18->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
        aVar19 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
        pFVar18->TraceId = aVar19;
        this = &(pFVar18->Prerequisites).Mutex;
        (pFVar18->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
        (pFVar18->Prerequisites).Prerequisites.ArrayNum = 0;
        (pFVar18->Prerequisites).Prerequisites.ArrayMax = 1;
        this->State = (atomic<unsigned_char>)0x1;
        *(undefined ***)&(pFVar18->LowLevelTask).field_0x28 =
             &
             ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(undefined8 *)&(pFVar18->LowLevelTask).field_0x38 = 0xe800000000000020;
        *(undefined8 *)&(pFVar18->LowLevelTask).field_0x30 = 0;
        (pFVar18->Subsequents).Subsequents.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
        (pFVar18->Subsequents).Subsequents.ArrayNum = 0;
        (pFVar18->Subsequents).Subsequents.ArrayMax = 1;
        (pFVar18->Subsequents).bIsClosed = (atomic<bool>)0x0;
        (pFVar18->Subsequents).Mutex = (atomic<unsigned_char>)0x0;
        pFVar18->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
        LOCK();
        aVar3 = this->State;
        this->State = (atomic<unsigned_char>)((char)this->State + -1);
        UNLOCK();
        if (((byte)aVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this);
        }
        pFVar18->_padding_ =
             (longlong)
             &
             ___7__TGraphTask_V__TRenderCommandTask_V__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___FRenderThreadCommandPipe____6B_
        ;
        this_02 = pFVar18;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)param_1;
      uVar10 = param_1->field_0x2c;
      uVar11 = param_1->field_0x2d;
      uVar12 = *(undefined2 *)&param_1->field_0x2e;
      this_02[1].StateChangeEvent = (TEventCount<unsigned_int>)*(undefined4 *)&param_1->field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&param_1->field_0x28 = 0;
      uVar13 = *(undefined4 *)&param_1->field_0x18;
      uVar14 = *(undefined4 *)&param_1->field_0x1c;
      this_02[1]._padding_ = *(longlong *)&param_1->field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&param_1->field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_res18,
                 (EExtendedTaskPriority *)&local_res10);
      UE::Tasks::Private::FTaskBase::Init
                (this_02,L"GraphTask",local_res18[0],(EExtendedTaskPriority)local_res10,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar17);
    }
    goto LAB_14da4c186;
  }
  pTVar5 = (pFVar17->StatId).StatIdPtr;
  FVar25.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar23 = *(FName *)&pTVar5->Name;
  FVar24 = FVar23.ComparisonIndex.Value;
  uVar16 = FVar23.Number;
  if ((FVar24.Value == 0) && (uVar16 == 0)) {
LAB_14da4c078:
    bVar7 = false;
    FVar23 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(pTVar5->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar24.Value;
        local_68.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(pTVar5->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14da4c078;
    local_res10 = FVar24.Value;
    uStackX_14 = uVar16;
    local_58 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar7 = true;
    FVar25.Value = local_58.ComparisonIndex.Value;
  }
  pFVar20 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar6 = *(code **)param_1;
  plVar22 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar22 = *(longlong **)&param_1->field_0x28;
  }
  uVar21 = (**(code **)(*plVar22 + 8))();
  (*pcVar6)(uVar21,pFVar20);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar25.Value;
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
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_14da4c186:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetFullNameForCastLogError<USkinnedAsset_const_> @ 14da4c3c0

FString * __cdecl
GetFullNameForCastLogError<USkinnedAsset_const_>
          (FString *__return_storage_ptr__,USkinnedAsset *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<USkinnedAsset> @ 14da4c3f0

FString * __cdecl
GetFullNameForCastLogError<USkinnedAsset>(FString *__return_storage_ptr__,USkinnedAsset *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// InternalConstructor<UDynamicWindData> @ 14da4c420

void __cdecl InternalConstructor<UDynamicWindData>(FObjectInitializer *param_1)

{
  UTransformProviderData *this;
  
  this = (UTransformProviderData *)param_1->Obj;
  if (this != (UTransformProviderData *)0x0) {
    UTransformProviderData::UTransformProviderData(this,param_1);
    this->_padding_ = (longlong)&___7UDynamicWindData__6B_;
  }
  return;
}

// InternalConstructor<UDynamicWindSkeletalData> @ 14da4c450

void __cdecl InternalConstructor<UDynamicWindSkeletalData>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDynamicWindSkeletalData__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x4 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x4 = 0x80;
    *(undefined4 *)&this[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[3].field_0xc = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x4 = 0x80;
    *(undefined4 *)&this[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[5].field_0xc = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined4 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
  }
  return;
}

// InternalConstructor<UDynamicWindSubsystem> @ 14da4c520

void __cdecl InternalConstructor<UDynamicWindSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDynamicWindSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xdfd4874b;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xee57466d;
    *(undefined4 *)&this[1]._padding_ = 0x883d6419;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xafe99eac;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDynamicWindData> @ 14da4c580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDynamicWindData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTransformProviderData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDynamicWindData::GetPrivateStaticClass();
  this = (UTransformProviderData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTransformProviderData *)0x0) {
    UTransformProviderData::UTransformProviderData(this,param_1);
    this->_padding_ = (longlong)&___7UDynamicWindData__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDynamicWindSkeletalData> @ 14da4c630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDynamicWindSkeletalData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDynamicWindSkeletalData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDynamicWindSkeletalData__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0xc = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDynamicWindSubsystem> @ 14da4c780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDynamicWindSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDynamicWindSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDynamicWindSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// UnsetShaderUAVs<FRHIComputeCommandList,FDynamicWindEvalCS> @ 14da4c920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FDynamicWindEvalCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FDynamicWindEvalCS,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FDynamicWindEvalCS *pFVar4;
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

// get<1,TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_const_&> @ 14da4cbe0

FSkeletonEntry * __cdecl
get<1,TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_const_&>
          (TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry> *param_1)

{
  return (FSkeletonEntry *)&param_1->field_0x10;
}

// get<0,TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_const_&> @ 14da4cbf0

FGuid * __cdecl
get<0,TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_const_&>
          (TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry> *param_1)

{
  return (FGuid *)param_1;
}

// ~TFunction_OwnedObject<`UDynamicWindSubsystem::UpdateWindParameters'::__l5::<lambda_1>,1,1> @ 14da4d530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicWindSubsystem::UpdateWindParameters'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UDynamicWindSubsystem::UpdateWindParameters_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicWindSubsystem::UpdateWindParameters'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14da4e330

void * __thiscall
IBaseDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e360

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e390

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy,`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDynamicWindTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDynamicWindTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e3f0

void * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
::_scalar_deleting_destructor_
          (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e450

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e480

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FRDGBuilder::AddSetupTask<`FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x180,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e4e0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicWindSubsystem::UpdateWindParameters'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDynamicWindSubsystem::UpdateWindParameters'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e560

void * __thiscall
FRDGAllocator::
TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::FUploadData>
::_scalar_deleting_destructor_
          (TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::FUploadData>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Alloc).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Alloc).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e5c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FDynamicWindEvalCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FDynamicWindEvalCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e5f0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FDynamicWindEvalCS>'::__l2::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 14da4e650

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FDynamicWindDataRenderProxy::_scalar_deleting_destructor_
          (FDynamicWindDataRenderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTransformProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e690

void * __thiscall
UDynamicWindData::_scalar_deleting_destructor_(UDynamicWindData *this,uint param_1)

{
  *(undefined ***)this = &___7UDynamicWindData__6B_;
  UTransformProviderData::~UTransformProviderData((UTransformProviderData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e6f0

void * __thiscall
UDynamicWindSkeletalData::_scalar_deleting_destructor_(UDynamicWindSkeletalData *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDynamicWindSkeletalData__6B_;
  *(undefined4 *)&(this->ExtraBonesData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExtraBonesData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindExtraBoneData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindExtraBoneData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindExtraBoneData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExtraBonesData);
  *(undefined4 *)&(this->BoneChains).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneChains).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindBoneChainData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindBoneChainData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindBoneChainData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneChains);
  DestructItems<FDynamicWindSimulationGroupBoneLookup,int>
            ((FDynamicWindSimulationGroupBoneLookup *)
             (this->SimulationGroupBones).AllocatorInstance.Data,
             (this->SimulationGroupBones).ArrayNum);
  pFVar2 = (this->SimulationGroupBones).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SimulationGroups).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da4e7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UDynamicWindSubsystem::_scalar_deleting_destructor_(UDynamicWindSubsystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDynamicWindSubsystem__6B_;
  TDefaultDelete<FDynamicWindTransformProvider>::operator()
            ((TDefaultDelete<FDynamicWindTransformProvider> *)&this->TransformProvider,
             (this->TransformProvider).Ptr);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDynamicWindData @ 14da4f4d0

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicWindData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDynamicWindParameters @ 14da4f4e0

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicWindParameters(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDynamicWindSkeletalData @ 14da4f4f0

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicWindSkeletalData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDynamicWindSubsystem @ 14da4f500

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicWindSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDynamicWind_init @ 14da4f510

void __cdecl EmptyLinkFunctionForGeneratedCodeDynamicWind_init(void)

{
  return;
}

// Z_Construct_UClass_UDynamicWindData_NoRegister @ 14da54420

UClass * __cdecl Z_Construct_UClass_UDynamicWindData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicWindData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DynamicWind",L"DynamicWindData",
               &Z_Registration_Info_UClass_UDynamicWindData.InnerSingleton,
               UDynamicWindData::StaticRegisterNativesUDynamicWindData,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicWindData>,
               InternalVTableHelperCtorCaller<UDynamicWindData>,local_res8,
               UTransformProviderData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicWindData.InnerSingleton;
}

// Z_Construct_UClass_UDynamicWindSkeletalData_NoRegister @ 14da544e0

UClass * __cdecl Z_Construct_UClass_UDynamicWindSkeletalData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicWindSkeletalData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DynamicWind",L"DynamicWindSkeletalData",
               &Z_Registration_Info_UClass_UDynamicWindSkeletalData.InnerSingleton,
               UDynamicWindSkeletalData::StaticRegisterNativesUDynamicWindSkeletalData,0xf8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicWindSkeletalData>,
               InternalVTableHelperCtorCaller<UDynamicWindSkeletalData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicWindSkeletalData.InnerSingleton;
}

// Z_Construct_UClass_UDynamicWindSubsystem_NoRegister @ 14da545a0

UClass * __cdecl Z_Construct_UClass_UDynamicWindSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicWindSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DynamicWind",L"DynamicWindSubsystem",
               &Z_Registration_Info_UClass_UDynamicWindSubsystem.InnerSingleton,
               UDynamicWindSubsystem::StaticRegisterNativesUDynamicWindSubsystem,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDynamicWindSubsystem>,
               InternalVTableHelperCtorCaller<UDynamicWindSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicWindSubsystem.InnerSingleton;
}

// IMPLEMENT_MODULE_DynamicWind @ 14da55520

void __cdecl IMPLEMENT_MODULE_DynamicWind(void)

{
  return;
}

// OnCreateRenderThreadResources'' @ 15045bbf0

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

// OnDestroyRenderThreadResources'' @ 15045bc30

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

// ShaderTypeRegistration'' @ 15045bc70

void __cdecl `dynamic_atexit_destructor_for_'FDynamicWindEvalCS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 15045bc80

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicWindEnable'' @ 15045bd00

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__CVarDynamicWindEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicWindEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicWindOverrideAmplitude'' @ 15045bd20

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVarDynamicWindOverrideAmplitude__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicWindOverrideAmplitude);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicWindOverrideRateOfChange'' @ 15045bd40

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVarDynamicWindOverrideRateOfChange__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDynamicWindOverrideRateOfChange);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicWindOverrideSpeed'' @ 15045bd60

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVarDynamicWindOverrideSpeed__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicWindOverrideSpeed);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicWindPreferAsyncCompute'' @ 15045bd80

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVarDynamicWindPreferAsyncCompute__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicWindPreferAsyncCompute);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicWindUseSine'' @ 15045bda0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__CVarDynamicWindUseSine__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicWindUseSine);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15045bdc0

void __cdecl
```FDynamicWindTransformProvider::ProvideTransforms'::__l40::<lambda_2>::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015045bdc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_DynamicWind'' @ 15045bde0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_DynamicWind__(void)

{
  GPUStat_DynamicWind._104_4_ = 0;
  if (GPUStat_DynamicWind._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_DynamicWind._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_DynamicWind.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'LogDynamicWind'' @ 15045be20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDynamicWind__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDynamicWind);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15045be40

void __cdecl
`FDynamicWindEvalCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDynamicWindEvalCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15045be60

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
`FDynamicWindEvalCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

