// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 320

// AllComputeKernelShaderMaps'' @ 1411963e0

void __cdecl `dynamic_initializer_for_'FComputeKernelShaderMap::AllComputeKernelShaderMaps__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FComputeKernelShaderMap::AllComputeKernelShaderMaps__);
  return;
}

// GIdToComputeKernelShaderMap'' @ 141196400

void __cdecl `dynamic_initializer_for_'FComputeKernelShaderMap::GIdToComputeKernelShaderMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FComputeKernelShaderMap::GIdToComputeKernelShaderMap__);
  return;
}

// ShaderTypeRegistration'' @ 141196420

void __cdecl `dynamic_initializer_for_'FComputeKernelShader::ShaderTypeRegistration__(void)

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
  local_18[0] = &FComputeKernelShader::ShaderTypeRegistration;
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
  atexit(`dynamic_atexit_destructor_for_'FComputeKernelShader::ShaderTypeRegistration__);
  return;
}

// `dynamic_initializer_for_'CVarComputeFrameworkDeferredCompilation'' @ 141196520

void __cdecl _dynamic_initializer_for__CVarComputeFrameworkDeferredCompilation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarComputeFrameworkDeferredCompilation,L"r.ComputeFramework.DeferredCompilation",
             &GComputeFrameworkDeferredCompilation,
             L"Compile compute graphs on first usage instead of on PostLoad().\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarComputeFrameworkDeferredCompilation__);
  return;
}

// `dynamic_initializer_for_'CVarComputeFrameworkEnable'' @ 141196570

void __cdecl _dynamic_initializer_for__CVarComputeFrameworkEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarComputeFrameworkEnable,L"r.ComputeFramework.Enable",&GComputeFrameworkEnable,
             L"Enable the Compute Framework.\n",0x60);
  atexit(_dynamic_atexit_destructor_for__CVarComputeFrameworkEnable__);
  return;
}

// `dynamic_initializer_for_'CVarComputeFrameworkSortSubmit'' @ 1411965c0

void __cdecl _dynamic_initializer_for__CVarComputeFrameworkSortSubmit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarComputeFrameworkSortSubmit,L"r.ComputeFramework.SortSubmit",local_res8,
             L"Sort submission of work to GPU for optimal scheduling.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarComputeFrameworkSortSubmit__);
  return;
}

// `dynamic_initializer_for_'CVarComputeFrameworkTriggerGPUCapture'' @ 141196610

void __cdecl _dynamic_initializer_for__CVarComputeFrameworkTriggerGPUCapture__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarComputeFrameworkTriggerGPUCapture,
             L"r.ComputeFramework.TriggerGPUCaptureDispatches",&GTriggerGPUCaptureDispatches,
             L"Trigger GPU captures for this many of the subsequent compute graph dispatches.",0x20)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarComputeFrameworkTriggerGPUCapture__);
  return;
}

// `dynamic_initializer_for_'CVarShowComputeKernelShaderWarnings'' @ 141196660

void __cdecl _dynamic_initializer_for__CVarShowComputeKernelShaderWarnings__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowComputeKernelShaderWarnings,L"ComputeKernel.ShowShaderCompilerWarnings",
             &GShowComputeKernelShaderWarnings,
             L"When set to 1, will display all warnings from ComputeKernel shader compiles.",0);
  atexit(_dynamic_atexit_destructor_for__CVarShowComputeKernelShaderWarnings__);
  return;
}

// `dynamic_initializer_for_'CmdRebuildComputeGraphs'' @ 1411966b0

void __cdecl _dynamic_initializer_for__CmdRebuildComputeGraphs__(void)

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
    puVar1[3] = ComputeFramework::RebuildComputeGraphs;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CmdRebuildComputeGraphs,L"r.ComputeFramework.RebuildComputeGraphs",
             L"Force all loaded UComputeGraph objects to rebuild.",
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
  atexit(_dynamic_atexit_destructor_for__CmdRebuildComputeGraphs__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper258'' @ 1411967f0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper258__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_24>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper258,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper259'' @ 141196850

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper259__(void)

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
            (&DelayedAutoRegisterHelper259,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper260'' @ 1411968b0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper260__(void)

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
            (&DelayedAutoRegisterHelper260,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'GPUStat_ComputeFramework_ExecuteBatches'' @ 141196910

void __cdecl _dynamic_initializer_for__GPUStat_ComputeFramework_ExecuteBatches__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_ComputeFramework_ExecuteBatches__);
  return;
}

// `dynamic_initializer_for_'GRegisterComputeFrameworkObjectVersion'' @ 141196930

void __cdecl _dynamic_initializer_for__GRegisterComputeFrameworkObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FComputeFrameworkObjectVersion::GUID;
  local_38 = FComputeFrameworkObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0,L"Dev-ComputeFramework",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterComputeFrameworkObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GloballyKnownValueTypes'' @ 141196990

void __cdecl _dynamic_initializer_for__GloballyKnownValueTypes__(void)

{
  atexit(_dynamic_atexit_destructor_for__GloballyKnownValueTypes__);
  return;
}

// `dynamic_initializer_for_'GloballyKnownValueTypesLock'' @ 1411969b0

void __cdecl _dynamic_initializer_for__GloballyKnownValueTypesLock__(void)

{
  atexit(_dynamic_atexit_destructor_for__GloballyKnownValueTypesLock__);
  return;
}

// `dynamic_initializer_for_'LogComputeFramework'' @ 1411969d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogComputeFramework__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogComputeFramework,L"LogComputeFramework",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogComputeFramework__);
  return;
}

// `dynamic_initializer_for_'LogComputeKernelShaderCompiler'' @ 141196a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogComputeKernelShaderCompiler__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogComputeKernelShaderCompiler,L"LogComputeKernelShaderCompiler",
             Log,All);
  atexit(_dynamic_atexit_destructor_for__LogComputeKernelShaderCompiler__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantComputeFramework'' @ 141196a50

void __cdecl _dynamic_initializer_for__ModuleRegistrantComputeFramework__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ComputeFramework";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ComputeFramework",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FComputeFrameworkModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'NAME_GLSL_150_ES31'' @ 141196aa0

void __cdecl _dynamic_initializer_for__NAME_GLSL_150_ES31__(void)

{
  FName::FName(&NAME_GLSL_150_ES31,L"GLSL_150_ES31");
  return;
}

// `dynamic_initializer_for_'NAME_GLSL_ES3_1_ANDROID'' @ 141196ac0

void __cdecl _dynamic_initializer_for__NAME_GLSL_ES3_1_ANDROID__(void)

{
  FName::FName(&NAME_GLSL_ES3_1_ANDROID,L"GLSL_ES3_1_ANDROID");
  return;
}

// `dynamic_initializer_for_'NAME_PCD3D_ES3_1'' @ 141196ae0

void __cdecl _dynamic_initializer_for__NAME_PCD3D_ES3_1__(void)

{
  FName::FName(&NAME_PCD3D_ES3_1,L"PCD3D_ES31");
  return;
}

// `dynamic_initializer_for_'NAME_PCD3D_SM5'' @ 141196b00

void __cdecl _dynamic_initializer_for__NAME_PCD3D_SM5__(void)

{
  FName::FName(&NAME_PCD3D_SM5,L"PCD3D_SM5");
  return;
}

// `dynamic_initializer_for_'NAME_PCD3D_SM6'' @ 141196b20

void __cdecl _dynamic_initializer_for__NAME_PCD3D_SM6__(void)

{
  FName::FName(&NAME_PCD3D_SM6,L"PCD3D_SM6");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1'' @ 141196b40

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1,L"SF_METAL_ES3_1");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_IOS'' @ 141196b60

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_IOS__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_IOS,L"SF_METAL_ES3_1_IOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_IOS_DEPRECATED'' @ 141196b80

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_IOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_IOS_DEPRECATED,L"SF_METAL");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_TVOS'' @ 141196ba0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_TVOS__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_TVOS,L"SF_METAL_ES3_1_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_TVOS_DEPRECATED'' @ 141196bc0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_TVOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_TVOS_DEPRECATED,L"SF_METAL_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_MRT_MAC_DEPRECATED'' @ 141196be0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_MRT_MAC_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_MRT_MAC_DEPRECATED,L"SF_METAL_MRT_MAC");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SIM'' @ 141196c00

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SIM__(void)

{
  FName::FName(&NAME_SF_METAL_SIM,L"SF_METAL_SIM");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5'' @ 141196c20

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5__(void)

{
  FName::FName(&NAME_SF_METAL_SM5,L"SF_METAL_SM5");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_IOS'' @ 141196c40

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_IOS__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_IOS,L"SF_METAL_SM5_IOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_IOS_DEPRECATED'' @ 141196c60

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_IOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_IOS_DEPRECATED,L"SF_METAL_MRT");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_TVOS'' @ 141196c80

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_TVOS__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_TVOS,L"SF_METAL_SM5_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_TVOS_DEPRECATED'' @ 141196ca0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_TVOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_TVOS_DEPRECATED,L"SF_METAL_MRT_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM6'' @ 141196cc0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM6__(void)

{
  FName::FName(&NAME_SF_METAL_SM6,L"SF_METAL_SM6");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_ES3_1'' @ 141196ce0

void __cdecl _dynamic_initializer_for__NAME_VULKAN_ES3_1__(void)

{
  FName::FName(&NAME_VULKAN_ES3_1,L"SF_VULKAN_ES31");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_ES3_1_ANDROID'' @ 141196d00

void __cdecl _dynamic_initializer_for__NAME_VULKAN_ES3_1_ANDROID__(void)

{
  FName::FName(&NAME_VULKAN_ES3_1_ANDROID,L"SF_VULKAN_ES31_ANDROID");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_SM5'' @ 141196d20

void __cdecl _dynamic_initializer_for__NAME_VULKAN_SM5__(void)

{
  FName::FName(&NAME_VULKAN_SM5,L"SF_VULKAN_SM5");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_SM5_ANDROID'' @ 141196d40

void __cdecl _dynamic_initializer_for__NAME_VULKAN_SM5_ANDROID__(void)

{
  FName::FName(&NAME_VULKAN_SM5_ANDROID,L"SF_VULKAN_SM5_ANDROID");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_SM6'' @ 141196d60

void __cdecl _dynamic_initializer_for__NAME_VULKAN_SM6__(void)

{
  FName::FName(&NAME_VULKAN_SM6,L"SF_VULKAN_SM6");
  return;
}

// `dynamic_initializer_for_'ResTypeStringMap'' @ 141196d80

void __cdecl _dynamic_initializer_for__ResTypeStringMap__(void)

{
  FString::FString((FString *)&ResTypeStringMap[0].field_0x8,L"Texture1D");
  ResTypeStringMap[1]._0_1_ = 2;
  FString::FString((FString *)&ResTypeStringMap[1].field_0x8,L"Texture2D");
  ResTypeStringMap[2]._0_1_ = 3;
  FString::FString((FString *)&ResTypeStringMap[2].field_0x8,L"Texture3D");
  ResTypeStringMap[3]._0_1_ = 4;
  FString::FString((FString *)&ResTypeStringMap[3].field_0x8,L"TextureCube");
  ResTypeStringMap[4]._0_1_ = 6;
  FString::FString((FString *)&ResTypeStringMap[4].field_0x8,L"StructuredBuffer");
  ResTypeStringMap[5]._0_1_ = 7;
  FString::FString((FString *)&ResTypeStringMap[5].field_0x8,L"ByteAddressBuffer");
  ResTypeStringMap[6]._0_1_ = 5;
  FString::FString((FString *)&ResTypeStringMap[6].field_0x8,L"Buffer");
  atexit(_dynamic_atexit_destructor_for__ResTypeStringMap__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h__Script_ComputeFramework_2178197819'' @ 141196e50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h__Script_ComputeFramework_2178197819__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceBuffer_h__Script_ComputeFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceDispatch_h__Script_ComputeFramework_1199817089'' @ 141196e90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceDispatch_h__Script_ComputeFramework_1199817089__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Private_ComputeFramework_ComputeDataInterfaceDispatch_h__Script_ComputeFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h__Script_ComputeFramework_3989904215'' @ 141196ed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h__Script_ComputeFramework_3989904215__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h__Script_ComputeFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h__Script_ComputeFramework_3936611185'' @ 141196f10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h__Script_ComputeFramework_3936611185__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h__Script_ComputeFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h__Script_ComputeFramework_473415429'' @ 141196f50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h__Script_ComputeFramework_473415429__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h__Script_ComputeFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h__Script_ComputeFramework_3451790876'' @ 141196f90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h__Script_ComputeFramework_3451790876__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h__Script_ComputeFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h__Script_ComputeFramework_1170842888'' @ 141196fd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h__Script_ComputeFramework_1170842888__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h__Script_ComputeFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h__Script_ComputeFramework_2441913365'' @ 141197010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h__Script_ComputeFramework_2441913365__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h__Script_ComputeFramework_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h__Script_ComputeFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h__Script_ComputeFramework_3185583838'' @ 141197060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h__Script_ComputeFramework_3185583838__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h__Script_ComputeFramework_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h__Script_ComputeFramework_1789896271'' @ 1411970a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h__Script_ComputeFramework_1789896271__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h__Script_ComputeFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h__Script_ComputeFramework_3277456994'' @ 1411970e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h__Script_ComputeFramework_3277456994__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h__Script_ComputeFramework_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h__Script_ComputeFramework_968981832'' @ 141197120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h__Script_ComputeFramework_968981832__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h__Script_ComputeFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h__Script_ComputeFramework_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h__Script_ComputeFramework_1098058606'' @ 141197170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h__Script_ComputeFramework_1098058606__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h__Script_ComputeFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h__Script_ComputeFramework_1279449193'' @ 1411971b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h__Script_ComputeFramework_1279449193__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ComputeFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h__Script_ComputeFramework_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h__Script_ComputeFramework_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ComputeFramework'' @ 141197200

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ComputeFramework__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x685fc750;
  local_res8[0].DeclarationsHash = 0x1b17c3c0;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ComputeFramework,L"/Script/ComputeFramework",
             &Z_Registration_Info_UPackage__Script_ComputeFramework,local_res8);
  return;
}

// Z_Construct_UClass_UComputeGraphFromText @ 1494baff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeGraphFromText(void)

{
  if (Z_Registration_Info_UClass_UComputeGraphFromText.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeGraphFromText.OuterSingleton,
               &Z_Construct_UClass_UComputeGraphFromText_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeGraphFromText.OuterSingleton;
}

// NewStructOps @ 1494bb030

void * __cdecl Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComputeGraphInstance,&UE::CoreUObject::Private::Construct<FComputeGraphInstance>,&UE::CoreUObject::Private::ConstructForTests<FComputeGraphInstance>,&UE::CoreUObject::Private::Destruct<FComputeGraphInstance>,&UE::CoreUObject::Private::Copy<FComputeGraphInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType @ 1494bb200

UEnum * __cdecl Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType(void)

{
  if (Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.InnerSingleton,
               &Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.InnerSingleton;
}

// Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType @ 1494bb240

UEnum * __cdecl Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType(void)

{
  if (Z_Registration_Info_UEnum_EShaderFundamentalType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EShaderFundamentalType.InnerSingleton,
               &Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EShaderFundamentalType.InnerSingleton;
}

// Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType @ 1494bb280

UEnum * __cdecl Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType(void)

{
  if (Z_Registration_Info_UEnum_EShaderParamBindingType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EShaderParamBindingType.InnerSingleton,
               &Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EShaderParamBindingType.InnerSingleton;
}

// Z_Construct_UEnum_ComputeFramework_EShaderParamModifier @ 1494bb2c0

UEnum * __cdecl Z_Construct_UEnum_ComputeFramework_EShaderParamModifier(void)

{
  if (Z_Registration_Info_UEnum_EShaderParamModifier.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EShaderParamModifier.InnerSingleton,
               &Z_Construct_UEnum_ComputeFramework_EShaderParamModifier_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EShaderParamModifier.InnerSingleton;
}

// Z_Construct_UEnum_ComputeFramework_EShaderResourceType @ 1494bb300

UEnum * __cdecl Z_Construct_UEnum_ComputeFramework_EShaderResourceType(void)

{
  if (Z_Registration_Info_UEnum_EShaderResourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EShaderResourceType.InnerSingleton,
               &Z_Construct_UEnum_ComputeFramework_EShaderResourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EShaderResourceType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FArrayShaderValue @ 1494bb340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FArrayShaderValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FArrayShaderValue.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FArrayShaderValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FArrayShaderValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FArrayShaderValue.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FArrayShaderValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FShaderParamTypeDefinition @ 1494bb3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FShaderParamTypeDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FShaderParamTypeDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FShaderParamTypeDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FShaderParamTypeDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FShaderParamTypeDefinition.InnerSingleton;
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

// EShaderFundamentalType_StaticEnum @ 1494bb440

UEnum * __cdecl EShaderFundamentalType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderFundamentalType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderFundamentalType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType,(UObject *)pUVar1,
                       L"EShaderFundamentalType");
  }
  return Z_Registration_Info_UEnum_EShaderFundamentalType.OuterSingleton;
}

// EShaderFundamentalDimensionType_StaticEnum @ 1494bb480

UEnum * __cdecl EShaderFundamentalDimensionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType,
                       (UObject *)pUVar1,L"EShaderFundamentalDimensionType");
  }
  return Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.OuterSingleton;
}

// EShaderParamBindingType_StaticEnum @ 1494bb540

UEnum * __cdecl EShaderParamBindingType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderParamBindingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderParamBindingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType,(UObject *)pUVar1,
                       L"EShaderParamBindingType");
  }
  return Z_Registration_Info_UEnum_EShaderParamBindingType.OuterSingleton;
}

// EShaderResourceType_StaticEnum @ 1494bb600

UEnum * __cdecl EShaderResourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderResourceType,(UObject *)pUVar1,
                       L"EShaderResourceType");
  }
  return Z_Registration_Info_UEnum_EShaderResourceType.OuterSingleton;
}

// Z_Construct_UClass_UComputeDataInterface_NoRegister @ 1494bb640

UClass * __cdecl Z_Construct_UClass_UComputeDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataInterface",
               &Z_Registration_Info_UClass_UComputeDataInterface.InnerSingleton,
               UComputeDataInterface::StaticRegisterNativesUComputeDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeDataInterface>,
               InternalVTableHelperCtorCaller<UComputeDataInterface>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataInterface.InnerSingleton;
}

// EShaderParamModifier_StaticEnum @ 1494bb6f0

UEnum * __cdecl EShaderParamModifier_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderParamModifier.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderParamModifier.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderParamModifier,(UObject *)pUVar1,
                       L"EShaderParamModifier");
  }
  return Z_Registration_Info_UEnum_EShaderParamModifier.OuterSingleton;
}

// NewStructOps @ 1494bb7e0

void * __cdecl Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FShaderValueTypeHandle,&UE::CoreUObject::Private::Construct<FShaderValueTypeHandle>,&UE::CoreUObject::Private::ConstructForTests<FShaderValueTypeHandle>,&UE::CoreUObject::Private::Destruct<FShaderValueTypeHandle>,&UE::CoreUObject::Private::SerializeArchive<FShaderValueTypeHandle>,&UE::CoreUObject::Private::Identical<FShaderValueTypeHandle>,&UE::CoreUObject::Private::GetStructTypeHash<FShaderValueTypeHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494bb820

void * __cdecl Z_Construct_UScriptStruct_FArrayShaderValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FArrayShaderValue,&UE::CoreUObject::Private::Construct<FArrayShaderValue>,&UE::CoreUObject::Private::ConstructForTests<FArrayShaderValue>,&UE::CoreUObject::Private::Destruct<FArrayShaderValue>,&UE::CoreUObject::Private::Copy<FArrayShaderValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UComputeDataInterface @ 1494bb860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeDataInterface(void)

{
  if (Z_Registration_Info_UClass_UComputeDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeDataInterface.OuterSingleton,
               &Z_Construct_UClass_UComputeDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeDataInterface.OuterSingleton;
}

// Z_Construct_UPackage__Script_ComputeFramework @ 1494bb8a0

UPackage * __cdecl Z_Construct_UPackage__Script_ComputeFramework(void)

{
  if (Z_Registration_Info_UPackage__Script_ComputeFramework.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ComputeFramework.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_ComputeFramework.OuterSingleton;
}

// NewStructOps @ 1494bb8e0

void * __cdecl Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FShaderValueContainer,&UE::CoreUObject::Private::Construct<FShaderValueContainer>,&UE::CoreUObject::Private::ConstructForTests<FShaderValueContainer>,&UE::CoreUObject::Private::Destruct<FShaderValueContainer>,&UE::CoreUObject::Private::Copy<FShaderValueContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsDynamicArray_SetBit @ 1494bb980

void __cdecl
Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_bIsDynamicArray_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 1494bb990

void * __cdecl Z_Construct_UScriptStruct_FShaderValueType_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FShaderValueType,&UE::CoreUObject::Private::Construct<FShaderValueType>,&UE::CoreUObject::Private::ConstructForTests<FShaderValueType>,&UE::CoreUObject::Private::Destruct<FShaderValueType>,&UE::CoreUObject::Private::Copy<FShaderValueType>,&UE::CoreUObject::Private::GetStructTypeHash<FShaderValueType>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494bbb40

void * __cdecl Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FShaderParamTypeDefinition,&UE::CoreUObject::Private::Construct<FShaderParamTypeDefinition>,&UE::CoreUObject::Private::ConstructForTests<FShaderParamTypeDefinition>,&UE::CoreUObject::Private::Destruct<FShaderParamTypeDefinition>,&UE::CoreUObject::Private::Copy<FShaderParamTypeDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasReturnType_SetBit @ 1494bbb80

void __cdecl
Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_bHasReturnType_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 1494bbb90

void * __cdecl Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FShaderFunctionDefinition,&UE::CoreUObject::Private::Construct<FShaderFunctionDefinition>,&UE::CoreUObject::Private::ConstructForTests<FShaderFunctionDefinition>,&UE::CoreUObject::Private::Destruct<FShaderFunctionDefinition>,&UE::CoreUObject::Private::Copy<FShaderFunctionDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UComputeDataInterfaceDispatch @ 1494bbeb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeDataInterfaceDispatch(void)

{
  if (Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.OuterSingleton,
               &Z_Construct_UClass_UComputeDataInterfaceDispatch_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.OuterSingleton;
}

// Z_Construct_UClass_UDispatchDataProvider @ 1494bbef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDispatchDataProvider(void)

{
  if (Z_Registration_Info_UClass_UDispatchDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDispatchDataProvider.OuterSingleton,
               &Z_Construct_UClass_UDispatchDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDispatchDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UComputeGraph @ 1494bc1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeGraph(void)

{
  if (Z_Registration_Info_UClass_UComputeGraph.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeGraph.OuterSingleton,
               &Z_Construct_UClass_UComputeGraph_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeGraph.OuterSingleton;
}

// Z_Construct_UScriptStruct_FComputeGraphEdge @ 1494bc220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComputeGraphEdge(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComputeGraphEdge.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComputeGraphEdge.InnerSingleton,
               &Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComputeGraphEdge.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComputeGraphEdge.InnerSingleton;
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

// NewProp_bKernelInput_SetBit @ 1494bc2a0

void __cdecl
Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 1494bc2b0

void * __cdecl Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComputeGraphEdge,&UE::CoreUObject::Private::Construct<FComputeGraphEdge>,&UE::CoreUObject::Private::ConstructForTests<FComputeGraphEdge>,&UE::CoreUObject::Private::Destruct<FComputeGraphEdge>,&UE::CoreUObject::Private::Copy<FComputeGraphEdge>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UComputeKernel @ 1494bc3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeKernel(void)

{
  if (Z_Registration_Info_UClass_UComputeKernel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeKernel.OuterSingleton,
               &Z_Construct_UClass_UComputeKernel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeKernel.OuterSingleton;
}

// EComputeKernelFlags_StaticEnum @ 1494bc3e0

UEnum * __cdecl EComputeKernelFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComputeKernelFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EComputeKernelFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags,(UObject *)pUVar1,
                       L"EComputeKernelFlags");
  }
  return Z_Registration_Info_UEnum_EComputeKernelFlags.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1494bc5c0

void * __thiscall
IComputeFrameworkModule::_scalar_deleting_destructor_(IComputeFrameworkModule *this,uint param_1)

{
  *this = (IComputeFrameworkModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UComputeKernel_NoRegister @ 1494bc890

UClass * __cdecl Z_Construct_UClass_UComputeKernel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeKernel",
               &Z_Registration_Info_UClass_UComputeKernel.InnerSingleton,
               UComputeKernel::StaticRegisterNativesUComputeKernel,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeKernel>,
               InternalVTableHelperCtorCaller<UComputeKernel>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeKernel.InnerSingleton;
}

// `scalar_deleting_destructor' @ 1494bc940

void * __thiscall
FComputeFrameworkModule::_scalar_deleting_destructor_(FComputeFrameworkModule *this,uint param_1)

{
  *this = (FComputeFrameworkModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UComputeGraph_NoRegister @ 1494bc980

UClass * __cdecl Z_Construct_UClass_UComputeGraph_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeGraph",
               &Z_Registration_Info_UClass_UComputeGraph.InnerSingleton,
               UComputeGraph::StaticRegisterNativesUComputeGraph,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeGraph>,
               InternalVTableHelperCtorCaller<UComputeGraph>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeGraph.InnerSingleton;
}

// Z_Construct_UScriptStruct_FComputeKernelDefinition @ 1494bca70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComputeKernelDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComputeKernelDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComputeKernelDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComputeKernelDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComputeKernelDefinition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FComputeKernelPermutationBool @ 1494bcaf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComputeKernelPermutationBool(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComputeKernelPermutationBool.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComputeKernelPermutationBool.InnerSingleton,
               &Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComputeKernelPermutationBool.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComputeKernelPermutationBool.InnerSingleton;
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

// NewProp_Value_SetBit @ 1494bcc20

void __cdecl
Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 1494bcc30

void * __cdecl Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComputeKernelPermutationBool,&UE::CoreUObject::Private::Construct<FComputeKernelPermutationBool>,&UE::CoreUObject::Private::ConstructForTests<FComputeKernelPermutationBool>,&UE::CoreUObject::Private::Destruct<FComputeKernelPermutationBool>,&UE::CoreUObject::Private::Copy<FComputeKernelPermutationBool>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494bcd20

void * __cdecl Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComputeKernelPermutationSet,&UE::CoreUObject::Private::Construct<FComputeKernelPermutationSet>,&UE::CoreUObject::Private::ConstructForTests<FComputeKernelPermutationSet>,&UE::CoreUObject::Private::Destruct<FComputeKernelPermutationSet>,&UE::CoreUObject::Private::Copy<FComputeKernelPermutationSet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494bcd60

void * __cdecl Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComputeKernelDefinition,&UE::CoreUObject::Private::Construct<FComputeKernelDefinition>,&UE::CoreUObject::Private::ConstructForTests<FComputeKernelDefinition>,&UE::CoreUObject::Private::Destruct<FComputeKernelDefinition>,&UE::CoreUObject::Private::Copy<FComputeKernelDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494bcda0

void * __cdecl Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComputeKernelDefinitionSet,&UE::CoreUObject::Private::Construct<FComputeKernelDefinitionSet>,&UE::CoreUObject::Private::ConstructForTests<FComputeKernelDefinitionSet>,&UE::CoreUObject::Private::Destruct<FComputeKernelDefinitionSet>,&UE::CoreUObject::Private::Copy<FComputeKernelDefinitionSet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494bce20

void * __cdecl Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComputeKernelPermutationVector,&UE::CoreUObject::Private::Construct<FComputeKernelPermutationVector>,&UE::CoreUObject::Private::ConstructForTests<FComputeKernelPermutationVector>,&UE::CoreUObject::Private::Destruct<FComputeKernelPermutationVector>,&UE::CoreUObject::Private::Copy<FComputeKernelPermutationVector>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UComputeKernelSource_NoRegister @ 1494bd1d0

UClass * __cdecl Z_Construct_UClass_UComputeKernelSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeKernelSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeKernelSource",
               &Z_Registration_Info_UClass_UComputeKernelSource.InnerSingleton,
               UComputeKernelSource::StaticRegisterNativesUComputeKernelSource,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeKernelSource>,
               InternalVTableHelperCtorCaller<UComputeKernelSource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeKernelSource.InnerSingleton;
}

// Z_Construct_UClass_UComputeKernelSource @ 1494bd680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeKernelSource(void)

{
  if (Z_Registration_Info_UClass_UComputeKernelSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeKernelSource.OuterSingleton,
               &Z_Construct_UClass_UComputeKernelSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeKernelSource.OuterSingleton;
}

// Z_Construct_UClass_UComputeKernelSourceWithText @ 1494bd6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeKernelSourceWithText(void)

{
  if (Z_Registration_Info_UClass_UComputeKernelSourceWithText.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeKernelSourceWithText.OuterSingleton,
               &Z_Construct_UClass_UComputeKernelSourceWithText_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeKernelSourceWithText.OuterSingleton;
}

// Z_Construct_UClass_UComputeSource_NoRegister @ 1494bd700

UClass * __cdecl Z_Construct_UClass_UComputeSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeSource",
               &Z_Registration_Info_UClass_UComputeSource.InnerSingleton,
               UComputeSource::StaticRegisterNativesUComputeSource,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeSource>,InternalVTableHelperCtorCaller<UComputeSource>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeSource.InnerSingleton;
}

// Z_Construct_UScriptStruct_FComputeKernelDefinitionSet @ 1494bd7b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComputeKernelDefinitionSet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComputeKernelDefinitionSet.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComputeKernelDefinitionSet.InnerSingleton,
               &Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComputeKernelDefinitionSet.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComputeKernelDefinitionSet.InnerSingleton;
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

// Z_Construct_UScriptStruct_FComputeKernelPermutationSet @ 1494bd830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComputeKernelPermutationSet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComputeKernelPermutationSet.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComputeKernelPermutationSet.InnerSingleton,
               &Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComputeKernelPermutationSet.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComputeKernelPermutationSet.InnerSingleton;
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

// Z_Construct_UScriptStruct_FShaderFunctionDefinition @ 1494bd8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FShaderFunctionDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FShaderFunctionDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FShaderFunctionDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FShaderFunctionDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FShaderFunctionDefinition.InnerSingleton;
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

// Z_Construct_UClass_UComputeSource @ 1494bdae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeSource(void)

{
  if (Z_Registration_Info_UClass_UComputeSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeSource.OuterSingleton,
               &Z_Construct_UClass_UComputeSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeSource.OuterSingleton;
}

// Z_Construct_UClass_UComputeGraphComponent @ 1494bdb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeGraphComponent(void)

{
  if (Z_Registration_Info_UClass_UComputeGraphComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeGraphComponent.OuterSingleton,
               &Z_Construct_UClass_UComputeGraphComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeGraphComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FComputeGraphInstance @ 1494bdb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComputeGraphInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComputeGraphInstance.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComputeGraphInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComputeGraphInstance.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FComputeGraphInstance.InnerSingleton;
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

// Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders @ 1494bdbe0

UFunction * __cdecl Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders @ 1494bdc20

UFunction * __cdecl Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBufferDataProvider @ 1494bdc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBufferDataProvider(void)

{
  if (Z_Registration_Info_UClass_UBufferDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBufferDataProvider.OuterSingleton,
               &Z_Construct_UClass_UBufferDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBufferDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UComputeDataProvider_NoRegister @ 1494bdca0

UClass * __cdecl Z_Construct_UClass_UComputeDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataProvider",
               &Z_Registration_Info_UClass_UComputeDataProvider.InnerSingleton,
               UComputeDataProvider::StaticRegisterNativesUComputeDataProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeDataProvider>,
               InternalVTableHelperCtorCaller<UComputeDataProvider>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UComputeDataInterfaceBuffer @ 1494bdd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeDataInterfaceBuffer(void)

{
  if (Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.OuterSingleton,
               &Z_Construct_UClass_UComputeDataInterfaceBuffer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.OuterSingleton;
}

// Z_Construct_UClass_UComputeDataProvider @ 1494bdd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UComputeDataProvider(void)

{
  if (Z_Registration_Info_UClass_UComputeDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UComputeDataProvider.OuterSingleton,
               &Z_Construct_UClass_UComputeDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UComputeDataProvider.OuterSingleton;
}

// Z_Construct_UScriptStruct_FShaderValueTypeHandle @ 1494bddd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FShaderValueTypeHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FShaderValueTypeHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FShaderValueTypeHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FShaderValueTypeHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FShaderValueTypeHandle.InnerSingleton;
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

// Z_Construct_UFunction_UComputeGraphComponent_QueueExecute @ 1494bdf00

UFunction * __cdecl Z_Construct_UFunction_UComputeGraphComponent_QueueExecute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UComputeGraphComponent_QueueExecute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowReadWrite_SetBit @ 1494bdf40

void __cdecl
Z_Construct_UClass_UComputeDataInterfaceBuffer_Statics::NewProp_bAllowReadWrite_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// NewProp_bClearBeforeUse_SetBit @ 1494bdf50

void __cdecl
Z_Construct_UClass_UComputeDataInterfaceBuffer_Statics::NewProp_bClearBeforeUse_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  return;
}

// <lambda_invoker_cdecl> @ 1494be0e0

void __cdecl <lambda_24>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FComputeKernelCompilationOutput::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 1494be100

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FComputeKernelShaderMapId::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 1494be120

void __cdecl <lambda_26>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FComputeKernelShaderMapContent::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// FStructElement,TSizedDefaultAllocator<32>_> @ 1494be3e0

FArchive * __cdecl
operator<<<FShaderValueType::FStructElement_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FShaderValueType::FStructElement,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
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
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar9);
              ::operator<<(param_1,(FShaderValueTypeHandle *)(pFVar9 + 8));
              uVar10 = uVar10 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FShaderValueType::FStructElement,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
              DefaultConstructItems<FShaderValueType::FStructElement,int>(pFVar9,1);
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar9);
              ::operator<<(param_1,(FShaderValueTypeHandle *)(pFVar9 + 8));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
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

// AddPass<`FComputeShaderUtils::AddPass<FComputeKernelShader>'::__l2::<lambda_1>_> @ 1494be3f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FComputeKernelShader>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFComputeKernelShader___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFComputeKernelShader__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAUFParameters_FComputeKernelShader__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FGroomCacheUpdatePassCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FComputeKernelShader>'::__l2::<lambda_1>_> @ 1494be580

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FComputeKernelShader>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFComputeKernelShader___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFComputeKernelShader__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAUFParameters_FComputeKernelShader__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FGroomCacheUpdatePassCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AllocObject<`FRDGBuilder::AllocParameters<FComputeKernelShader::FParameters>'::__l2::FClearUniformBuffers,TStridedView<FComputeKernelShader::FParameters,int>_&,FRHIUniformBufferLayout_const_&> @ 1494be710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FClearUniformBuffers * __thiscall
FRDGBuilder::
AllocObject<_FRDGBuilder::AllocParameters<FComputeKernelShader::FParameters>_::__l2::FClearUniformBuffers,TStridedView<FComputeKernelShader::FParameters,int>_&,FRHIUniformBufferLayout_const_&>
          (FRDGBuilder *this,TStridedView<FComputeKernelShader::FParameters,int> *param_1,
          FRHIUniformBufferLayout *param_2)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FClearUniformBuffers *pFVar8;
  undefined8 *local_18 [2];
  
  puVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x20,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FClearUniformBuffers *)(*pcVar2)();
      return pFVar8;
    }
  }
  else {
    *puVar7 = &
              ___7__TObject_UFClearUniformBuffers__1____AllocParameters_UFParameters_FComputeKernelShader___FRDGBuilder__QEAA_AV__TStridedView_UFParameters_FComputeKernelShader__H__PEBVFShaderParametersMetadata__I_Z__FRDGAllocator__6B_
    ;
    pFVar3 = param_1->FirstElementPtr;
    uVar4 = *(undefined8 *)&param_1->BytesBetweenElements;
    puVar7[3] = param_2;
    puVar7[1] = pFVar3;
    puVar7[2] = uVar4;
  }
  local_18[0] = puVar7;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FClearUniformBuffers *)(*pcVar2)();
      return pFVar8;
    }
  }
  iVar6 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar6 * 8) = local_18[0];
  return (FClearUniformBuffers *)(puVar7 + 1);
}

// ClearUnusedGraphResources<FComputeKernelShader> @ 1494bea90

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

void __cdecl
ClearUnusedGraphResources<FComputeKernelShader>
          (TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *param_1,
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

// ConstructItems<TObjectPtr<UComputeDataProvider>,TObjectPtr<UComputeDataProvider>,int> @ 1494beb10

void __cdecl
ConstructItems<TObjectPtr<UComputeDataProvider>,TObjectPtr<UComputeDataProvider>,int>
          (void *param_1,TObjectPtr<UComputeDataProvider> *param_2,int param_3)

{
  TObjectPtr<UComputeDataProvider> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UComputeDataProvider>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UComputeDataProvider>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UComputeDataProvider *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UComputeDataProvider *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FArrayShaderValue,FArrayShaderValue,int> @ 1494beb70

void __cdecl
ConstructItems<FArrayShaderValue,FArrayShaderValue,int>
          (void *param_1,FArrayShaderValue *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FComputeKernelDefinition,FComputeKernelDefinition,int> @ 1494bec20

void __cdecl
ConstructItems<FComputeKernelDefinition,FComputeKernelDefinition,int>
          (void *param_1,FComputeKernelDefinition *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->Symbol);
      FString::FString((FString *)(lVar1 + 0x10 + (longlong)param_2),&param_2->Define);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FComputeKernelPermutationBool,FComputeKernelPermutationBool,int> @ 1494bec80

void __cdecl
ConstructItems<FComputeKernelPermutationBool,FComputeKernelPermutationBool,int>
          (void *param_1,FComputeKernelPermutationBool *param_2,int param_3)

{
  bool *pbVar1;
  FString *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FString *)(lVar2 + (longlong)param_2);
      FString::FString(this,&param_2->Name);
      pbVar1 = &param_2->Value;
      param_2 = param_2 + 1;
      *(bool *)&this[1].Data.AllocatorInstance.Data = *pbVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int> @ 1494becf0

void __cdecl
ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
          (void *param_1,FShaderParamTypeDefinition *param_2,int param_3)

{
  undefined8 *puVar1;
  FShaderValueTypeHandle *pFVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    pFVar2 = &param_2->ValueType;
    do {
      FString::FString((FString *)(puVar1 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)puVar1));
      FString::FString((FString *)(puVar1 + -2),(FString *)(pFVar2 + -2));
      *puVar1 = pFVar2->ValueTypePtr;
      *(ushort *)(puVar1 + 1) = *(ushort *)(pFVar2 + 1);
      *(EShaderParamBindingType *)((longlong)puVar1 + 10) =
           *(EShaderParamBindingType *)((longlong)(pFVar2 + 1) + 2);
      *(EShaderResourceType *)((longlong)puVar1 + 0xb) =
           *(EShaderResourceType *)((longlong)(pFVar2 + 1) + 3);
      *(EShaderParamModifier *)((longlong)puVar1 + 0xc) =
           *(EShaderParamModifier *)((longlong)(pFVar2 + 1) + 4);
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 6;
      pFVar2 = pFVar2 + 6;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FComputeKernelPermutationVector,int> @ 1494bed90

void __cdecl DefaultConstructItems<FComputeKernelPermutationVector,int>(void *param_1,int param_2)

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
      *(undefined4 *)(lVar1 + 0x44) = 0;
      lVar1 = lVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UComputeGraph::FComputeKernelResourceSet,int> @ 1494bede0

void __cdecl
DefaultConstructItems<UComputeGraph::FComputeKernelResourceSet,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<FComputeGraphTaskWorker::FGraphInvocation,int> @ 1494bee00

void __cdecl
DefaultConstructItems<FComputeGraphTaskWorker::FGraphInvocation,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined1 *)(puVar1 + 8) = 0;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FComputeGraphRenderProxy::FKernelInvocation,int> @ 1494bee50

void __cdecl
DefaultConstructItems<FComputeGraphRenderProxy::FKernelInvocation,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 1;
      *(undefined4 *)(lVar1 + 8) = 1;
      *(undefined4 *)(lVar1 + 0xc) = 1;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      *(undefined4 *)(lVar1 + 0x74) = 0xffffffff;
      *(undefined2 *)(lVar1 + 0x78) = 0;
      lVar1 = lVar1 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FShaderFunctionDefinition,int> @ 1494beed0

void __cdecl DefaultConstructItems<FShaderFunctionDefinition,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined1 *)(lVar1 + 0x14) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FShaderValueType::FStructElement,int> @ 1494bef10

void __cdecl DefaultConstructItems<FShaderValueType::FStructElement,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FComputeGraphTaskWorker::FSubmitDescription,int> @ 1494bef40

void __cdecl
DefaultConstructItems<FComputeGraphTaskWorker::FSubmitDescription,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable>,int> @ 1494bef70

void __cdecl
DefaultConstructItems<TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DestructItems<FArrayShaderValue,int> @ 1494befa0

void __cdecl DestructItems<FArrayShaderValue,int>(FArrayShaderValue *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ArrayOfValues).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FComputeGraphTaskWorker::FAsyncReadback,int> @ 1494befe0

void __cdecl
DestructItems<FComputeGraphTaskWorker::FAsyncReadback,int>(FAsyncReadback *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  
  if (param_2 != 0) {
    plVar7 = (longlong *)&(param_1->OnDataAvailable).field_0x28;
    do {
      puVar2 = (undefined8 *)plVar7[-9];
      if (puVar2 == (undefined8 *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7505322987457872293>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraphWorker.cpp"
                           ,0x1a5,"Readback");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        puVar8 = puVar2 + 0xb;
        lVar6 = 8;
        do {
          puVar1 = puVar8 + -1;
          puVar8 = puVar8 + -1;
          lVar6 = lVar6 + -1;
          if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
            FRHIResource::Release((FRHIResource *)*puVar1);
          }
        } while (lVar6 != 0);
        *puVar2 = &___7FRHIGPUMemoryReadback__6B_;
        if ((FRHIResource *)puVar2[1] != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)puVar2[1]);
        }
        operator_delete(puVar2,0x58);
        plVar7[-9] = 0;
      }
      if (plVar7[-5] != 0) {
        plVar5 = plVar7 + -3;
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          plVar5 = (longlong *)*plVar7;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      plVar7 = plVar7 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FComputeGraphEdge,int> @ 1494bf100

void __cdecl DestructItems<FComputeGraphEdge,int>(FComputeGraphEdge *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->BindingFunctionNameOverride;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FComputeKernelCompileMessage,int> @ 1494bf150

void __cdecl
DestructItems<FComputeKernelCompileMessage,int>(FComputeKernelCompileMessage *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->VirtualFilePath;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FComputeKernelDefinition,int> @ 1494bf1b0

void __cdecl
DestructItems<FComputeKernelDefinition,int>(FComputeKernelDefinition *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Define).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Symbol).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FComputeKernelPermutationBool,int> @ 1494bf200

void __cdecl
DestructItems<FComputeKernelPermutationBool,int>(FComputeKernelPermutationBool *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FComputeKernelPermutationVector,int> @ 1494bf240

void __cdecl
DestructItems<FComputeKernelPermutationVector,int>
          (FComputeKernelPermutationVector *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Permutations).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UComputeGraph::FComputeKernelResourceSet,int> @ 1494bf2a0

void __cdecl
DestructItems<UComputeGraph::FComputeKernelResourceSet,int>
          (FComputeKernelResourceSet *param_1,int param_2)

{
  FComputeKernelResource *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->KernelResource).Ptr;
    if (pFVar1 != (FComputeKernelResource *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FComputeGraphTaskWorker::FGraphInvocation,int> @ 1494bf2e0

void __cdecl
DestructItems<FComputeGraphTaskWorker::FGraphInvocation,int>(FGraphInvocation *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int *piVar5;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    piVar5 = &(param_1->DataProviderRenderProxies).ArrayNum;
    do {
      pFVar4 = (((TArray<FComputeDataProviderRenderProxy_*,TSizedDefaultAllocator<32>_> *)
                (piVar5 + -2))->AllocatorInstance).Data;
      iVar1 = *piVar5;
      pFVar3 = pFVar4 + (longlong)iVar1 * 8;
      while( true ) {
        if (*piVar5 != iVar1) {
          `TCheckedPointerIterator<FComputeDataProviderRenderProxy_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar4 == pFVar3) break;
        puVar2 = *(undefined8 **)pFVar4;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        pFVar4 = pFVar4 + 8;
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(piVar5 + 2));
      pFVar3 = (((TArray<FComputeDataProviderRenderProxy_*,TSizedDefaultAllocator<32>_> *)
                (piVar5 + -2))->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      piVar5 = piVar5 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FComputeGraphRenderProxy::FKernelInvocation,int> @ 1494bf390

void __cdecl
DestructItems<FComputeGraphRenderProxy::FKernelInvocation,int>
          (FKernelInvocation *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->PostSubmitProviderIndices;
    do {
      pFVar1 = (((TArray<bool,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-2].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-3].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FKernelInvocation *)(pTVar2 + -6))->KernelName).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 8) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FShaderFunctionDefinition,int> @ 1494bf420

void __cdecl
DestructItems<FShaderFunctionDefinition,int>(FShaderFunctionDefinition *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FShaderParamTypeDefinition,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ParamTypes;
    do {
      DestructItems<FShaderParamTypeDefinition,int>
                ((FShaderParamTypeDefinition *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FShaderFunctionDefinition *)(pTVar2 + -1))->Name).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FShaderParamTypeDefinition,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FShaderParamTypeDefinition,int> @ 1494bf480

void __cdecl
DestructItems<FShaderParamTypeDefinition,int>(FShaderParamTypeDefinition *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->TypeDeclaration).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`ComputeFramework::AbortWork'::__l5::TSTR_ComputeFrameworkAbortCommand117>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1494c0210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ComputeFramework::AbortWork_::__l5::TSTR_ComputeFrameworkAbortCommand117>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`ComputeFramework::AbortWork'::__l5::TSTR_ComputeFrameworkAbortCommand117>
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
      if (bVar8) goto LAB_1494c0361;
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
    goto LAB_1494c0555;
  }
LAB_1494c0361:
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
LAB_1494c043f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494c043f;
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
LAB_1494c0555:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FComputeGraphInstance::EnqueueWork'::__l2::TSTR_ComputeFrameworkEnqueueExecutionCommand93>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1494c0590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FComputeGraphInstance::EnqueueWork_::__l2::TSTR_ComputeFrameworkEnqueueExecutionCommand93>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FComputeGraphInstance::EnqueueWork'::__l2::TSTR_ComputeFrameworkEnqueueExecutionCommand93>
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
      if (bVar8) goto LAB_1494c06e1;
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
    goto LAB_1494c08d5;
  }
LAB_1494c06e1:
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
LAB_1494c07bf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494c07bf;
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
LAB_1494c08d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`ComputeFramework::FlushWork'::__l5::TSTR_ComputeFrameworkFlushCommand91>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1494c0910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ComputeFramework::FlushWork_::__l5::TSTR_ComputeFrameworkFlushCommand91>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`ComputeFramework::FlushWork'::__l5::TSTR_ComputeFrameworkFlushCommand91>
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
      if (bVar8) goto LAB_1494c0a61;
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
    goto LAB_1494c0c55;
  }
LAB_1494c0a61:
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
LAB_1494c0b3f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494c0b3f;
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
LAB_1494c0c55:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FComputeKernelResource::CacheShaders'::__l55::TSTR_FSetShaderMapOnComputeKernel408>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1494c0c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FComputeKernelResource::CacheShaders_::__l55::TSTR_FSetShaderMapOnComputeKernel408>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FComputeKernelResource::CacheShaders'::__l55::TSTR_FSetShaderMapOnComputeKernel408>
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
      if (bVar8) goto LAB_1494c0de1;
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
    goto LAB_1494c0fd5;
  }
LAB_1494c0de1:
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
LAB_1494c0ebf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494c0ebf;
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
LAB_1494c0fd5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UComputeGraph::ReleaseRenderProxy'::__l5::TSTR_ReleaseRenderProxy568>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1494c1010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UComputeGraph::ReleaseRenderProxy_::__l5::TSTR_ReleaseRenderProxy568>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UComputeGraph::ReleaseRenderProxy'::__l5::TSTR_ReleaseRenderProxy568>
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
      if (bVar8) goto LAB_1494c1161;
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
    goto LAB_1494c1355;
  }
LAB_1494c1161:
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
LAB_1494c123f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494c123f;
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
LAB_1494c1355:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FComputeKernelResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1494c1390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FComputeKernelResource::ReleaseShaderMap_::__l5::TSTR_ReleaseShaderMap171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FComputeKernelResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap171>
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
      if (bVar8) goto LAB_1494c14e1;
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
    goto LAB_1494c16d5;
  }
LAB_1494c14e1:
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
LAB_1494c15bf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494c15bf;
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
LAB_1494c16d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// HeapSortInternal<FComputeGraphTaskWorker::FSubmitDescription,int,FIdentityFunctor,`FComputeGraphTaskWorker::SubmitWork'::__l49::<lambda_2>_> @ 1494c19e0

void __cdecl
AlgoImpl::
HeapSortInternal<FComputeGraphTaskWorker::FSubmitDescription,int,FIdentityFunctor,_FComputeGraphTaskWorker::SubmitWork_::__l49::<lambda_2>_>
          (FSubmitDescription *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FSubmitDescription *pFVar1;
  FSubmitDescription *pFVar2;
  FSubmitDescription FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1494c1ac2:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = FVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (param_1[(longlong)iVar10 + 2].field0_0x0.PackedSortKey <
                      param_1[iVar6].field0_0x0.PackedSortKey) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                if ((pFVar1->field0_0x0).PackedSortKey <= (pFVar2->field0_0x0).PackedSortKey) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].field0_0x0.PackedSortKey <
          param_1[iVar8].field0_0x0.PackedSortKey) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    if ((pFVar1->field0_0x0).PackedSortKey <= (pFVar2->field0_0x0).PackedSortKey)
    goto LAB_1494c1ac2;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<UBufferDataProvider> @ 1494c1b70

void __cdecl InternalConstructor<UBufferDataProvider>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UBufferDataProvider__6B_;
    *(undefined4 *)&this[1].field_0x4 = 4;
  }
  return;
}

// InternalConstructor<UComputeDataInterface> @ 1494c1bb0

void __cdecl InternalConstructor<UComputeDataInterface>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UComputeDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UComputeDataInterfaceBuffer> @ 1494c1be0

void __cdecl InternalConstructor<UComputeDataInterfaceBuffer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UComputeDataInterfaceBuffer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x8 = 0;
    *(undefined2 *)&this[1].field_0xc = 0;
  }
  return;
}

// InternalConstructor<UComputeDataInterfaceDispatch> @ 1494c1c20

void __cdecl InternalConstructor<UComputeDataInterfaceDispatch>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UComputeDataInterfaceDispatch__6B_;
  }
  return;
}

// InternalConstructor<UComputeDataProvider> @ 1494c1c50

void __cdecl InternalConstructor<UComputeDataProvider>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UComputeDataProvider__6B_;
  }
  return;
}

// InternalConstructor<UComputeGraph> @ 1494c1c80

void __cdecl InternalConstructor<UComputeGraph>(FObjectInitializer *param_1)

{
  if ((UComputeGraph *)param_1->Obj != (UComputeGraph *)0x0) {
    UComputeGraph::UComputeGraph((UComputeGraph *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UComputeGraphComponent> @ 1494c1ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UComputeGraphComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  FObjectInitializer *pFVar1;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UActorComponent::UActorComponent(this,pFVar1);
    this->_padding_ = (longlong)&UComputeGraphComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UComputeGraphComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UComputeGraphComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2) =
         *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2) & 0xfb | 2;
  }
  return;
}

// InternalConstructor<UComputeGraphFromText> @ 1494c1d20

void __cdecl InternalConstructor<UComputeGraphFromText>(FObjectInitializer *param_1)

{
  UComputeGraph *this;
  
  this = (UComputeGraph *)param_1->Obj;
  if (this != (UComputeGraph *)0x0) {
    UComputeGraph::UComputeGraph(this,param_1);
    this->_padding_ = (longlong)&___7UComputeGraphFromText__6B_;
  }
  return;
}

// InternalConstructor<UComputeKernel> @ 1494c1d50

void __cdecl InternalConstructor<UComputeKernel>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UComputeKernel__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UComputeKernelSource> @ 1494c1d90

void __cdecl InternalConstructor<UComputeKernelSource>(FObjectInitializer *param_1)

{
  if ((UComputeKernelSource *)param_1->Obj != (UComputeKernelSource *)0x0) {
    UComputeKernelSource::UComputeKernelSource((UComputeKernelSource *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UComputeKernelSourceWithText> @ 1494c1db0

void __cdecl InternalConstructor<UComputeKernelSourceWithText>(FObjectInitializer *param_1)

{
  UComputeKernelSource *this;
  
  this = (UComputeKernelSource *)param_1->Obj;
  if (this != (UComputeKernelSource *)0x0) {
    UComputeKernelSource::UComputeKernelSource(this,param_1);
    this->_padding_ = (longlong)&___7UComputeKernelSourceWithText__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UComputeSource> @ 1494c1df0

void __cdecl InternalConstructor<UComputeSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UComputeSource__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UDispatchDataProvider> @ 1494c1e30

void __cdecl InternalConstructor<UDispatchDataProvider>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDispatchDataProvider__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UBufferDataProvider> @ 1494c1e60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBufferDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBufferDataProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UBufferDataProvider__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 4;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeDataInterface> @ 1494c1f20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UComputeDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeDataInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UComputeDataInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeDataInterfaceBuffer> @ 1494c1fd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UComputeDataInterfaceBuffer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeDataInterfaceBuffer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UComputeDataInterfaceBuffer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined2 *)&pUVar1[1].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeDataInterfaceDispatch> @ 1494c2090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UComputeDataInterfaceDispatch>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeDataInterfaceDispatch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UComputeDataInterfaceDispatch__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeDataProvider> @ 1494c2140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UComputeDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeDataProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UComputeDataProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeGraph> @ 1494c21f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UComputeGraph>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UComputeGraph *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeGraph::GetPrivateStaticClass();
  pUVar3 = (UComputeGraph *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UComputeGraph *)0x0) {
    pUVar3 = UComputeGraph::UComputeGraph(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeGraphComponent> @ 1494c2290

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

UObject * __cdecl InternalVTableHelperCtorCaller<UComputeGraphComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeGraphComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UComputeGraphComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UComputeGraphComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UComputeGraphComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeGraphFromText> @ 1494c2370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UComputeGraphFromText>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UComputeGraph *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeGraphFromText::GetPrivateStaticClass();
  this = (UComputeGraph *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UComputeGraph *)0x0) {
    UComputeGraph::UComputeGraph(this,param_1);
    this->_padding_ = (longlong)&___7UComputeGraphFromText__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeKernel> @ 1494c2420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UComputeKernel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeKernel::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UComputeKernel__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeKernelSource> @ 1494c24e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UComputeKernelSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UComputeKernelSource *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeKernelSource::GetPrivateStaticClass();
  pUVar3 = (UComputeKernelSource *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UComputeKernelSource *)0x0) {
    pUVar3 = UComputeKernelSource::UComputeKernelSource(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeKernelSourceWithText> @ 1494c2580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UComputeKernelSourceWithText>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UComputeKernelSource *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeKernelSourceWithText::GetPrivateStaticClass();
  this = (UComputeKernelSource *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UComputeKernelSource *)0x0) {
    UComputeKernelSource::UComputeKernelSource(this,param_1);
    this->_padding_ = (longlong)&___7UComputeKernelSourceWithText__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UComputeSource> @ 1494c2640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UComputeSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UComputeSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UComputeSource__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDispatchDataProvider> @ 1494c2700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDispatchDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDispatchDataProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDispatchDataProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FComputeGraphTaskWorker::FSubmitDescription,int,FIdentityFunctor,`FComputeGraphTaskWorker::SubmitWork'::__l49::<lambda_2>_> @ 1494c27b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FComputeGraphTaskWorker::FSubmitDescription,int,FIdentityFunctor,_FComputeGraphTaskWorker::SubmitWork_::__l49::<lambda_2>_>
          (FSubmitDescription *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FSubmitDescription *pFVar1;
  FSubmitDescription FVar2;
  int iVar3;
  FSubmitDescription *pFVar4;
  FSubmitDescription **ppFVar5;
  FSubmitDescription *pFVar6;
  FSubmitDescription *pFVar7;
  FSubmitDescription *pFVar8;
  FSubmitDescription *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FSubmitDescription *local_338;
  FSubmitDescription *local_328;
  FSubmitDescription *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_1494c2860:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_1494c2890:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x0001494c2899;
          goto LAB_1494c28a0;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if ((pFVar4->field0_0x0).PackedSortKey < (pFVar1->field0_0x0).PackedSortKey) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_1494c295b;
      }
LAB_1494c2949:
      local_338 = pFVar1;
      HeapSortInternal<FComputeGraphTaskWorker::FSubmitDescription,int,FIdentityFunctor,_FComputeGraphTaskWorker::SubmitWork_::__l49::<lambda_2>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_1494c295b:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x0001494c2899:
  if ((pFVar4->field0_0x0).PackedSortKey <= (pFVar9->field0_0x0).PackedSortKey) goto LAB_1494c2890;
LAB_1494c28a0:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while ((pFVar9->field0_0x0).PackedSortKey <= (pFVar6->field0_0x0).PackedSortKey);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_1494c2890;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_1494c295b;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_1494c295b;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_1494c2949;
  goto LAB_1494c2860;
}

// NewObject<UBufferDataProvider> @ 1494c29f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBufferDataProvider * __cdecl NewObject<UBufferDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UBufferDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UBufferDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBufferDataProvider *)
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

// NewObject<UDispatchDataProvider> @ 1494c2a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDispatchDataProvider * __cdecl NewObject<UDispatchDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UDispatchDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UDispatchDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDispatchDataProvider *)
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

// ParametrizedAddParm<int> @ 1494c2b30

void __cdecl ParametrizedAddParm<int>(FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 3 & 0xfffffffc;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 2;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 1;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 4;
  return;
}

// ParametrizedAddParm<unsigned_int> @ 1494c2bd0

void __cdecl
ParametrizedAddParm<unsigned_int>(FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 3 & 0xfffffffc;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 3;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 1;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 4;
  return;
}

// ParametrizedAddParm<float> @ 1494c2c70

void __cdecl ParametrizedAddParm<float>(FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 3 & 0xfffffffc;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 4;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 1;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 4;
  return;
}

// ParametrizedAddParm<UE::Math::TIntPoint<int>_> @ 1494c2d10

void __cdecl
ParametrizedAddParm<UE::Math::TIntPoint<int>_>
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 7 & 0xfffffff8;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 2;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 2;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 8;
  return;
}

// ParametrizedAddParm<UE::Math::TIntVector2<unsigned_int>_> @ 1494c2db0

void __cdecl
ParametrizedAddParm<UE::Math::TIntVector2<unsigned_int>_>
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 7 & 0xfffffff8;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 3;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 2;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 8;
  return;
}

// ParametrizedAddParm<UE::Math::TIntVector3<int>_> @ 1494c2e50

void __cdecl
ParametrizedAddParm<UE::Math::TIntVector3<int>_>
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0xf & 0xfffffff0;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 2;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 3;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0xc;
  return;
}

// ParametrizedAddParm<UE::Math::TIntVector4<int>_> @ 1494c2ef0

void __cdecl
ParametrizedAddParm<UE::Math::TIntVector4<int>_>
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0xf & 0xfffffff0;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 2;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 4;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0x10;
  return;
}

// ParametrizedAddParm<UE::Math::TIntVector4<unsigned_int>_> @ 1494c2f90

void __cdecl
ParametrizedAddParm<UE::Math::TIntVector4<unsigned_int>_>
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0xf & 0xfffffff0;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 3;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 4;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0x10;
  return;
}

// ParametrizedAddParm<UE::Math::TMatrix<float>_> @ 1494c3030

void __cdecl
ParametrizedAddParm<UE::Math::TMatrix<float>_>
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0xf & 0xfffffff0;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 4;
  *(undefined4 *)(pFVar3 + 0x1c) = 4;
  *(undefined8 *)(pFVar3 + 0x20) = 4;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0x40;
  return;
}

// ParametrizedAddParm<UE::Math::TVector2<float>_> @ 1494c30d0

void __cdecl
ParametrizedAddParm<UE::Math::TVector2<float>_>
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 7 & 0xfffffff8;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 4;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 2;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 8;
  return;
}

// ParametrizedAddParm<UE::Math::TVector4<float>_> @ 1494c3170

void __cdecl
ParametrizedAddParm<UE::Math::TVector4<float>_>
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0xf & 0xfffffff0;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 4;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 4;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0x10;
  return;
}

// ParametrizedAddParm<UE::Math::TVector<float>_> @ 1494c3210

void __cdecl
ParametrizedAddParm<UE::Math::TVector<float>_>
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0xf & 0xfffffff0;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 4;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 3;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 0xc;
  return;
}

// ParametrizedAddParm<bool> @ 1494c32b0

void __cdecl ParametrizedAddParm<bool>(FShaderParametersMetadataBuilder *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(param_1->Members).ArrayMax;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 3 & 0xfffffffc;
  iVar2 = (param_1->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (param_1->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = param_1->NextMemberOffset;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(wchar_t **)pFVar3 = param_2;
  *(wchar_t **)(pFVar3 + 8) = L"";
  *(undefined4 *)(pFVar3 + 0x10) = 0x29;
  *(undefined2 *)(pFVar3 + 0x18) = 1;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 1;
  param_1->NextMemberOffset = param_1->NextMemberOffset + 1;
  return;
}

// StaticEnum<enum_EComputeKernelFlags> @ 1494c3a70

UEnum * __cdecl StaticEnum<enum_EComputeKernelFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComputeKernelFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EComputeKernelFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags,(UObject *)pUVar1,
                       L"EComputeKernelFlags");
  }
  return Z_Registration_Info_UEnum_EComputeKernelFlags.OuterSingleton;
}

// StaticEnum<enum_EShaderFundamentalDimensionType> @ 1494c3ab0

UEnum * __cdecl StaticEnum<enum_EShaderFundamentalDimensionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType,
                       (UObject *)pUVar1,L"EShaderFundamentalDimensionType");
  }
  return Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.OuterSingleton;
}

// StaticEnum<enum_EShaderFundamentalType> @ 1494c3af0

UEnum * __cdecl StaticEnum<enum_EShaderFundamentalType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderFundamentalType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderFundamentalType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType,(UObject *)pUVar1,
                       L"EShaderFundamentalType");
  }
  return Z_Registration_Info_UEnum_EShaderFundamentalType.OuterSingleton;
}

// StaticEnum<enum_EShaderParamBindingType> @ 1494c3b30

UEnum * __cdecl StaticEnum<enum_EShaderParamBindingType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderParamBindingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderParamBindingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType,(UObject *)pUVar1,
                       L"EShaderParamBindingType");
  }
  return Z_Registration_Info_UEnum_EShaderParamBindingType.OuterSingleton;
}

// StaticEnum<enum_EShaderParamModifier> @ 1494c3b70

UEnum * __cdecl StaticEnum<enum_EShaderParamModifier>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderParamModifier.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderParamModifier.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderParamModifier,(UObject *)pUVar1,
                       L"EShaderParamModifier");
  }
  return Z_Registration_Info_UEnum_EShaderParamModifier.OuterSingleton;
}

// StaticEnum<enum_EShaderResourceType> @ 1494c3bb0

UEnum * __cdecl StaticEnum<enum_EShaderResourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EShaderResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UEnum_EShaderResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderResourceType,(UObject *)pUVar1,
                       L"EShaderResourceType");
  }
  return Z_Registration_Info_UEnum_EShaderResourceType.OuterSingleton;
}

// UnsetShaderUAVs<FRHIComputeCommandList,FComputeKernelShader> @ 1494c3bf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FComputeKernelShader>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FComputeKernelShader *pFVar4;
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

// ~TFunction_OwnedObject<`FComputeGraphInstance::EnqueueWork'::__l2::<lambda_1>,1,1> @ 1494c50c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphInstance::EnqueueWork'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FComputeGraphInstance::EnqueueWork_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FComputeGraphInstance::EnqueueWork'::`2'::<lambda_1>,1,1>::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ComputeFramework::AbortWork'::__l5::<lambda_1>,1,0> @ 1494c5100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::AbortWork'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_ComputeFramework::AbortWork_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ComputeFramework::AbortWork'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ComputeFramework::FlushWork'::__l5::<lambda_1>,1,1> @ 1494c5120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::FlushWork'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_ComputeFramework::FlushWork_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ComputeFramework::FlushWork'::`5'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UComputeGraph::ReleaseRenderProxy'::__l5::<lambda_1>,1,0> @ 1494c5140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UComputeGraph::ReleaseRenderProxy'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UComputeGraph::ReleaseRenderProxy_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UComputeGraph::ReleaseRenderProxy'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0> @ 1494c5160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FComputeKernelResource::ReleaseShaderMap_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FComputeKernelResource::CacheShaders'::__l55::<lambda_1>,1,0> @ 1494c5180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::CacheShaders'::__l55::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FComputeKernelResource::CacheShaders_::__l55::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FComputeKernelResource::CacheShaders'::`55'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FComputeGraphTaskWorker::SubmitWork'::__l2::<lambda_4>,1,0> @ 1494c51a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphTaskWorker::SubmitWork'::__l2::<lambda_4>,1,0>::
~TFunction_OwnedObject<_FComputeGraphTaskWorker::SubmitWork_::__l2::<lambda_4>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FComputeGraphTaskWorker::SubmitWork'::`2'::<lambda_4>,1,0>::_vftable_
  ;
  return;
}

// operator<< @ 1494c6090

FArchive * __cdecl operator<<(FArchive *param_1,FShaderValueTypeHandle *param_2)

{
  EShaderFundamentalType *pEVar1;
  EShaderFundamentalDimensionType *pEVar2;
  FShaderValueType_u_2 *pFVar3;
  int iVar4;
  FShaderValueTypeHandle FVar5;
  FShaderValueType *pFVar6;
  FShaderValueType local_28;
  
  local_28.Name.ComparisonIndex.Value = 0;
  local_28.Name.Number = 0;
  local_28.bIsDynamicArray = false;
  local_28.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.StructElements.ArrayNum = 0;
  local_28.StructElements.ArrayMax = 0;
  local_28.Type = Bool;
  local_28.DimensionType = Scalar;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FComputeFrameworkObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) == 0) {
    pFVar6 = param_2->ValueTypePtr;
    if (pFVar6 != (FShaderValueType *)0x0) goto LAB_1494c60ea;
    local_28.Type = None;
  }
  pFVar6 = &local_28;
LAB_1494c60ea:
  pEVar1 = (EShaderFundamentalType *)**(undefined8 **)&param_1->field_0x8;
  if ((EShaderFundamentalType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar6,1);
  }
  else {
    pFVar6->Type = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FComputeFrameworkObjectVersion::GUID);
  if (-1 < iVar4) {
    operator<<(param_1,&pFVar6->bIsDynamicArray);
  }
  if (pFVar6->Type == Struct) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&pFVar6->Name);
    TArrayPrivateFriend::Serialize<FShaderValueType::FStructElement,TSizedDefaultAllocator<32>_>
              (param_1,&pFVar6->StructElements);
  }
  else {
    pEVar2 = (EShaderFundamentalDimensionType *)**(undefined8 **)&param_1->field_0x8;
    if ((EShaderFundamentalDimensionType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&pFVar6->DimensionType,1);
    }
    else {
      pFVar6->DimensionType = *pEVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    if (pFVar6->DimensionType == Vector) {
      pFVar3 = (FShaderValueType_u_2 *)**(undefined8 **)&param_1->field_0x8;
      if ((FShaderValueType_u_2 *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar3 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&pFVar6->field2_0x2,1);
      }
      else {
        pFVar6->field2_0x2 = *pFVar3;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
    }
    else if (pFVar6->DimensionType == Matrix) {
      operator<<(param_1,&(pFVar6->field2_0x2).VectorElemCount);
      operator<<(param_1,&pFVar6->MatrixColumnCount);
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    FVar5 = FShaderValueType::GetOrCreate(&local_28);
    param_2->ValueTypePtr = (FShaderValueType *)FVar5;
  }
  if (local_28.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StructElements.AllocatorInstance.Data);
  }
  return param_1;
}

// operator<< @ 1494c6240

FArchive * __cdecl operator<<(FArchive *param_1,FStructElement *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x178))();
  operator<<(param_1,&param_2->Type);
  return param_1;
}

// operator() @ 1494c69b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
`ComputeFramework::FlushWork'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStackY_858 [32];
  FRDGEventName local_828;
  FRDGBuilder *local_810;
  undefined8 local_808;
  Type local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_858;
  local_828.EventFormat = L"";
  local_828.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_828.FormattedEventName.Data.ArrayNum = 0;
  local_828.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_7e8,param_1,&local_828,None,GMaxRHIShaderPlatform);
  local_810 = &local_7e8;
  local_808 = *(undefined8 *)((longlong)this + 8);
  local_800 = GMaxRHIFeatureLevel;
  local_7f8 = *(undefined8 *)((longlong)this + 0x10);
  local_7f0 = 0;
  (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,&local_810);
  FRDGBuilder::Execute(&local_7e8);
  FRDGBuilder::~FRDGBuilder(&local_7e8);
  return;
}

// `vector_deleting_destructor'`adjustor{64}' @ 1494c6bdc

/* [thunk]:public: virtual void * __ptr64 __cdecl FComputeKernelShaderMap::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
FComputeKernelShaderMap::_vector_deleting_destructor__adjustor_64__
          (FComputeKernelShaderMap *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FComputeKernelShaderMap *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1494c6bec

/* [thunk]:public: virtual void * __ptr64 __cdecl UComputeGraphComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UComputeGraphComponent::_vector_deleting_destructor__adjustor_40__
          (UComputeGraphComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UComputeGraphComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1494c6c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphInstance::EnqueueWork'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FComputeGraphInstance::EnqueueWork'::`2'::<lambda_1>,1,1>::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::AbortWork'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ComputeFramework::AbortWork'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::FlushWork'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ComputeFramework::FlushWork'::`5'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UComputeGraph::ReleaseRenderProxy'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UComputeGraph::ReleaseRenderProxy'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::CacheShaders'::__l55::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FComputeKernelResource::CacheShaders'::`55'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphTaskWorker::SubmitWork'::__l2::<lambda_4>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FComputeGraphTaskWorker::SubmitWork'::`2'::<lambda_4>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6e20

void * __thiscall
FRDGAllocator::
TObject<`FRDGBuilder::AllocParameters<FComputeKernelShader::FParameters>'::__l2::FClearUniformBuffers>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `FRDGBuilder::AllocParameters<FComputeKernelShader::FParameters>'::__l2::FClearUniformBuffers::
  ~FClearUniformBuffers((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6e60

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FComputeKernelShader>'::__l2::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 1494c6ec0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FComputeViewExtension,SharedPointerInternals::DefaultDeleter<FComputeViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FComputeViewExtension,SharedPointerInternals::DefaultDeleter<FComputeViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6f00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TShaderMap<FComputeKernelShaderMapContent,FShaderMapPointerTable>::_scalar_deleting_destructor_
          (TShaderMap<FComputeKernelShaderMapContent,FShaderMapPointerTable> *this,uint param_1)

{
  FShaderMapBase::~FShaderMapBase((FShaderMapBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FBufferDataProviderProxy::_scalar_deleting_destructor_(FBufferDataProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6f80

void * __thiscall
FComputeDataProviderRenderProxy::_scalar_deleting_destructor_
          (FComputeDataProviderRenderProxy *this,uint param_1)

{
  *this = (FComputeDataProviderRenderProxy)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c6fc0

void * __thiscall
FComputeFrameworkSystem::_scalar_deleting_destructor_(FComputeFrameworkSystem *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ViewExtensions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ViewExtensions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ViewExtensions);
  *(undefined4 *)&(this->ComputeWorkers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ComputeWorkers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSceneInterface_const_*,FComputeGraphTaskWorker_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSceneInterface_const_*,FComputeGraphTaskWorker_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSceneInterface_const_*,FComputeGraphTaskWorker_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComputeWorkers);
  this->_padding_ = (longlong)&___7IComputeSystem__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7050

void * __thiscall
FComputeGraphTaskWorker::_scalar_deleting_destructor_(FComputeGraphTaskWorker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FComputeGraphTaskWorker::FAsyncReadback,int>
            ((FAsyncReadback *)(this->ActiveAsyncReadbacks).AllocatorInstance.Data,
             (this->ActiveAsyncReadbacks).ArrayNum);
  pFVar1 = (this->ActiveAsyncReadbacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReadbackDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ThreadCounts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PermutationIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Shaders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubmitDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->GraphInvocationsPerGroup).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GraphInvocationsPerGroup).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FComputeGraphTaskWorker::FGraphInvocation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphInvocationsPerGroup);
  this->_padding_ = (longlong)&___7IComputeTaskWorker__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7130

void * __thiscall
FComputeKernelResource::_scalar_deleting_destructor_(FComputeKernelResource *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<int> FVar2;
  void *pvVar3;
  FComputeKernelShaderMap *this_00;
  
  this->_padding_ = (longlong)&___7FComputeKernelResource__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCompilationCompleteDelegate);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->CookedShaderMapId).ShaderTypeDependencies);
  FVar2 = (this->OutstandingCompileShaderMapIds).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TDefaultDelete<FShaderParametersMetadataAllocations>::operator()
            ((TDefaultDelete<FShaderParametersMetadataAllocations> *)
             &this->ShaderParameterMetadataAllocations,
             (this->ShaderParameterMetadataAllocations).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderPermutationVector).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderDefinitionSet).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->GeneratedSources).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GeneratedSources).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GeneratedSources);
  *(undefined4 *)&(this->AdditionalSources).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AdditionalSources).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalSources);
  pFVar1 = (this->ShaderSource).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderEntryPoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FComputeKernelShaderMap *)0x0) {
    FComputeKernelShaderMap::Release(this_00);
  }
  DestructItems<FComputeKernelCompileMessage,int>
            ((FComputeKernelCompileMessage *)
             (this->CompilationResults).Messages.AllocatorInstance.Data,
             (this->CompilationResults).Messages.ArrayNum);
  pFVar1 = (this->CompilationResults).Messages.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FComputeKernelShaderMap::_scalar_deleting_destructor_(FComputeKernelShaderMap *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FComputeKernelShaderMap *local_res8;
  
  this->_padding_ =
       (longlong)&_vftable__for__TShaderMap<FComputeKernelShaderMapContent,FShaderMapPointerTable>__
  ;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  if (this->bDeletedThroughDeferredCleanup == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDeletedThroughDeferredCleanup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                       ,0x296,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (this->bRegistered != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                       ,0x297,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  local_res8 = this;
  TArray<FComputeKernelShaderMap_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&AllComputeKernelShaderMaps,&local_res8,Default);
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FShaderMapBase::~FShaderMapBase((FShaderMapBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7340

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

void * __thiscall
FComputeKernelShaderType::_scalar_deleting_destructor_(FComputeKernelShaderType *this,uint param_1)

{
  FShaderType::~FShaderType((FShaderType *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7380

void * __thiscall
FComputeViewExtension::_scalar_deleting_destructor_(FComputeViewExtension *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ComputeWorkers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c73d0

void * __thiscall
FDispatchDataProviderProxy::_scalar_deleting_destructor_
          (FDispatchDataProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7410

void * __thiscall IComputeSystem::_scalar_deleting_destructor_(IComputeSystem *this,uint param_1)

{
  *this = (IComputeSystem)&___7IComputeSystem__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7450

void * __thiscall
IComputeTaskWorker::_scalar_deleting_destructor_(IComputeTaskWorker *this,uint param_1)

{
  *this = (IComputeTaskWorker)&___7IComputeTaskWorker__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7490

void * __thiscall
UBufferDataProvider::_scalar_deleting_destructor_(UBufferDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UComputeDataProvider__6B_;
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

// `scalar_deleting_destructor' @ 1494c74f0

void * __thiscall
UComputeDataInterface::_scalar_deleting_destructor_(UComputeDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UComputeDataInterface__6B_;
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

// `scalar_deleting_destructor' @ 1494c7550

void * __thiscall
UComputeDataInterfaceBuffer::_scalar_deleting_destructor_
          (UComputeDataInterfaceBuffer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UComputeDataInterface__6B_;
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

// `scalar_deleting_destructor' @ 1494c75b0

void * __thiscall
UComputeDataInterfaceDispatch::_scalar_deleting_destructor_
          (UComputeDataInterfaceDispatch *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UComputeDataInterface__6B_;
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

// `scalar_deleting_destructor' @ 1494c7610

void * __thiscall
UComputeDataProvider::_scalar_deleting_destructor_(UComputeDataProvider *this,uint param_1)

{
  *(undefined ***)this = &___7UComputeDataProvider__6B_;
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

// `scalar_deleting_destructor' @ 1494c7670

void * __thiscall UComputeGraph::_scalar_deleting_destructor_(UComputeGraph *this,uint param_1)

{
  ~UComputeGraph(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c76d0

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
UComputeGraphComponent::_scalar_deleting_destructor_(UComputeGraphComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ComputeGraphInstance).DataProviders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7760

void * __thiscall
UComputeGraphFromText::_scalar_deleting_destructor_(UComputeGraphFromText *this,uint param_1)

{
  *(undefined ***)this = &___7UComputeGraphFromText__6B_;
  UComputeGraph::~UComputeGraph((UComputeGraph *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c77c0

void * __thiscall UComputeKernel::_scalar_deleting_destructor_(UComputeKernel *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UComputeKernel__6B_;
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

// `scalar_deleting_destructor' @ 1494c7820

void * __thiscall
UComputeKernelSource::_scalar_deleting_destructor_(UComputeKernelSource *this,uint param_1)

{
  ~UComputeKernelSource(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7880

void * __thiscall
UComputeKernelSourceWithText::_scalar_deleting_destructor_
          (UComputeKernelSourceWithText *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UComputeKernelSourceWithText__6B_;
  pFVar1 = (this->SourceText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UComputeKernelSource::~UComputeKernelSource((UComputeKernelSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494c7900

void * __thiscall UComputeSource::_scalar_deleting_destructor_(UComputeSource *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UComputeSource__6B_;
  pFVar1 = (this->AdditionalSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 1494c7970

void * __thiscall
UDispatchDataProvider::_scalar_deleting_destructor_(UDispatchDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UComputeDataProvider__6B_;
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

// AbortWork @ 1494c7cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ComputeFramework::AbortWork(FSceneInterface *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FComputeGraphTaskWorker **ppFVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FComputeGraphTaskWorker *pFStack_70;
  UObject *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FComputeGraphTaskWorker *pFStack_40;
  UObject *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (FComputeFrameworkModule::ComputeSystem != (FComputeFrameworkSystem *)0x0) {
    ppFVar3 = TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
              ::Find((TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
                      *)&FComputeFrameworkModule::ComputeSystem->ComputeWorkers,param_1);
    pFStack_70 = (FComputeGraphTaskWorker *)0x0;
    if (ppFVar3 != (FComputeGraphTaskWorker **)0x0) {
      pFStack_70 = *ppFVar3;
    }
    if (pFStack_70 != (FComputeGraphTaskWorker *)0x0) {
      local_60 = (undefined ***)0x0;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ComputeFramework::AbortWork'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`ComputeFramework::AbortWork'::`5'::<lambda_1>,1,0>::
                  _vftable_;
      local_68 = param_2;
      this = FRenderCommandList::GetInstanceTLS();
      if (this == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_ComputeFramework::AbortWork_::__l5::TSTR_ComputeFrameworkAbortCommand117>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_00 = FRenderCommandList::GetRenderThread(this);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`ComputeFramework::AbortWork'::__l5::TSTR_ComputeFrameworkAbortCommand117>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar4);
        uVar6 = (ulonglong)local_28;
        if (2 < uVar6) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar5 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar5 = local_30;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar5 = local_60;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
  }
  return;
}

// AddParamForType @ 1494c8430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ComputeFramework::AddParamForType
          (FShaderParametersMetadataBuilder *param_1,wchar_t *param_2,
          FShaderValueTypeHandle *param_3,
          TArray<FShaderParametersMetadata_*,TSizedDefaultAllocator<32>_> *param_4)

{
  FShaderValueType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  undefined ***pppuVar10;
  wchar_t *pwVar11;
  int *piVar12;
  FName *this;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  FName *pFVar16;
  undefined1 auStack_5e8 [32];
  FScriptContainerElement *local_5c8;
  FScriptContainerElement *local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  undefined8 local_5a8;
  undefined1 local_598 [8];
  FShaderParametersMetadata *local_590;
  FShaderParametersMetadataBuilder *local_588;
  FShaderValueType local_580;
  FShaderValueType local_560;
  FShaderValueType local_540;
  FShaderValueType local_520;
  FShaderValueType local_500;
  FShaderValueType local_4e0;
  FShaderValueType local_4c0;
  FShaderValueType local_4a0;
  FShaderValueType local_480;
  FShaderValueType local_460;
  FShaderValueType local_440;
  FShaderValueType local_420;
  FShaderValueType local_400;
  FShaderParametersMetadataBuilder local_3e0;
  wchar_t *local_3c8 [2];
  initializer_list<TPairInitializer<FShaderValueType_const_&,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_const_&>_>
  local_3b8;
  FString local_3a8;
  code *local_398 [2];
  undefined **local_388;
  code *local_380;
  undefined ***local_370;
  code *local_368 [2];
  undefined **local_358;
  code *local_350;
  undefined ***local_340;
  code *local_338 [2];
  undefined **local_328;
  code *local_320;
  undefined ***local_310;
  code *local_308 [2];
  undefined **local_2f8;
  code *local_2f0;
  undefined ***local_2e0;
  code *local_2d8 [2];
  undefined **local_2c8;
  code *local_2c0;
  undefined ***local_2b0;
  code *local_2a8 [2];
  undefined **local_298;
  code *local_290;
  undefined ***local_280;
  code *local_278 [2];
  undefined **local_268;
  code *local_260;
  undefined ***local_250;
  code *local_248 [2];
  undefined **local_238;
  code *local_230;
  undefined ***local_220;
  code *local_218 [2];
  undefined **local_208;
  code *local_200;
  undefined ***local_1f0;
  code *local_1e8 [2];
  undefined **local_1d8;
  code *local_1d0;
  undefined ***local_1c0;
  code *local_1b8 [2];
  undefined **local_1a8;
  code *local_1a0;
  undefined ***local_190;
  code *local_188 [2];
  undefined **local_178;
  code *local_170;
  undefined ***local_160;
  code *local_158 [2];
  undefined **local_148;
  code *local_140;
  undefined ***local_130;
  TPairInitializer<FShaderValueType_const_&,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_const_&>
  local_128;
  FShaderValueType *local_118;
  code **local_110;
  FShaderValueType *local_108;
  code **local_100;
  FShaderValueType *local_f8;
  code **local_f0;
  FShaderValueType *local_e8;
  code **local_e0;
  FShaderValueType *local_d8;
  code **local_d0;
  FShaderValueType *local_c8;
  code **local_c0;
  FShaderValueType *local_b8;
  code **local_b0;
  FShaderValueType *local_a8;
  code **local_a0;
  FShaderValueType *local_98;
  code **local_90;
  FShaderValueType *local_88;
  code **local_80;
  FShaderValueType *local_78;
  code **local_70;
  FShaderValueType *local_68;
  code **local_60;
  TPairInitializer<FShaderValueType_const_&,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_const_&>
  local_58;
  
  local_58.Key = (FShaderValueType *)(__security_cookie.value ^ (ulonglong)auStack_5e8);
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_588 = param_1;
  if ((*piVar12 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_460.Name.ComparisonIndex.Value = 0;
    local_460.Name.Number = 0;
    local_460.bIsDynamicArray = false;
    local_460.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_460.StructElements.ArrayNum = 0;
    local_460.StructElements.ArrayMax = 0;
    local_460.Type = Bool;
    local_460.DimensionType = Scalar;
    local_128.Key = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_460);
    if (local_460.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.StructElements.AllocatorInstance.Data);
    }
    local_130 = (undefined ***)0x0;
    local_140 = ParametrizedAddParm<bool>;
    local_148 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_158[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_128.Value =
         (TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)> *)local_158;
    local_440.Name.ComparisonIndex.Value = 0;
    local_440.Name.Number = 0;
    local_440.bIsDynamicArray = false;
    local_440.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_440.StructElements.ArrayNum = 0;
    local_440.StructElements.ArrayMax = 0;
    local_440.Type = Int;
    local_440.DimensionType = Scalar;
    local_118 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_440);
    if (local_440.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.StructElements.AllocatorInstance.Data);
    }
    local_160 = (undefined ***)0x0;
    local_170 = ParametrizedAddParm<int>;
    local_178 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_188[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_110 = local_188;
    local_4e0.Name.ComparisonIndex.Value = 0;
    local_4e0.Name.Number = 0;
    local_4e0.bIsDynamicArray = false;
    local_4e0.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4e0.StructElements.ArrayNum = 0;
    local_4e0.StructElements.ArrayMax = 0;
    local_4e0.Type = Int;
    local_4e0.DimensionType = Vector;
    local_4e0.field2_0x2.VectorElemCount = '\x02';
    local_108 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_4e0);
    if (local_4e0.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.StructElements.AllocatorInstance.Data);
    }
    local_190 = (undefined ***)0x0;
    local_1a0 = ParametrizedAddParm<UE::Math::TIntPoint<int>_>;
    local_1a8 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_1b8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_100 = local_1b8;
    local_4c0.Name.ComparisonIndex.Value = 0;
    local_4c0.Name.Number = 0;
    local_4c0.bIsDynamicArray = false;
    local_4c0.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4c0.StructElements.ArrayNum = 0;
    local_4c0.StructElements.ArrayMax = 0;
    local_4c0.Type = Int;
    local_4c0.DimensionType = Vector;
    local_4c0.field2_0x2.VectorElemCount = '\x03';
    local_f8 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_4c0);
    if (local_4c0.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.StructElements.AllocatorInstance.Data);
    }
    local_1c0 = (undefined ***)0x0;
    local_1d0 = ParametrizedAddParm<UE::Math::TIntVector3<int>_>;
    local_1d8 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_1e8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_f0 = local_1e8;
    local_4a0.Name.ComparisonIndex.Value = 0;
    local_4a0.Name.Number = 0;
    local_4a0.bIsDynamicArray = false;
    local_4a0.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.StructElements.ArrayNum = 0;
    local_4a0.StructElements.ArrayMax = 0;
    local_4a0.Type = Int;
    local_4a0.DimensionType = Vector;
    local_4a0.field2_0x2.VectorElemCount = '\x04';
    local_e8 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_4a0);
    if (local_4a0.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.StructElements.AllocatorInstance.Data);
    }
    local_1f0 = (undefined ***)0x0;
    local_200 = ParametrizedAddParm<UE::Math::TIntVector4<int>_>;
    local_208 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_218[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_e0 = local_218;
    local_420.Name.ComparisonIndex.Value = 0;
    local_420.Name.Number = 0;
    local_420.bIsDynamicArray = false;
    local_420.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_420.StructElements.ArrayNum = 0;
    local_420.StructElements.ArrayMax = 0;
    local_420.Type = Uint;
    local_420.DimensionType = Scalar;
    local_d8 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_420);
    if (local_420.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.StructElements.AllocatorInstance.Data);
    }
    local_220 = (undefined ***)0x0;
    local_230 = ParametrizedAddParm<unsigned_int>;
    local_238 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_248[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_d0 = local_248;
    local_480.Name.ComparisonIndex.Value = 0;
    local_480.Name.Number = 0;
    local_480.bIsDynamicArray = false;
    local_480.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_480.StructElements.ArrayNum = 0;
    local_480.StructElements.ArrayMax = 0;
    local_480.Type = Uint;
    local_480.DimensionType = Vector;
    local_480.field2_0x2.VectorElemCount = '\x02';
    local_c8 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_480);
    if (local_480.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.StructElements.AllocatorInstance.Data);
    }
    local_250 = (undefined ***)0x0;
    local_260 = ParametrizedAddParm<UE::Math::TIntVector2<unsigned_int>_>;
    local_268 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_278[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_c0 = local_278;
    local_560.Name.ComparisonIndex.Value = 0;
    local_560.Name.Number = 0;
    local_560.bIsDynamicArray = false;
    local_560.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_560.StructElements.ArrayNum = 0;
    local_560.StructElements.ArrayMax = 0;
    local_560.Type = Uint;
    local_560.DimensionType = Vector;
    local_560.field2_0x2.VectorElemCount = '\x04';
    local_b8 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_560);
    if (local_560.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.StructElements.AllocatorInstance.Data);
    }
    local_280 = (undefined ***)0x0;
    local_290 = ParametrizedAddParm<UE::Math::TIntVector4<unsigned_int>_>;
    local_298 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_2a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_b0 = local_2a8;
    local_400.Name.ComparisonIndex.Value = 0;
    local_400.Name.Number = 0;
    local_400.bIsDynamicArray = false;
    local_400.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_400.StructElements.ArrayNum = 0;
    local_400.StructElements.ArrayMax = 0;
    local_400.Type = Float;
    local_400.DimensionType = Scalar;
    local_a8 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_400);
    if (local_400.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.StructElements.AllocatorInstance.Data);
    }
    local_2b0 = (undefined ***)0x0;
    local_2c0 = ParametrizedAddParm<float>;
    local_2c8 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_2d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_a0 = local_2d8;
    local_540.Name.ComparisonIndex.Value = 0;
    local_540.Name.Number = 0;
    local_540.bIsDynamicArray = false;
    local_540.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_540.StructElements.ArrayNum = 0;
    local_540.StructElements.ArrayMax = 0;
    local_540.Type = Float;
    local_540.DimensionType = Vector;
    local_540.field2_0x2.VectorElemCount = '\x02';
    local_98 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_540);
    if (local_540.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_540.StructElements.AllocatorInstance.Data);
    }
    local_2e0 = (undefined ***)0x0;
    local_2f0 = ParametrizedAddParm<UE::Math::TVector2<float>_>;
    local_2f8 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_308[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_90 = local_308;
    local_520.Name.ComparisonIndex.Value = 0;
    local_520.Name.Number = 0;
    local_520.bIsDynamicArray = false;
    local_520.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_520.StructElements.ArrayNum = 0;
    local_520.StructElements.ArrayMax = 0;
    local_520.Type = Float;
    local_520.DimensionType = Vector;
    local_520.field2_0x2.VectorElemCount = '\x03';
    local_88 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_520);
    if (local_520.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.StructElements.AllocatorInstance.Data);
    }
    local_310 = (undefined ***)0x0;
    local_320 = ParametrizedAddParm<UE::Math::TVector<float>_>;
    local_328 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_338[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_80 = local_338;
    local_500.Name.ComparisonIndex.Value = 0;
    local_500.Name.Number = 0;
    local_500.bIsDynamicArray = false;
    local_500.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_500.StructElements.ArrayNum = 0;
    local_500.StructElements.ArrayMax = 0;
    local_500.Type = Float;
    local_500.DimensionType = Vector;
    local_500.field2_0x2.VectorElemCount = '\x04';
    local_78 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_500);
    if (local_500.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.StructElements.AllocatorInstance.Data);
    }
    local_340 = (undefined ***)0x0;
    local_350 = ParametrizedAddParm<UE::Math::TVector4<float>_>;
    local_358 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_368[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_70 = local_368;
    local_580.Name.ComparisonIndex.Value = 0;
    local_580.Name.Number = 0;
    local_580.bIsDynamicArray = false;
    local_580.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_580.StructElements.ArrayNum = 0;
    local_580.StructElements.ArrayMax = 0;
    local_580.Type = Float;
    local_580.DimensionType = Matrix;
    local_580.field2_0x2 = (FShaderValueType_u_2)0x4;
    local_580.MatrixColumnCount = '\x04';
    local_68 = (FShaderValueType *)FShaderValueType::GetOrCreate(&local_580);
    if (local_580.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_580.StructElements.AllocatorInstance.Data);
    }
    local_370 = (undefined ***)0x0;
    local_380 = ParametrizedAddParm<UE::Math::TMatrix<float>_>;
    local_388 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_398[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),void,FShaderParametersMetadataBuilder_&,wchar_t_const_*>
                   ::Call;
    local_60 = local_398;
    local_3b8._First = &local_128;
    local_3b8._Last = &local_58;
    TMap<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>_>
    ::
    TMap<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>_>
              (&AddParamFuncs,&local_3b8);
    if (local_398[0] != (code *)0x0) {
      pppuVar10 = &local_388;
      if (local_370 != (undefined ***)0x0) {
        pppuVar10 = local_370;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_368[0] != (code *)0x0) {
      pppuVar10 = &local_358;
      if (local_340 != (undefined ***)0x0) {
        pppuVar10 = local_340;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_338[0] != (code *)0x0) {
      pppuVar10 = &local_328;
      if (local_310 != (undefined ***)0x0) {
        pppuVar10 = local_310;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_308[0] != (code *)0x0) {
      pppuVar10 = &local_2f8;
      if (local_2e0 != (undefined ***)0x0) {
        pppuVar10 = local_2e0;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_2d8[0] != (code *)0x0) {
      pppuVar10 = &local_2c8;
      if (local_2b0 != (undefined ***)0x0) {
        pppuVar10 = local_2b0;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_2a8[0] != (code *)0x0) {
      pppuVar10 = &local_298;
      if (local_280 != (undefined ***)0x0) {
        pppuVar10 = local_280;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_278[0] != (code *)0x0) {
      pppuVar10 = &local_268;
      if (local_250 != (undefined ***)0x0) {
        pppuVar10 = local_250;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_248[0] != (code *)0x0) {
      pppuVar10 = &local_238;
      if (local_220 != (undefined ***)0x0) {
        pppuVar10 = local_220;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_218[0] != (code *)0x0) {
      pppuVar10 = &local_208;
      if (local_1f0 != (undefined ***)0x0) {
        pppuVar10 = local_1f0;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_1e8[0] != (code *)0x0) {
      pppuVar10 = &local_1d8;
      if (local_1c0 != (undefined ***)0x0) {
        pppuVar10 = local_1c0;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_1b8[0] != (code *)0x0) {
      pppuVar10 = &local_1a8;
      if (local_190 != (undefined ***)0x0) {
        pppuVar10 = local_190;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_188[0] != (code *)0x0) {
      pppuVar10 = &local_178;
      if (local_160 != (undefined ***)0x0) {
        pppuVar10 = local_160;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_158[0] != (code *)0x0) {
      pppuVar10 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar10 = local_130;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    atexit(`ComputeFramework::AddParamForType'::__l2::
           _dynamic_atexit_destructor_for__AddParamFuncs__);
    _Init_thread_footer(&::_TSS0);
    param_1 = local_588;
  }
  if ((*piVar12 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`ComputeFramework::AddParamForType'::__l2::
           _dynamic_atexit_destructor_for__AllElementNames__);
    _Init_thread_footer(&::_TSS1);
  }
  pFVar1 = param_3->ValueTypePtr;
  if (pFVar1->bIsDynamicArray == false) {
    if (pFVar1->Type == Struct) {
      local_3e0.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3e0.Members.ArrayNum = 0;
      local_3e0.Members.ArrayMax = 0;
      local_3e0.NextMemberOffset = 0;
      iVar4 = (pFVar1->StructElements).ArrayNum;
      this = (FName *)(pFVar1->StructElements).AllocatorInstance.Data;
      pFVar16 = this + (longlong)iVar4 * 2;
      while( true ) {
        if ((pFVar1->StructElements).ArrayNum != iVar4) {
          local_598[0] = 0;
          `TCheckedPointerIterator<FShaderValueType::FStructElement_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_598);
        }
        if (this == pFVar16) break;
        pFVar6 = (FScriptContainerElement *)::FName::ToString(this,&local_3a8);
        if ((AllElementNames.AllocatorInstance.Data <= pFVar6) &&
           (pFVar6 < AllElementNames.AllocatorInstance.Data +
                     (longlong)AllElementNames.ArrayMax * 0x10)) {
          local_5b0 = (longlong)AllElementNames.ArrayNum;
          local_5a8 = 0x10;
          local_5c0 = AllElementNames.AllocatorInstance.Data;
          local_5c8 = pFVar6;
          local_5b8 = (longlong)AllElementNames.ArrayMax;
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
        if (AllElementNames.ArrayNum == AllElementNames.ArrayMax) {
          AllElementNames.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&AllElementNames.AllocatorInstance,&AllElementNames.ArrayMax);
        }
        pFVar8 = AllElementNames.AllocatorInstance.Data + (longlong)AllElementNames.ArrayNum * 0x10;
        AllElementNames.ArrayNum = AllElementNames.ArrayNum + 1;
        *(undefined8 *)pFVar8 = 0;
        *(undefined8 *)pFVar8 = *(undefined8 *)pFVar6;
        *(undefined8 *)pFVar6 = 0;
        *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar6 + 8);
        *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar6 + 0xc);
        *(undefined8 *)(pFVar6 + 8) = 0;
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        uVar15 = AllElementNames.ArrayNum - 1;
        uVar5 = 0;
        if ((int)uVar15 < AllElementNames.ArrayNum) {
          uVar5 = ~uVar15 >> 0x1f;
        }
        if (uVar5 == 0) {
          local_5c8 = (FScriptContainerElement *)(longlong)(int)uVar15;
          local_5c0 = (FScriptContainerElement *)(longlong)AllElementNames.ArrayNum;
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
        if (*(int *)(AllElementNames.AllocatorInstance.Data +
                    (longlong)AllElementNames.ArrayNum * 0x10 + -8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)
                     (AllElementNames.AllocatorInstance.Data +
                     (longlong)AllElementNames.ArrayNum * 0x10 + -0x10);
        }
        AddParamForType(&local_3e0,pwVar11,(FShaderValueTypeHandle *)(this + 1),param_4);
        this = this + 2;
      }
      local_590 = FShaderParametersMetadataBuilder::Build(&local_3e0,ShaderParameterStruct,param_2);
      FShaderParametersMetadataBuilder::AddNestedStruct(local_588,param_2,local_590,Float);
      pFVar6 = (param_4->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_590) &&
         ((FScriptContainerElement *)&local_590 < pFVar6 + (longlong)param_4->ArrayMax * 8)) {
        local_5b0 = (longlong)param_4->ArrayNum;
        local_5a8 = 8;
        local_5c8 = (FScriptContainerElement *)&local_590;
        local_5c0 = pFVar6;
        local_5b8 = (longlong)param_4->ArrayMax;
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
      iVar4 = param_4->ArrayNum;
      if (iVar4 == param_4->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar4 + 1;
      *(FShaderParametersMetadata **)((param_4->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_590;
      if (local_3e0.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Members.AllocatorInstance.Data);
      }
    }
    else {
      uVar5 = ::GetTypeHash(pFVar1);
      iVar4 = TSet<TTuple<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_>,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FShaderValueType>
                        ((TSet<TTuple<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_>,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>,FDefaultSetAllocator>
                          *)&AddParamFuncs,uVar5,pFVar1);
      if (iVar4 != -1) {
        lVar13 = (longlong)iVar4 * 0x60 + AddParamFuncs._0_8_;
        puVar14 = (undefined8 *)(lVar13 + 0x20);
        if (lVar13 == 0) {
          puVar14 = (undefined8 *)0x0;
        }
        if (puVar14 != (undefined8 *)0x0) {
          local_3c8[0] = param_2;
          UE::Core::Private::Function::CheckCallable((void *)*puVar14);
          pcVar2 = (code *)*puVar14;
          plVar9 = puVar14 + 2;
          if ((longlong *)puVar14[5] != (longlong *)0x0) {
            plVar9 = (longlong *)puVar14[5];
          }
          uVar7 = (**(code **)(*plVar9 + 8))();
          (*pcVar2)(uVar7,local_588,local_3c8);
        }
      }
    }
  }
  else {
    FShaderParametersMetadataBuilder::AddRDGBufferSRV(param_1,param_2,L"StructuredBuffer",Float);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeDataInterface @ 1494cccf0

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeDataInterfaceBuffer @ 1494ccd00

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeDataInterfaceBuffer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeDataInterfaceDispatch @ 1494ccd10

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeDataInterfaceDispatch(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeDataProvider @ 1494ccd20

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeDataProvider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeFramework_init @ 1494ccd30

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeFramework_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeGraph @ 1494ccd40

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeGraph(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeGraphComponent @ 1494ccd50

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeGraphComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeGraphFromText @ 1494ccd60

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeGraphFromText(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeGraphInstance @ 1494ccd70

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeGraphInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeKernel @ 1494ccd80

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeKernel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeKernelPermutationSet @ 1494ccd90

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeKernelPermutationSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeKernelPermutationVector @ 1494ccda0

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeKernelPermutationVector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeKernelSource @ 1494ccdb0

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeKernelSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeComputeSource @ 1494ccdc0

void __cdecl EmptyLinkFunctionForGeneratedCodeComputeSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeShaderParamTypeDefinition @ 1494ccdd0

void __cdecl EmptyLinkFunctionForGeneratedCodeShaderParamTypeDefinition(void)

{
  return;
}

// FlushWork @ 1494cdb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ComputeFramework::FlushWork(FSceneInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FComputeGraphTaskWorker **ppFVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  FComputeGraphTaskWorker *pFVar7;
  undefined1 auStack_e8 [32];
  FRenderCommandPipe *local_c8 [2];
  FRenderCommandPipe **local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TArrayView<FRenderCommandPipe_*_const,int> local_a8;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  FSyncScope local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (FComputeFrameworkModule::ComputeSystem != (FComputeFrameworkSystem *)0x0) {
    ppFVar3 = TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
              ::Find((TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
                      *)&FComputeFrameworkModule::ComputeSystem->ComputeWorkers,param_1);
    if (ppFVar3 == (FComputeGraphTaskWorker **)0x0) {
      pFVar7 = (FComputeGraphTaskWorker *)0x0;
    }
    else {
      pFVar7 = *ppFVar3;
    }
    if (pFVar7 != (FComputeGraphTaskWorker *)0x0) {
      uStack_b0 = 1;
      local_c8[0] = &UE::RenderCommandPipe::SkeletalMesh;
      local_b8 = local_c8;
      local_a8._12_4_ = uStack_ac;
      local_a8.ArrayNum = 1;
      local_a8.DataPtr = local_b8;
      UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_28,&local_a8);
      local_98[0] = (code *)0x0;
      local_70 = FMemory::Malloc(0x20,8);
      *local_70 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`ComputeFramework::FlushWork'::`5'::<lambda_1>,1,1>
                           ::_vftable_;
      local_70[1] = (code *)pFVar7;
      *(FName *)(local_70 + 2) = param_2;
      local_70[3] = (code *)param_1;
      if (local_70 + 1 != (code **)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`ComputeFramework::FlushWork'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this = FRenderCommandList::GetInstanceTLS();
      if (this == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_ComputeFramework::FlushWork_::__l5::TSTR_ComputeFrameworkFlushCommand91>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_00 = FRenderCommandList::GetRenderThread(this);
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_70 = (code **)0x0;
        local_68._16_8_ = local_88[0];
        local_68._24_8_ = local_88[1];
        local_68._32_8_ = local_88[2];
        local_98[0] = (code *)0x0;
        local_38 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`ComputeFramework::FlushWork'::__l5::TSTR_ComputeFrameworkFlushCommand91>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar4);
        uVar6 = (ulonglong)local_38;
        if ((2 < uVar6) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            ppcVar5 = (code **)(local_68 + 0x10);
            if (local_40 != (code **)0x0) {
              ppcVar5 = local_40;
            }
            (**(code **)(*ppcVar5 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        ppcVar5 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar5 = local_70;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
      UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_28);
    }
  }
  return;
}

// GetTypeHash @ 1494d3080

uint __cdecl GetTypeHash(FShaderValueType *param_1)

{
  EShaderFundamentalType EVar1;
  EShaderFundamentalDimensionType EVar2;
  byte bVar3;
  FName FVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  EVar1 = param_1->Type;
  if (EVar1 == Struct) {
    FVar4 = param_1->Name;
    uVar7 = GetTypeHash(FVar4.ComparisonIndex.Value);
    uVar12 = (param_1->StructElements).ArrayNum;
    uVar7 = uVar7 + FVar4.Number;
    uVar11 = 4 - uVar7 ^ uVar7 >> 0xd;
    uVar8 = (-0x61c88647 - uVar7) - uVar11 ^ uVar11 << 8;
    uVar9 = (uVar7 - uVar8) - uVar11 ^ uVar8 >> 0xd;
    uVar11 = (uVar11 - uVar9) - uVar8 ^ uVar9 >> 0xc;
    uVar7 = (uVar8 - uVar11) - uVar9 ^ uVar11 << 0x10;
    uVar8 = (uVar9 - uVar7) - uVar11 ^ uVar7 >> 5;
    uVar9 = (uVar11 - uVar8) - uVar7 ^ uVar8 >> 3;
    uVar7 = (uVar7 - uVar9) - uVar8 ^ uVar9 << 10;
    uVar8 = ((uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xf) - uVar12 ^ uVar12 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar12 ^ uVar8 << 8;
    uVar9 = (uVar12 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar9 ^ uVar8 << 0x10;
    pFVar13 = (param_1->StructElements).AllocatorInstance.Data;
    uVar9 = (uVar9 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar9 ^ uVar8 << 10;
    uVar7 = (uVar9 - uVar7) - uVar8 ^ uVar7 >> 0xf;
    local_res10 = pFVar13 + (longlong)(int)uVar12 * 0x10;
    while( true ) {
      pFVar6 = local_res10;
      if ((param_1->StructElements).ArrayNum != uVar12) {
        `TCheckedPointerIterator<FShaderValueType::FStructElement_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar6) break;
      uVar5 = *(undefined8 *)pFVar13;
      uVar8 = GetTypeHash((FNameEntryId)(uint)uVar5);
      uVar8 = uVar8 + (int)((ulonglong)uVar5 >> 0x20);
      uVar7 = uVar7 - uVar8 ^ uVar8 >> 0xd;
      uVar9 = (-0x61c88647 - uVar8) - uVar7 ^ uVar7 << 8;
      uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 0xd;
      uVar7 = (uVar7 - uVar8) - uVar9 ^ uVar8 >> 0xc;
      uVar11 = (uVar9 - uVar7) - uVar8 ^ uVar7 << 0x10;
      uVar9 = (uVar8 - uVar11) - uVar7 ^ uVar11 >> 5;
      uVar8 = (uVar7 - uVar9) - uVar11 ^ uVar9 >> 3;
      uVar11 = (uVar11 - uVar8) - uVar9 ^ uVar8 << 10;
      uVar7 = GetTypeHash(*(FShaderValueType **)(pFVar13 + 8));
      uVar11 = ((uVar9 - uVar11) - uVar8 ^ uVar11 >> 0xf) - uVar7 ^ uVar7 >> 0xd;
      uVar8 = (-0x61c88647 - uVar11) - uVar7 ^ uVar11 << 8;
      uVar9 = (uVar7 - uVar8) - uVar11 ^ uVar8 >> 0xd;
      uVar11 = (uVar11 - uVar9) - uVar8 ^ uVar9 >> 0xc;
      uVar7 = (uVar8 - uVar11) - uVar9 ^ uVar11 << 0x10;
      uVar8 = (uVar9 - uVar7) - uVar11 ^ uVar7 >> 5;
      uVar9 = (uVar11 - uVar8) - uVar7 ^ uVar8 >> 3;
      uVar7 = (uVar7 - uVar9) - uVar8 ^ uVar9 << 10;
      uVar7 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xf;
      pFVar13 = pFVar13 + 0x10;
    }
  }
  else {
    EVar2 = param_1->DimensionType;
    iVar10 = (uint)EVar1 - (uint)EVar2;
    uVar12 = iVar10 * 0x100 ^ 0x9e3779b9 - EVar1;
    uVar8 = (EVar2 - uVar12) - iVar10 ^ uVar12 >> 0xd;
    uVar7 = (iVar10 - uVar8) - uVar12 ^ uVar8 >> 0xc;
    uVar12 = (uVar12 - uVar7) - uVar8 ^ uVar7 << 0x10;
    uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar12 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar12 ^ uVar8 >> 3;
    uVar12 = (uVar12 - uVar7) - uVar8 ^ uVar7 << 10;
    uVar7 = (uVar8 - uVar12) - uVar7 ^ uVar12 >> 0xf;
    if (EVar2 == Vector) {
      bVar3 = (param_1->field2_0x2).VectorElemCount;
      iVar10 = uVar7 - bVar3;
      uVar7 = 0x9e3779b9 - uVar7;
      uVar12 = iVar10 * 0x100;
    }
    else {
      if (EVar2 != Matrix) goto LAB_1494d340f;
      iVar10 = uVar7 - (param_1->field2_0x2).VectorElemCount;
      uVar7 = 0x9e3779b9 - uVar7 ^ iVar10 * 0x100;
      uVar8 = ((param_1->field2_0x2).VectorElemCount - uVar7) - iVar10 ^ uVar7 >> 0xd;
      uVar12 = (iVar10 - uVar8) - uVar7 ^ uVar8 >> 0xc;
      uVar7 = (uVar7 - uVar12) - uVar8 ^ uVar12 << 0x10;
      uVar8 = (uVar8 - uVar12) - uVar7 ^ uVar7 >> 5;
      uVar12 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 3;
      bVar3 = param_1->MatrixColumnCount;
      uVar7 = (uVar7 - uVar12) - uVar8 ^ uVar12 << 10;
      uVar12 = (uVar8 - uVar7) - uVar12 ^ uVar7 >> 0xf;
      iVar10 = uVar12 - bVar3;
      uVar7 = iVar10 * 0x100;
      uVar12 = 0x9e3779b9 - uVar12;
    }
    uVar7 = uVar7 ^ uVar12;
    uVar9 = (bVar3 - uVar7) - iVar10 ^ uVar7 >> 0xd;
    uVar12 = (iVar10 - uVar9) - uVar7 ^ uVar9 >> 0xc;
    uVar8 = (uVar7 - uVar12) - uVar9 ^ uVar12 << 0x10;
    uVar9 = (uVar9 - uVar12) - uVar8 ^ uVar8 >> 5;
    uVar7 = (uVar12 - uVar9) - uVar8 ^ uVar9 >> 3;
    uVar12 = (uVar8 - uVar7) - uVar9 ^ uVar7 << 10;
    uVar7 = (uVar9 - uVar12) - uVar7 ^ uVar12 >> 0xf;
  }
LAB_1494d340f:
  iVar10 = uVar7 - param_1->bIsDynamicArray;
  uVar8 = 0x9e3779b9 - uVar7 ^ iVar10 * 0x100;
  uVar12 = (param_1->bIsDynamicArray - uVar8) - iVar10 ^ uVar8 >> 0xd;
  uVar7 = (iVar10 - uVar12) - uVar8 ^ uVar12 >> 0xc;
  uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 0x10;
  uVar12 = (uVar12 - uVar7) - uVar8 ^ uVar8 >> 5;
  uVar7 = (uVar7 - uVar12) - uVar8 ^ uVar12 >> 3;
  uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 10;
  return (uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xf;
}

// IsDeferredCompilation @ 1494d46d0

bool __cdecl ComputeFramework::IsDeferredCompilation(void)

{
  return false;
}

// IsEnabled @ 1494d46e0

bool __cdecl ComputeFramework::IsEnabled(void)

{
  if ((0 < GComputeFrameworkEnable) &&
     (FComputeFrameworkModule::ComputeSystem != (FComputeFrameworkSystem *)0x0)) {
    return true;
  }
  return false;
}

// IsSupported @ 1494d4750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl ComputeFramework::IsSupported(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x1ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsComputeFramework;
}

// RebuildComputeGraphs @ 1494d5000

void __cdecl ComputeFramework::RebuildComputeGraphs(void)

{
  return;
}

// TickCompilation @ 1494da360

void __cdecl ComputeFramework::TickCompilation(float param_1)

{
  return;
}

// Z_Construct_UClass_UBufferDataProvider_NoRegister @ 1494db4a0

UClass * __cdecl Z_Construct_UClass_UBufferDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBufferDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"BufferDataProvider",
               &Z_Registration_Info_UClass_UBufferDataProvider.InnerSingleton,
               UBufferDataProvider::StaticRegisterNativesUBufferDataProvider,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBufferDataProvider>,
               InternalVTableHelperCtorCaller<UBufferDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBufferDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UComputeDataInterfaceBuffer_NoRegister @ 1494db560

UClass * __cdecl Z_Construct_UClass_UComputeDataInterfaceBuffer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataInterfaceBuffer",
               &Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.InnerSingleton,
               UComputeDataInterfaceBuffer::StaticRegisterNativesUComputeDataInterfaceBuffer,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeDataInterfaceBuffer>,
               InternalVTableHelperCtorCaller<UComputeDataInterfaceBuffer>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.InnerSingleton;
}

// Z_Construct_UClass_UComputeDataInterfaceDispatch_NoRegister @ 1494db620

UClass * __cdecl Z_Construct_UClass_UComputeDataInterfaceDispatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataInterfaceDispatch",
               &Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.InnerSingleton,
               UComputeDataInterfaceDispatch::StaticRegisterNativesUComputeDataInterfaceDispatch,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeDataInterfaceDispatch>,
               InternalVTableHelperCtorCaller<UComputeDataInterfaceDispatch>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.InnerSingleton;
}

// Z_Construct_UClass_UComputeGraphComponent_NoRegister @ 1494db6e0

UClass * __cdecl Z_Construct_UClass_UComputeGraphComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeGraphComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeGraphComponent",
               &Z_Registration_Info_UClass_UComputeGraphComponent.InnerSingleton,
               UComputeGraphComponent::StaticRegisterNativesUComputeGraphComponent,0xe0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeGraphComponent>,
               InternalVTableHelperCtorCaller<UComputeGraphComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeGraphComponent.InnerSingleton;
}

// Z_Construct_UClass_UComputeGraphFromText_NoRegister @ 1494db7a0

UClass * __cdecl Z_Construct_UClass_UComputeGraphFromText_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeGraphFromText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeGraphFromText",
               &Z_Registration_Info_UClass_UComputeGraphFromText.InnerSingleton,
               UComputeGraphFromText::StaticRegisterNativesUComputeGraphFromText,0xe0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UComputeGraphFromText>,
               InternalVTableHelperCtorCaller<UComputeGraphFromText>,local_res8,
               UComputeGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeGraphFromText.InnerSingleton;
}

// Z_Construct_UClass_UComputeKernelSourceWithText_NoRegister @ 1494db860

UClass * __cdecl Z_Construct_UClass_UComputeKernelSourceWithText_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeKernelSourceWithText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeKernelSourceWithText",
               &Z_Registration_Info_UClass_UComputeKernelSourceWithText.InnerSingleton,
               UComputeKernelSourceWithText::StaticRegisterNativesUComputeKernelSourceWithText,0xa8,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeKernelSourceWithText>,
               InternalVTableHelperCtorCaller<UComputeKernelSourceWithText>,local_res8,
               UComputeKernelSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeKernelSourceWithText.InnerSingleton;
}

// Z_Construct_UClass_UDispatchDataProvider_NoRegister @ 1494db920

UClass * __cdecl Z_Construct_UClass_UDispatchDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDispatchDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"DispatchDataProvider",
               &Z_Registration_Info_UClass_UDispatchDataProvider.InnerSingleton,
               UDispatchDataProvider::StaticRegisterNativesUDispatchDataProvider,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDispatchDataProvider>,
               InternalVTableHelperCtorCaller<UDispatchDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDispatchDataProvider.InnerSingleton;
}

// Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags @ 1494db9e0

UEnum * __cdecl Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags(void)

{
  if (Z_Registration_Info_UEnum_EComputeKernelFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EComputeKernelFlags.InnerSingleton,
               &Z_Construct_UEnum_ComputeFramework_EComputeKernelFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EComputeKernelFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FComputeKernelPermutationVector @ 1494dba20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComputeKernelPermutationVector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComputeKernelPermutationVector.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComputeKernelPermutationVector.InnerSingleton,
               &Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComputeKernelPermutationVector.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComputeKernelPermutationVector.InnerSingleton;
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

// Z_Construct_UScriptStruct_FShaderValueContainer @ 1494dbaa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FShaderValueContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FShaderValueContainer.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FShaderValueContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FShaderValueContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FShaderValueContainer.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FShaderValueContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FShaderValueType @ 1494dbb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FShaderValueType(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FShaderValueType.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FShaderValueType.InnerSingleton,
               &Z_Construct_UScriptStruct_FShaderValueType_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FShaderValueType.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FShaderValueType.InnerSingleton;
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

// IMPLEMENT_MODULE_ComputeFramework @ 1494dc1c0

void __cdecl IMPLEMENT_MODULE_ComputeFramework(void)

{
  return;
}

// AllComputeKernelShaderMaps'' @ 150416380

void __cdecl
`dynamic_atexit_destructor_for_'FComputeKernelShaderMap::AllComputeKernelShaderMaps__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FComputeKernelShaderMap::AllComputeKernelShaderMaps.AllocatorInstance.Data;
  if (FComputeKernelShaderMap::AllComputeKernelShaderMaps.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FComputeKernelShaderMap::AllComputeKernelShaderMaps.AllocatorInstance.Data !=
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

// GIdToComputeKernelShaderMap'' @ 1504163a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'FComputeKernelShaderMap::GIdToComputeKernelShaderMap__(void)

{
  void *pvVar1;
  EObjectFlags *pEVar2;
  longlong lVar3;
  
  lVar3 = 0x9b;
  pEVar2 = &Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::StructParams.ObjectFlags;
  do {
    lVar3 = lVar3 + -1;
    pEVar2[-0x12] = 0;
    pvVar1 = *(void **)(pEVar2 + -0x14);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(pEVar2 + -0x24));
    pEVar2 = pEVar2 + -0x14;
  } while (lVar3 != 0);
  return;
}

// ShaderTypeRegistration'' @ 150416400

void __cdecl `dynamic_atexit_destructor_for_'FComputeKernelShader::ShaderTypeRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AddParamFuncs'' @ 150416410

void __cdecl
`ComputeFramework::AddParamForType'::__l2::_dynamic_atexit_destructor_for__AddParamFuncs__(void)

{
  AddParamFuncs._72_4_ = 0;
  if (AddParamFuncs._64_8_ != 0) {
    FMemory::Free((void *)AddParamFuncs._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&AddParamFuncs);
  return;
}

// `dynamic_atexit_destructor_for_'AllElementNames'' @ 150416450

void __cdecl
`ComputeFramework::AddParamForType'::__l2::_dynamic_atexit_destructor_for__AllElementNames__(void)

{
  DestructItems<FString,int>
            ((FString *)AllElementNames.AllocatorInstance.Data,AllElementNames.ArrayNum);
  if (AllElementNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(AllElementNames.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarComputeFrameworkDeferredCompilation'' @ 150416490

void __cdecl _dynamic_atexit_destructor_for__CVarComputeFrameworkDeferredCompilation__(void)

{
  CVarComputeFrameworkDeferredCompilation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarComputeFrameworkDeferredCompilation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarComputeFrameworkEnable'' @ 1504164b0

void __cdecl _dynamic_atexit_destructor_for__CVarComputeFrameworkEnable__(void)

{
  CVarComputeFrameworkEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarComputeFrameworkEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarComputeFrameworkSortSubmit'' @ 1504164d0

void __cdecl _dynamic_atexit_destructor_for__CVarComputeFrameworkSortSubmit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarComputeFrameworkSortSubmit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarComputeFrameworkTriggerGPUCapture'' @ 1504164f0

void __cdecl _dynamic_atexit_destructor_for__CVarComputeFrameworkTriggerGPUCapture__(void)

{
  CVarComputeFrameworkTriggerGPUCapture._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarComputeFrameworkTriggerGPUCapture);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowComputeKernelShaderWarnings'' @ 150416510

void __cdecl _dynamic_atexit_destructor_for__CVarShowComputeKernelShaderWarnings__(void)

{
  CVarShowComputeKernelShaderWarnings._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShowComputeKernelShaderWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'CmdRebuildComputeGraphs'' @ 150416530

void __cdecl _dynamic_atexit_destructor_for__CmdRebuildComputeGraphs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdRebuildComputeGraphs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150416550

void __cdecl
```FComputeGraphTaskWorker::SubmitWork'::__l7::Desc::operator()<>'::__l3::<lambda_1>::operator()<>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150416557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150416570

void __cdecl
```FComputeGraphTaskWorker::SubmitWork'::__l58::<lambda_3>::
operator()<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>'::__l3::<lambda_2>::
operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[9],wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&>_>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150416577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_ComputeFramework_ExecuteBatches'' @ 150416590

void __cdecl _dynamic_atexit_destructor_for__GPUStat_ComputeFramework_ExecuteBatches__(void)

{
  GPUStat_ComputeFramework_ExecuteBatches._104_4_ = 0;
  if (GPUStat_ComputeFramework_ExecuteBatches._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_ComputeFramework_ExecuteBatches._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_ComputeFramework_ExecuteBatches.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterComputeFrameworkObjectVersion'' @ 1504165d0

void __cdecl _dynamic_atexit_destructor_for__GRegisterComputeFrameworkObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterComputeFrameworkObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GloballyKnownValueTypes'' @ 1504165f0

void __cdecl _dynamic_atexit_destructor_for__GloballyKnownValueTypes__(void)

{
  GloballyKnownValueTypes.HashSize = 0;
  if (GloballyKnownValueTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GloballyKnownValueTypes.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FShaderValueTypeHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FShaderValueTypeHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GloballyKnownValueTypes.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'GloballyKnownValueTypesLock'' @ 150416630

void __cdecl _dynamic_atexit_destructor_for__GloballyKnownValueTypesLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&GloballyKnownValueTypesLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000150416650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&GloballyKnownValueTypesLock);
    return;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogComputeFramework'' @ 150416690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogComputeFramework__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogComputeFramework);
  return;
}

// `dynamic_atexit_destructor_for_'LogComputeKernelShaderCompiler'' @ 1504166b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogComputeKernelShaderCompiler__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogComputeKernelShaderCompiler);
  return;
}

// `dynamic_atexit_destructor_for_'ResTypeStringMap'' @ 1504166d0

void __cdecl _dynamic_atexit_destructor_for__ResTypeStringMap__(void)

{
  if (ResTypeStringMap[6]._8_8_ != 0) {
    FMemory::Free((void *)ResTypeStringMap[6]._8_8_);
  }
  if (ResTypeStringMap[5]._8_8_ != 0) {
    FMemory::Free((void *)ResTypeStringMap[5]._8_8_);
  }
  if (ResTypeStringMap[4]._8_8_ != 0) {
    FMemory::Free((void *)ResTypeStringMap[4]._8_8_);
  }
  if (ResTypeStringMap[3]._8_8_ != 0) {
    FMemory::Free((void *)ResTypeStringMap[3]._8_8_);
  }
  if (ResTypeStringMap[2]._8_8_ != 0) {
    FMemory::Free((void *)ResTypeStringMap[2]._8_8_);
  }
  if (ResTypeStringMap[1]._8_8_ != 0) {
    FMemory::Free((void *)ResTypeStringMap[1]._8_8_);
  }
  if (ResTypeStringMap[0]._8_8_ != 0) {
    FMemory::Free((void *)ResTypeStringMap[0]._8_8_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150416760

void __cdecl
`FBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150416780

void __cdecl
`FDataInterfaceDispatchParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDataInterfaceDispatchParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1504167a0

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
`FComputeKernelShader::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'ValueTypeDeclPattern'' @ 1504167c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
`FShaderValueType::FromString'::__l2::_dynamic_atexit_destructor_for__ValueTypeDeclPattern__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (ValueTypeDeclPattern.Implementation.SharedReferenceCount.ReferenceController);
  return;
}

